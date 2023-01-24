# ifndef MONITOR_H
# define MONITOR_H
#include "lib/channel.h"
#include <queue>
class time_message
{
    public:
    long long int time;
    const ghost::Message &msg;
    time_message(long long int time,const ghost::Message &msg):time(time),msg(msg){}
};
class monitor
{
    public:
    monitor(){print_index=0;}
    void set_message(const ghost::Message &msg);
    void show_all_message()
    {
        for(;print_index<msg_queue.size();print_index++)
        {
            std::cout<<msg_queue[print_index].time<<" "<<msg_queue[print_index].msg<<std::endl;
        }
    }
    private:
    std::vector<time_message> msg_queue;
    int print_index;
    
};
# endif
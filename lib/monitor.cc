#include "lib/monitor.h"
void monitor::set_message(const ghost::Message &msg)
{
    static absl::Time begin= absl::Now();
    absl::Time end=absl::Now();
    auto cost=absl::ToInt64Nanoseconds(end-begin);
    msg_queue.push_back({cost,msg});
    
}
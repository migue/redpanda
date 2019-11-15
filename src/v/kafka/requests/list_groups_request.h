#pragma once

#include "kafka/requests/request_context.h"
#include "kafka/requests/response.h"
#include "seastarx.h"

#include <seastar/core/future.hh>

namespace kafka {

class list_groups_api final {
public:
    static constexpr const char* name = "list groups";
    static constexpr api_key key = api_key(16);
    static constexpr api_version min_supported = api_version(0);
    static constexpr api_version max_supported = api_version(2);

    static future<response_ptr> process(request_context&&, smp_service_group);
};

} // namespace kafka
// =============================================================================
// PROC ADDRESS SUPPORT — see proc_address_support.h
// =============================================================================

#include "proc_address_support.h"

namespace proc_address {

std::set<std::string> missing;
std::set<std::string> asked;

} // namespace proc_address

namespace {

// Something to point at; gl_api only stores the address.
void entry_point(void) {}

} // namespace

extern "C" void *proc_address_support_get(const char *name) {
    proc_address::asked.insert(name);
    if (proc_address::missing.count(name) != 0)
        return nullptr;
    return (void *)entry_point;
}

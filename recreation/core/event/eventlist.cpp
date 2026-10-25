#include "core/event/eventlist.h"

namespace nocturne::core {

// deferred: emptying the events, counters, timers, actor variables, sounds and game flags, with
//   the functions that read them
// nocedit 0x004aaa50
CEventList::CEventList(const SEventListOwners &owners) : owners_(owners) {}

} // namespace nocturne::core

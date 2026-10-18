#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"
#include "shape/edittool/picklist.h"
#include "shape/edittool/strlist.h"
#include "support/fwd.h"

namespace nocturne::shape {

// What the file selection dialog lists files with, builds its pick list from, and reports an
// empty listing in.
struct SFileSelectionOwners {
    const SPickListOwners &pick_list;
    engine::CPod *pod;
    platform::IFileSystem &file_system;
    const CStrList::LocalTime &local_time;
    const support::CNewMsg &messages;
};

} // namespace nocturne::shape

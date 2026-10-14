#pragma once

#include "shape/edittool/strlist.h"

#include <cstddef>
#include <string>
#include <vector>

namespace nocturne::shape {

// The list's strings in order.
inline std::vector<std::string> getItems(const CStrList &list) {
    std::vector<std::string> items;
    items.reserve(static_cast<std::size_t>(list.getItemCount()));
    for (int i = 0; i < list.getItemCount(); ++i) {
        items.push_back(list.getStringAt(i));
    }
    return items;
}

} // namespace nocturne::shape

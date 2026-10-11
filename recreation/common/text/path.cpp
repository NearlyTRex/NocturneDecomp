#include "common/text/path.h"

#include <algorithm>
#include <cstddef>

namespace nocturne::common {

std::string toPortablePath(std::string_view path) {
    std::string portable(path);
    std::ranges::replace(portable, '\\', '/');
    return portable;
}

std::string_view pathLeaf(std::string_view path) {
    const std::size_t separator = path.find_last_of("\\/");
    return separator == std::string_view::npos ? path : path.substr(separator + 1);
}

} // namespace nocturne::common

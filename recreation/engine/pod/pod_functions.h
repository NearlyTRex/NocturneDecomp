#pragma once

#include "engine/fwd.h"

#include <cstddef>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// The names, pod by pod, that end in extension (in upper case, as the pods store them); a name
// an earlier pod also holds is skipped. At most max_results, each cut to result_string_length - 1
// characters as the caller's buffer held them.
[[nodiscard]] std::vector<std::string> findFilesByExtension(const CPod &pod,
                                                            std::string_view extension,
                                                            std::size_t max_results,
                                                            std::size_t result_string_length);

} // namespace nocturne::engine

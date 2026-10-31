#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"

#include <cstddef>
#include <memory>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {

// The light filters the set's spotlights have loaded, each once, by file name.
class CFilterCache {
public:
    // The most filters a scene can load.
    static constexpr std::size_t kMaxFilters = 64;

    explicit CFilterCache(const engine::CDosIo &dosio);
    ~CFilterCache();
    CFilterCache(const CFilterCache &) = delete;
    CFilterCache &operator=(const CFilterCache &) = delete;
    CFilterCache(CFilterCache &&) = delete;
    CFilterCache &operator=(CFilterCache &&) = delete;

    void free();
    // The filter of that name, compared exactly, loading it the first time; a blended filter is
    // faded towards its edges as it loads. Loading more than kMaxFilters is fatal.
    CDemonFilter *getFilter(std::string_view filter_name, int blend_filter);
    // Null when it hasn't been loaded.
    [[nodiscard]] CDemonFilter *findFilter(std::string_view filter_name) const;
    [[nodiscard]] std::size_t getFilterCount() const;

private:
    const engine::CDosIo &dosio_;
    std::vector<std::pair<std::string, std::unique_ptr<CDemonFilter>>> filters_;
};

} // namespace nocturne::core

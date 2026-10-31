#include "core/dfilter/filtercache.h"

#include "common/error/error.h"
#include "core/dfilter/demonfilter.h"

#include <algorithm>
#include <cstddef>
#include <memory>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

// How bright a blended filter's centre is kept as it fades.
constexpr float kBlendScale = 1.333F;

} // namespace

// nocedit 0x0046ffd0
CFilterCache::CFilterCache(const engine::CDosIo &dosio) : dosio_(dosio) {}

// nocedit 0x0046ffe0
CFilterCache::~CFilterCache() = default;

// nocedit 0x00470000
void CFilterCache::free() {
    filters_.clear();
}

// nocedit 0x00470060
CDemonFilter *CFilterCache::getFilter(std::string_view filter_name, int blend_filter) {
    if (CDemonFilter *found = findFilter(filter_name)) {
        return found;
    }
    if (filters_.size() >= kMaxFilters) {
        common::displayErrorAndQuit("CFilterCache::getFilter - Too many filters");
    }
    auto filter = std::make_unique<CDemonFilter>();
    filter->load(dosio_, filter_name);
    if (blend_filter != 0) {
        filter->init(kBlendScale, 1);
    }
    return filters_.emplace_back(std::string(filter_name), std::move(filter)).second.get();
}

// nocedit 0x004701a0
CDemonFilter *CFilterCache::findFilter(std::string_view filter_name) const {
    const auto found = std::ranges::find(
        filters_, filter_name, [](const auto &entry) { return std::string_view(entry.first); });
    return found == filters_.end() ? nullptr : found->second.get();
}

std::size_t CFilterCache::getFilterCount() const {
    return filters_.size();
}

} // namespace nocturne::core

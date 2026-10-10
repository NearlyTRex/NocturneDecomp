#include "core/dfilter/filtercache.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CFilterCache, IsConcrete) {
    static_assert(!std::is_abstract_v<CFilterCache>);
}

TEST(CFilterCache, Constructors) {
    static_assert(std::is_constructible_v<CFilterCache>);
}

TEST(CFilterCache, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFilterCache::free), void (CFilterCache::*)()>);
    static_assert(std::is_same_v<decltype(&CFilterCache::getFilter),
                                 CDemonFilter *(CFilterCache::*)(char *, int)>);
    static_assert(std::is_same_v<decltype(&CFilterCache::findFilter),
                                 CDemonFilter *(CFilterCache::*)(char *)>);
}

} // namespace
} // namespace nocturne::core

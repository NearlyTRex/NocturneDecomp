#include "common/error/fatalerror.h"
#include "core/dfilter/demonfilter.h"
#include "core/dfilter/filtercache.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
#include <string>
#include <type_traits>

namespace nocturne::core {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CFilterCache, IsConcrete) {
    static_assert(!std::is_abstract_v<CFilterCache>);
}

TEST(CFilterCache, Constructors) {
    static_assert(std::is_constructible_v<CFilterCache, const engine::CDosIo &>);
    static_assert(!std::is_default_constructible_v<CFilterCache>);
}

TEST(CFilterCache, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFilterCache::free), void (CFilterCache::*)()>);
    static_assert(std::is_same_v<decltype(&CFilterCache::getFilter),
                                 CDemonFilter *(CFilterCache::*)(std::string_view, int)>);
    static_assert(std::is_same_v<decltype(&CFilterCache::findFilter),
                                 CDemonFilter *(CFilterCache::*)(std::string_view) const>);
}

// Filters of 64 by 64 levels, every byte 0x80 on disk.
class CFilterCacheTest : public engine::CPodFixture {
protected:
    void givenFilter(const std::string &name) {
        givenFile("art\\" + name, std::string(std::size_t{64} * 64, '\x80'));
    }

    CFilterCache cache_{dosio_};
};

TEST_F(CFilterCacheTest, AFilterIsLoadedOnceAndFoundByItsExactName) {
    givenFilter("beam.flt");
    EXPECT_EQ(cache_.findFilter("beam.flt"), nullptr);
    CDemonFilter *beam = cache_.getFilter("beam.flt", 0);
    ASSERT_NE(beam, nullptr);
    EXPECT_EQ(beam->getName(), "beam.flt");
    EXPECT_EQ(beam->getData()[0], 0x20);
    EXPECT_EQ(cache_.getFilter("beam.flt", 1), beam);
    EXPECT_EQ(cache_.findFilter("beam.flt"), beam);
    EXPECT_EQ(cache_.findFilter("BEAM.FLT"), nullptr);
    EXPECT_EQ(cache_.getFilterCount(), 1U);
}

// A blended filter fades to nothing at its edges as it loads.
TEST_F(CFilterCacheTest, ABlendedFilterFadesToItsEdges) {
    givenFilter("soft.flt");
    const CDemonFilter *soft = cache_.getFilter("soft.flt", 1);
    EXPECT_EQ(soft->getData()[0], 0);
    EXPECT_EQ(soft->getData()[(32 * 64) + 32], 42);
}

TEST_F(CFilterCacheTest, FreeingForgetsEveryFilter) {
    givenFilter("beam.flt");
    static_cast<void>(cache_.getFilter("beam.flt", 0));
    cache_.free();
    EXPECT_EQ(cache_.findFilter("beam.flt"), nullptr);
    EXPECT_EQ(cache_.getFilterCount(), 0U);
}

TEST_F(CFilterCacheTest, MoreThanSixtyFourFiltersIsFatal) {
    for (int i = 0; i <= 64; ++i) {
        givenFilter(std::format("f{}.flt", i));
    }
    for (int i = 0; i < 64; ++i) {
        static_cast<void>(cache_.getFilter(std::format("f{}.flt", i), 0));
    }
    EXPECT_THAT(
        [this] { static_cast<void>(cache_.getFilter("f64.flt", 0)); },
        ThrowsMessage<common::CFatalError>(StrEq("CFilterCache::getFilter - Too many filters")));
}

} // namespace
} // namespace nocturne::core

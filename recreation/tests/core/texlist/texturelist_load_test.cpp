#include "common/error/fatalerror.h"
#include "core/texlist/texturelist.h"
#include "platform/mrgltexturebasic.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::IsEmpty;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

class CTextureListLoadTest : public engine::CPodFixture {
protected:
    std::vector<std::string> names() const {
        std::vector<std::string> loaded;
        for (const platform::SMRGLTextureBasic &entry : list_.getTextureEntries()) {
            loaded.push_back(entry.texture_name);
        }
        return loaded;
    }

    void expectFatal(const std::string &filename, const std::string &message) {
        EXPECT_THAT([&] { list_.load(filename); },
                    ThrowsMessage<common::CFatalError>(StrEq(message)));
    }

    CTextureList list_{dosio_};
};

TEST_F(CTextureListLoadTest, ReadsEachNameUpperCasedAndItsNumber) {
    givenFile("data\\junk.tex", "3\nplatea.raw\nSand00.RAW,12\nsand01.raw,x\n");
    list_.load("junk.jnk");
    EXPECT_THAT(names(), ElementsAre("PLATEA.RAW", "SAND00.RAW", "SAND01.RAW"));
    EXPECT_THAT(list_.getTextureValues(), ElementsAre(0, 12, 0));
}

TEST_F(CTextureListLoadTest, EverythingFromTheFirstDotIsReplaced) {
    givenFile("data\\junk.tex", "1\na.raw\n");
    list_.load("junk.old.jnk");
    EXPECT_THAT(names(), ElementsAre("A.RAW"));
}

TEST_F(CTextureListLoadTest, MissingLinesRepeatTheNameBeforeThemWithZero) {
    givenFile("data\\junk.tex", "3\nsand.raw,5\n");
    list_.load("junk.jnk");
    EXPECT_THAT(names(), ElementsAre("SAND.RAW", "SAND.RAW", "SAND.RAW"));
    EXPECT_THAT(list_.getTextureValues(), ElementsAre(5, 0, 0));
}

TEST_F(CTextureListLoadTest, AFirstMissingLineTakesTheFilesName) {
    givenFile("data\\junk.tex", "1\n");
    list_.load("junk.jnk");
    EXPECT_THAT(names(), ElementsAre("JUNK.TEX"));
}

TEST_F(CTextureListLoadTest, ANegativeCountIsNoTextures) {
    givenFile("data\\junk.tex", "-2\na.raw\n");
    list_.load("junk.jnk");
    EXPECT_THAT(list_.getTextureEntries(), IsEmpty());
}

TEST_F(CTextureListLoadTest, AMissingCountKeepsTheNumberOfTextures) {
    givenFile("data\\one.tex", "1\na.raw\n");
    givenFile("data\\two.tex", "b.raw\n");
    list_.load("one.jnk");
    list_.load("two.jnk");
    EXPECT_THAT(names(), ElementsAre("B.RAW"));
}

TEST_F(CTextureListLoadTest, ANameWithoutADotIsFatal) {
    expectFatal("junk", "CTextureList::load - No extension found");
}

TEST_F(CTextureListLoadTest, AMissingFileIsFatal) {
    expectFatal("junk.jnk", "CTextureList::load - Bad filename!");
}

} // namespace
} // namespace nocturne::core

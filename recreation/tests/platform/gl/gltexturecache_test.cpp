#include "common/render/renderstate.h"
#include "platform/gl/gltexturecache.h"
#include "tests/mocks/platform/glrecorder.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstring>
#include <optional>
#include <stdexcept>
#include <string>
#include <vector>

namespace nocturne::platform::gl {
namespace {

using ::testing::ElementsAre;

std::vector<std::uint32_t> image(int dimension) {
    return std::vector<std::uint32_t>(static_cast<std::size_t>(dimension * dimension), 0xFF204060U);
}

common::SPipelineState filtered(common::ETextureFilter min, common::ETextureFilter mag) {
    return {.min_filter = min, .mag_filter = mag};
}

const common::SPipelineState kNearest =
    filtered(common::ETextureFilter::Nearest, common::ETextureFilter::Nearest);

std::vector<GLuint> deletedNames(const SGlCall &call) {
    std::vector<GLuint> names(call.data.size() / sizeof(GLuint));
    std::memcpy(names.data(), call.data.data(), call.data.size());
    return names;
}

TEST(CGlTextureCache, FindsNothingBeforeAnUpload) {
    const CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    EXPECT_EQ(cache.find("ROCK.RAW", 64), 0U);
    EXPECT_TRUE(gl.getCalls().empty());
}

TEST(CGlTextureCache, UploadIsOneLevelOfBgraAndPutsTheBindingBack) {
    const CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    const std::vector<std::uint32_t> pixels = image(2);
    EXPECT_EQ(cache.upload("ROCK.RAW", 2, pixels), 1U);
    EXPECT_THAT(gl.getCalls(),
                ElementsAre(glCall("GenTextures", 1, 1), glCall("ActiveTexture", GL_TEXTURE0),
                            glCall("BindTexture", GL_TEXTURE_2D, 1),
                            glCall("PixelStorei", GL_UNPACK_ALIGNMENT, 4),
                            glCall("TexImage2D", GL_TEXTURE_2D, 0, GL_RGBA8, 2, 2, 0, GL_BGRA,
                                   GL_UNSIGNED_BYTE),
                            glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_BASE_LEVEL, 0),
                            glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL, 0),
                            glCall("BindTexture", GL_TEXTURE_2D, 0)));
    EXPECT_EQ(gl.getCalls("TexImage2D")[0].pointer, pixels.data());
    EXPECT_EQ(cache.find("ROCK.RAW", 2), 1U);
    EXPECT_EQ(cache.getSize(), 1U);
}

// Polygons wait in the batch for the next flush; an upload between leaving its own texture
// bound would draw them with the wrong image.
TEST(CGlTextureCache, UploadLeavesTheBindingThePendingPolygonsUse) {
    CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    const GLuint first = cache.upload("A.RAW", 1, image(1));
    cache.bind(first, kNearest, false);
    gl.clear();
    cache.upload("B.RAW", 1, image(1));
    EXPECT_EQ(gl.getCalls().back(), glCall("BindTexture", GL_TEXTURE_2D, first));
}

TEST(CGlTextureCache, ReuploadingANameReplacesItsImageInPlace) {
    CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    const GLuint texture = cache.upload("ROCK.RAW", 1, image(1));
    gl.clear();
    EXPECT_EQ(cache.upload("ROCK.RAW", 1, image(1)), texture);
    EXPECT_EQ(gl.count("GenTextures"), 0U);
    EXPECT_EQ(gl.count("TexImage2D"), 1U);
    EXPECT_EQ(cache.getSize(), 1U);
}

TEST(CGlTextureCache, OneNameAtTwoDimensionsIsTwoTextures) {
    const CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    const GLuint large = cache.upload("ROCK.RAW", 2, image(2));
    const GLuint small = cache.upload("ROCK.RAW", 1, image(1));
    EXPECT_NE(large, small);
    EXPECT_EQ(cache.find("ROCK.RAW", 2), large);
    EXPECT_EQ(cache.find("ROCK.RAW", 1), small);
}

TEST(CGlTextureCache, NamesCompareOnSixtyThreeCharacters) {
    const CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    const std::string prefix(62, 'A');
    const GLuint texture = cache.upload(prefix + "BX", 1, image(1));
    EXPECT_EQ(cache.find(prefix + "BY", 1), texture);
    EXPECT_EQ(cache.find(prefix + "C", 1), 0U);
}

TEST(CGlTextureCache, RejectsAnImageThatIsNotDimensionSquared) {
    const CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    EXPECT_THROW(cache.upload("ROCK.RAW", 2, image(1)), std::invalid_argument);
    EXPECT_THROW(cache.upload("ROCK.RAW", 0, {}), std::invalid_argument);
    EXPECT_TRUE(gl.getCalls().empty());
}

TEST(CGlTextureCache, BindingNothingSetsNoSampling) {
    const CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    cache.bind(0, kNearest, true);
    EXPECT_THAT(gl.getCalls(), ElementsAre(glCall("ActiveTexture", GL_TEXTURE0),
                                           glCall("BindTexture", GL_TEXTURE_2D, 0)));
}

TEST(CGlTextureCache, BindingSamplesAsTheStateAsksAndClamps) {
    CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    cache.bind(7, filtered(common::ETextureFilter::Linear, common::ETextureFilter::Nearest), false);
    EXPECT_THAT(
        gl.getCalls(),
        ElementsAre(glCall("ActiveTexture", GL_TEXTURE0), glCall("BindTexture", GL_TEXTURE_2D, 7),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE)));
    gl.clear();
    cache.bind(7, filtered(common::ETextureFilter::Nearest, common::ETextureFilter::Linear), false);
    EXPECT_THAT(
        gl.getCalls("TexParameteri"),
        ElementsAre(glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE),
                    glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE)));
}

TEST(CGlTextureCache, AReflectionGetsAMipChainOnceAndFiltersAcrossIt) {
    CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    const GLuint sky = cache.upload("SKY.RAW", 1, image(1));
    gl.clear();
    cache.bind(sky, kNearest, true);
    EXPECT_THAT(
        gl.getCalls(),
        ElementsAre(
            glCall("ActiveTexture", GL_TEXTURE0), glCall("BindTexture", GL_TEXTURE_2D, sky),
            glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL, 1000),
            glCall("GenerateMipmap", GL_TEXTURE_2D),
            glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR),
            glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR),
            glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE),
            glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE)));
    gl.clear();
    cache.bind(sky, kNearest, true);
    cache.bind(sky, kNearest, false);
    EXPECT_EQ(gl.count("GenerateMipmap"), 0U);
    EXPECT_EQ(
        gl.getCalls("TexParameteri")[4],
        glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR));
}

TEST(CGlTextureCache, AnUploadReplacesTheChainWithOneLevel) {
    CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    const GLuint sky = cache.upload("SKY.RAW", 1, image(1));
    cache.bind(sky, kNearest, true);
    cache.upload("SKY.RAW", 1, image(1));
    gl.clear();
    cache.bind(sky, kNearest, false);
    EXPECT_EQ(gl.getCalls("TexParameteri")[0],
              glCall("TexParameteri", GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST));
    gl.clear();
    cache.bind(sky, kNearest, true);
    EXPECT_EQ(gl.count("GenerateMipmap"), 1U);
}

TEST(CGlTextureCache, PastCapacityTheLeastRecentlyUsedGoes) {
    CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    const std::vector<std::uint32_t> pixel = image(1);
    for (std::size_t i = 0; i < CGlTextureCache::kCapacity; ++i) {
        cache.upload("T" + std::to_string(i), 1, pixel);
    }
    // Names are handed out in upload order, so T1 is 2; finding T0 makes T1 the oldest.
    const GLuint second = 2;
    EXPECT_NE(cache.find("T0", 1), 0U);
    gl.clear();
    cache.upload("NEW", 1, pixel);
    EXPECT_THAT(gl.getCalls("DeleteTextures"), ElementsAre(glCall("DeleteTextures", 1, second)));
    EXPECT_EQ(cache.getSize(), CGlTextureCache::kCapacity);
    EXPECT_EQ(cache.find("T1", 1), 0U);
    EXPECT_NE(cache.find("T0", 1), 0U);
    EXPECT_NE(cache.find("NEW", 1), 0U);
}

TEST(CGlTextureCache, EvictingTheBoundTextureDoesNotRebindItsDeletedName) {
    CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    const std::vector<std::uint32_t> pixel = image(1);
    const GLuint oldest = cache.upload("T0", 1, pixel);
    for (std::size_t i = 1; i < CGlTextureCache::kCapacity; ++i) {
        cache.upload("T" + std::to_string(i), 1, pixel);
    }
    cache.bind(oldest, kNearest, true);
    gl.clear();
    cache.upload("NEW", 1, pixel);
    EXPECT_THAT(gl.getCalls("DeleteTextures"), ElementsAre(glCall("DeleteTextures", 1, oldest)));
    EXPECT_EQ(gl.getCalls().back(), glCall("BindTexture", GL_TEXTURE_2D, 0));
}

TEST(CGlTextureCache, ReleaseDeletesEveryImageAndForgetsTheBinding) {
    CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    const GLuint first = cache.upload("A.RAW", 1, image(1));
    const GLuint second = cache.upload("B.RAW", 1, image(1));
    cache.bind(second, kNearest, true);
    gl.clear();
    cache.release();
    ASSERT_EQ(gl.count("DeleteTextures"), 1U);
    EXPECT_THAT(deletedNames(gl.getCalls("DeleteTextures")[0]), ElementsAre(first, second));
    EXPECT_EQ(cache.getSize(), 0U);
    EXPECT_EQ(cache.find("A.RAW", 1), 0U);
    cache.upload("C.RAW", 1, image(1));
    EXPECT_EQ(gl.getCalls().back(), glCall("BindTexture", GL_TEXTURE_2D, 0));
}

TEST(CGlTextureCache, ReleasingNothingCallsNothing) {
    const CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    cache.release();
    EXPECT_TRUE(gl.getCalls().empty());
}

TEST(CGlTextureCache, AnInvalidatedBindingIsNotPutBack) {
    CGlRecorder gl;
    CGlTextureCache cache(gl.getApi());
    cache.bind(5, kNearest, false);
    cache.invalidateBinding();
    gl.clear();
    cache.upload("A.RAW", 1, image(1));
    EXPECT_EQ(gl.getCalls().back(), glCall("BindTexture", GL_TEXTURE_2D, 0));
}

TEST(CGlTextureCache, DestroyingDeletesEveryImage) {
    CGlRecorder gl;
    std::optional<CGlTextureCache> cache(std::in_place, gl.getApi());
    const GLuint texture = cache->upload("A.RAW", 1, image(1));
    gl.clear();
    cache.reset();
    EXPECT_THAT(gl.getCalls(), ElementsAre(glCall("DeleteTextures", 1, texture)));
}

} // namespace
} // namespace nocturne::platform::gl

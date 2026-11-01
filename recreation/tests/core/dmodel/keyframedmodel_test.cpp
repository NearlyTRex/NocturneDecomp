#include "common/error/fatalerror.h"
#include "common/serial/binarywriter.h"
#include "core/dmodel/keyframedmodel.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <initializer_list>
#include <string>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using common::CVector3f;
using common::CVector3i;
using platform::SClipPlane;
using ::testing::ElementsAre;
using ::testing::IsEmpty;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CKeyFramedModel, IsConcrete) {
    static_assert(!std::is_abstract_v<CKeyFramedModel>);
}

TEST(CKeyFramedModel, Constructors) {
    static_assert(std::is_constructible_v<CKeyFramedModel, const engine::CDosIo &>);
}

TEST(CKeyFramedModel, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CKeyFramedModel::load),
                                 void (CKeyFramedModel::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CKeyFramedModel::free), void (CKeyFramedModel::*)()>);
    static_assert(
        std::is_same_v<decltype(&CKeyFramedModel::prepareForRender),
                       void (CKeyFramedModel::*)(int, int, engine::CDemonRenderer &, CDemonSet &)>);
    static_assert(std::is_same_v<decltype(&CKeyFramedModel::getFrameVertices),
                                 std::span<const CVector3i> (CKeyFramedModel::*)(int) const>);
    static_assert(std::is_same_v<decltype(&CKeyFramedModel::captureTextures),
                                 void (CKeyFramedModel::*)(engine::CDemonRenderer &)>);
    static_assert(
        std::is_same_v<decltype(&CKeyFramedModel::intersectRay),
                       float (CKeyFramedModel::*)(int, CVector3f *, CVector3f *, CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CKeyFramedModel::intersectCylinder),
                       void (CKeyFramedModel::*)(int, SIntersectXZCylinder *, CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CKeyFramedModel::getFloorHeight),
                       int (CKeyFramedModel::*)(int, CVector3f *, float, float *, CVector3f *)>);
}

MATCHER_P3(IsVector3i, x, y, z, "") {
    return arg.x == x && arg.y == y && arg.z == z;
}

MATCHER_P3(IsVector3f, x, y, z, "") {
    return arg.equals(CVector3f{.x = x, .y = y, .z = z});
}

MATCHER_P2(IsPart, vertex_count, poly_count, "") {
    return arg.vertex_count == vertex_count && arg.poly_count == poly_count;
}

MATCHER_P3(IsCorner, vertex_index, texture_u, texture_v, "") {
    return arg.vertex_index == vertex_index && arg.texture_u == texture_u &&
           arg.texture_v == texture_v;
}

// A square in z = 2 then a triangle over half of it, both facing +z, with every optional line.
constexpr const char *kSquare = "/ kfm\r\n8\r\n"
                                "; vertices, polys, textures, parts, frames\r\n4,2,2,1,1\r\n"
                                "; collision\r\n1\r\n"
                                "; transparent\r\n1\r\n"
                                "; backface\r\n1\r\n"
                                "; env map\r\n1\r\n"
                                "; vertices\r\n0,0,512\r\n1024,0,512\r\n1024,1024,512\r\n"
                                "0,1024,512\r\n"
                                "; polygons\r\n"
                                "1,4, 0,0,0, 1,16777216,0, 2,16777216,16777216, 3,0,16777216\r\n"
                                "0,3, 0,0,0, 2,7,8, 3,9,10\r\n"
                                "; env map opacity\r\n128\r\n300\r\n"
                                "; textures\r\nwall.tga\r\nfloor tile.tga\r\n"
                                "; parts\r\n4,2\r\n";

// Three vertices over two frames, the second moved along x, without the optional lines.
constexpr const char *kTwoFrames = "/\n5\n;\n3,1,0,0,2\n;\n1\n;\n"
                                   "0,0,0\n256,0,0\n0,256,0\n"
                                   "512,0,0\n768,0,0\n512,256,0\n"
                                   ";\n0,3, 0,0,0, 1,0,0, 2,0,0\n";

class CKeyFramedModelTest : public engine::CPodFixture {
protected:
    void load(const std::string &contents) {
        givenFile("models\\test.kfm", contents);
        model_.load("test.kfm");
    }

    // Each texture's name, after checking it starts at the first cache slot.
    std::vector<std::string> textureNames() const {
        std::vector<std::string> names;
        for (const platform::SMRGLTextureBasic &texture : model_.getTextures()) {
            EXPECT_EQ(texture.cache_index, 0);
            names.push_back(texture.texture_name);
        }
        return names;
    }

    CKeyFramedModel model_{dosio_};
};

TEST_F(CKeyFramedModelTest, StartsEmpty) {
    EXPECT_EQ(model_.getVertexCount(), 0);
    EXPECT_EQ(model_.getFrameCount(), 0);
    EXPECT_THAT(model_.getFrameVertices(0), IsEmpty());
}

TEST_F(CKeyFramedModelTest, ATextModelLoadsEverySection) {
    load(kSquare);
    EXPECT_EQ(model_.getVertexCount(), 4);
    EXPECT_EQ(model_.getFrameCount(), 1);
    EXPECT_THAT(model_.getFrameVertices(0),
                ElementsAre(IsVector3i(0, 0, 512), IsVector3i(1024, 0, 512),
                            IsVector3i(1024, 1024, 512), IsVector3i(0, 1024, 512)));
    ASSERT_EQ(model_.getPolygons().size(), 2U);
    EXPECT_THAT(model_.getPolygons()[0].vertices,
                ElementsAre(IsCorner(0, 0, 0), IsCorner(1, 16777216, 0),
                            IsCorner(2, 16777216, 16777216), IsCorner(3, 0, 16777216)));
    EXPECT_THAT(model_.getPolygons()[1].vertices,
                ElementsAre(IsCorner(0, 0, 0), IsCorner(2, 7, 8), IsCorner(3, 9, 10)));
    EXPECT_THAT(model_.getPolyTextureIndices(), ElementsAre(1, 0));
    // Opacities are bytes.
    EXPECT_THAT(model_.getEnvMapOpacities(), ElementsAre(128, 44));
    EXPECT_THAT(textureNames(), ElementsAre("wall.tga", "floor tile.tga"));
    EXPECT_THAT(model_.getParts(), ElementsAre(IsPart(4, 2)));
    EXPECT_EQ(model_.getTransparentPixelFlag(), 1);
    EXPECT_EQ(model_.getDisableBackfaceCulling(), 1);
}

TEST_F(CKeyFramedModelTest, ASingleFrameModelGetsPlanesAndVertexNormals) {
    load(kSquare);
    const SClipPlane up{.a = 0, .b = 0, .c = 65535, .d = 512 * 65535};
    EXPECT_EQ(model_.getPolygons()[0].surface_normal, up);
    EXPECT_EQ(model_.getPolygons()[1].surface_normal, up);
    EXPECT_THAT(model_.getVertexNormals(),
                ElementsAre(IsVector3i(0, 0, 65535), IsVector3i(0, 0, 65535),
                            IsVector3i(0, 0, 65535), IsVector3i(0, 0, 65535)));
}

TEST_F(CKeyFramedModelTest, VertexNormalsChopTowardZero) {
    // The plane rounds to 37837 a component; scaled to 65535 that's 37836.69, which chops.
    load("/\n5\n;\n3,1,0,0,1\n;\n0\n;\n1024,0,0\n0,1024,0\n0,0,1024\n;\n0,3, 0,0,0, 1,0,0, "
         "2,0,0\n");
    EXPECT_EQ(model_.getPolygons()[0].surface_normal,
              (SClipPlane{.a = 37837, .b = 37837, .c = 37837, .d = 38744732}));
    EXPECT_THAT(model_.getVertexNormals(),
                ElementsAre(IsVector3i(37836, 37836, 37836), IsVector3i(37836, 37836, 37836),
                            IsVector3i(37836, 37836, 37836)));
}

TEST_F(CKeyFramedModelTest, TheBoundsAreInWorldUnits) {
    load(kSquare);
    EXPECT_THAT(model_.getBounds().min, IsVector3f(0.0F, 0.0F, 2.0F));
    EXPECT_THAT(model_.getBounds().max, IsVector3f(4.0F, 4.0F, 2.0F));
    ASSERT_EQ(model_.getFrameBounds().size(), 1U);
    EXPECT_THAT(model_.getFrameBounds()[0].max, IsVector3f(4.0F, 4.0F, 2.0F));
}

TEST_F(CKeyFramedModelTest, CollisionTrianglesFanEachPolygon) {
    load(kSquare);
    EXPECT_EQ(model_.getCollisionTriangleCount(), 3);
    const std::span<const CDemonTriangle> triangles = model_.getCollisionTriangles();
    ASSERT_EQ(triangles.size(), 3U);
    EXPECT_THAT(triangles[0].vertex1, IsVector3f(0.0F, 0.0F, 2.0F));
    EXPECT_THAT(triangles[0].vertex2, IsVector3f(4.0F, 0.0F, 2.0F));
    EXPECT_THAT(triangles[0].vertex3, IsVector3f(4.0F, 4.0F, 2.0F));
    EXPECT_THAT(triangles[1].vertex2, IsVector3f(4.0F, 4.0F, 2.0F));
    EXPECT_THAT(triangles[1].vertex3, IsVector3f(0.0F, 4.0F, 2.0F));
    EXPECT_THAT(triangles[0].normal, IsVector3f(0.0F, 0.0F, -1.0F));
    EXPECT_FLOAT_EQ(triangles[0].plane_distance, 2.0F);
}

TEST_F(CKeyFramedModelTest, EachFrameHasItsOwnVerticesBoundsAndTriangles) {
    load(kTwoFrames);
    EXPECT_EQ(model_.getFrameCount(), 2);
    EXPECT_THAT(model_.getFrameVertices(1),
                ElementsAre(IsVector3i(512, 0, 0), IsVector3i(768, 0, 0), IsVector3i(512, 256, 0)));
    EXPECT_THAT(model_.getFrameBounds()[0].max, IsVector3f(1.0F, 1.0F, 0.0F));
    EXPECT_THAT(model_.getFrameBounds()[1].min, IsVector3f(2.0F, 0.0F, 0.0F));
    EXPECT_THAT(model_.getBounds().min, IsVector3f(0.0F, 0.0F, 0.0F));
    EXPECT_THAT(model_.getBounds().max, IsVector3f(3.0F, 1.0F, 0.0F));
    EXPECT_EQ(model_.getCollisionTriangleCount(), 1);
    ASSERT_EQ(model_.getCollisionTriangles().size(), 2U);
    EXPECT_THAT(model_.getCollisionTriangles()[1].vertex1, IsVector3f(2.0F, 0.0F, 0.0F));
}

TEST_F(CKeyFramedModelTest, AModelOfSeveralFramesHasNoNormals) {
    load(kTwoFrames);
    EXPECT_THAT(model_.getVertexNormals(), IsEmpty());
    EXPECT_EQ(model_.getPolygons()[0].surface_normal, SClipPlane{});
}

TEST_F(CKeyFramedModelTest, OlderVersionsLeaveTheOptionalLinesOff) {
    load(kTwoFrames);
    EXPECT_EQ(model_.getTransparentPixelFlag(), 0);
    EXPECT_EQ(model_.getDisableBackfaceCulling(), 0);
    EXPECT_THAT(model_.getEnvMapOpacities(), IsEmpty());
}

TEST_F(CKeyFramedModelTest, FramesClampToTheModel) {
    load(kTwoFrames);
    EXPECT_EQ(model_.getFrameVertices(-1).data(), model_.getFrameVertices(0).data());
    EXPECT_EQ(model_.getFrameVertices(5).data(), model_.getFrameVertices(1).data());
}

TEST_F(CKeyFramedModelTest, FreeEmptiesTheModelButKeepsTheBounds) {
    load(kSquare);
    model_.free();
    EXPECT_EQ(model_.getVertexCount(), 0);
    EXPECT_EQ(model_.getFrameCount(), 0);
    EXPECT_THAT(model_.getPolygons(), IsEmpty());
    EXPECT_THAT(model_.getPolyTextureIndices(), IsEmpty());
    EXPECT_THAT(model_.getVertexNormals(), IsEmpty());
    EXPECT_THAT(model_.getEnvMapOpacities(), IsEmpty());
    EXPECT_THAT(textureNames(), IsEmpty());
    EXPECT_THAT(model_.getParts(), IsEmpty());
    EXPECT_THAT(model_.getFrameBounds(), IsEmpty());
    EXPECT_THAT(model_.getCollisionTriangles(), IsEmpty());
    EXPECT_EQ(model_.getCollisionTriangleCount(), 0);
    EXPECT_EQ(model_.getTransparentPixelFlag(), 0);
    EXPECT_EQ(model_.getDisableBackfaceCulling(), 0);
    EXPECT_THAT(model_.getBounds().max, IsVector3f(4.0F, 4.0F, 2.0F));
}

TEST_F(CKeyFramedModelTest, AMissingModelIsFatal) {
    EXPECT_THAT([&] { model_.load("gone.kfm"); },
                ThrowsMessage<common::CFatalError>(StrEq("Can't open keyframed model gone.kfm")));
}

TEST_F(CKeyFramedModelTest, TextVersionsOutsideFiveToEightAreFatal) {
    EXPECT_THAT([&] { load("/\n4\n"); },
                ThrowsMessage<common::CFatalError>(StrEq("KFM file is invalid version 4")));
    EXPECT_THAT([&] { load("/\nx\n"); },
                ThrowsMessage<common::CFatalError>(StrEq("KFM file is invalid version -1")));
    EXPECT_THAT([&] { load("/\n9\n"); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("KFM file is version 9, this .exe can only handle up to version 8")));
}

TEST_F(CKeyFramedModelTest, ANegativeCountIsFatal) {
    EXPECT_THAT([&] { load("/\n5\n;\n-1,0,0,0,1\n"); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("Out of memory in CKeyFramedModel::allocate.  frameCount=1, "
                          "vertexCount=-1, polyCount=0")));
}

TEST_F(CKeyFramedModelTest, AFailedFieldEndsItsLine) {
    // The second vertex's comma is missing, so its y and z are never read.
    load("/\n5\n;\n2,0,0,0,1\n;\n0\n;\n1,2,3\n4 5,6\n");
    EXPECT_THAT(model_.getFrameVertices(0), ElementsAre(IsVector3i(1, 2, 3), IsVector3i(4, 0, 0)));
}

TEST_F(CKeyFramedModelTest, ACornerWithoutItsCommaIsLeftZero) {
    load("/\n5\n;\n1,1,0,0,1\n;\n0\n;\n0,0,0\n;\n0,2, 0,7,7 5,6,7\n");
    EXPECT_THAT(model_.getPolygons()[0].vertices,
                ElementsAre(IsCorner(0, 7, 7), IsCorner(0, 0, 0)));
}

TEST_F(CKeyFramedModelTest, AnEmptyTextureLineStopsTheNames) {
    // The newline a failed name leaves is never consumed, so the next name fails on it too.
    load("/\n5\n;\n1,0,2,0,1\n;\n0\n;\n0,0,0\n;\n;\n\nb.tga\n");
    EXPECT_THAT(textureNames(), ElementsAre("", ""));
}

TEST_F(CKeyFramedModelTest, NamesWithoutACarriageReturnAreKept) {
    load("/\n5\n;\n1,0,1,0,1\n;\n0\n;\n0,0,0\n;\n;\nrock.tga\n");
    EXPECT_THAT(textureNames(), ElementsAre("rock.tga"));
}

TEST_F(CKeyFramedModelTest, PolygonsOfFewerThanThreeCornersMakeNoTriangles) {
    load("/\n5\n;\n3,3,0,0,1\n;\n1\n;\n0,0,0\n256,0,0\n0,256,0\n;\n"
         "0,2, 0,0,0, 1,0,0\n0,-1\n0,3, 0,0,0, 1,0,0, 2,0,0\n");
    EXPECT_THAT(model_.getPolygons()[1].vertices, IsEmpty());
    EXPECT_EQ(model_.getCollisionTriangleCount(), 1);
    EXPECT_EQ(model_.getCollisionTriangles().size(), 1U);
}

TEST_F(CKeyFramedModelTest, CornersOffTheVertexListAreTheOriginAndAddToNoNormal) {
    load("/\n5\n;\n2,1,0,0,1\n;\n1\n;\n256,0,0\n0,256,0\n;\n0,3, -1,0,0, 1,0,0, 9,0,0\n");
    EXPECT_EQ(model_.getPolygons()[0].surface_normal, SClipPlane{});
    EXPECT_THAT(model_.getVertexNormals(), ElementsAre(IsVector3i(0, 0, 0), IsVector3i(0, 0, 0)));
    const CDemonTriangle &triangle = model_.getCollisionTriangles()[0];
    EXPECT_THAT(triangle.vertex1, IsVector3f(0.0F, 0.0F, 0.0F));
    EXPECT_THAT(triangle.vertex2, IsVector3f(0.0F, 1.0F, 0.0F));
    EXPECT_THAT(triangle.vertex3, IsVector3f(0.0F, 0.0F, 0.0F));
}

TEST_F(CKeyFramedModelTest, FramesWithoutVerticesHaveEmptyBoxes) {
    load("/\n5\n;\n0,0,0,0,2\n");
    EXPECT_THAT(model_.getFrameVertices(1), IsEmpty());
    ASSERT_EQ(model_.getFrameBounds().size(), 2U);
    EXPECT_THAT(model_.getFrameBounds()[1].max, IsVector3f(0.0F, 0.0F, 0.0F));
    EXPECT_THAT(model_.getBounds().max, IsVector3f(0.0F, 0.0F, 0.0F));
}

TEST_F(CKeyFramedModelTest, CollisionNeedsPolygonsAndFrames) {
    load("/\n5\n;\n1,0,0,0,1\n;\n1\n");
    EXPECT_THAT(model_.getCollisionTriangles(), IsEmpty());
    load("/\n5\n;\n0,1,0,0,0\n;\n1\n;\n;\n0,3, 0,0,0, 0,0,0, 0,0,0\n");
    EXPECT_EQ(model_.getCollisionTriangleCount(), 0);
    EXPECT_THAT(model_.getCollisionTriangles(), IsEmpty());
}

class CBinaryModel {
public:
    CBinaryModel &ints(std::initializer_list<std::int32_t> values) {
        for (const std::int32_t value : values) {
            writer_.write(value);
        }
        return *this;
    }

    CBinaryModel &name(std::string_view text) {
        writer_.writeBytes(std::as_bytes(std::span(text)));
        return *this;
    }

    [[nodiscard]] std::string str() const {
        const std::span<const std::byte> data = writer_.getData();
        return {reinterpret_cast<const char *>(data.data()), data.size()};
    }

private:
    common::CBinaryWriter writer_;
};

// Version 4 with collision: a triangle facing +z, one texture and one part.
std::string binaryTriangle() {
    return CBinaryModel()
        .ints({4, 3, 1, 1, 1, 1, 1})
        .ints({0, 0, 0, 256, 0, 0, 256, 256, 0})
        .ints({0x40, 3, 1, 2, 3, 4, 0, 0, 0, 1, 5, 6, 2, 7, 8, 9, 9, 9})
        .ints({0})
        .ints({0x40, 5})
        .name(std::string("rock.tga\0\0\0\0\0\0\0\0", 16))
        .ints({3, 1})
        .str();
}

TEST_F(CKeyFramedModelTest, ABinaryModelLoadsEveryRecord) {
    load(binaryTriangle());
    EXPECT_THAT(model_.getFrameVertices(0),
                ElementsAre(IsVector3i(0, 0, 0), IsVector3i(256, 0, 0), IsVector3i(256, 256, 0)));
    // Only the corners the count names are kept.
    EXPECT_THAT(model_.getPolygons()[0].vertices,
                ElementsAre(IsCorner(0, 0, 0), IsCorner(1, 5, 6), IsCorner(2, 7, 8)));
    // A single frame's plane is worked out again.
    EXPECT_EQ(model_.getPolygons()[0].surface_normal,
              (SClipPlane{.a = 0, .b = 0, .c = 65535, .d = 0}));
    EXPECT_THAT(model_.getPolyTextureIndices(), ElementsAre(0));
    EXPECT_THAT(textureNames(), ElementsAre("rock.tga"));
    EXPECT_THAT(model_.getParts(), ElementsAre(IsPart(3, 1)));
    EXPECT_EQ(model_.getCollisionTriangles().size(), 1U);
}

TEST_F(CKeyFramedModelTest, VersionThreeHasNoCollisionAndKeepsFourCornersAtMost) {
    load(CBinaryModel()
             .ints({3, 1, 2, 1, 1, 2})
             .ints({1, 2, 3, 4, 5, 6})
             .ints({0x40, 6, 1, 2, 3, 4, 0, 1, 1, 0, 2, 2, 0, 3, 3, 0, 4, 4})
             .ints({0x40, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0})
             .ints({0, 0})
             .ints({0x40, 0})
             .name("abcdefghijklmnop")
             .ints({1, 2})
             .str());
    EXPECT_THAT(model_.getFrameVertices(1), ElementsAre(IsVector3i(4, 5, 6)));
    EXPECT_EQ(model_.getPolygons()[0].vertices.size(), 4U);
    EXPECT_THAT(model_.getPolygons()[1].vertices, IsEmpty());
    // Several frames keep the plane the file holds.
    EXPECT_EQ(model_.getPolygons()[0].surface_normal, (SClipPlane{.a = 1, .b = 2, .c = 3, .d = 4}));
    EXPECT_THAT(textureNames(), ElementsAre("abcdefghijklmnop"));
    EXPECT_THAT(model_.getCollisionTriangles(), IsEmpty());
}

TEST_F(CKeyFramedModelTest, BinaryVersionsOutsideThreeAndFourAreFatal) {
    for (const std::int32_t version : {2, 5}) {
        EXPECT_THAT([&] { load(CBinaryModel().ints({version, 0, 0, 0, 0, 0}).str()); },
                    ThrowsMessage<common::CFatalError>(
                        StrEq("KFM file is invalid version " + std::to_string(version))));
    }
}

TEST_F(CKeyFramedModelTest, ShortOrEmptyBinaryBlocksAreFatal) {
    const std::string full = binaryTriangle();
    for (const std::string &contents : {
             std::string(),
             CBinaryModel().ints({4, 1, 0, 0, 1, 1}).str(),
             CBinaryModel().ints({3, 0, 0, 0, 1, 1}).str(),
             CBinaryModel().ints({3, 1, 0, 0, 0, 1, 7, 8, 9}).str(),
             full.substr(0, full.size() - 4),
         }) {
        EXPECT_THAT([&] { load(contents); }, ThrowsMessage<common::CFatalError>(
                                                 StrEq("Error reading keyframed model file")));
    }
}

} // namespace
} // namespace nocturne::core

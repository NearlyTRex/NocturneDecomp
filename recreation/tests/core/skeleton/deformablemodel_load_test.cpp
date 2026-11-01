#include "common/error/fatalerror.h"
#include "core/skeleton/deformablemodel.h"
#include "tests/mocks/core/deformablemodelfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr std::string_view kCorrupt = "Deformable model file is corrupt";

class CDeformableModelLoadTest : public CDeformableModelFixture {
protected:
    void load(const SDfmFile &file) {
        givenModel("m.dfm", file);
        model_.load("m.dfm");
    }

    void expectFatal(const SDfmFile &file, std::string_view message) {
        givenModel("bad.dfm", file);
        EXPECT_THAT([this] { model_.load("bad.dfm"); },
                    ThrowsMessage<common::CFatalError>(StrEq(std::string(message))))
            << file.text();
    }

    SDeformableModelOwners owners_{.dosio = dosio_, .models = models_, .renderer = demon_renderer_};
    CDeformableModel model_{owners_};
};

// The default model written with CRLFs, as the shipped files are, as GABRIELA.DFM.
class CDeformableModelCrlfTest : public CDeformableModelLoadTest {
protected:
    CDeformableModelCrlfTest() {
        std::string crlf;
        for (const char c : SDfmFile{}.text()) {
            if (c == '\n') {
                crlf += '\r';
            }
            crlf += c;
        }
        givenFile("models\\GABRIELA.DFM", crlf);
        model_.load("GABRIELA.DFM");
    }
};

// The names lose their carriage returns.
TEST_F(CDeformableModelCrlfTest, AModelIsReadWithItsSkeletonAndLevelsOfDetail) {
    EXPECT_EQ(model_.getModelFilename(), "GABRIELA.DFM");
    EXPECT_EQ(model_.getModelName(), "TEST.SKL");
    ASSERT_EQ(model_.getLods().size(), 2U);
    EXPECT_EQ(model_.getLods()[0].pixel_height, 999999);
    EXPECT_FALSE(model_.getLods()[0].shadow_only_flag);
    EXPECT_EQ(model_.getLods()[1].pixel_height, 100);
    EXPECT_TRUE(model_.getLods()[1].shadow_only_flag);
}

TEST_F(CDeformableModelCrlfTest, EachPartHasItsDominantBoneNeighboursAndCounts) {
    ASSERT_EQ(model_.getParts().size(), 2U);
    const SPart &head = model_.getParts()[0];
    EXPECT_EQ(head.part_name, "Head");
    EXPECT_EQ(head.dominant_bone, 1);
    EXPECT_THAT(head.adj_part_list, ElementsAre(1, 0));
    EXPECT_THAT(head.tri_counts, ElementsAre(1, 1));
    EXPECT_THAT(head.cap_tri_counts, ElementsAre(1, 0));
    EXPECT_EQ(model_.getParts()[1].part_name, "Body");
    EXPECT_TRUE(model_.getParts()[1].adj_part_list.empty());
}

TEST_F(CDeformableModelCrlfTest, TheTexturesScaleBiasAndBonePartsFollow) {
    ASSERT_EQ(model_.getTextureSets().size(), 2U);
    EXPECT_EQ(model_.getTextureSets()[0][1].texture_name, "FACE.RAW");
    EXPECT_EQ(model_.getTextureSets()[1][0].texture_name, "SKIN2.RAW");
    EXPECT_TRUE(model_.getModelScale().equals({.x = 2.0F, .y = 3.0F, .z = 4.0F}));
    EXPECT_TRUE(model_.getBias().equals({.x = 0.5F, .y = 0.25F, .z = 0.0F}));
    EXPECT_THAT(model_.getBoneToPartMap().first(6), ElementsAre(1, 0, 1, 0, 1, 0));
}

TEST_F(CDeformableModelLoadTest, EachVertexFollowsItsBones) {
    load({});
    const SLodMesh &mesh = model_.getLodMeshes()[0];
    ASSERT_EQ(mesh.vertices.size(), 3U);
    const SVert &vertex = mesh.vertices[1];
    EXPECT_EQ(vertex.num_bone_influences, 2);
    EXPECT_EQ(vertex.bone_indices[0], 1);
    EXPECT_EQ(vertex.bone_weights[0], 0.75F);
    EXPECT_TRUE(vertex.bone_offsets[0].equals({.x = 1.0F, .y = 2.0F, .z = 3.0F}));
    EXPECT_EQ(vertex.bone_indices[1], 2);
    EXPECT_EQ(vertex.bone_weights[1], 0.25F);
    EXPECT_TRUE(vertex.bone_offsets[1].equals({.x = -1.0F, .y = -2.0F, .z = -3.0F}));
    ASSERT_EQ(model_.getLodMeshes()[1].vertices.size(), 1U);
    EXPECT_EQ(model_.getLodMeshes()[1].vertices[0].bone_indices[0], 5);
}

// The coordinates are 8.8 in the file, and lose their fraction's bits as they are read.
TEST_F(CDeformableModelLoadTest, EachTriangleHasItsTextureCornersAndCoordinates) {
    load({});
    const SLodMesh &mesh = model_.getLodMeshes()[0];
    EXPECT_EQ(mesh.tri_count, 1);
    EXPECT_EQ(mesh.cap_tri_count, 1);
    ASSERT_EQ(mesh.faces.size(), 2U);
    EXPECT_THAT(mesh.face_textures, ElementsAre(1, 0));
    const platform::SInputFace &face = mesh.faces[0];
    EXPECT_EQ(face.vertex_indices.vertex_index_0, 0);
    EXPECT_EQ(face.vertex_indices.vertex_index_1, 1);
    EXPECT_EQ(face.vertex_indices.vertex_index_2, 2);
    EXPECT_EQ(face.u_coord_0, 1);
    EXPECT_EQ(face.v_coord_0, 2);
    EXPECT_EQ(face.u_coord_1, 3);
    EXPECT_EQ(face.v_coord_1, 4);
    EXPECT_EQ(face.u_coord_2, 255);
    EXPECT_EQ(face.v_coord_2, 0);
    EXPECT_THAT(mesh.cap_parts, ElementsAre(1));
    EXPECT_TRUE(model_.getLodMeshes()[1].cap_parts.empty());
}

// Before 7 each bone's part is worked out: one part takes them all.
TEST_F(CDeformableModelLoadTest, AVersionSixModelOfOnePartHasItsBonesInIt) {
    load({.version = 6,
          .counts = "1,1,1,6,1\n",
          .lods = "1,0,0,1,0\n",
          .parts = "\"All\", 4, 0\n0,0\n",
          .vertices = "1\n0,1,0,0,0\n",
          .tris = "",
          .caps = "",
          .textures = "T.RAW\n"});
    EXPECT_EQ(model_.getParts()[0].dominant_bone, 0);
    EXPECT_THAT(model_.getBoneToPartMap(), ::testing::Each(0));
}

TEST_F(CDeformableModelLoadTest, AVersionSixModelOfTwoPartsIsNotPortedYet) {
    expectFatal({.version = 6}, "CDeformableModel::computePartDominantBones is not ported yet");
}

// Before 6 a part has no dominant bone in the file; before 5 a model has one texture set.
TEST_F(CDeformableModelLoadTest, AVersionFourModelHasOneTextureSet) {
    load({.version = 4,
          .counts = "1,2,6,1\n",
          .lods = "1,0,0,50,0\n",
          .parts = "\"All\", 1\n3\n0,0\n",
          .vertices = "1\n0,1,0,0,0\n",
          .tris = "",
          .caps = "",
          .textures = "A.RAW\nB.RAW\n"});
    ASSERT_EQ(model_.getTextureSets().size(), 1U);
    EXPECT_EQ(model_.getTextureSets()[0][1].texture_name, "B.RAW");
    EXPECT_EQ(model_.getParts()[0].dominant_bone, 0);
    EXPECT_THAT(model_.getParts()[0].adj_part_list, ElementsAre(3));
    EXPECT_EQ(model_.getLods()[0].pixel_height, 50);
}

TEST_F(CDeformableModelLoadTest, AVersionThreeModelHasNoBias) {
    load({.version = 3,
          .counts = "1,1,6,1\n",
          .lods = "1,0,0,1,0\n",
          .parts = "\"All\", 0\n0,0\n",
          .vertices = "1\n0,1,0,0,0\n",
          .tris = "",
          .caps = "",
          .textures = "T.RAW\n"});
    EXPECT_TRUE(model_.getBias().equals({}));
    EXPECT_TRUE(model_.getModelScale().equals({.x = 2.0F, .y = 3.0F, .z = 4.0F}));
}

// Before 3 one level of detail is counted in the header, and each part gives its counts first.
TEST_F(CDeformableModelLoadTest, AVersionTwoModelHasOneLevelOfDetail) {
    load({.version = 2,
          .counts = "1,1,0,1,6,1\n",
          .parts = "\"All\",1,0,1\n2\n",
          .vertices = "1\n0,1,0,0,0\n",
          .tris = "0,0,0,0,0,0,0,0,0,0\n",
          .caps = "",
          .textures = "T.RAW\n"});
    ASSERT_EQ(model_.getLods().size(), 1U);
    EXPECT_EQ(model_.getLods()[0].pixel_height, 1);
    EXPECT_FALSE(model_.getLods()[0].shadow_only_flag);
    EXPECT_EQ(model_.getLodMeshes()[0].tri_count, 1);
    EXPECT_THAT(model_.getParts()[0].tri_counts, ElementsAre(1));
    EXPECT_THAT(model_.getParts()[0].adj_part_list, ElementsAre(2));
    EXPECT_TRUE(model_.getModelScale().equals({.x = 2.0F, .y = 3.0F, .z = 4.0F}));
}

// After one with a scale, as every model has its own.
TEST_F(CDeformableModelLoadTest, AVersionOneModelIsAtAScaleOfOne) {
    load({});
    load({.version = 1,
          .counts = "1,0,0,1,6,1\n",
          .parts = "\"All\",0,0,0\n",
          .vertices = "1\n0,1,0,0,0\n",
          .tris = "",
          .caps = "",
          .textures = "T.RAW\n"});
    EXPECT_TRUE(model_.getModelScale().equals({.x = 1.0F, .y = 1.0F, .z = 1.0F}));
}

// A part line from version 3 on that stops early leaves the rest as it was, as GABRIELA.DFM's
// lone part, without its adjacent part count, has it.
TEST_F(CDeformableModelLoadTest, AShortPartLineReadsWhatItHas) {
    load({.counts = "1,1,1,6,1\n",
          .lods = "1,0,0,1,0\n",
          .parts = "\"TheOnlyPart\", 0\n\t872, 0\n",
          .vertices = "1\n0,1,0,0,0\n",
          .tris = "",
          .caps = "",
          .textures = "T.RAW\n"});
    EXPECT_EQ(model_.getParts()[0].part_name, "TheOnlyPart");
    EXPECT_TRUE(model_.getParts()[0].adj_part_list.empty());
    EXPECT_THAT(model_.getParts()[0].tri_counts, ElementsAre(872));
}

TEST_F(CDeformableModelLoadTest, AFileThatWontOpenIsFatal) {
    EXPECT_THAT(
        [this] { model_.load("none.dfm"); },
        ThrowsMessage<common::CFatalError>(StrEq("CDeformableModel::load - Can't open none.dfm")));
}

TEST_F(CDeformableModelLoadTest, AVersionPastSevenIsFatal) {
    expectFatal({.version = 8},
                "Can't load model of version 8, this .exe can only handle up to version 7");
}

TEST_F(CDeformableModelLoadTest, AFileCutShortAnywhereItIsCheckedIsCorrupt) {
    givenModel("bad.dfm", {});
    const std::string whole = SDfmFile{}.text();
    for (const std::string_view section :
         {"// version\n", "// counts\n", "// Lod list\n", "// skeleton file\n", "// vertexList\n",
          "// triList\n", "// capTriList\n", "// texture list\n", "// bone origin list\n",
          "// rootOffsetScale\n"}) {
        const std::string cut = whole.substr(0, whole.find(section) + section.size());
        givenFile("models\\bad.dfm", cut);
        EXPECT_THAT([this] { model_.load("bad.dfm"); },
                    ThrowsMessage<common::CFatalError>(StrEq(std::string(kCorrupt))))
            << section;
    }
}

TEST_F(CDeformableModelLoadTest, AnOldHeaderOrPartCutShortIsCorrupt) {
    expectFatal({.version = 4, .counts = "1,1,6\n"}, kCorrupt);
    expectFatal({.version = 2, .counts = "1,1,0,1,6\n"}, kCorrupt);
    expectFatal({.version = 2, .counts = "1,1,0,1,6,1\n", .parts = "\"All\",1,0\n"}, kCorrupt);
    expectFatal({.version = 2, .counts = "1,1,0,1,6,1\n", .parts = "\"All\",1,0,1\nx\n"}, kCorrupt);
}

// More than three bones a vertex, or a bone past the hundred the tables hold, where the original
// overran them.
TEST_F(CDeformableModelLoadTest, AVertexTheTablesCantHoldIsCorrupt) {
    expectFatal({.vertices = "1\n0,1,0,0\n"}, kCorrupt);
    expectFatal({.vertices = "4\n"}, kCorrupt);
    expectFatal({.vertices = "1\n100,1,0,0,0\n"}, kCorrupt);
    expectFatal({.counts = "2,2,2,101,2\n"}, kCorrupt);
}

TEST_F(CDeformableModelLoadTest, TooManyOfAnythingIsFatal) {
    expectFatal({.counts = "2,6,2,6,2\n"},
                "Too many texture sets in CDeformableModel::allocMemory.  Max is 5, requested 6.");
    expectFatal({.counts = "2,2,81,6,2\n"},
                "Too many textures in CDeformableModel::allocMemory.  Max is 80, requested 81.");
    expectFatal({.counts = "2,2,2,6,31\n"},
                "Too many parts in CDeformableModel::allocMemory.  Max is 30, requested 31.");
    expectFatal({.counts = "6,2,2,6,2\n"},
                "Too many LODs in CDeformableModel::allocMemory.  Max is 5, requested 6.");
}

// Negative counts hold nothing.
TEST_F(CDeformableModelLoadTest, NegativeCountsHoldNothing) {
    load({.counts = "1,1,-1,-1,-1\n",
          .lods = "-1,-1,-1,1,0\n",
          .parts = "",
          .vertices = "",
          .tris = "",
          .caps = "",
          .textures = "",
          .origins = "",
          .bone_parts = ""});
    EXPECT_TRUE(model_.getParts().empty());
    EXPECT_TRUE(model_.getLodMeshes()[0].vertices.empty());
    EXPECT_TRUE(model_.getTextureSets()[0].empty());
}

} // namespace
} // namespace nocturne::core

#pragma once

#include "core/skeleton/deformablemodel.h"
#include "core/skeleton/deformablemodelmanager.h"
#include "core/skeleton/skeleton.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <format>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::core {

// A .DFM file of the version. Each field is its section's text after the comment line; the
// sections a version doesn't have are left out, and counts is the header line before version 3.
// By default: two levels of detail, two texture sets of two textures, six bones and the parts
// Head and Body. The first level's vertices follow bones 0 to 4; the second's follows bone 5.
struct SDfmFile {
    int version = CDeformableModel::kLatestVersion;
    std::string counts = "2,2,2,6,2\n";
    std::string lods = "3,1,1,999999,0\n1,1,0,100,1\n";
    std::string skeleton = "TEST.SKL\n";
    std::string parts = "\"Head\", 1, 2\n1\n0\n1,1\n1,0\n\"Body\", 0, 0\n0,0\n0,0\n";
    std::string vertices = "1\n0,1,0.5,0.25,0.125\n2\n1,0.75,1,2,3\n2,0.25,-1,-2,-3\n"
                           "2\n3,0.5,4,5,6\n4,0.5,0,0,0\n1\n5,1,9,9,9\n";
    std::string tris = "1,0,256,512,1,768,1024,2,65535,0\n0,2,0,0,1,0,0,0,0,0\n"
                       "0,0,0,0,0,0,0,0,0,0\n";
    std::string caps = "1\n";
    std::string textures = "SKIN.RAW\nFACE.RAW\nSKIN2.RAW\nFACE2.RAW\n";
    std::string origins = "0,0,0\n0,1,0\n0,0,0\n0,2,0\n0,1,1\n0,0,3\n";
    std::string scale = "2,3,4\n";
    std::string bias = "0.5,0.25,0\n";
    std::string bone_parts = "1\n0\n1\n0\n1\n0\n";

    [[nodiscard]] std::string text() const {
        std::string file = std::format("// version\n{}\n// counts\n{}", version, counts);
        if (version >= 3) {
            file += "// Lod list\n" + lods;
        }
        file += "// skeleton file\n" + skeleton + "// partList\n" + parts + "// vertexList\n" +
                vertices + "// triList\n" + tris + "// capTriList\n" + caps + "// texture list\n" +
                textures + "// bone origin list\n" + origins;
        if (version >= 2) {
            file += "// rootOffsetScale\n" + scale;
        }
        if (version >= 4) {
            file += "// biasUsed\n" + bias;
        }
        if (version >= 7) {
            file += "// partForBoneList\n" + bone_parts;
        }
        return file;
    }
};

// A version 3 skeleton of the bones a default SDfmFile follows: a chain from the root bone 0 down
// to bone 4, and bone 5 on the root too.
inline std::string chainSkeletonFile() {
    return "// v\n3\n// counts\n6,0\n// bones\n\"root\",-1\n\"one\",0\n\"two\",1\n\"three\",2\n"
           "\"four\",3\n\"five\",0\n// angles\n// roots\n// canceled\n// motion list version\n2\n"
           "// states\n0\n// motions\n0\n// origins\n0,0,0\n0,0,0\n0,0,0\n0,0,0\n0,0,0\n0,0,0\n";
}

// The renderer fixture with a deformable model manager, the skeleton TEST.SKL and textures the
// default model names on disk.
class CDeformableModelFixture : public engine::CDemonRendererFixture {
protected:
    CDeformableModelFixture() {
        using ::testing::Return;
        ON_CALL(screen_, getBitsPerPixel()).WillByDefault(Return(32));
        ON_CALL(screen_, getHardwarePalette32())
            .WillByDefault(Return(std::span<std::uint32_t, 256>(palette_)));
        ON_CALL(screen_, getHardwarePalette16())
            .WillByDefault(Return(std::span<std::uint16_t, 256>(palette16_)));
        ON_CALL(screen_, getColorMasks()).WillByDefault(::testing::ReturnRef(masks_));
        givenFile("data\\TEST.SKL", chainSkeletonFile());
        for (const char *name : {"SKIN.RAW", "FACE.RAW", "SKIN2.RAW", "FACE2.RAW"}) {
            givenFile(std::format("art\\{}", name), std::string(std::size_t{32} * 32, '\x01'));
        }
        textures_.initTextureCache();
    }

    void givenModel(std::string_view name, const SDfmFile &file) {
        givenFile(std::format("models\\{}", name), file.text());
    }

    std::array<std::uint32_t, 256> palette_{};
    std::array<std::uint16_t, 256> palette16_{};
    engine::SColorMasks masks_;
    CDeformableModelManager models_{dosio_, demon_renderer_};
};

} // namespace nocturne::core

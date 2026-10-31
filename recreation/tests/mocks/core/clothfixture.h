#pragma once

#include "core/dmodel/keyframedmodel.h"
#include "tests/mocks/core/mockkeyframedmodels.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>

#include <format>
#include <string>
#include <string_view>

namespace nocturne::core {

// A text .kfm of one frame: the 24.8 vertices, a line each, then the polygons, each its corners.
inline std::string clothModelText(std::string_view vertices, int vertex_count,
                                  std::string_view polygons, int poly_count) {
    return std::format("/\n5\n;\n{},{},0,0,1\n;\n0\n;\n{};\n{};\n", vertex_count, poly_count,
                       vertices, polygons);
}

// A version 3 .cth of the model, physics, locked points and bones, each a section's text.
inline std::string clothText(std::string_view model, std::string_view physics,
                             std::string_view locked, std::string_view bones) {
    return std::format("// version\n3\n// model\n{}\n// physics\n{}\n// transparency\n1\n"
                       "// double sided\n0\n// locked\n{}// bones\n{}",
                       model, physics, locked, bones);
}

// A disk of cloth files, whose models load as the keyframed models load their owners'.
class CClothFixture : public engine::CPodFixture {
protected:
    // Weight, gravity, dampen, spring, body and floor friction, wind area and inertia.
    static constexpr std::string_view kPhysics = "0.1,32,0.9,0.1,0.5,0.5,0.1,0.1";

    CClothFixture() {
        ON_CALL(models_, loadOwnedModel)
            .WillByDefault([](CKeyFramedModel &model, std::string_view name) { model.load(name); });
    }

    ::testing::NiceMock<MockKeyFramedModels> models_;
};

} // namespace nocturne::core

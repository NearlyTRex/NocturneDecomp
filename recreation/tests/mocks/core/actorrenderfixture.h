#pragma once

#include "core/actor/actorrenderowners.h"
#include "core/set/demonset.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"

namespace nocturne::core {

// What an actor draws itself with, as a set over a fixture's renderer hands it out.
class CActorRenderFixture : public engine::CDemonRendererFixture {
protected:
    CSetParts set_parts_{dosio_};
    CDemonSet set_{set_parts_.owners(demon_renderer_, three_d_, matrix_, special_, two_d_, screen_,
                                     raw_input_)};
    SActorRenderOwners render_owners_{.renderer = demon_renderer_,
                                      .three_d = three_d_,
                                      .special = special_,
                                      .set = set_,
                                      .camera_tables = set_parts_.tables};
};

} // namespace nocturne::core

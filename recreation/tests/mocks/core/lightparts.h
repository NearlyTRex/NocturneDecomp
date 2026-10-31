#pragma once

#include "common/random/watcomrandom.h"
#include "core/dcamera/cameratables.h"
#include "core/dfilter/demonfilter.h"
#include "core/dlight/demonlight.h"
#include "engine/fwd.h"

#include <array>
#include <cstddef>

namespace nocturne::core {

// What a CDemonLight is made with besides a fixture's screen and special: camera tables, a CRT
// stream, and eight global and four player filters 4 by 4 and 8 by 8, each brighter than the last.
class CLightParts {
public:
    static constexpr int kGlobalFilterSize = 4;
    static constexpr int kPlayerFilterSize = 8;

    CLightParts() {
        for (std::size_t i = 0; i < global_filters.size(); ++i) {
            global_filters[i] = CDemonFilter(kGlobalFilterSize, kGlobalFilterSize);
            global_filters[i].init((static_cast<float>(i) * 0.125F) + 0.125F, 0);
        }
        for (std::size_t i = 0; i < player_filters.size(); ++i) {
            player_filters[i] = CDemonFilter(kPlayerFilterSize, kPlayerFilterSize);
            player_filters[i].init((static_cast<float>(i) * 0.25F) + 0.25F, 0);
        }
    }

    [[nodiscard]] SDemonLightOwners owners(engine::IScreenDevice &screen,
                                           engine::CSpecial &special) {
        return {.camera = {.tables = tables,
                           .screen = screen,
                           .special = special,
                           .crt_random = crt_random},
                .global_filters = global_filters,
                .player_filters = player_filters};
    }

    SCameraTables tables;
    common::CWatcomRandom crt_random;
    std::array<CDemonFilter, 8> global_filters;
    std::array<CDemonFilter, 4> player_filters;
};

} // namespace nocturne::core

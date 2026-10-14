#pragma once

#include "engine/alphabit/alphabitmap.h"
#include "engine/fwd.h"

#include <cstddef>
#include <vector>

namespace nocturne::engine {

// The game's mouse pointer: its cursor frames and the flame and skull effects drawn on it.
class CMouse {
public:
    static constexpr std::size_t kCursorCount = 8;
    static constexpr std::size_t kFlameCount = 7;
    static constexpr std::size_t kSkullCount = 15;

    CMouse(const CDosIo &dosio, IScreenDevice &screen, CSpecial &special);
    ~CMouse();
    CMouse(const CMouse &) = delete;
    CMouse &operator=(const CMouse &) = delete;
    CMouse(CMouse &&) = delete;
    CMouse &operator=(CMouse &&) = delete;

    // art/crsr1..8, flame1..7 and crsrskll1..7, the last skull filling the rest of the skulls.
    void load();
    void reset();

    [[nodiscard]] CAlphaBitmap &getCursor(std::size_t index);
    [[nodiscard]] CAlphaBitmap &getFlame(std::size_t index);
    [[nodiscard]] CAlphaBitmap &getSkull(std::size_t index);

private:
    std::vector<CAlphaBitmap> cursors_;
    std::vector<CAlphaBitmap> flames_;
    std::vector<CAlphaBitmap> skulls_;
};

} // namespace nocturne::engine

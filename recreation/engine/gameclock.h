#pragma once

namespace nocturne::engine {

// winrun's game clock, for the code below wincore that times itself by it.
class IGameClock {
public:
    // Ticks of the 1.19 MHz PIT, 65536 * 18 a second, wrapping as an int.
    static constexpr int kTicksPerSecond = 65536 * 18;

    virtual ~IGameClock() = default;

    [[nodiscard]] virtual int getTime() = 0;
};

} // namespace nocturne::engine

#pragma once

#include "platform/clock.h"

namespace nocturne::platform::sdl {

class CSdlClock final : public IClock {
public:
    [[nodiscard]] std::uint64_t getCounter() override;
    [[nodiscard]] std::uint64_t getCounterFrequency() override;
    void sleep(std::chrono::duration<double> duration) override;
};

} // namespace nocturne::platform::sdl

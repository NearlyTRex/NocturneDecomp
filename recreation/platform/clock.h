#pragma once

#include <chrono>
#include <cstdint>

namespace nocturne::platform {

class IClock {
public:
    virtual ~IClock() = default;

    // Monotonic; wincore::getTime turns it into game ticks.
    [[nodiscard]] virtual std::uint64_t getCounter() = 0;
    [[nodiscard]] virtual std::uint64_t getCounterFrequency() = 0;
    virtual void sleep(std::chrono::duration<double> duration) = 0;
};

} // namespace nocturne::platform

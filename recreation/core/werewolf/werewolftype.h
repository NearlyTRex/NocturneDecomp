#pragma once

#include <cstdint>

namespace nocturne::core {

// Where a werewolf hunts and how; files save the number.
enum class EWerewolfType : std::uint8_t {
    kTrain = 0,
    kTrainAlpha = 1,
    kForest = 2,
};

} // namespace nocturne::core

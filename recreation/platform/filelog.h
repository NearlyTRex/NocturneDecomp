#pragma once

#include "platform/fwd.h"
#include "platform/log.h"

#include <array>
#include <string_view>

namespace nocturne::platform {

// The logs as files in the game's directory, nocturne_<subsystem>.log as the decomp named them.
// A run's first line empties its file; every line is written through, so a crash keeps what came
// before it.
class CFileLog final : public ILog {
public:
    explicit CFileLog(IFileSystem &file_system);

    void write(ELogSubsystem subsystem, std::string_view line) override;

private:
    static constexpr std::size_t kSubsystemCount = 6;

    IFileSystem &file_system_;
    std::array<bool, kSubsystemCount> started_{};
};

} // namespace nocturne::platform

#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"
#include "engine/pod/pod.h"
#include "platform/fwd.h"

#include <cstddef>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {

// The game's pods: the packages loadorder.txt turns on, in its order. A later package's files win
// over an earlier one's; in a package, its PODs win over its loose files. What isn't loaded, and
// why, goes to the file log; with nothing loaded, the game can't start.
class CDemonPod : public engine::CPod {
public:
    // The install is recognised by the releases.
    CDemonPod(platform::IFileSystem &file_system, const engine::CDosIo &dosio,
              std::span<const engine::SRelease> releases, platform::ILog &log);
    ~CDemonPod() override;
    CDemonPod(const CDemonPod &) = delete;
    CDemonPod &operator=(const CDemonPod &) = delete;

    void load() override;
    // The base game's loose files are the disk's, which the lookup after this one finds.
    bool findFile(engine::SFoundFileInfo &found_file_info) override;
    void dismount(std::string_view filename) override;

private:
    // A package as its files are looked up: its folder and the PODs it mounted, the one that
    // answers first first.
    struct SLoadedPackage {
        std::string folder;
        std::vector<std::string> pods;
        std::vector<const engine::CPodFile *> mounted;
    };

    void loadPackage(engine::SPackage &package);
    [[nodiscard]] bool hasRequiredPods(const engine::SPackage &package,
                                       std::span<const engine::SPodCheck> checks);
    void mountPods(const engine::SPackage &package, std::span<const engine::SPodCheck> checks,
                   SLoadedPackage &loaded);
    // The PODs each package mounted, found again among the mounted ones once a pod is unmounted.
    void refreshMounted();
    [[nodiscard]] bool findLooseFile(const SLoadedPackage &package,
                                     engine::SFoundFileInfo &found_file_info) const;
    // Why the file can't be mounted, or empty when it can.
    [[nodiscard]] std::string_view whyNotAPod(const std::string &path);
    void report(std::string_view note);

    const engine::CDosIo &dosio_;
    std::span<const engine::SRelease> releases_;
    platform::ILog &log_;
    // The latest loaded first.
    std::vector<SLoadedPackage> packages_;
    // Why each package left out for a POD it needs was.
    std::vector<std::string> left_out_;
    std::size_t mounted_count_ = 0;
};

} // namespace nocturne::core

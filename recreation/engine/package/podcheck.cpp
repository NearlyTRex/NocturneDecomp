#include "engine/package/podcheck.h"

#include "engine/package/packagedata.h"
#include "engine/package/podhash.h"
#include "platform/filesystem.h"

#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {
namespace {

std::string joinPath(std::string_view folder, std::string_view path) {
    if (folder.empty()) {
        return std::string(path);
    }
    return std::string(folder) + "/" + std::string(path);
}

EPodState checkPod(platform::IFileSystem &file_system, std::string_view folder, SPackagePod &pod) {
    const std::string path = joinPath(folder, pod.path);
    const std::optional<platform::SFileInfo> info = file_system.getFileInfo(path);
    if (!info) {
        return EPodState::Missing;
    }
    if (!pod.xxh3 || (pod.size == info->size && pod.modified == info->modified)) {
        return EPodState::Unchanged;
    }
    const std::optional<std::string> hash = hashFile(file_system, path);
    if (!hash) {
        return EPodState::Unreadable;
    }
    if (*hash != *pod.xxh3) {
        return EPodState::Changed;
    }
    pod.size = info->size;
    pod.modified = info->modified;
    return EPodState::Rehashed;
}

} // namespace

std::vector<SPodCheck> checkPackagePods(platform::IFileSystem &file_system, std::string_view folder,
                                        SPackageManifest &manifest) {
    std::vector<SPodCheck> checks;
    checks.reserve(manifest.pods.size());
    for (SPackagePod &pod : manifest.pods) {
        checks.push_back({.path = pod.path, .state = checkPod(file_system, folder, pod)});
    }
    return checks;
}

} // namespace nocturne::engine

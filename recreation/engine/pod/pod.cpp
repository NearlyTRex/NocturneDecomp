#include "engine/pod/pod.h"

#include "common/error/error.h"
#include "common/text/ascii.h"
#include "common/text/wildcard.h"
#include "engine/dosio/dosio.h"
#include "engine/dosio/dosio_functions.h"
#include "engine/pod/podfile.h"

#include <algorithm>
#include <format>
#include <utility>

namespace nocturne::engine {

// nocedit 0x00550980
CPod::CPod(platform::IFileSystem &file_system, const CDosIo &dosio)
    : file_system_(file_system), dosio_(dosio) {}

// nocedit 0x005509b0
CPod::~CPod() = default;

// nocedit 0x005509e0
void CPod::load() {}

// findFileInPod, the hook startup registered, forwarded here; startup registers this instead.
// nocedit 0x00551380
// nocedit 0x00551960
bool CPod::findFile(SFoundFileInfo &found_file_info) {
    for (const std::unique_ptr<CPodFile> &pod : pod_files_) {
        const int index = pod->findFileIndex(found_file_info.found_path);
        if (index >= 0) {
            pod->populateFileInfo(index, found_file_info);
            return true;
        }
    }
    return false;
}

// nocedit 0x00550a10
void CPod::mount(std::string_view pod_filename) {
    if (pod_files_.size() >= kMaxPods) {
        common::displayErrorAndQuit("Too many .POD files at once!");
    }
    auto pod = std::make_unique<CPodFile>(file_system_, dosio_);
    if (!pod->mountFromFile(pod_filename)) {
        common::displayErrorAndQuit(std::format("Can't mount {}", pod_filename));
    }
    pod_files_.push_back(std::move(pod));
}

// The retail build clears the texture cache here, whether or not a pod was mounted from the file,
// which the game registers as the dismount handler.
// nocedit 0x00550b90
void CPod::dismount(std::string_view filename) {
    SFoundFileInfo info{std::string(filename)};
    if (!dosio_.findFileNormally(info)) {
        return;
    }
    std::erase_if(pod_files_, [&info](const std::unique_ptr<CPodFile> &pod) {
        return common::equalsIgnoringAsciiCase(pod->getFilename(), info.target_path);
    });
    if (dismount_handler_) {
        dismount_handler_();
    }
}

// nocedit 0x00550af0
void CPod::remount() {
    for (const std::unique_ptr<CPodFile> &pod : pod_files_) {
        const std::string filename = pod->getFilename();
        if (!pod->mountFromFile(filename)) {
            common::displayErrorAndQuit(std::format("Can't re-mount {}", filename));
        }
    }
}

// nocedit 0x00550c30
void CPod::init() {
    if (pod_files_.empty()) {
        load();
    }
}

// nocedit 0x00550c80
void CPod::cleanup() {
    pod_files_.clear();
}

// nocedit 0x00550ea0
void CPod::initSearch(std::string_view search_pattern, CPodSearchContext &search_context) {
    search_context.search_pattern = search_pattern;
    search_context.current_pod_index = 0;
    search_context.current_file_index = 0;
    static_cast<void>(getNextSearchResult(search_context));
}

// Pods in mount order, then files in name order; a match leaves the context past it.
// nocedit 0x00550ef0
bool CPod::getNextSearchResult(CPodSearchContext &search_context) {
    auto &pod_index = search_context.current_pod_index;
    auto &file_index = search_context.current_file_index;
    for (pod_index = std::max(pod_index, 0); std::cmp_less(pod_index, pod_files_.size());
         ++pod_index, file_index = 0) {
        const CPodFile &pod = *pod_files_[static_cast<std::size_t>(pod_index)];
        const std::vector<CPodDirectoryEntry> &entries = pod.getEntries();
        for (file_index = std::max(file_index, 0); std::cmp_less(file_index, entries.size());
             ++file_index) {
            const std::string &name = entries[static_cast<std::size_t>(file_index)].name;
            if (common::matchesWildcard(search_context.search_pattern, name)) {
                search_context.current_file_info.found_path = name;
                pod.populateFileInfo(file_index, search_context.current_file_info);
                ++file_index;
                return true;
            }
        }
    }
    search_context.current_file_info.found_path.clear();
    return false;
}

// nocedit 0x005512f0
const CPodFile *CPod::locateFile(std::string_view base_path, std::string_view filename,
                                 int *file_index_out) const {
    const std::string path = getRelativeFilePath(base_path, filename);
    for (const std::unique_ptr<CPodFile> &pod : pod_files_) {
        const int index = pod->findFileIndex(path);
        if (index >= 0) {
            if (file_index_out != nullptr) {
                *file_index_out = index;
            }
            return pod.get();
        }
    }
    return nullptr;
}

const std::vector<std::unique_ptr<CPodFile>> &CPod::getPodFiles() const {
    return pod_files_;
}

void CPod::setDismountHandler(std::function<void()> handler) {
    dismount_handler_ = std::move(handler);
}

platform::IFileSystem &CPod::getFileSystem() {
    return file_system_;
}

} // namespace nocturne::engine

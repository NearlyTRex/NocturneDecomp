#pragma once

#include "engine/dosio/foundfileinfo.h"
#include "engine/fwd.h"
#include "platform/fwd.h"

#include <functional>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// Where a wildcard search over the pods has got to, and the match it last found.
struct CPodSearchContext {
    std::string search_pattern;
    int current_pod_index = 0;
    int current_file_index = 0;
    SFoundFileInfo current_file_info;
};

// The mounted pods, searched in the order they were mounted: the first that holds a name wins.
class CPod {
public:
    static constexpr std::size_t kMaxPods = 100;

    CPod(platform::IFileSystem &file_system, const CDosIo &dosio);
    virtual ~CPod();
    CPod(const CPod &) = delete;
    CPod &operator=(const CPod &) = delete;

    // Mounts the game's pods; the base has none.
    virtual void load();
    virtual bool findFile(SFoundFileInfo &found_file_info);
    virtual void mount(std::string_view pod_filename);
    // Unmounts every pod mounted from the file, and tells the dismount handler.
    virtual void dismount(std::string_view filename);
    virtual void remount();

    // Loads the pods unless some are mounted already.
    void init();
    void cleanup();
    void initSearch(std::string_view search_pattern, CPodSearchContext &search_context);
    [[nodiscard]] bool getNextSearchResult(CPodSearchContext &search_context);
    // The pod holding base_path\filename, with the file's index; null when none does.
    [[nodiscard]] const CPodFile *locateFile(std::string_view base_path, std::string_view filename,
                                             int *file_index_out = nullptr) const;
    [[nodiscard]] const std::vector<std::unique_ptr<CPodFile>> &getPodFiles() const;
    // Called after a dismount, so what was cached from the pods can go: the texture cache.
    void setDismountHandler(std::function<void()> handler);

protected:
    [[nodiscard]] platform::IFileSystem &getFileSystem();

private:
    platform::IFileSystem &file_system_;
    const CDosIo &dosio_;
    std::vector<std::unique_ptr<CPodFile>> pod_files_;
    std::function<void()> dismount_handler_;
};

} // namespace nocturne::engine

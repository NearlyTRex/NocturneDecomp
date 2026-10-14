#pragma once

#include <cstdint>
#include <ctime>
#include <string>
#include <utility>

namespace nocturne::engine {

// A lookup's question and answer. found_path is the name asked for; the rest is where it is.
struct SFoundFileInfo {
    SFoundFileInfo() = default;
    explicit SFoundFileInfo(std::string path) : found_path(std::move(path)) {}

    std::string found_path;
    // The file to open: the file itself, or the pod holding it.
    std::string target_path;
    std::int64_t file_offset = 0;
    std::int64_t file_size = 0;
    bool is_archive = false;
    std::time_t timestamp = 0;
    // The pod's own time for a file in a pod; the file's for one on disk.
    std::time_t container_timestamp = 0;
};

} // namespace nocturne::engine

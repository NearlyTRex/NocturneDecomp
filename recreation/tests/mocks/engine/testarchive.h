#pragma once

#include <archive.h>
#include <archive_entry.h>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace nocturne::engine {

enum class ETestArchiveFormat : std::uint8_t { Zip, SevenZip };

// A file, or a folder when its path ends in '/', as an archive holds it.
struct STestArchiveEntry {
    std::string path;
    std::string contents;
};

// A symbolic link in an archive.
struct STestArchiveLink {
    std::string path;
    std::string target;
};

// The archive's bytes, made with libarchive's own writer: the entries, then the links.
inline std::string makeTestArchive(ETestArchiveFormat format,
                                   const std::vector<STestArchiveEntry> &entries,
                                   const std::vector<STestArchiveLink> &links = {}) {
    constexpr int kFilePermissions = 0644;
    constexpr int kFolderPermissions = 0755;
    constexpr std::size_t kCapacity = std::size_t{1} << 20U;
    std::string bytes(kCapacity, '\0');
    std::size_t used = 0;
    const std::unique_ptr<archive, decltype(&archive_write_free)> writer(archive_write_new(),
                                                                         &archive_write_free);
    if (format == ETestArchiveFormat::Zip) {
        archive_write_set_format_zip(writer.get());
    } else {
        archive_write_set_format_7zip(writer.get());
    }
    archive_write_open_memory(writer.get(), bytes.data(), bytes.size(), &used);
    for (const STestArchiveEntry &entry : entries) {
        const std::unique_ptr<archive_entry, decltype(&archive_entry_free)> header(
            archive_entry_new(), &archive_entry_free);
        archive_entry_set_pathname(header.get(), entry.path.c_str());
        if (entry.path.ends_with('/')) {
            archive_entry_set_filetype(header.get(), AE_IFDIR);
            archive_entry_set_perm(header.get(), kFolderPermissions);
        } else {
            archive_entry_set_filetype(header.get(), AE_IFREG);
            archive_entry_set_perm(header.get(), kFilePermissions);
            archive_entry_set_size(header.get(), static_cast<la_int64_t>(entry.contents.size()));
        }
        if (archive_write_header(writer.get(), header.get()) != ARCHIVE_OK) {
            throw std::runtime_error(archive_error_string(writer.get()));
        }
        archive_write_data(writer.get(), entry.contents.data(), entry.contents.size());
    }
    for (const STestArchiveLink &link : links) {
        const std::unique_ptr<archive_entry, decltype(&archive_entry_free)> header(
            archive_entry_new(), &archive_entry_free);
        archive_entry_set_pathname(header.get(), link.path.c_str());
        archive_entry_set_filetype(header.get(), AE_IFLNK);
        archive_entry_set_symlink(header.get(), link.target.c_str());
        if (archive_write_header(writer.get(), header.get()) != ARCHIVE_OK) {
            throw std::runtime_error(archive_error_string(writer.get()));
        }
    }
    archive_write_close(writer.get());
    bytes.resize(used);
    return bytes;
}

} // namespace nocturne::engine

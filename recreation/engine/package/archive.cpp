#include "engine/package/archive.h"

#include "common/text/path.h"
#include "platform/file.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <archive.h>
#include <archive_entry.h>
#include <array>
#include <cstddef>
#include <cstdint>
#include <expected>
#include <format>
#include <functional>
#include <memory>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::engine {
namespace {

constexpr std::array kZipSignature{std::byte{'P'}, std::byte{'K'}, std::byte{3}, std::byte{4}};
// An empty ZIP is only its end record.
constexpr std::array kEmptyZipSignature{std::byte{'P'}, std::byte{'K'}, std::byte{5}, std::byte{6}};
constexpr std::array kSevenZipSignature{std::byte{'7'},  std::byte{'z'},  std::byte{0xbc},
                                        std::byte{0xaf}, std::byte{0x27}, std::byte{0x1c}};
constexpr std::size_t kSignatureSize = kSevenZipSignature.size();
constexpr std::size_t kBlockSize = std::size_t{1} << 16U;

bool startsWith(std::span<const std::byte> head, std::span<const std::byte> signature) {
    return head.size() >= signature.size() &&
           std::ranges::equal(head.first(signature.size()), signature);
}

// The path inside the folder an entry is unpacked in, '/' between folders and "." left out;
// nothing when it would be written outside it.
std::optional<std::string> pathInFolder(std::string_view path) {
    if (path.starts_with('/') || path.starts_with('\\') || path.contains(':')) {
        return std::nullopt;
    }
    std::string inside;
    std::size_t start = 0;
    while (start <= path.size()) {
        const std::size_t end = std::min(path.find_first_of("/\\", start), path.size());
        const std::string_view part = path.substr(start, end - start);
        start = end + 1;
        if (part == "..") {
            return std::nullopt;
        }
        if (!part.empty() && part != ".") {
            inside = common::joinPath(inside, part);
        }
    }
    return inside;
}

// An archive read through the file system, a ZIP or a 7z.
class CArchiveReader {
public:
    CArchiveReader(std::unique_ptr<platform::IFile> file, std::int64_t size)
        : file_(std::move(file)), size_(size) {
        archive_read_support_format_zip(archive_.get());
        archive_read_support_format_7zip(archive_.get());
        archive_read_set_callback_data(archive_.get(), this);
        archive_read_set_read_callback(archive_.get(), &CArchiveReader::read);
        archive_read_set_seek_callback(archive_.get(), &CArchiveReader::seek);
    }

    CArchiveReader(const CArchiveReader &) = delete;
    CArchiveReader &operator=(const CArchiveReader &) = delete;
    ~CArchiveReader() = default;

    [[nodiscard]] std::expected<void, std::string> open() {
        if (archive_read_open1(archive_.get()) != ARCHIVE_OK) {
            return std::unexpected(error());
        }
        return {};
    }

    // The next entry, null at the end.
    [[nodiscard]] std::expected<archive_entry *, std::string> next() {
        archive_entry *entry = nullptr;
        const int result = archive_read_next_header(archive_.get(), &entry);
        if (result == ARCHIVE_EOF) {
            return nullptr;
        }
        if (result < ARCHIVE_WARN) {
            return std::unexpected(error());
        }
        return entry;
    }

    // The current entry's bytes, written to the file.
    [[nodiscard]] std::expected<void, std::string> copyTo(platform::IFile &file) {
        const void *block = nullptr;
        std::size_t size = 0;
        la_int64_t offset = 0;
        int result = ARCHIVE_OK;
        while ((result = archive_read_data_block(archive_.get(), &block, &size, &offset)) ==
               ARCHIVE_OK) {
            if (!file.write(std::span(static_cast<const std::byte *>(block), size))) {
                return std::unexpected(std::string("it couldn't be written"));
            }
        }
        if (result != ARCHIVE_EOF) {
            return std::unexpected(error());
        }
        return {};
    }

    // Why libarchive last failed. It names no reason for a seek the file couldn't make.
    [[nodiscard]] std::string error() {
        const char *text = archive_error_string(archive_.get());
        return text == nullptr ? std::string("it can't be read") : std::string(text);
    }

private:
    static la_ssize_t read(archive * /*archive*/, void *data, const void **block) {
        CArchiveReader &self = *static_cast<CArchiveReader *>(data);
        *block = self.buffer_.data();
        return static_cast<la_ssize_t>(self.file_->read(self.buffer_));
    }

    // From the start, the current place or the end, as whence is SEEK_SET, SEEK_CUR or SEEK_END.
    static la_int64_t seek(archive * /*archive*/, void *data, la_int64_t offset, int whence) {
        CArchiveReader &self = *static_cast<CArchiveReader *>(data);
        const std::array<std::int64_t, 3> origins{0, self.file_->tell(), self.size_};
        return self.file_->seek(origins.at(static_cast<std::size_t>(whence)) + offset)
                   ? self.file_->tell()
                   : ARCHIVE_FATAL;
    }

    std::unique_ptr<platform::IFile> file_;
    std::int64_t size_;
    std::unique_ptr<archive, decltype(&archive_read_free)> archive_{archive_read_new(),
                                                                    &archive_read_free};
    std::array<std::byte, kBlockSize> buffer_{};
};

using EntryVisitor =
    std::function<std::expected<void, std::string>(const SArchiveEntry &, CArchiveReader &)>;

// Each file and folder in turn, the visitor seeing its path checked.
std::expected<void, std::string> visitArchive(platform::IFileSystem &file_system,
                                              std::string_view path, const EntryVisitor &visit) {
    const std::optional<platform::SFileInfo> info = file_system.getFileInfo(path);
    if (!info) {
        return std::unexpected(std::format("{} is missing", path));
    }
    std::unique_ptr<platform::IFile> file = file_system.openFile(path, platform::EFileMode::Read);
    if (file == nullptr) {
        return std::unexpected(std::format("{} can't be read", path));
    }
    const auto reader =
        std::make_unique<CArchiveReader>(std::move(file), static_cast<std::int64_t>(info->size));
    if (const std::expected<void, std::string> opened = reader->open(); !opened) {
        return std::unexpected(std::format("{}: {}", path, opened.error()));
    }
    while (true) {
        const std::expected<archive_entry *, std::string> entry = reader->next();
        if (!entry) {
            return std::unexpected(std::format("{}: {}", path, entry.error()));
        }
        if (*entry == nullptr) {
            return {};
        }
        // A 7z's names are UTF-16, which the "C" locale the game runs in has no conversion for
        // past ASCII.
        const char *raw_name = archive_entry_pathname(*entry);
        if (raw_name == nullptr) {
            return std::unexpected(std::format("{}: {}", path, reader->error()));
        }
        const std::string_view name = raw_name;
        const auto type = archive_entry_filetype(*entry);
        if (type != AE_IFREG && type != AE_IFDIR) {
            return std::unexpected(std::format("{}: {} isn't a plain file or folder", path, name));
        }
        std::optional<std::string> inside = pathInFolder(name);
        if (!inside) {
            return std::unexpected(std::format("{}: {} leads out of its folder", path, name));
        }
        if (inside->empty()) {
            continue;
        }
        const SArchiveEntry found{.path = std::move(*inside), .is_folder = type == AE_IFDIR};
        if (std::expected<void, std::string> visited = visit(found, *reader); !visited) {
            return std::unexpected(std::format("{}: {}: {}", path, found.path, visited.error()));
        }
    }
}

// The folder holding the entry, in the folder the archive is unpacked in.
std::string parentIn(std::string_view folder, std::string_view entry) {
    const std::size_t slash = entry.rfind('/');
    return slash == std::string_view::npos ? std::string(folder)
                                           : common::joinPath(folder, entry.substr(0, slash));
}

} // namespace

bool isArchive(platform::IFileSystem &file_system, std::string_view path) {
    const std::unique_ptr<platform::IFile> file =
        file_system.openFile(path, platform::EFileMode::Read);
    if (file == nullptr) {
        return false;
    }
    std::array<std::byte, kSignatureSize> head{};
    const std::span<const std::byte> read = std::span(head).first(file->read(head));
    return startsWith(read, kZipSignature) || startsWith(read, kEmptyZipSignature) ||
           startsWith(read, kSevenZipSignature);
}

std::expected<std::vector<SArchiveEntry>, std::string>
listArchive(platform::IFileSystem &file_system, std::string_view path) {
    std::vector<SArchiveEntry> entries;
    std::expected<void, std::string> visited =
        visitArchive(file_system, path,
                     [&entries](const SArchiveEntry &entry,
                                CArchiveReader & /*reader*/) -> std::expected<void, std::string> {
                         entries.push_back(entry);
                         return {};
                     });
    if (!visited) {
        return std::unexpected(std::move(visited.error()));
    }
    return entries;
}

// Each entry's checked before any is written, so an archive that can't be unpacked whole writes
// nothing.
std::expected<void, std::string> unpackArchive(platform::IFileSystem &file_system,
                                               std::string_view path, std::string_view folder) {
    if (std::expected<std::vector<SArchiveEntry>, std::string> listed =
            listArchive(file_system, path);
        !listed) {
        return std::unexpected(std::move(listed.error()));
    }
    if (!file_system.makeDirectory(folder)) {
        return std::unexpected(std::format("{} couldn't be made", folder));
    }
    return visitArchive(
        file_system, path,
        [&file_system, folder](const SArchiveEntry &entry,
                               CArchiveReader &reader) -> std::expected<void, std::string> {
            const std::string target = common::joinPath(folder, entry.path);
            if (!file_system.makeDirectory(entry.is_folder ? target
                                                           : parentIn(folder, entry.path))) {
                return std::unexpected(std::string("its folder couldn't be made"));
            }
            if (entry.is_folder) {
                return {};
            }
            const std::unique_ptr<platform::IFile> file =
                file_system.openFile(target, platform::EFileMode::Write);
            if (file == nullptr) {
                return std::unexpected(std::string("it couldn't be written"));
            }
            return reader.copyTo(*file);
        });
}

} // namespace nocturne::engine

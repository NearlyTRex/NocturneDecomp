#include "engine/pod/podfile.h"

#include "common/serial/binaryreader.h"
#include "common/text/ascii.h"
#include "engine/dosio/dosio.h"
#include "engine/dosio/foundfileinfo.h"
#include "engine/pod/pod_functions.h"
#include "platform/file.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <array>
#include <cstdint>
#include <expected>
#include <limits>
#include <memory>
#include <optional>
#include <ranges>
#include <string>
#include <vector>

namespace nocturne::engine {
namespace {

// The layouts are the retail build's: POD2 starts "POD2", and anything else is read as POD1.
constexpr std::size_t kPod2HeaderSize = 0x60;
constexpr std::size_t kPod2EntrySize = 0x14;
constexpr std::size_t kPod1HeaderSize = 0x54;
constexpr std::size_t kPod1EntrySize = 0x28;
constexpr std::size_t kDescriptionSize = 80;
constexpr std::size_t kPod1NameSize = 32;
constexpr std::size_t kPod2MagicOffset = 8;
// The POD2 name block holds at least one byte and at most 256 for each file.
constexpr std::int64_t kMaxNameBytes = 256;
constexpr std::array kPod2Magic = {std::byte{'P'}, std::byte{'O'}, std::byte{'D'}, std::byte{'2'}};
// The whole-file CRC covers from here to the end, and is stored in the 4 bytes before it.
constexpr std::int64_t kPod1CrcStart = kPod1HeaderSize;
constexpr std::int64_t kPod2CrcStart = kPod2MagicOffset;
constexpr std::int64_t kStoredCrcSize = 4;
// nocedit's g_FileIOBuffer.
constexpr std::size_t kCrcBlockSize = 0x10000;
constexpr std::size_t kAuditRecordSize = 0x138;
constexpr std::size_t kAuditUserNameSize = 32;
constexpr std::size_t kAuditFilenameSize = 256;
constexpr std::int32_t kFirstAuditOperation =
    static_cast<std::int32_t>(EPodAuditOperation::POD_AUDIT_OPERATION_ADD);
constexpr std::int32_t kLastAuditOperation =
    static_cast<std::int32_t>(EPodAuditOperation::POD_AUDIT_OPERATION_CHANGE);

// The CRC of up to limit bytes from the file's position, read a block at a time, and how many
// bytes it covers: fewer than limit when the file ends first.
struct SStreamCrc {
    std::uint32_t crc = kCrc32Initial;
    std::uint64_t length = 0;
};

SStreamCrc computeStreamCrc(platform::IFile &file, std::uint64_t limit) {
    std::vector<std::byte> block(kCrcBlockSize);
    SStreamCrc result;
    while (result.length < limit) {
        const auto wanted =
            static_cast<std::size_t>(std::min<std::uint64_t>(block.size(), limit - result.length));
        const std::size_t got = file.read(std::span(block).first(wanted));
        result.crc = crc32UpdateBuffer(std::span(block).first(got), result.crc);
        result.length += got;
        if (got < wanted) {
            break;
        }
    }
    return result;
}

// Exactly count bytes, or nothing when the file ends first.
std::optional<std::vector<std::byte>> readExactly(platform::IFile &file, std::size_t count) {
    std::vector<std::byte> bytes(count);
    if (file.read(bytes) != count) {
        return std::nullopt;
    }
    return bytes;
}

// The NUL-terminated name at offset, ending at the block's end when it has no NUL.
std::string nameAt(std::span<const std::byte> block, std::size_t offset) {
    std::string name;
    for (std::size_t i = offset; i < block.size() && block[i] != std::byte{0}; ++i) {
        name.push_back(static_cast<char>(block[i]));
    }
    return name;
}

} // namespace

// nocedit 0x0054f5a0
CPodFile::CPodFile(platform::IFileSystem &file_system, const CDosIo &dosio)
    : file_system_(file_system), dosio_(dosio) {}

// nocedit 0x0054f610
CPodFile::~CPodFile() = default;

// The retail build reads POD1 and POD2 only, and sorts the directory with a stable sort. The
// original also kept where a POD2's audit trail starts, for getAuditRecord, which retail never
// calls.
// nocedit 0x0054f650
bool CPodFile::mountFromFile(std::string_view pod_filename) {
    cleanup();
    filename_ = file_system_.getFullPath(pod_filename).value_or(std::string(pod_filename));
    timestamp_ = dosio_.getFileTimestamp({}, filename_);
    const std::unique_ptr<platform::IFile> file =
        file_system_.openFile(filename_, platform::EFileMode::Read);
    if (file == nullptr) {
        cleanup();
        return false;
    }
    std::array<std::byte, kPod2HeaderSize> header{};
    // The original took a file starting "POD2" but shorter than the header as POD2, its tail
    // uninitialised.
    const bool is_pod2 = file->read(header) == header.size() &&
                         std::ranges::equal(std::span(header).first(kPod2Magic.size()), kPod2Magic);
    if (!(is_pod2 ? readPod2(*file, header) : readPod1(*file))) {
        cleanup();
        return false;
    }
    std::ranges::stable_sort(entries_,
                             [](const CPodDirectoryEntry &a, const CPodDirectoryEntry &b) {
                                 return common::compareIgnoringAsciiCase(a.name, b.name) < 0;
                             });
    return true;
}

// The directory follows the header, then the names it points into; the first file's data
// follows the names, so its offset gives the name block's size.
bool CPodFile::readPod2(platform::IFile &file, std::span<const std::byte> header) {
    common::CBinaryReader reader(header);
    reader.skip(kPod2MagicOffset);
    // The original copied a description with no NUL on past its 80 bytes.
    description_ = reader.readString(kDescriptionSize);
    const auto count = reader.read<std::int32_t>();
    const auto audit_count = reader.read<std::int32_t>();
    // Retail's malloc gives null for an empty directory, which fails the mount.
    if (count <= 0) {
        return false;
    }
    version_ = 2;
    std::vector<std::uint32_t> name_offsets;
    // The original read on past a short directory with the rest uninitialised.
    for (std::int32_t i = 0; i < count; ++i) {
        const std::optional<std::vector<std::byte>> record = readExactly(file, kPod2EntrySize);
        if (!record) {
            return false;
        }
        common::CBinaryReader fields(*record);
        name_offsets.push_back(fields.read<std::uint32_t>());
        CPodDirectoryEntry &entry = entries_.emplace_back();
        entry.size = fields.read<std::uint32_t>();
        entry.offset = fields.read<std::uint32_t>();
        entry.timestamp = fields.read<std::uint32_t>();
        entry.checksum = fields.read<std::uint32_t>();
    }
    const std::int64_t names_size =
        static_cast<std::int64_t>(entries_.front().offset) -
        static_cast<std::int64_t>(kPod2HeaderSize) -
        (static_cast<std::int64_t>(count) * static_cast<std::int64_t>(kPod2EntrySize));
    if (names_size < count || names_size > count * kMaxNameBytes) {
        return false;
    }
    // The original read on past a short name block with the rest uninitialised.
    const std::optional<std::vector<std::byte>> names =
        readExactly(file, static_cast<std::size_t>(names_size));
    if (!names) {
        return false;
    }
    const std::vector<std::byte> &block = *names;
    for (std::size_t i = 0; i < entries_.size(); ++i) {
        if (name_offsets[i] >= block.size()) {
            return false;
        }
        entries_[i].name = nameAt(block, name_offsets[i]);
    }
    audit_count_ = audit_count;
    audit_records_offset_ = entries_.back().offset + entries_.back().size;
    return true;
}

// Each entry holds its own name; the files carry no time of their own, so they take the pod's.
bool CPodFile::readPod1(platform::IFile &file) {
    file.seek(0);
    // The original parsed a short header with the rest uninitialised.
    const std::optional<std::vector<std::byte>> header = readExactly(file, kPod1HeaderSize);
    if (!header) {
        return false;
    }
    common::CBinaryReader reader(*header);
    const auto count = reader.read<std::int32_t>();
    // Retail's malloc gives null for an empty directory, which fails the mount.
    if (count <= 0) {
        return false;
    }
    version_ = 1;
    description_ = reader.readString(kDescriptionSize);
    // The original took a record cut short as the one before it, or uninitialised memory.
    for (std::int32_t i = 0; i < count; ++i) {
        const std::optional<std::vector<std::byte>> record = readExactly(file, kPod1EntrySize);
        if (!record) {
            return false;
        }
        common::CBinaryReader fields(*record);
        CPodDirectoryEntry &entry = entries_.emplace_back();
        // The original took a name with no NUL on past its 32 bytes.
        entry.name = fields.readString(kPod1NameSize);
        entry.size = fields.read<std::uint32_t>();
        entry.offset = fields.read<std::uint32_t>();
        entry.timestamp = timestamp_;
    }
    audit_count_ = 0;
    audit_records_offset_ = 0;
    return true;
}

// The original kept the description.
// nocedit 0x00550090
void CPodFile::cleanup() {
    version_ = 0;
    filename_.clear();
    entries_.clear();
    audit_count_ = 0;
    audit_records_offset_ = 0;
}

// The original drew the editor's progress and listed the failing files in a pick list; the
// failure is the result instead. It also refused a pod with no filename, which a mounted one has.
// nocedit 0x00550230
std::expected<void, std::string> CPodFile::verifyChecksum() const {
    if (version_ == 0) {
        return std::unexpected("isn't mounted");
    }
    const std::unique_ptr<platform::IFile> file =
        file_system_.openFile(filename_, platform::EFileMode::Read);
    if (file == nullptr) {
        return std::unexpected("can't be opened");
    }
    if (version_ == 2) {
        const std::vector<std::string> failed = findFilesFailingCrc(*file);
        if (!failed.empty()) {
            return std::unexpected("fails its CRC check on " +
                                   (failed | std::views::join_with(std::string_view(", ")) |
                                    std::ranges::to<std::string>()));
        }
    }
    return verifyWholeFileCrc(*file);
}

std::vector<std::string> CPodFile::findFilesFailingCrc(platform::IFile &file) const {
    std::vector<std::string> failed;
    for (const CPodDirectoryEntry &entry : entries_) {
        if (computeFileCRC(file, entry) != entry.checksum) {
            failed.push_back(entry.name);
        }
    }
    return failed;
}

// Nothing when the file ends inside the entry. The original opened the pod again for each file.
// nocedit 0x005507f0
std::optional<std::uint32_t> CPodFile::computeFileCRC(platform::IFile &file,
                                                      const CPodDirectoryEntry &entry) {
    file.seek(entry.offset);
    const SStreamCrc crc = computeStreamCrc(file, entry.size);
    if (crc.length != entry.size) {
        return std::nullopt;
    }
    return crc.crc;
}

// A POD1 storing 0 has no CRC: the builder never wrote one into tground.pod, the only POD1 that
// ships, and the original's check failed it.
std::expected<void, std::string> CPodFile::verifyWholeFileCrc(platform::IFile &file) const {
    const std::int64_t start = version_ == 1 ? kPod1CrcStart : kPod2CrcStart;
    file.seek(start - kStoredCrcSize);
    const std::optional<std::vector<std::byte>> stored_bytes =
        readExactly(file, static_cast<std::size_t>(kStoredCrcSize));
    if (!stored_bytes) {
        return std::unexpected("is cut short");
    }
    common::CBinaryReader reader(*stored_bytes);
    const auto stored = reader.read<std::uint32_t>();
    if (version_ == 1 && stored == 0) {
        return {};
    }
    if (computeStreamCrc(file, std::numeric_limits<std::uint64_t>::max()).crc != stored) {
        return std::unexpected("fails its CRC check");
    }
    return {};
}

// The original quit on an index outside the trail, a pod it couldn't open or a record it
// couldn't read, and handed back any operation the record held.
// nocedit 0x00550590
std::optional<CPodAuditRecord> CPodFile::getAuditRecord(int record_index) const {
    if (record_index < 0 || record_index >= audit_count_) {
        return std::nullopt;
    }
    const std::unique_ptr<platform::IFile> file =
        file_system_.openFile(filename_, platform::EFileMode::Read);
    if (file == nullptr) {
        return std::nullopt;
    }
    file->seek(audit_records_offset_ + (static_cast<std::int64_t>(record_index) *
                                        static_cast<std::int64_t>(kAuditRecordSize)));
    const std::optional<std::vector<std::byte>> bytes = readExactly(*file, kAuditRecordSize);
    if (!bytes) {
        return std::nullopt;
    }
    common::CBinaryReader reader(*bytes);
    CPodAuditRecord record;
    record.user_name = reader.readString(kAuditUserNameSize);
    record.timestamp = reader.read<std::uint32_t>();
    const auto operation = reader.read<std::int32_t>();
    if (operation < kFirstAuditOperation || operation > kLastAuditOperation) {
        return std::nullopt;
    }
    record.operation_type = static_cast<EPodAuditOperation>(operation);
    record.filename = reader.readString(kAuditFilenameSize);
    record.original_timestamp = reader.read<std::uint32_t>();
    record.original_file_size = reader.read<std::uint32_t>();
    record.new_timestamp = reader.read<std::uint32_t>();
    record.new_file_size = reader.read<std::uint32_t>();
    return record;
}

// nocedit 0x00550140
int CPodFile::findFileIndex(std::string_view filename) const {
    int low = 0;
    int high = static_cast<int>(entries_.size()) - 1;
    while (low <= high) {
        const int middle = (low + high) / 2;
        const int order = common::compareIgnoringAsciiCase(
            filename, entries_[static_cast<std::size_t>(middle)].name);
        if (order == 0) {
            return middle;
        }
        if (order < 0) {
            high = middle - 1;
        } else {
            low = middle + 1;
        }
    }
    return -1;
}

// nocedit 0x005501b0
void CPodFile::populateFileInfo(int file_index, SFoundFileInfo &output_info) const {
    const CPodDirectoryEntry &entry = entries_.at(static_cast<std::size_t>(file_index));
    output_info.target_path = filename_;
    output_info.file_offset = entry.offset;
    output_info.file_size = entry.size;
    output_info.timestamp = entry.timestamp;
    output_info.is_archive = true;
    output_info.container_timestamp = timestamp_;
}

int CPodFile::getVersion() const {
    return version_;
}

const std::string &CPodFile::getFilename() const {
    return filename_;
}

std::time_t CPodFile::getTimestamp() const {
    return timestamp_;
}

const std::string &CPodFile::getDescription() const {
    return description_;
}

int CPodFile::getAuditCount() const {
    return audit_count_;
}

const std::vector<CPodDirectoryEntry> &CPodFile::getEntries() const {
    return entries_;
}

} // namespace nocturne::engine

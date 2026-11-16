#include "engine/pod/podfile.h"
#include "engine/pod/pod_functions.h"

#include "common/serial/binaryreader.h"
#include "common/text/ascii.h"
#include "engine/dosio/dosio.h"
#include "engine/dosio/foundfileinfo.h"
#include "platform/file.h"
#include "platform/filesystem.h"

#include <algorithm>
#include <array>
#include <optional>

namespace nocturne::engine {
namespace {

// The layouts are the retail build's: POD2 starts "POD2", and anything else is read as POD1.
constexpr std::size_t kPod2HeaderSize = 0x60;
constexpr std::size_t kPod2EntrySize = 0x14;
constexpr std::size_t kPod1HeaderSize = 0x54;
constexpr std::size_t kPod1EntrySize = 0x28;
constexpr std::size_t kDescriptionSize = 80;
constexpr std::size_t kPod1NameSize = 32;
constexpr std::size_t kPod2ChecksumOffset = 4;
constexpr std::size_t kPod2ChecksumBegin = 8;
// The POD2 name block holds at least one byte and at most 256 for each file.
constexpr std::int64_t kMaxNameBytes = 256;
constexpr std::array kPod2Magic = {std::byte{'P'}, std::byte{'O'}, std::byte{'D'}, std::byte{'2'}};

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

bool CPodFile::toggleVerify() {
    verify_ = !verify_;
    return verify_;
}

bool CPodFile::toggleAudit() {
    read_audit_ = !read_audit_;
    return read_audit_;
}

int CPodFile::verify(std::string_view pod_filename) const {
    std::string filename = file_system_.getFullPath(pod_filename).value_or(std::string(pod_filename));

    // read fileinfo
    const std::optional<platform::SFileInfo> fileinfo = file_system_.getFileInfo(filename);
    if (!fileinfo) {
        return -1;
    }

    // open file
    const std::unique_ptr<platform::IFile> file =
        file_system_.openFile(filename, platform::EFileMode::Read);
    if (file == nullptr) {
        return -1;
    }

    // read magic ident and checksum
    std::array<std::byte, kPod2ChecksumBegin> magic_checksum{};
    if (file->read(magic_checksum) != kPod2ChecksumBegin) {
        return -1;
    }
    common::CBinaryReader reader(magic_checksum);
    reader.skip(kPod2ChecksumOffset);
    const std::uint32_t checksum = reader.read<std::uint32_t>();

    const bool is_pod2 = fileinfo->size >= kPod2HeaderSize &&
        std::ranges::equal(std::span(magic_checksum).first(kPod2Magic.size()), kPod2Magic);

    // if not a POD2 try POD1, accumulate sizes and range check offsets
    if (!is_pod2) {
        file->seek(kPod1HeaderSize);
        const std::uint32_t count = checksum;

        std::uint32_t accum = kPod1HeaderSize;
        for (std::uint32_t i = 0; i < count; ++i) {
            const std::optional<std::vector<std::byte>> record = readExactly(*file, kPod1EntrySize);
            if (!record) {
                return -1;
            }
            common::CBinaryReader fields(*record);
            fields.skip(kPod1NameSize);
            accum += fields.read<std::uint32_t>();
            const std::uint32_t offset = fields.read<std::uint32_t>();
            if (offset != std::clamp<std::uint32_t>(offset, kPod1HeaderSize, fileinfo->size - 1)) {
                return 0;
            }
        }
        return accum == fileinfo->size ? 1 : 0;
    }

    if (!verify_)
        return 2;

    // read file data starting at kPod2ChecksumBegin and verify checksum
    const std::optional<std::vector<std::byte>> data = readExactly(*file, fileinfo->size - kPod2ChecksumBegin);
    if (!data) {
        return -1;
    }

    return checksum == crc32UpdateBuffer(*data) ? 2 : 0;
}

// The retail build reads POD1 and POD2 only, and sorts the directory with a stable sort. The
// original also kept where a POD2's audit trail starts, for getAuditRecord, which retail never
// calls.
// nocedit 0x0054f650
bool CPodFile::mountFromFile(std::string_view pod_filename) {
    cleanup();
    filename_ = file_system_.getFullPath(pod_filename).value_or(std::string(pod_filename));
    timestamp_ = dosio_.getFileTimestamp({}, filename_);

    // verify and identify version
    const int pod_version = verify(filename_);
    if (pod_version <= 0) {
        return false;
    }

    // open file
    const std::unique_ptr<platform::IFile> file =
        file_system_.openFile(filename_, platform::EFileMode::Read);
    if (file == nullptr) {
        cleanup();
        return false;
    }
    if (pod_version == 2) {
        std::array<std::byte, kPod2HeaderSize> header{};
        if (file->read(header) != kPod2HeaderSize) {
            return -1;
        }
        if (!readPod2(*file, header)) {
            cleanup();
            return false;
        }
    }
    else if (!readPod1(*file)) {
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
    reader.skip(kPod2ChecksumBegin);
    // The original copied a description with no NUL on past its 80 bytes.
    description_ = reader.readString(kDescriptionSize);
    const std::uint32_t count = reader.read<std::uint32_t>();
    const std::uint32_t audit_count = reader.read<std::uint32_t>();
    // Retail's malloc gives null for an empty directory, which fails the mount.
    if (count <= 0) {
        return false;
    }
    version_ = 2;

    std::uint32_t entries_beg = 0;
    std::uint32_t entries_end = 0;
    std::uint32_t nameoff_max = 0;
    std::uint32_t nameoff_min = 0;
    std::vector<std::uint32_t> name_offsets;
    // The original read on past a short directory with the rest uninitialised.
    for (std::uint32_t i = 0; i < count; ++i) {
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

        // determine entry range and max name offset
        if (name_offsets.back() > nameoff_max) {
            nameoff_max = i;
        }
        if (i == 0 || (name_offsets.back() < nameoff_min)) {
            nameoff_min = i;
        }
        if ((entry.offset + entry.size) > entries_end) {
            entries_end = entry.offset + entry.size;
        }
        if (i == 0 || (entry.offset < entries_beg)) {
            entries_beg = entry.offset;
        }
    }
    std::uint32_t names_beg = kPod2HeaderSize + count * kPod2EntrySize;
    std::uint32_t names_end = entries_beg;
    std::uint32_t names_len = names_end - names_beg;

    if (names_len < count || names_len > count * kMaxNameBytes) {
        return false;
    }
    // The original read on past a short name block with the rest uninitialised.
    const std::optional<std::vector<std::byte>> names =
        readExactly(file, static_cast<std::size_t>(names_len));
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

    // read audit log if enabled
    audit_offset_ = entries_end;
    if (read_audit_) {
        file.seek(audit_offset_);

        for(size_t i = 0; i < audit_count; ++i) {
            const std::optional<std::vector<std::byte>> audit = readExactly(file, sizeof(CPodAuditRecord));
            if (!audit) {
                return false;
            }
            common::CBinaryReader reader(*audit);
            audits_.emplace_back();
            std::string user = reader.readString(32);
            strncpy(audits_.back().user,user.c_str(),32);
            audits_.back().modification.uts = reader.read<std::int32_t>();
            audits_.back().modification.act = static_cast<enum CPodAuditRecordAction>(reader.read<std::uint32_t>());
            std::string path = reader.readString(256);
            strncpy(audits_.back().path,path.c_str(),256);
            audits_.back().before.uts = reader.read<std::int32_t>();
            audits_.back().before.len = reader.read<std::uint32_t>();
            audits_.back().after.uts = reader.read<std::int32_t>();
            audits_.back().after.len = reader.read<std::uint32_t>();
        }
    }
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
    audits_.clear();
    return true;
}

// The original kept the description.
// nocedit 0x00550090
void CPodFile::cleanup() {
    version_ = 0;
    filename_.clear();
    entries_.clear();
    audits_.clear();
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
    return audits_.size();
}

const std::vector<CPodDirectoryEntry> &CPodFile::getEntries() const {
    return entries_;
}

const std::vector<CPodAuditRecord> &CPodFile::getAuditRecords() const {
    return audits_;
}

} // namespace nocturne::engine

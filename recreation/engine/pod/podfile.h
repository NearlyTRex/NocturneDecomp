#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"

#include <cstddef>
#include <cstdint>
#include <ctime>
#include <expected>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

// One file inside a pod.
struct CPodDirectoryEntry {
    std::string name;
    std::uint32_t size = 0;
    std::uint32_t offset = 0;
    std::time_t timestamp = 0;
    std::uint32_t checksum = 0;
};

enum class EPodAuditOperation : std::uint8_t {
    POD_AUDIT_OPERATION_ADD = 0,
    POD_AUDIT_OPERATION_REMOVE = 1,
    POD_AUDIT_OPERATION_CHANGE = 2,
};

// One change the editor's builder made to a POD2: every record from one build shares its time.
// An add has no original time or size, and a remove no new ones.
struct CPodAuditRecord {
    std::string user_name;
    std::time_t timestamp = 0;
    EPodAuditOperation operation_type = EPodAuditOperation::POD_AUDIT_OPERATION_ADD;
    std::string filename;
    std::time_t original_timestamp = 0;
    std::uint32_t original_file_size = 0;
    std::time_t new_timestamp = 0;
    std::uint32_t new_file_size = 0;
};

// One mounted .POD archive: its directory, sorted by name ignoring case.
class CPodFile {
public:
    CPodFile(platform::IFileSystem &file_system, const CDosIo &dosio);
    ~CPodFile();
    CPodFile(const CPodFile &) = delete;
    CPodFile &operator=(const CPodFile &) = delete;

    // Reads the directory of a POD1 or POD2 file. False, and nothing mounted, when it can't.
    [[nodiscard]] bool mountFromFile(std::string_view pod_filename);
    void cleanup();
    // The entry's index, or -1.
    [[nodiscard]] int findFileIndex(std::string_view filename) const;
    void populateFileInfo(int file_index, SFoundFileInfo &output_info) const;
    // What is wrong with the mounted pod's CRCs, as the end of a sentence naming the pod.
    [[nodiscard]] std::expected<void, std::string> verifyChecksum() const;
    // Nothing for an index outside the audit trail, or a record the file doesn't hold whole or
    // whose operation the builder never writes.
    [[nodiscard]] std::optional<CPodAuditRecord> getAuditRecord(int record_index) const;

    // 1 or 2 for the POD format mounted, 0 when nothing is.
    [[nodiscard]] int getVersion() const;
    // The full path it was mounted from.
    [[nodiscard]] const std::string &getFilename() const;
    [[nodiscard]] std::time_t getTimestamp() const;
    [[nodiscard]] const std::string &getDescription() const;
    [[nodiscard]] int getAuditCount() const;
    [[nodiscard]] const std::vector<CPodDirectoryEntry> &getEntries() const;

private:
    [[nodiscard]] bool readPod1(platform::IFile &file);
    [[nodiscard]] bool readPod2(platform::IFile &file, std::span<const std::byte> header);
    // The names of the files whose bytes don't match their directory CRC.
    [[nodiscard]] std::vector<std::string> findFilesFailingCrc(platform::IFile &file) const;
    [[nodiscard]] static std::optional<std::uint32_t>
    computeFileCRC(platform::IFile &file, const CPodDirectoryEntry &entry);
    [[nodiscard]] std::expected<void, std::string> verifyWholeFileCrc(platform::IFile &file) const;

    platform::IFileSystem &file_system_;
    const CDosIo &dosio_;
    int version_ = 0;
    std::string filename_;
    std::time_t timestamp_ = 0;
    std::string description_;
    int audit_count_ = 0;
    // Where the audit trail starts: straight after the last file's data, in file order.
    std::uint32_t audit_records_offset_ = 0;
    std::vector<CPodDirectoryEntry> entries_;
};

} // namespace nocturne::engine

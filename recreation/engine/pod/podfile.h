#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"

#include <cstddef>
#include <cstdint>
#include <ctime>
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

enum CPodAuditRecordAction : std::uint32_t {
    Add = 0,
    Remove = 1,
    Change = 2
};

struct CPodAuditRecordEntry {
    std::int32_t uts;
    union {
        std::uint32_t len;
        enum CPodAuditRecordAction act;
    };
};

struct CPodAuditRecord {
    char user[32]; // modification author
    CPodAuditRecordEntry modification; // modification time/action
    char path[256]; // path/name of entry modified
    CPodAuditRecordEntry before; // modification time/len before action
    CPodAuditRecordEntry after; // modification time/len after  action
};

// One mounted .POD archive: its directory, sorted by name ignoring case.
class CPodFile {
public:
    CPodFile(platform::IFileSystem &file_system, const CDosIo &dosio);
    ~CPodFile();
    CPodFile(const CPodFile &) = delete;
    CPodFile &operator=(const CPodFile &) = delete;

    [[nodiscard]] bool toggleVerify();
    [[nodiscard]] bool toggleAudit();
    // verify POD1/2 size/checksum and returns
    // > 0 version number for correct POD1/2 integrity,
    //   0 for failed size/checksum
    // < 0 in case of an error/failure
    [[nodiscard]] int verify(std::string_view pod_filename) const;
    // Reads the directory of a POD1 or POD2 file. False, and nothing mounted, when it can't.
    [[nodiscard]] bool mountFromFile(std::string_view pod_filename);
    void cleanup();
    // The entry's index, or -1.
    [[nodiscard]] int findFileIndex(std::string_view filename) const;
    void populateFileInfo(int file_index, SFoundFileInfo &output_info) const;

    // 1 or 2 for the POD format mounted, 0 when nothing is.
    [[nodiscard]] int getVersion() const;
    // The full path it was mounted from.
    [[nodiscard]] const std::string &getFilename() const;
    [[nodiscard]] std::time_t getTimestamp() const;
    [[nodiscard]] const std::string &getDescription() const;
    [[nodiscard]] int getAuditCount() const;
    [[nodiscard]] const std::vector<CPodDirectoryEntry> &getEntries() const;
    [[nodiscard]] const std::vector<CPodAuditRecord> &getAuditRecords() const;

private:
    [[nodiscard]] bool readPod1(platform::IFile &file);
    [[nodiscard]] bool readPod2(platform::IFile &file, std::span<const std::byte> header);

    platform::IFileSystem &file_system_;
    const CDosIo &dosio_;
    int version_ = 0;
    bool verify_ = false;
    bool read_audit_ = false;
    std::uint32_t audit_offset_ = 0;
    std::string filename_;
    std::time_t timestamp_ = 0;
    std::string description_;
    std::vector<CPodDirectoryEntry> entries_;
    std::vector<CPodAuditRecord> audits_;
};

} // namespace nocturne::engine

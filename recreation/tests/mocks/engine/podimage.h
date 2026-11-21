#pragma once

#include "common/serial/binarywriter.h"
#include "engine/pod/pod_functions.h"

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {

struct SPodImageFile {
    std::string name{};
    std::string data{};
    std::uint32_t timestamp = 0;
    std::uint32_t checksum = 0;
};

inline std::string toText(const common::CBinaryWriter &writer) {
    std::string text;
    for (const std::byte b : writer.getData()) {
        text.push_back(static_cast<char>(b));
    }
    return text;
}

inline std::uint32_t crcOf(std::string_view bytes) {
    return crc32UpdateBuffer(std::as_bytes(std::span(bytes)));
}

// The image with the CRC of [crc_start, end) in the 4 bytes before crc_start, as the editor's
// computeAndStoreCRC writes it: 8 for POD2, 0x54 for POD1.
inline std::string withStoredCrc(std::string image, std::size_t crc_start) {
    common::CBinaryWriter writer;
    writer.write(crcOf(std::string_view(image).substr(crc_start)));
    image.replace(crc_start - 4, 4, toText(writer));
    return image;
}

struct SPodImageAuditRecord {
    std::string user_name{};
    std::uint32_t timestamp = 0;
    std::int32_t operation_type = 0;
    std::string filename{};
    std::uint32_t original_timestamp = 0;
    std::uint32_t original_file_size = 0;
    std::uint32_t new_timestamp = 0;
    std::uint32_t new_file_size = 0;
};

// One 0x138-byte record of a POD2's audit trail, which follows the last file's data.
inline std::string makeAuditRecord(const SPodImageAuditRecord &record) {
    common::CBinaryWriter writer;
    writer.writeString(record.user_name, 32);
    writer.write(record.timestamp);
    writer.write(record.operation_type);
    writer.writeString(record.filename, 256);
    writer.write(record.original_timestamp);
    writer.write(record.original_file_size);
    writer.write(record.new_timestamp);
    writer.write(record.new_file_size);
    return toText(writer);
}

// A POD2 archive: header, directory, name block, then the files' data.
inline std::string makePod2(std::string_view description, const std::vector<SPodImageFile> &files,
                            std::int32_t audit_count = 0) {
    constexpr std::uint32_t kHeaderSize = 0x60;
    constexpr std::uint32_t kEntrySize = 0x14;
    std::string names;
    std::vector<std::uint32_t> name_offsets;
    for (const SPodImageFile &file : files) {
        name_offsets.push_back(static_cast<std::uint32_t>(names.size()));
        names += file.name;
        names.push_back('\0');
    }
    common::CBinaryWriter writer;
    writer.writeString("POD2", 8);
    writer.writeString(description, 80);
    writer.write(static_cast<std::int32_t>(files.size()));
    writer.write(audit_count);
    auto offset =
        static_cast<std::uint32_t>(kHeaderSize + (files.size() * kEntrySize) + names.size());
    for (std::size_t i = 0; i < files.size(); ++i) {
        writer.write(name_offsets[i]);
        writer.write(static_cast<std::uint32_t>(files[i].data.size()));
        writer.write(offset);
        writer.write(files[i].timestamp);
        writer.write(files[i].checksum);
        offset += static_cast<std::uint32_t>(files[i].data.size());
    }
    std::string image = toText(writer) + names;
    for (const SPodImageFile &file : files) {
        image += file.data;
    }
    return image;
}

// A POD1 archive: no magic, then a directory of fixed 32-byte names, then the files' data.
inline std::string makePod1(std::string_view description, const std::vector<SPodImageFile> &files) {
    constexpr std::uint32_t kHeaderSize = 0x54;
    constexpr std::uint32_t kEntrySize = 0x28;
    common::CBinaryWriter writer;
    writer.write(static_cast<std::int32_t>(files.size()));
    writer.writeString(description, 80);
    auto offset = static_cast<std::uint32_t>(kHeaderSize + (files.size() * kEntrySize));
    for (const SPodImageFile &file : files) {
        writer.writeString(file.name, 32);
        writer.write(static_cast<std::uint32_t>(file.data.size()));
        writer.write(offset);
        offset += static_cast<std::uint32_t>(file.data.size());
    }
    std::string image = toText(writer);
    for (const SPodImageFile &file : files) {
        image += file.data;
    }
    return image;
}

} // namespace nocturne::engine

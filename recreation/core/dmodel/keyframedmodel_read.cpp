#include "common/error/error.h"
#include "common/serial/binaryreader.h"
#include "common/text/textscanner.h"
#include "core/dmodel/keyframedmodel.h"

#include <algorithm>
#include <cstdint>
#include <format>
#include <initializer_list>
#include <optional>

namespace nocturne::core {
namespace {

constexpr int kLatestTextVersion = 8;
// A binary polygon record holds four corners whatever its count says.
constexpr int kBinaryCorners = 4;
// The 16 bytes of a binary texture record's name that the file holds.
constexpr std::size_t kBinaryTextureName = 16;

[[noreturn]] void failBinaryRead() {
    common::displayErrorAndQuit("Error reading keyframed model file");
}

// One fscanf of integers separated by commas, as "%d,%d,%d": a failure stops the call and leaves
// the fields after it as they were. True when every field was read.
bool scanFields(common::CTextScanner &scanner, std::initializer_list<int *> fields) {
    bool first = true;
    for (int *field : fields) {
        if (!first && !scanner.expect(',')) {
            return false;
        }
        first = false;
        const std::optional<int> value = scanner.scanInteger();
        if (!value) {
            return false;
        }
        *field = *value;
    }
    return true;
}

// The same with the line's "\n", which only a complete read reaches.
void scanLine(common::CTextScanner &scanner, std::initializer_list<int *> fields) {
    if (scanFields(scanner, fields)) {
        scanner.skipWhitespace();
    }
}

} // namespace

// A record's type and the texture record's count are read past; neither is used once loaded.
// Empty vertex or part blocks fail, as the original's zero-sized fread did.
// nocedit 0x00476f20
void CKeyFramedModel::readBinaryModel(std::span<const std::byte> data) {
    common::CBinaryReader reader(data);
    const auto version = reader.read<std::int32_t>();
    const auto vertex_count = reader.read<std::int32_t>();
    const auto poly_count = reader.read<std::int32_t>();
    const auto texture_count = reader.read<std::int32_t>();
    const auto part_count = reader.read<std::int32_t>();
    const auto frame_count = reader.read<std::int32_t>();
    if (reader.hasFailed()) {
        failBinaryRead();
    }
    if (version < 3 || version > 4) {
        common::displayErrorAndQuit(std::format("KFM file is invalid version {}", version));
    }
    const std::int32_t collision = version < 4 ? 0 : reader.read<std::int32_t>();
    if (reader.hasFailed()) {
        failBinaryRead();
    }
    allocate(vertex_count, poly_count, texture_count, part_count, frame_count);
    if (vertices_.empty()) {
        failBinaryRead();
    }
    for (common::CVector3i &vertex : vertices_) {
        vertex.x = reader.read<std::int32_t>();
        vertex.y = reader.read<std::int32_t>();
        vertex.z = reader.read<std::int32_t>();
    }
    for (platform::SMRGLPrimitiveQuad &polygon : polygons_) {
        reader.skip(sizeof(std::int32_t));
        const auto count = reader.read<std::int32_t>();
        polygon.surface_normal = {.a = reader.read<std::int32_t>(),
                                  .b = reader.read<std::int32_t>(),
                                  .c = reader.read<std::int32_t>(),
                                  .d = reader.read<std::int32_t>()};
        for (int corner = 0; corner < kBinaryCorners; ++corner) {
            const platform::SMRGLVertex vertex{.vertex_index = reader.read<std::int32_t>(),
                                               .texture_u = reader.read<std::int32_t>(),
                                               .texture_v = reader.read<std::int32_t>()};
            if (corner < count) {
                polygon.vertices.push_back(vertex);
            }
        }
    }
    for (int &index : poly_texture_indices_) {
        index = reader.read<std::int32_t>();
    }
    for (std::string &name : texture_names_) {
        reader.skip(2 * sizeof(std::int32_t));
        name = reader.readString(kBinaryTextureName);
    }
    if (parts_.empty()) {
        failBinaryRead();
    }
    for (SPart &part : parts_) {
        part.vertex_count = reader.read<std::int32_t>();
        part.poly_count = reader.read<std::int32_t>();
    }
    if (reader.hasFailed()) {
        failBinaryRead();
    }
    if (collision != 0) {
        buildCollisionTriList();
    }
}

// Lines the file leaves out stay zero, where the original left them uninitialised. The original
// also quit on a stream error, which reading from memory can't have.
// nocedit 0x00477110
void CKeyFramedModel::readTextModel(std::string_view text) {
    common::CTextScanner scanner(text);
    scanner.skipLine();
    int version = -1;
    scanLine(scanner, {&version});
    if (version < 5) {
        common::displayErrorAndQuit(std::format("KFM file is invalid version {}", version));
    }
    if (version > kLatestTextVersion) {
        common::displayErrorAndQuit(
            std::format("KFM file is version {}, this .exe can only handle up to version {}",
                        version, kLatestTextVersion));
    }
    scanner.skipLine();
    int vertex_count = 0;
    int poly_count = 0;
    int texture_count = 0;
    int part_count = 0;
    int frame_count = 0;
    scanLine(scanner, {&vertex_count, &poly_count, &texture_count, &part_count, &frame_count});
    allocate(vertex_count, poly_count, texture_count, part_count, frame_count);
    scanner.skipLine();
    int collision = 0;
    scanLine(scanner, {&collision});
    if (version >= 6) {
        scanner.skipLine();
        scanLine(scanner, {&transparent_pixel_flag_});
    }
    if (version >= 8) {
        scanner.skipLine();
        scanLine(scanner, {&disable_backface_culling_});
    }
    int env_map = 0;
    if (version >= 7) {
        scanner.skipLine();
        scanLine(scanner, {&env_map});
    }
    scanner.skipLine();
    for (common::CVector3i &vertex : vertices_) {
        scanLine(scanner, {&vertex.x, &vertex.y, &vertex.z});
    }
    scanner.skipLine();
    for (std::size_t i = 0; i < polygons_.size(); ++i) {
        int count = 0;
        static_cast<void>(scanFields(scanner, {&poly_texture_indices_[i], &count}));
        std::vector<platform::SMRGLVertex> &corners = polygons_[i].vertices;
        corners.resize(static_cast<std::size_t>(std::max(count, 0)));
        for (platform::SMRGLVertex &corner : corners) {
            if (scanner.expect(',')) {
                static_cast<void>(scanFields(
                    scanner, {&corner.vertex_index, &corner.texture_u, &corner.texture_v}));
            }
        }
        scanner.skipWhitespace();
    }
    if (env_map != 0) {
        env_map_opacities_.resize(polygons_.size());
        scanner.skipLine();
        for (std::uint8_t &opacity : env_map_opacities_) {
            int value = 0;
            scanLine(scanner, {&value});
            opacity = static_cast<std::uint8_t>(value);
        }
    }
    scanner.skipLine();
    for (std::string &name : texture_names_) {
        if (const std::optional<std::string_view> line = scanner.scanUntil('\n')) {
            // The original read in text mode, which drops the carriage return.
            name = line->ends_with('\r') ? line->substr(0, line->size() - 1) : *line;
            scanner.skipWhitespace();
        }
    }
    scanner.skipLine();
    for (SPart &part : parts_) {
        scanLine(scanner, {&part.vertex_count, &part.poly_count});
    }
    if (collision != 0) {
        buildCollisionTriList();
    }
}

} // namespace nocturne::core

#include "core/dcamera/dcamera.h"

#include "common/text/scanformat.h"
#include "common/text/textscanner.h"
#include "core/dcamera/fog.h"

namespace nocturne::core {
namespace {

// The .SET version that first held the fog's temperature.
constexpr int kTemperatureVersion = 26;

} // namespace

// nocedit 0x00453e50
void loadCameraFog(SFog &fog, common::CTextScanner &scanner, int file_version) {
    scanner.skipLine();
    common::scanFormat(scanner, "%d,%d,%d\n", fog.color_index.r, fog.color_index.g,
                       fog.color_index.b);
    scanner.skipLine();
    common::scanFormat(scanner, "%f,%f,%f\n", fog.scroll.x, fog.scroll.y, fog.scroll.z);
    common::scanFormat(scanner, "%f,%f\n", fog.height_threshold, fog.density_multiplier);
    if (file_version < kTemperatureVersion) {
        fog.temperature = SFog::kDefaultTemperature;
        return;
    }
    common::scanFormat(scanner, "%f\n", fog.temperature);
}

} // namespace nocturne::core

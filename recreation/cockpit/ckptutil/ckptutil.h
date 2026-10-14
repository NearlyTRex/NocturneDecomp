#pragma once

#include "engine/fwd.h"

#include <cstddef>
#include <cstdint>
#include <string_view>
#include <vector>

namespace nocturne::cockpit {

using ColorConversionFunc = void(void *, void *, int);
using OptimizedMemcpyFunc = void(void *, void *, int);

void expandIndexedToRGB(void *output_buffer, void *input_buffer, int pixel_count);
void optimizedMemcpy(void *dest_buffer, void *src_buffer, int byte_count);
void mmxOptimizedMemcpy(void *dest_buffer, void *src_buffer, int byte_count);
void basicIndexedTo16Bit(void *output_buffer, void *input_buffer, int pixel_count);
ColorConversionFunc *getColorConversionFunction();
OptimizedMemcpyFunc *getOptimizedMemcpyFunction();
ColorConversionFunc *get16BitConversionFunction();
// The first size bytes of art/filename; a file that can't be opened or is shorter is fatal.
[[nodiscard]] std::vector<std::uint8_t> readBitmapFile(const engine::CDosIo &dosio,
                                                       std::string_view filename, std::size_t size);
void loadACTToIndexedPalette(char *filename, std::uint8_t *output_palette);
void drawLineAA(int x0, int y0, int x1, int y1, int color);
int isLineClippingDisabled();
void setLineClippingDisabled(int disabled);

} // namespace nocturne::cockpit

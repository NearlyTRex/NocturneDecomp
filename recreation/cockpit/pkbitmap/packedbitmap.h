#pragma once

#include "cockpit/fwd.h"

#include <cstdint>
#include <cstdio>

namespace nocturne::cockpit {

class CPackedBitmap {
public:
    CPackedBitmap();
    ~CPackedBitmap();

    void freePackedData();
    int getTotalMemoryUsage();
    void setFilename(char *filename);
    int getPixelValue(int x_coordinate, int row_index);
    void renderIfIntersectsRect(int dest_x, int dest_y, int rect_left, int rect_top, int rect_right,
                                int rect_bottom);
    void reloadFromBitmapFile(char *filename, int width, int height, int transparency_color,
                              int apply_palette_flag);
    void copyRawDataToCompressedRuns(std::uint8_t *raw_bitmap_data, int row_stride);
    void load(std::uint8_t *bitmap_data, int width, int height, int transparency_color,
              int row_stride);
    void applyPaletteToPackedData(std::uint8_t *palette_buffer);
    void applyPalette();
    void loadByFileExtension(int apply_palette_flag);
    void readPBMFile(std::FILE *file_handle, int skip_data_load);
    void openPBMFile(char *filename, int apply_palette_flag);
};

} // namespace nocturne::cockpit

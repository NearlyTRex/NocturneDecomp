#pragma once

#include "cockpit/fwd.h"

namespace nocturne::cockpit {

CPackedBitmap *loadPBGFile(CPackedBitmapSet *bitmap_set_ptr, char *pbg_filename,
                           int apply_palette_flag, int frames_per_bitmap, int skip_data_load,
                           int selected_bitmap_index);

} // namespace nocturne::cockpit

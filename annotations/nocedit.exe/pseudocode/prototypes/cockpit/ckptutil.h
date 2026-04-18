#pragma once

// Function prototypes for cockpit/ckptutil.cpp
// Generated from Ghidra function signatures

// Original: cockpit_ckptutil.c_expandIndexedTo16Bit_FUN_00431410
// Address: 00431410
void __cdecl expandIndexedTo16Bit(void *output_buffer,void *indexed_input_buffer,int pixel_count);

// Original: cockpit_ckptutil.c_expandIndexedToRGB_FUN_004314fa
// Address: 004314fa
void __cdecl expandIndexedToRGB(void *output_buffer,void *input_buffer,int pixel_count);

// Original: cockpit_ckptutil.c_optimizedMemcpy_FUN_00431528
// Address: 00431528
void __cdecl optimizedMemcpy(void *dest_buffer,void *src_buffer,int byte_count);

// Original: cockpit_ckptutil.c_mmxOptimizedMemcpy_FUN_00431622
// Address: 00431622
void __cdecl mmxOptimizedMemcpy(void *dest_buffer,void *src_buffer,int byte_count);

// Original: cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_00431730
// Address: 00431730
void __cdecl basicIndexedTo16Bit(void *output_buffer,void *input_buffer,int pixel_count);

// Original: cockpit_ckptutil.c_getColorConversionFunction_FUN_00431760
// Address: 00431760
ColorConversionFunc * __cdecl getColorConversionFunction(void);

// Original: cockpit_ckptutil.c_getRGBConvertersionFunction_FUN_00431770
// Address: 00431770
ColorConversionFunc * __cdecl getRGBConvertersionFunction(void);

// Original: cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780
// Address: 00431780
OptimizedMemcpyFunc * __cdecl getOptimizedMemcpyFunction(void);

// Original: cockpit_ckptutil.c_get16BitConversionFunction_FUN_004317a0
// Address: 004317a0
ColorConversionFunc * __cdecl get16BitConversionFunction(void);

// Original: cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0
// Address: 004317b0
void * __cdecl loadBitmapWithPalette(char *filename,int width,int height,void *span_data_buffer,void *buffer,int transparent_color_index);

// Original: cockpit_ckptutil.c_applyColorPalette_FUN_00431830
// Address: 00431830
void __cdecl applyColorPalette(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index);

// Original: cockpit_ckptutil.c_readBitmapFile_FUN_00431870
// Address: 00431870
void * __cdecl readBitmapFile(char *filename,void *buffer,int size);

// Original: cockpit_ckptutil.c_applyActPalette_FUN_004319b0
// Address: 004319b0
void __cdecl applyActPalette(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index);

// Original: cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_00431a30
// Address: 00431a30
void __cdecl loadACTToIndexedPalette(char *filename,uchar *output_palette);

// Original: cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0
// Address: 00431ac0
void __cdecl loadACTPaletteFile(char *base_filename,uchar *output_buffer);

// Original: cockpit_ckptutil.c_buildHardwarePalettes_FUN_00431c00
// Address: 00431c00
void __cdecl buildHardwarePalettes(SRGBColorPalette *rgb_palette_data);

// Original: cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00431d00
// Address: 00431d00
void __cdecl blitSpanBasedSprite(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height);

// Original: cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00431f40
// Address: 00431f40
void __cdecl blitSpanBasedSpriteClipped(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height);

// Original: cockpit_ckptutil.c_blitRectangleClipped_FUN_00432190
// Address: 00432190
void __cdecl blitRectangleClipped(void *sprite_data,int dest_x,int dest_y,int width,int height);

// Original: cockpit_ckptutil.c_blitUnifiedSprite_FUN_00432300
// Address: 00432300
void __cdecl blitUnifiedSprite(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height);

// Original: cockpit_ckptutil.c_blitSimpleSprite_FUN_00432540
// Address: 00432540
void __cdecl blitSimpleSprite(void *sprite_data,int dest_x,int dest_y,int width,int height);

// Original: cockpit_ckptutil.c_blitDualModeSprite_FUN_004326a0
// Address: 004326a0
void __cdecl blitDualModeSprite(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height);

// Original: cockpit_ckptutil.c_copyBitmapRegion_FUN_00432860
// Address: 00432860
void __cdecl copyBitmapRegion(uchar *src_buffer,int src_stride,int unused,uchar *dest_buffer,int bytes_per_row,int num_rows,int src_x_offset,int src_y_offset);

// Original: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_004328d0
// Address: 004328d0
void __cdecl blitHorizontallyClippedSprite(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride);

// Original: cockpit_ckptutil.c_blitVerticalColumn_FUN_00432a10
// Address: 00432a10
void __cdecl blitVerticalColumn(void *sprite_data,void *unused_param,int start_x,int start_y,int end_x,int end_y);

// Original: cockpit_ckptutil.c_blitSolidSprite_FUN_00432af0
// Address: 00432af0
void __cdecl blitSolidSprite(void *sprite_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height ,int src_y_param);

// Original: cockpit_ckptutil.c_blitFullScreen_FUN_00432b30
// Address: 00432b30
void __cdecl blitFullScreen(void *sprite_data,void *span_data);

// Original: cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60
// Address: 00432b60
void __cdecl blitSpanBasedSpriteVerticallyClipped(void *sprite_data,void *span_data);

// Original: cockpit_ckptutil.c_blitWithTransparencyFallback_FUN_00432d00
// Address: 00432d00
void __cdecl blitWithTransparencyFallback(void *src_data,int width,int height,void *background_base,int dest_x,int dest_y);

// Original: cockpit_ckptutil.c_copyScreenRegion_FUN_00432d90
// Address: 00432d90
void __cdecl copyScreenRegion(void *dest_buffer,int src_x,int src_y,int start_row,int bytes_per_row,int height);

// Original: cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0
// Address: 00432df0
void __cdecl generateScrollHeightMap(void *bitmap_data,int end_x,int start_x,int bitmap_height,int *height_output,int num_height_rows,int transparency_color);

// Original: cockpit_ckptutil.c_rotateCircularBitmap_FUN_00433030
// Address: 00433030
void __cdecl rotateCircularBitmap(void *bitmap_data,int width,int height,int num_iterations);

// Original: cockpit_ckptutil.c_mirrorBitmapHorizontally_FUN_00433160
// Address: 00433160
void __cdecl mirrorBitmapHorizontally(uchar *bitmap_data,int width,int height,int bytes_per_pixel);

// Original: cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0
// Address: 004331f0
void __cdecl loadEdgeListFile(char *filename,SEdgeList *edge_lists,int expected_count);

// Original: cockpit_ckptutil.c_loadSingleEdgeList_FUN_00433440
// Address: 00433440
void __cdecl loadSingleEdgeList(char *filename,void **edge_data_out,int *edge_count_out);

// Original: cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480
// Address: 00433480
void __cdecl saveEdgeListFile(char *filename,SEdgeList *edge_lists,int edge_list_count);

// Original: cockpit_ckptutil.c_drawClippedEdges_FUN_004335f0
// Address: 004335f0
void __cdecl drawClippedEdges(SEdge *edges,int count,int x_offset,int y_offset);

// Original: cockpit_ckptutil.c_rasterizeEdgeEndpoints_FUN_004336e0
// Address: 004336e0
void __cdecl rasterizeEdgeEndpoints(void *bitmap_buffer,SEdge *edge_list,int edge_count,int buffer_width,int buffer_height);

// Original: cockpit_ckptutil.c_renderEdgeArrayWithBufferLookup_FUN_00433820
// Address: 00433820
void __cdecl renderEdgeArrayWithBufferLookup(uchar *color_buffer,SEdge *edge_array,int edge_count,int offset_x,int offset_y,int buffer_width);

// Original: cockpit_ckptutil.c_drawLineListFromBitmap_FUN_004338f0
// Address: 004338f0
void __cdecl drawLineListFromBitmap(CPackedBitmap *bitmap,short *line_data,int line_count,int offset_x,int offset_y);

// Original: cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0
// Address: 004339c0
void __cdecl drawLineAAWithBlending(int x0,int y0,int x1,int y1,int base_color,uchar blend_color,int blend_mode);

// Original: cockpit_ckptutil.c_drawLineAA_FUN_00433c90
// Address: 00433c90
void __cdecl drawLineAA(int x0,int y0,int x1,int y1,int color);

// Original: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50
// Address: 00433f50
void __cdecl blendPixelWithHardwarePalette(int x,int y,float alpha,int color);

// Original: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_004342f0
// Address: 004342f0
void __cdecl blendPixelWithSourcePalette(int x,int y,float blend_factor,int palette_index);

// Original: cockpit_ckptutil.c_putPixel_FUN_004345c0
// Address: 004345c0
void __cdecl putPixel(int x,int y,int color);

// Original: cockpit_ckptutil.c_isLineBlendingDisabled_FUN_00434650
// Address: 00434650
int __cdecl isLineBlendingDisabled(void);

// Original: cockpit_ckptutil.c_isLineClippingDisabled_FUN_00434660
// Address: 00434660
int __cdecl isLineClippingDisabled(void);

// Original: cockpit_ckptutil.c_setLineBlendingDisabled_FUN_00434670
// Address: 00434670
void __cdecl setLineBlendingDisabled(int disabled);

// Original: cockpit_ckptutil.c_setLineClippingDisabled_FUN_00434680
// Address: 00434680
void __cdecl setLineClippingDisabled(int disabled);

// Original: cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690
// Address: 00434690
char * __cdecl loadRotatedBitmapFile(char *filename,char *buffer,int width,int height,int apply_palette,int palette_index);

// Original: cockpit_ckptutil.c_rotateBitmap_FUN_00434870
// Address: 00434870
void __cdecl rotateBitmap(uchar *source_data,int width,int height,int bytes_per_pixel);

// Original: cockpit_ckptutil.c_setEdgeData_FUN_00434a50
// Address: 00434a50
void __cdecl setEdgeData(SEdge *edge_array,int edge_index,int x1,int y1,int x2,int y2,int flag_bit);

// Original: cockpit_ckptutil.c_traceConnectedEdges_FUN_00434af0
// Address: 00434af0
SEdge * __cdecl traceConnectedEdges(SEdgeList *edge_lists,SEdgeList *scanline_data,SEdge *existing_edges,int *max_x,int max_y,int gap_tolerance_x,int gap_tolerance_y,int gap_tolerance_connected,int gap_tolerance_horizontal);

// Original: cockpit_ckptutil.c_flipEdgeArrayHorizontally_FUN_004355c0
// Address: 004355c0
void __cdecl flipEdgeArrayHorizontally(SEdge *edge_array,int edge_count,int flip_width);

// Original: cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730
// Address: 00435730
void __cdecl generateTransparencySpans(void *bitmap_buffer,char *filename,int width,int height,void *span_data_buffer,int transparent_color_index);

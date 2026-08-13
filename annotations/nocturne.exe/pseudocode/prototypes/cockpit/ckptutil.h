#pragma once

// Function prototypes for cockpit/ckptutil.cpp
// Generated from Ghidra function signatures

// Original: cockpit_ckptutil.c_expandIndexedTo16Bit_FUN_0042cde0
// Address: 0042cde0
void __cdecl expandIndexedTo16Bit(void *output_buffer,void *indexed_input_buffer,int pixel_count);

// Original: cockpit_ckptutil.c_expandIndexedToRGB_FUN_0042ceca
// Address: 0042ceca
void __cdecl expandIndexedToRGB(void *output_buffer,void *input_buffer,int pixel_count);

// Original: cockpit_ckptutil.c_optimizedMemcpy_FUN_0042cef8
// Address: 0042cef8
void __cdecl optimizedMemcpy(void *dest_buffer,void *src_buffer,int byte_count);

// Original: cockpit_ckptutil.c_mmxOptimizedMemcpy_FUN_0042cff2
// Address: 0042cff2
void __cdecl mmxOptimizedMemcpy(void *dest_buffer,void *src_buffer,int byte_count);

// Original: cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_0042d100
// Address: 0042d100
void __cdecl basicIndexedTo16Bit(void *output_buffer,void *input_buffer,int pixel_count);

// Original: cockpit_ckptutil.c_FUN_0042d130
// Address: 0042d130
ColorConversionFunc * __cdecl FUN_0042d130(void);

// Original: cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_0042d150
// Address: 0042d150
OptimizedMemcpyFunc * __cdecl getOptimizedMemcpyFunction(void);

// Original: cockpit_ckptutil.c_get16BitConversionFunction_FUN_0042d170
// Address: 0042d170
ColorConversionFunc * __cdecl get16BitConversionFunction(void);

// Original: cockpit_ckptutil.c_FUN_0042d180
// Address: 0042d180
void * FUN_0042d180(void);

// Original: cockpit_ckptutil.c_applyColorPalette_FUN_0042d200
// Address: 0042d200
void __cdecl applyColorPalette(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index);

// Original: cockpit_ckptutil.c_readBitmapFile_FUN_0042d240
// Address: 0042d240
void * __cdecl readBitmapFile(char *filename,void *buffer,int size);

// Original: cockpit_ckptutil.c_applyActPalette_FUN_0042d370
// Address: 0042d370
void __cdecl applyActPalette(char *filename,void *bitmap_buffer,int bitmap_size,int palette_index);

// Original: cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042d3f0
// Address: 0042d3f0
void __cdecl loadACTToIndexedPalette(char *filename,uchar *output_palette);

// Original: cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042d480
// Address: 0042d480
void __cdecl loadACTPaletteFile(char *base_filename,uchar *output_buffer);

// Original: cockpit_ckptutil.c_buildHardwarePalettes_FUN_0042d5c0
// Address: 0042d5c0
void __cdecl buildHardwarePalettes(SRGBColorPalette *rgb_palette_data);

// Original: cockpit_ckptutil.c_blitSpanBasedSprite_FUN_0042d6c0
// Address: 0042d6c0
void __cdecl blitSpanBasedSprite(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height);

// Original: cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_0042d900
// Address: 0042d900
void __cdecl blitSpanBasedSpriteClipped(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height);

// Original: cockpit_ckptutil.c_blitRectangleClipped_FUN_0042db50
// Address: 0042db50
void __cdecl blitRectangleClipped(void *sprite_data,int dest_x,int dest_y,int width,int height);

// Original: cockpit_ckptutil.c_blitUnifiedSprite_FUN_0042dcc0
// Address: 0042dcc0
void __cdecl blitUnifiedSprite(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height);

// Original: cockpit_ckptutil.c_blitSimpleSprite_FUN_0042df00
// Address: 0042df00
void __cdecl blitSimpleSprite(void *sprite_data,int dest_x,int dest_y,int width,int height);

// Original: cockpit_ckptutil.c_blitDualModeSprite_FUN_0042e060
// Address: 0042e060
void __cdecl blitDualModeSprite(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height);

// Original: cockpit_ckptutil.c_copyBitmapRegion_FUN_0042e220
// Address: 0042e220
void __cdecl copyBitmapRegion(uchar *src_buffer,int src_stride,int unused,uchar *dest_buffer,int bytes_per_row,int num_rows,int src_x_offset,int src_y_offset);

// Original: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_0042e290
// Address: 0042e290
void __cdecl blitHorizontallyClippedSprite(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride);

// Original: cockpit_ckptutil.c_blitVerticalColumn_FUN_0042e3d0
// Address: 0042e3d0
void __cdecl blitVerticalColumn(void *sprite_data,void *unused_param,int start_x,int start_y,int end_x,int end_y);

// Original: cockpit_ckptutil.c_blitSolidSprite_FUN_0042e4b0
// Address: 0042e4b0
void __cdecl blitSolidSprite(void *sprite_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height ,int src_y_param);

// Original: cockpit_ckptutil.c_blitFullScreen_FUN_0042e4f0
// Address: 0042e4f0
void __cdecl blitFullScreen(void *sprite_data,void *span_data);

// Original: cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_0042e520
// Address: 0042e520
void __cdecl blitSpanBasedSpriteVerticallyClipped(void *sprite_data,void *span_data);

// Original: cockpit_ckptutil.c_blitWithTransparencyFallback_FUN_0042e6c0
// Address: 0042e6c0
void __cdecl blitWithTransparencyFallback(void *src_data,int width,int height,void *background_base,int dest_x,int dest_y);

// Original: cockpit_ckptutil.c_copyScreenRegion_FUN_0042e750
// Address: 0042e750
void __cdecl copyScreenRegion(void *dest_buffer,int src_x,int src_y,int start_row,int bytes_per_row,int height);

// Original: cockpit_ckptutil.c_FUN_0042e7b0
// Address: 0042e7b0
void FUN_0042e7b0(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,uint param_7);

// Original: cockpit_ckptutil.c_rotateCircularBitmap_FUN_0042e9d0
// Address: 0042e9d0
void __cdecl rotateCircularBitmap(void *bitmap_data,int width,int height,int num_iterations);

// Original: cockpit_ckptutil.c_mirrorBitmapHorizontally_FUN_0042eb00
// Address: 0042eb00
void __cdecl mirrorBitmapHorizontally(uchar *bitmap_data,int width,int height,int bytes_per_pixel);

// Original: cockpit_ckptutil.c_loadEdgeListFile_FUN_0042eb90
// Address: 0042eb90
void __cdecl loadEdgeListFile(char *filename,SEdgeList *edge_lists,int expected_count);

// Original: cockpit_ckptutil.c_loadSingleEdgeList_FUN_0042edc0
// Address: 0042edc0
void __cdecl loadSingleEdgeList(char *filename,void **edge_data_out,int *edge_count_out);

// Original: cockpit_ckptutil.c_FUN_0042ee00
// Address: 0042ee00
void FUN_0042ee00(char *param_1,int param_2,int param_3);

// Original: cockpit_ckptutil.c_drawClippedEdges_FUN_0042ef60
// Address: 0042ef60
void __cdecl drawClippedEdges(SEdge *edges,int count,int x_offset,int y_offset);

// Original: cockpit_ckptutil.c_rasterizeEdgeEndpoints_FUN_0042f050
// Address: 0042f050
void __cdecl rasterizeEdgeEndpoints(void *bitmap_buffer,SEdge *edge_list,int edge_count,int buffer_width,int buffer_height);

// Original: cockpit_ckptutil.c_renderEdgeArrayWithBufferLookup_FUN_0042f190
// Address: 0042f190
void __cdecl renderEdgeArrayWithBufferLookup(uchar *color_buffer,SEdge *edge_array,int edge_count,int offset_x,int offset_y,int buffer_width);

// Original: cockpit_ckptutil.c_drawLineListFromBitmap_FUN_0042f260
// Address: 0042f260
void __cdecl drawLineListFromBitmap(CPackedBitmap *bitmap,short *line_data,int line_count,int offset_x,int offset_y);

// Original: cockpit_ckptutil.c_drawLineAAWithBlending_FUN_0042f330
// Address: 0042f330
void __cdecl drawLineAAWithBlending(int x0,int y0,int x1,int y1,int base_color,uchar blend_color,int blend_mode);

// Original: cockpit_ckptutil.c_drawLineAA_FUN_0042f600
// Address: 0042f600
void __cdecl drawLineAA(int x0,int y0,int x1,int y1,int color);

// Original: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_0042f8c0
// Address: 0042f8c0
void __cdecl blendPixelWithHardwarePalette(int x,int y,float alpha,int color);

// Original: cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_0042fd60
// Address: 0042fd60
void __cdecl blendPixelWithSourcePalette(int x,int y,float blend_factor,int palette_index);

// Original: cockpit_ckptutil.c_putPixel_FUN_00430140
// Address: 00430140
void __cdecl putPixel(int x,int y,int color);

// Original: cockpit_ckptutil.c_isLineBlendingDisabled_FUN_004301d0
// Address: 004301d0
int __cdecl isLineBlendingDisabled(void);

// Original: cockpit_ckptutil.c_isLineClippingDisabled_FUN_004301e0
// Address: 004301e0
int __cdecl isLineClippingDisabled(void);

// Original: cockpit_ckptutil.c_setLineBlendingDisabled_FUN_004301f0
// Address: 004301f0
void __cdecl setLineBlendingDisabled(int disabled);

// Original: cockpit_ckptutil.c_setLineClippingDisabled_FUN_00430200
// Address: 00430200
void __cdecl setLineClippingDisabled(int disabled);

// Original: cockpit_ckptutil.c_FUN_00430210
// Address: 00430210
void * FUN_00430210(char *param_1,void *param_2,uint param_3,uint param_4,int param_5,int param_6);

// Original: cockpit_ckptutil.c_FUN_004303d0
// Address: 004303d0
void FUN_004303d0(undefined4 *param_1,int param_2,uint param_3,uint param_4);

// Original: cockpit_ckptutil.c_setEdgeData_FUN_00430590
// Address: 00430590
void __cdecl setEdgeData(SEdge *edge_array,int edge_index,int x1,int y1,int x2,int y2,int flag_bit);

// Original: cockpit_ckptutil.c_FUN_00430630
// Address: 00430630
void * FUN_00430630(int param_1,int *param_2,void *param_3,int *param_4,int param_5,int param_6,int param_7,int param_8,int param_9);

// Original: cockpit_ckptutil.c_flipEdgeArrayHorizontally_FUN_004310f0
// Address: 004310f0
void __cdecl flipEdgeArrayHorizontally(SEdge *edge_array,int edge_count,int flip_width);

// Original: cockpit_ckptutil.c_FUN_00431260
// Address: 00431260
void __cdecl FUN_00431260(void *bitmap_buffer,char *filename,SScanlineSpans *span_output,int width,int height,int transparent_color_index);

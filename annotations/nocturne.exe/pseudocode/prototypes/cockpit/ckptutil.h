#pragma once

// Function prototypes for cockpit/ckptutil.cpp
// Generated from Ghidra function signatures

// Original: cockpit_ckptutil.c_expandIndexedTo16Bit_FUN_0042cde0
// Address: 0042cde0
undefined4 expandIndexedTo16Bit(undefined4 *param_1,byte *param_2,int param_3);

// Original: cockpit_ckptutil.c_expandIndexedToRGB_FUN_0042ceca
// Address: 0042ceca
undefined4 expandIndexedToRGB(undefined4 *param_1,byte *param_2,int param_3);

// Original: cockpit_ckptutil.c_optimizedMemcpy_FUN_0042cef8
// Address: 0042cef8
undefined8 optimizedMemcpy(undefined4 *param_1,undefined4 *param_2,uint param_3);

// Original: cockpit_ckptutil.c_mmxOptimizedMemcpy_FUN_0042cff2
// Address: 0042cff2
undefined8 mmxOptimizedMemcpy(undefined4 *param_1,undefined4 *param_2,uint param_3);

// Original: cockpit_ckptutil.c_basicIndexedTo16Bit_FUN_0042d100
// Address: 0042d100
void basicIndexedTo16Bit(undefined2 *param_1,byte *param_2,uint param_3);

// Original: cockpit_ckptutil.c_FUN_0042d130
// Address: 0042d130
code * FUN_0042d130(void);

// Original: cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_0042d150
// Address: 0042d150
OptimizedMemcpyFunc * __cdecl getOptimizedMemcpyFunction(void);

// Original: cockpit_ckptutil.c_FUN_0042d170
// Address: 0042d170
code * FUN_0042d170(void);

// Original: cockpit_ckptutil.c_FUN_0042d180
// Address: 0042d180
void * FUN_0042d180(void);

// Original: cockpit_ckptutil.c_applyColorPalette_FUN_0042d200
// Address: 0042d200
void applyColorPalette(void);

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
void buildHardwarePalettes(byte *param_1);

// Original: cockpit_ckptutil.c_blitSpanBasedSprite_FUN_0042d6c0
// Address: 0042d6c0
void blitSpanBasedSprite(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);

// Original: cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_0042d900
// Address: 0042d900
void __cdecl blitSpanBasedSpriteClipped(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height);

// Original: cockpit_ckptutil.c_blitRectangleClipped_FUN_0042db50
// Address: 0042db50
int blitRectangleClipped(int param_1,int param_2,int param_3,int param_4,int param_5);

// Original: cockpit_ckptutil.c_blitUnifiedSprite_FUN_0042dcc0
// Address: 0042dcc0
void blitUnifiedSprite(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);

// Original: cockpit_ckptutil.c_blitSimpleSprite_FUN_0042df00
// Address: 0042df00
void blitSimpleSprite(int param_1,int param_2,int param_3,int param_4,int param_5);

// Original: cockpit_ckptutil.c_blitDualModeSprite_FUN_0042e060
// Address: 0042e060
void __cdecl blitDualModeSprite(void *sprite_data,void *span_data,int dest_x,int dest_y,int width,int height);

// Original: cockpit_ckptutil.c_copyBitmapRegion_FUN_0042e220
// Address: 0042e220
void copyBitmapRegion(int param_1,int param_2,undefined4 param_3,void *param_4,int param_5,int param_6,int param_7,int param_8);

// Original: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_0042e290
// Address: 0042e290
undefined8 blitHorizontallyClippedSprite(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);

// Original: cockpit_ckptutil.c_blitVerticalColumn_FUN_0042e3d0
// Address: 0042e3d0
int blitVerticalColumn(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6);

// Original: cockpit_ckptutil.c_blitSolidSprite_FUN_0042e4b0
// Address: 0042e4b0
void blitSolidSprite(void *param_1,void *param_2,int param_3,int param_4,int param_5,int param_6,int param_7);

// Original: cockpit_ckptutil.c_blitFullScreen_FUN_0042e4f0
// Address: 0042e4f0
void blitFullScreen(void *param_1,void *param_2);

// Original: cockpit_ckptutil.c_blitSpanBasedSpriteVerticallyClipped_FUN_0042e520
// Address: 0042e520
void blitSpanBasedSpriteVerticallyClipped(int param_1,int param_2);

// Original: cockpit_ckptutil.c_blitWithTransparencyFallback_FUN_0042e6c0
// Address: 0042e6c0
void blitWithTransparencyFallback(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);

// Original: cockpit_ckptutil.c_copyScreenRegion_FUN_0042e750
// Address: 0042e750
void copyScreenRegion(undefined4 *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6);

// Original: cockpit_ckptutil.c_FUN_0042e7b0
// Address: 0042e7b0
void FUN_0042e7b0(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,uint param_7);

// Original: cockpit_ckptutil.c_rotateCircularBitmap_FUN_0042e9d0
// Address: 0042e9d0
void rotateCircularBitmap(int param_1,int param_2,uint param_3,uint param_4);

// Original: cockpit_ckptutil.c_mirrorBitmapHorizontally_FUN_0042eb00
// Address: 0042eb00
void mirrorBitmapHorizontally(undefined1 *param_1,int param_2,int param_3,int param_4);

// Original: cockpit_ckptutil.c_loadEdgeListFile_FUN_0042eb90
// Address: 0042eb90
void __cdecl loadEdgeListFile(char *filename,SEdgeList *edge_lists,int expected_count);

// Original: cockpit_ckptutil.c_loadSingleEdgeList_FUN_0042edc0
// Address: 0042edc0
void loadSingleEdgeList(void);

// Original: cockpit_ckptutil.c_FUN_0042ee00
// Address: 0042ee00
void FUN_0042ee00(char *param_1,int param_2,int param_3);

// Original: cockpit_ckptutil.c_drawClippedEdges_FUN_0042ef60
// Address: 0042ef60
void drawClippedEdges(short *param_1,int param_2,int param_3,int param_4);

// Original: cockpit_ckptutil.c_FUN_0042f050
// Address: 0042f050
void FUN_0042f050(int param_1,short *param_2,int param_3,int param_4,int param_5);

// Original: cockpit_ckptutil.c_renderEdgeArrayWithBufferLookup_FUN_0042f190
// Address: 0042f190
void renderEdgeArrayWithBufferLookup(int param_1,short *param_2,int param_3,int param_4,int param_5,int param_6);

// Original: cockpit_ckptutil.c_drawLineListFromBitmap_FUN_0042f260
// Address: 0042f260
void drawLineListFromBitmap(void);

// Original: cockpit_ckptutil.c_drawLineAAWithBlending_FUN_0042f330
// Address: 0042f330
void __cdecl drawLineAAWithBlending(int x0,int y0,int x1,int y1,int base_color,uchar blend_color,int blend_mode);

// Original: cockpit_ckptutil.c_drawLineAA_FUN_0042f600
// Address: 0042f600
void __cdecl drawLineAA(int x0,int y0,int x1,int y1,int color);

// Original: cockpit_ckptutil.c_FUN_0042f8c0
// Address: 0042f8c0
void FUN_0042f8c0(int param_1,int param_2,float param_3,int param_4);

// Original: cockpit_ckptutil.c_FUN_0042fd60
// Address: 0042fd60
void FUN_0042fd60(int param_1,int param_2,float param_3,int param_4);

// Original: cockpit_ckptutil.c_putPixel_FUN_00430140
// Address: 00430140
void __cdecl putPixel(int x,int y,int color);

// Original: cockpit_ckptutil.c_FUN_004301d0
// Address: 004301d0
undefined4 FUN_004301d0(void);

// Original: cockpit_ckptutil.c_isLineClippingDisabled_FUN_004301e0
// Address: 004301e0
int __cdecl isLineClippingDisabled(void);

// Original: cockpit_ckptutil.c_FUN_004301f0
// Address: 004301f0
void FUN_004301f0(void);

// Original: cockpit_ckptutil.c_setLineClippingDisabled_FUN_00430200
// Address: 00430200
void setLineClippingDisabled(void);

// Original: cockpit_ckptutil.c_FUN_00430210
// Address: 00430210
void * FUN_00430210(char *param_1,void *param_2,uint param_3,uint param_4,int param_5,int param_6);

// Original: cockpit_ckptutil.c_FUN_004303d0
// Address: 004303d0
void FUN_004303d0(undefined4 *param_1,int param_2,uint param_3,uint param_4);

// Original: cockpit_ckptutil.c_setEdgeData_FUN_00430590
// Address: 00430590
void setEdgeData(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,ushort param_6,byte param_7);

// Original: cockpit_ckptutil.c_FUN_00430630
// Address: 00430630
void * FUN_00430630(int param_1,int *param_2,void *param_3,int *param_4,int param_5,int param_6,int param_7,int param_8,int param_9);

// Original: cockpit_ckptutil.c_flipEdgeArrayHorizontally_FUN_004310f0
// Address: 004310f0
void flipEdgeArrayHorizontally(ushort *param_1,int param_2,short param_3);

// Original: cockpit_ckptutil.c_FUN_00431260
// Address: 00431260
void FUN_00431260(byte *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,uint param_6);

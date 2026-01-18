#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CChain.h"
#include "types/classes/CCloth.h"
#include "types/classes/CClothList.h"
#include "types/classes/CCodec.h"
#include "types/classes/CColonel.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CLZWCompress.h"
#include "types/classes/CLZWDecompress.h"
#include "types/classes/CLZWDictionary.h"
#include "types/classes/CVector3f.h"
#include "types/funcdefs/ColorConversionFunc.h"
#include "types/funcdefs/OptimizedMemcpyFunc.h"
#include "types/structs/SBitBuffer.h"
#include "types/structs/SChainVertex.h"
#include "types/structs/SClothBone.h"
#include "types/structs/SClothVertex.h"
#include "types/structs/SEdge.h"
#include "types/structs/SEdgeList.h"
#include "types/structs/SRenderVertex.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x430000
// =============================================================================

undefined core_chain_cpp_FUN_004300d0();
undefined core_chain_cpp_FUN_004308f0();
undefined core_chain_cpp_FUN_00430eb0();
undefined core_chain_cpp_CChain_load_FUN_00430fe0();
undefined core_chain_cpp_FUN_00431110();
undefined core_chain_cpp_FUN_00431120();
undefined core_chain_cpp_CChain_addFilesToExtractList_FUN_00431250();
undefined core_chain_cpp_FUN_00431330();
undefined core_chain_cpp_FUN_00431340();
undefined core_chain_cpp_FUN_00431350();
CChain * core_chain_cpp_CChain_dtor_FUN_00431360(CChain * this_ptr, uint d1, uint d2, uint d3);
SChainVertex * core_chain_cpp_SChainVertex_ctor_FUN_004313d0(SChainVertex * this_ptr);
SChainVertex * core_chain_cpp_SChainVertex_dtor_FUN_004313e0(SChainVertex * this_ptr);
int core_chain_cpp_FUN_004313f0(SChainVertex * * objs);
void cockpit_ckptutil_c_expandIndexedTo16Bit_FUN_00431410(void * output_buffer, void * indexed_input_buffer, int pixel_count);
void cockpit_ckptutil_c_expandIndexedToRGB_FUN_004314fa(void * output_buffer, void * input_buffer, int pixel_count);
void cockpit_ckptutil_c_optimizedMemcpy_FUN_00431528(void * dest_buffer, void * src_buffer, int byte_count);
void cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00431622(void * dest_buffer, void * src_buffer, int byte_count);
void cockpit_ckptutil_c_basicIndexedTo16Bit_FUN_00431730(void * output_buffer, void * input_buffer, int pixel_count);
ColorConversionFunc * cockpit_ckptutil_c_getColorConversionFunction_FUN_00431760(void);
ColorConversionFunc * cockpit_ckptutil_c_getRGBConvertersionFunction_FUN_00431770(void);
OptimizedMemcpyFunc * cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00431780(void);
ColorConversionFunc * cockpit_ckptutil_c_get16BitConversionFunction_FUN_004317a0(void);
void * cockpit_ckptutil_c_loadBitmapWithPalette_FUN_004317b0(char * filename, int width, int height, void * span_data_buffer, void * buffer, int transparent_color_index);
void cockpit_ckptutil_c_applyColorPalette_FUN_004319b0(char * filename, void * bitmap_buffer, int bitmap_size, int palette_index);
void * cockpit_ckptutil_c_readBitmapFile_FUN_00431870(char * filename, void * buffer, int size);
void cockpit_ckptutil_c_applyActPalette_FUN_004319b0(char * filename, void * bitmap_buffer, int bitmap_size, int palette_index);
void cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00431a30(char * filename, char * output_palette);
void cockpit_ckptutil_c_loadACTPaletteFile_FUN_00431ac0(char * base_filename, char * output_buffer);
void cockpit_ckptutil_c_buildHardwarePalettes_FUN_00431c00(char * rgb_palette_data);
void cockpit_ckptutil_c_blitSpanBasedSprite_FUN_00431d00(void * sprite_data, void * span_data, int screen_x, int screen_y, int src_x, int src_y, int width, int height);
void cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_00431f40(void * sprite_data, void * span_data, int screen_x, int screen_y, int src_x, int src_y, int width, int height);
void cockpit_ckptutil_c_blitRectangleClipped_FUN_00432190(void * sprite_data, int dest_x, int dest_y, int width, int height);
void cockpit_ckptutil_c_blitUnifiedSprite_FUN_00432300(void * sprite_data, void * span_data, int dest_x, int dest_y, int width, int height);
void cockpit_ckptutil_c_blitSimpleSprite_FUN_00432540(void * sprite_data, int dest_x, int dest_y, int width, int height);
void cockpit_ckptutil_c_blitDualModeSprite_FUN_004326a0(void * sprite_data, void * span_data, int dest_x, int dest_y, int width, int height);
void cockpit_ckptutil_c_copyBitmapRegion_FUN_00432860(void * src_buffer, int src_stride, void * dest_buffer, int copy_width, int copy_height, int src_x, int src_y);
void cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_004328d0(void * sprite_data, int start_x, int dest_y, int end_x, int max_height, int unused_param, int src_y_offset, int src_stride);
void cockpit_ckptutil_c_blitVerticalColumn_FUN_00432a10(void * sprite_data, void * unused_param, int start_x, int start_y, int end_x, int end_y);
void cockpit_ckptutil_c_blitSolidSprite_FUN_00432af0(void * sprite_data, int screen_x, int screen_y, int src_x, int src_y, int width, int height, int src_y_param);
void cockpit_ckptutil_c_blitFullScreen_FUN_00432b30(void * sprite_data, void * span_data);
void cockpit_ckptutil_c_blitSpanBasedSpriteVerticallyClipped_FUN_00432b60(void * sprite_data, void * span_data);
void cockpit_ckptutil_c_blitWithTransparencyFallback_FUN_00432d00(void * src_data, int width, int height, void * background_base, int dest_x, int dest_y);
void cockpit_ckptutil_c_copyScreenRegion_FUN_00432d90(void * dest_buffer, int src_x, int src_y, int start_row, int bytes_per_row, int height);
void cockpit_ckptutil_c_generateScrollHeightMap_FUN_00432df0(void * bitmap_data, int end_x, int start_x, int bitmap_height, int * height_output, int num_height_rows, int transparency_color);
void cockpit_ckptutil_c_rotateCircularBitmap_FUN_00433030(void * bitmap_data, int width, int height, int num_iterations);
void cockpit_ckptutil_c_mirrorBitmapHorizontally_FUN_00433160(void * bitmap_data, int width, int height);
void cockpit_ckptutil_c_loadEdgeListFile_FUN_004331f0(char * filename, SEdgeList * edge_lists, int expected_count);
void cockpit_ckptutil_c_loadSingleEdgeList_FUN_00433440(char * filename, void * * edge_data_out, int * edge_count_out);
void cockpit_ckptutil_c_saveEdgeListFile_FUN_00433480(char * filename, SEdgeList * edge_lists, int edge_list_count);
void cockpit_ckptutil_c_drawClippedEdges_FUN_004335f0(SEdge * edges, int count, int x_offset, int y_offset);
void cockpit_ckptutil_c_rasterizeEdgeEndpoints_FUN_004336e0(void * bitmap_buffer, SEdge * edge_list, int edge_count, int buffer_width, int buffer_height);
void cockpit_ckptutil_c_renderEdgeArrayWithBufferLookup_FUN_00433820(uchar * color_buffer, SEdge * edge_array, int edge_count, int offset_x, int offset_y, int buffer_width);
undefined cockpit_ckptutil_c_FUN_004338f0();
void cockpit_ckptutil_c_drawLineAAWithBlending_FUN_004339c0(int x0, int y0, int x1, int y1, int base_color, uchar blend_color, int blend_mode);
void cockpit_ckptutil_c_drawLineAA_FUN_00433c90(int x0, int y0, int x1, int y1, int color);
void cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00433f50(int x, int y, float alpha, int color);
void cockpit_ckptutil_c_blendPixelWithSourcePalette_FUN_004342f0(int x, int y, float blend_factor, int palette_index);
void cockpit_ckptutil_c_putPixel_FUN_004345c0(int x, int y, int color);
int cockpit_ckptutil_c_isLineBlendingDisabled_FUN_00434650(void);
int cockpit_ckptutil_c_isLineClippingDisabled_FUN_00434660(void);
void cockpit_ckptutil_c_setLineBlendingDisabled_FUN_00434670(int disabled);
void cockpit_ckptutil_c_setLineClippingDisabled_FUN_00434680(int disabled);
char * cockpit_ckptutil_c_loadRotatedBitmapFile_FUN_00434690(char * filename, char * buffer, int width, int height, void * optional_param);
void cockpit_ckptutil_c_rotateBitmap_FUN_00434870(uchar * source_data, int width, int height, int bytes_per_pixel);
void cockpit_ckptutil_c_setEdgeData_FUN_00434a50(SEdge * edge_array, int edge_index, int x1, int y1, int x2, int y2, int flag_bit);
void * cockpit_ckptutil_c_traceConnectedEdges_FUN_00434af0(SEdgeList * edge_lists, void * output_buffer, int * output_count, int max_x, int max_y, int gap_tolerance_x, int gap_tolerance_y);
void cockpit_ckptutil_c_flipEdgeArrayHorizontally_FUN_004355c0(SEdge * edge_array, int edge_count, int flip_width);
void cockpit_ckptutil_c_generateTransparencySpans_FUN_00435730(void * bitmap_buffer, char * filename, int width, int height, void * span_data_buffer, int transparent_color_index);
SRenderVertex * engine_clipper_c_allocateClipVertex_FUN_00435980(void);
void engine_clipper_c_setNearPlaneDistance_FUN_004359d0(int distance);
int engine_clipper_c_getNearPlaneDistance_FUN_004359f0(void);
void engine_clipper_c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);
void engine_clipper_c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);
void engine_clipper_c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);
void engine_clipper_c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);
void engine_clipper_c_interpolateVertexNearClip_FUN_00435e00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);
int engine_clipper_c_clipPolygonLeftPlane_FUN_00435f20(SRenderVertex * * input_vertices, SRenderVertex * * output_vertices, int vertex_count);
int engine_clipper_c_clipPolygonRightPlane_FUN_00436060(SRenderVertex * * input_vertices, SRenderVertex * * output_vertices, int vertex_count);
int engine_clipper_c_clipPolygonBottomPlane_FUN_004361a0(SRenderVertex * * input_vertices, SRenderVertex * * output_vertices, int vertex_count);
int engine_clipper_c_clipPolygonTopPlane_FUN_004362e0(SRenderVertex * * input_vertices, SRenderVertex * * output_vertices, int vertex_count);
void engine_clipper_c_clipPolygonNearPlane_FUN_00436420(void);
void engine_clipper_c_normalizeClippedVertices_FUN_00436620(void);
int engine_clipper_c_clipPolygonToViewFrustum_FUN_004366e0(int vertex_count, int * vertex_indices);
void engine_clipper_c_clipAndRasterize_FUN_004371b0(int vertex_count, int * vertex_indices);
void engine_clipper_c_copyMemory_FUN_00437200(void * dest_ptr, void * src_ptr, int byte_count);
void engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00437230(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);
void engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00437360(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);
void engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00437490(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);
void engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output);
void engine_clipper_c_clipPolygonLeftPlaneGlobal_FUN_00437700(void);
void engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_00437840(void);
void engine_clipper_c_clipPolygonHorizontalPlanes_FUN_00437980(void);
void engine_clipper_c_clipPolygonVerticalPlanes_FUN_00437ac0(void);
void engine_clipper_c_perspectiveDivideVertices_FUN_00437bf0(void);
int engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0(int vertex_count, int * vertex_indices);
void engine_clipper_c_clipPolygonToViewport_FUN_00438420(int vertex_count, int * vertex_indices);
void core_cloth_cpp_staticInit_FUN_00438b80(void);
undefined core_cloth_cpp_FUN_00438ba0();
undefined core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
void core_cloth_cpp_CCloth_allocMemory_FUN_00438c50(CCloth * this_ptr);
undefined core_cloth_cpp_UnknownSomethingAndFreeMem_FUN_00438cb0();
int core_cloth_cpp_CCloth_load_FUN_00438cf0(CCloth * this_ptr, char * filename);
undefined core_cloth_cpp_ParseClothFile_FUN_00439260();
undefined core_cloth_cpp_ConnectingVerticesCheck_FUN_004394e0();
undefined core_cloth_cpp_FUN_00439710();
undefined core_cloth_cpp_OrientBoneCheck_FUN_0043a110();
undefined core_cloth_cpp_FUN_0043a2b0();
undefined core_cloth_cpp_FUN_0043a420();
undefined core_cloth_cpp_FUN_0043ab80();
undefined core_cloth_cpp_FUN_0043abb0();
undefined core_cloth_cpp_FUN_0043b790();
undefined core_cloth_cpp_FUN_0043b7e0();
int core_cloth_cpp_CCloth_saveJoinedLight_FUN_0043b9f0(CCloth * this_ptr);
undefined core_cloth_cpp_FUN_0043bae0();
undefined core_cloth_cpp_FUN_0043bf40();
undefined core_cloth_cpp_FUN_0043bf80();
void core_cloth_cpp_CClothList_load_FUN_0043bfa0(CClothList * this_ptr);
undefined core_cloth_cpp_FUN_0043c070();
void core_cloth_cpp_CClothList_add_FUN_0043c0f0(CClothList * this_ptr);
void core_cloth_cpp_CClothList_remove_FUN_0043c170(CClothList * this_ptr);
undefined core_cloth_cpp_FUN_0043c290();
undefined core_cloth_cpp_FUN_0043c2d0();
undefined core_cloth_cpp_MultipleCallSaveJoinedLight_FUN_0043c320();
undefined core_cloth_cpp_FUN_0043c3a0();
undefined core_cloth_cpp_FUN_0043c3e0();
undefined core_cloth_cpp_FUN_0043c430();
undefined core_cloth_cpp_FUN_0043c6b0();
undefined core_cloth_cpp_FUN_0043c6e0();
undefined core_cloth_cpp_FUN_0043c820();
undefined core_cloth_cpp_BoneAndClothEditor_FUN_0043c880();
undefined core_cloth_cpp_LockVerticesMaybe_FUN_0043d590();
undefined core_cloth_cpp_FUN_0043dcc0();
undefined core_cloth_cpp_FUN_0043ddf0();
undefined core_cloth_cpp_FUN_0043e0a0();
void core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr);
undefined core_cloth_cpp_FUN_0043e170();
undefined core_cloth_cpp_FUN_0043e1a0();
undefined core_cloth_cpp_FUN_0043e2a0();
undefined core_cloth_cpp_FUN_0043e2c0();
undefined core_cloth_cpp_FUN_0043e2f0();
undefined core_cloth_cpp_FUN_0043e320();
undefined core_cloth_cpp_FUN_0043e350();
undefined core_cloth_cpp_FUN_0043e380();
undefined core_cloth_cpp_FUN_0043e3d0();
SClothBone * core_cloth_cpp_SClothBone_ctor_FUN_0043e400(SClothBone * this_ptr);
SClothBone * core_cloth_cpp_SClothBone_dtor_FUN_0043e410(SClothBone * this_ptr);
SClothVertex * core_cloth_cpp_SClothVertex_ctor_FUN_0043e420(SClothVertex * this_ptr);
SClothVertex * core_cloth_cpp_SClothVertex_dtor_FUN_0043e440(SClothVertex * this_ptr);
int core_cloth_cpp_freeVectors_FUN_0043e460(CVector3f * * array);
int core_cloth_cpp_freeClothVertices_FUN_0043e480(SClothVertex * * array);
void core_cloth_cpp_freeClothBones_FUN_0043e4a0(SClothBone * * array);
undefined core_cloth_cpp_FUN_0043e4c0();
void support_codec_cpp_resetDictionary_FUN_0043e510(CLZWDictionary * dict);
int support_codec_cpp_readBitsFromStream_FUN_0043e530(SBitBuffer * bit_buffer, int bit_count, FILE * file_stream, int * bytes_remaining);
void support_codec_cpp_writeBitsToStream_FUN_0043e6c0(SBitBuffer * bit_buffer, int bit_count, int bit_value, FILE * output_stream);
void support_codec_cpp_flushBitBuffer_FUN_0043e7e0(SBitBuffer * bit_buffer, FILE * output_stream);
int support_codec_cpp_extractBitsFromBuffer_FUN_0043e840(SBitBuffer * bit_state, int bit_count, byte * * output_pos, int * bytes_remaining);
CCodec * support_codec_cpp_CCodec_ctor_FUN_0043e9a0(CCodec * this_ptr);
CCodec * support_codec_cpp_CCodec_dtor_FUN_0043e9b0(CCodec * this_ptr, int d1);
void support_codec_cpp_CCodec_init_FUN_0043e9d0(CCodec * this_ptr);
int support_codec_cpp_CCodec_finalize_FUN_0043ea00(CCodec * this_ptr, FILE * output_file);
int support_codec_cpp_CCodec_process_FUN_0043ea10(CCodec * this_ptr, FILE * input_file, int byte_count, FILE * output_file);
int support_codec_cpp_CCodec_processToBuffer_FUN_0043ea80(CCodec * this_ptr, void * input_param, void * context_param, char * output_buffer, int * output_size, int enable_finalize);
int support_codec_cpp_CCodec_processFromBuffer_FUN_0043eb30(CCodec * this_ptr, byte * input, int * input_length, byte * output, int * output_length);
int support_codec_cpp_CCodec_processBuffer_FUN_0043eba0(CCodec * this_ptr, byte * input, int * input_length, byte * output, int * output_length, int enable_callback);
int support_codec_cpp_CCodec_processFiles_FUN_0043ec30(CCodec * this_ptr, char * input_file_path, char * output_file_path);
int support_codec_cpp_CCodec_finalizeBuffer_FUN_0043ed50(CCodec * this_ptr, char * buffer_ptr, int * buffer_size_ptr);
CLZWDictionary * support_codec_cpp_CLZWDictionary_ctor_FUN_0043edd0(CLZWDictionary * this_ptr);
CLZWDictionary * support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(CLZWDictionary * this_ptr);
void support_codec_cpp_CLZWDictionary_free_FUN_0043ee10(CLZWDictionary * this_ptr);
void support_codec_cpp_CLZWDictionary_init_FUN_0043ee60(CLZWDictionary * this_ptr, int new_dict_size, int new_num_bits, int normal_code_width, int fallback_code_width);
void support_codec_cpp_CLZWDictionary_initTable_FUN_0043eef0(CLZWDictionary * this_ptr);
int support_codec_cpp_CLZWDictionary_findCode_FUN_0043ef50(CLZWDictionary * this_ptr, int search_code, int start_index);
int support_codec_cpp_CLZWDictionary_addNode_FUN_0043ef90(CLZWDictionary * this_ptr, int code, int parent_index);
int support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030(CLZWDictionary * this_ptr, SBitBuffer * bit_buffer, FILE * input_file, int * bytes_remaining);
int support_codec_cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0(CLZWDictionary * this_ptr, SBitBuffer * bit_buffer, byte * output_stream, int * bytes_remaining, int code_value);
void support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_0043f170(CLZWDictionary * this_ptr, int code_value, SBitBuffer * bit_buffer, FILE * output_stream);
int support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200(CLZWDictionary * this_ptr, int code, FILE * output_file);
int support_codec_cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270(CLZWDictionary * this_ptr, int code, char * * buffer_ptr_ptr);
CLZWCompress * support_codec_cpp_CLZWCompress_ctor_FUN_0043f2d0(CLZWCompress * this_ptr);
void support_codec_cpp_CLZWCompress_init_FUN_0043f320(CLZWCompress * this_ptr);
int support_codec_cpp_CLZWCompress_process_FUN_0043f360(CLZWCompress * this_ptr, FILE * input_file, int byte_count, FILE * output_file);
int support_codec_cpp_CLZWCompress_finalize_FUN_0043f440(CLZWCompress * this_ptr, FILE * output_file);
CLZWDecompress * support_codec_cpp_CLZWDecompress_ctor_FUN_0043f490(CLZWDecompress * this_ptr, int buffer_size, int initial_bits);
void support_codec_cpp_CLZWDecompress_init_FUN_0043f4d0(CLZWDecompress * this_ptr);
int support_codec_cpp_CLZWDecompress_process_FUN_0043f510(CLZWDecompress * this_ptr, FILE * input_file, int byte_count, FILE * output_file);
int support_codec_cpp_CLZWDecompress_finalize_FUN_0043f590(CLZWDecompress * this_ptr, FILE * output_file);
int support_codec_cpp_CLZWDecompress_processBuffer_FUN_0043f5d0(CLZWDecompress * this_ptr, byte * input, int * input_length, byte * output, int * output_length, int enable_callback);
int support_codec_cpp_CLZWDecompress_isDictionaryEmpty_FUN_0043f690(CLZWDecompress * this_ptr);
CLZWDecompress * support_codec_cpp_CLZWDecompress_dtor_FUN_0043f6b0(CLZWDecompress * this_ptr, uint d1, uint d2, uint d3);
CLZWCompress * support_codec_cpp_CLZWCompress_dtor_FUN_0043f710(CLZWCompress * this_ptr, uint d1, uint d2, uint d3, uint d4);
CDemonActorType * core_colonel_cpp_staticInit_FUN_0043f770(void);
undefined core_colonel_cpp_FUN_0043f7a0();
undefined core_colonel_cpp_FUN_0043f7d0();
CColonel * core_colonel_cpp_CColonel_ctor_FUN_0043f7e0(CColonel * this_ptr);
undefined core_colonel_cpp_FUN_0043f850();
undefined core_colonel_cpp_FUN_0043fa00();
undefined core_colonel_cpp_FUN_0043ff20();


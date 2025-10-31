#pragma once

// Function prototypes for shape/cramtex.cpp
// Generated from Ghidra function signatures

// Original: shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90
// Address: 00444d90
int generateTextureAtlasLayout(uint texture_count, STextureAtlasEntry * texture_entries, int atlas_width, int atlas_height, int acceptable_coverage_threshold, int acceptable_size, int * output_atlas_width, int * output_atlas_height, int padding_size, int fill_gaps, int visualize, int max_iterations);

// Original: shape_cramtex.cpp_qsortByLargestDimension_FUN_004457f0
// Address: 004457f0
int qsortByLargestDimension(SCramWorkingEntry * entry_a, SCramWorkingEntry * entry_b);

// Original: shape_cramtex.cpp_generateTextureAtlas_FUN_00445820
// Address: 00445820
void generateTextureAtlas(void);

// Original: shape_cramtex.cpp_addTextureEntry_FUN_00446100
// Address: 00446100
int addTextureEntry(SCramWorkingEntry * texture_entry);

// Original: shape_cramtex.cpp_qsortRectanglesByActiveFlag_FUN_00446140
// Address: 00446140
int qsortRectanglesByActiveFlag(SCramRectangle * * rect_a, SCramRectangle * * rect_b);

// Original: shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160
// Address: 00446160
int runInteractiveAtlasGeneration(SCramWorkingEntry * current_texture_entry);

// Original: shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590
// Address: 00447590
uint performGapFillingOptimization(void);

// Original: shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
// Address: 004478c0
int findHighestOverlappingY(SCramWorkingEntry * reference_entry);

// Original: shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
// Address: 00447930
int findLowestOverlappingY(SCramWorkingEntry * bounds_entry);

// Original: shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0
// Address: 004479a0
int findRightmostOverlappingX(SCramWorkingEntry * bounds_entry);

// Original: shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
// Address: 00447a10
int findLeftmostOverlappingX(SCramWorkingEntry * bounds_entry);

// Original: shape_cramtex.cpp_mapCoordinateToAtlas_FUN_00447a80
// Address: 00447a80
int mapCoordinateToAtlas(int min_coord, int max_coord, int pixel_offset);

// Original: shape_cramtex.cpp_renderAllTexturesAndRectangles_FUN_00447ab0
// Address: 00447ab0
void renderAllTexturesAndRectangles(int x, int y, int width, int height, int render_mode);

// Original: shape_cramtex.cpp_renderTextureEntry_FUN_00447c20
// Address: 00447c20
void renderTextureEntry(SCramWorkingEntry * texture_entry, int visualization_mode, int draw_x, int draw_y, int draw_width, int draw_height);

// Original: shape_cramtex.cpp_calculateAtlasEfficiency_FUN_00447e80
// Address: 00447e80
double calculateAtlasEfficiency(void);

// Original: shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20
// Address: 00447f20
void visualizeTextureAtlas(int visualization_mode, int completion_mode, int display_mode);

// Original: shape_cramtex.cpp_printAtlasLayoutReport_FUN_004481d0
// Address: 004481d0
void printAtlasLayoutReport(FILE * output_file);

// Original: shape_cramtex.cpp_placementCollisionCheck_FUN_00448260
// Address: 00448260
void placementCollisionCheck(int layer_id, int start_x, int start_y, int width, int height);

// Original: shape_cramtex.cpp_checkTextureCollision_FUN_00448390
// Address: 00448390
int checkTextureCollision(SCramWorkingEntry * placed_texture, SCramWorkingEntry * test_texture);

// Original: shape_cramtex.cpp_setupTextureForPlacement_FUN_004483e0
// Address: 004483e0
void setupTextureForPlacement(SCramWorkingEntry * destination, SCramWorkingEntry * source);

// Original: shape_cramtex.cpp_maxInt_FUN_00448440
// Address: 00448440
int maxInt(int a, int b);

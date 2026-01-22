#pragma once

// Function prototypes for shape/design.cpp
// Generated from Ghidra function signatures

// Original: shape_design.c_allocateSpatialTreeNode_FUN_00457ed0
// Address: 00457ed0
STreeNode * allocateSpatialTreeNode(void);

// Original: shape_design.c_showHelpFile_FUN_00457f00
// Address: 00457f00
void showHelpFile(char * help_filename);

// Original: shape_design.c_writeBinaryTreeNode_FUN_00457fd0
// Address: 00457fd0
void writeBinaryTreeNode(STreeNode * node, FILE * file, int depth);

// Original: shape_design.c_parseSpatialTreeFromFile_FUN_004580a0
// Address: 004580a0
STreeNode * parseSpatialTreeFromFile(FILE * file);

// Original: shape_design.c_loadModelBinary_FUN_00458170
// Address: 00458170
int loadModelBinary(char * filename);

// Original: shape_design.c_promptForModelNameAndLoad_FUN_00458a10
// Address: 00458a10
int promptForModelNameAndLoad(void);

// Original: shape_design.c_loadModelFile_FUN_00458ac0
// Address: 00458ac0
int loadModelFile(char * filename);

// Original: shape_design.c_skipLines_FUN_00459360
// Address: 00459360
void skipLines(FILE * file, int line_count);

// Original: shape_design.c_loadS3DModelFile_FUN_004593a0
// Address: 004593a0
int loadS3DModelFile(char * filename);

// Original: shape_design.c_validateModelTextures_FUN_00459a20
// Address: 00459a20
int validateModelTextures(char * directory_path, int mode);

// Original: shape_design.c_saveCurrentModel_FUN_00459de0
// Address: 00459de0
void saveCurrentModel(void);

// Original: shape_design.c_exportModelToMDL_FUN_00459e80
// Address: 00459e80
void exportModelToMDL(char * mdl_filename);

// Original: shape_design.c_writeSpatialTree_FUN_0045a200
// Address: 0045a200
void writeSpatialTree(STreeNode * node, FILE * output_file, int node_index);

// Original: shape_design.c_writePolygonModel_FUN_0045a320
// Address: 0045a320
void writePolygonModel(int polygon_index, FILE * output_file, float scale_factor);

// Original: shape_design.c_exportVertexListFile_FUN_0045a610
// Address: 0045a610
void exportVertexListFile(void);

// Original: shape_design.c_modelExportWizard_FUN_0045a7b0
// Address: 0045a7b0
void modelExportWizard(int export_format_type);

// Original: shape_design.c_exportModelToBIN_FUN_0045aa80
// Address: 0045aa80
void exportModelToBIN(char * filename, int depth_mode, int scale_mode, int export_format, int include_textures);

// Original: shape_design.c_polygonTextureNameComparator_FUN_0045b850
// Address: 0045b850
int polygonTextureNameComparator(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2);

// Original: shape_design.c_sortPolygonsByTexture_FUN_0045b8b0
// Address: 0045b8b0
void sortPolygonsByTexture(void);

// Original: shape_design.c_handleEditorHotkeys_FUN_0045b990
// Address: 0045b990
void handleEditorHotkeys(void);

// Original: shape_design.c_setupViewMatrix_FUN_0045ba60
// Address: 0045ba60
void setupViewMatrix(void);

// Original: shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0
// Address: 0045bbc0
void drawMouseCoordinatesAndReferenceLine(void);

// Original: shape_design.c_convertWorldToScreenCoordinates_FUN_0045bd10
// Address: 0045bd10
SVertexData * convertWorldToScreenCoordinates(SScreenCoord * input_coords, SVertexData * output_vertex);

// Original: shape_design.c_calculateVertexNormals_FUN_0045be40
// Address: 0045be40
void calculateVertexNormals(void);

// Original: shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0
// Address: 0045bff0
void renderVertexPointsWithLabels(void);

// Original: shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0
// Address: 0045c2f0
void renderPolygonVerticesWithLabels(int polygon_index);

// Original: shape_design.c_doNothing_FUN_0045c4f0
// Address: 0045c4f0
void doNothing(void);

// Original: shape_design.c_doNothing_FUN_0045c510
// Address: 0045c510
void doNothing(void);

// Original: shape_design.c_selectVertexToMove_FUN_0045c530
// Address: 0045c530
void selectVertexToMove(void);

// Original: shape_design.c_selectVertexToDelete_FUN_0045c5b0
// Address: 0045c5b0
void selectVertexToDelete(void);

// Original: shape_design.c_showPointEditor_FUN_0045c6c0
// Address: 0045c6c0
void showPointEditor(void);

// Original: shape_design.c_calculatePolygonNormal_FUN_0045caa0
// Address: 0045caa0
void calculatePolygonNormal(SShapeEditorPolygon * polygon);

// Original: shape_design.c_createPolygonFromVertexList_FUN_0045cc80
// Address: 0045cc80
undefined createPolygonFromVertexList();

// Original: shape_design.c_doNothing_FUN_0045ce00
// Address: 0045ce00
undefined doNothing();

// Original: shape_design.c_renderSinglePolygon_FUN_0045ce20
// Address: 0045ce20
void renderSinglePolygon(int polygon_index);

// Original: shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0
// Address: 0045d1d0
void renderSinglePolygonWithColorOverlay(int polygon_index, int * color_value);

// Original: shape_design.c_renderPolygonWireframe_FUN_0045d300
// Address: 0045d300
void renderPolygonWireframe(SMRGLHeaderPrimitive * polygon_data);

// Original: shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470
// Address: 0045d470
void renderPolygonWireframeAntialiased(SMRGLHeaderPrimitive * polygon_data, int line_color);

// Original: shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0
// Address: 0045d5d0
void processVerticesAndRenderPolygons(void);

// Original: shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920
// Address: 0045d920
void renderEditorBackgroundOverlay(void);

// Original: shape_design.c_showPolygonDetailsList_FUN_0045d9c0
// Address: 0045d9c0
undefined showPolygonDetailsList();

// Original: shape_design.c_showModelPartsList_FUN_0045dbe0
// Address: 0045dbe0
undefined showModelPartsList();

// Original: shape_design.c_deleteSinglePolygon_FUN_0045dcc0
// Address: 0045dcc0
undefined deleteSinglePolygon();

// Original: shape_design.c_deletePolygonRange_FUN_0045dd70
// Address: 0045dd70
undefined deletePolygonRange();

// Original: shape_design.c_selectModelPart_FUN_0045de80
// Address: 0045de80
undefined selectModelPart();

// Original: shape_design.c_createQuadPolygon_FUN_0045df60
// Address: 0045df60
undefined createQuadPolygon();

// Original: shape_design.c_createReversedQuadPolygon_FUN_0045e040
// Address: 0045e040
undefined createReversedQuadPolygon();

// Original: shape_design.c_createRotationalSweepGeometry_FUN_0045e070
// Address: 0045e070
undefined createRotationalSweepGeometry();

// Original: shape_design.c_createBoxPrimitive_FUN_0045e520
// Address: 0045e520
undefined createBoxPrimitive();

// Original: shape_design.c_centerVerticesAroundPoint_FUN_0045ea90
// Address: 0045ea90
undefined centerVerticesAroundPoint();

// Original: shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90
// Address: 0045ec90
undefined translateAllVerticesAlongAxis();

// Original: shape_design.c_realignObject_FUN_0045ee70
// Address: 0045ee70
void realignObject(int rotation_x, int rotation_y, int rotation_z);

// Original: shape_design.c_clampAndTransformUVCoordinates_FUN_0045f080
// Address: 0045f080
void clampAndTransformUVCoordinates(void);

// Original: shape_design.c_showFacetPartEditor_FUN_0045f1d0
// Address: 0045f1d0
void showFacetPartEditor(void);

// Original: shape_design.c_checkVertexCountLimit_FUN_00460a10
// Address: 00460a10
int checkVertexCountLimit(void);

// Original: shape_design.c_showFacetPartEditorHelp_FUN_00460ac0
// Address: 00460ac0
undefined showFacetPartEditorHelp();

// Original: shape_design.c_displayPalette_FUN_00461560
// Address: 00461560
undefined displayPalette();

// Original: shape_design.c_renderPolygonsByPart_FUN_004616a0
// Address: 004616a0
void renderPolygonsByPart(int part_id);

// Original: shape_design.c_traverseSpatialTree_FUN_004616f0
// Address: 004616f0
void traverseSpatialTree(SSpatialTreeNode * tree_node);

// Original: shape_design.c_configureSpatialSplittingPlane_FUN_004617c0
// Address: 004617c0
void configureSpatialSplittingPlane(STreeNode * node);

// Original: shape_design.c_showModelEditor_FUN_00461aa0
// Address: 00461aa0
void showModelEditor(void);

// Original: shape_design.c_findVertexMatches_FUN_00461ae0
// Address: 00461ae0
int findVertexMatches(int * vertices1, int * vertices2, int count1, int count2);

// Original: shape_design.c_arePolygonsCoplanar_FUN_00461b70
// Address: 00461b70
int arePolygonsCoplanar(SShapeEditorPolygon * polygon1_ptr, SShapeEditorPolygon * polygon2_ptr, float scale_factor, int tolerance);

// Original: shape_design.c_clampedArccos_FUN_00461c50
// Address: 00461c50
double clampedArccos(double dot_product);

// Original: shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0
// Address: 00461cb0
double calculateAngleBetweenPolygonNormals(SShapeEditorPolygon * normal1_ptr, SShapeEditorPolygon * normal2_ptr);

// Original: shape_design.c_isAngleBelowThreshold_FUN_00461d30
// Address: 00461d30
int isAngleBelowThreshold(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double angle_threshold);

// Original: shape_design.c_validatePolygonNormals_FUN_00461d80
// Address: 00461d80
int validatePolygonNormals(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double cos_tolerance);

// Original: shape_design.c_isNormalDotProductBelowThreshold_FUN_00461df0
// Address: 00461df0
int isNormalDotProductBelowThreshold(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double threshold);

// Original: shape_design.c_normalizeVertex_FUN_00461e60
// Address: 00461e60
void normalizeVertex(CVector3f * vertex);

// Original: shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
// Address: 00461ee0
double calculatePolygonAngularArea(SShapeEditorPolygon * polygon_ptr);

// Original: shape_design.c_calculateVertexAngle_FUN_00462050
// Address: 00462050
double calculateVertexAngle(int vertex1_index, int vertex2_index, int vertex3_index);

// Original: shape_design.c_swapDWords_FUN_00462130
// Address: 00462130
void swapDWords(uint * value1_ptr, uint * value2_ptr);

// Original: shape_design.c_swapFloats_FUN_00462160
// Address: 00462160
void swapFloats(float * value1_ptr, float * value2_ptr);

// Original: shape_design.c_mergeTrianglesIntoQuad_FUN_00462190
// Address: 00462190
uint mergeTrianglesIntoQuad(int first_polygon_index, int second_polygon_index);

// Original: shape_design.c_mergeAdjacentPolygons_FUN_00462b70
// Address: 00462b70
void mergeAdjacentPolygons(int polygon1_index, int polygon2_index);

// Original: shape_design.c_findSharedEdge_FUN_004635b0
// Address: 004635b0
int findSharedEdge(int * edge1_vertices, int * edge2_vertices, int vertex_count, int * shared_edge_type);

// Original: shape_design.c_comparePolygonIndices_FUN_00463800
// Address: 00463800
int comparePolygonIndices(int * first_value_ptr, int * second_value_ptr);

// Original: shape_design.c_removeUnusedVertices_FUN_00463830
// Address: 00463830
void removeUnusedVertices(void);

// Original: shape_design.c_removeDegenerateTriangles_FUN_00463a20
// Address: 00463a20
void removeDegenerateTriangles(void);

// Original: shape_design.c_complexPolygonReduction_FUN_00463b30
// Address: 00463b30
int complexPolygonReduction(int selected_polygon_index);

// Original: shape_design.c_detectMouseButtonClick_FUN_00464870
// Address: 00464870
int detectMouseButtonClick(int mouse_button_mask);

// Original: shape_design.c_mouseWheelPolygonReducer_FUN_004648e0
// Address: 004648e0
int mouseWheelPolygonReducer(int selected_polygon_index);

// Original: shape_design.c_polygonToolModeManager_FUN_00464c90
// Address: 00464c90
int polygonToolModeManager(int input_parameter);

// Original: shape_design.c_polygonMergerSelectAndProcess_FUN_00465160
// Address: 00465160
void polygonMergerSelectAndProcess(int polygon_index, float tolerance);

// Original: shape_design.c_removeDuplicatePolygons_FUN_004651b0
// Address: 004651b0
void removeDuplicatePolygons(int respect_part_assignments);

// Original: shape_design.c_removeDegeneratePolygons_FUN_00465310
// Address: 00465310
void removeDegeneratePolygons(void);

// Original: shape_design.c_polygonReducer_FUN_004654e0
// Address: 004654e0
void polygonReducer(void);

// Original: shape_design.c_configureSinglePassPolygonReduction_FUN_00465560
// Address: 00465560
void configureSinglePassPolygonReduction(int ui_mode);

// Original: shape_design.c_configureFullPassPolygonReduction_FUN_00465810
// Address: 00465810
void configureFullPassPolygonReduction(int ui_mode);

// Original: shape_design.c_optimizePolygonMesh_FUN_004658e0
// Address: 004658e0
void optimizePolygonMesh(float angle_tolerance, int strict_mode, int display_progress);

// Original: shape_design.c_mergePolygonsWithValidation_FUN_00465b40
// Address: 00465b40
void mergePolygonsWithValidation(int polygon1_index, int polygon2_index, float tolerance, int enforce_part_match);

// Original: shape_design.c_weldNearbyVertices_FUN_00465c50
// Address: 00465c50
void weldNearbyVertices(int polygon_index, float tolerance);

// Original: shape_design.c_duplicateSharedVertices_FUN_00465d50
// Address: 00465d50
void duplicateSharedVertices(int polygon_index);

// Original: shape_design.c_interactiveWeldVertices_FUN_00465e90
// Address: 00465e90
void interactiveWeldVertices(int polygon_index, float tolerance);

// Original: shape_design.c_interactiveGlobalWeld_FUN_00466040
// Address: 00466040
void interactiveGlobalWeld(float tolerance);

// Original: shape_design.c_qsortCompareByField4_FUN_004661d0
// Address: 004661d0
int qsortCompareByField4(void * element_a, void * element_b);

// Original: shape_design.c_qsortCompareByField4Wrapper_FUN_00466210
// Address: 00466210
int qsortCompareByField4Wrapper(void * element_a, void * element_b);

// Original: shape_design.c_findClosestPolygonToMouse_FUN_00466250
// Address: 00466250
int findClosestPolygonToMouse(void);

// Original: shape_design.c_centerObject_FUN_00466610
// Address: 00466610
void centerObject(void);

// Original: shape_design.c_groundCenterObject_FUN_00466a30
// Address: 00466a30
void groundCenterObject(void);

// Original: shape_design.c_sizeModelToZFeet_FUN_00466c70
// Address: 00466c70
void sizeModelToZFeet(void);

// Original: shape_design.c_sizeModelToXFeet_FUN_00466e40
// Address: 00466e40
void sizeModelToXFeet(void);

// Original: shape_design.c_sizeModelToYFeet_FUN_00467010
// Address: 00467010
void sizeModelToYFeet(void);

// Original: shape_design.c_turnModelInsideOut_FUN_004671e0
// Address: 004671e0
void turnModelInsideOut(void);

// Original: shape_design.c_simpleTexture_FUN_00467350
// Address: 00467350
void simpleTexture(void);

// Original: shape_design.c_floatEpsilonCompare_FUN_004676b0
// Address: 004676b0
int floatEpsilonCompare(float value1, float value2, float epsilon);

// Original: shape_design.c_qsortByVertexX_FUN_004676f0
// Address: 004676f0
int qsortByVertexX(SVertexPair * a, SVertexPair * b);

// Original: shape_design.c_qsortByOriginalIndex_FUN_004677c0
// Address: 004677c0
int qsortByOriginalIndex(SVertexPair * vertex_pair1, SVertexPair * vertex_pair2);

// Original: shape_design.c_vertexReducer_FUN_00467850
// Address: 00467850
void vertexReducer(float tolerance, float angle_tolerance, int display_progress);

// Original: shape_design.c_scaleModel_FUN_00467e70
// Address: 00467e70
void scaleModel(void);

// Original: shape_design.c_scaleXYZ_FUN_00467f30
// Address: 00467f30
void scaleXYZ(void);

// Original: shape_design.c_findVertexListInModel_FUN_00468000
// Address: 00468000
CVector3i * findVertexListInModel(SMRGLHeaderExtended * model_ptr);

// Original: shape_design.c_getVertexCountFromModel_FUN_00468080
// Address: 00468080
int getVertexCountFromModel(SMRGLHeaderExtended * model_ptr);

// Original: shape_design.c_applyVertexCentering_FUN_004680f0
// Address: 004680f0
void applyVertexCentering(SMRGLHeaderExtended * target_model, CVector3i * reference_vertex_list, int reference_vertex_id);

// Original: shape_design.c_centerKeyframeModels_FUN_004681a0
// Address: 004681a0
void centerKeyframeModels(SMRGLKeyframeModel * keyframe_model);

// Original: shape_design.c_createKeyframeModel_FUN_00468320
// Address: 00468320
void createKeyframeModel(void);

// Original: shape_design.c_squashShapeFor3DMorph_FUN_004685e0
// Address: 004685e0
void squashShapeFor3DMorph(void);

// Original: shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
// Address: 004686e0
void addVertexFromSphericalCoords(float latitude_degrees, float longitude_degrees, float radius);

// Original: shape_design.c_addQuadPolygon_FUN_004687c0
// Address: 004687c0
void addQuadPolygon(int vertex_index_0, int vertex_index_1, int vertex_index_2, int vertex_index_3);

// Original: shape_design.c_generateGlobe_FUN_00468910
// Address: 00468910
void generateGlobe(void);

// Original: shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
// Address: 00468c40
void addVertexFromSphericalCoordsHalfSphere(float latitude_degrees, float longitude_degrees, float radius);

// Original: shape_design.c_addQuadPolygonHalfSphere_FUN_00468d20
// Address: 00468d20
void addQuadPolygonHalfSphere(int vertex_index_1, int vertex_index_2, int vertex_index_3, int vertex_index_4);

// Original: shape_design.c_generateShell_FUN_00468f20
// Address: 00468f20
void generateShell(void);

// Original: shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140
// Address: 00469140
void addVertexFromSphericalCoordsOctant(float heading_angle, float pitch_angle, float radius);

// Original: shape_design.c_addQuadPolygonOctant_FUN_00469220
// Address: 00469220
void addQuadPolygonOctant(uint vertex_index_1, uint vertex_index_2, uint vertex_index_3, uint vertex_index_4);

// Original: shape_design.c_generateOctant_FUN_00469420
// Address: 00469420
int generateOctant(void);

// Original: shape_design.c_createCenterVertex_FUN_00469690
// Address: 00469690
void createCenterVertex(void);

// Original: shape_design.c_sizeModelInOneDimension_FUN_00469850
// Address: 00469850
void sizeModelInOneDimension(void);

// Original: shape_design.c_crushModel_FUN_00469bd0
// Address: 00469bd0
void crushModel(void);

// Original: shape_design.c_sizeForStadium_FUN_00469c70
// Address: 00469c70
void sizeForStadium(void);

// Original: shape_design.c_combineTextureMaps_FUN_00469ee0
// Address: 00469ee0
void combineTextureMaps(void);

// Original: shape_design.c_tileTextureMaps_FUN_0046a180
// Address: 0046a180
void tileTextureMaps(char * model_name, int prompt_for_model);

// Original: shape_design.c_getLastTextureProcessIndex_FUN_0046a860
// Address: 0046a860
int getLastTextureProcessIndex(void);

// Original: shape_design.c_initializeTextureManager_FUN_0046a880
// Address: 0046a880
void initializeTextureManager(int initialization_mode);

// Original: shape_design.c_setTextureQualityParameter_FUN_0046a8e0
// Address: 0046a8e0
void setTextureQualityParameter(int texture_quality_param);

// Original: shape_design.c_calculateTextureQualityLevel_FUN_0046a930
// Address: 0046a930
int calculateTextureQualityLevel(int texture_parameter);

// Original: shape_design.c_cramTextures_FUN_0046a970
// Address: 0046a970
void cramTextures(char * texture_filename, int min_u, int min_v, int max_u, int max_v);

// Original: shape_design.c_readPixelRowFromFile_FUN_0046abf0
// Address: 0046abf0
void readPixelRowFromFile(FILE * file_handle, byte * rgb_buffer, byte * alpha_buffer, int pixel_count, int file_flags);

// Original: shape_design.c_checkNonFFBytes_FUN_0046ac70
// Address: 0046ac70
int checkNonFFBytes(char * buffer_ptr, int buffer_length);

// Original: shape_design.c_wrapCoordinate_FUN_0046acc0
// Address: 0046acc0
int wrapCoordinate(int coordinate, int dimension);

// Original: shape_design.c_samplePixelAndAccumulate_FUN_0046ad00
// Address: 0046ad00
void samplePixelAndAccumulate(void * rgb_buffer, void * alpha_buffer, int atlas_width, int atlas_height, int pixel_x, int pixel_y, double weight, double * red_accumulator, double * green_accumulator, double * blue_accumulator, double * alpha_accumulator);

// Original: shape_design.c_calculateSamplingWeight_FUN_0046adc0
// Address: 0046adc0
double calculateSamplingWeight(double current_pos, double start_coord, double end_coord);

// Original: shape_design.c_sampleAndFilterPixel_FUN_0046ae20
// Address: 0046ae20
void sampleAndFilterPixel(void * rgb_buffer, void * alpha_buffer, int col_coord, int row_coord, double coord_x1, double coord_y1, double coord_x2, double coord_y2, int atlas_width, int atlas_height, byte * red_out, byte * green_out, byte * blue_out, byte * alpha_out);

// Original: shape_design.c_loadTextureData_FUN_0046b060
// Address: 0046b060
void loadTextureData(STextureLoadConfig * config_ptr, void * rgb_buffer, void * alpha_buffer, int atlas_width, int atlas_height);

// Original: shape_design.c_initializeCramConfig_FUN_0046b6e0
// Address: 0046b6e0
void initializeCramConfig(SCramConfig * cram_config);

// Original: shape_design.c_quantizePaletteColors_FUN_0046b770
// Address: 0046b770
void quantizePaletteColors(byte * image_data, int pixel_count, int stride, byte * palette_data, int mode_flag, char * bit_mask);

// Original: shape_design.c_embedCopyrightWatermark_FUN_0046b9a0
// Address: 0046b9a0
void embedCopyrightWatermark(void * image_buffer, char * output_filename, int texture_size);

// Original: shape_design.c_cramTextureList_FUN_0046bb80
// Address: 0046bb80
int cramTextureList(SCramConfig * cram_config);

// Original: shape_design.c_findTextureByFilename_FUN_0046dfc0
// Address: 0046dfc0
int findTextureByFilename(char * filename);

// Original: shape_design.c_getAtlasMapIndex_FUN_0046e030
// Address: 0046e030
int getAtlasMapIndex(int texture_entry_index);

// Original: shape_design.c_getTextureName_FUN_0046e060
// Address: 0046e060
char * getTextureName(int texture_index);

// Original: shape_design.c_fixupCramUV_FUN_0046e090
// Address: 0046e090
void fixupCramUV(int atlas_texture_index, float * u_coord, float * v_coord);

// Original: shape_design.c_normalizeUVCoordinates_FUN_0046e340
// Address: 0046e340
void normalizeUVCoordinates(void);

// Original: shape_design.c_triangulateDSE_FUN_0046e4d0
// Address: 0046e4d0
undefined triangulateDSE();

// Original: shape_design.c_clearAllTextureNames_FUN_0046e6b0
// Address: 0046e6b0
void clearAllTextureNames(void);

// Original: shape_design.c_displayMemoryStatus_FUN_0046e6f0
// Address: 0046e6f0
void displayMemoryStatus(int line_number);

// Original: shape_design.c_displayHeapStatus_FUN_0046e760
// Address: 0046e760
void displayHeapStatus(int line_number);

// Original: shape_design.c_loadPalette_FUN_0046e810
// Address: 0046e810
undefined loadPalette();

// Original: shape_design.c_multicramTextures_FUN_0046eb80
// Address: 0046eb80
void multicramTextures(void);

// Original: shape_design.c_detachFaces_FUN_0046eba0
// Address: 0046eba0
void detachFaces(void);

// Original: shape_design.c_smoothMesh_FUN_0046ed00
// Address: 0046ed00
void smoothMesh(void);

// Original: shape_design.c_bisectMesh_FUN_0046ed50
// Address: 0046ed50
void bisectMesh(void);

// Original: shape_design.c_showShapeEditorMenu_FUN_0046f290
// Address: 0046f290
void showShapeEditorMenu(void);

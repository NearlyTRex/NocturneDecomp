#pragma once

// Function prototypes for shape/design.cpp
// Generated from Ghidra function signatures

// Original: shape_design.c_allocateSpatialTreeNode_FUN_00457ed0
// Address: 00457ed0
STreeNode * __cdecl allocateSpatialTreeNode(void);

// Original: shape_design.c_showHelpFile_FUN_00457f00
// Address: 00457f00
void __cdecl showHelpFile(char *help_filename);

// Original: shape_design.c_writeBinaryTreeNode_FUN_00457fd0
// Address: 00457fd0
void __cdecl writeBinaryTreeNode(STreeNode *node,_FILE *file,int depth);

// Original: shape_design.c_parseSpatialTreeFromFile_FUN_004580a0
// Address: 004580a0
STreeNode * __cdecl parseSpatialTreeFromFile(_FILE *file);

// Original: shape_design.c_loadModelBinary_FUN_00458170
// Address: 00458170
int __cdecl loadModelBinary(char *filename);

// Original: shape_design.c_promptForModelNameAndLoad_FUN_00458a10
// Address: 00458a10
int __cdecl promptForModelNameAndLoad(void);

// Original: shape_design.c_loadModelFile_FUN_00458ac0
// Address: 00458ac0
int __cdecl loadModelFile(char *filename);

// Original: shape_design.c_skipLines_FUN_00459360
// Address: 00459360
void __cdecl skipLines(_FILE *file,int line_count);

// Original: shape_design.c_loadS3DModelFile_FUN_004593a0
// Address: 004593a0
int __cdecl loadS3DModelFile(char *filename);

// Original: shape_design.c_validateModelTextures_FUN_00459a20
// Address: 00459a20
int __cdecl validateModelTextures(char *directory_path,int mode);

// Original: shape_design.c_saveCurrentModel_FUN_00459de0
// Address: 00459de0
void __cdecl saveCurrentModel(void);

// Original: shape_design.c_exportModelToMDL_FUN_00459e80
// Address: 00459e80
void __cdecl exportModelToMDL(char *mdl_filename);

// Original: shape_design.c_writeSpatialTree_FUN_0045a200
// Address: 0045a200
void __cdecl writeSpatialTree(STreeNode *node,_FILE *output_file,int node_index);

// Original: shape_design.c_writePolygonModel_FUN_0045a320
// Address: 0045a320
void __cdecl writePolygonModel(int polygon_index,_FILE *output_file,float scale_factor);

// Original: shape_design.c_exportVertexListFile_FUN_0045a610
// Address: 0045a610
void __cdecl exportVertexListFile(void);

// Original: shape_design.c_modelExportWizard_FUN_0045a7b0
// Address: 0045a7b0
void __cdecl modelExportWizard(int export_format_type);

// Original: shape_design.c_exportModelToBIN_FUN_0045aa80
// Address: 0045aa80
void __cdecl exportModelToBIN(char *filename,int depth_mode,int scale_mode,int export_format,int include_textures);

// Original: shape_design.c_polygonTextureNameComparator_FUN_0045b850
// Address: 0045b850
int __cdecl polygonTextureNameComparator(SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2);

// Original: shape_design.c_sortPolygonsByTexture_FUN_0045b8b0
// Address: 0045b8b0
void __cdecl sortPolygonsByTexture(void);

// Original: shape_design.c_handleEditorHotkeys_FUN_0045b990
// Address: 0045b990
void __cdecl handleEditorHotkeys(void);

// Original: shape_design.c_setupViewMatrix_FUN_0045ba60
// Address: 0045ba60
void __cdecl setupViewMatrix(void);

// Original: shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0
// Address: 0045bbc0
void __cdecl drawMouseCoordinatesAndReferenceLine(void);

// Original: shape_design.c_convertWorldToScreenCoordinates_FUN_0045bd10
// Address: 0045bd10
SVertexData * __stack_esi convertWorldToScreenCoordinates(SScreenCoord *input_coords,SVertexData *output_vertex);

// Original: shape_design.c_calculateVertexNormals_FUN_0045be40
// Address: 0045be40
void __cdecl calculateVertexNormals(void);

// Original: shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0
// Address: 0045bff0
void __cdecl renderVertexPointsWithLabels(void);

// Original: shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0
// Address: 0045c2f0
void __cdecl renderPolygonVerticesWithLabels(int polygon_index);

// Original: shape_design.c_doNothing_FUN_0045c4f0
// Address: 0045c4f0
void __cdecl doNothing(void);

// Original: shape_design.c_doNothing_FUN_0045c510
// Address: 0045c510
void __cdecl doNothing(void);

// Original: shape_design.c_selectVertexToMove_FUN_0045c530
// Address: 0045c530
void __cdecl selectVertexToMove(void);

// Original: shape_design.c_selectVertexToDelete_FUN_0045c5b0
// Address: 0045c5b0
void __cdecl selectVertexToDelete(void);

// Original: shape_design.c_showPointEditor_FUN_0045c6c0
// Address: 0045c6c0
void __cdecl showPointEditor(void);

// Original: shape_design.c_calculatePolygonNormal_FUN_0045caa0
// Address: 0045caa0
void __cdecl calculatePolygonNormal(SShapeEditorPolygon *polygon);

// Original: shape_design.c_createPolygonFromVertexList_FUN_0045cc80
// Address: 0045cc80
void __cdecl createPolygonFromVertexList(void);

// Original: shape_design.c_doNothing_FUN_0045ce00
// Address: 0045ce00
void __cdecl doNothing(void);

// Original: shape_design.c_renderSinglePolygon_FUN_0045ce20
// Address: 0045ce20
void __cdecl renderSinglePolygon(int polygon_index);

// Original: shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0
// Address: 0045d1d0
void __cdecl renderSinglePolygonWithColorOverlay(int polygon_index,int *color_value);

// Original: shape_design.c_renderPolygonWireframe_FUN_0045d300
// Address: 0045d300
void __cdecl renderPolygonWireframe(SMRGLHeaderPrimitive *polygon_data);

// Original: shape_design.c_renderPolygonWireframeAntialiased_FUN_0045d470
// Address: 0045d470
void __cdecl renderPolygonWireframeAntialiased(SMRGLHeaderPrimitive *polygon_data,int line_color);

// Original: shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0
// Address: 0045d5d0
void __cdecl processVerticesAndRenderPolygons(void);

// Original: shape_design.c_renderEditorBackgroundOverlay_FUN_0045d920
// Address: 0045d920
void __cdecl renderEditorBackgroundOverlay(void);

// Original: shape_design.c_showPolygonDetailsList_FUN_0045d9c0
// Address: 0045d9c0
void __cdecl showPolygonDetailsList(void);

// Original: shape_design.c_showModelPartsList_FUN_0045dbe0
// Address: 0045dbe0
void __cdecl showModelPartsList(void);

// Original: shape_design.c_deleteSinglePolygon_FUN_0045dcc0
// Address: 0045dcc0
void __cdecl deleteSinglePolygon(void);

// Original: shape_design.c_deletePolygonRange_FUN_0045dd70
// Address: 0045dd70
void __cdecl deletePolygonRange(void);

// Original: shape_design.c_selectModelPart_FUN_0045de80
// Address: 0045de80
void __cdecl selectModelPart(void);

// Original: shape_design.c_createQuadPolygon_FUN_0045df60
// Address: 0045df60
void __cdecl createQuadPolygon(void);

// Original: shape_design.c_createReversedQuadPolygon_FUN_0045e040
// Address: 0045e040
void __cdecl createReversedQuadPolygon(void);

// Original: shape_design.c_createRotationalSweepGeometry_FUN_0045e070
// Address: 0045e070
void __cdecl createRotationalSweepGeometry(void);

// Original: shape_design.c_createBoxPrimitive_FUN_0045e520
// Address: 0045e520
void __cdecl createBoxPrimitive(void);

// Original: shape_design.c_centerVerticesAroundPoint_FUN_0045ea90
// Address: 0045ea90
void __cdecl centerVerticesAroundPoint(void);

// Original: shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90
// Address: 0045ec90
void __cdecl translateAllVerticesAlongAxis(void);

// Original: shape_design.c_realignObject_FUN_0045ee70
// Address: 0045ee70
void __cdecl realignObject(int rotation_x,int rotation_y,int rotation_z);

// Original: shape_design.c_clampAndTransformUVCoordinates_FUN_0045f080
// Address: 0045f080
void __cdecl clampAndTransformUVCoordinates(void);

// Original: shape_design.c_showFacetPartEditor_FUN_0045f1d0
// Address: 0045f1d0
void __cdecl showFacetPartEditor(void);

// Original: shape_design.c_checkVertexCountLimit_FUN_00460a10
// Address: 00460a10
int __cdecl checkVertexCountLimit(void);

// Original: shape_design.c_showFacetPartEditorHelp_FUN_00460ac0
// Address: 00460ac0
void __cdecl showFacetPartEditorHelp(void);

// Original: shape_design.c_displayPalette_FUN_00461560
// Address: 00461560
void __cdecl displayPalette(void);

// Original: shape_design.c_renderPolygonsByPart_FUN_004616a0
// Address: 004616a0
void __cdecl renderPolygonsByPart(int part_id);

// Original: shape_design.c_traverseSpatialTree_FUN_004616f0
// Address: 004616f0
void __cdecl traverseSpatialTree(SSpatialTreeNode *tree_node);

// Original: shape_design.c_configureSpatialSplittingPlane_FUN_004617c0
// Address: 004617c0
void __cdecl configureSpatialSplittingPlane(STreeNode *node);

// Original: shape_design.c_showModelEditor_FUN_00461aa0
// Address: 00461aa0
void __cdecl showModelEditor(void);

// Original: shape_design.c_findVertexMatches_FUN_00461ae0
// Address: 00461ae0
int __cdecl findVertexMatches(int *vertices1,int *vertices2,int count1,int count2);

// Original: shape_design.c_arePolygonsCoplanar_FUN_00461b70
// Address: 00461b70
int __cdecl arePolygonsCoplanar(SShapeEditorPolygon *polygon1_ptr,SShapeEditorPolygon *polygon2_ptr,float scale_factor,int tolerance);

// Original: shape_design.c_clampedArccos_FUN_00461c50
// Address: 00461c50
double __cdecl clampedArccos(double dot_product);

// Original: shape_design.c_calculateAngleBetweenPolygonNormals_FUN_00461cb0
// Address: 00461cb0
double __cdecl calculateAngleBetweenPolygonNormals(SShapeEditorPolygon *normal1_ptr,SShapeEditorPolygon *normal2_ptr);

// Original: shape_design.c_isAngleBelowThreshold_FUN_00461d30
// Address: 00461d30
int __cdecl isAngleBelowThreshold(SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2,double angle_threshold);

// Original: shape_design.c_validatePolygonNormals_FUN_00461d80
// Address: 00461d80
int __cdecl validatePolygonNormals(SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2,double cos_tolerance);

// Original: shape_design.c_isNormalDotProductBelowThreshold_FUN_00461df0
// Address: 00461df0
int __cdecl isNormalDotProductBelowThreshold(SShapeEditorPolygon *polygon1,SShapeEditorPolygon *polygon2,double threshold);

// Original: shape_design.c_normalizeVertex_FUN_00461e60
// Address: 00461e60
void __cdecl normalizeVertex(CVector3f *vertex);

// Original: shape_design.c_calculatePolygonAngularArea_FUN_00461ee0
// Address: 00461ee0
double __cdecl calculatePolygonAngularArea(SShapeEditorPolygon *polygon_ptr);

// Original: shape_design.c_calculateVertexAngle_FUN_00462050
// Address: 00462050
double __cdecl calculateVertexAngle(int vertex1_index,int vertex2_index,int vertex3_index);

// Original: shape_design.c_swapDWords_FUN_00462130
// Address: 00462130
void __cdecl swapDWords(uint *value1_ptr,uint *value2_ptr);

// Original: shape_design.c_swapFloats_FUN_00462160
// Address: 00462160
void __cdecl swapFloats(float *value1_ptr,float *value2_ptr);

// Original: shape_design.c_mergeTrianglesIntoQuad_FUN_00462190
// Address: 00462190
uint __cdecl mergeTrianglesIntoQuad(int first_polygon_index,int second_polygon_index);

// Original: shape_design.c_mergeAdjacentPolygons_FUN_00462b70
// Address: 00462b70
void __cdecl mergeAdjacentPolygons(int polygon1_index,int polygon2_index);

// Original: shape_design.c_findSharedEdge_FUN_004635b0
// Address: 004635b0
int __cdecl findSharedEdge(int *edge1_vertices,int *edge2_vertices,int vertex_count,int *shared_edge_type);

// Original: shape_design.c_comparePolygonIndices_FUN_00463800
// Address: 00463800
int __cdecl comparePolygonIndices(int *first_value_ptr,int *second_value_ptr);

// Original: shape_design.c_removeUnusedVertices_FUN_00463830
// Address: 00463830
void __cdecl removeUnusedVertices(void);

// Original: shape_design.c_removeDegenerateTriangles_FUN_00463a20
// Address: 00463a20
void __cdecl removeDegenerateTriangles(void);

// Original: shape_design.c_complexPolygonReduction_FUN_00463b30
// Address: 00463b30
int __cdecl complexPolygonReduction(int selected_polygon_index);

// Original: shape_design.c_detectMouseButtonClick_FUN_00464870
// Address: 00464870
int __cdecl detectMouseButtonClick(int mouse_button_mask);

// Original: shape_design.c_mouseWheelPolygonReducer_FUN_004648e0
// Address: 004648e0
int __cdecl mouseWheelPolygonReducer(int selected_polygon_index);

// Original: shape_design.c_polygonToolModeManager_FUN_00464c90
// Address: 00464c90
int __cdecl polygonToolModeManager(int input_parameter);

// Original: shape_design.c_polygonMergerSelectAndProcess_FUN_00465160
// Address: 00465160
void __cdecl polygonMergerSelectAndProcess(int polygon_index,float tolerance);

// Original: shape_design.c_removeDuplicatePolygons_FUN_004651b0
// Address: 004651b0
void __cdecl removeDuplicatePolygons(int respect_part_assignments);

// Original: shape_design.c_removeDegeneratePolygons_FUN_00465310
// Address: 00465310
void __cdecl removeDegeneratePolygons(void);

// Original: shape_design.c_polygonReducer_FUN_004654e0
// Address: 004654e0
void __cdecl polygonReducer(void);

// Original: shape_design.c_configureSinglePassPolygonReduction_FUN_00465560
// Address: 00465560
void __cdecl configureSinglePassPolygonReduction(int ui_mode);

// Original: shape_design.c_configureFullPassPolygonReduction_FUN_00465810
// Address: 00465810
void __cdecl configureFullPassPolygonReduction(int ui_mode);

// Original: shape_design.c_optimizePolygonMesh_FUN_004658e0
// Address: 004658e0
void __cdecl optimizePolygonMesh(float angle_tolerance,int strict_mode,int display_progress);

// Original: shape_design.c_mergePolygonsWithValidation_FUN_00465b40
// Address: 00465b40
void __cdecl mergePolygonsWithValidation(int polygon1_index,int polygon2_index,float tolerance,int enforce_part_match);

// Original: shape_design.c_weldNearbyVertices_FUN_00465c50
// Address: 00465c50
void __cdecl weldNearbyVertices(int polygon_index,float tolerance);

// Original: shape_design.c_duplicateSharedVertices_FUN_00465d50
// Address: 00465d50
void __cdecl duplicateSharedVertices(int polygon_index);

// Original: shape_design.c_interactiveWeldVertices_FUN_00465e90
// Address: 00465e90
void __cdecl interactiveWeldVertices(int polygon_index,float tolerance);

// Original: shape_design.c_interactiveGlobalWeld_FUN_00466040
// Address: 00466040
void __cdecl interactiveGlobalWeld(float tolerance);

// Original: shape_design.c_qsortCompareByField4_FUN_004661d0
// Address: 004661d0
int __cdecl qsortCompareByField4(void *element_a,void *element_b);

// Original: shape_design.c_qsortCompareByField4Wrapper_FUN_00466210
// Address: 00466210
int __cdecl qsortCompareByField4Wrapper(void *element_a,void *element_b);

// Original: shape_design.c_findClosestPolygonToMouse_FUN_00466250
// Address: 00466250
int __cdecl findClosestPolygonToMouse(void);

// Original: shape_design.c_centerObject_FUN_00466610
// Address: 00466610
void __cdecl centerObject(void);

// Original: shape_design.c_groundCenterObject_FUN_00466a30
// Address: 00466a30
void __cdecl groundCenterObject(void);

// Original: shape_design.c_sizeModelToZFeet_FUN_00466c70
// Address: 00466c70
void __cdecl sizeModelToZFeet(void);

// Original: shape_design.c_sizeModelToXFeet_FUN_00466e40
// Address: 00466e40
void __cdecl sizeModelToXFeet(void);

// Original: shape_design.c_sizeModelToYFeet_FUN_00467010
// Address: 00467010
void __cdecl sizeModelToYFeet(void);

// Original: shape_design.c_turnModelInsideOut_FUN_004671e0
// Address: 004671e0
void __cdecl turnModelInsideOut(void);

// Original: shape_design.c_simpleTexture_FUN_00467350
// Address: 00467350
void __cdecl simpleTexture(void);

// Original: shape_design.c_floatEpsilonCompare_FUN_004676b0
// Address: 004676b0
int __cdecl floatEpsilonCompare(float value1,float value2,float epsilon);

// Original: shape_design.c_qsortByVertexX_FUN_004676f0
// Address: 004676f0
int __cdecl qsortByVertexX(SVertexPair *a,SVertexPair *b);

// Original: shape_design.c_qsortByOriginalIndex_FUN_004677c0
// Address: 004677c0
int __cdecl qsortByOriginalIndex(SVertexPair *vertex_pair1,SVertexPair *vertex_pair2);

// Original: shape_design.c_vertexReducer_FUN_00467850
// Address: 00467850
void __cdecl vertexReducer(float tolerance,float angle_tolerance,int display_progress);

// Original: shape_design.c_scaleModel_FUN_00467e70
// Address: 00467e70
void __cdecl scaleModel(void);

// Original: shape_design.c_scaleXYZ_FUN_00467f30
// Address: 00467f30
void __cdecl scaleXYZ(void);

// Original: shape_design.c_findVertexListInModel_FUN_00468000
// Address: 00468000
CVector3i * __cdecl findVertexListInModel(SMRGLHeaderExtended *model_ptr);

// Original: shape_design.c_getVertexCountFromModel_FUN_00468080
// Address: 00468080
int __cdecl getVertexCountFromModel(SMRGLHeaderExtended *model_ptr);

// Original: shape_design.c_applyVertexCentering_FUN_004680f0
// Address: 004680f0
void __cdecl applyVertexCentering(SMRGLHeaderExtended *target_model,CVector3i *reference_vertex_list,int reference_vertex_id);

// Original: shape_design.c_centerKeyframeModels_FUN_004681a0
// Address: 004681a0
void __cdecl centerKeyframeModels(SMRGLKeyframeModel *keyframe_model);

// Original: shape_design.c_createKeyframeModel_FUN_00468320
// Address: 00468320
void __cdecl createKeyframeModel(void);

// Original: shape_design.c_squashShapeFor3DMorph_FUN_004685e0
// Address: 004685e0
void __cdecl squashShapeFor3DMorph(void);

// Original: shape_design.c_addVertexFromSphericalCoords_FUN_004686e0
// Address: 004686e0
void __cdecl addVertexFromSphericalCoords(float latitude_degrees,float longitude_degrees,float radius);

// Original: shape_design.c_addQuadPolygon_FUN_004687c0
// Address: 004687c0
void __cdecl addQuadPolygon(int vertex_index_0,int vertex_index_1,int vertex_index_2,int vertex_index_3);

// Original: shape_design.c_generateGlobe_FUN_00468910
// Address: 00468910
void __cdecl generateGlobe(void);

// Original: shape_design.c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
// Address: 00468c40
void __cdecl addVertexFromSphericalCoordsHalfSphere(float latitude_degrees,float longitude_degrees,float radius);

// Original: shape_design.c_addQuadPolygonHalfSphere_FUN_00468d20
// Address: 00468d20
void __cdecl addQuadPolygonHalfSphere(int vertex_index_1,int vertex_index_2,int vertex_index_3,int vertex_index_4);

// Original: shape_design.c_generateShell_FUN_00468f20
// Address: 00468f20
void __cdecl generateShell(void);

// Original: shape_design.c_addVertexFromSphericalCoordsOctant_FUN_00469140
// Address: 00469140
void __cdecl addVertexFromSphericalCoordsOctant(float heading_angle,float pitch_angle,float radius);

// Original: shape_design.c_addQuadPolygonOctant_FUN_00469220
// Address: 00469220
void __cdecl addQuadPolygonOctant(uint vertex_index_1,uint vertex_index_2,uint vertex_index_3,uint vertex_index_4);

// Original: shape_design.c_generateOctant_FUN_00469420
// Address: 00469420
int __cdecl generateOctant(void);

// Original: shape_design.c_createCenterVertex_FUN_00469690
// Address: 00469690
void __cdecl createCenterVertex(void);

// Original: shape_design.c_sizeModelInOneDimension_FUN_00469850
// Address: 00469850
void __cdecl sizeModelInOneDimension(void);

// Original: shape_design.c_crushModel_FUN_00469bd0
// Address: 00469bd0
void __cdecl crushModel(void);

// Original: shape_design.c_sizeForStadium_FUN_00469c70
// Address: 00469c70
void __cdecl sizeForStadium(void);

// Original: shape_design.c_combineTextureMaps_FUN_00469ee0
// Address: 00469ee0
void __cdecl combineTextureMaps(void);

// Original: shape_design.c_tileTextureMaps_FUN_0046a180
// Address: 0046a180
void __cdecl tileTextureMaps(char *model_name,int prompt_for_model);

// Original: shape_design.c_getLastTextureProcessIndex_FUN_0046a860
// Address: 0046a860
int __cdecl getLastTextureProcessIndex(void);

// Original: shape_design.c_initializeTextureManager_FUN_0046a880
// Address: 0046a880
void __cdecl initializeTextureManager(int initialization_mode);

// Original: shape_design.c_setTextureQualityParameter_FUN_0046a8e0
// Address: 0046a8e0
void __cdecl setTextureQualityParameter(int texture_quality_param);

// Original: shape_design.c_calculateTextureQualityLevel_FUN_0046a930
// Address: 0046a930
int __cdecl calculateTextureQualityLevel(int texture_parameter);

// Original: shape_design.c_cramTextures_FUN_0046a970
// Address: 0046a970
void __cdecl cramTextures(char *texture_filename,int min_u,int min_v,int max_u,int max_v);

// Original: shape_design.c_readPixelRowFromFile_FUN_0046abf0
// Address: 0046abf0
void __cdecl readPixelRowFromFile(_FILE *file_handle,byte *rgb_buffer,byte *alpha_buffer,int pixel_count,int file_flags);

// Original: shape_design.c_checkNonFFBytes_FUN_0046ac70
// Address: 0046ac70
int __cdecl checkNonFFBytes(char *buffer_ptr,int buffer_length);

// Original: shape_design.c_wrapCoordinate_FUN_0046acc0
// Address: 0046acc0
int __cdecl wrapCoordinate(int coordinate,int dimension);

// Original: shape_design.c_samplePixelAndAccumulate_FUN_0046ad00
// Address: 0046ad00
void __cdecl samplePixelAndAccumulate(void *rgb_buffer,void *alpha_buffer,int atlas_width,int atlas_height,int pixel_x,int pixel_y,double weight,double *red_accumulator,double *green_accumulator,double *blue_accumulator,double *alpha_accumulator);

// Original: shape_design.c_calculateSamplingWeight_FUN_0046adc0
// Address: 0046adc0
double __cdecl calculateSamplingWeight(double current_pos,double start_coord,double end_coord);

// Original: shape_design.c_sampleAndFilterPixel_FUN_0046ae20
// Address: 0046ae20
void __cdecl sampleAndFilterPixel(void *rgb_buffer,void *alpha_buffer,int col_coord,int row_coord,double coord_x1,double coord_y1,double coord_x2,double coord_y2,int atlas_width,int atlas_height,byte *red_out,byte *green_out,byte *blue_out,byte *alpha_out);

// Original: shape_design.c_loadTextureData_FUN_0046b060
// Address: 0046b060
void __cdecl loadTextureData(STextureLoadConfig *config_ptr,void *rgb_buffer,void *alpha_buffer,int atlas_width,int atlas_height);

// Original: shape_design.c_initializeCramConfig_FUN_0046b6e0
// Address: 0046b6e0
void __cdecl initializeCramConfig(SCramConfig *cram_config);

// Original: shape_design.c_quantizePaletteColors_FUN_0046b770
// Address: 0046b770
void __cdecl quantizePaletteColors(byte *image_data,int pixel_count,int stride,byte *palette_data,int mode_flag,char *bit_mask);

// Original: shape_design.c_embedCopyrightWatermark_FUN_0046b9a0
// Address: 0046b9a0
void __cdecl embedCopyrightWatermark(void *image_buffer,char *output_filename,int texture_size);

// Original: shape_design.c_cramTextureList_FUN_0046bb80
// Address: 0046bb80
int __cdecl cramTextureList(SCramConfig *cram_config);

// Original: shape_design.c_findTextureByFilename_FUN_0046dfc0
// Address: 0046dfc0
int __cdecl findTextureByFilename(char *filename);

// Original: shape_design.c_getAtlasMapIndex_FUN_0046e030
// Address: 0046e030
int __cdecl getAtlasMapIndex(int texture_entry_index);

// Original: shape_design.c_getTextureName_FUN_0046e060
// Address: 0046e060
char * __cdecl getTextureName(int texture_index);

// Original: shape_design.c_fixupCramUV_FUN_0046e090
// Address: 0046e090
void __cdecl fixupCramUV(int atlas_texture_index,float *u_coord,float *v_coord);

// Original: shape_design.c_normalizeUVCoordinates_FUN_0046e340
// Address: 0046e340
void __cdecl normalizeUVCoordinates(void);

// Original: shape_design.c_triangulateDSE_FUN_0046e4d0
// Address: 0046e4d0
void __cdecl triangulateDSE(void);

// Original: shape_design.c_clearAllTextureNames_FUN_0046e6b0
// Address: 0046e6b0
void __cdecl clearAllTextureNames(void);

// Original: shape_design.c_displayMemoryStatus_FUN_0046e6f0
// Address: 0046e6f0
void __cdecl displayMemoryStatus(int line_number);

// Original: shape_design.c_displayHeapStatus_FUN_0046e760
// Address: 0046e760
void __cdecl displayHeapStatus(int line_number);

// Original: shape_design.c_loadPalette_FUN_0046e810
// Address: 0046e810
void __cdecl loadPalette(void);

// Original: shape_design.c_multicramTextures_FUN_0046eb80
// Address: 0046eb80
void __cdecl multicramTextures(void);

// Original: shape_design.c_detachFaces_FUN_0046eba0
// Address: 0046eba0
void __cdecl detachFaces(void);

// Original: shape_design.c_smoothMesh_FUN_0046ed00
// Address: 0046ed00
void __cdecl smoothMesh(void);

// Original: shape_design.c_bisectMesh_FUN_0046ed50
// Address: 0046ed50
void __cdecl bisectMesh(void);

// Original: shape_design.c_showShapeEditorMenu_FUN_0046f290
// Address: 0046f290
void __cdecl showShapeEditorMenu(void);

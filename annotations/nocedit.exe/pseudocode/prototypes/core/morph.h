#pragma once

// Function prototypes for core/morph.cpp
// Generated from Ghidra function signatures

// Original: core_morph.cpp_countTrianglesFromPolygons_FUN_0052a490
// Address: 0052a490
int __cdecl countTrianglesFromPolygons(int poly_count,SMRGLHeaderPrimitive *poly_headers,int poly_stride);

// Original: core_morph.cpp_CMorphModel_ctor_FUN_0052a4c0
// Address: 0052a4c0
CMorphModel * __cdecl CMorphModel::ctor(CMorphModel *this_ptr);

// Original: core_morph.cpp_CMorphModel_dtor_FUN_0052a4f0
// Address: 0052a4f0
CMorphModel * __cdecl CMorphModel::dtor(CMorphModel *this_ptr,uint flags);

// Original: core_morph.cpp_CMorphModel_free_FUN_0052a510
// Address: 0052a510
void __cdecl CMorphModel::free(CMorphModel *this_ptr);

// Original: core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_0052a580
// Address: 0052a580
void __cdecl CMorphModel::addPartFromPolygon(CMorphModel *this_ptr,int vertex_count,CVector3i *vertex_data,int poly_count,SMRGLHeaderPrimitive *poly_data,int poly_stride,SMRGLTextureLod *texture_list,int *texture_index_list);

// Original: core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_0052a710
// Address: 0052a710
void __cdecl CMorphModel::addPartFromVertexBuffer(CMorphModel *this_ptr,int vertex_count,CVector3i *skinned_vertices,int tri_count,SInputFace *tri_data,STextureSet *texture_sets,int *index_data);

// Original: core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_0052a870
// Address: 0052a870
void __cdecl CMorphModel::addPartFromDeformableModel(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr);

// Original: core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_0052a8d0
// Address: 0052a8d0
void __cdecl CMorphModel::addPartFromKeyFramedModel(CMorphModel *this_ptr,CKeyFramedModel *model_ptr,int frame_index);

// Original: core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_0052a920
// Address: 0052a920
void __cdecl CMorphModel::animateFromVertexBuffer(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count);

// Original: core_morph.cpp_CMorphModel_animateFromPartVertexBuffer_FUN_0052aa00
// Address: 0052aa00
void __cdecl CMorphModel::animateFromPartVertexBuffer(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer);

// Original: core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_0052aa30
// Address: 0052aa30
void __cdecl CMorphModel::animateFromDeformableModel(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr);

// Original: core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_0052aa80
// Address: 0052aa80
void __cdecl CMorphModel::animateFromKeyframedModel(CMorphModel *this_ptr,int part_index,CKeyFramedModel *model_ptr,int frame_index);

// Original: core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_0052aac0
// Address: 0052aac0
void __cdecl CMorphModel::setFaceListFromPolygon(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureLod *texture_list,int *texture_index_list,int start_face,int poly_count);

// Original: core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_0052aca0
// Address: 0052aca0
void __cdecl CMorphModel::setFaceListFromTriangles(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count);

// Original: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
// Address: 0052ae60
int __cdecl CMorphModel::findOrAddTexture(CMorphModel *this_ptr,char *filename);

// Original: core_morph.cpp_CMorphModel_render_FUN_0052af30
// Address: 0052af30
void __cdecl CMorphModel::render(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points);

// Original: core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70
// Address: 0052af70
void __cdecl CMorphModel::rotatePoints(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points);

// Original: core_morph.cpp_CMorphModel_renderFaces_FUN_0052b160
// Address: 0052b160
void __cdecl CMorphModel::renderFaces(CMorphModel *this_ptr,float morph_t);

// Original: core_morph.cpp_CMorphModel_findNearestPoint_FUN_0052b280
// Address: 0052b280
int __cdecl CMorphModel::findNearestPoint(CMorphModel *this_ptr,CVector3f *position);

// Original: core_morph.cpp_CMorph_ctor_FUN_0052b310
// Address: 0052b310
CMorph * __cdecl CMorph::ctor(CMorph *this_ptr);

// Original: core_morph.cpp_CMorph_dtor_FUN_0052b330
// Address: 0052b330
CMorph * __cdecl CMorph::dtor(CMorph *this_ptr,uint flags);

// Original: core_morph.cpp_CMorph_free_FUN_0052b350
// Address: 0052b350
void __cdecl CMorph::free(CMorph *this_ptr);

// Original: core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_0052b370
// Address: 0052b370
void __cdecl CMorph::setupModelFromTriPolygons(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list);

// Original: core_morph.cpp_CMorph_setupModelFromQuadPolygons_FUN_0052b3d0
// Address: 0052b3d0
void __cdecl CMorph::setupModelFromQuadPolygons(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list);

// Original: core_morph.cpp_CMorph_setupModelFromDeformable_FUN_0052b430
// Address: 0052b430
void __cdecl CMorph::setupModelFromDeformable(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr);

// Original: core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_0052b470
// Address: 0052b470
void __cdecl CMorph::setupModelFromKeyframed(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index);

// Original: core_morph.cpp_CMorph_addTriPartToModel_FUN_0052b4b0
// Address: 0052b4b0
void __cdecl CMorph::addTriPartToModel(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list);

// Original: core_morph.cpp_CMorph_addQuadPartToModel_FUN_0052b500
// Address: 0052b500
void __cdecl CMorph::addQuadPartToModel(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list);

// Original: core_morph.cpp_CMorph_addPartFromDeformableModel_FUN_0052b550
// Address: 0052b550
void __cdecl CMorph::addPartFromDeformableModel(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr);

// Original: core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_0052b580
// Address: 0052b580
void __cdecl CMorph::addPartFromKeyframedModel(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index);

// Original: core_morph.cpp_CMorph_updateModelVertices_FUN_0052b5c0
// Address: 0052b5c0
void __cdecl CMorph::updateModelVertices(CMorph *this_ptr,int model_index,CVector3i *vertices,int part_index);

// Original: core_morph.cpp_CMorph_updateModelFromDeformable_FUN_0052b600
// Address: 0052b600
void __cdecl CMorph::updateModelFromDeformable(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index);

// Original: core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_0052b640
// Address: 0052b640
void __cdecl CMorph::updateModelFromKeyframed(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index,int part_index);

// Original: core_morph.cpp_CMorph_getReady_FUN_0052b680
// Address: 0052b680
void __cdecl CMorph::getReady(CMorph *this_ptr);

// Original: core_morph.cpp_CMorph_render_FUN_0052bae0
// Address: 0052bae0
void __cdecl CMorph::render(CMorph *this_ptr,float morph_t);

// Original: core_morph.cpp_plotPixelSafe_FUN_0052bb50
// Address: 0052bb50
void __cdecl plotPixelSafe(int x,int y);

// Original: core_morph.cpp_drawVertexMarker_FUN_0052bb80
// Address: 0052bb80
void __cdecl drawVertexMarker(SProjectedVertex *vertex,int radius);

// Original: core_morph.cpp_CMorph_editMorph_FUN_0052bcb0
// Address: 0052bcb0
void __cdecl CMorph::editMorph(CMorph *this_ptr);

// Original: core_morph.cpp_CMorph_previewMorph_FUN_0052ca90
// Address: 0052ca90
void __cdecl CMorph::previewMorph(CMorph *this_ptr,CDeformableModelInstance *model_ptr);

// Original: core_morph.cpp_transformAndProjectVertex_FUN_0052cc10
// Address: 0052cc10
void __cdecl transformAndProjectVertex(SProjectedVertex **vertex_buffer_ptr,int vertex_index,CVector3i *input);

// Original: core_morph.cpp_addInts_FUN_0052cc40
// Address: 0052cc40
int __cdecl addInts(int a,int b);

// Original: core_morph.cpp_SMorphControlPoint_ctor_FUN_0052cc50
// Address: 0052cc50
SMorphControlPoint * __cdecl SMorphControlPoint::ctor(SMorphControlPoint *this_ptr);

// Original: core_morph.cpp_SMorphControlPoint_dtor_FUN_0052cc70
// Address: 0052cc70
SMorphControlPoint * __cdecl SMorphControlPoint::dtor(SMorphControlPoint *this_ptr,uint flags);

// Original: core_morph.cpp_CVector3f_arrdtor2_FUN_0052cc90
// Address: 0052cc90
CVector3f * __cdecl CVector3f::arrdtor2(CVector3f *this_ptr,uint flags);

// Original: core_morph.cpp_SMorphControlPoint_arrdtor20_FUN_0052ccb0
// Address: 0052ccb0
SMorphControlPoint * __cdecl SMorphControlPoint::arrdtor20(SMorphControlPoint *objs,uint flags);

// Original: core_morph.cpp_CDeformableModelInstance_arrdtor2_FUN_0052ccd0
// Address: 0052ccd0
CDeformableModelInstance * __cdecl CDeformableModelInstance::arrdtor2(CDeformableModelInstance *this_ptr,uint flags);

// Original: core_morph.cpp_CBoundingBox3D_arrdtor2_FUN_0052ccf0
// Address: 0052ccf0
CBoundingBox3D * __cdecl CBoundingBox3D::arrdtor2(CBoundingBox3D *this_ptr,uint flags);

// Original: core_morph.cpp_CMorphModel_arrdtor2_FUN_0052cd10
// Address: 0052cd10
CMorphModel * __cdecl CMorphModel::arrdtor2(CMorphModel *this_ptr,uint flags);

// Original: core_morph.cpp_skipLine_FUN_0052cd30
// Address: 0052cd30
void __cdecl skipLine(_FILE *file_handle);

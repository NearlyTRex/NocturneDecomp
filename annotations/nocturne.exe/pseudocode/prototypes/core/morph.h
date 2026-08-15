#pragma once

// Function prototypes for core/morph.cpp
// Generated from Ghidra function signatures

// Original: core_morph.cpp_countTrianglesFromPolygons_FUN_004df210
// Address: 004df210
int __cdecl countTrianglesFromPolygons(int poly_count,SMRGLHeaderPrimitive *poly_headers,int poly_stride);

// Original: core_morph.cpp_CMorphModel_ctor_FUN_004df240
// Address: 004df240
CMorphModel * __cdecl CMorphModel::ctor(CMorphModel *this_ptr);

// Original: core_morph.cpp_CMorphModel_dtor_FUN_004df270
// Address: 004df270
CMorphModel * __cdecl CMorphModel::dtor(CMorphModel *this_ptr,uint flags);

// Original: core_morph.cpp_CMorphModel_free_FUN_004df290
// Address: 004df290
void __cdecl CMorphModel::free(CMorphModel *this_ptr);

// Original: core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0
// Address: 004df2f0
void __cdecl CMorphModel::addPartFromPolygon(CMorphModel *this_ptr,int vertex_count,CVector3i *vertex_data,int poly_count,SMRGLHeaderPrimitive *poly_data,int poly_stride,SMRGLTextureLod *texture_list,int *texture_index_list);

// Original: core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_004df460
// Address: 004df460
void __cdecl CMorphModel::addPartFromVertexBuffer(CMorphModel *this_ptr,int vertex_count,CVector3i *skinned_vertices,int tri_count,SInputFace *tri_data,STextureSet *texture_sets,int *index_data);

// Original: core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_004df5b0
// Address: 004df5b0
void __cdecl CMorphModel::addPartFromDeformableModel(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr);

// Original: core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610
// Address: 004df610
void __cdecl CMorphModel::addPartFromKeyFramedModel(CMorphModel *this_ptr,CKeyFramedModel *model_ptr,int frame_index);

// Original: core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660
// Address: 004df660
void __cdecl CMorphModel::animateFromVertexBuffer(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count);

// Original: core_morph.cpp_CMorphModel_animateFromPartVertexBuffer_FUN_004df740
// Address: 004df740
void __cdecl CMorphModel::animateFromPartVertexBuffer(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer);

// Original: core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_004df770
// Address: 004df770
void __cdecl CMorphModel::animateFromDeformableModel(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr);

// Original: core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_004df7c0
// Address: 004df7c0
void __cdecl CMorphModel::animateFromKeyframedModel(CMorphModel *this_ptr,int part_index,CKeyFramedModel *model_ptr,int frame_index);

// Original: core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_004df800
// Address: 004df800
void __cdecl CMorphModel::setFaceListFromPolygon(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureLod *texture_list,int *texture_index_list,int start_face,int poly_count);

// Original: core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_004df9e0
// Address: 004df9e0
void __cdecl CMorphModel::setFaceListFromTriangles(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count);

// Original: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004dfba0
// Address: 004dfba0
int __cdecl CMorphModel::findOrAddTexture(CMorphModel *this_ptr,char *filename);

// Original: core_morph.cpp_CMorphModel_render_FUN_004dfc70
// Address: 004dfc70
void __cdecl CMorphModel::render(CMorphModel *this_ptr,float morph_t,SMorphPoint *ref_points);

// Original: core_morph.cpp_CMorphModel_rotatePoints_FUN_004dfcb0
// Address: 004dfcb0
void __cdecl CMorphModel::rotatePoints(CMorphModel *this_ptr,float blend_factor,SMorphPoint *ref_points);

// Original: core_morph.cpp_CMorphModel_renderFaces_FUN_004dfea0
// Address: 004dfea0
void __cdecl CMorphModel::renderFaces(CMorphModel *this_ptr,float morph_t);

// Original: core_morph.cpp_CMorphModel_findNearestPoint_FUN_004dffc0
// Address: 004dffc0
int __cdecl CMorphModel::findNearestPoint(CMorphModel *this_ptr,CVector3f *position);

// Original: core_morph.cpp_CMorph_ctor_FUN_004e0050
// Address: 004e0050
CMorph * __cdecl CMorph::ctor(CMorph *this_ptr);

// Original: core_morph.cpp_CMorph_dtor_FUN_004e0070
// Address: 004e0070
CMorph * __cdecl CMorph::dtor(CMorph *this_ptr,uint flags);

// Original: core_morph.cpp_CMorph_free_FUN_004e0090
// Address: 004e0090
void __cdecl CMorph::free(CMorph *this_ptr);

// Original: core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0
// Address: 004e00b0
void __cdecl CMorph::setupModelFromTriPolygons(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list);

// Original: core_morph.cpp_CMorph_setupModelFromQuadPolygons_FUN_004e0110
// Address: 004e0110
void __cdecl CMorph::setupModelFromQuadPolygons(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list);

// Original: core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170
// Address: 004e0170
void __cdecl CMorph::setupModelFromDeformable(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr);

// Original: core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0
// Address: 004e01b0
void __cdecl CMorph::setupModelFromKeyframed(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index);

// Original: core_morph.cpp_CMorph_addTriPartToModel_FUN_004e01f0
// Address: 004e01f0
void __cdecl CMorph::addTriPartToModel(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list);

// Original: core_morph.cpp_CMorph_addQuadPartToModel_FUN_004e0240
// Address: 004e0240
void __cdecl CMorph::addQuadPartToModel(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list);

// Original: core_morph.cpp_CMorph_addPartFromDeformableModel_FUN_004e0290
// Address: 004e0290
void __cdecl CMorph::addPartFromDeformableModel(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr);

// Original: core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
// Address: 004e02c0
void __cdecl CMorph::addPartFromKeyframedModel(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index);

// Original: core_morph.cpp_CMorph_FUN_004e0300
// Address: 004e0300
void __cdecl CMorph(CMorph *this_ptr);

// Original: core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340
// Address: 004e0340
void __cdecl CMorph::updateModelFromDeformable(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index);

// Original: core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
// Address: 004e0380
void __cdecl CMorph::updateModelFromKeyframed(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index,int part_index);

// Original: core_morph.cpp_CMorph_getReady_FUN_004e03c0
// Address: 004e03c0
void __cdecl CMorph::getReady(CMorph *this_ptr);

// Original: core_morph.cpp_CMorph_render_FUN_004e0820
// Address: 004e0820
void __cdecl CMorph::render(CMorph *this_ptr,float morph_t);

// Original: core_morph.cpp_addInts_FUN_004e0890
// Address: 004e0890
int __cdecl addInts(int a,int b);

// Original: core_morph.cpp_CBoundingBox3D_arrdtor2_FUN_004e08a0
// Address: 004e08a0
CBoundingBox3D * __cdecl CBoundingBox3D::arrdtor2(CBoundingBox3D *this_ptr,uint flags);

// Original: core_morph.cpp_CMorphModel_arrdtor2_FUN_004e08c0
// Address: 004e08c0
CMorphModel * __cdecl CMorphModel::arrdtor2(CMorphModel *this_ptr,uint flags);

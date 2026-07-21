#pragma once

// Function prototypes for core/morph.cpp
// Generated from Ghidra function signatures

// Original: core_morph.cpp_CMorphModel_ctor_FUN_004df240
// Address: 004df240
void CMorphModel::ctor(undefined4 *param_1);

// Original: core_morph.cpp_CMorphModel_dtor_FUN_004df270
// Address: 004df270
undefined4 CMorphModel::dtor(undefined4 param_1);

// Original: core_morph.cpp_CMorphModel_free_FUN_004df290
// Address: 004df290
void __cdecl CMorphModel::free(undefined4 *param_1);

// Original: core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0
// Address: 004df2f0
void __cdecl CMorphModel::addPartFromPolygon(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,undefined4 param_7,undefined4 param_8);

// Original: core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_004df460
// Address: 004df460
void __cdecl CMorphModel::addPartFromVertexBuffer(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7);

// Original: core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_004df5b0
// Address: 004df5b0
void __cdecl CMorphModel::addPartFromDeformableModel(undefined4 param_1,int param_2);

// Original: core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610
// Address: 004df610
void __cdecl CMorphModel::addPartFromKeyFramedModel(undefined4 param_1,int param_2,undefined4 param_3);

// Original: core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660
// Address: 004df660
void __cdecl CMorphModel::animateFromVertexBuffer(int *param_1,int param_2,int *param_3,int param_4,int param_5);

// Original: core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_004df770
// Address: 004df770
void __cdecl CMorphModel::animateFromDeformableModel(undefined4 param_1,undefined4 param_2,int param_3);

// Original: core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_004df7c0
// Address: 004df7c0
void __cdecl CMorphModel::animateFromKeyframedModel(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);

// Original: core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_004df9e0
// Address: 004df9e0
void __cdecl CMorphModel::setFaceListFromTriangles(int *param_1,int param_2,ushort *param_3,int param_4,int *param_5,int param_6,int param_7);

// Original: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004dfba0
// Address: 004dfba0
int __cdecl CMorphModel::findOrAddTexture(int param_1,char *param_2);

// Original: core_morph.cpp_CMorphModel_render_FUN_004dfc70
// Address: 004dfc70
void __cdecl CMorphModel::render(undefined4 param_1,float param_2,undefined4 param_3);

// Original: core_morph.cpp_CMorphModel_rotatePoints_FUN_004dfcb0
// Address: 004dfcb0
void __cdecl CMorphModel::rotatePoints(int param_1,float param_2,int param_3);

// Original: core_morph.cpp_CMorphModel_renderFaces_FUN_004dfea0
// Address: 004dfea0
void __cdecl CMorphModel::renderFaces(int param_1,float param_2);

// Original: core_morph.cpp_CMorphModel_findNearestPoint_FUN_004dffc0
// Address: 004dffc0
int __cdecl CMorphModel::findNearestPoint(int param_1,float *param_2);

// Original: core_morph.cpp_CMorph_ctor_FUN_004e0050
// Address: 004e0050
void __cdecl CMorph::ctor(undefined4 param_1);

// Original: core_morph.cpp_CMorph_dtor_FUN_004e0070
// Address: 004e0070
void __cdecl CMorph::dtor(undefined4 param_1);

// Original: core_morph.cpp_CMorph_free_FUN_004e0090
// Address: 004e0090
void __cdecl CMorph::free(int param_1);

// Original: core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0
// Address: 004e00b0
void CMorph::setupModelFromTriPolygons(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);

// Original: core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170
// Address: 004e0170
void __cdecl CMorph::setupModelFromDeformable(int param_1,int param_2,undefined4 param_3);

// Original: core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0
// Address: 004e01b0
void __cdecl CMorph::setupModelFromKeyframed(int param_1,int param_2,undefined4 param_3,undefined4 param_4);

// Original: core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
// Address: 004e02c0
void __cdecl CMorph::addPartFromKeyframedModel(int param_1,int param_2,undefined4 param_3,undefined4 param_4);

// Original: core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340
// Address: 004e0340
void __cdecl CMorph::updateModelFromDeformable(int param_1,int param_2,undefined4 param_3,undefined4 param_4);

// Original: core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380
// Address: 004e0380
void __cdecl CMorph::updateModelFromKeyframed(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: core_morph.cpp_CMorph_getReady_FUN_004e03c0
// Address: 004e03c0
void __cdecl CMorph::getReady(int param_1);

// Original: core_morph.cpp_CMorph_render_FUN_004e0820
// Address: 004e0820
void __cdecl CMorph::render(int param_1,float param_2);

// Original: core_morph.cpp_CMorphModel_arrdtor_FUN_004e08c0
// Address: 004e08c0
void __cdecl CMorphModel::arrdtor(undefined4 param_1);

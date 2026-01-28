#pragma once

// Function prototypes for shape/dsemodel.cpp
// Generated from Ghidra function signatures

// Original: shape_dsemodel.cpp_CDSEModel_logVertex_FUN_0048f660
// Address: 0048f660
void __cdecl CDSEModel::logVertex(CDSEModel *this_ptr,int vertex_id);

// Original: shape_dsemodel.cpp_CDSEModel_convertVertex_FUN_0048f6f0
// Address: 0048f6f0
int __cdecl CDSEModel::convertVertex(CDSEModel *this_ptr,int vertex_id);

// Original: shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770
// Address: 0048f770
void __cdecl CDSEModel::processModelPart(CDSEModel *this_ptr,uint part_index);

// Original: shape_dsemodel.cpp_CDSEModel_load_FUN_0048f960
// Address: 0048f960
void __cdecl CDSEModel::load(CDSEModel *this_ptr);

// Original: shape_dsemodel.cpp_CDSEModel_centerModel_FUN_0048fa50
// Address: 0048fa50
void __cdecl CDSEModel::centerModel(CDSEModel *this_ptr);

// Original: shape_dsemodel.cpp_CDSEModel_scaleZ_FUN_0048fcc0
// Address: 0048fcc0
void __cdecl CDSEModel::scaleZ(CDSEModel *this_ptr,float scale_factor);

// Original: shape_dsemodel.cpp_CDSEModel_scaleX_FUN_0048fd70
// Address: 0048fd70
void __cdecl CDSEModel::scaleX(CDSEModel *this_ptr,float scale_factor);

// Original: shape_dsemodel.cpp_CDSEModel_scaleY_FUN_0048fe20
// Address: 0048fe20
void __cdecl CDSEModel::scaleY(CDSEModel *this_ptr,float scale_factor);

// Original: shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0
// Address: 0048fed0
int __cdecl CDSEModel::fitToExistingBIN(CDSEModel *this_ptr,char *filename);

// Original: shape_dsemodel.cpp_CDSEModel_doNothing_FUN_00490020
// Address: 00490020
void __cdecl CDSEModel::doNothing(CDSEModel *this_ptr);

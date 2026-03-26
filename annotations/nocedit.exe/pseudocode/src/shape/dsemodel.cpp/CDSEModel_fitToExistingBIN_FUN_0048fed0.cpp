// Name: shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0
// Address: 0048fed0
// Address Range: [[0048fed0, 00490016] [03fc49f2, 03fc4abc]]
// Convention: __cdecl
// Signature: int __cdecl shape_dsemodel_cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0(CDSEModel *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl shape_dsemodel_cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0(CDSEModel *this_ptr,char *filename)

{
  float fVar1;
  float fVar2;
  float fVar3;
  _FILE *file_ptr;
  SMRGLHeaderExtended *mrgl_data;
  int iVar1;
  SMRGLModelBounds *pSVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  SMRGLModelBounds local_c4;
  int local_90 [13];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_28;
  _FILE *local_24;
  SMRGLHeaderExtended *local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  file_ptr = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rb");
  if (file_ptr != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\shape\\dsemodel.cpp",0x180);
    mrgl_data = engine_model_c_loadModelFile_FUN_00527ec0(filename);
    engine_model_c_getMRGLBounds_FUN_00528140(mrgl_data,&local_c4);
    fVar1 = (float)0.00390625;
    fVar2 = (float)0.00390625;
    fVar3 = (float)0.00390625;
    shape_dsemodel_cpp_CDSEModel_centerModel_FUN_0048fa50(this_ptr);
    shape_dsemodel_cpp_CDSEModel_scaleX_FUN_0048fd70
              (this_ptr,(float)(local_c4.max_scaled.x - local_c4.min_scaled.x) * fVar1);
    shape_dsemodel_cpp_CDSEModel_scaleY_FUN_0048fe20
              (this_ptr,(float)(local_c4.max_scaled.y - local_c4.min_scaled.y) * fVar3);
    shape_dsemodel_cpp_CDSEModel_scaleZ_FUN_0048fcc0
              (this_ptr,(float)(local_c4.max_scaled.z - local_c4.min_scaled.z) * fVar2);
    engine_model_c_freeMRGLData_FUN_005280b0(mrgl_data);
  }
  local_28 = (int)(file_ptr != (_FILE *)0x0);
  return local_28;
}

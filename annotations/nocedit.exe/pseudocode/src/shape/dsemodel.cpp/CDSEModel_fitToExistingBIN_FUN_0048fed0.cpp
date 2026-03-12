// Name: shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0
// Address: 0048fed0
// Address Range: [[0048fed0, 00490016]]
// Convention: __cdecl
// Signature: int __cdecl shape_dsemodel_cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0(CDSEModel *this_ptr,char *filename)

#include "nocturne.h"

int __cdecl shape_dsemodel_cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0(CDSEModel *this_ptr,char *filename)

{
  int iVar1;
  int iVar2;
  SMRGLModelBounds *pSVar2;
  int *piVar3;
  int *piVar5;
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
  
  bVar5 = 0;
  local_24 = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rb");
  if (local_24 == (_FILE *)0x0) {
    local_28 = 0;
  }
  else {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_24,"..\\shape\\dsemodel.cpp",0x180);
    local_20 = engine_model_c_loadModelFile_FUN_00527ec0(filename);
    engine_model_c_getMRGLBounds_FUN_00528140(local_20,&local_c4);
    pSVar2 = &local_c4;
    piVar5 = local_90;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2 = (SMRGLModelBounds *)((int)pSVar2 + (uint)bVar5 * -8 + 4);
      *piVar5 = (pSVar2->min_scaled).x;
      pSVar2 = pSVar2;
      piVar5 = piVar5 + (uint)bVar5 * -2 + 1;
    }
    piVar3 = local_90;
    piVar4 = &local_5c;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
      *piVar4 = *piVar3;
      piVar3 = piVar3;
      piVar4 = piVar4;
    }
    local_1c = (float)(local_50 - local_5c) * (float)0.00390625;
    local_18 = (float)(local_48 - local_54) * (float)0.00390625;
    local_14 = (float)(local_4c - local_58) * (float)0.00390625;
    shape_dsemodel_cpp_CDSEModel_centerModel_FUN_0048fa50(this_ptr);
    shape_dsemodel_cpp_CDSEModel_scaleX_FUN_0048fd70(this_ptr,local_1c);
    shape_dsemodel_cpp_CDSEModel_scaleY_FUN_0048fe20(this_ptr,local_14);
    shape_dsemodel_cpp_CDSEModel_scaleZ_FUN_0048fcc0(this_ptr,local_18);
    engine_model_c_freeMRGLData_FUN_005280b0(local_20);
    local_28 = 1;
  }
  return local_28;
}

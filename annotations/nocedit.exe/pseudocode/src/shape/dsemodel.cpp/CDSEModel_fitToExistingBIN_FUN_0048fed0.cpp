// Name: shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0
// Address: 0048fed0
// Address Range: [[0048fed0, 00490016]]
// Convention: __cdecl
// Signature: int shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0(CDSEModel * this_ptr, char * filename)

#include "nocturne.h"

int __cdecl
shape_dsemodel_cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0(CDSEModel *this_ptr,char *filename)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  SMRGLModelBounds *in_stack_ffffff38;
  uint local_c4 [13];
  int local_90 [13];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_28;
  FILE *local_24;
  SMRGLHeaderExtended *local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar4 = 0;
  local_24 = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rb");
  if (local_24 == (FILE *)0x0) {
    local_28 = 0;
  }
  else {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_24,"..\\shape\\dsemodel.cpp",0x180);
    local_20 = engine_model_c_loadModelFile_FUN_00527ec0(filename);
    engine_model_c_getMRGLBounds_FUN_00528140(local_20,in_stack_ffffff38);
    piVar2 = local_c4;
    piVar3 = local_90;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
    }
    piVar2 = local_90;
    piVar3 = &local_5c;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
      piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
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

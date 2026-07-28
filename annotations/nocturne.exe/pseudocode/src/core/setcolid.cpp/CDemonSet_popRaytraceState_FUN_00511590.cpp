// Name: core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00511590
// Address: 00511590
// Address Range: [[00511590, 0051173e]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(CDemonSet *this_ptr)

{
  char *pcVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  CDemonSet *pCVar5;
  float *pfVar6;
  
  if (_DAT_020842d0 < 1) {
    PTR_01cc4800 = "..\\core\\setcolid.cpp";
    INT_01cc4804 = 0x42a;
    core_main_c_FUN_004c8440("CDemonSet::popRaytraceState - stack empty");
  }
  _DAT_020842d0 = _DAT_020842d0 + -1;
  iVar3 = _DAT_020842d0 * 0xa0;
  pfVar6 = (float *)(iVar3 + 0x20842d4);
  this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].x = *pfVar6;
  this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].y = *(float *)(iVar3 + 0x20842d8);
  this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].z = *(float *)(iVar3 + 0x20842dc);
  this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].x = *(float *)(iVar3 + 0x20842e0);
  this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].y = *(float *)(iVar3 + 0x20842e4);
  fVar2 = *(float *)(iVar3 + 0x20842e8);
  iVar4 = 0;
  this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].z = fVar2;
  pCVar5 = this_ptr;
  if (0 < (int)fVar2) {
    do {
      pCVar5->vdir_boxes[0xeb].rotation_matrix.m[2].y = pfVar6[7];
      iVar4 = iVar4 + 1;
      pfVar6 = pfVar6 + 1;
      pCVar5 = (CDemonSet *)pCVar5->cameras;
    } while (iVar4 < (int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].z);
  }
  this_ptr->vdir_boxes[0xeb].rotation_matrix.m[2].x = *(float *)(iVar3 + 0x20842ec);
  pcVar1 = this_ptr->lights[199].filter_names[0x12] + 0xc;
  if (pcVar1 != (char *)(iVar3 + 0x2084318)) {
    *(uint *)pcVar1 = *(uint *)(iVar3 + 0x2084318);
    *(uint *)(this_ptr->lights[199].filter_names[0x12] + 0x10) =
         *(uint *)(iVar3 + 0x208431c);
    *(uint *)(this_ptr->lights[199].filter_names[0x12] + 0x14) =
         *(uint *)(iVar3 + 0x2084320);
  }
  pcVar1 = this_ptr->lights[199].filter_names[0x12] + 0x18;
  if (pcVar1 != (char *)(iVar3 + 0x2084324)) {
    *(uint *)pcVar1 = *(uint *)(iVar3 + 0x2084324);
    *(uint *)(this_ptr->lights[199].filter_names[0x12] + 0x1c) =
         *(uint *)(iVar3 + 0x2084328);
    *(uint *)(this_ptr->lights[199].filter_names[0x12] + 0x20) =
         *(uint *)(iVar3 + 0x208432c);
  }
  pfVar6 = &this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].z;
  this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].x = *(float *)(iVar3 + 0x2084330);
  this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].y = *(float *)(iVar3 + 0x2084334);
  if (pfVar6 != (float *)(iVar3 + 0x2084338)) {
    *pfVar6 = *(float *)(iVar3 + 0x2084338);
    this_ptr->vdir_boxes[0xec].rotation_matrix.m[1].x = *(float *)(iVar3 + 0x208433c);
    this_ptr->vdir_boxes[0xec].rotation_matrix.m[1].y = *(float *)(iVar3 + 0x2084340);
  }
  this_ptr->vdir_boxes[0xec].rotation_matrix.m[1].z = *(float *)(iVar3 + 0x2084344);
  pcVar1 = this_ptr->lights[199].filter_names[0x12] + 0x24;
  if (pcVar1 != (char *)(iVar3 + 0x208434c)) {
    *(uint *)pcVar1 = *(uint *)(iVar3 + 0x208434c);
    *(uint *)this_ptr->lights[199].filter_names[0x13] = *(uint *)(iVar3 + 0x2084350);
    *(uint *)(this_ptr->lights[199].filter_names[0x13] + 4) =
         *(uint *)(iVar3 + 0x2084354);
  }
  pcVar1 = this_ptr->lights[199].filter_names[0x13] + 0xc;
  *(uint *)(this_ptr->lights[199].filter_names[0x13] + 8) = *(uint *)(iVar3 + 0x2084358)
  ;
  if (pcVar1 != (char *)(iVar3 + 0x208435c)) {
    *(uint *)pcVar1 = *(uint *)(iVar3 + 0x208435c);
    *(uint *)(this_ptr->lights[199].filter_names[0x13] + 0x10) =
         *(uint *)(iVar3 + 0x2084360);
    *(uint *)(this_ptr->lights[199].filter_names[0x13] + 0x14) =
         *(uint *)(iVar3 + 0x2084364);
  }
  *(uint *)(this_ptr->lights[199].filter_names[0x13] + 0x18) =
       *(uint *)(iVar3 + 0x2084368);
  *(uint *)(this_ptr->lights[199].filter_names[0x13] + 0x1c) =
       *(uint *)(iVar3 + 0x208436c);
  *(uint *)(this_ptr->lights[199].filter_names[0x13] + 0x20) =
       *(uint *)(iVar3 + 0x2084370);
  this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].x = *(float *)(iVar3 + 0x2084348);
  return;
}

// Name: core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_005113e0
// Address: 005113e0
// Address Range: [[005113e0, 0051158f]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(CDemonSet *this_ptr)

{
  char *pcVar1;
  float fVar2;
  int iVar3;
  CDemonSet *pCVar4;
  int iVar5;
  float *pfVar6;
  
  if (5 < _DAT_020842d0) {
    PTR_01cc4800 = "..\\core\\setcolid.cpp";
    INT_01cc4804 = 0x406;
    core_main_c_FUN_004c8440("CDemonSet::pushRaytraceState - stack full");
  }
  iVar3 = _DAT_020842d0 * 0xa0;
  pfVar6 = (float *)(iVar3 + 0x20842d4);
  *pfVar6 = this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].x;
  *(float *)(iVar3 + 0x20842d8) = this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].y;
  *(float *)(iVar3 + 0x20842dc) = this_ptr->vdir_boxes[0xeb].rotation_matrix.m[0].z;
  *(float *)(iVar3 + 0x20842e0) = this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].x;
  iVar5 = 0;
  *(float *)(iVar3 + 0x20842e4) = this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].y;
  _DAT_020842d0 = _DAT_020842d0 + 1;
  fVar2 = this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].z;
  *(float *)(iVar3 + 0x20842e8) = fVar2;
  pCVar4 = this_ptr;
  if (0 < (int)fVar2) {
    do {
      pfVar6[7] = pCVar4->vdir_boxes[0xeb].rotation_matrix.m[2].y;
      iVar5 = iVar5 + 1;
      pCVar4 = (CDemonSet *)pCVar4->cameras;
      pfVar6 = pfVar6 + 1;
    } while (iVar5 < (int)this_ptr->vdir_boxes[0xeb].rotation_matrix.m[1].z);
  }
  pcVar1 = this_ptr->lights[199].filter_names[0x12] + 0xc;
  *(float *)(iVar3 + 0x20842ec) = this_ptr->vdir_boxes[0xeb].rotation_matrix.m[2].x;
  if ((char *)(iVar3 + 0x2084318) != pcVar1) {
    *(uint *)(iVar3 + 0x2084318) = *(uint *)pcVar1;
    *(uint *)(iVar3 + 0x208431c) =
         *(uint *)(this_ptr->lights[199].filter_names[0x12] + 0x10);
    *(uint *)(iVar3 + 0x2084320) =
         *(uint *)(this_ptr->lights[199].filter_names[0x12] + 0x14);
  }
  pcVar1 = this_ptr->lights[199].filter_names[0x12] + 0x18;
  if ((char *)(iVar3 + 0x2084324) != pcVar1) {
    *(uint *)(iVar3 + 0x2084324) = *(uint *)pcVar1;
    *(uint *)(iVar3 + 0x2084328) =
         *(uint *)(this_ptr->lights[199].filter_names[0x12] + 0x1c);
    *(uint *)(iVar3 + 0x208432c) =
         *(uint *)(this_ptr->lights[199].filter_names[0x12] + 0x20);
  }
  pfVar6 = &this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].z;
  *(float *)(iVar3 + 0x2084330) = this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].x;
  *(float *)(iVar3 + 0x2084334) = this_ptr->vdir_boxes[0xec].rotation_matrix.m[0].y;
  if ((float *)(iVar3 + 0x2084338) != pfVar6) {
    *(float *)(iVar3 + 0x2084338) = *pfVar6;
    *(float *)(iVar3 + 0x208433c) = this_ptr->vdir_boxes[0xec].rotation_matrix.m[1].x;
    *(float *)(iVar3 + 0x2084340) = this_ptr->vdir_boxes[0xec].rotation_matrix.m[1].y;
  }
  pcVar1 = this_ptr->lights[199].filter_names[0x12] + 0x24;
  *(float *)(iVar3 + 0x2084344) = this_ptr->vdir_boxes[0xec].rotation_matrix.m[1].z;
  if ((char *)(iVar3 + 0x208434c) != pcVar1) {
    *(uint *)(iVar3 + 0x208434c) = *(uint *)pcVar1;
    *(uint *)(iVar3 + 0x2084350) = *(uint *)this_ptr->lights[199].filter_names[0x13];
    *(uint *)(iVar3 + 0x2084354) =
         *(uint *)(this_ptr->lights[199].filter_names[0x13] + 4);
  }
  *(uint *)(iVar3 + 0x2084358) = *(uint *)(this_ptr->lights[199].filter_names[0x13] + 8)
  ;
  pcVar1 = this_ptr->lights[199].filter_names[0x13] + 0xc;
  if ((char *)(iVar3 + 0x208435c) != pcVar1) {
    *(uint *)(iVar3 + 0x208435c) = *(uint *)pcVar1;
    *(uint *)(iVar3 + 0x2084360) =
         *(uint *)(this_ptr->lights[199].filter_names[0x13] + 0x10);
    *(uint *)(iVar3 + 0x2084364) =
         *(uint *)(this_ptr->lights[199].filter_names[0x13] + 0x14);
  }
  *(uint *)(iVar3 + 0x2084368) =
       *(uint *)(this_ptr->lights[199].filter_names[0x13] + 0x18);
  *(uint *)(iVar3 + 0x208436c) =
       *(uint *)(this_ptr->lights[199].filter_names[0x13] + 0x1c);
  *(uint *)(iVar3 + 0x2084370) =
       *(uint *)(this_ptr->lights[199].filter_names[0x13] + 0x20);
  *(float *)(iVar3 + 0x2084348) = this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].x;
  return;
}

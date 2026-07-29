// Name: core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0
// Address: 0050d2d0
// Address Range: [[0050d2d0, 0050d636]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(CDemonSet *this_ptr,uint dirty_flags_mask)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_0050d2d0(CDemonSet *this_ptr,uint dirty_flags_mask)

{
  int *piVar1;
  CDemonActor *this_ptr_00;
  float fVar2;
  float fVar3;
  CBoundingBox3D *pCVar4;
  CDemonSet *pCVar5;
  int iVar6;
  int iVar7;
  byte auStack_64 [8];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  float fStack_40;
  float local_3c;
  float fStack_38;
  int local_28;
  uint local_24;
  int local_14;
  
  if (*(int *)(0x01C775EC + 0x20c) != 0) {
    local_28 = wincore_winrun_cpp_getTime_FUN_00558a30();
  }
  _DAT_02080430 = 0.0;
  engine_drender_cpp_FUN_00460d10();
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
            (DAT_005ae704,(CVector3f *)(auStack_64 + 4));
  if (_DAT_007f7370 == 0) {
    PTR_01cc4800 = "..\\core\\set.cpp";
    INT_01cc4804 = 0xedb;
    core_main_c_FUN_004c8440();
  }
  local_24 = 0xc;
  if ((_DAT_01fba2d8 != 0) || (*(int *)(0x01C775EC + 0x240) != 0)) {
    local_24 = 0xd;
  }
  if (_DAT_01fb9b54 != 0) {
    local_24 = local_24 | 0x22;
  }
  iVar7 = 0;
  pCVar5 = this_ptr;
  if (0 < (int)this_ptr->collidable_actors[0x6d6]) {
    do {
      this_ptr_00 = pCVar5->collidable_actors[0x6d7];
      if (this_ptr_00 != *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
        if (((((this_ptr_00->location).position.x ==
               (this_ptr_00->previous_transform_state).position.x) &&
             ((this_ptr_00->location).position.y ==
              (this_ptr_00->previous_transform_state).position.y)) &&
            ((this_ptr_00->location).position.z ==
             (this_ptr_00->previous_transform_state).position.z)) &&
           ((((this_ptr_00->orient).vec.x ==
              (this_ptr_00->previous_transform_state).orientation.vec.x &&
             ((this_ptr_00->orient).vec.y ==
              (this_ptr_00->previous_transform_state).orientation.vec.y)) &&
            ((this_ptr_00->orient).vec.z ==
             (this_ptr_00->previous_transform_state).orientation.vec.z)))) {
          if (((this_ptr_00->previous_transform_state).dirty_flags & local_24) == 0)
          goto LAB_0050d39b;
        }
        else {
          piVar1 = &(this_ptr_00->previous_transform_state).dirty_flags;
          *piVar1 = *piVar1 | dirty_flags_mask;
        }
        if (((this_ptr_00->previous_transform_state).dirty_flags & local_24) != 0) {
          pCVar4 = (*((this_ptr_00->vtable)._ub)->getBoundingBox)
                             (this_ptr_00,(CBoundingBox3D *)&stack0xffffff7c);
          fStack_40 = (pCVar4->min).x + (pCVar4->max).x;
          local_3c = (pCVar4->min).y + (pCVar4->max).y;
          CStack_4c.x = fStack_40 * 0.5f;
          CStack_4c.y = local_3c * 0.5f;
          fStack_38 = (pCVar4->min).z + (pCVar4->max).z;
          CStack_4c.z = fStack_38 * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    (this_ptr_00,(CVector3f *)auStack_64,&CStack_4c);
          *(CDemonActor **)(&DAT_02080434 + (int)_DAT_02080430 * 8) = this_ptr_00;
          iVar6 = (int)_DAT_02080430 * 8;
          _DAT_02080430 = (float)((int)_DAT_02080430 + 1);
          *(float *)(&DAT_02080438 + iVar6) =
               (fStack_50 - fStack_5c) * (fStack_50 - fStack_5c) +
               (fStack_54 - (float)auStack_64._4_4_) * (fStack_54 - (float)auStack_64._4_4_) +
               (fStack_58 - (float)auStack_64._0_4_) * (fStack_58 - (float)auStack_64._0_4_);
        }
      }
LAB_0050d39b:
      iVar7 = iVar7 + 1;
      pCVar5 = (CDemonSet *)pCVar5->cameras;
    } while (iVar7 < (int)this_ptr->collidable_actors[0x6d6]);
  }
  _qsort
            (&DAT_02080434,(SIZE_T)_DAT_02080430,8,core_set_cpp_qsortByDisplayListEntry_FUN_0050d2a0
            );
  fVar3 = _DAT_02080430;
  iVar7 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  if (iVar7 == 0) {
    iVar7 = 0;
    if (0 < (int)_DAT_02080430) {
      iVar6 = 0;
      pCVar5 = this_ptr;
      do {
        fVar2 = _DAT_02080430;
        piVar1 = (int *)(&DAT_02080434 + iVar6);
        iVar6 = iVar6 + 8;
        iVar7 = iVar7 + 1;
        pCVar5->vdir_boxes[0xec].dead = *piVar1;
        pCVar5 = (CDemonSet *)pCVar5->cameras;
        fVar3 = _DAT_02080430;
      } while (iVar7 < (int)fVar2);
    }
  }
  else {
    iVar6 = 0;
    this_ptr->vdir_boxes[0xec].dead = iVar7;
    if (0 < (int)fVar3) {
      iVar7 = 0;
      pCVar5 = this_ptr;
      do {
        fVar3 = _DAT_02080430;
        piVar1 = (int *)(&DAT_02080434 + iVar7);
        iVar7 = iVar7 + 8;
        iVar6 = iVar6 + 1;
        pCVar5->vdir_boxes[0xec].parent_index = *piVar1;
        pCVar5 = (CDemonSet *)pCVar5->cameras;
      } while (iVar6 < (int)fVar3);
    }
    fVar3 = (float)((int)_DAT_02080430 + 1);
  }
  this_ptr->vdir_boxes[0xec].rotation_matrix.m[2].z = fVar3;
  if (*(int *)(0x01C775EC + 0x20c) != 0) {
    local_14 = wincore_winrun_cpp_getTime_FUN_00558a30();
    local_14 = local_14 - local_28;
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"buildDispList %d items : %3.2f ms\n",_DAT_02080430,
               ((double)local_14 * 0.055555555555555601 * 1.52587890625e-05 * 1000) /
               (double)*(float *)(0x01C775EC + 0x264));
    return;
  }
  return;
}

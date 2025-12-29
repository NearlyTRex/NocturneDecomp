// Name: core_colonel.cpp_FUN_0043ff20
// Address: 0043ff20
// Address Range: [[0043ff20, 00440423]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_0043ff20()

#include "nocturne.h"

/* Signature: byte actors_hero_colonel.cpp_FUN_0043ff20(uint param_1, uint
   param_2) */

void core_colonel_cpp_FUN_0043ff20(void)

{
  bool bVar1;
  CHero *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  SMotion *pSVar5;
  CPathMap *this_ptr;
  int iVar6;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float unaff_EDI;
  CHero *pCVar7;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_80;
  CVector3f CStack_7c;
  float fStack_68;
  float fStack_64;
  float local_60;
  CVector3f local_5c;
  float local_50;
  byte local_4c [12];
  CVector3f CStack_40;
  CVector3f CStack_34;
  float local_28;
  uint local_20;
  uint local_1c;
  float local_18;
  
  bVar1 = false;
  local_1c = 0x3e800000;
  local_20 = 0x3f490fdb;
  pCVar7 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40((void *)(in_stack_00000004 + 0xbe2c),0,0x2c);
  if (*(int *)(in_stack_00000004 + 130000) != 0) {
    pCVar2 = g_HeroActors[g_LocalHeroIndex];
    local_50 = *(float *)(in_stack_00000004 + 0x20) -
               (pCVar2->base_character).base_actor.location.position.x;
    local_4c._0_4_ =
         *(float *)(in_stack_00000004 + 0x24) -
         (pCVar2->base_character).base_actor.location.position.y;
    local_4c._4_4_ =
         *(float *)(in_stack_00000004 + 0x28) -
         (pCVar2->base_character).base_actor.location.position.z;
    local_28 = SQRT((float)local_4c._4_4_ * (float)local_4c._4_4_ +
                    local_50 * local_50 + (float)local_4c._0_4_ * (float)local_4c._0_4_);
    if ((((*(int *)(in_stack_00000004 + 130000) == 3) || (local_28 < 20f)) &&
        ((*(int *)(in_stack_00000004 + 130000) == 2 || (*(int *)(in_stack_00000004 + 130000) == 3)))
        ) && ((pCVar2 = (CHero *)core_hero_cpp_FUN_004f3960(), pCVar2 != (CHero *)0x0 &&
              (local_80 < (float)20)))) {
      bVar1 = true;
      pCVar7 = pCVar2;
    }
    local_5c.y = (pCVar7->base_character).base_actor.location.position.x -
                 *(float *)(in_stack_00000004 + 0x20);
    local_5c.z = (pCVar7->base_character).base_actor.location.position.y -
                 *(float *)(in_stack_00000004 + 0x24);
    local_50 = (pCVar7->base_character).base_actor.location.position.z -
               *(float *)(in_stack_00000004 + 0x28);
    if ((float *)local_4c != &local_5c.y) {
      local_4c._0_4_ = local_5c.y;
      local_4c._4_4_ = local_5c.z;
      local_4c._8_4_ = local_50;
    }
    local_28 = SQRT((float)local_4c._8_4_ * (float)local_4c._8_4_ +
                    (float)local_4c._0_4_ * (float)local_4c._0_4_ +
                    (float)local_4c._4_4_ * (float)local_4c._4_4_);
    if ((float)6 <= local_28) {
      this_ptr = (CPathMap *)0x0;
      if (!bVar1) {
        this_ptr = (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable)->
                     getPathMap)((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
      }
      if (this_ptr == (CPathMap *)0x0) {
        this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
      }
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr,(CVector3f *)(in_stack_00000004 + 0x20),&CStack_7c,
                         *(int *)(in_stack_00000004 + 0x6c));
      if (iVar6 != 0) {
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (CStack_7c.z - *(float *)(in_stack_00000004 + 0x34));
        fVar4 = fVar4 * (float)0.31830988619288902 * (float)4;
        local_18 = -unaff_EDI;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar4;
        if (fVar4 < local_18) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_18;
        }
        if (unaff_EDI < *(float *)(in_stack_00000004 + 0xbe50)) {
          *(float *)(in_stack_00000004 + 0xbe50) = unaff_EDI;
        }
        if (((float)10 <= local_80) || (bVar1)) {
          *(uint *)(in_stack_00000004 + 0xbe34) = 1;
          *(uint *)(in_stack_00000004 + 0xbe2c) = 1;
        }
        else {
          *(uint *)(in_stack_00000004 + 0xbe2c) = 1;
        }
      }
    }
    else {
      if (bVar1) {
        if (*(int *)(in_stack_00000004 + 0x1fbd4) == 0) {
          *(uint *)(in_stack_00000004 + 0xbe44) = 1;
        }
        else {
          pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             ((CMotionController *)(in_stack_00000004 + 0x158));
          if ((pSVar5->state_index != 2) && (pSVar5->state_index != 1)) {
            *(uint *)(in_stack_00000004 + 0xbe38) = 1;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                  ((CMotionController *)(in_stack_00000004 + 0x158));
      }
      if (bVar1) {
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_34,(CVector3f *)local_4c);
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar3->y - *(float *)(in_stack_00000004 + 0x34));
        fVar4 = fVar4 * (float)0.31830988619288902 * (float)4;
        unaff_ESI = -unaff_EDI;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar4;
        if (fVar4 < unaff_ESI) {
          *(float *)(in_stack_00000004 + 0xbe50) = unaff_ESI;
        }
        if (unaff_EDI < *(float *)(in_stack_00000004 + 0xbe50)) {
          *(float *)(in_stack_00000004 + 0xbe50) = unaff_EDI;
        }
        if ((((float)-0.25 < *(float *)(in_stack_00000004 + 0xbe50)) &&
            ((double)*(float *)(in_stack_00000004 + 0xbe50) < 0.25)) &&
           (*(int *)(in_stack_00000004 + 0xbe38) != 0)) {
          *(uint *)(in_stack_00000004 + 0xbe50) = 0;
        }
      }
    }
    fStack_68 = (pCVar7->base_character).base_actor.location.position.x -
                *(float *)(in_stack_00000004 + 0x20);
    fStack_64 = (pCVar7->base_character).base_actor.location.position.y -
                *(float *)(in_stack_00000004 + 0x24);
    local_60 = (pCVar7->base_character).base_actor.location.position.z -
               *(float *)(in_stack_00000004 + 0x28);
    if ((float *)(local_4c + 8) != &fStack_68) {
      local_4c._8_4_ = fStack_68;
      CStack_40.x = fStack_64;
      CStack_40.y = local_60;
    }
    pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&local_5c,(CVector3f *)(local_4c + 8));
    if (&CStack_40 != pCVar3) {
      CStack_40.x = pCVar3->x;
      CStack_40.y = pCVar3->y;
      CStack_40.z = pCVar3->z;
    }
    CStack_34.z = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                            (CStack_40.y - *(float *)(in_stack_00000004 + 0x34));
    if (unaff_ESI < CStack_34.z) {
      CStack_34.z = unaff_ESI;
    }
    if (CStack_34.z < -unaff_ESI) {
      CStack_34.z = -unaff_ESI;
    }
    CStack_7c.z = CStack_34.z - *(float *)(in_stack_00000004 + 0x1fbe0);
    if (in_stack_00000008 * (float)3.1415926535000001 < CStack_7c.z) {
      CStack_7c.z = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (CStack_7c.z < in_stack_00000008 * (float)-3.1415926535000001) {
      CStack_7c.z = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(in_stack_00000004 + 0x1fbe0) = *(float *)(in_stack_00000004 + 0x1fbe0) + CStack_7c.z;
  }
  return;
}

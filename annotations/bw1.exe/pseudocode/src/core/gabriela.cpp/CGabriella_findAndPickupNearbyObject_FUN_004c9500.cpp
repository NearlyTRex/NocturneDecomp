// Name: core_gabriela.cpp_CGabriella_findAndPickupNearbyObject_FUN_004c9500
// Address: 004c9500
// Address Range: [[004c9500, 004c998a]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004c9500(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004c9500(CGabriella *this_ptr)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint auStackY_10b8 [1003];
  int iVar5;
  float local_100 [3];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc [2];
  uint local_c4;
  uint local_c0;
  uint local_bc;
  float fStack_b8;
  uint local_ac;
  uint local_a0;
  uint local_9c;
  uint local_98;
  float fStack_94;
  float afStack_90 [4];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint auStack_60 [2];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint auStack_48 [2];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  byte *local_2c;
  float local_28;
  float fStack_24;
  uint uStack_20;
  float fStack_1c;
  int local_18;
  int local_14;
  
  bVar4 = 0;
  *(uint *)&this_ptr->field_0x1ff78 = 0;
  __arrinit(local_100,4,&g_CVectorTypeInfo);
  local_a0 = 0xbda3d70a;
  local_9c = 0x3ee147ae;
  local_98 = 0x3ff5c28f;
  core_actor_cpp_FUN_00408b40(this_ptr,&local_a0);
  local_40 = local_ac;
  *(uint *)((int)auStack_48 + ((uint)bVar4 * -2 + 3) * 4) =
       *(uint *)((int)local_cc + ((uint)bVar4 * -2 + 9) * 4);
  *(uint *)((int)auStack_48 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4) =
       *(uint *)((int)local_cc + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 10) * 4);
  if (&local_f4 != &local_40) {
    local_f4 = local_40;
    local_f0 = local_3c;
    local_ec = local_38;
  }
  local_54 = 0;
  local_58 = 0xbf266666;
  local_50 = 0x4007ae14;
  core_actor_cpp_FUN_00408b40(this_ptr,&local_58);
  local_d0 = local_4c;
  *(uint *)((int)local_cc + (uint)bVar4 * 0xfffffff8) =
       *(uint *)((int)auStack_48 + (uint)bVar4 * 0xfffffff8);
  *(uint *)((int)local_cc + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
       *(uint *)((int)auStack_48 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4);
  if (&local_e8 != &local_d0) {
    local_e8 = local_d0;
    local_e4 = local_cc[0];
    local_e0 = local_cc[1];
  }
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x40000000;
  core_actor_cpp_FUN_00408b40(this_ptr,&local_70);
  local_c4 = local_64;
  *(uint *)((int)local_cc + ((uint)bVar4 * -2 + 3) * 4) =
       *(uint *)((int)auStack_60 + (uint)bVar4 * 0xfffffff8);
  *(uint *)((int)local_cc + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4) =
       *(uint *)((int)auStack_60 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4);
  if (&local_dc != &local_c4) {
    local_dc = local_c4;
    local_d8 = local_c0;
    local_d4 = local_bc;
  }
  local_28 = 4.0;
  local_14 = 0;
  local_2c = &this_ptr->field_0x20;
  for (local_18 = 0; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
    iVar5 = *(int *)((int)g_CDemonSetPtr->actors + local_14);
    iVar3 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x94))(iVar5);
    if (iVar3 == 0) {
      uStack_20 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x84))(iVar5,this_ptr);
      if (uStack_20 < 2) {
        if ((uStack_20 == 1) && (*(int *)&this_ptr->field_0x25b0 == 0)) {
          core_actor_cpp_FUN_00408bb0(iVar5,local_2c);
          fStack_7c = fStack_b8;
          *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + 6) * 4) =
               *(uint *)((int)local_cc + ((uint)bVar4 * -2 + 6) * 4);
          *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 7) * 4) =
               *(uint *)((int)local_cc + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 7) * 4);
          fStack_1c = SQRT(fStack_74 * fStack_74 + fStack_7c * fStack_7c + fStack_78 * fStack_78);
          if (fStack_1c <= 0.0) {
            fStack_78 = 0.0;
            fStack_7c = 0.0;
            fStack_74 = 0.0;
          }
          else {
            fVar1 = 1.0 / fStack_1c;
            fStack_7c = fStack_7c * fVar1;
            fStack_78 = fStack_78 * fVar1;
            fStack_74 = fStack_74 * fVar1;
          }
          if (fStack_74 <= (float)_DAT_005e112c) goto LAB_004c970f;
        }
      }
      else if (((uStack_20 < 3) || (uStack_20 == 3)) && (*(int *)&this_ptr->field_0x25b0 == 0)) {
LAB_004c970f:
        uVar2 = uStack_20;
        fStack_94 = *(float *)(iVar5 + 0x20) - *(float *)((int)local_100 + uStack_20 * 0xc);
        afStack_90[0] = *(float *)(iVar5 + 0x24) - local_100[uStack_20 * 3 + 1];
        afStack_90[1] = *(float *)(iVar5 + 0x28) - local_100[uStack_20 * 3 + 2];
        afStack_90[2] = fStack_94;
        *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + 3) * 4) =
             *(uint *)((int)afStack_90 + (uint)bVar4 * 0xfffffff8);
        *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4) =
             *(uint *)((int)afStack_90 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4);
        if (ABS(afStack_90[3]) <= (float)_DAT_005e1134) {
          fStack_24 = afStack_90[2] * afStack_90[2] + fStack_80 * fStack_80;
          if (fStack_24 <= local_28) {
            *(int *)&this_ptr->field_0x1ff78 = iVar5;
            uStack_34 = uVar2;
            local_28 = fStack_24;
          }
        }
      }
    }
    local_14 = local_14 + 4;
  }
  if (*(int *)&this_ptr->field_0x1ff78 == 0) {
    return 0;
  }
  *(float *)&this_ptr->field_0x20 =
       (*(float *)(*(int *)&this_ptr->field_0x1ff78 + 0x20) -
       *(float *)((int)local_100 + uStack_34 * 0xc)) + *(float *)&this_ptr->field_0x20;
  *(float *)&this_ptr->field_0x28 =
       (*(float *)(*(int *)&this_ptr->field_0x1ff78 + 0x28) - local_100[uStack_34 * 3 + 2]) +
       *(float *)&this_ptr->field_0x28;
  if (uStack_34 < 2) {
    if (uStack_34 != 1) {
LAB_004c9956:
      _DAT_01d1d400 = "..\\core\\gabriela.cpp";
      _DAT_01d1d404 = 0x637;
      core_main_c_FUN_005030e0("Hell froze - invalid pickUpType: %d",uStack_34);
      return 1;
    }
    iVar5 = 0xe;
  }
  else if (uStack_34 < 3) {
    iVar5 = 0xf;
  }
  else {
    if (uStack_34 != 3) goto LAB_004c9956;
    iVar5 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&this_ptr->field_0x158,iVar5,1);
  return 1;
}

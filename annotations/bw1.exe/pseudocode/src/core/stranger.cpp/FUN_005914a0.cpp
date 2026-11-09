// Name: core_stranger.cpp_FUN_005914a0
// Address: 005914a0
// Address Range: [[005914a0, 005917af]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_005914a0(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_005914a0(CStranger *this_ptr,float delta_time)

{
  byte *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *puVar7;
  uint uVar8;
  int iVar9;
  
  *(uint *)&this_ptr->field_0x2000c = 0;
  if (*(int *)&this_ptr->field_0xc1e4 == 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0x26fc != 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0x1ff5c != 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0x1ffac == 0) {
    return;
  }
  iVar6 = *(int *)&this_ptr->field_0x20004;
  if (iVar6 == 0) {
    iVar6 = *(int *)&this_ptr->field_0x2628;
LAB_005914fe:
    if ((iVar6 != 0) && (uVar3 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x74))(iVar6), uVar3 != 0))
    {
      iVar6 = 0;
      while( true ) {
        iVar9 = *(int *)&this_ptr->field_0x20010 + 1;
        *(int *)&this_ptr->field_0x20010 = iVar9;
        if ((iVar9 < 0) || (1 < iVar9)) {
          *(uint *)&this_ptr->field_0x20010 = 0;
        }
        uVar8 = *(int *)&this_ptr->field_0x20010 + 0xc;
        uVar4 = 0;
        if (0xb < uVar8) {
          if (uVar8 < 0xd) {
            uVar4 = 1;
          }
          else if (uVar8 == 0xd) {
            uVar4 = 2;
          }
        }
        if ((uVar4 & uVar3) != 0) break;
        iVar6 = iVar6 + 1;
        if (0x13 < iVar6) {
          return;
        }
      }
      *(uint *)&this_ptr->field_0x2c9c = 0;
      *(uint *)&this_ptr->field_0x1ff5c = 7;
      *(int *)&this_ptr->field_0x2c98 = *(int *)&this_ptr->field_0x20010 + 0xc;
      return;
    }
  }
  else if (*(int *)(iVar6 + 0x2e0) == 7) goto LAB_005914fe;
  if (*(int *)&this_ptr->field_0x20004 == 0) {
    return;
  }
  iVar6 = *(int *)(*(int *)&this_ptr->field_0x20004 + 0x2e0);
  if (iVar6 == 3) {
    return;
  }
  if ((*(int *)&this_ptr->field_0x1fae4 == 0) && (iVar6 == 0)) {
    puVar7 = &this_ptr->field_0x1ffc0;
    puVar1 = &this_ptr->field_0x1ffe0;
    if (*(int *)&this_ptr->field_0x20008 != 0) {
      puVar1 = puVar7;
      puVar7 = &this_ptr->field_0x1ffe0;
    }
    if ((*(int *)(puVar1 + 0x1c) == 2) && (*(int *)(puVar7 + 0x1c) != 2)) {
      *(uint *)&this_ptr->field_0x20008 = (uint)(*(int *)&this_ptr->field_0x20008 == 0);
    }
  }
  if (*(int *)&this_ptr->field_0x20004 == 0) {
switchD_0059158d_caseD_3:
    uVar5 = 0;
  }
  else {
    switch(*(uint *)(*(int *)&this_ptr->field_0x20004 + 0x2e0)) {
    case 0:
    case 5:
      uVar5 = 2;
      break;
    case 1:
      uVar5 = 4;
      break;
    case 2:
      uVar5 = 5;
      break;
    default:
      goto switchD_0059158d_caseD_3;
    case 4:
      uVar5 = 7;
      break;
    case 7:
      uVar5 = 8;
      break;
    case 9:
    case 10:
      uVar5 = 0xe;
    }
  }
  fVar2 = (float)core_charactr_cpp_FUN_00434590(this_ptr,uVar5);
  if ((float)_DAT_005f70c1 <= fVar2) {
    puVar7 = &this_ptr->field_0x1ffc0;
    if ((*(int *)&this_ptr->field_0x20008 != 0) &&
       (*(int *)(*(int *)&this_ptr->field_0x20004 + 0x2e0) == 0)) {
      puVar7 = &this_ptr->field_0x1ffe0;
    }
    if (((1.0 <= *(float *)(puVar7 + 0x14)) && (*(float *)(puVar7 + 0x10) <= 0.0)) &&
       (iVar6 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x20004 + 0x154) + 0xe8))
                          (*(int *)&this_ptr->field_0x20004), iVar6 != 0)) {
      if (*(int *)(*(int *)&this_ptr->field_0x20004 + 0x2e0) == 0) {
        core_stranger_cpp_FUN_0058aeb0(this_ptr,*(int *)&this_ptr->field_0x20008);
        *(uint *)&this_ptr->field_0x20008 = (uint)(*(int *)&this_ptr->field_0x20008 == 0);
      }
      *(uint *)&this_ptr->field_0x2000c = 0;
      iVar6 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x20004 + 0x154) + 0xe4))
                        (*(int *)&this_ptr->field_0x20004);
      if (iVar6 != 0) {
        *(uint *)&this_ptr->field_0x2000c = 1;
      }
      core_stranger_cpp_FUN_0058aeb0(this_ptr,0);
      if (*(int *)(*(int *)&this_ptr->field_0x20004 + 0x2dc) == 2) {
        *(uint *)&this_ptr->field_0x2c9c = 0;
        *(uint *)&this_ptr->field_0x2c98 = 8;
        return;
      }
    }
  }
  return;
}

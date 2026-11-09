// Name: core_stranger.cpp_FUN_0056e850
// Address: 0056e850
// Address Range: [[0056e850, 0056eb55]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_0056e850(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_0056e850(CStranger *this_ptr,float delta_time)

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
  
  *(uint *)&this_ptr->field_0x256a0 = 0;
  if (*(int *)&this_ptr->field_0x10a74 == 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0x276c != 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0x256a4 != 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0x25640 == 0) {
    return;
  }
  iVar6 = *(int *)&this_ptr->field_0x25698;
  if (iVar6 == 0) {
    iVar6 = *(int *)&this_ptr->field_0x2698;
LAB_0056e8ae:
    if ((iVar6 != 0) && (uVar3 = (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x7c))(iVar6), uVar3 != 0))
    {
      iVar6 = 0;
      while( true ) {
        iVar9 = *(int *)&this_ptr->field_0x256a8 + 1;
        *(int *)&this_ptr->field_0x256a8 = iVar9;
        if ((iVar9 < 0) || (1 < iVar9)) {
          *(uint *)&this_ptr->field_0x256a8 = 0;
        }
        uVar8 = *(int *)&this_ptr->field_0x256a8 + 0xc;
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
      *(uint *)&this_ptr->field_0x2d08 = 0;
      *(uint *)&this_ptr->field_0x256a4 = 7;
      *(int *)&this_ptr->field_0x2d04 = *(int *)&this_ptr->field_0x256a8 + 0xc;
      return;
    }
  }
  else if (*(int *)(iVar6 + 0x43c) == 7) goto LAB_0056e8ae;
  if (*(int *)&this_ptr->field_0x25698 == 0) {
    return;
  }
  iVar6 = *(int *)(*(int *)&this_ptr->field_0x25698 + 0x43c);
  if (iVar6 == 3) {
    return;
  }
  if ((*(int *)&this_ptr->field_0x24378 == 0) && (iVar6 == 0)) {
    puVar7 = &this_ptr->field_0x25654;
    puVar1 = &this_ptr->field_0x25674;
    if (*(int *)&this_ptr->field_0x2569c != 0) {
      puVar1 = puVar7;
      puVar7 = &this_ptr->field_0x25674;
    }
    if ((*(int *)(puVar1 + 0x1c) == 2) && (*(int *)(puVar7 + 0x1c) != 2)) {
      *(uint *)&this_ptr->field_0x2569c = (uint)(*(int *)&this_ptr->field_0x2569c == 0);
    }
  }
  if (*(int *)&this_ptr->field_0x25698 == 0) {
switchD_0056e93d_caseD_3:
    uVar5 = 0;
  }
  else {
    switch(*(uint *)(*(int *)&this_ptr->field_0x25698 + 0x43c)) {
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
      goto switchD_0056e93d_caseD_3;
    case 4:
      uVar5 = 7;
      break;
    case 7:
      uVar5 = 8;
    }
  }
  fVar2 = (float)core_charactr_cpp_FUN_0042a5a0(this_ptr,uVar5);
  if ((float)_DAT_005ebe4d <= fVar2) {
    puVar7 = &this_ptr->field_0x25654;
    if ((*(int *)&this_ptr->field_0x2569c != 0) &&
       (*(int *)(*(int *)&this_ptr->field_0x25698 + 0x43c) == 0)) {
      puVar7 = &this_ptr->field_0x25674;
    }
    if (((1.0 <= *(float *)(puVar7 + 0x14)) && (*(float *)(puVar7 + 0x10) <= 0.0)) &&
       (iVar6 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x25698 + 0x2b0) + 0xf0))
                          (*(int *)&this_ptr->field_0x25698), iVar6 != 0)) {
      if (*(int *)(*(int *)&this_ptr->field_0x25698 + 0x43c) == 0) {
        core_stranger_cpp_FUN_005683d0(this_ptr,*(int *)&this_ptr->field_0x2569c);
        *(uint *)&this_ptr->field_0x2569c = (uint)(*(int *)&this_ptr->field_0x2569c == 0);
      }
      *(uint *)&this_ptr->field_0x256a0 = 0;
      iVar6 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x25698 + 0x2b0) + 0xec))
                        (*(int *)&this_ptr->field_0x25698);
      if (iVar6 != 0) {
        *(uint *)&this_ptr->field_0x256a0 = 1;
      }
      core_stranger_cpp_FUN_005683d0(this_ptr,0);
      if (*(int *)(*(int *)&this_ptr->field_0x25698 + 0x438) == 2) {
        *(uint *)&this_ptr->field_0x2d08 = 0;
        *(uint *)&this_ptr->field_0x2d04 = 8;
        return;
      }
    }
  }
  return;
}

// Name: core_cloth.cpp_FUN_0043c8a0
// Address: 0043c8a0
// Address Range: [[0043c8a0, 0043caf9]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_0043c8a0(CCloth *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_FUN_0043c8a0(CCloth *this_ptr)

{
  CCloth *pCVar1;
  int iVar2;
  int iVar3;
  CCloth *pCVar4;
  byte bVar5;
  float afStackY_1040 [1017];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  CCloth *local_3c;
  CCloth *local_38;
  int local_34;
  int local_30;
  CCloth *local_2c;
  CCloth *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar5 = 0;
  local_24 = 0;
  if (0 < *(int *)(this_ptr + 0x104)) {
    local_3c = this_ptr + 0x398;
    local_2c = this_ptr + 0x398;
    local_38 = this_ptr;
    do {
      pCVar1 = local_3c;
      *(uint *)(local_38 + 0x3c8) = 0;
      *(uint *)(local_38 + 0x40c) = 0;
      local_34 = 0;
      if (0 < *(int *)(this_ptr + 0x110)) {
        local_30 = 0;
        local_28 = local_2c + local_24 * 0x11c;
        do {
          local_18 = local_30 + *(int *)(this_ptr + 0x114);
          iVar2 = 0;
          iVar3 = local_18;
          if (0 < *(int *)(local_18 + 4)) {
            do {
              if (local_24 == *(int *)(iVar3 + 0x18)) break;
              iVar2 = iVar2 + 1;
              iVar3 = iVar3 + 0xc;
            } while (iVar2 < *(int *)(local_18 + 4));
          }
          if ((iVar2 != *(int *)(local_18 + 4)) && (local_1c = 0, 0 < *(int *)(local_18 + 4))) {
            local_20 = local_18;
            do {
              iVar3 = *(int *)(((local_1c + 1) % *(int *)(local_18 + 4)) * 0xc + local_18 + 0x18);
              iVar2 = iVar3;
              if ((*(int *)(local_20 + 0x18) == local_24) ||
                 (iVar2 = *(int *)(local_20 + 0x18), iVar3 == local_24)) {
                iVar3 = 0;
                pCVar4 = pCVar1;
                if (0 < *(int *)(pCVar1 + 0x30)) {
                  do {
                    if (iVar2 == *(int *)(pCVar4 + 0x34)) break;
                    iVar3 = iVar3 + 1;
                    pCVar4 = pCVar4 + 4;
                  } while (iVar3 < *(int *)(pCVar1 + 0x30));
                }
                if ((iVar3 == *(int *)(pCVar1 + 0x30)) &&
                   (*(float *)(pCVar1 + 0xc4) <= *(float *)(this_ptr + iVar2 * 0x11c + 0x45c))) {
                  *(int *)(pCVar1 + *(int *)(pCVar1 + 0x30) * 4 + 0x34) = iVar2;
                  pCVar4 = local_2c + iVar2 * 0x11c;
                  local_4c = *(float *)local_28 - *(float *)pCVar4;
                  local_48 = *(float *)(local_28 + 4) - *(float *)(pCVar4 + 4);
                  local_44 = *(float *)(local_28 + 8) - *(float *)(pCVar4 + 8);
                  local_58 = *(float *)local_28 - *(float *)pCVar4;
                  *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8) =
                       *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8);
                  *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                       *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
                  local_40 = SQRT(local_50 * local_50 + local_58 * local_58 + local_54 * local_54);
                  *(float *)(pCVar1 + *(int *)(pCVar1 + 0x30) * 4 + 0x78) = local_40;
                  iVar3 = *(int *)(pCVar1 + 0x30);
                  *(int *)(pCVar1 + 0x30) = iVar3 + 1;
                  if (0xf < iVar3 + 1) {
                    _DAT_01d71de0 = "..\\core\\cloth.cpp";
                    _DAT_01d71de4 = 0x1c3;
                    core_main_c_FUN_004e4330("Too many connecting verticies");
                  }
                }
              }
              local_1c = local_1c + 1;
              local_20 = local_20 + 0xc;
            } while (local_1c < *(int *)(local_18 + 4));
          }
          local_34 = local_34 + 1;
          local_30 = local_30 + 0x48;
        } while (local_34 < *(int *)(this_ptr + 0x110));
      }
      local_24 = local_24 + 1;
      local_3c = local_3c + 0x11c;
      local_38 = local_38 + 0x11c;
    } while (local_24 < *(int *)(this_ptr + 0x104));
  }
  return;
}

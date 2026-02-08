// Name: core_setedit.cpp_FUN_0057b910
// Address: 0057b910
// Address Range: [[0057b910, 0057bbac]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_FUN_0057b910(void)

#include "nocturne.h"

void __cdecl core_setedit_cpp_FUN_0057b910(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_10;
  uint *local_c;
  uint *local_8;
  
  if (-1 < in_stack_00000008) {
    if (in_stack_00000008 < *(int *)(in_stack_00000004 + 0x19a2c)) {
      local_10 = in_stack_00000008;
      if (in_stack_00000008 < *(int *)(in_stack_00000004 + 0x19a2c)) {
        iVar2 = in_stack_00000008 * 0x1898;
        iVar1 = in_stack_00000004 + 0x19a30;
        puVar4 = (uint *)(iVar2 + 0x199c + iVar1);
        puVar3 = (uint *)(iVar2 + 0x104 + iVar1);
        local_c = (uint *)(iVar1 + iVar2);
        local_8 = (uint *)(iVar2 + 0x1898 + iVar1);
        do {
          *local_c = *local_8;
          iVar1 = 0x40;
          puVar5 = local_8;
          puVar6 = local_c;
          while( true ) {
            puVar6 = puVar6 + 1;
            puVar5 = puVar5 + 1;
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            *puVar6 = *puVar5;
          }
          if (puVar3 != puVar4) {
            *puVar3 = *puVar4;
            puVar3[1] = puVar4[1];
            puVar3[2] = puVar4[2];
          }
          if (local_c + 0x44 != local_8 + 0x44) {
            local_c[0x44] = local_8[0x44];
            local_c[0x45] = local_8[0x45];
            local_c[0x46] = local_8[0x46];
          }
          local_c[0x47] = local_8[0x47];
          local_c[0x48] = local_8[0x48];
          local_c[0x49] = local_8[0x49];
          puVar5 = local_8 + 0x4a;
          puVar6 = local_c + 0x4a;
          for (iVar1 = 0x3e; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          *(ushort *)puVar6 = *(ushort *)puVar5;
          local_c[0x89] = local_8[0x89];
          local_c[0x8a] = local_8[0x8a];
          local_c[0x8b] = local_8[0x8b];
          local_c[0x8c] = local_8[0x8c];
          local_c[0x471] = local_8[0x471];
          local_c[0x472] = local_8[0x472];
          local_c[0x473] = local_8[0x473];
          local_c[0x474] = local_8[0x474];
          local_c[0x475] = local_8[0x475];
          local_c[0x476] = local_8[0x476];
          local_c[0x477] = local_8[0x477];
          local_c[0x478] = local_8[0x478];
          local_c[0x479] = local_8[0x479];
          local_c[0x47a] = local_8[0x47a];
          local_c[0x47b] = local_8[0x47b];
          local_c[0x47c] = local_8[0x47c];
          puVar5 = local_8 + 0x47d;
          puVar6 = local_c + 0x47d;
          for (iVar1 = 0x140; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar5 = local_8 + 0x5bd;
          puVar6 = local_c + 0x5bd;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar5 = local_8 + 0x5dd;
          puVar6 = local_c + 0x5dd;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          local_c[0x5fd] = local_8[0x5fd];
          local_c[0x5fe] = local_8[0x5fe];
          local_c[0x5ff] = local_8[0x5ff];
          local_c[0x600] = local_8[0x600];
          local_c[0x601] = local_8[0x601];
          local_c[0x602] = local_8[0x602];
          local_c[0x603] = local_8[0x603];
          puVar4 = puVar4 + 0x626;
          puVar5 = local_8 + 0x604;
          puVar6 = local_c + 0x604;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar3 = puVar3 + 0x626;
          local_c[0x624] = local_8[0x624];
          local_c[0x625] = local_8[0x625];
          local_10 = local_10 + 1;
          local_c = local_c + 0x626;
          local_8 = local_8 + 0x626;
        } while (local_10 < *(int *)(in_stack_00000004 + 0x19a2c));
      }
      *(int *)(in_stack_00000004 + 0x19a2c) = *(int *)(in_stack_00000004 + 0x19a2c) + -1;
    }
  }
  return;
}

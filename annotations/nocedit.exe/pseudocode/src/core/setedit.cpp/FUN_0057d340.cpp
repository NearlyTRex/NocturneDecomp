// Name: core_setedit.cpp_FUN_0057d340
// Address: 0057d340
// Address Range: [[0057d340, 0057d654]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_FUN_0057d340(void)

#include "nocturne.h"

/* Signature: byte core_setedit.cpp_FUN_0057d340(byte param_1, uint param_2) */

void __cdecl core_setedit_cpp_FUN_0057d340(void)

{
  uint *puVar1;
  uint *puVar2;
  int in_stack_00000008;
  char local_120 [100];
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint *local_14;
  
  local_14 = (uint *)(in_stack_00000008 + 0x100);
  puVar1 = (uint *)(in_stack_00000008 + 0x108);
  puVar2 = (uint *)(in_stack_00000008 + 0x104);
  if (*(int *)(in_stack_00000008 + 0x140) != 0) {
    sprintf(local_120,"%sn");
    local_a4 = 0;
    local_9c = 0;
    local_a0 = 0;
    local_98 = *local_14;
    local_94 = *puVar2;
    local_90 = *puVar1;
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    sprintf(local_120,"%ss");
    local_8c = 0;
    local_84 = 0;
    local_88 = 0x40490fdb;
    local_74 = *local_14;
    local_70 = *puVar2;
    local_6c = *puVar1;
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    sprintf(local_120,"%se");
    local_38 = 0;
    local_30 = 0;
    local_34 = 0x3fc90fdb;
    local_68 = *local_14;
    local_64 = *puVar2;
    local_60 = *puVar1;
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    sprintf(local_120,"%sw");
    local_80 = 0;
    local_78 = 0;
    local_7c = 0xbfc90fdb;
    local_b0 = *local_14;
    local_ac = *puVar2;
    local_a8 = *puVar1;
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    sprintf(local_120,"%su");
    local_48 = 0;
    local_4c = 0;
    local_50 = 0xbfc90fdb;
    local_5c = *local_14;
    local_58 = *puVar2;
    local_54 = *puVar1;
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    sprintf(local_120,"%sd");
    local_18 = 0;
    local_1c = 0;
    local_20 = 0x3fc90fdb;
    local_44 = *local_14;
    local_40 = *puVar2;
    local_3c = *puVar1;
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    return;
  }
  local_bc = *(uint *)(in_stack_00000008 + 0x10c);
  local_b8 = *(uint *)(in_stack_00000008 + 0x110);
  local_b4 = *(uint *)(in_stack_00000008 + 0x114);
  local_2c = *local_14;
  local_28 = *puVar2;
  local_24 = *puVar1;
  core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
  return;
}

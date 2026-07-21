// Name: core_mimic.cpp_CMimic_setupCloth_FUN_004d5770
// Address: 004d5770
// Address Range: [[004d5770, 004d5858]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_004d5770(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_004d5770(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  *(uint *)(param_1 + 0x4691c) = 2;
  core_cloth_cpp_CCloth_setup_FUN_004359e0
            (param_1 + 0xbdec,param_1 + 0x20,param_1 + 0x30,param_1 + 0x150);
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (*(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8),_DAT_01c71420);
  if (iVar1 != 0) {
    puVar4 = (uint *)(iVar1 + 0x1fe14);
    puVar5 = (uint *)(param_1 + 0xc184);
    for (uVar3 = *(int *)(param_1 + 0xbef0) * 0x47 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(byte *)puVar5 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
  }
  iVar1 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  uVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                    (iVar1 + 0x150,*(uint *)(iVar1 + 0x158));
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960(param_1 + 0x150,uVar2);
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (PTR_DAT_005ad350,"@@%s attacking hero\n" + 2,param_1);
  return;
}

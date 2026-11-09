// Name: core_robin.cpp_FUN_005a67a0
// Address: 005a67a0
// Address Range: [[005a67a0, 005a6961]]
// Convention: unknown
// Signature: void core_robin_cpp_FUN_005a67a0(int param_1,int param_2)

#include "nocturne.h"

void core_robin_cpp_FUN_005a67a0(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int aiStackY_1044 [943];
  int *piVar5;
  byte auStack_ec [48];
  uint auStack_bc [12];
  byte auStack_8c [48];
  int iStack_5c;
  int aiStack_58 [14];
  int aiStack_20 [3];
  int iStack_14;
  int iStack_10;
  
  bVar4 = 0;
  iStack_10 = param_1 + param_2 * 0x78;
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)(iStack_10 + 0x2620),g_CBoxActorClassInfo.name_hash);
  if (iVar1 != 0) {
    iStack_5c = _strcmp((char *)(iVar1 + 0x32c),"WOOD_BOWL.KFM");
    iStack_14 = param_1 + 0x1134;
    if (iStack_5c == 0) {
      aiStack_58[1] = 0xbfe00000;
      aiStack_58[2] = 0x3e4ccccd;
      aiStack_58[0] = -0x3ff9999a;
      piVar5 = aiStack_58 + 0xe;
      aiStack_20[0] = iStack_5c;
      aiStack_58[(uint)bVar4 * -2 + 0xf] = aiStack_58[(uint)bVar4 * -2];
      aiStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
           aiStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      aiStack_58[3] = 0xbda3d70a;
      aiStack_58[4] = 0;
      core_xform_cpp_FUN_00591c10(auStack_ec,aiStack_58 + 2,piVar5);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                (auStack_ec,*(int *)(iStack_10 + 0x2618) * 0x30 + iStack_14);
      puVar2 = (uint *)&stack0xfffffee4;
      goto LAB_005a6841;
    }
    iVar1 = _strcmp((char *)(iVar1 + 0x32c),"DOLL.KFM");
    if (iVar1 == 0) {
      aiStack_58[8] = 0x40400000;
      piVar5 = aiStack_58 + 0xb;
      aiStack_58[10] = 0x3fe66666;
      aiStack_58[9] = 0;
      aiStack_58[7] = 0x3dcccccd;
      aiStack_58[0xb] = 0x40400000;
      aiStack_58[(uint)bVar4 * -2 + 0xc] = aiStack_58[(uint)bVar4 * -2 + 9];
      aiStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           aiStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      aiStack_58[6] = 0;
      aiStack_58[5] = 0x3e4ccccd;
      core_xform_cpp_FUN_00591c10(auStack_8c,aiStack_58 + 5,piVar5);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                (auStack_8c,*(int *)(iStack_10 + 0x2618) * 0x30 + iStack_14);
      puVar2 = auStack_bc;
      goto LAB_005a6841;
    }
  }
  core_charactr_cpp_FUN_00429120(param_1,param_2);
  puVar2 = (uint *)&stack0xfffffeb4;
LAB_005a6841:
  puVar3 = (uint *)&stack0xfffffe84;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = (uint *)&stack0xfffffe84;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}

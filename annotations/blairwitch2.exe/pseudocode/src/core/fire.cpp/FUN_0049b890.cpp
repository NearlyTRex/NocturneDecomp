// Name: core_fire.cpp_FUN_0049b890
// Address: 0049b890
// Address Range: [[0049b890, 0049b9b3]]
// Convention: unknown
// Signature: undefined4 core_fire_cpp_FUN_0049b890(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fire_cpp_FUN_0049b890(CVector3f *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fStack_18;
  
  fStack_18 = (float)(4 - *(int *)&param_1[7].field_0x4) * (float)_DAT_005d5762;
  if (fStack_18 < 0.0) {
    fStack_18 = 0.0;
  }
  fVar1 = (float)core_actor_cpp_FUN_0040cf60(0xc0c90fdb,0x40c90fdb);
  *(float *)&param_1[6].field_0x4 = fVar1 * fStack_18;
  fVar1 = (float)core_actor_cpp_FUN_0040cf60(0xc0490fdb,0x40490fdb);
  iVar4 = *(int *)&param_1[7].field_0x4;
  *(float *)&param_1[6].field_0x8 = fVar1 * fStack_18;
  if (iVar4 == 0) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(iVar4 + 0x1c3f8d0));
      if (iVar2 == 0) break;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar4 < 0xc);
    if (iVar5 != 3) {
      iVar4 = _stricmp
                        (*(char **)&param_1[7].field_0x8,"shell.kfm");
      if (iVar4 == 0) {
        uVar3 = core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                          (0x0264B290,0x01C3DEB4,"sh-sh?c @ .15",param_1);
        *(uint *)(iVar5 * 4 + 0x1c3f8d0) = uVar3;
        *(int *)&param_1[7].field_0x4 = *(int *)&param_1[7].field_0x4 + 1;
        return 0;
      }
      uVar3 = core_sound_cpp_CSound_playActorSound_FUN_0055ae50
                        (0x0264B290,0x01C3DEB4,"44-sh?c @ .2",param_1);
      *(uint *)(iVar5 * 4 + 0x1c3f8d0) = uVar3;
      *(int *)&param_1[7].field_0x4 = *(int *)&param_1[7].field_0x4 + 1;
      return 0;
    }
  }
  *(int *)&param_1[7].field_0x4 = *(int *)&param_1[7].field_0x4 + 1;
  return 0;
}

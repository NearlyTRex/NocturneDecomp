// Name: core_fire.cpp_CShell_onCollision_FUN_00489850
// Address: 00489850
// Address Range: [[00489850, 00489973]]
// Convention: unknown
// Signature: undefined4 core_fire_cpp_CShell_onCollision_FUN_00489850(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fire_cpp_CShell_onCollision_FUN_00489850(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float local_18;
  
  local_18 = (float)(4 - *(int *)(param_1 + 0x50)) * (float)_DAT_0058145c;
  if (local_18 < 0.0) {
    local_18 = 0.0;
  }
  fVar1 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0c90fdb,0x40c90fdb);
  *(float *)(param_1 + 0x44) = fVar1 * local_18;
  fVar1 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0490fdb,0x40490fdb);
  *(float *)(param_1 + 0x48) = fVar1 * local_18;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(iVar4 + 0x1c0a130));
      if (iVar2 == 0) break;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar4 < 0xc);
    if (iVar5 != 3) {
      iVar4 = _stricmp
                        (*(uint *)(param_1 + 0x54),"shell.kfm");
      if (iVar4 == 0) {
        uVar3 = core_sound_cpp_CSound_playActorSound_FUN_0052ea60
                          (0x02DC9450,0x01C08D04,"sh-sh?c @ .15",param_1);
        *(uint *)(iVar5 * 4 + 0x1c0a130) = uVar3;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        return 0;
      }
      uVar3 = core_sound_cpp_CSound_playActorSound_FUN_0052ea60
                        (0x02DC9450,0x01C08D04,"44-sh?c @ .2",param_1);
      *(uint *)(iVar5 * 4 + 0x1c0a130) = uVar3;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      return 0;
    }
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return 0;
}

// Name: core_fire.cpp_CShell_onCollision_FUN_004a0b90
// Address: 004a0b90
// Address Range: [[004a0b90, 004a0cb3]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CShell_onCollision_FUN_004a0b90(CShell *this_ptr,CVector3f *collision_normal)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_fire_cpp_CShell_onCollision_FUN_004a0b90(CShell *this_ptr,CVector3f *collision_normal)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fStack_18;
  
  fStack_18 = (float)(4 - this_ptr->bounce_count) * (float)_DAT_005c0970;
  if (fStack_18 < 0.0) {
    fStack_18 = 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-6.2831855,6.2831855);
  (this_ptr->angular_velocity).x = fVar1 * fStack_18;
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-3.1415927,3.1415927);
  iVar4 = this_ptr->bounce_count;
  (this_ptr->angular_velocity).y = fVar1 * fStack_18;
  if (iVar4 == 0) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(*(uint *)(iVar4 + 0x1c74e90));
      if (iVar2 == 0) break;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar4 < 0xc);
    if (iVar5 != 3) {
      iVar4 = _stricmp
                        (this_ptr->model_ptr->model_filename,"shell.kfm");
      if (iVar4 == 0) {
        uVar3 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                          (0x02CF5680,0x01C73654,"sh-sh?c @ .15",(CVector3f *)this_ptr);
        *(uint *)(iVar5 * 4 + 0x1c74e90) = uVar3;
        this_ptr->bounce_count = this_ptr->bounce_count + 1;
        return 0;
      }
      uVar3 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                        (0x02CF5680,0x01C73654,"44-sh?c @ .2",(CVector3f *)this_ptr);
      *(uint *)(iVar5 * 4 + 0x1c74e90) = uVar3;
      this_ptr->bounce_count = this_ptr->bounce_count + 1;
      return 0;
    }
  }
  this_ptr->bounce_count = this_ptr->bounce_count + 1;
  return 0;
}

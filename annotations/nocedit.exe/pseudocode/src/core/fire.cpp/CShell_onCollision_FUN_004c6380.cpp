// Name: core_fire.cpp_CShell_onCollision_FUN_004c6380
// Address: 004c6380
// Address Range: [[004c6380, 004c63c1]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CShell_onCollision_FUN_004c6380(CShell *this_ptr,CVector3f *collision_normal)

#include "nocturne.h"

int __cdecl core_fire_cpp_CShell_onCollision_FUN_004c6380(CShell *this_ptr,CVector3f *collision_normal)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float local_18;
  
  local_18 = (float)(4 - this_ptr->bounce_count) * (float)0.25;
  if (local_18 < 0.0) {
    local_18 = 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-6.2831855,6.2831855);
  (this_ptr->angular_velocity).x = fVar1 * local_18;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
  iVar4 = this_ptr->bounce_count;
  (this_ptr->angular_velocity).y = fVar1 * local_18;
  if (iVar4 == 0) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                        (*(uint *)((int)g_ShellBounceSoundHandles + iVar4));
      if (iVar2 == 0) break;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar4 < 0xc);
    if (iVar5 != 3) {
      iVar4 = _stricmp
                        (this_ptr->model_ptr->model_filename,"shell.kfm");
      if (iVar4 == 0) {
        uVar3 = core_sound_cpp_CSound_playActorSound_FUN_005b3a40
                          (g_CSoundPtr,(CDemonActor *)g_CFireEffectPtr,"sh-sh?c @ .15",
                           (CVector3f *)this_ptr);
        g_ShellBounceSoundHandles[iVar5] = uVar3;
        this_ptr->bounce_count = this_ptr->bounce_count + 1;
        return 0;
      }
      uVar3 = core_sound_cpp_CSound_playActorSound_FUN_005b3a40
                        (g_CSoundPtr,(CDemonActor *)g_CFireEffectPtr,"44-sh?c @ .2",
                         (CVector3f *)this_ptr);
      g_ShellBounceSoundHandles[iVar5] = uVar3;
      this_ptr->bounce_count = this_ptr->bounce_count + 1;
      return 0;
    }
  }
  this_ptr->bounce_count = this_ptr->bounce_count + 1;
  return 0;
}

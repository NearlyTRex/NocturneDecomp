// Name: core_fire.cpp_CShell_onCollision_FUN_004c6380
// Address: 004c6380
// Address Range: [[004c6380, 004c63c1]]
// Convention: __cdecl
// Signature: int __cdecl core_fire_cpp_CShell_onCollision_FUN_004c6380(CShell *this_ptr,CVector3f *collision_normal)

#include "nocturne.h"

int __cdecl
core_fire_cpp_CShell_onCollision_FUN_004c6380(CShell *this_ptr,CVector3f *collision_normal)

{
  float fVar1;
  int iVar2;
  uint extraout_EAX;
  uint extraout_EAX_00;
  int iVar3;
  int iVar4;
  float local_18;
  
  local_18 = (float)(4 - *(int *)(this_ptr->unk + 0x18)) * (float)0.25;
  if (local_18 < 0.0) {
    local_18 = 0.0;
  }
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-6.2831855,6.2831855);
  *(float *)(this_ptr->unk + 0xc) = fVar1 * local_18;
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
  *(float *)(this_ptr->unk + 0x10) = fVar1 * local_18;
  if (*(int *)(this_ptr->unk + 0x18) == 0) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(&DAT_02d141dc + iVar3));
      if (iVar2 == 0) break;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar3 < 0xc);
    if (iVar4 != 3) {
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                        (*(char **)(this_ptr->unk + 0x1c),"shell.kfm");
      if (iVar3 == 0) {
        core_sound_cpp_CSound_playActorSound_FUN_005b3a40
                  (g_CSoundPtr,(CDemonActor *)g_CFireEffectPtr,"sh-sh?c @ .15",
                   (CVector3f *)this_ptr);
        *(uint *)(&DAT_02d141dc + iVar4 * 4) = extraout_EAX;
        *(int *)(this_ptr->unk + 0x18) = *(int *)(this_ptr->unk + 0x18) + 1;
        return 0;
      }
      core_sound_cpp_CSound_playActorSound_FUN_005b3a40
                (g_CSoundPtr,(CDemonActor *)g_CFireEffectPtr,"44-sh?c @ .2",
                 (CVector3f *)this_ptr);
      *(uint *)(&DAT_02d141dc + iVar4 * 4) = extraout_EAX_00;
      *(int *)(this_ptr->unk + 0x18) = *(int *)(this_ptr->unk + 0x18) + 1;
      return 0;
    }
  }
  *(int *)(this_ptr->unk + 0x18) = *(int *)(this_ptr->unk + 0x18) + 1;
  return 0;
}

// Name: core_mobster.cpp_CMobster_FUN_005279f0
// Address: 005279f0
// Address Range: [[005279f0, 00527b66]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_FUN_005279f0(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_FUN_005279f0(CMobster *this_ptr)

{
  uint sfx_handle;
  CGame *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_stack_00000008;
  char local_80 [100];
  int local_1c;
  int local_18;
  float local_14;
  
  if (*(float *)(this_ptr->unk1 + 0x20) <= 0.0) {
    iVar6 = 0;
    local_1c = in_stack_00000008 + 0x60;
    iVar5 = in_stack_00000008 * 4;
    do {
      pCVar1 = g_CGamePtr;
      iVar3 = *(int *)(&DAT_02f37eb4 + iVar5);
      *(int *)(&DAT_02f37eb4 + iVar5) = iVar3 + 1;
      if (((pCVar1->foul_language_flag != 0) || (in_stack_00000008 != 1)) || (iVar3 + 1 != 6)) {
        sprintf
                  (local_80,"mobster-cheese-%c-%c-%d.wav",(uint)(byte)this_ptr->unk1[0x1c],
                   local_1c,*(uint *)(&DAT_02f37eb4 + iVar5));
        local_14 = core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(g_CSoundPtr,local_80);
        *(float *)(this_ptr->unk1 + 0x20) = local_14;
        if (0.0 < *(float *)(this_ptr->unk1 + 0x20)) break;
        *(uint *)(&DAT_02f37eb4 + iVar5) = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    if (0.0 < *(float *)(this_ptr->unk1 + 0x20)) {
      sfx_handle = *(uint *)(this_ptr->unk2 + 0xc);
      *(float *)(this_ptr->unk1 + 0x20) = *(float *)(this_ptr->unk1 + 0x20) + 5.0f;
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(sfx_handle);
      if (iVar5 == 0) {
        iVar6 = 0;
        iVar5 = 0;
        local_18 = 0;
        while( true ) {
          if (*(int *)(g_CDemonSetPtr->unk4 + 0x1f3c) <= iVar6) {
            uVar4 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                              ((CDemonActor *)this_ptr,local_80);
            *(uint *)(this_ptr->unk2 + 4) = uVar4;
            return;
          }
          pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)(g_CDemonSetPtr->unk4 + local_18 + 8000),
                              g_CMobsterClassInfo.name_hash);
          if (((pCVar2 != (CDemonActor *)0x0) &&
              (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                 (*(uint *)(pCVar2[0x8e].create_event + 0xc)), iVar3 != 0)) &&
             (iVar5 = iVar5 + 1, 3 < iVar5)) break;
          local_18 = local_18 + 4;
          iVar6 = iVar6 + 1;
        }
      }
    }
  }
  return;
}

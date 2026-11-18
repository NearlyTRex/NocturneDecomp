// Name: core_inv.cpp_updateSps_FUN_004da020
// Address: 004da020
// Address Range: [[004da020, 004da310]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_updateSps_FUN_004da020(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_inv_cpp_updateSps_FUN_004da020(void)

{
  double dVar1;
  CHero *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CCharacter *this_ptr;
  EDeathState EVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  g_FLOAT_01d5be80 = g_FLOAT_01d5be80 - g_CGamePtr->delta_time_float;
  if (g_FLOAT_01d5be80 <= 0.0) {
    g_FLOAT_01d5be80 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.4);
    iVar11 = 0;
    iVar10 = 0;
    g_INT_01d70a20 = -1;
    while (iVar11 < g_CDemonSetPtr->character_count) {
      this_ptr = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(CDemonActor **)((int)g_CDemonSetPtr->characters + iVar10),
                            g_CEnemyClassInfo.name_hash);
      if (this_ptr == (CCharacter *)0x0) {
LAB_004da0b1:
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 4;
      }
      else {
        EVar6 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
        if (EVar6 != DEATH_STATE_ALIVE) goto LAB_004da0b1;
        iVar7 = core_actor_cpp_isOfClass_FUN_0040c790((CDemonActor *)this_ptr,"CTVBat");
        if (iVar7 != 0) goto LAB_004da0b1;
        iVar7 = core_actor_cpp_isOfClass_FUN_0040c790((CDemonActor *)this_ptr,"CWhitewolf")
        ;
        if (iVar7 != 0) goto LAB_004da0b1;
        pCVar2 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
        fVar3 = (pCVar2->base).base.location.position.x - (this_ptr->base).location.position.x;
        fVar5 = (pCVar2->base).base.location.position.y - (this_ptr->base).location.position.y;
        fVar4 = (pCVar2->base).base.location.position.z - (this_ptr->base).location.position.z;
        fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
        dVar1 = (double)fVar3;
        if ((float)1600 < fVar3) goto LAB_004da0b1;
        if (dVar1 <= 900) {
          if (dVar1 <= 400) {
            if (dVar1 <= 100) {
              g_INT_01d70a20 = 0;
              iVar7 = 0;
              while( true ) {
                iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                  (g_CSound_PTR_006045f8,*(uint *)(iVar7 + 0x1d70a24));
                if (iVar8 == 0) break;
                iVar7 = iVar7 + 4;
                if (0xf < iVar7) {
                  return;
                }
              }
              uVar9 = core_sound_cpp_CSound_playSound_FUN_005609b0
                                (g_CSound_PTR_006045f8,(void *)0x0,"voodoo1.wav");
              this_ptr->spectral_sound_handle = uVar9;
              *(uint *)(iVar7 + 0x1d70a24) = uVar9;
              iVar11 = iVar11 + 1;
              iVar10 = iVar10 + 4;
            }
            else {
              g_INT_01d70a20 = 1;
              iVar7 = 0;
              while( true ) {
                iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                  (g_CSound_PTR_006045f8,*(uint *)(iVar7 + 0x1d70a24));
                if (iVar8 == 0) break;
                iVar7 = iVar7 + 4;
                if (0xf < iVar7) {
                  return;
                }
              }
              uVar9 = core_sound_cpp_CSound_playSound_FUN_005609b0
                                (g_CSound_PTR_006045f8,(void *)0x0,"voodoo2.wav");
              this_ptr->spectral_sound_handle = uVar9;
              *(uint *)(iVar7 + 0x1d70a24) = uVar9;
              iVar11 = iVar11 + 1;
              iVar10 = iVar10 + 4;
            }
          }
          else {
            g_INT_01d70a20 = 2;
            iVar7 = 0;
            while( true ) {
              iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                (g_CSound_PTR_006045f8,*(uint *)(iVar7 + 0x1d70a24));
              if (iVar8 == 0) break;
              iVar7 = iVar7 + 4;
              if (0xf < iVar7) {
                return;
              }
            }
            uVar9 = core_sound_cpp_CSound_playSound_FUN_005609b0
                              (g_CSound_PTR_006045f8,(void *)0x0,"voodoo3.wav");
            this_ptr->spectral_sound_handle = uVar9;
            *(uint *)(iVar7 + 0x1d70a24) = uVar9;
            iVar11 = iVar11 + 1;
            iVar10 = iVar10 + 4;
          }
        }
        else {
          g_INT_01d70a20 = 3;
          iVar7 = 0;
          while( true ) {
            iVar8 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                              (g_CSound_PTR_006045f8,*(uint *)(iVar7 + 0x1d70a24));
            if (iVar8 == 0) break;
            iVar7 = iVar7 + 4;
            if (0xf < iVar7) {
              return;
            }
          }
          uVar9 = core_sound_cpp_CSound_playSound_FUN_005609b0
                            (g_CSound_PTR_006045f8,(void *)0x0,"voodoo4.wav");
          this_ptr->spectral_sound_handle = uVar9;
          *(uint *)(iVar7 + 0x1d70a24) = uVar9;
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 4;
        }
      }
    }
  }
  return;
}

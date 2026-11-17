// Name: core_inv.cpp_updateSps_FUN_004f6bb0
// Address: 004f6bb0
// Address Range: [[004f6bb0, 004f6e87]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_updateSps_FUN_004f6bb0(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_inv_cpp_updateSps_FUN_004f6bb0(void)

{
  double dVar1;
  CDemonActor *actor_ptr;
  CHero *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  g_FLOAT_01d06f70 = g_FLOAT_01d06f70 - g_CGamePtr->delta_time_float;
  if (g_FLOAT_01d06f70 <= 0.0) {
    g_FLOAT_01d06f70 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.1,0.4);
    iVar9 = 0;
    iVar10 = 0;
    g_INT_01d1bc48 = -1;
    while (iVar9 < g_CDemonSetPtr->character_count) {
      actor_ptr = *(CDemonActor **)((int)g_CDemonSetPtr->characters + iVar10);
      if (*(int *)(actor_ptr[0x1d].create_event + 0x38) == 0) {
LAB_004f6c34:
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 4;
      }
      else {
        iVar6 = core_actor_cpp_isOfClass_FUN_0040c550(actor_ptr,"CBird");
        if (iVar6 != 0) goto LAB_004f6c34;
        iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                          (g_CSound_PTR_006236b8,*(uint *)(actor_ptr[0x1d].create_event + 0x3c));
        if (iVar6 != 0) goto LAB_004f6c34;
        pCVar2 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4];
        fVar3 = (pCVar2->base).base.location.position.x - (actor_ptr->location).position.x;
        fVar5 = (pCVar2->base).base.location.position.y - (actor_ptr->location).position.y;
        fVar4 = (pCVar2->base).base.location.position.z - (actor_ptr->location).position.z;
        fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
        dVar1 = (double)fVar3;
        if ((float)1600 < fVar3) goto LAB_004f6c34;
        if (dVar1 <= 900) {
          if (dVar1 <= 400) {
            if (dVar1 <= 100) {
              g_INT_01d1bc48 = 0;
              iVar6 = 0;
              while( true ) {
                iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                  (g_CSound_PTR_006236b8,*(uint *)(iVar6 + 0x1d1bc4c));
                if (iVar7 == 0) break;
                iVar6 = iVar6 + 4;
                if (0xf < iVar6) {
                  return;
                }
              }
              uVar8 = core_sound_cpp_CSound_playSound_FUN_0057d880
                                (g_CSound_PTR_006236b8,(void *)0x0,"sps_full?.wav @ .3");
              *(uint *)(actor_ptr[0x1d].create_event + 0x3c) = uVar8;
              *(uint *)(iVar6 + 0x1d1bc4c) = uVar8;
              iVar9 = iVar9 + 1;
              iVar10 = iVar10 + 4;
            }
            else {
              g_INT_01d1bc48 = 1;
              iVar6 = 0;
              while( true ) {
                iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                  (g_CSound_PTR_006236b8,*(uint *)(iVar6 + 0x1d1bc4c));
                if (iVar7 == 0) break;
                iVar6 = iVar6 + 4;
                if (0xf < iVar6) {
                  return;
                }
              }
              uVar8 = core_sound_cpp_CSound_playSound_FUN_0057d880
                                (g_CSound_PTR_006236b8,(void *)0x0,"sps_long?.wav @ .3");
              *(uint *)(actor_ptr[0x1d].create_event + 0x3c) = uVar8;
              *(uint *)(iVar6 + 0x1d1bc4c) = uVar8;
              iVar9 = iVar9 + 1;
              iVar10 = iVar10 + 4;
            }
          }
          else {
            g_INT_01d1bc48 = 2;
            iVar6 = 0;
            while( true ) {
              iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                                (g_CSound_PTR_006236b8,*(uint *)(iVar6 + 0x1d1bc4c));
              if (iVar7 == 0) break;
              iVar6 = iVar6 + 4;
              if (0xf < iVar6) {
                return;
              }
            }
            uVar8 = core_sound_cpp_CSound_playSound_FUN_0057d880
                              (g_CSound_PTR_006236b8,(void *)0x0,"sps_med?.wav @ .3");
            *(uint *)(actor_ptr[0x1d].create_event + 0x3c) = uVar8;
            *(uint *)(iVar6 + 0x1d1bc4c) = uVar8;
            iVar9 = iVar9 + 1;
            iVar10 = iVar10 + 4;
          }
        }
        else {
          g_INT_01d1bc48 = 3;
          iVar6 = 0;
          while( true ) {
            iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_0057d9c0
                              (g_CSound_PTR_006236b8,*(uint *)(iVar6 + 0x1d1bc4c));
            if (iVar7 == 0) break;
            iVar6 = iVar6 + 4;
            if (0xf < iVar6) {
              return;
            }
          }
          uVar8 = core_sound_cpp_CSound_playSound_FUN_0057d880
                            (g_CSound_PTR_006236b8,(void *)0x0,"sps_short?.wav @ .3");
          *(uint *)(actor_ptr[0x1d].create_event + 0x3c) = uVar8;
          *(uint *)(iVar6 + 0x1d1bc4c) = uVar8;
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 4;
        }
      }
    }
  }
  return;
}

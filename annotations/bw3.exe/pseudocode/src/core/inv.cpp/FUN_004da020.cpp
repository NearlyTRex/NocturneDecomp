// Name: core_inv.cpp_FUN_004da020
// Address: 004da020
// Address Range: [[004da020, 004da310]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004da020(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004da020(void)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CCharacter *this_ptr;
  EDeathState EVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  _DAT_01d5be80 = _DAT_01d5be80 - g_CGamePtr->delta_time_float;
  if (_DAT_01d5be80 <= 0.0) {
    _DAT_01d5be80 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.1,0.4);
    iVar10 = 0;
    iVar9 = 0;
    _DAT_01d70a20 = 0xffffffff;
    while (iVar10 < g_CDemonSetPtr->character_count) {
      this_ptr = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(uint *)((int)g_CDemonSetPtr->characters + iVar9),
                            g_CEnemyClassInfo.name_hash);
      if (this_ptr == (CCharacter *)0x0) {
LAB_004da0b1:
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 4;
      }
      else {
        EVar5 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
        if (EVar5 != DEATH_STATE_ALIVE) goto LAB_004da0b1;
        iVar6 = core_actor_cpp_isOfClass_FUN_0040c790((CDemonActor *)this_ptr,"CTVBat");
        if (iVar6 != 0) goto LAB_004da0b1;
        iVar6 = core_actor_cpp_isOfClass_FUN_0040c790((CDemonActor *)this_ptr,"CWhitewolf")
        ;
        if (iVar6 != 0) goto LAB_004da0b1;
        iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        fVar2 = *(float *)(iVar6 + 0x20) - (this_ptr->base).location.position.x;
        fVar4 = *(float *)(iVar6 + 0x24) - (this_ptr->base).location.position.y;
        fVar3 = *(float *)(iVar6 + 0x28) - (this_ptr->base).location.position.z;
        fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
        dVar1 = (double)fVar2;
        if ((float)_DAT_005c5ee7 < fVar2) goto LAB_004da0b1;
        if (dVar1 <= _DAT_005c5eef) {
          if (dVar1 <= _DAT_005c5ef7) {
            if (dVar1 <= _DAT_005c5eff) {
              _DAT_01d70a20 = 0;
              iVar6 = 0;
              while( true ) {
                iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                  (0x02CF5680,*(uint *)(iVar6 + 0x1d70a24));
                if (iVar7 == 0) break;
                iVar6 = iVar6 + 4;
                if (0xf < iVar6) {
                  return;
                }
              }
              uVar8 = core_sound_cpp_CSound_playSound_FUN_005609b0
                                (0x02CF5680,(void *)0x0,"voodoo1.wav");
              *(uint *)&this_ptr->field_0x27ac = uVar8;
              *(uint *)(iVar6 + 0x1d70a24) = uVar8;
              iVar10 = iVar10 + 1;
              iVar9 = iVar9 + 4;
            }
            else {
              _DAT_01d70a20 = 1;
              iVar6 = 0;
              while( true ) {
                iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                  (0x02CF5680,*(uint *)(iVar6 + 0x1d70a24));
                if (iVar7 == 0) break;
                iVar6 = iVar6 + 4;
                if (0xf < iVar6) {
                  return;
                }
              }
              uVar8 = core_sound_cpp_CSound_playSound_FUN_005609b0
                                (0x02CF5680,(void *)0x0,"voodoo2.wav");
              *(uint *)&this_ptr->field_0x27ac = uVar8;
              *(uint *)(iVar6 + 0x1d70a24) = uVar8;
              iVar10 = iVar10 + 1;
              iVar9 = iVar9 + 4;
            }
          }
          else {
            _DAT_01d70a20 = 2;
            iVar6 = 0;
            while( true ) {
              iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                                (0x02CF5680,*(uint *)(iVar6 + 0x1d70a24));
              if (iVar7 == 0) break;
              iVar6 = iVar6 + 4;
              if (0xf < iVar6) {
                return;
              }
            }
            uVar8 = core_sound_cpp_CSound_playSound_FUN_005609b0
                              (0x02CF5680,(void *)0x0,"voodoo3.wav");
            *(uint *)&this_ptr->field_0x27ac = uVar8;
            *(uint *)(iVar6 + 0x1d70a24) = uVar8;
            iVar10 = iVar10 + 1;
            iVar9 = iVar9 + 4;
          }
        }
        else {
          _DAT_01d70a20 = 3;
          iVar6 = 0;
          while( true ) {
            iVar7 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                              (0x02CF5680,*(uint *)(iVar6 + 0x1d70a24));
            if (iVar7 == 0) break;
            iVar6 = iVar6 + 4;
            if (0xf < iVar6) {
              return;
            }
          }
          uVar8 = core_sound_cpp_CSound_playSound_FUN_005609b0
                            (0x02CF5680,(void *)0x0,"voodoo4.wav");
          *(uint *)&this_ptr->field_0x27ac = uVar8;
          *(uint *)(iVar6 + 0x1d70a24) = uVar8;
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + 4;
        }
      }
    }
  }
  return;
}

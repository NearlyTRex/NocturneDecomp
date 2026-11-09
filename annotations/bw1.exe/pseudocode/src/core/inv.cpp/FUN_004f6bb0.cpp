// Name: core_inv.cpp_FUN_004f6bb0
// Address: 004f6bb0
// Address Range: [[004f6bb0, 004f6e87]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004f6bb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004f6bb0(void)

{
  double dVar1;
  CDemonActor *actor_ptr;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  _DAT_01d06f70 = _DAT_01d06f70 - *(float *)&g_CGamePtr->field_0x294;
  if (_DAT_01d06f70 <= 0.0) {
    _DAT_01d06f70 = (float)core_actor_cpp_FUN_0040cc00(0x3dcccccd,0x3ecccccd);
    iVar8 = 0;
    iVar9 = 0;
    _DAT_01d1bc48 = 0xffffffff;
    while (iVar8 < *(int *)&g_CDemonSetPtr->field_0x14f0a8) {
      actor_ptr = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14f0ac + iVar9);
      if (*(int *)&actor_ptr[0x1d].field_0xb0 == 0) {
LAB_004f6c34:
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 4;
      }
      else {
        iVar5 = core_actor_cpp_FUN_0040c550(actor_ptr,"CBird");
        if (iVar5 != 0) goto LAB_004f6c34;
        iVar5 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)&actor_ptr[0x1d].field_0xb4);
        if (iVar5 != 0) goto LAB_004f6c34;
        iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        fVar2 = *(float *)(iVar5 + 0x20) - *(float *)&actor_ptr->field_0x20;
        fVar4 = *(float *)(iVar5 + 0x24) - *(float *)&actor_ptr->field_0x24;
        fVar3 = *(float *)(iVar5 + 0x28) - *(float *)&actor_ptr->field_0x28;
        fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
        dVar1 = (double)fVar2;
        if ((float)_DAT_005e6020 < fVar2) goto LAB_004f6c34;
        if (dVar1 <= _DAT_005e6028) {
          if (dVar1 <= _DAT_005e6030) {
            if (dVar1 <= _DAT_005e6038) {
              _DAT_01d1bc48 = 0;
              iVar5 = 0;
              while( true ) {
                iVar6 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)(iVar5 + 0x1d1bc4c));
                if (iVar6 == 0) break;
                iVar5 = iVar5 + 4;
                if (0xf < iVar5) {
                  return;
                }
              }
              uVar7 = core_sound_cpp_CSound_playSound_FUN_0057d880
                                (0x02C82A60,(void *)0x0,"sps_full?.wav @ .3");
              *(uint *)&actor_ptr[0x1d].field_0xb4 = uVar7;
              *(uint *)(iVar5 + 0x1d1bc4c) = uVar7;
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + 4;
            }
            else {
              _DAT_01d1bc48 = 1;
              iVar5 = 0;
              while( true ) {
                iVar6 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)(iVar5 + 0x1d1bc4c));
                if (iVar6 == 0) break;
                iVar5 = iVar5 + 4;
                if (0xf < iVar5) {
                  return;
                }
              }
              uVar7 = core_sound_cpp_CSound_playSound_FUN_0057d880
                                (0x02C82A60,(void *)0x0,"sps_long?.wav @ .3");
              *(uint *)&actor_ptr[0x1d].field_0xb4 = uVar7;
              *(uint *)(iVar5 + 0x1d1bc4c) = uVar7;
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + 4;
            }
          }
          else {
            _DAT_01d1bc48 = 2;
            iVar5 = 0;
            while( true ) {
              iVar6 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)(iVar5 + 0x1d1bc4c));
              if (iVar6 == 0) break;
              iVar5 = iVar5 + 4;
              if (0xf < iVar5) {
                return;
              }
            }
            uVar7 = core_sound_cpp_CSound_playSound_FUN_0057d880
                              (0x02C82A60,(void *)0x0,"sps_med?.wav @ .3");
            *(uint *)&actor_ptr[0x1d].field_0xb4 = uVar7;
            *(uint *)(iVar5 + 0x1d1bc4c) = uVar7;
            iVar8 = iVar8 + 1;
            iVar9 = iVar9 + 4;
          }
        }
        else {
          _DAT_01d1bc48 = 3;
          iVar5 = 0;
          while( true ) {
            iVar6 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)(iVar5 + 0x1d1bc4c));
            if (iVar6 == 0) break;
            iVar5 = iVar5 + 4;
            if (0xf < iVar5) {
              return;
            }
          }
          uVar7 = core_sound_cpp_CSound_playSound_FUN_0057d880
                            (0x02C82A60,(void *)0x0,"sps_short?.wav @ .3");
          *(uint *)&actor_ptr[0x1d].field_0xb4 = uVar7;
          *(uint *)(iVar5 + 0x1d1bc4c) = uVar7;
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 4;
        }
      }
    }
  }
  return;
}

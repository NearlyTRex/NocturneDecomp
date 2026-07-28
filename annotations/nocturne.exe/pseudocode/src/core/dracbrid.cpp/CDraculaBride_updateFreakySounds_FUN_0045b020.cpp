// Name: core_dracbrid.cpp_CDraculaBride_updateFreakySounds_FUN_0045b020
// Address: 0045b020
// Address Range: [[0045b020, 0045b30e]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_updateFreakySounds_FUN_0045b020(CDraculaBride *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_CDraculaBride_updateFreakySounds_FUN_0045b020(CDraculaBride *this_ptr,float delta_time)

{
  CVector3f *pCVar1;
  CVector3f *p1;
  float fVar2;
  uint *puVar3;
  int iVar4;
  CVector3f *pCVar5;
  float local_88 [8];
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  uint *local_38;
  uint *local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  uint *local_20;
  CVector3f *local_1c;
  float local_18;
  
  fVar2 = this_ptr->freaky_timer - delta_time;
  this_ptr->freaky_timer = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->freaky_timer = 0.0;
  }
  local_24 = (float *)&DAT_01fb8610;
  local_28 = (float *)&DAT_01fb8614;
  local_30 = &local_64;
  local_2c = &local_60;
  local_34 = (uint *)&DAT_01b4d280;
  local_38 = (uint *)&DAT_01b4d478;
  do {
    local_20 = local_34;
    if (this_ptr == (CDraculaBride *)local_34[0x14]) {
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*local_34);
      puVar3 = local_34;
      if (iVar4 == 0) {
        local_34[0x14] = 0;
      }
      else {
        pCVar5 = (CVector3f *)(local_34 + 0x11);
        pCVar1 = (CVector3f *)(local_34 + 0xe);
        p1 = (CVector3f *)(local_34 + 0xb);
        local_1c = (CVector3f *)(local_34 + 8);
        local_34[7] = (uint)((float)local_34[7] + delta_time);
        while (1.0 < (float)local_20[7]) {
          local_20[7] = (uint)((float)local_20[7] + -1.0f);
          if (p1 != local_1c) {
            local_1c->x = p1->x;
            local_1c->y = (float)puVar3[0xc];
            local_1c->z = (float)puVar3[0xd];
          }
          if (p1 != pCVar1) {
            p1->x = pCVar1->x;
            puVar3[0xc] = puVar3[0xf];
            puVar3[0xd] = puVar3[0x10];
          }
          if (pCVar1 != pCVar5) {
            pCVar1->x = pCVar5->x;
            puVar3[0xf] = puVar3[0x12];
            puVar3[0x10] = puVar3[0x13];
          }
          local_68 = _DAT_01fb860c;
          local_64 = *local_24;
          local_60 = *local_28;
          local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0a00000);
          local_68 = local_18 + local_68;
          local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0000000);
          local_64 = local_18 + local_64;
          local_18 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0a00000);
          local_44.x = local_68;
          local_60 = local_18 + local_60;
          local_44.y = *local_30;
          local_44.z = *local_2c;
          if (pCVar5 != &local_44) {
            pCVar5->x = local_68;
            puVar3[0x12] = (uint)local_44.y;
            puVar3[0x13] = (uint)local_44.z;
          }
        }
        core_spline_cpp_computeSplineBasis_FUN_00533ce0(local_88,(float)local_20[7],0.0);
        pCVar5 = core_spline_cpp_evaluateSplinePoint3D_FUN_00533f10
                           (local_88,&local_50,local_1c,p1,(CVector3f *)(local_20 + 0xe),
                            (CVector3f *)(local_20 + 0x11));
        if ((CVector3f *)(local_20 + 1) != pCVar5) {
          ((CVector3f *)(local_20 + 1))->x = pCVar5->x;
          local_20[2] = (uint)pCVar5->y;
          local_20[3] = (uint)pCVar5->z;
        }
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%5.2f %5.2f %5.2f\n",(double)(float)local_20[1],
                   (double)(float)local_20[2],(double)(float)local_20[3]);
        pCVar5 = core_spline_cpp_evaluateSplineTangent3D_FUN_005340d0
                           (local_88,&local_5c,(CVector3f *)(local_20 + 8),
                            (CVector3f *)(local_20 + 0xb),(CVector3f *)(local_20 + 0xe),
                            (CVector3f *)(local_20 + 0x11));
        if ((CVector3f *)(local_20 + 4) != pCVar5) {
          ((CVector3f *)(local_20 + 4))->x = pCVar5->x;
          local_20[5] = (uint)pCVar5->y;
          local_20[6] = (uint)pCVar5->z;
        }
      }
    }
    local_34 = local_34 + 0x15;
  } while (local_34 != local_38);
  return;
}

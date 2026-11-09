// Name: core_boneguy.cpp_FUN_0041c9a0
// Address: 0041c9a0
// Address Range: [[0041c9a0, 0041cfc0]]
// Convention: __cdecl
// Signature: int __cdecl core_boneguy_cpp_FUN_0041c9a0(CBoneGuy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_boneguy_cpp_FUN_0041c9a0(CBoneGuy *this_ptr,float delta_time)

{
  CDemonActor *actor_ptr;
  CConsole *pCVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_10b4 [975];
  CPathMap *path_map;
  CVector3f *direction;
  float fVar7;
  float *pfVar8;
  float max_distance;
  float local_12c;
  float fStack_128;
  float fStack_124;
  float fStack_f4;
  byte auStack_f0 [12];
  uint auStack_e4 [6];
  float fStack_cc;
  float afStack_c8 [4];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  uint uStack_a8;
  CVector3f CStack_9c;
  uint uStack_90;
  float afStack_8c [5];
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [5];
  CVector3f CStack_54;
  uint uStack_48;
  float afStack_44 [4];
  uint uStack_34;
  float *local_30;
  int local_2c;
  float *local_28;
  int local_24;
  int local_1c;
  int local_18;
  uint local_14;
  
  bVar6 = 0;
  fVar7 = *(float *)&this_ptr->field_0xc26c - delta_time;
  *(float *)&this_ptr->field_0xc26c = fVar7;
  if (0.0 < fVar7) {
    *(int *)&this_ptr->field_0xc268 = *(int *)&this_ptr->field_0xc268 + 1;
    local_14 = core_actor_cpp_FUN_0040cc00(0x40a00000,0x41200000);
    *(uint *)&this_ptr->field_0xc26c = local_14;
  }
  if (*(int *)&this_ptr->field_0x2628 == 0) {
    if (*(float *)&this_ptr->field_0xc270 <= 0.0) {
      iVar2 = *(int *)&this_ptr->field_0xc274;
      local_30 = (float *)&this_ptr->field_0x20;
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x94))(iVar2);
        if (iVar2 != 0) {
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1,this_ptr,
                     *(uint *)&this_ptr->field_0xc274);
          *(uint *)&this_ptr->field_0xc274 = 0;
          *(uint *)&this_ptr->field_0xc270 = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,1,1);
          return 0;
        }
        iVar2 = -1;
        if (*(float *)&this_ptr->field_0xc270 < 0.0) {
          iVar3 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc274 + 0x154) + 0x84))
                            (*(int *)&this_ptr->field_0xc274,this_ptr);
          if (iVar3 == 3) {
            iVar2 = *(int *)&this_ptr->field_0xc274;
            (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
            uStack_34 = 0x3f000000;
            puVar4 = auStack_e4;
            puVar5 = (uint *)&stack0xffffff04;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            }
            core_bodypart_cpp_FUN_0041b020(&stack0xffffff04,auStack_f0,afStack_44 + 4);
            uStack_48 = uStack_a8;
            afStack_44[(uint)bVar6 * -2] = afStack_c8[(uint)bVar6 * -2 + 9];
            afStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
            core_bodypart_cpp_FUN_0041afa0(&uStack_48);
            pfVar8 = afStack_8c + 2;
            uStack_90 = afStack_68[2];
            afStack_8c[(uint)bVar6 * -2] = afStack_68[(uint)bVar6 * -2 + 3];
            afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
            afStack_8c[1] = fStack_f4 + (float)_DAT_005d4829;
            afStack_8c[2] = (float)uStack_90;
            afStack_8c[(uint)bVar6 * -2 + 3] = afStack_8c[(uint)bVar6 * -2];
            afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                 afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            core_actor_cpp_FUN_00408b40(iVar2,pfVar8);
            max_distance = 0.0;
            direction = &CStack_78;
            fVar7 = 0.0;
            path_map = (CPathMap *)0x0;
            CStack_9c._0_4_ = CStack_54._0_4_;
            *(uint *)((int)&CStack_9c + (uint)bVar6 * -8 + 4) =
                 *(uint *)((int)&CStack_54 + (uint)bVar6 * -8 + 4);
            *(uint *)((int)&CStack_9c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
                 *(uint *)((int)&CStack_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
            CStack_78._0_4_ = 0x3fc00000;
            CStack_78._4_4_ = 0;
            CStack_78._8_4_ = 0;
            iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                              ((CCharacter *)this_ptr,&CStack_9c,path_map,direction,fVar7,
                               max_distance);
          }
        }
        if (-1 < iVar2) {
          if (iVar2 < 1) {
            return 1;
          }
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"%s beginning to pickup %s\n",this_ptr,
                     *(uint *)&this_ptr->field_0xc274);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,7,1);
          return 1;
        }
        engine_console_cpp_FUN_00445430
                  (g_CConsolePtr,"%s can't pick up %s, giving up!!!!\n",this_ptr,
                   *(uint *)&this_ptr->field_0xc274);
        *(uint *)&this_ptr->field_0xc274 = 0;
        *(uint *)&this_ptr->field_0xc270 = 0x41a00000;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,1,1);
        return 0;
      }
      local_28 = (float *)&stack0xfffffee0;
      local_2c = 0;
      local_1c = 0;
      local_18 = 0;
      for (local_24 = 0; local_24 < *(int *)&g_CDemonSetPtr->field_0x14d164; local_24 = local_24 + 1
          ) {
        actor_ptr = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + local_2c);
        iVar2 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x94))(actor_ptr);
        if (iVar2 == 0) {
          iVar2 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x84))(actor_ptr,this_ptr);
          if (iVar2 == 3) {
            (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x1c))(actor_ptr);
            pfVar8 = local_28;
            puVar4 = (uint *)&stack0xfffffeec;
            puVar5 = &stack0xfffffed4;
            for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            }
            fStack_6c = *pfVar8 - local_12c;
            afStack_68[0] = pfVar8[1] - fStack_128;
            afStack_68[1] = pfVar8[2] - fStack_124;
            fStack_cc = *pfVar8 - local_12c;
            afStack_c8[(uint)bVar6 * -2] = afStack_68[(uint)bVar6 * -2];
            afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 afStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            if ((((fStack_cc < 1.0) && (afStack_c8[0] < 1.0)) &&
                ((float)_DAT_005d4831 < afStack_c8[1])) && ((double)afStack_c8[1] < _DAT_005d4839))
            {
              iVar2 = core_actor_cpp_FUN_0040c550(actor_ptr,"CBodyPart");
              if (iVar2 == 0) {
                fStack_b4 = *(float *)&actor_ptr->field_0x20 - *local_30;
                fStack_b0 = *(float *)&actor_ptr->field_0x24 - local_30[1];
                fStack_ac = *(float *)&actor_ptr->field_0x28 - local_30[2];
                afStack_c8[2] = fStack_b4;
                afStack_c8[(uint)bVar6 * -2 + 3] = afStack_c8[(uint)bVar6 * -2 + 6];
                afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                     afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
                afStack_c8[3] = afStack_c8[3] * afStack_c8[3] * afStack_c8[3] * afStack_c8[3];
                fVar7 = SQRT(fStack_b8 * fStack_b8 +
                             afStack_c8[2] * afStack_c8[2] + afStack_c8[3] * afStack_c8[3]);
                if (((float)_DAT_005d4821 <= fVar7) && ((int)fVar7 < 0x41700001)) {
                  iVar2 = local_18 + 1;
                  *(CDemonActor **)(&stack0xfffffeac + local_1c) = actor_ptr;
                  local_1c = local_1c + 4;
                  local_18 = iVar2;
                  if (0x27 < local_1c) break;
                }
              }
            }
          }
        }
        local_2c = local_2c + 4;
      }
      if (0 < local_18) {
        iVar2 = core_actor_cpp_FUN_0040cc60(0,local_18 + -1);
        *(uint *)&this_ptr->field_0xc274 = *(uint *)(&stack0xfffffeac + iVar2 * 4);
        pCVar1 = g_CConsolePtr;
        *(uint *)&this_ptr->field_0xc270 = 0xc2200000;
        *(int *)&this_ptr->field_0xc268 = *(int *)&this_ptr->field_0xc268 + 1;
        engine_console_cpp_FUN_00445430
                  (pCVar1,"%s is going to try to pick up %s\n",this_ptr,
                   *(uint *)&this_ptr->field_0xc274);
        return 1;
      }
    }
    else {
      fVar7 = *(float *)&this_ptr->field_0xc270 - delta_time;
      *(float *)&this_ptr->field_0xc270 = fVar7;
      if (fVar7 < 0.0) {
        *(uint *)&this_ptr->field_0xc270 = 0;
      }
    }
  }
  return 0;
}

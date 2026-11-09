// Name: core_manpuz.cpp_FUN_004e6f20
// Address: 004e6f20
// Address Range: [[004e6f20, 004e7214]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_FUN_004e6f20(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_FUN_004e6f20(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  int unaff_EDI;
  uint *puVar5;
  byte bVar6;
  float afStackY_107c [970];
  uint uStack_104;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  float fStack_94;
  float afStack_90 [4];
  float fStack_80;
  float afStack_7c [3];
  uint uStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float afStack_48 [5];
  uint auStack_34 [3];
  uint uStack_28;
  uint uStack_1c;
  int *piStack_14;
  
  bVar6 = 0;
  piStack_14 = (int *)(&this_ptr->field_0x74c + panel_index * 100);
  bVar2 = false;
  if (*piStack_14 == 0) {
    uStack_104 = 0x4e71bf;
    iVar3 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570
                      (this_ptr,panel_index);
    bVar2 = true;
    if ((*(int *)(&this_ptr->field_0x74c + iVar3 * 100) == 0) ||
       (*(float *)((int)(&this_ptr->field_0x74c + iVar3 * 100) + 8) <= 0.0)) goto LAB_004e6f62;
  }
  else {
LAB_004e6f62:
    if (bVar2) {
      fVar1 = *(float *)(&this_ptr->field_0x15ec + panel_index * 4) + delta_time;
      goto LAB_004e6f77;
    }
  }
  fVar1 = *(float *)(&this_ptr->field_0x15ec + panel_index * 4) - delta_time;
LAB_004e6f77:
  *(float *)(&this_ptr->field_0x15ec + panel_index * 4) = fVar1;
  if (0.0 < *(float *)(&this_ptr->field_0x15ec + panel_index * 4)) {
    if (1.0 < *(float *)(&this_ptr->field_0x15ec + panel_index * 4)) {
      *(uint *)(&this_ptr->field_0x15ec + panel_index * 4) = 0x3f800000;
    }
    core_dirmat_cpp_FUN_00449530();
    fStack_64 = fStack_94;
    afStack_90[(uint)bVar6 * -2 + 0xc] = afStack_90[(uint)bVar6 * -2];
    afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    afStack_90[2] = *(float *)(unaff_EDI + 0xc) + fStack_64;
    afStack_90[3] = *(float *)(unaff_EDI + 0x10) + fStack_60;
    fStack_80 = *(float *)(unaff_EDI + 0x14) + fStack_5c;
    fStack_4c = afStack_90[2];
    afStack_48[(uint)bVar6 * -2] = afStack_90[(uint)bVar6 * -2 + 3];
    afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    core_actor_cpp_FUN_00408d70();
    uStack_58 = 0;
    afStack_7c[0] = (float)uStack_70;
    afStack_90[(uint)bVar6 * -2 + 6] = afStack_90[(uint)bVar6 * -2 + 9];
    afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    fStack_54 = (*(float *)&this_ptr->field_0x72c - *(float *)&this_ptr->field_0x744) *
                _DAT_005dc5f1;
    fStack_50 = -(*(float *)&this_ptr->field_0x1668 * _DAT_005dc5ed +
                  *(float *)&this_ptr->field_0x748 + *(float *)&this_ptr->field_0x730) *
                _DAT_005dc5f1;
    core_dirmat_cpp_FUN_00449530();
    afStack_48[2] = (float)uStack_28;
    afStack_48[(uint)bVar6 * -2 + 3] = afStack_48[(uint)bVar6 * -2 + 9];
    afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    core_actor_cpp_FUN_00408cf0();
    auStack_34[0] = uStack_1c;
    afStack_48[(uint)bVar6 * -2 + 6] = afStack_48[(uint)bVar6 * -2 + 0xc];
    afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    core_fire_cpp_SLaserInfo_ctor_FUN_0049dae0((SLaserInfo *)&uStack_e8);
    uStack_e0 = 2;
    uStack_e4 = 0x3da3d70a;
    uStack_dc = *(uint *)(&this_ptr->field_0x155c + panel_index * 4);
    uStack_d8 = *(uint *)(&this_ptr->field_0x158c + panel_index * 4);
    uStack_d4 = *(uint *)(&this_ptr->field_0x15bc + panel_index * 4);
    uStack_e8 = *(uint *)(&this_ptr->field_0x15ec + panel_index * 4);
    uStack_d0 = 0;
    uStack_cc = 0;
    puVar4 = &uStack_e8;
    puVar5 = (uint *)&stack0xfffffeb8;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    core_fire_cpp_FUN_0049db20(0x01C3DEB4,afStack_90 + 5,afStack_48 + 5);
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    return;
  }
  *(uint *)(&this_ptr->field_0x15ec + panel_index * 4) = 0;
  return;
}

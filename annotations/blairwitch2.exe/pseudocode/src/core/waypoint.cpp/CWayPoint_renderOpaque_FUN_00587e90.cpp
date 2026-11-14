// Name: core_waypoint.cpp_CWayPoint_renderOpaque_FUN_00587e90
// Address: 00587e90
// Address Range: [[00587e90, 0058822a]]
// Convention: __cdecl
// Signature: int __cdecl core_waypoint_cpp_CWayPoint_renderOpaque_FUN_00587e90(CWayPoint *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_waypoint_cpp_CWayPoint_renderOpaque_FUN_00587e90(CWayPoint *this_ptr)

{
  CWayPoint *this_ptr_00;
  int iVar1;
  CBoundingBox3D *unaff_EBX;
  uint *puVar2;
  CBoundingBox3D *unaff_EDI;
  uint *puVar3;
  byte bVar4;
  float *pfVar5;
  float afStackY_1090 [980];
  float *pfVar6;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  CVector3i CStack_c8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float afStack_a4 [5];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3i CStack_78;
  float afStack_6c [4];
  float afStack_5c [5];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float *pfStack_8;
  CWayPoint *pCVar7;
  
  bVar4 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (((iVar1 == 0) && (*(int *)(0x01D182F0 + 0x1008) == 0)) &&
     (g_CGameHookPtr->debug_waypoint_display != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,unaff_EBX);
    puVar2 = (uint *)&stack0xfffffef0;
    puVar3 = (uint *)&stack0xffffff00;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    fStack_2c = fStack_f8 + fStack_ec;
    fStack_28 = fStack_f4 + fStack_e8;
    fStack_24 = fStack_f0 + fStack_e4;
    fStack_20 = fStack_f8 + fStack_ec;
    afStack_5c[(uint)bVar4 * -2 + 0x10] = afStack_5c[(uint)bVar4 * -2 + 0xd];
    afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x11] =
         afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xe];
    CStack_78.y = (int)(fStack_20 * _DAT_005ee107);
    CStack_78.z = (int)(fStack_1c * _DAT_005ee107);
    afStack_6c[0] = fStack_18 * _DAT_005ee107;
    fStack_14 = fStack_20 * _DAT_005ee107;
    afStack_5c[(uint)bVar4 * -2 + 0x13] = afStack_6c[(uint)bVar4 * -2 + -1];
    afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x14] =
         afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2];
    if (afStack_a4 + 6 != afStack_5c + 0x12) {
      fStack_8c = fStack_14;
      fStack_88 = fStack_10;
      fStack_84 = fStack_c;
    }
    CStack_c8.x = (int)ROUND(fStack_8c * _DAT_005fde10);
    CStack_c8.y = (int)ROUND(fStack_88 * _DAT_005fde10);
    CStack_c8.z = (int)ROUND(fStack_84 * _DAT_005fde10);
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_c8);
    pfVar5 = (float *)0x0;
    if (0 < this_ptr->num_adjacent_waypoints) {
      pfStack_8 = &stack0xffffff2c;
      pCVar7 = this_ptr;
      do {
        this_ptr_00 = pCVar7->adjacency[0].waypoint;
        if (this_ptr <= this_ptr_00) {
          _DAT_01c35e60 = 2;
          (*((this_ptr_00->base).base.vtable._ub)->getBoundingBox)
                    ((CDemonActor *)this_ptr_00,unaff_EDI);
          puVar2 = (uint *)&stack0xfffffee0;
          puVar3 = (uint *)&stack0xffffff20;
          for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
            puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
          }
          afStack_6c[3] = fStack_d8 + *pfVar5;
          afStack_5c[0] = fStack_d4 + pfVar5[1];
          afStack_5c[1] = fStack_d0 + pfVar5[2];
          fStack_a8 = fStack_d8 + *pfVar5;
          afStack_a4[(uint)bVar4 * -2] = afStack_5c[(uint)bVar4 * -2];
          afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
               afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          pfVar6 = afStack_a4 + 2;
          fStack_48 = fStack_a8 * _DAT_005ee107;
          fStack_44 = afStack_a4[0] * _DAT_005ee107;
          fStack_40 = afStack_a4[1] * _DAT_005ee107;
          afStack_a4[2] = fStack_a8 * _DAT_005ee107;
          afStack_a4[(uint)bVar4 * -2 + 3] = afStack_5c[(uint)bVar4 * -2 + 6];
          afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
               afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
          core_actor_cpp_FUN_00408d70(this_ptr_00,pfVar6);
          pfVar6 = afStack_a4 + 5;
          fStack_90 = afStack_5c[2];
          afStack_a4[(uint)bVar4 * -2 + 6] = afStack_5c[(uint)bVar4 * -2 + 3];
          afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
               afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
          core_actor_cpp_FUN_00408de0(this_ptr,pfVar6);
          fStack_3c = fStack_30;
          afStack_5c[(uint)bVar4 * -2 + 9] = afStack_5c[(uint)bVar4 * -2 + 0xc];
          afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
               afStack_5c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
          if (&fStack_b4 != afStack_5c + 8) {
            fStack_b4 = fStack_3c;
            fStack_b0 = fStack_38;
            fStack_ac = fStack_34;
          }
          CStack_78.x = (int)ROUND(fStack_b4 * _DAT_005fde10);
          CStack_78.y = (int)ROUND(fStack_b0 * _DAT_005fde10);
          CStack_78.z = (int)ROUND(fStack_ac * _DAT_005fde10);
          engine_special_cpp_FUN_0055d723
                    (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_78);
          unaff_EDI = (CBoundingBox3D *)0x0;
          engine_3d_c_drawLine2DFromIndices_FUN_00407c40(0,1);
        }
        pCVar7 = (CWayPoint *)((pCVar7->base).base.actor_name + 8);
        pfVar5 = (float *)((int)pfVar5 + 1);
      } while ((int)pfVar5 < this_ptr->num_adjacent_waypoints);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
    return 1;
  }
  return 0;
}

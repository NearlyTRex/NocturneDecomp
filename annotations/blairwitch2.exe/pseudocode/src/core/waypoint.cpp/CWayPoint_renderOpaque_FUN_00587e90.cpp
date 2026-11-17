// Name: core_waypoint.cpp_CWayPoint_renderOpaque_FUN_00587e90
// Address: 00587e90
// Address Range: [[00587e90, 0058822a]]
// Convention: __cdecl
// Signature: int __cdecl core_waypoint_cpp_CWayPoint_renderOpaque_FUN_00587e90(CWayPoint *this_ptr)

#include "nocturne.h"

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
  CVector3f *pCVar6;
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
  float afStack_a4 [2];
  CVector3f CStack_9c;
  CVector3f CStack_90;
  float fStack_84;
  CVector3i CStack_78;
  float afStack_6c [4];
  float afStack_5c [2];
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  CVector3f CStack_30;
  float afStack_24 [4];
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float *pfStack_8;
  CWayPoint *pCVar7;
  
  bVar4 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(g_CDemonRenderer_PTR_0060b280)
  ;
  if (((iVar1 == 0) && (g_CDemonMission_PTR_00618170->is_in_editor == 0)) &&
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
    CStack_30.y = fStack_f8 + fStack_ec;
    CStack_30.z = fStack_f4 + fStack_e8;
    afStack_24[0] = fStack_f0 + fStack_e4;
    afStack_24[1] = fStack_f8 + fStack_ec;
    afStack_24[(uint)bVar4 * -2 + 2] = afStack_24[(uint)bVar4 * -2 + -1];
    afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 3] =
         afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2];
    CStack_78.y = (int)(afStack_24[1] * 0.5f);
    CStack_78.z = (int)(afStack_24[2] * 0.5f);
    afStack_6c[0] = afStack_24[3] * 0.5f;
    fStack_14 = afStack_24[1] * 0.5f;
    afStack_24[(uint)bVar4 * -2 + 5] = afStack_6c[(uint)bVar4 * -2 + -1];
    afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 6] =
         afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2];
    if (&CStack_90.y != afStack_24 + 4) {
      CStack_90.y = fStack_14;
      CStack_90.z = fStack_10;
      fStack_84 = fStack_c;
    }
    CStack_c8.x = (int)ROUND(CStack_90.y * 256.0f);
    CStack_c8.y = (int)ROUND(CStack_90.z * 256.0f);
    CStack_c8.z = (int)ROUND(fStack_84 * 256.0f);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_c8);
    pfVar5 = (float *)0x0;
    if (0 < this_ptr->num_adjacent_waypoints) {
      pfStack_8 = &stack0xffffff2c;
      pCVar7 = this_ptr;
      do {
        this_ptr_00 = pCVar7->adjacency[0].waypoint;
        if (this_ptr <= this_ptr_00) {
          g_INT_01c35e60 = 2;
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
          pCVar6 = &CStack_9c;
          fStack_48 = fStack_a8 * 0.5f;
          afStack_44[0] = afStack_a4[0] * 0.5f;
          afStack_44[1] = afStack_a4[1] * 0.5f;
          CStack_9c.x = fStack_a8 * 0.5f;
          *(float *)((int)&CStack_9c + (uint)bVar4 * -8 + 4) = afStack_44[(uint)bVar4 * -2];
          *(float *)((int)&CStack_9c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               afStack_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    ((CDemonActor *)this_ptr_00,pCVar6,&CStack_54);
          pCVar6 = &CStack_90;
          CStack_90.x = CStack_54.x;
          *(uint *)((int)&CStack_90 + (uint)bVar4 * -8 + 4) =
               *(uint *)((int)&CStack_54 + (uint)bVar4 * -8 + 4);
          *(uint *)((int)&CStack_90 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)&CStack_54 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                    ((CDemonActor *)this_ptr,pCVar6,&CStack_30);
          afStack_44[2] = CStack_30.x;
          afStack_44[(uint)bVar4 * -2 + 3] = afStack_24[(uint)bVar4 * -2 + -2];
          afStack_44[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
               afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1];
          if (&fStack_b4 != afStack_44 + 2) {
            fStack_b4 = afStack_44[2];
            fStack_b0 = afStack_44[3];
            fStack_ac = fStack_34;
          }
          CStack_78.x = (int)ROUND(fStack_b4 * 256.0f);
          CStack_78.y = (int)ROUND(fStack_b0 * 256.0f);
          CStack_78.z = (int)ROUND(fStack_ac * 256.0f);
          engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                    (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[1].projected_vertex,
                     &CStack_78);
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

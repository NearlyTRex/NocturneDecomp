// Name: core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409af0
// Address: 00409af0
// Address Range: [[00409af0, 00409dae]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409af0(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409af0(CDemonActor *this_ptr)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CVector3f *pCVar7;
  CVector3f aCStack_9c [10];
  CVector3i CStack_24;
  int iStack_18;
  uint uStack_14;
  
  __arrinit(aCStack_9c,10,&g_CVectorTypeInfo);
  iStack_18 = (*((this_ptr->vtable)._ub)->getTargetPoints)(this_ptr,aCStack_9c);
  pCVar7 = aCStack_9c;
  iVar5 = 0;
  if (0 < iStack_18) {
    do {
      uStack_14 = (uint)g_ColorCubeLookup[0x7c00];
      CStack_24.x = (int)ROUND(pCVar7->x * 256.0f);
      CStack_24.y = (int)ROUND(*(float *)((int)pCVar7 + 4) * 256.0f);
      CStack_24.z = (int)ROUND(*(float *)((int)pCVar7 + 8) * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&g_CDemonRenderer_PTR_0060b27c->vertex_buffer_ptr[19999].projected_vertex,
                 &CStack_24);
      pSVar3 = g_CDemonRenderer_PTR_0060b27c->vertex_buffer_ptr;
      if ((int)(pSVar3[19999].projected_vertex.screen_x & -0x80000000) == 0) {
        iVar4 = pSVar3[19999].projected_vertex.screen_x >> 0x10;
        g_INT_01c35e60 = uStack_14;
        iVar6 = pSVar3[19999].projected_vertex.screen_y >> 0x10;
        if ((((-1 < iVar4) && (-1 < iVar6)) && (iVar4 < g_INT_006141b8)) && (iVar6 < g_INT_006141bc)
           ) {
          engine_2d_c_plotPixel_FUN_00401130(iVar4,iVar6);
        }
        iVar1 = iVar4 + -1;
        iVar2 = iVar6 + -1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_INT_006141b8 && (iVar2 < g_INT_006141bc)))
           ) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar4 + -1;
        iVar2 = iVar6 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_INT_006141b8 && (iVar2 < g_INT_006141bc)))
           ) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar4 + 1;
        iVar2 = iVar6 + -1;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < g_INT_006141b8)) && (iVar2 < g_INT_006141bc)
           ) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar4 + 1;
        iVar2 = iVar6 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_INT_006141b8 && (iVar2 < g_INT_006141bc)))
           ) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar4 + -2;
        iVar2 = iVar6 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_INT_006141b8 && (iVar2 < g_INT_006141bc)))
           ) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar4 + -2;
        iVar2 = iVar6 + 2;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < g_INT_006141b8)) && (iVar2 < g_INT_006141bc)
           ) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar1 = iVar4 + 2;
        iVar2 = iVar6 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_INT_006141b8 && (iVar2 < g_INT_006141bc)))
           ) {
          engine_2d_c_plotPixel_FUN_00401130(iVar1,iVar2);
        }
        iVar4 = iVar4 + 2;
        iVar6 = iVar6 + 2;
        if (((-1 < iVar4) && (-1 < iVar6)) && ((iVar4 < g_INT_006141b8 && (iVar6 < g_INT_006141bc)))
           ) {
          engine_2d_c_plotPixel_FUN_00401130(iVar4,iVar6);
        }
      }
      iVar5 = iVar5 + 1;
      pCVar7 = (CVector3f *)((int)pCVar7 + 0xc);
    } while (iVar5 < iStack_18);
  }
  return;
}

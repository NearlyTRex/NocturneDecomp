// Name: core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90
// Address: 00409b90
// Address Range: [[00409b90, 00409e61]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90(CDemonActor * this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90(CDemonActor *this_ptr)

{
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float afStack_94 [30];
  CVector3i CStack_1c;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x4ff);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xffffff64,10,&g_CVectorTypeInfo)
  ;
  iVar4 = (*((this_ptr->vtable)._ub)->getTargetPoints)(this_ptr,(CVector3f *)&stack0xffffff64);
  pfVar9 = afStack_94;
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      uVar5 = (uint)g_ColorCubeLookup[0x7c00];
      CStack_1c.x = (int)ROUND(*pfVar9 * 256.0f);
      CStack_1c.y = (int)ROUND(pfVar9[1] * 256.0f);
      CStack_1c.z = (int)ROUND(pfVar9[2] * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[19999].projected_vertex,&CStack_1c);
      pSVar3 = g_CDemonRendererPtr1->vertex_buffer_ptr;
      if ((int)(pSVar3[19999].projected_vertex.screen_x & -0x80000000) == 0) {
        iVar6 = pSVar3[19999].projected_vertex.screen_x >> 0x10;
        iVar8 = pSVar3[19999].projected_vertex.screen_y >> 0x10;
        g_ActiveRenderColor = uVar5;
        if ((((-1 < iVar6) && (-1 < iVar8)) && (iVar6 < g_WindowWidth)) && (iVar8 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar6,iVar8);
        }
        iVar1 = iVar6 + -1;
        iVar2 = iVar8 + -1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar6 + -1;
        iVar2 = iVar8 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar6 + 1;
        iVar2 = iVar8 + -1;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < g_WindowWidth)) && (iVar2 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar6 + 1;
        iVar2 = iVar8 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar6 + -2;
        iVar2 = iVar8 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar6 + -2;
        iVar2 = iVar8 + 2;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < g_WindowWidth)) && (iVar2 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar6 + 2;
        iVar2 = iVar8 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar6 = iVar6 + 2;
        iVar8 = iVar8 + 2;
        if (((-1 < iVar6) && (-1 < iVar8)) && ((iVar6 < g_WindowWidth && (iVar8 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar6,iVar8);
        }
      }
      iVar7 = iVar7 + 1;
      pfVar9 = pfVar9 + 3;
    } while (iVar7 < iVar4);
  }
  return;
}

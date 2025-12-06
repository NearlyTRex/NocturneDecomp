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
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int iVar7;
  uint uStack00000008;
  int in_stack_0000000c;
  CVector3f CStack_94;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x4ff);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xffffff68,10,&g_CVectorTypeInfo)
  ;
  iVar4 = (*this_ptr->vtable->getTargetPoints)(this_ptr,&CStack_94);
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      uStack00000008 = (uint)g_ColorCubeLookup[0x7c00];
      CStack_94.z = 5.933508e-39;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,
                 (CVector3i *)&stack0xfffffff8);
      pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
      if ((int)(pSVar3[19999].projected_vertex.screen_x & -0x80000000) == 0) {
        iVar5 = pSVar3[19999].projected_vertex.screen_x >> 0x10;
        g_ActiveRenderColor = in_stack_0000000c;
        iVar7 = pSVar3[19999].projected_vertex.screen_y >> 0x10;
        if ((((-1 < iVar5) && (-1 < iVar7)) && (iVar5 < g_WindowWidth)) && (iVar7 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar7);
        }
        iVar1 = iVar5 + -1;
        iVar2 = iVar7 + -1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar5 + -1;
        iVar2 = iVar7 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar5 + 1;
        iVar2 = iVar7 + -1;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < g_WindowWidth)) && (iVar2 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar5 + 1;
        iVar2 = iVar7 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar5 + -2;
        iVar2 = iVar7 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar5 + -2;
        iVar2 = iVar7 + 2;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < g_WindowWidth)) && (iVar2 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar1 = iVar5 + 2;
        iVar2 = iVar7 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar5 = iVar5 + 2;
        iVar7 = iVar7 + 2;
        if (((-1 < iVar5) && (-1 < iVar7)) && ((iVar5 < g_WindowWidth && (iVar7 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar5,iVar7);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  return;
}

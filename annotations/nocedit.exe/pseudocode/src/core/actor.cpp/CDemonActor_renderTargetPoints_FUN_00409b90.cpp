// Name: core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90
// Address: 00409b90
// Address Range: [[00409b90, 00409e61]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90(CDemonActor *this_ptr)

{
  int iVar3;
  uint uVar4;
  int iVar4;
  int iVar7;
  int iVar5;
  int iVar6;
  int iVar8;
  CVector3f *pCVar7;
  CVector3f local_9c [10];
  CVector3i CStack_24;
  int iStack_18;
  uint uStack_14;
  int iVar1;
  SRenderVertex *pSVar3;
  int iVar2;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",1279);
  __arrinit(local_9c,10,&g_CVectorTypeInfo);
  iVar3 = (*((this_ptr->vtable)._ub)->getTargetPoints)(this_ptr,local_9c);
  pCVar7 = local_9c;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      uVar4 = (uint)g_ColorCubeLookup[0x7c00];
      CStack_24.x = (int)ROUND(pCVar7->x * 256.0f);
      CStack_24.y = (int)ROUND(pCVar7->y * 256.0f);
      CStack_24.z = (int)ROUND(pCVar7->z * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[19999].projected_vertex,&CStack_24);
      pSVar3 = g_CDemonRendererPtr1->vertex_buffer_ptr;
      if ((int)(pSVar3[19999].projected_vertex.screen_x & -0x80000000) == 0) {
        iVar4 = pSVar3[19999].projected_vertex.screen_x >> 0x10;
        iVar6 = pSVar3[19999].projected_vertex.screen_y >> 0x10;
        g_ActiveRenderColor = uVar4;
        if ((((-1 < iVar4) && (-1 < iVar6)) && (iVar4 < g_WindowWidth)) && (iVar6 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar4,iVar6);
        }
        iVar1 = iVar4 + -1;
        iVar2 = iVar6 + -1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,iVar2);
        }
        iVar7 = iVar4 + -1;
        iVar8 = iVar6 + 1;
        if (((-1 < iVar7) && (-1 < iVar8)) && ((iVar7 < g_WindowWidth && (iVar8 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar7,iVar8);
        }
        iVar7 = iVar4 + 1;
        iVar8 = iVar6 + -1;
        if ((((-1 < iVar7) && (-1 < iVar8)) && (iVar7 < g_WindowWidth)) && (iVar8 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar7,iVar8);
        }
        iVar7 = iVar4 + 1;
        iVar8 = iVar6 + 1;
        if (((-1 < iVar7) && (-1 < iVar8)) && ((iVar7 < g_WindowWidth && (iVar8 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar7,iVar8);
        }
        iVar7 = iVar4 + -2;
        iVar8 = iVar6 + -2;
        if (((-1 < iVar7) && (-1 < iVar8)) && ((iVar7 < g_WindowWidth && (iVar8 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar7,iVar8);
        }
        iVar7 = iVar4 + -2;
        iVar8 = iVar6 + 2;
        if ((((-1 < iVar7) && (-1 < iVar8)) && (iVar7 < g_WindowWidth)) && (iVar8 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar7,iVar8);
        }
        iVar7 = iVar4 + 2;
        iVar8 = iVar6 + -2;
        if (((-1 < iVar7) && (-1 < iVar8)) && ((iVar7 < g_WindowWidth && (iVar8 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar7,iVar8);
        }
        iVar7 = iVar4 + 2;
        iVar8 = iVar6 + 2;
        if (((-1 < iVar7) && (-1 < iVar8)) && ((iVar7 < g_WindowWidth && (iVar8 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401140(iVar7,iVar8);
        }
      }
      iVar5 = iVar5 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}

// Name: core_actor.cpp_CDemonActor_renderTargetPoints_FUN_0040add0
// Address: 0040add0
// Address Range: [[0040add0, 0040b08e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_0040add0(CDemonActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_0040add0(CDemonActor *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CVector3f *pCVar6;
  CVector3f local_9c [10];
  CVector3i CStack_24;
  int iStack_18;
  uint uStack_14;
  
  __arrinit(local_9c,10,&g_CVectorTypeInfo_005993b0);
  iStack_18 = (*((this_ptr->vtable)._ub)->getTargetPoints)(this_ptr,local_9c);
  pCVar6 = local_9c;
  iVar4 = 0;
  if (0 < iStack_18) {
    do {
      uStack_14 = (uint)g_ColorCubeLookup[0x7c00];
      CStack_24.x = (int)ROUND(pCVar6->x * _DAT_005992b0);
      CStack_24.y = (int)ROUND(*(float *)((int)pCVar6 + 4) * _DAT_005992b0);
      CStack_24.z = (int)ROUND(*(float *)((int)pCVar6 + 8) * _DAT_005992b0);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                ((SProjectedVertex *)(*(int *)PTR_DAT_005ae700 + 0xea5d0),&CStack_24);
      iVar5 = *(int *)PTR_DAT_005ae700;
      if ((*(byte *)(iVar5 + 0xea5e3) & 0x80) == 0) {
        iVar3 = *(int *)(iVar5 + 0xea5e0) >> 0x10;
        g_ActiveRenderColor = uStack_14;
        iVar5 = *(int *)(iVar5 + 0xea5e4) >> 0x10;
        if ((((-1 < iVar3) && (-1 < iVar5)) && (iVar3 < g_WindowWidth)) && (iVar5 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401530(iVar3,iVar5);
        }
        iVar1 = iVar3 + -1;
        iVar2 = iVar5 + -1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
        }
        iVar1 = iVar3 + -1;
        iVar2 = iVar5 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
        }
        iVar1 = iVar3 + 1;
        iVar2 = iVar5 + -1;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < g_WindowWidth)) && (iVar2 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
        }
        iVar1 = iVar3 + 1;
        iVar2 = iVar5 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
        }
        iVar1 = iVar3 + -2;
        iVar2 = iVar5 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
        }
        iVar1 = iVar3 + -2;
        iVar2 = iVar5 + 2;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < g_WindowWidth)) && (iVar2 < g_WindowHeight))
        {
          engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
        }
        iVar1 = iVar3 + 2;
        iVar2 = iVar5 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < g_WindowWidth && (iVar2 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
        }
        iVar3 = iVar3 + 2;
        iVar5 = iVar5 + 2;
        if (((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < g_WindowWidth && (iVar5 < g_WindowHeight))))
        {
          engine_2d_c_plotPixel_FUN_00401530(iVar3,iVar5);
        }
      }
      iVar4 = iVar4 + 1;
      pCVar6 = (CVector3f *)((int)pCVar6 + 0xc);
    } while (iVar4 < iStack_18);
  }
  return;
}

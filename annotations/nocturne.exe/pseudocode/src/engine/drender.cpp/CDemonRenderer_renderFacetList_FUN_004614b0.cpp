// Name: engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0
// Address: 004614b0
// Address Range: [[004614b0, 0046171d]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_004614b0(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_renderFacetList_FUN_004614b0(int *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (((param_1[4] == 0) && (param_1[3] == 0)) && (DAT_006b0280 != 0)) {
    if (param_1[1] == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
      }
      else {
        _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
      }
      _DAT_01c039a0 = param_5;
      _DAT_01c039a4 = 6;
      if (_DAT_01c02594 == 0) {
        for (; 0 < param_3; param_3 = param_3 + -1) {
          local_28 = *(int *)(param_2 + 0x18);
          local_24 = *(int *)(param_2 + 0x24);
          local_20 = *(int *)(param_2 + 0x30);
          if (*(int *)(param_2 + 4) == 4) {
            local_1c = *(int *)(param_2 + 0x3c);
          }
          if (param_1[8] == 0) {
            *(uint *)(local_28 * 0x30 + *param_1 + 0x18) = *(uint *)(param_2 + 0x1c);
            *(uint *)(*param_1 + local_28 * 0x30 + 0x1c) = *(uint *)(param_2 + 0x20);
            *(uint *)(*param_1 + local_24 * 0x30 + 0x18) = *(uint *)(param_2 + 0x28);
            *(uint *)(local_24 * 0x30 + *param_1 + 0x1c) = *(uint *)(param_2 + 0x2c);
            *(uint *)(*param_1 + local_20 * 0x30 + 0x18) = *(uint *)(param_2 + 0x34);
            *(uint *)(local_20 * 0x30 + *param_1 + 0x1c) = *(uint *)(param_2 + 0x38);
            if (*(int *)(param_2 + 4) == 4) {
              *(uint *)(*param_1 + local_1c * 0x30 + 0x18) = *(uint *)(param_2 + 0x40);
              *(uint *)(local_1c * 0x30 + *param_1 + 0x1c) = *(uint *)(param_2 + 0x44);
            }
          }
          engine_drender_cpp_renderTriangleTextured_FUN_00457a00
                    (&local_28,*(uint *)(param_2 + 4));
          param_2 = param_2 + param_4;
        }
      }
      else {
        iVar3 = 0;
        local_14 = 0;
        if (0 < param_3) {
          local_18 = 0;
          do {
            iVar2 = engine_prim_c_getTriangleWindingFromIndices1_FUN_004f9ad0(param_2);
            if (iVar2 != 0) {
              iVar3 = iVar3 + 1;
              iVar2 = local_18 + 4;
              *(int *)(&DAT_005ae70c + local_18) = param_2;
              local_18 = iVar2;
              if (1999 < iVar3) {
                PTR_01cc4800 = "..\\engine\\drender.cpp";
                INT_01cc4804 = 0x967;
                core_main_c_FUN_004c8440("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar3);
              }
            }
            local_14 = local_14 + 1;
            param_2 = param_2 + param_4;
          } while (local_14 < param_3);
        }
        if (0 < iVar3) {
          engine_special_cpp_drawPolyList_FUN_00532680(*param_1,&DAT_005ae70c,iVar3,_DAT_01c039a0);
          return;
        }
      }
    }
    else {
      _DAT_01c00c7c = core_dstrender_cpp_FUN_00463a79;
      _DAT_01c039a0 = 0;
      _DAT_01c039a4 = _DAT_01c039a0;
      for (; 0 < param_3; param_3 = param_3 + -1) {
        local_28 = *(int *)(param_2 + 0x18);
        local_24 = *(uint *)(param_2 + 0x24);
        local_20 = *(uint *)(param_2 + 0x30);
        if (*(int *)(param_2 + 4) == 4) {
          local_1c = *(int *)(param_2 + 0x3c);
        }
        puVar1 = (uint *)(param_2 + 4);
        param_2 = param_2 + param_4;
        engine_drender_cpp_renderTriangleSimple_FUN_00458080(&local_28,*puVar1);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < param_3) {
      do {
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460(param_1,param_2,param_5);
        iVar3 = iVar3 + 1;
        param_2 = param_2 + param_4;
      } while (iVar3 < param_3);
    }
  }
  return;
}

// Name: FUN_00416300
// Address: 00416300
// Address Range: [[00416300, 00416429]]
// Convention: unknown
// Signature: void FUN_00416300(int param_1,int param_2)

#include "nocturne.h"

void FUN_00416300(int param_1,int param_2)

{
  byte *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte local_20 [24];
  
  if (*(int *)(param_1 + 0x150) == 0) {
    if ((((param_2 != 0) && (*(int *)(param_1 + 0xf10) == 0)) && (*(int *)(param_1 + 0xf08) == 0))
       && (iVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x6c))(param_1),
          puVar1 = PTR_DAT_005ad350, iVar3 == 0)) {
      *(uint *)(param_1 + 0x150) = 1;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (puVar1,"%s going into background\n",param_1);
    }
    if (*(int *)(param_1 + 0x150) == 0) {
      return;
    }
  }
  if ((*(int *)(param_1 + 0x150) != 1) || (*(int *)(param_1 + 0xf08) == 0)) {
    *(uint *)(param_1 + 0x150) = 2;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    *(uint *)(0x01E57284 + 0x15a8a0) = *(uint *)(param_1 + 0xc98);
    uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_20,0);
    iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar2);
    if ((iVar3 != 0) &&
       ((*(int *)(param_1 + 0xc9c) == 0 ||
        (iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704),
        iVar4 != 0)))) {
      core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00416030(param_1,0xffffffff);
    }
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
    *(uint *)(0x01E57284 + 0x15a8a0) = 0;
    *(int *)(param_1 + 0xf14) = iVar3;
  }
  return;
}

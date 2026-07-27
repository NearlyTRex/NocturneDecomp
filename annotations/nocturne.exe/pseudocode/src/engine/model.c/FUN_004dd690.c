// Name: engine_model.c_FUN_004dd690
// Address: 004dd690
// Address Range: [[004dd690, 004dd751]]
// Convention: unknown
// Signature: void engine_model_c_FUN_004dd690(int *param_1)

#include "nocturne.h"

void engine_model_c_FUN_004dd690(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  byte auStack_30 [4];
  uint local_2c;
  char local_28 [16];
  int *local_18;
  int *local_14;
  
  iVar3 = *param_1;
  local_18 = param_1;
  if (iVar3 == 0x26) {
    engine_boss_c_FUN_0041a5e0(param_1);
  }
  else {
    while (iVar3 != 0) {
      iVar3 = *local_18;
      if ((iVar3 == 0xd) || (iVar3 == 0x40)) {
        engine_texture_cpp_ensureTextureLoaded_FUN_00545920(local_18);
      }
      else if ((iVar3 == 0x1d) && (iVar3 = 0, local_14 = local_18, 0 < local_18[2])) {
        piVar4 = local_18 + 7;
        do {
          local_2c = 0;
          pcVar6 = local_28;
          piVar5 = piVar4;
          do {
            iVar2 = *piVar5;
            *pcVar6 = (char)iVar2;
            if ((char)iVar2 == '\0') break;
            cVar1 = *(char *)((int)piVar5 + 1);
            piVar5 = (int *)((int)piVar5 + 2);
            pcVar6[1] = cVar1;
            pcVar6 = pcVar6 + 2;
          } while (cVar1 != '\0');
          engine_texture_cpp_ensureTextureLoaded_FUN_00545920(auStack_30);
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 8;
        } while (iVar3 < local_14[2]);
      }
      piVar4 = local_18;
      iVar3 = engine_model_c_getMRGLSize_FUN_004dd520(local_18);
      local_18 = (int *)((int)piVar4 + iVar3);
      iVar3 = *local_18;
    }
  }
  return;
}

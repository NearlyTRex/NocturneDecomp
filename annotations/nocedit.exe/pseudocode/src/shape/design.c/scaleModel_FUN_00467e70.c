// Name: shape_design.c_scaleModel_FUN_00467e70
// Address: 00467e70
// Address Range: [[00467e70, 00467f24]]
// Convention: __cdecl
// Signature: void shape_design.c_scaleModel_FUN_00467e70(void)

#include "nocturne.h"

void __cdecl shape_design_c_scaleModel_FUN_00467e70(void)

{
  char cVar1;
  float fVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  uint *****pppppuVar4;
  byte bVar5;
  double dVar6;
  uint ****local_68;
  char *in_stack_ffffff9c;
  int local_18;
  
  bVar5 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            ((char *)&local_68,0x14,0,0,"Enter in scale multiplier : ");
  iVar3 = -1;
  pppppuVar4 = &local_68;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *(char *)pppppuVar4;
    pppppuVar4 = (uint *****)((int)pppppuVar4 + (uint)bVar5 * -2 + 1);
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    local_68 = &local_68;
    dVar6 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff9c);
    fVar2 = (float)dVar6;
    for (local_18 = 0; local_18 < g_VertexCount; local_18 = local_18 + 1) {
      g_LoadedVertices[local_18].vertex.x = g_LoadedVertices[local_18].vertex.x * fVar2;
      g_LoadedVertices[local_18].vertex.y = g_LoadedVertices[local_18].vertex.y * fVar2;
      g_LoadedVertices[local_18].vertex.z = g_LoadedVertices[local_18].vertex.z * fVar2;
    }
  }
  return;
}

// Name: shape_design.c_generateOctant_FUN_00469420
// Address: 00469420
// Address Range: [[00469420, 00469687]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_generateOctant_FUN_00469420(void)

#include "nocturne.h"

int __cdecl shape_design_c_generateOctant_FUN_00469420(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  double dVar6;
  char *in_stack_ffffff6c;
  char local_8c [80];
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar5 = 0;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_8c,10,0,0,"Enter in size in heading : ");
  iVar3 = -1;
  iVar2 = 0;
  pcVar4 = local_8c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    local_38 = atoi(local_8c);
    local_1c = (float)90 / (float)local_38;
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_8c,10,0,0xb,"Enter in size in pitch : ")
    ;
    iVar3 = -1;
    iVar2 = 0;
    pcVar4 = local_8c;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      local_34 = atoi(local_8c);
      local_18 = (float)90 / (float)local_34;
      engine_2d_c_getInputWithPrompt_FUN_004032c0(local_8c,10,0,0x16,"Enter in radius : ");
      iVar3 = -1;
      iVar2 = 0;
      pcVar4 = local_8c;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar3 != -2) {
        dVar6 = _strtod(in_stack_ffffff6c);
        local_20 = (float)dVar6;
        iVar2 = SUB84(dVar6,0);
        for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
          for (local_2c = 0; local_2c <= local_34; local_2c = local_2c + 1) {
            for (local_30 = 0; local_30 < local_38; local_30 = local_30 + 1) {
              local_3c = g_VertexCount;
              local_28 = (float)local_30 * local_1c;
              local_24 = (float)90 - (float)local_2c * local_18;
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (local_28,local_24,local_20);
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (local_28 + local_1c,local_24,local_20);
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (local_28 + local_1c,local_24 + local_18,local_20);
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (local_28,local_24 + local_18,local_20);
              shape_design_c_addQuadPolygonOctant_FUN_00469220
                        (local_3c + 3,local_3c + 2,local_3c + 1,local_3c);
            }
          }
          if (local_14 != 7) {
            shape_design_c_realignObject_FUN_0045ee70
                      (g_OctantRotationAngles[local_14],0,g_OctantRotationAngles[local_14 + 7]);
          }
          iVar2 = local_14;
        }
      }
    }
  }
  return iVar2;
}

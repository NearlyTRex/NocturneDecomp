// Name: shape_design.c_generateOctant_FUN_00469420
// Address: 00469420
// MANUAL RECONSTRUCTION
// Address Range: [[00469420, 00469687]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_generateOctant_FUN_00469420(void)

#include "nocturne.h"

int __cdecl shape_design_c_generateOctant_FUN_00469420(void)

{
  char cVar2;
  float radius;
  float heading_angle;
  float fVar3;
  float fVar4;
  float pitch_angle;
  int iVar2;
  int iVar5;
  int iVar3;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar4;
  byte bVar5;
  double dVar6;
  int result;
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
  char cVar1;
  
  bVar5 = 0;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_8c,10,0,0,"Enter in size in heading : ");
  iVar3 = -1;
  iVar2 = 0;
  pcVar8 = local_8c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  result = iVar2;
  if (iVar3 != -2) {
    iVar5 = atoi(local_8c);
    fVar3 = (float)90 / (float)iVar5;
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_8c,10,0,0xb,"Enter in size in pitch : ")
    ;
    iVar6 = -1;
    result = 0;
    pcVar8 = local_8c;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar5 * -2 + 1;
    } while (cVar2 != '\0');
    if (iVar6 != -2) {
      iVar6 = atoi(local_8c);
      fVar4 = (float)90 / (float)iVar6;
      engine_2d_c_getInputWithPrompt_FUN_004032c0(local_8c,10,0,0x16,"Enter in radius : ");
      iVar7 = -1;
      result = 0;
      pcVar4 = local_8c;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4;
      } while (cVar2 != '\0');
      if (iVar7 != -2) {
        dVar6 = _strtod(local_8c);
        radius = (float)dVar6;
        for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
          for (local_2c = 0; local_2c <= iVar6; local_2c = local_2c + 1) {
            for (local_30 = 0; iVar7 = g_VertexCount, local_30 < iVar5; local_30 = local_30 + 1) {
              heading_angle = (float)local_30 * fVar3;
              pitch_angle = (float)90 - (float)local_2c * fVar4;
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (heading_angle,pitch_angle,radius);
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (heading_angle + fVar3,pitch_angle,radius);
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (heading_angle + fVar3,pitch_angle + fVar4,radius);
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (heading_angle,pitch_angle + fVar4,radius);
              shape_design_c_addQuadPolygonOctant_FUN_00469220(iVar7 + 3,iVar7 + 2,iVar7 + 1,iVar7);
            }
          }
          if (local_14 != 7) {
            shape_design_c_realignObject_FUN_0045ee70
                      (g_OctantRotationAngles[local_14],0,g_OctantRotationAngles[local_14 + 7]);
          }
          result = local_14;
        }
      }
    }
  }
  return result;
}

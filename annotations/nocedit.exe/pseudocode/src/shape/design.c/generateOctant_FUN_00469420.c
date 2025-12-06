// Name: shape_design.c_generateOctant_FUN_00469420
// Address: 00469420
// Address Range: [[00469420, 00469687]]
// Convention: __cdecl
// Signature: int shape_design.c_generateOctant_FUN_00469420(void)

#include "nocturne.h"

int __cdecl shape_design_c_generateOctant_FUN_00469420(void)

{
  char cVar1;
  float radius;
  float heading_angle;
  float fVar2;
  float fVar3;
  float pitch_angle;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  byte bVar9;
  double dVar10;
  char *in_stack_ffffff80;
  int local_30;
  int local_2c;
  int local_14;
  
  bVar9 = 0;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff74,10,0,0,"Enter in size in heading : ");
  iVar5 = -1;
  iVar4 = 0;
  pcVar8 = &stack0xffffff74;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar5 != -2) {
    iVar5 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff74);
    fVar2 = (float)90 / (float)iVar5;
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff74,10,0,0xb,"Enter in size in pitch : ");
    iVar6 = -1;
    iVar4 = 0;
    pcVar8 = &stack0xffffff74;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar6 != -2) {
      iVar6 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff74);
      fVar3 = (float)90 / (float)iVar6;
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (&stack0xffffff74,10,0,0x16,"Enter in radius : ");
      iVar7 = -1;
      iVar4 = 0;
      pcVar8 = &stack0xffffff74;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar7 != -2) {
        dVar10 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff80);
        radius = (float)dVar10;
        iVar4 = SUB84 /* extract 2-byte value */(dVar10,0);
        for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
          for (local_2c = 0; local_2c <= iVar6; local_2c = local_2c + 1) {
            for (local_30 = 0; iVar4 = g_VertexCount, local_30 < iVar5; local_30 = local_30 + 1) {
              heading_angle = (float)local_30 * fVar2;
              pitch_angle = (float)90 - (float)local_2c * fVar3;
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (heading_angle,pitch_angle,radius);
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (heading_angle + fVar2,pitch_angle,radius);
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (heading_angle + fVar2,pitch_angle + fVar3,radius);
              shape_design_c_addVertexFromSphericalCoordsOctant_FUN_00469140
                        (heading_angle,pitch_angle + fVar3,radius);
              shape_design_c_addQuadPolygonOctant_FUN_00469220(iVar4 + 3,iVar4 + 2,iVar4 + 1,iVar4);
            }
          }
          if (local_14 != 7) {
            shape_design_c_realignObject_FUN_0045ee70
                      (g_OctantRotationAngles[local_14],0,g_OctantRotationAngles[local_14 + 7]);
          }
          iVar4 = local_14;
        }
      }
    }
  }
  return iVar4;
}

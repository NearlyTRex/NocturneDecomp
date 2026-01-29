// Name: shape_design.c_generateShell_FUN_00468f20
// Address: 00468f20
// Address Range: [[00468f20, 0046913b]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_generateShell_FUN_00468f20(void)

#include "nocturne.h"

void __cdecl shape_design_c_generateShell_FUN_00468f20(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  double dVar5;
  char *in_stack_ffffff70;
  char local_88 [80];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar4 = 0;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_88,10,0,0,"Enter in size in heading : ");
  iVar2 = -1;
  pcVar3 = local_88;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    local_34 = atoi(local_88);
    local_18 = (float)180 / (float)local_34;
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_88,10,0,0xb,"Enter in size in pitch : ")
    ;
    iVar2 = -1;
    pcVar3 = local_88;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      local_30 = atoi(local_88);
      local_14 = (float)180 / (float)local_30;
      engine_2d_c_getInputWithPrompt_FUN_004032c0(local_88,10,0,0x16,"Enter in radius : ");
      iVar2 = -1;
      pcVar3 = local_88;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar2 != -2) {
        dVar5 = _strtod(in_stack_ffffff70);
        local_1c = (float)dVar5;
        for (local_28 = 0; local_28 <= local_30; local_28 = local_28 + 1) {
          for (local_2c = 0; local_2c < local_34; local_2c = local_2c + 1) {
            local_38 = g_VertexCount;
            local_24 = (float)local_2c * local_18;
            local_20 = (float)90 - (float)local_28 * local_14;
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (local_24,local_20,local_1c);
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (local_24 + local_18,local_20,local_1c);
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (local_24 + local_18,local_20 + local_14,local_1c);
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (local_24,local_20 + local_14,local_1c);
            shape_design_c_addQuadPolygonHalfSphere_FUN_00468d20
                      (local_38 + 3,local_38 + 2,local_38 + 1,local_38);
          }
        }
      }
    }
  }
  return;
}

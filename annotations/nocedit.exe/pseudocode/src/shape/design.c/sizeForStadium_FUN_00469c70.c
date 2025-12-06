// Name: shape_design.c_sizeForStadium_FUN_00469c70
// Address: 00469c70
// Address Range: [[00469c70, 00469edd]]
// Convention: __cdecl
// Signature: void shape_design.c_sizeForStadium_FUN_00469c70(void)

#include "nocturne.h"

void __cdecl shape_design_c_sizeForStadium_FUN_00469c70(void)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  char *in_stack_ffffff28;
  char *in_stack_ffffff30;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  
  bVar9 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(&stack0xffffff18,0x14,0,0,"Enter in X point : ")
  ;
  iVar5 = -1;
  pcVar8 = &stack0xffffff18;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar5 != -2) {
    iVar5 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff18);
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff18,0x14,0,0xb,"Enter in Z point : ");
    iVar6 = -1;
    pcVar8 = &stack0xffffff18;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar6 != -2) {
      iVar6 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff18);
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (&stack0xffffff18,0x14,0,0x16,"Enter in X size : ");
      iVar7 = -1;
      pcVar8 = &stack0xffffff18;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar7 != -2) {
        dVar10 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff28);
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (&stack0xffffff18,0x14,0,0x21,"Enter in Z size : ");
        iVar7 = -1;
        pcVar8 = &stack0xffffff18;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar7 != -2) {
          dVar11 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff30);
          local_44 = 999999.9;
          local_40 = -999999.9;
          local_3c = 999999.9;
          local_38 = -999999.9;
          for (local_48 = 0; local_48 < g_VertexCount; local_48 = local_48 + 1) {
            fVar2 = g_LoadedVertices[local_48].vertex.x;
            if (local_40 < fVar2) {
              local_40 = fVar2;
            }
            if (fVar2 < local_44) {
              local_44 = fVar2;
            }
            fVar2 = g_LoadedVertices[local_48].vertex.z;
            if (local_38 < fVar2) {
              local_38 = fVar2;
            }
            if (fVar2 < local_3c) {
              local_3c = fVar2;
            }
          }
          fVar2 = (float)dVar10 / g_LoadedVertices[iVar5].vertex.x;
          fVar3 = (float)dVar11 / g_LoadedVertices[iVar6].vertex.z;
          fVar4 = (float)0.5;
          for (local_48 = 0; local_48 < g_VertexCount; local_48 = local_48 + 1) {
            g_LoadedVertices[local_48].vertex.x = g_LoadedVertices[local_48].vertex.x * fVar2;
            g_LoadedVertices[local_48].vertex.y =
                 g_LoadedVertices[local_48].vertex.y * (fVar2 + fVar3) * fVar4;
            g_LoadedVertices[local_48].vertex.z = g_LoadedVertices[local_48].vertex.z * fVar3;
          }
        }
      }
    }
  }
  return;
}

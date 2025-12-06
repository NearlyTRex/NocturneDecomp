// Name: shape_design.c_scaleXYZ_FUN_00467f30
// Address: 00467f30
// Address Range: [[00467f30, 00467ff3]]
// Convention: __cdecl
// Signature: void shape_design.c_scaleXYZ_FUN_00467f30(void)

#include "nocturne.h"

void __cdecl shape_design_c_scaleXYZ_FUN_00467f30(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar4 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff90,0x32,0,0,"Enter X,Y,Z scales : ");
  iVar2 = -1;
  pcVar3 = &stack0xffffff90;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if ((iVar2 != -2) &&
     (iVar2 = crt_stdio_c_sscanf_FUN_0060013c(&stack0xffffff90,"%f,%f,%f",&local_1c),
     iVar2 == 3)) {
    for (local_20 = 0; local_20 < g_VertexCount; local_20 = local_20 + 1) {
      g_LoadedVertices[local_20].vertex.x = g_LoadedVertices[local_20].vertex.x * local_1c;
      g_LoadedVertices[local_20].vertex.y = g_LoadedVertices[local_20].vertex.y * local_18;
      g_LoadedVertices[local_20].vertex.z = g_LoadedVertices[local_20].vertex.z * local_14;
    }
  }
  return;
}

// Name: shape_design.c_combineTextureMaps_FUN_00469ee0
// Address: 00469ee0
// MANUAL RECONSTRUCTION
// Address Range: [[00469ee0, 0046a17c]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_combineTextureMaps_FUN_00469ee0(void)

#include "nocturne.h"

void __cdecl shape_design_c_combineTextureMaps_FUN_00469ee0(void)

{
  int iVar2;
  char local_134 [80];
  char local_e4 [80];
  char local_94 [80];
  int local_44;
  _FILE *local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c [3];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fVar3;
  float fVar1;

  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_94,0x46,0,0,"Enter response file :");
  if (local_94[0] != '\0') {
    local_40 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (local_94,(char *)0x0,"rt","..\\shape\\design.c",9633);
    if (local_40 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\shape\\design.c";
      g_CurrentLineNumber = 9634;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Bad name");
    }
    _fscanf(local_40,"%s\n",local_134);
    _fscanf(local_40,"%f,%f\n",&local_30,local_2c);
    _fscanf(local_40,"%d\n",&local_44);
    for (local_38 = 0; local_38 < local_44; local_38 = local_38 + 1) {
      _fscanf(local_40,"%s\n",local_e4);
      _fscanf(local_40,"%f,%f,%f,%f\n",&local_20,&local_1c,&local_18,&local_14);
      for (local_34 = 0; local_34 < g_PolygonCount; local_34 = local_34 + 1) {
        iVar2 = _strcmp
                          (g_ModelPolygonData[local_34].texture_name,local_e4);
        if (iVar2 == 0) {
          strcpy(g_ModelPolygonData[local_34].texture_name,local_134);
          for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
            fVar1 = g_ModelPolygonData[local_34].uv_v[local_3c];
            fVar3 = (float)0.0039215686274509803;
            g_ModelPolygonData[local_34].uv_u[local_3c] =
                 ((local_18 *
                   g_ModelPolygonData[local_34].uv_u[local_3c] * (float)0.0039215686274509803 +
                  local_20) / local_30) * (float)255;
            g_ModelPolygonData[local_34].uv_v[local_3c] =
                 ((local_14 * fVar1 * fVar3 + local_1c) / local_2c[0]) * (float)255;
          }
        }
      }
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_40,"..\\shape\\design.c",9690);
  }
  return;
}

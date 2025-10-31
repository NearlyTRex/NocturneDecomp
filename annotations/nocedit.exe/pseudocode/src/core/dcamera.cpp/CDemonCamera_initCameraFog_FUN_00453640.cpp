// Name: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
// Address: 00453640
// Address Range: [[00453640, 004536fe]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera * this_ptr, SFog * fog_config)
// Cross-references:
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056aa7b [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b370 [UNCONDITIONAL_CALL]
// Globals:
//   double g_CameraFogFixedPointScale16 = 65536
//   double g_CameraFogFixedPointScale8 = 256
//   int g_FogColorIndexR = 0x40
//   int g_FogColorIndexG = 0x40
//   int g_FogColorIndexB = 0x40
//   uint[256] g_LightmapTexturePalette
//   undefined4 g_CameraFogGrid.scroll_vector.x
//   undefined4 g_CameraFogGrid.scroll_vector.y
//   undefined4 g_CameraFogGrid.scroll_vector.z
//   undefined4 g_CameraFogGrid.height_threshold
//   undefined4 g_CameraFogGrid.density_multiplier
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   wincore_windll.cpp_setFogColor_FUN_005b7b80

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_initCameraFog_FUN_00453640(CDemonCamera *this_ptr,SFog *fog_config)

{
  int iVar1;
  undefined4 extraout_EDX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  
  g_FogColorIndexR = (fog_config->color_index).r;
  g_FogColorIndexG = (fog_config->color_index).g;
  g_FogColorIndexB = (fog_config->color_index).b;
  iVar1 = wincore_windll_cpp_setFogColor_FUN_005b7b80
                    (g_LightmapTexturePalette[(fog_config->color_index).r] & 0xff,
                     g_LightmapTexturePalette[(fog_config->color_index).g] & 0xff,
                     g_LightmapTexturePalette[g_FogColorIndexB] & 0xff);
  fVar2 = (float10)g_CameraFogFixedPointScale16;
  fVar3 = (float10)(fog_config->scroll).x * fVar2;
  fVar4 = (float10)(fog_config->scroll).y * fVar2;
  fVar5 = (float10)(fog_config->scroll).z * fVar2;
  fVar6 = (float10)fog_config->height_threshold * (float10)g_CameraFogFixedPointScale8;
  fVar2 = (float10)fog_config->density_multiplier * fVar2;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,iVar1));
  dVar7 = crt_math_c_round_FUN_005fe6b0(dVar7);
  dVar7 = crt_math_c_round_FUN_005fe6b0(dVar7);
  dVar7 = crt_math_c_round_FUN_005fe6b0(dVar7);
  crt_math_c_round_FUN_005fe6b0(dVar7);
  g_CameraFogGrid.scroll_vector.x = (int)ROUND(fVar3);
  g_CameraFogGrid.scroll_vector.y = (int)ROUND(fVar4);
  g_CameraFogGrid.scroll_vector.z = (int)ROUND(fVar5);
  g_CameraFogGrid.height_threshold = (int)ROUND(fVar6);
  g_CameraFogGrid.density_multiplier = (int)ROUND(fVar2);
  return;
}


// Assembly code:
// 00453640: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640
// 00453641: PUSH EBP
// 00453642: MOV EBP,ESP
// 00453644: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00453647: MOV EAX,dword ptr [EBX]
// 00453649: MOV [0x0066ed04],EAX
//   XREF to: 0066ed04 (WRITE)
// 0045364e: MOV EAX,dword ptr [EBX + 0x4]
// 00453651: MOV [0x0066ed08],EAX
//   XREF to: 0066ed08 (WRITE)
// 00453656: MOV EAX,dword ptr [EBX + 0x8]
// 00453659: MOV [0x0066ed0c],EAX
//   XREF to: 0066ed0c (WRITE)
// 0045365e: MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00453665: AND EAX,0xff
// 0045366a: PUSH EAX
// 0045366b: MOV EAX,dword ptr [EBX + 0x4]
// 0045366e: MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00453675: AND EAX,0xff
// 0045367a: PUSH EAX
// 0045367b: MOV EAX,dword ptr [EBX]
// 0045367d: MOV EAX,dword ptr [EAX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00453684: AND EAX,0xff
// 00453689: PUSH EAX
// 0045368a: CALL wincore_windll.cpp_setFogColor_FUN_005b7b80
//   XREF to: 005b7b80 (UNCONDITIONAL_CALL)
// 0045368f: FLD double ptr [0x0061a442]
//   XREF to: 0061a442 (READ)
// 00453695: FLD float ptr [EBX + 0xc]
// 00453698: FMUL ST1
// 0045369a: FLD float ptr [EBX + 0x10]
// 0045369d: FMUL ST2
// 0045369f: FLD float ptr [EBX + 0x14]
// 004536a2: FMUL ST3
// 004536a4: FLD float ptr [EBX + 0x18]
// 004536a7: FMUL double ptr [0x0061a44a]
//   XREF to: 0061a44a (READ)
// 004536ad: FLD float ptr [EBX + 0x1c]
// 004536b0: FMULP ST5
// 004536b2: ADD ESP,0xc
// 004536b5: FXCH ST3
// 004536b7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004536bc: FXCH ST2
// 004536be: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004536c3: FXCH
// 004536c5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004536ca: FXCH ST3
// 004536cc: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004536d1: FXCH ST4
// 004536d3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004536d8: FXCH ST2
// 004536da: FISTP dword ptr [0x0151a390]
//   XREF to: 0151a390 (WRITE)
// 004536e0: FISTP dword ptr [0x0151a394]
//   XREF to: 0151a394 (WRITE)
// 004536e6: FXCH
// 004536e8: FISTP dword ptr [0x0151a398]
//   XREF to: 0151a398 (WRITE)
// 004536ee: FXCH
// 004536f0: FISTP dword ptr [0x0151a39c]
//   XREF to: 0151a39c (WRITE)
// 004536f6: FISTP dword ptr [0x0151a3a0]
//   XREF to: 0151a3a0 (WRITE)
// 004536fc: POP EBP
// 004536fd: POP EBX
// 004536fe: RET

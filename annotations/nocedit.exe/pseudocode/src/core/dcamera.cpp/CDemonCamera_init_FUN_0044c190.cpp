// Name: core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
// Address: 0044c190
// Address Range: [[0044c190, 0044c354]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_init_FUN_0044c190(CDemonCamera * this_ptr, int screen_height)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044c0f0 (0044c0f0) at 0044c111 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_setGameRes_FUN_004dade0 (004dade0) at 004dae7d [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_CallToDemonCameraInitAndSetView_FUN_0056b7e0 (0056b7e0) at 0056b7ea [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057d9a2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dcamera_cpp_00619eda
//   TerminatedCString s_core_dcamera_cpp_00619eee
//   TerminatedCString s_CDemonCamera_init_Unable_00619f02
//   TerminatedCString s_core_dcamera_cpp_00619f34
//   TerminatedCString s_core_dcamera_cpp_00619f48
//   TerminatedCString s_CDemonCamera_init_Unable_00619f5c
//   int g_CameraDownscaleIterations
//   int g_CameraScreenWidth
//   int g_CameraScreenHeight
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dcamera.cpp_CDemonCamera_free_FUN_0044c360
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(CDemonCamera *this_ptr,int screen_height)

{
  int iVar1;
  void *pvVar2;
  
  core_dcamera_cpp_CDemonCamera_free_FUN_0044c360(this_ptr);
  g_CameraScreenWidth = (screen_height * 4) / 3;
  g_CameraScreenHeight = screen_height;
  if (0x1e0 < screen_height) {
    screen_height = 0x1e0;
  }
  this_ptr->framebuffer_height = screen_height;
  this_ptr->scale_factor = 1;
  this_ptr->framebuffer_width = (screen_height * 4) / 3;
  this_ptr->display_width = this_ptr->framebuffer_width;
  g_CameraDownscaleIterations = 0;
  iVar1 = this_ptr->display_width;
  this_ptr->display_height = this_ptr->framebuffer_height;
  while (0x140 < iVar1) {
    this_ptr->display_width = this_ptr->display_width / 2;
    g_CameraDownscaleIterations = g_CameraDownscaleIterations + 1;
    this_ptr->scale_factor = this_ptr->scale_factor * 2;
    iVar1 = this_ptr->display_width;
    this_ptr->display_height = this_ptr->display_height / 2;
  }
  pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->framebuffer_width * this_ptr->framebuffer_height * 4 + 0x1010,
                      "..\\core\\dcamera.cpp",0x240);
  this_ptr->framebuffer_raw = pvVar2;
  if (pvVar2 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 0x241;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::init - Unable to alloc frame buffer");
  }
  pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->framebuffer_width * this_ptr->framebuffer_height * 4 + 0x1010,
                      "..\\core\\dcamera.cpp",0x245);
  this_ptr->zbuffer_raw = pvVar2;
  if (pvVar2 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\dcamera.cpp";
    g_CurrentLineNumber = 0x246;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::init - Unable to alloc z buffer");
  }
  this_ptr->framebuffer_aligned = (void *)((int)this_ptr->framebuffer_raw + 0x10U & 0xfffffff0);
  this_ptr->zbuffer_aligned = (void *)((int)this_ptr->zbuffer_raw + 0x10U & 0xfffffff0);
  return;
}


// Assembly code:
// 0044c190: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
// 0044c191: PUSH ESI
// 0044c192: PUSH EBP
// 0044c193: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0044c197: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0044c19b: PUSH EBX
// 0044c19c: CALL core_dcamera.cpp_CDemonCamera_free_FUN_0044c360
//   XREF to: 0044c360 (UNCONDITIONAL_CALL)
// 0044c1a1: LEA EDX,[ESI*0x4 + 0x0]
// 0044c1a8: MOV ECX,0x3
// 0044c1ad: MOV EAX,EDX
// 0044c1af: SAR EDX,0x1f
// 0044c1b2: IDIV ECX
// 0044c1b4: ADD ESP,0x4
// 0044c1b7: MOV dword ptr [0x0151a3a8],ESI
//   XREF to: 0151a3a8 (WRITE)
// 0044c1bd: MOV [0x0151a3a4],EAX
//   XREF to: 0151a3a4 (WRITE)
// 0044c1c2: CMP ESI,0x1e0
// 0044c1c8: JLE 0x0044c1cf
//   XREF to: 0044c1cf (CONDITIONAL_JUMP)
// 0044c1ca: MOV ESI,0x1e0
// 0044c1cf: MOV dword ptr [EBX + 0x148],ESI
//   Label: LAB_0044c1cf
// 0044c1d5: LEA EDX,[ESI*0x4 + 0x0]
// 0044c1dc: MOV ECX,0x3
// 0044c1e1: MOV EAX,EDX
// 0044c1e3: SAR EDX,0x1f
// 0044c1e6: IDIV ECX
// 0044c1e8: MOV dword ptr [EBX + 0x14c],0x1
// 0044c1f2: MOV dword ptr [EBX + 0x144],EAX
// 0044c1f8: MOV EAX,dword ptr [EBX + 0x144]
// 0044c1fe: XOR EDX,EDX
// 0044c200: MOV dword ptr [EBX + 0x150],EAX
// 0044c206: MOV dword ptr [0x013bc260],EDX
//   XREF to: 013bc260 (WRITE)
// 0044c20c: MOV EAX,dword ptr [EBX + 0x148]
// 0044c212: MOV ECX,dword ptr [EBX + 0x150]
// 0044c218: MOV dword ptr [EBX + 0x154],EAX
// 0044c21e: CMP ECX,0x140
// 0044c224: JLE 0x0044c27c
//   XREF to: 0044c27c (CONDITIONAL_JUMP)
// 0044c226: PUSH EDI
// 0044c227: MOV ECX,0x2
// 0044c22c: MOV EAX,dword ptr [EBX + 0x150]
//   Label: LAB_0044c22c
// 0044c232: MOV EDX,EAX
// 0044c234: SAR EDX,0x1f
// 0044c237: IDIV ECX
// 0044c239: MOV dword ptr [EBX + 0x150],EAX
// 0044c23f: MOV EAX,dword ptr [EBX + 0x154]
// 0044c245: MOV EDX,EAX
// 0044c247: SAR EDX,0x1f
// 0044c24a: IDIV ECX
// 0044c24c: MOV ESI,dword ptr [EBX + 0x14c]
// 0044c252: MOV EDI,dword ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 0044c258: ADD ESI,ESI
// 0044c25a: INC EDI
// 0044c25b: MOV dword ptr [EBX + 0x14c],ESI
// 0044c261: MOV dword ptr [0x013bc260],EDI
//   XREF to: 013bc260 (WRITE)
// 0044c267: MOV EBP,dword ptr [EBX + 0x150]
// 0044c26d: MOV dword ptr [EBX + 0x154],EAX
// 0044c273: CMP EBP,0x140
// 0044c279: JG 0x0044c22c
//   XREF to: 0044c22c (CONDITIONAL_JUMP)
// 0044c27b: POP EDI
// 0044c27c: MOV EDX,dword ptr [EBX + 0x144]
//   Label: LAB_0044c27c
// 0044c282: IMUL EDX,dword ptr [EBX + 0x148]
// 0044c289: PUSH 0x240
// 0044c28e: LEA EAX,[EDX*0x4 + 0x0]
// 0044c295: PUSH 0x619eda
//   XREF to: 00619eda (DATA)
// 0044c29a: ADD EAX,0x1010
// 0044c29f: PUSH EAX
// 0044c2a0: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0044c2a5: ADD ESP,0xc
// 0044c2a8: MOV dword ptr [EBX + 0x160],EAX
// 0044c2ae: TEST EAX,EAX
// 0044c2b0: JNZ 0x0044c2d5
//   XREF to: 0044c2d5 (CONDITIONAL_JUMP)
// 0044c2b2: MOV ECX,0x619eee
//   XREF to: 00619eee (PARAM)
// 0044c2b7: MOV ESI,0x241
// 0044c2bc: PUSH 0x619f02
//   XREF to: 00619f02 (DATA)
// 0044c2c1: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0044c2c7: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0044c2cd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0044c2d2: ADD ESP,0x4
// 0044c2d5: MOV EDX,dword ptr [EBX + 0x144]
//   Label: LAB_0044c2d5
// 0044c2db: IMUL EDX,dword ptr [EBX + 0x148]
// 0044c2e2: PUSH 0x245
// 0044c2e7: LEA EAX,[EDX*0x4 + 0x0]
// 0044c2ee: PUSH 0x619f34
//   XREF to: 00619f34 (DATA)
// 0044c2f3: ADD EAX,0x1010
// 0044c2f8: PUSH EAX
// 0044c2f9: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0044c2fe: ADD ESP,0xc
// 0044c301: MOV dword ptr [EBX + 0x164],EAX
// 0044c307: TEST EAX,EAX
// 0044c309: JZ 0x0044c331
//   XREF to: 0044c331 (CONDITIONAL_JUMP)
// 0044c30b: MOV EAX,dword ptr [EBX + 0x160]
//   Label: LAB_0044c30b
// 0044c311: ADD EAX,0x10
// 0044c314: AND AL,0xf0
// 0044c316: MOV dword ptr [EBX + 0x158],EAX
// 0044c31c: MOV EAX,dword ptr [EBX + 0x164]
// 0044c322: ADD EAX,0x10
// 0044c325: AND AL,0xf0
// 0044c327: MOV dword ptr [EBX + 0x15c],EAX
// 0044c32d: POP EBP
// 0044c32e: POP ESI
// 0044c32f: POP EBX
// 0044c330: RET
// 0044c331: MOV EAX,0x619f48
//   Label: LAB_0044c331
//   XREF to: 00619f48 (PARAM)
// 0044c336: MOV EDX,0x246
// 0044c33b: PUSH 0x619f5c
//   XREF to: 00619f5c (DATA)
// 0044c340: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0044c345: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0044c34b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0044c350: ADD ESP,0x4
// 0044c353: JMP 0x0044c30b
//   XREF to: 0044c30b (UNCONDITIONAL_JUMP)

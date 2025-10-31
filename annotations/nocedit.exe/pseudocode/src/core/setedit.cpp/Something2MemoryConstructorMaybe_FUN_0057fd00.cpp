// Name: core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00
// Address: 0057fd00
// Address Range: [[0057fd00, 0057ff02]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00()
// Cross-references:
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057adcc [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057e188 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setedit_cpp_0064851d
//   TerminatedCString s_core_setedit_cpp_00648531
//   TerminatedCString s_Out_of_memory_00648545
//   TerminatedCString s_core_setedit_cpp_00648553
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   char* g_CurrentDebugFilename = 0067d200
//   CDemonRenderer g_CDemonRendererInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 g_ScreenHeightForFonts
//   undefined4 g_CDemonCameraInstance.framebuffer_height
// Function calls:
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_memset_FUN_005fde40
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_Something2MemoryConstructorMaybe(undefined4 param_1,
   undefined4 param_2, undefined4 param_3) */

void core_setedit_cpp_Something2MemoryConstructorMaybe_FUN_0057fd00(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  byte bVar5;
  int *in_stack_00000004;
  void *in_stack_00000008;
  int in_stack_0000000c;
  int aiStackY_1038 [1016];
  int iVar6;
  CVector3i *in_stack_ffffffc0;
  CVector3i *in_stack_ffffffc4;
  int *local_2c;
  CBoundingBox3D *local_28;
  CVector3i *local_24;
  CVector3f *local_20;
  int local_1c;
  CVector3i *local_18;
  int local_14;
  
  bVar5 = 0;
  core_setedit_cpp_SomethingMemoryConstructorMaybe_FUN_00580310();
  crt_memory_c_memset_FUN_005fde40(in_stack_00000008,0,g_WindowWidth * g_WindowHeight);
  local_2c = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              (g_CDemonCameraInstance.framebuffer_height *
                               g_CDemonCameraInstance.framebuffer_width * 0xc,
                               "..\\core\\setedit.cpp",0xf22);
  if (local_2c == (int *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xf23;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  piVar3 = local_2c;
  for (local_1c = 0; local_1c < g_CDemonCameraInstance.framebuffer_height; local_1c = local_1c + 1)
  {
    local_18 = (CVector3i *)0x0;
    while( true ) {
      if (g_CDemonCameraInstance.framebuffer_width <= (int)local_18) break;
      iVar6 = 0x57fdca;
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                (&g_CDemonCameraInstance,local_18,local_1c,(int)in_stack_ffffffc0);
      *(undefined4 *)(&stack0xffffffc0 + (uint)bVar5 * -8) =
           *(undefined4 *)(&stack0xffffffcc + (uint)bVar5 * -8);
      *(undefined4 *)(&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(undefined4 *)(&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if ((int)in_stack_ffffffc4 < 0x40000000) {
        in_stack_ffffffc0 = (CVector3i *)&stack0xffffffbc;
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (&g_CDemonCameraInstance,in_stack_ffffffc0,in_stack_ffffffc4);
        *piVar3 = iVar6;
        piVar3[(uint)bVar5 * -2 + 1] = *(int *)(&stack0xffffffb4 + (uint)bVar5 * -8);
        (piVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
             *(int *)(&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      }
      else {
        *piVar3 = 0x7fffffff;
      }
      local_18 = (CVector3i *)((int)&local_18->x + 1);
      piVar3 = piVar3 + 3;
    }
  }
  core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
  local_14 = 0;
  if (0 < *in_stack_00000004) {
    local_28 = (CBoundingBox3D *)(in_stack_00000004 + 0x60);
    local_24 = (CVector3i *)(in_stack_00000004 + 0x44);
    local_20 = (CVector3f *)(in_stack_00000004 + 0x41);
    do {
      if (local_14 != in_stack_0000000c) {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,local_20);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,local_24,(CVector3i *)0x0);
        iVar6 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(local_28);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        if (iVar6 != 0) {
          iVar6 = 0;
          piVar3 = local_2c;
          while (iVar6 < g_CDemonCameraInstance.framebuffer_height) {
            iVar4 = 0;
            if (g_CDemonCameraInstance.framebuffer_width < 1) {
              iVar6 = iVar6 + 1;
            }
            else {
              do {
                if (*piVar3 < 0x7fffffff) {
                  iVar1 = core_setedit_cpp_FUN_005801b0();
                  if (iVar1 != 0) {
                    pcVar2 = (char *)(g_WindowWidth * iVar6 + iVar4 + (int)in_stack_00000008);
                    *pcVar2 = *pcVar2 + '\x01';
                  }
                }
                iVar4 = iVar4 + 1;
                piVar3 = piVar3 + 3;
              } while (iVar4 < g_CDemonCameraInstance.framebuffer_width);
              iVar6 = iVar6 + 1;
            }
          }
        }
      }
      local_28 = (CBoundingBox3D *)&local_28[0x11].max;
      local_24 = local_24 + 0x23;
      local_14 = local_14 + 1;
      local_20 = local_20 + 0x23;
    } while (local_14 < *in_stack_00000004);
  }
  core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
  g_CurrentDebugLine = 0xf73;
  g_CurrentDebugFilename = "..\\core\\setedit.cpp";
  crt_memory_c_free_FUN_005fe659(local_2c);
  return;
}


// Assembly code:
// 0057fd00: PUSH EBX
//   Label: core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00
// 0057fd01: PUSH ESI
// 0057fd02: PUSH EDI
// 0057fd03: PUSH EBP
// 0057fd04: MOV EBP,ESP
// 0057fd06: SUB ESP,0x40
// 0057fd09: MOV EDX,dword ptr [EBP + 0x14]
// 0057fd0c: PUSH EDX
// 0057fd0d: CALL core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310
//   XREF to: 00580310 (UNCONDITIONAL_CALL)
// 0057fd12: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057fd17: IMUL EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0057fd1e: ADD ESP,0x4
// 0057fd21: PUSH EAX
// 0057fd22: PUSH 0x0
// 0057fd24: MOV EBX,dword ptr [EBP + 0x18]
// 0057fd27: PUSH EBX
// 0057fd28: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0057fd2d: MOV EBX,dword ptr [0x03275a2c]
//   XREF to: 03275a2c (READ)
// 0057fd33: MOV EAX,[0x03275a28]
//   XREF to: 03275a28 (READ)
// 0057fd38: IMUL EBX,EAX
// 0057fd3b: ADD ESP,0xc
// 0057fd3e: LEA EAX,[EBX*0x4 + 0x0]
// 0057fd45: PUSH 0xf22
// 0057fd4a: SUB EAX,EBX
// 0057fd4c: PUSH 0x64851d
//   XREF to: 0064851d (DATA)
// 0057fd51: SHL EAX,0x2
// 0057fd54: PUSH EAX
// 0057fd55: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0057fd5a: ADD ESP,0xc
// 0057fd5d: MOV dword ptr [EBP + -0x1c],EAX
// 0057fd60: TEST EAX,EAX
// 0057fd62: JZ 0x0057fd90
//   XREF to: 0057fd90 (CONDITIONAL_JUMP)
// 0057fd64: XOR EAX,EAX
//   Label: LAB_0057fd64
// 0057fd66: MOV EBX,dword ptr [EBP + -0x1c]
// 0057fd69: MOV dword ptr [EBP + -0xc],EAX
// 0057fd6c: MOV EDX,dword ptr [EBP + -0xc]
//   Label: LAB_0057fd6c
// 0057fd6f: CMP EDX,dword ptr [0x03275a2c]
//   XREF to: 03275a2c (READ)
// 0057fd75: JGE 0x0057fe11
//   XREF to: 0057fe11 (CONDITIONAL_JUMP)
// 0057fd7b: XOR ESI,ESI
// 0057fd7d: MOV dword ptr [EBP + -0x8],ESI
// 0057fd80: MOV EDI,dword ptr [EBP + -0x8]
//   Label: LAB_0057fd80
// 0057fd83: CMP EDI,dword ptr [0x03275a28]
//   XREF to: 03275a28 (READ)
// 0057fd89: JL 0x0057fdb5
//   XREF to: 0057fdb5 (CONDITIONAL_JUMP)
// 0057fd8b: INC dword ptr [EBP + -0xc]
// 0057fd8e: JMP 0x0057fd6c
//   XREF to: 0057fd6c (UNCONDITIONAL_JUMP)
// 0057fd90: MOV ESI,0x648531
//   Label: LAB_0057fd90
//   XREF to: 00648531 (DATA)
// 0057fd95: MOV EDI,0xf23
// 0057fd9a: PUSH 0x648545
//   XREF to: 00648545 (DATA)
// 0057fd9f: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0057fda5: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0057fdab: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057fdb0: ADD ESP,0x4
// 0057fdb3: JMP 0x0057fd64
//   XREF to: 0057fd64 (UNCONDITIONAL_JUMP)
// 0057fdb5: MOV EDX,dword ptr [EBP + -0xc]
//   Label: LAB_0057fdb5
// 0057fdb8: PUSH EDX
// 0057fdb9: PUSH EDI
// 0057fdba: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0057fdbf: LEA ESI,[EBP + -0x28]
// 0057fdc2: LEA EDI,[EBP + -0x34]
// 0057fdc5: CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
// 0057fdca: LEA ESI,[EBP + -0x28]
// 0057fdcd: MOVSD ES:EDI,ESI
// 0057fdce: MOVSD ES:EDI,ESI
// 0057fdcf: MOVSD ES:EDI,ESI
// 0057fdd0: MOV ESI,dword ptr [EBP + -0x2c]
// 0057fdd3: ADD ESP,0xc
// 0057fdd6: CMP ESI,0x3fffffff
// 0057fddc: JLE 0x0057fde6
//   XREF to: 0057fde6 (CONDITIONAL_JUMP)
// 0057fdde: MOV dword ptr [EBX],0x7fffffff
// 0057fde4: JMP 0x0057fe02
//   XREF to: 0057fe02 (UNCONDITIONAL_JUMP)
// 0057fde6: LEA EAX,[EBP + -0x34]
//   Label: LAB_0057fde6
// 0057fde9: PUSH EAX
// 0057fdea: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0057fdef: LEA ESI,[EBP + -0x40]
// 0057fdf2: MOV EDI,EBX
// 0057fdf4: CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   XREF to: 0044d370 (UNCONDITIONAL_CALL)
// 0057fdf9: LEA ESI,[EBP + -0x40]
// 0057fdfc: ADD ESP,0x8
// 0057fdff: MOVSD ES:EDI,ESI
// 0057fe00: MOVSD ES:EDI,ESI
// 0057fe01: MOVSD ES:EDI,ESI
// 0057fe02: MOV EDI,dword ptr [EBP + -0x8]
//   Label: LAB_0057fe02
// 0057fe05: INC EDI
// 0057fe06: ADD EBX,0xc
// 0057fe09: MOV dword ptr [EBP + -0x8],EDI
// 0057fe0c: JMP 0x0057fd80
//   XREF to: 0057fd80 (UNCONDITIONAL_JUMP)
// 0057fe11: PUSH 0x0
//   Label: LAB_0057fe11
// 0057fe13: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0057fe18: CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   XREF to: 0044c430 (UNCONDITIONAL_CALL)
// 0057fe1d: MOV EAX,dword ptr [EBP + 0x14]
// 0057fe20: ADD ESP,0x8
// 0057fe23: XOR ECX,ECX
// 0057fe25: MOV EBX,dword ptr [EAX]
// 0057fe27: MOV dword ptr [EBP + -0x4],ECX
// 0057fe2a: TEST EBX,EBX
// 0057fe2c: JLE 0x0057fe89
//   XREF to: 0057fe89 (CONDITIONAL_JUMP)
// 0057fe2e: ADD EAX,0x180
// 0057fe33: MOV dword ptr [EBP + -0x18],EAX
// 0057fe36: MOV EAX,dword ptr [EBP + 0x14]
// 0057fe39: ADD EAX,0x110
// 0057fe3e: MOV dword ptr [EBP + -0x14],EAX
// 0057fe41: MOV EAX,dword ptr [EBP + 0x14]
// 0057fe44: ADD EAX,0x104
// 0057fe49: MOV dword ptr [EBP + -0x10],EAX
// 0057fe4c: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0057fe4c
// 0057fe4f: CMP EAX,dword ptr [EBP + 0x1c]
// 0057fe52: JNZ 0x0057fec1
//   XREF to: 0057fec1 (CONDITIONAL_JUMP)
// 0057fe54: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_0057fe54
// 0057fe57: MOV EDX,dword ptr [EBP + -0x14]
// 0057fe5a: MOV ECX,dword ptr [EBP + -0x10]
// 0057fe5d: MOV EBX,dword ptr [EBP + -0x4]
// 0057fe60: ADD EAX,0x1a4
// 0057fe65: ADD EDX,0x1a4
// 0057fe6b: INC EBX
// 0057fe6c: MOV dword ptr [EBP + -0x18],EAX
// 0057fe6f: MOV dword ptr [EBP + -0x4],EBX
// 0057fe72: MOV EAX,EBX
// 0057fe74: MOV EBX,dword ptr [EBP + 0x14]
// 0057fe77: ADD ECX,0x1a4
// 0057fe7d: MOV dword ptr [EBP + -0x14],EDX
// 0057fe80: MOV ESI,dword ptr [EBX]
// 0057fe82: MOV dword ptr [EBP + -0x10],ECX
// 0057fe85: CMP EAX,ESI
// 0057fe87: JL 0x0057fe4c
//   XREF to: 0057fe4c (CONDITIONAL_JUMP)
// 0057fe89: PUSH 0x0
//   Label: LAB_0057fe89
// 0057fe8b: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0057fe90: MOV EBX,0xf73
// 0057fe95: CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
// 0057fe9a: ADD ESP,0x8
// 0057fe9d: MOV ESI,dword ptr [EBP + -0x1c]
// 0057fea0: MOV ECX,0x648553
//   XREF to: 00648553 (DATA)
// 0057fea5: PUSH ESI
// 0057fea6: MOV dword ptr [0x02f0d944],EBX
//   XREF to: 02f0d944 (WRITE)
// 0057feac: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0057feb2: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0057feb7: ADD ESP,0x4
// 0057feba: MOV ESP,EBP
// 0057febc: POP EBP
// 0057febd: POP EDI
// 0057febe: POP ESI
// 0057febf: POP EBX
// 0057fec0: RET
// 0057fec1: MOV EAX,dword ptr [EBP + -0x10]
//   Label: LAB_0057fec1
// 0057fec4: PUSH EAX
// 0057fec5: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0057fecb: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0057fecc: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0057fed1: ADD ESP,0x8
// 0057fed4: PUSH 0x0
// 0057fed6: MOV ECX,dword ptr [EBP + -0x14]
// 0057fed9: PUSH ECX
// 0057feda: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
//   XREF to: 02c6d578 (PARAM)
// 0057fee0: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0057fee1: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 0057fee6: ADD ESP,0xc
// 0057fee9: MOV ESI,dword ptr [EBP + -0x18]
// 0057feec: PUSH ESI
// 0057feed: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0057fef2: ADD ESP,0x4
// 0057fef5: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0057fefb: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0057fefc: MOV EBX,EAX
// 0057fefe: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)

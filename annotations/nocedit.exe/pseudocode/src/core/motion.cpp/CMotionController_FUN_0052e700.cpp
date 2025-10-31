// Name: core_motion.cpp_CMotionController_FUN_0052e700
// Address: 0052e700
// Address Range: [[0052e700, 0052e8ca]]
// Convention: unknown
// Signature: undefined core_motion.cpp_CMotionController_FUN_0052e700()
// Cross-references:
//   core_baron.cpp_CBaron_FUN_00413ae0 (00413ae0) at 00413c6e [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_004173b0 (004173b0) at 00417482 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_004189b0 (004189b0) at 00418a8a [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a2c0 (0042a2c0) at 0042a351 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00485be0 (00485be0) at 00485cb2 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005205f0 (005205f0) at 0052082f [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00529750 (00529750) at 00529830 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c7590 (005c7590) at 005c764a [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e6da0 (005e6da0) at 005e6e64 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_s_0063ac46
//   TerminatedCString s_s_5_2f_0063ac4f
//   undefined4 DAT_00661ba0
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02f43978
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052dcf0
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_motion.cpp_CMotionController_FUN_0052e700(undefined4 param_1,
   undefined4 param_2) */

void core_motion_cpp_CMotionController_FUN_0052e700(void)

{
  char cVar1;
  SRenderVertex *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  int in_stack_00000004;
  char *in_stack_00000008;
  double dVar8;
  char local_a8 [124];
  CVector3i local_2c;
  float local_20;
  float local_1c;
  undefined4 local_18;
  int local_14;
  
  if ((DAT_02f43978 != 0) &&
     (local_20 = (float)engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
                                  (g_CDemonRendererPtr), local_20 == 0.0)) {
    iVar3 = (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x14))();
    local_1c = *(float *)(iVar3 + 0x10);
    local_18 = 0;
    local_2c.x = (int)ROUND(local_20 * _DAT_00661ba0);
    local_2c.y = (int)ROUND(local_1c * _DAT_00661ba0);
    local_2c.z = (int)ROUND(_DAT_00661ba0 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[19999].projected_vertex,&local_2c);
    pSVar2 = g_CDemonRendererPtr->vertex_buffer_ptr;
    if ((int)(pSVar2[19999].projected_vertex.screen_x & -0x80000000) == 0) {
      iVar3 = pSVar2[19999].projected_vertex.screen_y >> 0x10;
      local_14 = (pSVar2[19999].projected_vertex.screen_x >> 0x10) + -0x23;
      engine_2d_c_drawText_FUN_00401fd0(in_stack_00000008,local_14,iVar3 + -0x21);
      if ((*(int *)(in_stack_00000004 + 0x28) < 0) ||
         (iVar4 = core_motion_cpp_CMotionController_FUN_0052dab0(),
         *(int *)(iVar4 + 0x24) == *(int *)(in_stack_00000004 + 0x28))) {
        pcVar6 = (char *)core_motion_cpp_CMotionController_FUN_0052dcf0();
        pcVar7 = local_a8;
        do {
          cVar1 = *pcVar6;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
      else {
        core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
        uVar5 = core_motion_cpp_CMotionController_FUN_0052dcf0();
        crt_stdio_c_sprintf_FUN_005fdbd0(local_a8,"%s -> %s",uVar5);
      }
      engine_2d_c_drawText_FUN_00401fd0(local_a8,local_14,iVar3 + -0x16);
      dVar8 = (double)*(float *)(in_stack_00000004 + 8);
      uVar5 = core_motion_cpp_CMotionController_FUN_0052dab0();
      crt_stdio_c_sprintf_FUN_005fdbd0(local_a8,"%s : %5.2f",uVar5,dVar8);
      engine_2d_c_drawText_FUN_00401fd0(local_a8,local_14,iVar3 + -0xb);
      return;
    }
  }
  return;
}


// Assembly code:
// 0052e700: PUSH EBX
//   Label: core_motion.cpp_CMotionController_FUN_0052e700
// 0052e701: PUSH ESI
// 0052e702: PUSH EDI
// 0052e703: PUSH EBP
// 0052e704: MOV EBP,ESP
// 0052e706: SUB ESP,0x98
// 0052e70c: SUB EBP,0x7a
// 0052e70f: MOV EDI,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0052e715: CMP dword ptr [0x02f43978],0x0
//   XREF to: 02f43978 (READ)
// 0052e71c: JNZ 0x0052e726
//   XREF to: 0052e726 (CONDITIONAL_JUMP)
// 0052e71e: LEA ESP,[EBP + 0x7a]
//   Label: LAB_0052e71e
//   XREF to: Stack[-0x10] (DATA)
// 0052e721: POP EBP
// 0052e722: POP EDI
// 0052e723: POP ESI
// 0052e724: POP EBX
// 0052e725: RET
// 0052e726: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_0052e726
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052e72c: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0052e72d: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0052e732: ADD ESP,0x4
// 0052e735: TEST EAX,EAX
// 0052e737: JNZ 0x0052e71e
//   XREF to: 0052e71e (CONDITIONAL_JUMP)
// 0052e739: LEA EDX,[EBP + 0x46]
//   XREF to: Stack[-0x44] (DATA)
// 0052e73c: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0052e73f: PUSH EDX
// 0052e740: MOV EAX,dword ptr [EDI + 0x154]
// 0052e746: PUSH EDI
// 0052e747: LEA EBX,[EBP + 0x5e]
//   XREF to: Stack[-0x2c] (DATA)
// 0052e74a: XOR ESI,ESI
// 0052e74c: CALL dword ptr [EAX + 0x14]
// 0052e74f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052e755: MOV EAX,dword ptr [EAX + 0x10]
// 0052e758: ADD ESP,0x8
// 0052e75b: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052e75e: LEA EAX,[EBP + 0x6a]
//   XREF to: Stack[-0x20] (DATA)
// 0052e761: MOV dword ptr [EBP + 0x72],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0052e764: FLD float ptr [EAX]
//   XREF to: Stack[-0x20] (DATA)
// 0052e766: FMUL float ptr [0x00661ba0]
//   XREF to: 00661ba0 (READ)
// 0052e76c: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x2c] (DATA)
// 0052e76e: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 0052e771: FMUL float ptr [0x00661ba0]
//   XREF to: 00661ba0 (READ)
// 0052e777: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x28] (WRITE)
// 0052e77a: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0052e77d: FMUL float ptr [0x00661ba0]
//   XREF to: 00661ba0 (READ)
// 0052e783: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x24] (WRITE)
// 0052e786: LEA EAX,[EBP + 0x5e]
//   XREF to: Stack[-0x2c] (DATA)
// 0052e789: PUSH EAX
// 0052e78a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0052e78c: ADD EAX,0xea5d0
// 0052e791: PUSH EAX
// 0052e792: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0052e797: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0052e79c: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0052e79e: MOV DL,byte ptr [EAX + 0xea5e3]
// 0052e7a4: ADD ESP,0x8
// 0052e7a7: TEST DL,0x80
// 0052e7aa: JNZ 0x0052e71e
//   XREF to: 0052e71e (CONDITIONAL_JUMP)
// 0052e7b0: MOV EBX,dword ptr [EAX + 0xea5e4]
// 0052e7b6: SAR EBX,0x10
// 0052e7b9: MOV EDX,dword ptr [EAX + 0xea5e0]
// 0052e7bf: SUB EBX,0x21
// 0052e7c2: SAR EDX,0x10
// 0052e7c5: PUSH EBX
// 0052e7c6: SUB EDX,0x23
// 0052e7c9: PUSH EDX
// 0052e7ca: PUSH EDI
// 0052e7cb: MOV dword ptr [EBP + 0x76],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0052e7ce: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0052e7d3: MOV EAX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 0052e7d9: MOV EDX,dword ptr [EAX + 0x28]
// 0052e7dc: ADD ESP,0xc
// 0052e7df: TEST EDX,EDX
// 0052e7e1: JL 0x0052e898
//   XREF to: 0052e898 (CONDITIONAL_JUMP)
// 0052e7e7: PUSH EAX
// 0052e7e8: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0052e7ed: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 0052e7f3: MOV EAX,dword ptr [EAX + 0x24]
// 0052e7f6: MOV ESI,dword ptr [EDX + 0x28]
// 0052e7f9: ADD ESP,0x4
// 0052e7fc: CMP EAX,ESI
// 0052e7fe: JZ 0x0052e898
//   XREF to: 0052e898 (CONDITIONAL_JUMP)
// 0052e804: LEA EAX,[ESI + ESI*0x1]
// 0052e807: MOV EDI,EAX
// 0052e809: SHL EDI,0x4
// 0052e80c: PUSH EDX
// 0052e80d: SUB EDI,EAX
// 0052e80f: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 0052e814: ADD EAX,0x4
// 0052e817: ADD ESP,0x4
// 0052e81a: ADD EAX,EDI
// 0052e81c: PUSH EAX
// 0052e81d: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 0052e823: PUSH EDX
// 0052e824: CALL core_motion.cpp_CMotionController_FUN_0052dcf0
//   XREF to: 0052dcf0 (UNCONDITIONAL_CALL)
// 0052e829: ADD ESP,0x4
// 0052e82c: PUSH EAX
// 0052e82d: PUSH 0x63ac46
//   XREF to: 0063ac46 (DATA)
// 0052e832: LEA EAX,[EBP + -0x1e]
//   XREF to: Stack[-0xa8] (DATA)
// 0052e835: PUSH EAX
// 0052e836: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0052e83b: ADD ESP,0x10
// 0052e83e: LEA EAX,[EBX + 0xb]
//   Label: LAB_0052e83e
// 0052e841: PUSH EAX
// 0052e842: MOV ECX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0052e845: PUSH ECX
// 0052e846: LEA EAX,[EBP + -0x1e]
//   XREF to: Stack[-0xa8] (DATA)
// 0052e849: PUSH EAX
// 0052e84a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0052e84f: ADD ESP,0xc
// 0052e852: MOV EAX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 0052e858: SUB ESP,0x8
// 0052e85b: FLD float ptr [EAX + 0x8]
// 0052e85e: FSTP double ptr [ESP]
// 0052e861: PUSH EAX
// 0052e862: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0052e867: ADD ESP,0x4
// 0052e86a: PUSH EAX
// 0052e86b: PUSH 0x63ac4f
//   XREF to: 0063ac4f (DATA)
// 0052e870: LEA EAX,[EBP + -0x1e]
//   XREF to: Stack[-0xa8] (DATA)
// 0052e873: PUSH EAX
// 0052e874: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0052e879: ADD ESP,0x14
// 0052e87c: ADD EBX,0x16
// 0052e87f: PUSH EBX
// 0052e880: MOV EDI,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0052e883: PUSH EDI
// 0052e884: LEA EAX,[EBP + -0x1e]
//   XREF to: Stack[-0xa8] (DATA)
// 0052e887: PUSH EAX
// 0052e888: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0052e88d: ADD ESP,0xc
// 0052e890: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 0052e893: POP EBP
// 0052e894: POP EDI
// 0052e895: POP ESI
// 0052e896: POP EBX
// 0052e897: RET
// 0052e898: MOV EDI,dword ptr [EBP + 0x8e]
//   Label: LAB_0052e898
//   XREF to: Stack[0x4] (READ)
// 0052e89e: PUSH EDI
// 0052e89f: CALL core_motion.cpp_CMotionController_FUN_0052dcf0
//   XREF to: 0052dcf0 (UNCONDITIONAL_CALL)
// 0052e8a4: ADD ESP,0x4
// 0052e8a7: LEA EDI,[EBP + -0x1e]
//   XREF to: Stack[-0xa8] (DATA)
// 0052e8aa: MOV ESI,EAX
// 0052e8ac: PUSH EDI
// 0052e8ad: MOV AL,byte ptr [ESI]
//   Label: LAB_0052e8ad
// 0052e8af: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xa8] (DATA)
// 0052e8b1: CMP AL,0x0
// 0052e8b3: JZ 0x0052e8c5
//   XREF to: 0052e8c5 (CONDITIONAL_JUMP)
// 0052e8b5: MOV AL,byte ptr [ESI + 0x1]
// 0052e8b8: ADD ESI,0x2
// 0052e8bb: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xa7] (WRITE)
// 0052e8be: ADD EDI,0x2
// 0052e8c1: CMP AL,0x0
// 0052e8c3: JNZ 0x0052e8ad
//   XREF to: 0052e8ad (CONDITIONAL_JUMP)
// 0052e8c5: POP EDI
//   Label: LAB_0052e8c5
// 0052e8c6: JMP 0x0052e83e
//   XREF to: 0052e83e (UNCONDITIONAL_JUMP)

// Name: shape_design.c_displayPalette_FUN_00461560
// Address: 00461560
// Address Range: [[00461560, 0046169d]]
// Convention: unknown
// Signature: undefined shape_design.c_displayPalette_FUN_00461560()
// Globals:
//   TerminatedCString s_s_3d_0061beed
//   TerminatedCString s_Hit_a_key_0061bef1
//   undefined4 s_it_a_key..._0061bef2
//   undefined4 s_t_a_key..._0061bef3
//   undefined4 s_a_key..._0061bef4
//   int g_WindowHeight = 0xc8
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawTextColor_FUN_00402430
//   engine_2d.c_fillRectColor_FUN_00403170
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void shape_design_c_displayPalette_FUN_00461560(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  int local_2c;
  int local_14;
  
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  local_14 = 0;
  for (local_2c = 0; local_2c < 0x100; local_2c = local_2c + 1) {
    iVar2 = (local_2c % 0x10) * 0xe;
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff84,"%3d");
    engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff84,0,local_14 * 0xc + 4);
    engine_2d_c_fillRectColor_FUN_00403170
              (iVar2 + 0x16,local_14 * 0xc + 4,iVar2 + 0x1f,local_14 * 0xc + 0xb,local_2c);
    if ((local_2c + 1) % 0x10 == 0) {
      local_14 = local_14 + 1;
    }
  }
  pcVar3 = "Hit a key...";
  pcVar4 = &stack0xffffff84;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  engine_2d_c_drawTextColor_FUN_00402430(&stack0xffffff84,0,g_WindowHeight + -0xb);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 00461560: PUSH EBX
//   Label: shape_design.c_displayPalette_FUN_00461560
// 00461561: PUSH ESI
// 00461562: PUSH EDI
// 00461563: PUSH EBP
// 00461564: MOV EBP,ESP
// 00461566: SUB ESP,0x6c
// 0046156c: MOV dword ptr [EBP + -0xc],0xa
//   XREF to: Stack[-0x1c] (WRITE)
// 00461573: MOV dword ptr [EBP + -0x8],0x8
//   XREF to: Stack[-0x18] (WRITE)
// 0046157a: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0046157f: MOV dword ptr [EBP + -0x1c],0x0
//   XREF to: Stack[-0x2c] (WRITE)
// 00461586: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0046158d: JMP 0x00461595
//   XREF to: 00461595 (UNCONDITIONAL_JUMP)
// 0046158f: MOV EAX,dword ptr [EBP + -0x1c]
//   Label: LAB_0046158f
//   XREF to: Stack[-0x2c] (READ)
// 00461592: INC dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 00461595: CMP dword ptr [EBP + -0x1c],0x100
//   Label: LAB_00461595
//   XREF to: Stack[-0x2c] (READ)
// 0046159c: JGE 0x00461649
//   XREF to: 00461649 (CONDITIONAL_JUMP)
// 004615a2: MOV ECX,0x10
// 004615a7: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004615aa: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 004615ad: SAR EDX,0x1f
// 004615b0: IDIV ECX
// 004615b2: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 004615b5: ADD EAX,0x4
// 004615b8: IMUL EAX,EDX
// 004615bb: ADD EAX,0x16
// 004615be: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004615c1: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004615c4: ADD EAX,0x4
// 004615c7: IMUL EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004615cb: ADD EAX,0x4
// 004615ce: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004615d1: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004615d4: SHL EAX,0x4
// 004615d7: PUSH EAX
// 004615d8: MOV EAX,0x61beed
//   XREF to: 0061beed (DATA)
// 004615dd: PUSH EAX
//   XREF to: 0061beed (DATA)
// 004615de: LEA EAX,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 004615e1: PUSH EAX
// 004615e2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004615e7: ADD ESP,0xc
// 004615ea: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 004615ed: ADD EAX,0x4
// 004615f0: IMUL EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 004615f4: ADD EAX,0x4
// 004615f7: PUSH EAX
// 004615f8: PUSH 0x0
// 004615fa: LEA EAX,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 004615fd: PUSH EAX
// 004615fe: CALL engine_2d.c_drawTextColor_FUN_00402430
//   XREF to: 00402430 (UNCONDITIONAL_CALL)
// 00461603: ADD ESP,0xc
// 00461606: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00461609: PUSH EAX
// 0046160a: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046160d: ADD EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00461610: DEC EAX
// 00461611: PUSH EAX
// 00461612: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00461615: ADD EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00461618: DEC EAX
// 00461619: PUSH EAX
// 0046161a: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0046161d: PUSH EAX
// 0046161e: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00461621: PUSH EAX
// 00461622: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 00461627: ADD ESP,0x14
// 0046162a: MOV EDX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0046162d: INC EDX
// 0046162e: MOV ECX,0x10
// 00461633: MOV EAX,EDX
// 00461635: SAR EDX,0x1f
// 00461638: IDIV ECX
// 0046163a: TEST EDX,EDX
// 0046163c: JNZ 0x00461644
//   XREF to: 00461644 (CONDITIONAL_JUMP)
// 0046163e: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00461641: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 00461644: JMP 0x0046158f
//   Label: LAB_00461644
//   XREF to: 0046158f (UNCONDITIONAL_JUMP)
// 00461649: MOV ESI,0x61bef1
//   Label: LAB_00461649
//   XREF to: 0061bef1 (DATA)
// 0046164e: LEA EDI,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 00461651: PUSH EDI
// 00461652: MOV AL,byte ptr [ESI]
//   Label: LAB_00461652
//   XREF to: 0061bef1 (READ)
//   XREF to: 0061bef3 (READ)
// 00461654: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x7c] (DATA)
// 00461656: CMP AL,0x0
// 00461658: JZ 0x0046166a
//   XREF to: 0046166a (CONDITIONAL_JUMP)
// 0046165a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061bef2 (READ)
//   XREF to: 0061bef4 (READ)
// 0046165d: ADD ESI,0x2
// 00461660: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x7b] (WRITE)
// 00461663: ADD EDI,0x2
// 00461666: CMP AL,0x0
// 00461668: JNZ 0x00461652
//   XREF to: 00461652 (CONDITIONAL_JUMP)
// 0046166a: POP EDI
//   Label: LAB_0046166a
// 0046166b: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00461671: SUB ESI,0xb
// 00461674: PUSH ESI
// 00461675: PUSH 0x0
// 00461677: LEA ESI,[EBP + -0x6c]
//   XREF to: Stack[-0x7c] (DATA)
// 0046167a: PUSH ESI
// 0046167b: CALL engine_2d.c_drawTextColor_FUN_00402430
//   XREF to: 00402430 (UNCONDITIONAL_CALL)
// 00461680: ADD ESP,0xc
// 00461683: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00461688: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0046168d: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00461692: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00461697: MOV ESP,EBP
// 00461699: POP EBP
// 0046169a: POP EDI
// 0046169b: POP ESI
// 0046169c: POP EBX
// 0046169d: RET

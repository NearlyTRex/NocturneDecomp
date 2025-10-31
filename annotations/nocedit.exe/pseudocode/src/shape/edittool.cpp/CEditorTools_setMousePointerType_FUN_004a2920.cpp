// Name: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920
// Address: 004a2920
// Address Range: [[004a2920, 004a2a19]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920(CEditorTools * this_ptr, int cursor_type, int width, int height)
// Cross-references:
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e42b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 005399a0 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566bc0 (00566bc0) at 00566c06 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_0062362e
//   TerminatedCString s_CEditorTools_setMousePoi_00623644
//   int g_CursorSizeHorizontal = 0x9
//   int g_CursorSizeVertical = 0x9
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_MouseCursorType
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920
          (CEditorTools *this_ptr,int cursor_type,int width,int height)

{
  int iVar1;
  int iVar2;
  
  g_MouseCursorType = cursor_type;
  if (cursor_type != 0) {
    if ((uint)cursor_type < 2) {
      if (width < 1) {
        width = 0xb;
      }
      if (height < 1) {
        height = width / 2;
      }
      goto LAB_004a2956;
    }
    if (cursor_type != 2) {
      g_CurrentFilename = "..\\shape\\edittool.cpp";
      g_CurrentLineNumber = 0xab3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::setMousePointerType - invalid type!");
      g_CursorSizeHorizontal = height;
      g_CursorSizeVertical = height;
      return;
    }
  }
  if (width < 1) {
    width = 0xb;
  }
  if (height < 1) {
    iVar1 = (width * g_WindowWidth * 3) / g_WindowHeight;
    iVar2 = iVar1 >> 0x1f;
    height = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
  }
  if ((width & 1U) == 0) {
    width = width + 1;
  }
LAB_004a2956:
  if ((height & 1U) == 0) {
    height = height + 1;
  }
  g_CursorSizeHorizontal = height;
  g_CursorSizeVertical = width;
  return;
}


// Assembly code:
// 004a2920: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920
// 004a2921: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004a2925: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004a2929: MOV dword ptr [0x02cf2670],EDX
//   XREF to: 02cf2670 (WRITE)
// 004a292f: CMP EDX,0x1
// 004a2932: JNC 0x004a29d6
//   XREF to: 004a29d6 (CONDITIONAL_JUMP)
// 004a2938: TEST EDX,EDX
// 004a293a: JNZ 0x004a29e1
//   XREF to: 004a29e1 (CONDITIONAL_JUMP)
// 004a2940: CMP dword ptr [ESP + 0x10],0x0
//   Label: LAB_004a2940
//   XREF to: Stack[0xc] (READ)
// 004a2945: JLE 0x004a296e
//   XREF to: 004a296e (CONDITIONAL_JUMP)
// 004a2947: TEST EBX,EBX
//   Label: LAB_004a2947
// 004a2949: JLE 0x004a2978
//   XREF to: 004a2978 (CONDITIONAL_JUMP)
// 004a294b: TEST byte ptr [ESP + 0x10],0x1
//   Label: LAB_004a294b
//   XREF to: Stack[0xc] (READ)
// 004a2950: JNZ 0x004a2956
//   XREF to: 004a2956 (CONDITIONAL_JUMP)
// 004a2952: INC dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ_WRITE)
// 004a2956: TEST BL,0x1
//   Label: LAB_004a2956
// 004a2959: JNZ 0x004a295c
//   XREF to: 004a295c (CONDITIONAL_JUMP)
// 004a295b: INC EBX
// 004a295c: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_004a295c
//   XREF to: Stack[0xc] (READ)
// 004a2960: MOV dword ptr [0x00678a64],EBX
//   XREF to: 00678a64 (WRITE)
// 004a2966: MOV dword ptr [0x00678a68],EDX
//   XREF to: 00678a68 (WRITE)
// 004a296c: POP EBX
// 004a296d: RET
// 004a296e: MOV dword ptr [ESP + 0x10],0xb
//   Label: LAB_004a296e
//   XREF to: Stack[0xc] (WRITE)
// 004a2976: JMP 0x004a2947
//   XREF to: 004a2947 (UNCONDITIONAL_JUMP)
// 004a2978: MOV EBX,dword ptr [ESP + 0x10]
//   Label: LAB_004a2978
//   XREF to: Stack[0xc] (READ)
// 004a297c: IMUL EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a2983: LEA EDX,[EBX*0x4 + 0x0]
// 004a298a: SUB EDX,EBX
// 004a298c: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004a2992: MOV EAX,EDX
// 004a2994: SAR EDX,0x1f
// 004a2997: IDIV ECX
// 004a2999: MOV EDX,EAX
// 004a299b: SAR EDX,0x1f
// 004a299e: SHL EDX,0x2
// 004a29a1: SBB EAX,EDX
// 004a29a3: SAR EAX,0x2
// 004a29a6: MOV EBX,EAX
// 004a29a8: JMP 0x004a294b
//   XREF to: 004a294b (UNCONDITIONAL_JUMP)
// 004a29aa: CMP dword ptr [ESP + 0x10],0x0
//   Label: LAB_004a29aa
//   XREF to: Stack[0xc] (READ)
// 004a29af: JLE 0x004a29b7
//   XREF to: 004a29b7 (CONDITIONAL_JUMP)
// 004a29b1: TEST EBX,EBX
// 004a29b3: JLE 0x004a29c5
//   XREF to: 004a29c5 (CONDITIONAL_JUMP)
// 004a29b5: JMP 0x004a2956
//   XREF to: 004a2956 (UNCONDITIONAL_JUMP)
// 004a29b7: MOV dword ptr [ESP + 0x10],0xb
//   Label: LAB_004a29b7
//   XREF to: Stack[0xc] (WRITE)
// 004a29bf: TEST EBX,EBX
// 004a29c1: JLE 0x004a29c5
//   XREF to: 004a29c5 (CONDITIONAL_JUMP)
// 004a29c3: JMP 0x004a2956
//   XREF to: 004a2956 (UNCONDITIONAL_JUMP)
// 004a29c5: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_004a29c5
//   XREF to: Stack[0xc] (READ)
// 004a29c9: MOV EDX,EAX
// 004a29cb: SAR EDX,0x1f
// 004a29ce: SUB EAX,EDX
// 004a29d0: SAR EAX,0x1
// 004a29d2: MOV EBX,EAX
// 004a29d4: JMP 0x004a2956
//   XREF to: 004a2956 (UNCONDITIONAL_JUMP)
// 004a29d6: JBE 0x004a29aa
//   Label: LAB_004a29d6
//   XREF to: 004a29aa (CONDITIONAL_JUMP)
// 004a29d8: CMP EDX,0x2
// 004a29db: JZ 0x004a2940
//   XREF to: 004a2940 (CONDITIONAL_JUMP)
// 004a29e1: PUSH EDI
//   Label: LAB_004a29e1
// 004a29e2: PUSH ESI
// 004a29e3: MOV ESI,0x62362e
//   XREF to: 0062362e (DATA)
// 004a29e8: MOV EDI,0xab3
// 004a29ed: PUSH 0x623644
//   XREF to: 00623644 (DATA)
// 004a29f2: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004a29f8: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004a29fe: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a2a03: ADD ESP,0x4
// 004a2a06: POP ESI
// 004a2a07: POP EDI
// 004a2a08: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004a2a0c: MOV dword ptr [0x00678a64],EBX
//   XREF to: 00678a64 (WRITE)
// 004a2a12: MOV dword ptr [0x00678a68],EDX
//   XREF to: 00678a68 (WRITE)
// 004a2a18: POP EBX
// 004a2a19: RET

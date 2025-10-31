// Name: wincore_windll.cpp_switchRenderer_FUN_005b8140
// Address: 005b8140
// Address Range: [[005b8140, 005b8184]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_switchRenderer_FUN_005b8140(char * new_dll_name, int renderer_handle)
// Cross-references:
//   wincore_windll.cpp_CExternalRenderer_switchRenderer_FUN_005b8117 (005b8117) at 005b812f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_trid3d_dll_00684010
//   undefined4 DAT_00684011
//   undefined4 s_id3d_dll_00684012
//   undefined4 s_d3d.dll_00684013
//   int g_RendererHandle
//   HWND g_StoredWindowHandle
// Function calls:
//   wincore_windll.cpp_kill_FUN_005b71e0
//   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750

#include "nocturne.h"

int __cdecl wincore_windll_cpp_switchRenderer_FUN_005b8140(char *new_dll_name,int renderer_handle)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_stack_0000000c;
  
  wincore_windll_cpp_kill_FUN_005b71e0();
  pcVar3 = "trid3d.dll";
  g_RendererHandle = in_stack_0000000c;
  do {
    cVar1 = *(char *)renderer_handle;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = *(char *)(renderer_handle + 1);
    renderer_handle = renderer_handle + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  iVar2 = wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(g_StoredWindowHandle);
  return iVar2;
}


// Assembly code:
// 005b8140: PUSH ESI
//   Label: wincore_windll.cpp_switchRenderer_FUN_005b8140
// 005b8141: PUSH EDI
// 005b8142: CALL wincore_windll.cpp_kill_FUN_005b71e0
//   XREF to: 005b71e0 (UNCONDITIONAL_CALL)
// 005b8147: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005b814b: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005b814f: MOV EDI,0x684010
//   XREF to: 00684010 (DATA)
// 005b8154: MOV [0x03f6b87c],EAX
//   XREF to: 03f6b87c (WRITE)
// 005b8159: PUSH EDI
//   XREF to: 00684010 (DATA)
// 005b815a: MOV AL,byte ptr [ESI]
//   Label: LAB_005b815a
// 005b815c: MOV byte ptr [EDI],AL
//   XREF to: 00684010 (WRITE)
//   XREF to: 00684012 (WRITE)
// 005b815e: CMP AL,0x0
// 005b8160: JZ 0x005b8172
//   XREF to: 005b8172 (CONDITIONAL_JUMP)
// 005b8162: MOV AL,byte ptr [ESI + 0x1]
// 005b8165: ADD ESI,0x2
// 005b8168: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 00684011 (WRITE)
//   XREF to: 00684013 (WRITE)
// 005b816b: ADD EDI,0x2
// 005b816e: CMP AL,0x0
// 005b8170: JNZ 0x005b815a
//   XREF to: 005b815a (CONDITIONAL_JUMP)
// 005b8172: POP EDI
//   Label: LAB_005b8172
// 005b8173: MOV EDX,dword ptr [0x03f6b98c]
//   XREF to: 03f6b98c (READ)
// 005b8179: PUSH EDX
// 005b817a: CALL wincore_windll.cpp_loadExternalRenderer_FUN_005b6750
//   XREF to: 005b6750 (UNCONDITIONAL_CALL)
// 005b817f: ADD ESP,0x4
// 005b8182: POP EDI
// 005b8183: POP ESI
// 005b8184: RET

// Name: sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_0052ea10
// Address: 0052ea10
// Address Range: [[0052ea10, 0052ea7a]]
// Convention: __cdecl
// Signature: void * sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_0052ea10(int layer, int mode_extension)
// Globals:
//   TerminatedCString s_sound_mp3_cpp_0063aca4
//   TerminatedCString s_js_bound_bad_layer_modex_0063acb5
//   void*[4][4] g_MpegLayer2AllocationTables
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   char[256] g_CurrentMp3Filename
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_0052ea10(int layer,int mode_extension)

{
  if ((((0 < layer) && (layer < 4)) && (-1 < mode_extension)) && (mode_extension < 4)) {
    return g_MpegLayer2AllocationTables[layer][mode_extension];
  }
  g_CurrentFilename = "..\\sound\\mp3.cpp";
  g_CurrentLineNumber = 0x1b2;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("js_bound bad layer/modext (%d/%d)  File: %s",layer,mode_extension,g_CurrentMp3Filename);
  return g_MpegLayer2AllocationTables[layer][mode_extension];
}


// Assembly code:
// 0052ea10: PUSH EBX
//   Label: sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_0052ea10
// 0052ea11: PUSH ESI
// 0052ea12: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052ea16: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052ea1a: CMP EBX,0x1
// 0052ea1d: JL 0x0052ea3f
//   XREF to: 0052ea3f (CONDITIONAL_JUMP)
// 0052ea1f: CMP EBX,0x3
// 0052ea22: JG 0x0052ea3f
//   XREF to: 0052ea3f (CONDITIONAL_JUMP)
// 0052ea24: TEST ESI,ESI
// 0052ea26: JL 0x0052ea3f
//   XREF to: 0052ea3f (CONDITIONAL_JUMP)
// 0052ea28: CMP ESI,0x3
// 0052ea2b: JG 0x0052ea3f
//   XREF to: 0052ea3f (CONDITIONAL_JUMP)
// 0052ea2d: SHL ESI,0x2
// 0052ea30: SHL EBX,0x4
// 0052ea33: LEA EAX,[EBX + ESI*0x1]
// 0052ea36: MOV EAX,dword ptr [EAX + 0x67d820]
//   XREF to: 0067d820 (DATA)
// 0052ea3c: POP ESI
// 0052ea3d: POP EBX
// 0052ea3e: RET
// 0052ea3f: PUSH 0x2f68188
//   Label: LAB_0052ea3f
//   XREF to: 02f68188 (DATA)
// 0052ea44: PUSH ESI
// 0052ea45: PUSH EBX
// 0052ea46: MOV EDX,0x63aca4
//   XREF to: 0063aca4 (DATA)
// 0052ea4b: MOV ECX,0x1b2
// 0052ea50: PUSH 0x63acb5
//   XREF to: 0063acb5 (DATA)
// 0052ea55: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0052ea5b: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0052ea61: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052ea66: ADD ESP,0x10
// 0052ea69: SHL ESI,0x2
// 0052ea6c: SHL EBX,0x4
// 0052ea6f: LEA EAX,[EBX + ESI*0x1]
// 0052ea72: MOV EAX,dword ptr [EAX + 0x67d820]
//   XREF to: 0067d820 (DATA)
// 0052ea78: POP ESI
// 0052ea79: POP EBX
// 0052ea7a: RET

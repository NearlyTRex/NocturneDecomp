// Name: cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0
// Address: 0054b5c0
// Address Range: [[0054b5c0, 0054b68c]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0(CPackedBitmap * this_ptr, FILE * file_handle)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520 (0054b520) at 0054b552 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063f0f1
//   TerminatedCString s_Error_writing_PBM_0063f109
//   TerminatedCString s_anon_00680c9c
//   undefined4 s_PBG_00680ca0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fwrite_FUN_005fdc00

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0
          (CPackedBitmap *this_ptr,FILE *file_handle)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = "PBM\032PBG\032";
  pcVar3 = &stack0xffffffd4;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pcVar3 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  crt_stdio_c_fwrite_FUN_005fdc00(&stack0xffffffd4,0x1c,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(this_ptr->row_pointers,4,this_ptr->height + 1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00
            (this_ptr->packed_data,(SIZE_T)this_ptr->row_pointers[this_ptr->height],1,file_handle);
  if ((file_handle->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 0x49a;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing PBM");
  return;
}


// Assembly code:
// 0054b5c0: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0
// 0054b5c1: PUSH ESI
// 0054b5c2: PUSH EDI
// 0054b5c3: PUSH EBP
// 0054b5c4: SUB ESP,0x1c
// 0054b5c7: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0054b5cb: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0054b5cf: MOV ECX,0x4
// 0054b5d4: MOV ESI,0x680c9c
//   XREF to: 00680c9c (DATA)
// 0054b5d9: MOV EDI,ESP
// 0054b5db: PUSH EDI
// 0054b5dc: MOV EAX,ECX
// 0054b5de: SHR ECX,0x2
// 0054b5e1: MOVSD.REP ES:EDI,ESI
//   XREF to: 00680c9c (READ)
// 0054b5e3: MOV CL,AL
// 0054b5e5: AND CL,0x3
// 0054b5e8: MOVSB.REP ES:EDI,ESI
//   XREF to: 00680ca0 (READ)
// 0054b5ea: POP EDI
// 0054b5eb: MOV EAX,dword ptr [EBX + 0x18]
// 0054b5ee: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0054b5f2: MOV EAX,dword ptr [EBX + 0x1c]
// 0054b5f5: XOR EDX,EDX
// 0054b5f7: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0054b5fb: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0054b5ff: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0054b603: MOV EAX,dword ptr [EBX + 0x18]
// 0054b606: DEC EAX
// 0054b607: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0054b60b: PUSH EBP
// 0054b60c: MOV EAX,dword ptr [EBX + 0x1c]
// 0054b60f: PUSH 0x1
// 0054b611: DEC EAX
// 0054b612: PUSH 0x1c
// 0054b614: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0054b618: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x2c] (DATA)
// 0054b61c: PUSH EAX
// 0054b61d: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0054b622: ADD ESP,0x10
// 0054b625: MOV EAX,dword ptr [EBX + 0x1c]
// 0054b628: PUSH EBP
// 0054b629: INC EAX
// 0054b62a: PUSH EAX
// 0054b62b: PUSH 0x4
// 0054b62d: MOV ESI,dword ptr [EBX + 0x20]
// 0054b630: PUSH ESI
// 0054b631: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0054b636: ADD ESP,0x10
// 0054b639: PUSH EBP
// 0054b63a: MOV EDI,dword ptr [EBX + 0x1c]
// 0054b63d: MOV EAX,dword ptr [EBX + 0x20]
// 0054b640: PUSH 0x1
// 0054b642: MOV EDX,dword ptr [EAX + EDI*0x4]
// 0054b645: PUSH EDX
// 0054b646: MOV ECX,dword ptr [EBX + 0x14]
// 0054b649: PUSH ECX
// 0054b64a: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0054b64f: MOV AH,byte ptr [EBP + 0xc]
// 0054b652: ADD ESP,0x10
// 0054b655: TEST AH,0x20
// 0054b658: JNZ 0x0054b662
//   XREF to: 0054b662 (CONDITIONAL_JUMP)
// 0054b65a: ADD ESP,0x1c
// 0054b65d: POP EBP
// 0054b65e: POP EDI
// 0054b65f: POP ESI
// 0054b660: POP EBX
// 0054b661: RET
// 0054b662: MOV EBX,0x63f0f1
//   Label: LAB_0054b662
//   XREF to: 0063f0f1 (DATA)
// 0054b667: MOV ESI,0x49a
// 0054b66c: PUSH 0x63f109
//   XREF to: 0063f109 (DATA)
// 0054b671: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0054b677: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0054b67d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054b682: ADD ESP,0x4
// 0054b685: ADD ESP,0x1c
// 0054b688: POP EBP
// 0054b689: POP EDI
// 0054b68a: POP ESI
// 0054b68b: POP EBX
// 0054b68c: RET

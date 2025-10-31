// Name: cockpit_ckptutil.c_loadSingleEdgeList_FUN_00433440
// Address: 00433440
// Address Range: [[00433440, 00433473]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_loadSingleEdgeList_FUN_00433440(char * filename, void * * edge_data_out, int * edge_count_out)
// Function calls:
//   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_loadSingleEdgeList_FUN_00433440
          (char *filename,void **edge_data_out,int *edge_count_out)

{
  BADSPACEBASE *in_ESP;
  undefined4 unaff_retaddr;
  undefined4 *in_stack_00000010;
  SEdgeList local_8;
  
  local_8.edge_data = (void *)0x0;
  cockpit_ckptutil_c_loadEdgeListFile_FUN_004331f0(filename,&local_8,1);
  *edge_count_out = local_8.edge_count;
  *in_stack_00000010 = unaff_retaddr;
  return;
}


// Assembly code:
// 00433440: SUB ESP,0x8
//   Label: cockpit_ckptutil.c_loadSingleEdgeList_FUN_00433440
// 00433443: PUSH 0x1
// 00433445: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x8] (DATA)
// 00433449: PUSH EAX
// 0043344a: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043344e: XOR EDX,EDX
// 00433450: PUSH ECX
// 00433451: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 00433455: CALL cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0
//   XREF to: 004331f0 (UNCONDITIONAL_CALL)
// 0043345a: ADD ESP,0xc
// 0043345d: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00433461: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 00433464: MOV dword ptr [EDX],EAX
// 00433466: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0043346a: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 0043346e: MOV dword ptr [EDX],EAX
// 00433470: ADD ESP,0x8
// 00433473: RET

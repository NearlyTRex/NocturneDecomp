// Name: core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200
// Address: 00576200
// Address Range: [[00576200, 0057629d]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200(CDemonSet * this_ptr, FILE * file_handle)
// Cross-references:
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569a7c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_0064658b
//   TerminatedCString s_d_0064658f
// Function calls:
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl
core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200
          (CDemonSet *this_ptr,FILE *file_handle)

{
  int unaff_EBX;
  int iVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  int iVar2;
  char acStack_10c [252];
  
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffee8,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
  iVar2 = 0;
  if (0 < unaff_EBP) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"\"%*[^\"]\", %d\n");
      iVar1 = 0;
      if (0 < unaff_ESI) {
        do {
          crt_stdio_c_fgets_FUN_005fefd0(acStack_10c,0xff,file_handle);
          iVar1 = iVar1 + 1;
        } while (iVar1 < unaff_EBX);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_EBP);
  }
  return;
}


// Assembly code:
// 00576200: PUSH EBX
//   Label: core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200
// 00576201: PUSH ESI
// 00576202: PUSH EDI
// 00576203: PUSH EBP
// 00576204: SUB ESP,0x108
// 0057620a: MOV ESI,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x8] (READ)
// 00576211: PUSH ESI
// 00576212: PUSH 0xff
// 00576217: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 0057621b: PUSH EAX
// 0057621c: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00576221: ADD ESP,0xc
// 00576224: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x18] (DATA)
// 0057622b: PUSH EAX
// 0057622c: PUSH 0x64658b
//   XREF to: 0064658b (DATA)
// 00576231: PUSH ESI
// 00576232: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00576237: ADD ESP,0xc
// 0057623a: MOV EDX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x18] (READ)
// 00576241: XOR EDI,EDI
// 00576243: TEST EDX,EDX
// 00576245: JLE 0x00576293
//   XREF to: 00576293 (CONDITIONAL_JUMP)
// 00576247: LEA EAX,[ESP + 0x104]
//   Label: LAB_00576247
//   XREF to: Stack[-0x14] (DATA)
// 0057624e: PUSH EAX
// 0057624f: PUSH 0x64658f
//   XREF to: 0064658f (DATA)
// 00576254: PUSH ESI
// 00576255: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0057625a: ADD ESP,0xc
// 0057625d: MOV EBP,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (READ)
// 00576264: XOR EBX,EBX
// 00576266: TEST EBP,EBP
// 00576268: JLE 0x00576287
//   XREF to: 00576287 (CONDITIONAL_JUMP)
// 0057626a: PUSH ESI
//   Label: LAB_0057626a
// 0057626b: PUSH 0xff
// 00576270: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 00576274: PUSH EAX
// 00576275: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0057627a: ADD ESP,0xc
// 0057627d: INC EBX
// 0057627e: CMP EBX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (READ)
// 00576285: JL 0x0057626a
//   XREF to: 0057626a (CONDITIONAL_JUMP)
// 00576287: MOV ECX,dword ptr [ESP + 0x100]
//   Label: LAB_00576287
//   XREF to: Stack[-0x18] (READ)
// 0057628e: INC EDI
// 0057628f: CMP EDI,ECX
// 00576291: JL 0x00576247
//   XREF to: 00576247 (CONDITIONAL_JUMP)
// 00576293: ADD ESP,0x108
//   Label: LAB_00576293
// 00576299: POP EBP
// 0057629a: POP EDI
// 0057629b: POP ESI
// 0057629c: POP EBX
// 0057629d: RET

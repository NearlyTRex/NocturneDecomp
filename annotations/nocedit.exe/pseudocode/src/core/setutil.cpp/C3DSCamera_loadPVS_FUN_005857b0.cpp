// Name: core_setutil.cpp_C3DSCamera_loadPVS_FUN_005857b0
// Address: 005857b0
// Address Range: [[005857b0, 00585864]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_loadPVS_FUN_005857b0(C3DSCamera * this_ptr, FILE * file_handle)
// Cross-references:
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569c73 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_00649263
//   TerminatedCString s_core_setutil_cpp_00649267
//   TerminatedCString s_core_setutil_cpp_0064927b
//   TerminatedCString s_Out_of_memory_for_pvsLis_0064928f
//   TerminatedCString s_d_006492ae
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

void __cdecl
core_setutil_cpp_C3DSCamera_loadPVS_FUN_005857b0(C3DSCamera *this_ptr,FILE *file_handle)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&this_ptr->pvs_count);
  piVar1 = (int *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                            (this_ptr->pvs_list,this_ptr->pvs_count << 2,"..\\core\\setutil.cpp"
                             ,0xe2);
  this_ptr->pvs_list = piVar1;
  if (0 < this_ptr->pvs_count) {
    if (piVar1 == (int *)0x0) {
      g_CurrentFilename = "..\\core\\setutil.cpp";
      g_CurrentLineNumber = 0xe4;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Out of memory for pvsList - %d",this_ptr->pvs_count);
    }
    iVar4 = 0;
    if (0 < this_ptr->pvs_count) {
      iVar3 = 0;
      do {
        iVar2 = (int)this_ptr->pvs_list + iVar3;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
        crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"\t%d\n",iVar2);
      } while (iVar4 < this_ptr->pvs_count);
    }
  }
  return;
}


// Assembly code:
// 005857b0: PUSH ESI
//   Label: core_setutil.cpp_C3DSCamera_loadPVS_FUN_005857b0
// 005857b1: PUSH EDI
// 005857b2: PUSH EBP
// 005857b3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005857b7: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005857bb: LEA EAX,[EDI + 0x194]
// 005857c1: PUSH EAX
// 005857c2: PUSH 0x649263
//   XREF to: 00649263 (DATA)
// 005857c7: PUSH EBP
// 005857c8: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005857cd: ADD ESP,0xc
// 005857d0: PUSH 0xe2
// 005857d5: MOV EAX,dword ptr [EDI + 0x194]
// 005857db: PUSH 0x649267
//   XREF to: 00649267 (DATA)
// 005857e0: SHL EAX,0x2
// 005857e3: PUSH EAX
// 005857e4: MOV EDX,dword ptr [EDI + 0x198]
// 005857ea: PUSH EDX
// 005857eb: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 005857f0: ADD ESP,0x10
// 005857f3: MOV ECX,dword ptr [EDI + 0x194]
// 005857f9: MOV dword ptr [EDI + 0x198],EAX
// 005857ff: TEST ECX,ECX
// 00585801: JLE 0x0058583c
//   XREF to: 0058583c (CONDITIONAL_JUMP)
// 00585803: TEST EAX,EAX
// 00585805: JZ 0x00585840
//   XREF to: 00585840 (CONDITIONAL_JUMP)
// 00585807: MOV ECX,dword ptr [EDI + 0x194]
//   Label: LAB_00585807
// 0058580d: XOR ESI,ESI
// 0058580f: TEST ECX,ECX
// 00585811: JLE 0x0058583c
//   XREF to: 0058583c (CONDITIONAL_JUMP)
// 00585813: PUSH EBX
// 00585814: XOR EBX,EBX
// 00585816: MOV EAX,dword ptr [EDI + 0x198]
//   Label: LAB_00585816
// 0058581c: ADD EAX,EBX
// 0058581e: PUSH EAX
// 0058581f: PUSH 0x6492ae
//   XREF to: 006492ae (DATA)
// 00585824: PUSH EBP
// 00585825: INC ESI
// 00585826: ADD EBX,0x4
// 00585829: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058582e: MOV EAX,dword ptr [EDI + 0x194]
// 00585834: ADD ESP,0xc
// 00585837: CMP ESI,EAX
// 00585839: JL 0x00585816
//   XREF to: 00585816 (CONDITIONAL_JUMP)
// 0058583b: POP EBX
// 0058583c: POP EBP
//   Label: LAB_0058583c
// 0058583d: POP EDI
// 0058583e: POP ESI
// 0058583f: RET
// 00585840: PUSH ECX
//   Label: LAB_00585840
// 00585841: MOV ESI,0x64927b
//   XREF to: 0064927b (DATA)
// 00585846: MOV EAX,0xe4
// 0058584b: PUSH 0x64928f
//   XREF to: 0064928f (DATA)
// 00585850: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00585856: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0058585b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00585860: ADD ESP,0x8
// 00585863: JMP 0x00585807
//   XREF to: 00585807 (UNCONDITIONAL_JUMP)

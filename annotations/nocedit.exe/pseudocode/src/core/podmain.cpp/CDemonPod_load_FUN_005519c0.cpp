// Name: core_podmain.cpp_CDemonPod_load_FUN_005519c0
// Address: 005519c0
// Address Range: [[005519c0, 00551af2]]
// Convention: __cdecl
// Signature: void core_podmain.cpp_CDemonPod_load_FUN_005519c0(CDemonPod * this_ptr)
// Globals:
//   TerminatedCString s_core_podmain_cpp_006408f7
//   TerminatedCString s_rt_0064090b
//   TerminatedCString s_pod_ini_0064090e
//   TerminatedCString s_pod_00640916
//   TerminatedCString s_d_0064091c
//   TerminatedCString s_s_00640920
//   TerminatedCString s_core_podmain_cpp_00640924
// Function calls:
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
//   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl core_podmain_cpp_CDemonPod_load_FUN_005519c0(CDemonPod *this_ptr)

{
  FILE *file;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int iVar1;
  char cVar2;
  undefined4 in_stack_fffffe9c;
  char acStack_68 [96];
  
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("pod.ini",(char *)0x0,"rt","..\\core\\podmain.cpp",0x2f);
  if (file == (FILE *)0x0) {
    engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)&stack0xfffffe94);
    engine_dosio_c_CFileFinder_openSearch_FUN_00481c70
              ((CFileFinder *)&stack0xfffffe98,"*.pod");
    cVar2 = (char)in_stack_fffffe9c;
    while (cVar2 != '\0') {
      (*this_ptr->vtable->mount)((CPod *)this_ptr,&stack0xfffffe9c);
      engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)&stack0xfffffe98);
      cVar2 = (char)in_stack_fffffe9c;
    }
    engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70((CFileFinder *)&stack0xfffffe9c);
    engine_dosio_c_CFileFinder_dtor_FUN_00481c50((CFileFinder *)&stack0xfffffea0,0);
    engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_005513d0((CPod *)this_ptr);
    return;
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&stack0xfffffff8);
  iVar1 = 0;
  if (0 < unaff_EBX) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"%s\n");
      (*this_ptr->vtable->mount)((CPod *)this_ptr,acStack_68);
      iVar1 = iVar1 + 1;
    } while (iVar1 < unaff_EBX);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\podmain.cpp",0x43);
  engine_pod_cpp_CPod_resolveDependenciesAndSort_FUN_005513d0((CPod *)this_ptr);
  return;
}


// Assembly code:
// 005519c0: PUSH EBX
//   Label: core_podmain.cpp_CDemonPod_load_FUN_005519c0
// 005519c1: PUSH EDI
// 005519c2: SUB ESP,0x168
// 005519c8: MOV EBX,dword ptr [ESP + 0x174]
//   XREF to: Stack[0x4] (READ)
// 005519cf: PUSH 0x2f
// 005519d1: PUSH 0x6408f7
//   XREF to: 006408f7 (DATA)
// 005519d6: PUSH 0x64090b
//   XREF to: 0064090b (DATA)
// 005519db: PUSH 0x0
// 005519dd: PUSH 0x64090e
//   XREF to: 0064090e (DATA)
// 005519e2: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 005519e7: ADD ESP,0x14
// 005519ea: MOV EDI,EAX
// 005519ec: TEST EAX,EAX
// 005519ee: JNZ 0x00551a6c
//   XREF to: 00551a6c (CONDITIONAL_JUMP)
// 005519f4: MOV EAX,ESP
// 005519f6: PUSH EAX
// 005519f7: CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   XREF to: 00481c30 (UNCONDITIONAL_CALL)
// 005519fc: ADD ESP,0x4
// 005519ff: PUSH 0x640916
//   XREF to: 00640916 (DATA)
// 00551a04: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x170] (DATA)
// 00551a08: PUSH EAX
// 00551a09: CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   XREF to: 00481c70 (UNCONDITIONAL_CALL)
// 00551a0e: ADD ESP,0x8
// 00551a11: CMP byte ptr [ESP],0x0
//   XREF to: Stack[-0x170] (DATA)
// 00551a15: JZ 0x00551a40
//   XREF to: 00551a40 (CONDITIONAL_JUMP)
// 00551a17: MOV EDX,ESP
//   Label: LAB_00551a17
// 00551a19: PUSH EDX
// 00551a1a: MOV EAX,dword ptr [EBX + 0x194]
// 00551a20: PUSH EBX
// 00551a21: CALL dword ptr [EAX + 0xc]
// 00551a24: ADD ESP,0x8
// 00551a27: MOV EAX,ESP
// 00551a29: PUSH EAX
// 00551a2a: CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   XREF to: 00481cf0 (UNCONDITIONAL_CALL)
// 00551a2f: ADD ESP,0x4
// 00551a32: CMP byte ptr [ESP],0x0
// 00551a36: JNZ 0x00551a17
//   XREF to: 00551a17 (CONDITIONAL_JUMP)
// 00551a38: LEA EAX,[EAX]
// 00551a3e: MOV EDX,EDX
// 00551a40: MOV EAX,ESP
//   Label: LAB_00551a40
// 00551a42: PUSH EAX
// 00551a43: CALL engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
//   XREF to: 00481d70 (UNCONDITIONAL_CALL)
// 00551a48: ADD ESP,0x4
// 00551a4b: PUSH 0x0
// 00551a4d: LEA EAX,[ESP + 0x4]
// 00551a51: PUSH EAX
// 00551a52: CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   XREF to: 00481c50 (UNCONDITIONAL_CALL)
// 00551a57: ADD ESP,0x8
// 00551a5a: PUSH EBX
// 00551a5b: CALL engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0
//   XREF to: 005513d0 (UNCONDITIONAL_CALL)
// 00551a60: ADD ESP,0x4
// 00551a63: ADD ESP,0x168
// 00551a69: POP EDI
// 00551a6a: POP EBX
// 00551a6b: RET
// 00551a6c: PUSH ESI
//   Label: LAB_00551a6c
// 00551a6d: LEA EDX,[ESP + 0x168]
//   XREF to: Stack[-0xc] (DATA)
// 00551a74: PUSH EDX
// 00551a75: PUSH 0x64091c
//   XREF to: 0064091c (DATA)
// 00551a7a: PUSH EAX
// 00551a7b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00551a80: ADD ESP,0xc
// 00551a83: MOV EDX,dword ptr [ESP + 0x168]
//   XREF to: Stack[-0xc] (READ)
//   XREF to: Stack[-0xc] (DATA)
// 00551a8a: XOR ESI,ESI
// 00551a8c: TEST EDX,EDX
// 00551a8e: JLE 0x00551ad0
//   XREF to: 00551ad0 (CONDITIONAL_JUMP)
// 00551a90: LEA EAX,[ESP + 0x118]
//   Label: LAB_00551a90
//   XREF to: Stack[-0x5c] (DATA)
// 00551a97: PUSH EAX
// 00551a98: PUSH 0x640920
//   XREF to: 00640920 (DATA)
// 00551a9d: PUSH EDI
// 00551a9e: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00551aa3: ADD ESP,0xc
// 00551aa6: LEA EAX,[ESP + 0x118]
//   XREF to: Stack[-0x5c] (DATA)
// 00551aad: PUSH EAX
// 00551aae: MOV EDX,dword ptr [EBX + 0x194]
// 00551ab4: PUSH EBX
// 00551ab5: CALL dword ptr [EDX + 0xc]
// 00551ab8: ADD ESP,0x8
// 00551abb: INC ESI
// 00551abc: CMP ESI,dword ptr [ESP + 0x168]
// 00551ac3: JL 0x00551a90
//   XREF to: 00551a90 (CONDITIONAL_JUMP)
// 00551ac5: LEA EAX,[EAX]
// 00551acb: LEA EDX,[EDX]
// 00551ace: MOV EBX,EBX
// 00551ad0: PUSH 0x43
//   Label: LAB_00551ad0
// 00551ad2: PUSH 0x640924
//   XREF to: 00640924 (DATA)
// 00551ad7: PUSH EDI
// 00551ad8: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00551add: ADD ESP,0xc
// 00551ae0: POP ESI
// 00551ae1: PUSH EBX
// 00551ae2: CALL engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0
//   XREF to: 005513d0 (UNCONDITIONAL_CALL)
// 00551ae7: ADD ESP,0x4
// 00551aea: ADD ESP,0x168
// 00551af0: POP EDI
// 00551af1: POP EBX
// 00551af2: RET

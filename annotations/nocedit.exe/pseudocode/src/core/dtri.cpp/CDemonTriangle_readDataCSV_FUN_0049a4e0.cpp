// Name: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0
// Address: 0049a4e0
// Address Range: [[0049a4e0, 0049a522]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0(CDemonTriangle * this_ptr, FILE * file_handle)
// Globals:
//   TerminatedCString s_f_f_f_f_f_f_f_f_f_00622dc2
// Function calls:
//   core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl
core_dtri_cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0(CDemonTriangle *this_ptr,FILE *file_handle)

{
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f,%f,%f,%f,%f,%f,%f\n",this_ptr,&(this_ptr->vertex1).y,
             &(this_ptr->vertex1).z,&this_ptr->vertex2,&(this_ptr->vertex2).y,&(this_ptr->vertex2).z
             ,&this_ptr->vertex3,&(this_ptr->vertex3).y,&(this_ptr->vertex3).z);
  core_dtri_cpp_CDemonTriangle_calculateData_FUN_0049a640(this_ptr);
  return;
}


// Assembly code:
// 0049a4e0: PUSH EBX
//   Label: core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0
// 0049a4e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049a4e5: LEA EAX,[EBX + 0x20]
// 0049a4e8: PUSH EAX
// 0049a4e9: LEA EAX,[EBX + 0x1c]
// 0049a4ec: PUSH EAX
// 0049a4ed: LEA EAX,[EBX + 0x18]
// 0049a4f0: PUSH EAX
// 0049a4f1: LEA EAX,[EBX + 0x14]
// 0049a4f4: PUSH EAX
// 0049a4f5: LEA EAX,[EBX + 0x10]
// 0049a4f8: PUSH EAX
// 0049a4f9: LEA EAX,[EBX + 0xc]
// 0049a4fc: PUSH EAX
// 0049a4fd: LEA EAX,[EBX + 0x8]
// 0049a500: PUSH EAX
// 0049a501: LEA EAX,[EBX + 0x4]
// 0049a504: PUSH EAX
// 0049a505: PUSH EBX
// 0049a506: PUSH 0x622dc2
//   XREF to: 00622dc2 (DATA)
// 0049a50b: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0049a50f: PUSH EDX
// 0049a510: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0049a515: ADD ESP,0x2c
// 0049a518: PUSH EBX
// 0049a519: CALL core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640
//   XREF to: 0049a640 (UNCONDITIONAL_CALL)
// 0049a51e: ADD ESP,0x4
// 0049a521: POP EBX
// 0049a522: RET

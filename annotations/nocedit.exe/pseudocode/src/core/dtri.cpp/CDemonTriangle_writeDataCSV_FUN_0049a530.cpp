// Name: core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_0049a530
// Address: 0049a530
// Address Range: [[0049a530, 0049a596]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_0049a530(CDemonTriangle * this_ptr, FILE * file_handle)
// Globals:
//   TerminatedCString s_f_f_f_f_f_f_f_f_f_00622dde
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl
core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_0049a530(CDemonTriangle *this_ptr,FILE *file_handle)

{
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%f,%f,%f,%f,%f,%f,%f,%f,%f\n",(double)(this_ptr->vertex1).x,
             (double)(this_ptr->vertex1).y,(double)(this_ptr->vertex1).z,
             (double)(this_ptr->vertex2).x,(double)(this_ptr->vertex2).y,
             (double)(this_ptr->vertex2).z,(double)(this_ptr->vertex3).x,
             (double)(this_ptr->vertex3).y,(double)(this_ptr->vertex3).z);
  return;
}


// Assembly code:
// 0049a530: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_0049a530
//   XREF to: Stack[0x4] (READ)
// 0049a534: SUB ESP,0x8
// 0049a537: FLD float ptr [EAX + 0x20]
// 0049a53a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 0049a53d: SUB ESP,0x8
// 0049a540: FLD float ptr [EAX + 0x1c]
// 0049a543: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0049a546: SUB ESP,0x8
// 0049a549: FLD float ptr [EAX + 0x18]
// 0049a54c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0049a54f: SUB ESP,0x8
// 0049a552: FLD float ptr [EAX + 0x14]
// 0049a555: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0049a558: SUB ESP,0x8
// 0049a55b: FLD float ptr [EAX + 0x10]
// 0049a55e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0049a561: SUB ESP,0x8
// 0049a564: FLD float ptr [EAX + 0xc]
// 0049a567: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0049a56a: SUB ESP,0x8
// 0049a56d: FLD float ptr [EAX + 0x8]
// 0049a570: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0049a573: SUB ESP,0x8
// 0049a576: FLD float ptr [EAX + 0x4]
// 0049a579: FSTP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0049a57c: SUB ESP,0x8
// 0049a57f: FLD float ptr [EAX]
// 0049a581: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 0049a584: PUSH 0x622dde
//   XREF to: 00622dde (DATA)
// 0049a589: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 0049a58d: PUSH EDX
// 0049a58e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0049a593: ADD ESP,0x50
// 0049a596: RET

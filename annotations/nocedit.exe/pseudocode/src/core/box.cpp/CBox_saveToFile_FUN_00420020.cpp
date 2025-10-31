// Name: core_box.cpp_CBox_saveToFile_FUN_00420020
// Address: 00420020
// Address Range: [[00420020, 00420172]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBox_saveToFile_FUN_00420020(CBox * this_ptr, FILE * file_handle)
// Cross-references:
//   core_actor.cpp_serializeSimBox_FUN_0040bd70 (0040bd70) at 0040be2c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sboxVersion_0061656d
//   TerminatedCString s_s_d_0061657b
//   TerminatedCString s_sboxStateInfo_00616581
//   TerminatedCString s_s_f_f_f_00616591
//   TerminatedCString s_s_f_f_f_0061659d
//   TerminatedCString s_s_f_f_f_006165a9
//   TerminatedCString s_s_f_006165b5
//   TerminatedCString s_s_f_f_f_006165bb
//   TerminatedCString s_s_f_f_f_006165c7
//   TerminatedCString s_s_d_006165d3
//   double DOUBLE_006165df = 32
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_saveToFile_FUN_00420020(CBox *this_ptr,FILE *file_handle)

{
  undefined4 uStack00000010;
  int iStack00000014;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%sboxVersion\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%sboxStateInfo\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  uStack00000010 = (undefined4)((ulonglong)(double)(this_ptr->angular_velocity).z >> 0x20);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  iStack00000014 = this_ptr->is_valid;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%d\n");
  return;
}


// Assembly code:
// 00420020: PUSH EBX
//   Label: core_box.cpp_CBox_saveToFile_FUN_00420020
// 00420021: PUSH ESI
// 00420022: PUSH EDI
// 00420023: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00420027: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0042002b: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0042002f: PUSH EDI
// 00420030: PUSH 0x61656d
//   XREF to: 0061656d (DATA)
// 00420035: PUSH ESI
// 00420036: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0042003b: ADD ESP,0xc
// 0042003e: PUSH 0x1
// 00420040: PUSH EDI
// 00420041: PUSH 0x61657b
//   XREF to: 0061657b (DATA)
// 00420046: PUSH ESI
// 00420047: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0042004c: ADD ESP,0x10
// 0042004f: PUSH EDI
// 00420050: PUSH 0x616581
//   XREF to: 00616581 (DATA)
// 00420055: PUSH ESI
// 00420056: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0042005b: ADD ESP,0xc
// 0042005e: SUB ESP,0x8
// 00420061: FLD float ptr [EBX + 0x8]
// 00420064: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00420067: SUB ESP,0x8
// 0042006a: FLD float ptr [EBX + 0x4]
// 0042006d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00420070: SUB ESP,0x8
// 00420073: FLD float ptr [EBX]
// 00420075: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00420078: PUSH EDI
// 00420079: PUSH 0x616591
//   XREF to: 00616591 (DATA)
// 0042007e: PUSH ESI
// 0042007f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00420084: ADD ESP,0x24
// 00420087: SUB ESP,0x8
// 0042008a: FLD float ptr [EBX + 0x10]
// 0042008d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00420090: SUB ESP,0x8
// 00420093: FLD float ptr [EBX + 0x14]
// 00420096: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00420099: SUB ESP,0x8
// 0042009c: FLD float ptr [EBX + 0xc]
// 0042009f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004200a2: PUSH EDI
// 004200a3: PUSH 0x61659d
//   XREF to: 0061659d (DATA)
// 004200a8: PUSH ESI
// 004200a9: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004200ae: ADD ESP,0x24
// 004200b1: SUB ESP,0x8
// 004200b4: FLD float ptr [EBX + 0xac]
// 004200ba: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004200bd: SUB ESP,0x8
// 004200c0: FLD float ptr [EBX + 0xa8]
// 004200c6: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 004200c9: SUB ESP,0x8
// 004200cc: FLD float ptr [EBX + 0xa4]
// 004200d2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004200d5: PUSH EDI
// 004200d6: PUSH 0x6165a9
//   XREF to: 006165a9 (DATA)
// 004200db: PUSH ESI
// 004200dc: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004200e1: FLD float ptr [EBX + 0x94]
// 004200e7: ADD ESP,0x24
// 004200ea: FMUL double ptr [0x006165df]
//   XREF to: 006165df (READ)
// 004200f0: SUB ESP,0x8
// 004200f3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004200f6: PUSH EDI
// 004200f7: PUSH 0x6165b5
//   XREF to: 006165b5 (DATA)
// 004200fc: PUSH ESI
// 004200fd: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00420102: ADD ESP,0x14
// 00420105: SUB ESP,0x8
// 00420108: FLD float ptr [EBX + 0x54]
// 0042010b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0042010e: SUB ESP,0x8
// 00420111: FLD float ptr [EBX + 0x50]
// 00420114: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00420117: SUB ESP,0x8
// 0042011a: FLD float ptr [EBX + 0x4c]
// 0042011d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 00420120: PUSH EDI
// 00420121: PUSH 0x6165bb
//   XREF to: 006165bb (DATA)
// 00420126: PUSH ESI
// 00420127: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0042012c: ADD ESP,0x24
// 0042012f: SUB ESP,0x8
// 00420132: FLD float ptr [EBX + 0x78]
// 00420135: FSTP double ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00420138: SUB ESP,0x8
// 0042013b: FLD float ptr [EBX + 0x74]
// 0042013e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00420141: SUB ESP,0x8
// 00420144: FLD float ptr [EBX + 0x70]
// 00420147: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0042014a: PUSH EDI
// 0042014b: PUSH 0x6165c7
//   XREF to: 006165c7 (DATA)
// 00420150: PUSH ESI
// 00420151: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00420156: ADD ESP,0x24
// 00420159: MOV EDX,dword ptr [EBX + 0x254]
// 0042015f: PUSH EDX
// 00420160: PUSH EDI
// 00420161: PUSH 0x6165d3
//   XREF to: 006165d3 (DATA)
// 00420166: PUSH ESI
// 00420167: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0042016c: ADD ESP,0x10
// 0042016f: POP EDI
// 00420170: POP ESI
// 00420171: POP EBX
// 00420172: RET

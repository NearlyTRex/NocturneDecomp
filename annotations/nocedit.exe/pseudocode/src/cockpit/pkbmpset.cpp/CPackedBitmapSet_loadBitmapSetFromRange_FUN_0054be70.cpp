// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70
// Address: 0054be70
// Address Range: [[0054be70, 0054bf37]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70(CPackedBitmapSet * this_ptr, char * filename_format, int start_index, int end_index, char * extension, char * base_path)
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl
cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70
          (CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,
          char *extension,char *base_path)

{
  char *pcVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_ffffff9c;
  
  cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(this_ptr);
  cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
            (this_ptr,(int)(base_path + (1 - (int)extension)));
  this_ptr->base_path = in_stack_0000001c;
  this_ptr->extension = (int)base_path;
  if ((int)extension <= (int)base_path) {
    iVar2 = 0;
    pcVar1 = extension;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff98,extension,pcVar1);
      pcVar1 = pcVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
                ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar2),&stack0xffffff9c,
                 in_stack_0000001c,in_stack_00000020,in_stack_0000002c,in_stack_00000030,
                 in_stack_ffffff9c);
      iVar2 = iVar2 + 0x24;
    } while ((int)pcVar1 <= (int)base_path);
  }
  return;
}


// Assembly code:
// 0054be70: PUSH EBX
//   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70
// 0054be71: PUSH ESI
// 0054be72: PUSH EDI
// 0054be73: PUSH EBP
// 0054be74: SUB ESP,0x64
// 0054be77: MOV EDI,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 0054be7b: MOV ESI,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x14] (READ)
// 0054be82: MOV EBP,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x18] (READ)
// 0054be89: PUSH EDI
// 0054be8a: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
//   XREF to: 0054bd60 (UNCONDITIONAL_CALL)
// 0054be8f: ADD ESP,0x4
// 0054be92: PUSH EDI
// 0054be93: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0
//   XREF to: 0054bcd0 (UNCONDITIONAL_CALL)
// 0054be98: MOV EAX,EBP
// 0054be9a: SUB EAX,ESI
// 0054be9c: ADD ESP,0x4
// 0054be9f: INC EAX
// 0054bea0: PUSH EAX
// 0054bea1: PUSH EDI
// 0054bea2: CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
//   XREF to: 0054bdb0 (UNCONDITIONAL_CALL)
// 0054bea7: ADD ESP,0x8
// 0054beaa: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x10] (READ)
// 0054beb1: MOV dword ptr [EDI + 0x20],EAX
// 0054beb4: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0xc] (READ)
// 0054bebb: MOV EBX,ESI
// 0054bebd: MOV dword ptr [EDI + 0x1c],EAX
// 0054bec0: CMP ESI,EBP
// 0054bec2: JG 0x0054bf30
//   XREF to: 0054bf30 (CONDITIONAL_JUMP)
// 0054bec4: LEA EAX,[ESI*0x8 + 0x0]
// 0054becb: ADD EAX,ESI
// 0054becd: SHL EAX,0x2
// 0054bed0: MOV ESI,EAX
// 0054bed2: NEG ESI
// 0054bed4: ADD ESI,EAX
// 0054bed6: PUSH EBX
//   Label: LAB_0054bed6
// 0054bed7: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x8] (READ)
// 0054bede: PUSH EDX
// 0054bedf: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x74] (DATA)
// 0054bee3: PUSH EAX
// 0054bee4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054bee9: ADD ESP,0xc
// 0054beec: MOV ECX,dword ptr [ESP + 0x94]
//   XREF to: Stack[0x20] (READ)
// 0054bef3: PUSH ECX
// 0054bef4: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[0x1c] (READ)
// 0054befb: PUSH EAX
// 0054befc: MOV EDX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x10] (READ)
// 0054bf03: PUSH EDX
// 0054bf04: MOV ECX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0xc] (READ)
// 0054bf0b: PUSH ECX
// 0054bf0c: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x74] (DATA)
// 0054bf10: PUSH EAX
// 0054bf11: MOV EAX,dword ptr [EDI + 0x4]
// 0054bf14: ADD EAX,ESI
// 0054bf16: PUSH EAX
// 0054bf17: INC EBX
// 0054bf18: CALL cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
//   XREF to: 0054b000 (UNCONDITIONAL_CALL)
// 0054bf1d: ADD ESI,0x24
// 0054bf20: ADD ESP,0x18
// 0054bf23: CMP EBX,EBP
// 0054bf25: JLE 0x0054bed6
//   XREF to: 0054bed6 (CONDITIONAL_JUMP)
// 0054bf27: LEA EAX,[EAX]
// 0054bf2d: LEA EDX,[EDX]
// 0054bf30: ADD ESP,0x64
//   Label: LAB_0054bf30
// 0054bf33: POP EBP
// 0054bf34: POP EDI
// 0054bf35: POP ESI
// 0054bf36: POP EBX
// 0054bf37: RET

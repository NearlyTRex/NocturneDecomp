// Name: shape_superopt.cpp_COptimize_FUN_005d7350
// Address: 005d7350
// Address Range: [[005d7350, 005d745f]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_COptimize_FUN_005d7350(COptimize * this_ptr)
// Globals:
//   TerminatedCString s_Unable_to_add_polygon_fo_006546f3
//   TerminatedCString s_Unable_to_add_shared_tri_0065471a
//   TerminatedCString s_Unable_to_build_complex__00654749
// Function calls:
//   shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0
//   shape_superopt.cpp_FUN_005c7a90
//   shape_superopt.cpp_FUN_005c7b20
//   shape_superopt.cpp_logToFile_FUN_005c7910

#include "nocturne.h"

int __cdecl shape_superopt_cpp_COptimize_FUN_005d7350(COptimize *this_ptr)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  CPoly *pCVar4;
  int iVar5;
  uint uVar6;
  
  shape_superopt_cpp_CObj_clearStateFlags_FUN_005d35e0(&this_ptr->obj,0xa000);
  do {
    uVar6 = 0;
    if ((this_ptr->obj).poly_count != 0) {
      pCVar4 = (this_ptr->obj).poly_array;
      do {
        if ((pCVar4->flags & 0x8000) == 0) break;
        uVar6 = uVar6 + 1;
        pCVar4 = pCVar4 + 1;
      } while (uVar6 < (uint)(this_ptr->obj).poly_count);
    }
    if (uVar6 == (this_ptr->obj).poly_count) {
      return 1;
    }
    iVar2 = (*(code *)this_ptr->vtable->field14_0x38)();
    if (iVar2 == 0) {
      shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add polygon for complex pass",0);
      return 0;
    }
    uVar6 = 0;
    (*(code *)this_ptr->vtable->field12_0x30)();
    if ((this_ptr->obj).poly_count != 0) {
      iVar5 = 0;
      do {
        pCVar4 = (this_ptr->obj).poly_array;
        if ((*(byte *)((int)(pCVar4->uv_coords + 5) + iVar5 + 1) & 0x20) != 0) {
          iVar3 = shape_superopt_cpp_FUN_005c7a90();
          if (iVar3 == 0) {
            shape_superopt_cpp_logToFile_FUN_005c7910("Unable to add shared triangle for complex pass");
            return 0;
          }
          bVar1 = *(byte *)((int)(pCVar4->uv_coords + 5) + iVar5 + 1);
          *(byte *)((int)(pCVar4->uv_coords + 5) + iVar5 + 1) = bVar1 | 0x80;
          *(byte *)((int)(pCVar4->uv_coords + 5) + iVar5 + 1) = bVar1 & 0xdf | 0x80;
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x68;
      } while (uVar6 < (uint)(this_ptr->obj).poly_count);
    }
    iVar5 = shape_superopt_cpp_FUN_005c7b20();
    if (iVar5 == 0) {
      shape_superopt_cpp_logToFile_FUN_005c7910("Unable to build complex polygon edge list",iVar2);
      return 0;
    }
  } while( true );
}


// Assembly code:
// 005d7350: PUSH EBX
//   Label: shape_superopt.cpp_COptimize_FUN_005d7350
// 005d7351: PUSH ESI
// 005d7352: PUSH EDI
// 005d7353: PUSH EBP
// 005d7354: SUB ESP,0x4
// 005d7357: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005d735b: PUSH 0xa000
// 005d7360: PUSH EDI
// 005d7361: CALL shape_superopt.cpp_CObj_clearStateFlags_FUN_005d35e0
//   XREF to: 005d35e0 (UNCONDITIONAL_CALL)
// 005d7366: ADD ESP,0x8
// 005d7369: MOV EDX,dword ptr [EDI + 0x8]
//   Label: LAB_005d7369
// 005d736c: XOR ESI,ESI
// 005d736e: TEST EDX,EDX
// 005d7370: JBE 0x005d7386
//   XREF to: 005d7386 (CONDITIONAL_JUMP)
// 005d7372: MOV EBX,dword ptr [EDI + 0xc]
// 005d7375: TEST byte ptr [EBX + 0x61],0x80
//   Label: LAB_005d7375
// 005d7379: JZ 0x005d7386
//   XREF to: 005d7386 (CONDITIONAL_JUMP)
// 005d737b: INC ESI
// 005d737c: MOV ECX,dword ptr [EDI + 0x8]
// 005d737f: ADD EBX,0x68
// 005d7382: CMP ESI,ECX
// 005d7384: JC 0x005d7375
//   XREF to: 005d7375 (CONDITIONAL_JUMP)
// 005d7386: CMP ESI,dword ptr [EDI + 0x8]
//   Label: LAB_005d7386
// 005d7389: JNZ 0x005d7398
//   XREF to: 005d7398 (CONDITIONAL_JUMP)
// 005d738b: MOV EAX,0x1
// 005d7390: ADD ESP,0x4
// 005d7393: POP EBP
// 005d7394: POP EDI
// 005d7395: POP ESI
// 005d7396: POP EBX
// 005d7397: RET
// 005d7398: PUSH 0x0
//   Label: LAB_005d7398
// 005d739a: MOV EAX,dword ptr [EDI + 0x40]
// 005d739d: PUSH EDI
// 005d739e: CALL dword ptr [EAX + 0x38]
// 005d73a1: ADD ESP,0x8
// 005d73a4: MOV dword ptr [ESP],EAX
// 005d73a7: TEST EAX,EAX
// 005d73a9: JZ 0x005d7432
//   XREF to: 005d7432 (CONDITIONAL_JUMP)
// 005d73af: IMUL ESI,ESI,0x68
// 005d73b2: MOV EAX,dword ptr [EDI + 0xc]
// 005d73b5: PUSH EDI
// 005d73b6: ADD EAX,ESI
// 005d73b8: PUSH EAX
// 005d73b9: MOV EBX,dword ptr [EDI + 0x40]
// 005d73bc: PUSH EDI
// 005d73bd: XOR ESI,ESI
// 005d73bf: CALL dword ptr [EBX + 0x30]
// 005d73c2: MOV EBP,dword ptr [EDI + 0x8]
// 005d73c5: ADD ESP,0xc
// 005d73c8: TEST EBP,EBP
// 005d73ca: JBE 0x005d7407
//   XREF to: 005d7407 (CONDITIONAL_JUMP)
// 005d73cc: XOR EBP,EBP
// 005d73ce: MOV EBX,dword ptr [EDI + 0xc]
//   Label: LAB_005d73ce
// 005d73d1: ADD EBX,EBP
// 005d73d3: TEST byte ptr [EBX + 0x61],0x20
// 005d73d7: JZ 0x005d73fc
//   XREF to: 005d73fc (CONDITIONAL_JUMP)
// 005d73d9: PUSH EBX
// 005d73da: MOV ECX,dword ptr [ESP + 0x4]
// 005d73de: PUSH ECX
// 005d73df: CALL shape_superopt.cpp_FUN_005c7a90
//   XREF to: 005c7a90 (UNCONDITIONAL_CALL)
// 005d73e4: ADD ESP,0x8
// 005d73e7: TEST EAX,EAX
// 005d73e9: JZ 0x005d7449
//   XREF to: 005d7449 (CONDITIONAL_JUMP)
// 005d73eb: MOV DH,byte ptr [EBX + 0x61]
// 005d73ee: OR DH,0x80
// 005d73f1: MOV CL,DH
// 005d73f3: MOV byte ptr [EBX + 0x61],DH
// 005d73f6: AND CL,0xdf
// 005d73f9: MOV byte ptr [EBX + 0x61],CL
// 005d73fc: INC ESI
//   Label: LAB_005d73fc
// 005d73fd: MOV EAX,dword ptr [EDI + 0x8]
// 005d7400: ADD EBP,0x68
// 005d7403: CMP ESI,EAX
// 005d7405: JC 0x005d73ce
//   XREF to: 005d73ce (CONDITIONAL_JUMP)
// 005d7407: MOV EDX,dword ptr [ESP]
//   Label: LAB_005d7407
// 005d740a: PUSH EDX
// 005d740b: CALL shape_superopt.cpp_FUN_005c7b20
//   XREF to: 005c7b20 (UNCONDITIONAL_CALL)
// 005d7410: ADD ESP,0x4
// 005d7413: TEST EAX,EAX
// 005d7415: JNZ 0x005d7369
//   XREF to: 005d7369 (CONDITIONAL_JUMP)
// 005d741b: PUSH 0x654749
//   XREF to: 00654749 (DATA)
// 005d7420: CALL shape_superopt.cpp_logToFile_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d7425: ADD ESP,0x4
// 005d7428: XOR EAX,EAX
// 005d742a: ADD ESP,0x4
// 005d742d: POP EBP
// 005d742e: POP EDI
// 005d742f: POP ESI
// 005d7430: POP EBX
// 005d7431: RET
// 005d7432: PUSH 0x6546f3
//   Label: LAB_005d7432
//   XREF to: 006546f3 (DATA)
// 005d7437: CALL shape_superopt.cpp_logToFile_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d743c: ADD ESP,0x4
// 005d743f: XOR EAX,EAX
// 005d7441: ADD ESP,0x4
// 005d7444: POP EBP
// 005d7445: POP EDI
// 005d7446: POP ESI
// 005d7447: POP EBX
// 005d7448: RET
// 005d7449: PUSH 0x65471a
//   Label: LAB_005d7449
//   XREF to: 0065471a (DATA)
// 005d744e: CALL shape_superopt.cpp_logToFile_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d7453: ADD ESP,0x4
// 005d7456: XOR EAX,EAX
// 005d7458: ADD ESP,0x4
// 005d745b: POP EBP
// 005d745c: POP EDI
// 005d745d: POP ESI
// 005d745e: POP EBX
// 005d745f: RET

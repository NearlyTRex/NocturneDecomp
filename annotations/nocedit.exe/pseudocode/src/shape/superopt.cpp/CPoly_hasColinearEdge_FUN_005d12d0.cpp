// Name: shape_superopt.cpp_CPoly_hasColinearEdge_FUN_005d12d0
// Address: 005d12d0
// Address Range: [[005d12d0, 005d1386]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CPoly_hasColinearEdge_FUN_005d12d0(CPoly * this_ptr, CPoly * other)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_hasColinearEdge_FUN_005d12d0(CPoly *this_ptr,CPoly *other)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = &other->vertex_idx_0;
  piVar1 = &this_ptr->vertex_idx_0;
  if ((((((this_ptr->vertex_idx_0 != other->vertex_idx_0) ||
         (other->vertex_idx_1 != this_ptr->vertex_idx_1)) &&
        ((other->vertex_idx_1 != *piVar1 || (other->vertex_idx_2 != this_ptr->vertex_idx_1)))) &&
       ((other->vertex_idx_2 != *piVar1 || (*piVar2 != this_ptr->vertex_idx_1)))) &&
      ((other->vertex_idx_1 != this_ptr->vertex_idx_1 ||
       (other->vertex_idx_2 != this_ptr->vertex_idx_2)))) &&
     (((((other->vertex_idx_2 != this_ptr->vertex_idx_1 || (*piVar2 != this_ptr->vertex_idx_2)) &&
        ((*piVar2 != this_ptr->vertex_idx_1 || (other->vertex_idx_1 != this_ptr->vertex_idx_2)))) &&
       ((other->vertex_idx_2 != this_ptr->vertex_idx_2 || (*piVar2 != *piVar1)))) &&
      (((*piVar2 != this_ptr->vertex_idx_2 || (other->vertex_idx_1 != *piVar1)) &&
       ((other->vertex_idx_1 != this_ptr->vertex_idx_2 || (other->vertex_idx_2 != *piVar1)))))))) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 005d12d0: PUSH EBX
//   Label: shape_superopt.cpp_CPoly_hasColinearEdge_FUN_005d12d0
// 005d12d1: PUSH ESI
// 005d12d2: PUSH EDI
// 005d12d3: PUSH EBP
// 005d12d4: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d12d8: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d12dc: MOV ECX,dword ptr [EAX + 0x4]
// 005d12df: MOV EBX,dword ptr [EDX + 0x4]
// 005d12e2: ADD EDX,0x4
// 005d12e5: ADD EAX,0x4
// 005d12e8: CMP ECX,EBX
// 005d12ea: JNZ 0x005d12f8
//   XREF to: 005d12f8 (CONDITIONAL_JUMP)
// 005d12ec: MOV ESI,dword ptr [EDX + 0x4]
// 005d12ef: CMP ESI,dword ptr [EAX + 0x4]
// 005d12f2: JZ 0x005d1376
//   XREF to: 005d1376 (CONDITIONAL_JUMP)
// 005d12f8: MOV EDI,dword ptr [EDX + 0x4]
//   Label: LAB_005d12f8
// 005d12fb: CMP EDI,dword ptr [EAX]
// 005d12fd: JNZ 0x005d130b
//   XREF to: 005d130b (CONDITIONAL_JUMP)
// 005d12ff: MOV EBP,dword ptr [EDX + 0x8]
// 005d1302: CMP EBP,dword ptr [EAX + 0x4]
// 005d1305: JZ 0x005d1376
//   XREF to: 005d1376 (CONDITIONAL_JUMP)
// 005d130b: MOV EBX,dword ptr [EDX + 0x8]
//   Label: LAB_005d130b
// 005d130e: CMP EBX,dword ptr [EAX]
// 005d1310: JNZ 0x005d131d
//   XREF to: 005d131d (CONDITIONAL_JUMP)
// 005d1312: MOV ESI,dword ptr [EDX]
// 005d1314: CMP ESI,dword ptr [EAX + 0x4]
// 005d1317: JZ 0x005d1376
//   XREF to: 005d1376 (CONDITIONAL_JUMP)
// 005d131d: MOV EDI,dword ptr [EDX + 0x4]
//   Label: LAB_005d131d
// 005d1320: CMP EDI,dword ptr [EAX + 0x4]
// 005d1323: JNZ 0x005d132d
//   XREF to: 005d132d (CONDITIONAL_JUMP)
// 005d1325: MOV EBP,dword ptr [EDX + 0x8]
// 005d1328: CMP EBP,dword ptr [EAX + 0x8]
// 005d132b: JZ 0x005d1376
//   XREF to: 005d1376 (CONDITIONAL_JUMP)
// 005d132d: MOV EBX,dword ptr [EDX + 0x8]
//   Label: LAB_005d132d
// 005d1330: CMP EBX,dword ptr [EAX + 0x4]
// 005d1333: JNZ 0x005d133c
//   XREF to: 005d133c (CONDITIONAL_JUMP)
// 005d1335: MOV ESI,dword ptr [EDX]
// 005d1337: CMP ESI,dword ptr [EAX + 0x8]
// 005d133a: JZ 0x005d1376
//   XREF to: 005d1376 (CONDITIONAL_JUMP)
// 005d133c: MOV EDI,dword ptr [EDX]
//   Label: LAB_005d133c
// 005d133e: CMP EDI,dword ptr [EAX + 0x4]
// 005d1341: JNZ 0x005d134b
//   XREF to: 005d134b (CONDITIONAL_JUMP)
// 005d1343: MOV EBP,dword ptr [EDX + 0x4]
// 005d1346: CMP EBP,dword ptr [EAX + 0x8]
// 005d1349: JZ 0x005d1376
//   XREF to: 005d1376 (CONDITIONAL_JUMP)
// 005d134b: MOV EBX,dword ptr [EDX + 0x8]
//   Label: LAB_005d134b
// 005d134e: CMP EBX,dword ptr [EAX + 0x8]
// 005d1351: JNZ 0x005d1359
//   XREF to: 005d1359 (CONDITIONAL_JUMP)
// 005d1353: MOV ESI,dword ptr [EDX]
// 005d1355: CMP ESI,dword ptr [EAX]
// 005d1357: JZ 0x005d1376
//   XREF to: 005d1376 (CONDITIONAL_JUMP)
// 005d1359: MOV EDI,dword ptr [EDX]
//   Label: LAB_005d1359
// 005d135b: CMP EDI,dword ptr [EAX + 0x8]
// 005d135e: JNZ 0x005d1367
//   XREF to: 005d1367 (CONDITIONAL_JUMP)
// 005d1360: MOV EBP,dword ptr [EDX + 0x4]
// 005d1363: CMP EBP,dword ptr [EAX]
// 005d1365: JZ 0x005d1376
//   XREF to: 005d1376 (CONDITIONAL_JUMP)
// 005d1367: MOV EBX,dword ptr [EDX + 0x4]
//   Label: LAB_005d1367
// 005d136a: CMP EBX,dword ptr [EAX + 0x8]
// 005d136d: JNZ 0x005d1380
//   XREF to: 005d1380 (CONDITIONAL_JUMP)
// 005d136f: MOV ESI,dword ptr [EDX + 0x8]
// 005d1372: CMP ESI,dword ptr [EAX]
// 005d1374: JNZ 0x005d1380
//   XREF to: 005d1380 (CONDITIONAL_JUMP)
// 005d1376: MOV EAX,0x1
//   Label: LAB_005d1376
// 005d137b: POP EBP
// 005d137c: POP EDI
// 005d137d: POP ESI
// 005d137e: POP EBX
// 005d137f: RET
// 005d1380: XOR EAX,EAX
//   Label: LAB_005d1380
// 005d1382: POP EBP
// 005d1383: POP EDI
// 005d1384: POP ESI
// 005d1385: POP EBX
// 005d1386: RET

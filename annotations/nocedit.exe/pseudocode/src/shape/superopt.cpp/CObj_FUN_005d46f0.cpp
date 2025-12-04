// Name: shape_superopt.cpp_CObj_FUN_005d46f0
// Address: 005d46f0
// Address Range: [[005d46f0, 005d47a1]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_FUN_005d46f0(CObj * this_ptr)
// Cross-references:
//   shape_superopt.cpp_COptimize_FUN_005d7290 (005d7290) at 005d72ad [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Deleting_invalid_polygon_006544ce
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_FUN_005d46f0(CObj *this_ptr)

{
  int iVar1;
  uint index;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  void *ptr;
  int iVar3;
  
  ptr = (void *)0x0;
  if (1000 < (uint)this_ptr->poly_count) {
    ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  index = 0;
  iVar3 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      if ((ptr != (void *)0x0) && ((char)index == '\0')) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff94,"Deleting invalid polygons (%d deleted so far)",iVar3)
        ;
      }
      iVar1 = (*(this_ptr->poly_array[index].vtable)->isValid)(this_ptr->poly_array + index);
      uVar2 = index;
      if (iVar1 == 0) {
        uVar2 = index - 1;
        iVar1 = (*this_ptr->vtable->removePolygon)(this_ptr,index);
        if (iVar1 == 0) {
          shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
          return 0;
        }
        iVar3 = iVar3 + 1;
      }
      index = uVar2 + 1;
    } while (index < (uint)this_ptr->poly_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  iVar3 = (*(code *)this_ptr->vtable->field51_0xcc)();
  return iVar3;
}


// Assembly code:
// 005d46f0: PUSH EBX
//   Label: shape_superopt.cpp_CObj_FUN_005d46f0
// 005d46f1: PUSH ESI
// 005d46f2: PUSH EDI
// 005d46f3: PUSH EBP
// 005d46f4: SUB ESP,0x5c
// 005d46f7: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 005d46fb: MOV EDX,dword ptr [ESI + 0x8]
// 005d46fe: XOR EBP,EBP
// 005d4700: CMP EDX,0x3e8
// 005d4706: JA 0x005d4759
//   XREF to: 005d4759 (CONDITIONAL_JUMP)
// 005d4708: MOV ECX,dword ptr [ESI + 0x8]
//   Label: LAB_005d4708
// 005d470b: XOR EBX,EBX
// 005d470d: XOR EDI,EDI
// 005d470f: TEST ECX,ECX
// 005d4711: JBE 0x005d473b
//   XREF to: 005d473b (CONDITIONAL_JUMP)
// 005d4713: TEST EBP,EBP
//   Label: LAB_005d4713
// 005d4715: JZ 0x005d471c
//   XREF to: 005d471c (CONDITIONAL_JUMP)
// 005d4717: TEST BL,0xff
// 005d471a: JZ 0x005d4767
//   XREF to: 005d4767 (CONDITIONAL_JUMP)
// 005d471c: IMUL EAX,EBX,0x68
//   Label: LAB_005d471c
// 005d471f: MOV EDX,dword ptr [ESI + 0xc]
// 005d4722: ADD EAX,EDX
// 005d4724: PUSH EAX
// 005d4725: MOV EDX,dword ptr [EAX + 0x64]
// 005d4728: CALL dword ptr [EDX + 0x88]
// 005d472e: ADD ESP,0x4
// 005d4731: TEST EAX,EAX
// 005d4733: JZ 0x005d477c
//   XREF to: 005d477c (CONDITIONAL_JUMP)
// 005d4735: INC EBX
//   Label: LAB_005d4735
// 005d4736: CMP EBX,dword ptr [ESI + 0x8]
// 005d4739: JC 0x005d4713
//   XREF to: 005d4713 (CONDITIONAL_JUMP)
// 005d473b: PUSH EBP
//   Label: LAB_005d473b
// 005d473c: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005d4741: ADD ESP,0x4
// 005d4744: MOV EAX,dword ptr [ESI + 0x18]
// 005d4747: PUSH ESI
// 005d4748: CALL dword ptr [EAX + 0xcc]
// 005d474e: ADD ESP,0x4
// 005d4751: ADD ESP,0x5c
// 005d4754: POP EBP
// 005d4755: POP EDI
// 005d4756: POP ESI
// 005d4757: POP EBX
// 005d4758: RET
// 005d4759: PUSH 0x4
//   Label: LAB_005d4759
// 005d475b: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
//   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)
// 005d4760: ADD ESP,0x4
// 005d4763: MOV EBP,EAX
// 005d4765: JMP 0x005d4708
//   XREF to: 005d4708 (UNCONDITIONAL_JUMP)
// 005d4767: PUSH EDI
//   Label: LAB_005d4767
// 005d4768: PUSH 0x6544ce
//   XREF to: 006544ce (DATA)
// 005d476d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 005d4771: PUSH EAX
// 005d4772: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005d4777: ADD ESP,0xc
// 005d477a: JMP 0x005d471c
//   XREF to: 005d471c (UNCONDITIONAL_JUMP)
// 005d477c: PUSH EBX
//   Label: LAB_005d477c
// 005d477d: MOV EAX,dword ptr [ESI + 0x18]
// 005d4780: PUSH ESI
// 005d4781: DEC EBX
// 005d4782: CALL dword ptr [EAX + 0x40]
// 005d4785: ADD ESP,0x8
// 005d4788: TEST EAX,EAX
// 005d478a: JZ 0x005d478f
//   XREF to: 005d478f (CONDITIONAL_JUMP)
// 005d478c: INC EDI
// 005d478d: JMP 0x005d4735
//   XREF to: 005d4735 (UNCONDITIONAL_JUMP)
// 005d478f: PUSH EBP
//   Label: LAB_005d478f
// 005d4790: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005d4795: ADD ESP,0x4
// 005d4798: XOR EAX,EAX
// 005d479a: ADD ESP,0x5c
// 005d479d: POP EBP
// 005d479e: POP EDI
// 005d479f: POP ESI
// 005d47a0: POP EBX
// 005d47a1: RET

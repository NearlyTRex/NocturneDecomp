// Name: shape_meshlod.cpp_CLodMesh_FUN_00518490
// Address: 00518490
// Address Range: [[00518490, 00518734]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_FUN_00518490(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00518910 (00518910) at 00518958 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02f33330
// Function calls:
//   shape_meshlod.cpp_CLodMesh_FUN_00515ec0
//   shape_meshlod.cpp_FUN_00515e90
//   shape_meshlod.cpp_FUN_00516420
//   shape_meshlod.cpp_FUN_00518740
//   shape_meshlod.cpp_FUN_0051a980

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_FUN_00518490(CLodMesh *this_ptr)

{
  SLodTriangle *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SLodTriangle *pSVar6;
  int unaff_ESI;
  int in_stack_00000008;
  int in_stack_00000014;
  int local_18;
  
  iVar2 = shape_meshlod_cpp_CLodMesh_FUN_00515ec0(this_ptr);
  if (iVar2 < 0) {
    return -1;
  }
  if (this_ptr->edges_ptr[iVar2].deletion_flag != 0) {
    return -1;
  }
  if (this_ptr->edges_ptr[iVar2].adjacent_tri_count < 2) {
    return -1;
  }
  for (local_18 = 0; local_18 < this_ptr->vertex_data[in_stack_00000008].adjacent_edge_count;
      local_18 = local_18 + 1) {
    iVar2 = shape_meshlod_cpp_FUN_0051a980();
    if ((iVar2 != in_stack_00000014) &&
       (iVar2 = shape_meshlod_cpp_CLodMesh_FUN_00515ec0(this_ptr), -1 < iVar2)) {
      iVar5 = 0;
      while( true ) {
        if (this_ptr->edges_ptr[iVar2].adjacent_tri_count <= iVar5) {
          return -1;
        }
        iVar3 = shape_meshlod_cpp_FUN_00515e90();
        if (-1 < iVar3) break;
        iVar5 = iVar5 + 1;
      }
    }
  }
  iVar2 = shape_meshlod_cpp_FUN_00518740();
  if (((iVar2 != 0) && (iVar2 = shape_meshlod_cpp_FUN_00518740(), iVar2 != 0)) &&
     (1 < this_ptr->edges_ptr[unaff_ESI].adjacent_tri_count)) {
    return -1;
  }
  if (DAT_02f33330 != 0) {
    return unaff_ESI;
  }
  iVar2 = 0;
  if (0 < *(int *)(local_18 + 0x24)) {
    iVar5 = local_18;
    do {
      pSVar6 = this_ptr->triangle_data + *(int *)(iVar5 + 0x28);
      iVar4 = 0;
      iVar3 = pSVar6->edge_idx_0;
      pSVar1 = pSVar6;
      while (iVar3 != unaff_ESI) {
        iVar4 = iVar4 + 1;
        if (2 < iVar4) goto LAB_0051865b;
        iVar3 = pSVar1->edge_idx_1;
        pSVar1 = (SLodTriangle *)(pSVar1->field0_0x0 + 4);
      }
      iVar3 = iVar4 + -1;
      if (iVar3 < 0) {
        iVar3 = 2;
      }
      iVar4 = iVar4 + 1;
      if (2 < iVar4) {
        iVar4 = 0;
      }
      if ((*(int *)this_ptr->edges_ptr[*(int *)(pSVar6->field9_0x44 + iVar3 * 4 + -0x10)].
                   field4_0x18 != 0) &&
         (*(int *)this_ptr->edges_ptr[*(int *)(pSVar6->field9_0x44 + iVar4 * 4 + -0x10)].field4_0x18
          != 0)) {
        return -1;
      }
      if (1 < *(int *)this_ptr->edges_ptr[*(int *)(pSVar6->field9_0x44 + iVar3 * 4 + -0x10)].
                      field4_0x18) {
        return -1;
      }
      if (1 < *(int *)this_ptr->edges_ptr[*(int *)(pSVar6->field9_0x44 + iVar4 * 4 + -0x10)].
                      field4_0x18) {
        return -1;
      }
LAB_0051865b:
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar2 < *(int *)(local_18 + 0x24));
  }
  iVar2 = shape_meshlod_cpp_FUN_00516420();
  iVar5 = shape_meshlod_cpp_FUN_00516420();
  if (*(int *)(local_18 + 0x18) == 0) {
    if (iVar5 < 1) {
      return unaff_ESI;
    }
    if (iVar2 < 1) {
      return unaff_ESI;
    }
  }
  else if (((iVar2 < 3) || (iVar5 < 3)) && ((iVar2 != 1 || (iVar5 == 2)))) {
    if (iVar5 != 1) {
      return unaff_ESI;
    }
    if (iVar2 == 2) {
      return unaff_ESI;
    }
    return -1;
  }
  return -1;
}


// Assembly code:
// 00518490: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_00518490
// 00518491: PUSH ESI
// 00518492: PUSH EDI
// 00518493: PUSH EBP
// 00518494: SUB ESP,0x28
// 00518497: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 0051849b: MOV EBP,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 0051849f: PUSH EDI
// 005184a0: ADD ESP,0x4
// 005184a3: PUSH 0x0
// 005184a5: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0xc] (READ)
// 005184a9: PUSH EDX
// 005184aa: PUSH EBP
// 005184ab: PUSH EDI
// 005184ac: CALL shape_meshlod.cpp_CLodMesh_FUN_00515ec0
//   XREF to: 00515ec0 (UNCONDITIONAL_CALL)
// 005184b1: ADD ESP,0x10
// 005184b4: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005184b8: TEST EAX,EAX
// 005184ba: JL 0x0051851c
//   XREF to: 0051851c (CONDITIONAL_JUMP)
// 005184bc: SHL EAX,0x4
// 005184bf: MOV EDX,EAX
// 005184c1: SHL EAX,0x4
// 005184c4: SUB EAX,EDX
// 005184c6: MOV EDX,dword ptr [EDI + 0x48]
// 005184c9: ADD EDX,EAX
// 005184cb: MOV ECX,dword ptr [EDX + 0x14]
// 005184ce: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005184d2: TEST ECX,ECX
// 005184d4: JNZ 0x0051851c
//   XREF to: 0051851c (CONDITIONAL_JUMP)
// 005184d6: CMP dword ptr [EDX + 0x24],0x2
// 005184da: JL 0x0051851c
//   XREF to: 0051851c (CONDITIONAL_JUMP)
// 005184dc: IMUL EAX,EBP,0x4c4
// 005184e2: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005184e6: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005184ea: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_005184ea
//   XREF to: Stack[-0x2c] (READ)
// 005184ee: MOV EAX,dword ptr [EDI + 0x4]
// 005184f1: ADD EAX,EDX
// 005184f3: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 005184f7: CMP EDX,dword ptr [EAX + 0x3f8]
// 005184fd: JGE 0x00518591
//   XREF to: 00518591 (CONDITIONAL_JUMP)
// 00518503: PUSH EDX
// 00518504: PUSH EBP
// 00518505: PUSH EDI
// 00518506: CALL shape_meshlod.cpp_FUN_0051a980
//   XREF to: 0051a980 (UNCONDITIONAL_CALL)
// 0051850b: ADD ESP,0xc
// 0051850e: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0xc] (READ)
// 00518512: CMP EAX,EBX
// 00518514: JNZ 0x00518529
//   XREF to: 00518529 (CONDITIONAL_JUMP)
// 00518516: INC dword ptr [ESP + 0x1c]
//   Label: LAB_00518516
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0051851a: JMP 0x005184ea
//   XREF to: 005184ea (UNCONDITIONAL_JUMP)
// 0051851c: MOV EAX,0xffffffff
//   Label: LAB_0051851c
// 00518521: ADD ESP,0x28
// 00518524: POP EBP
// 00518525: POP EDI
// 00518526: POP ESI
// 00518527: POP EBX
// 00518528: RET
// 00518529: PUSH 0x0
//   Label: LAB_00518529
// 0051852b: PUSH EBX
// 0051852c: PUSH EAX
// 0051852d: PUSH EDI
// 0051852e: CALL shape_meshlod.cpp_CLodMesh_FUN_00515ec0
//   XREF to: 00515ec0 (UNCONDITIONAL_CALL)
// 00518533: ADD ESP,0x10
// 00518536: TEST EAX,EAX
// 00518538: JL 0x00518516
//   XREF to: 00518516 (CONDITIONAL_JUMP)
// 0051853a: IMUL EAX,EAX,0xf0
// 00518540: XOR EDX,EDX
// 00518542: XOR EBX,EBX
// 00518544: XOR ESI,ESI
// 00518546: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0051854a: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0051854e: MOV ECX,dword ptr [ESP + 0x20]
//   Label: LAB_0051854e
//   XREF to: Stack[-0x18] (READ)
// 00518552: MOV EAX,dword ptr [EDI + 0x48]
// 00518555: ADD EAX,ECX
// 00518557: CMP EBX,dword ptr [EAX + 0x24]
// 0051855a: JGE 0x0051857d
//   XREF to: 0051857d (CONDITIONAL_JUMP)
// 0051855c: IMUL EAX,dword ptr [ESI + EAX*0x1 + 0x28],0x8c
// 00518564: MOV EDX,dword ptr [EDI + 0xc]
// 00518567: PUSH EBP
// 00518568: ADD EAX,EDX
// 0051856a: PUSH EAX
// 0051856b: CALL shape_meshlod.cpp_FUN_00515e90
//   XREF to: 00515e90 (UNCONDITIONAL_CALL)
// 00518570: ADD ESP,0x8
// 00518573: TEST EAX,EAX
// 00518575: JGE 0x00518516
//   XREF to: 00518516 (CONDITIONAL_JUMP)
// 00518577: INC EBX
// 00518578: ADD ESI,0x4
// 0051857b: JMP 0x0051854e
//   XREF to: 0051854e (UNCONDITIONAL_JUMP)
// 0051857d: CMP dword ptr [ESP + 0x18],0x0
//   Label: LAB_0051857d
//   XREF to: Stack[-0x20] (READ)
// 00518582: JNZ 0x00518516
//   XREF to: 00518516 (CONDITIONAL_JUMP)
// 00518584: MOV EAX,0xffffffff
// 00518589: ADD ESP,0x28
// 0051858c: POP EBP
// 0051858d: POP EDI
// 0051858e: POP ESI
// 0051858f: POP EBX
// 00518590: RET
// 00518591: PUSH EBP
//   Label: LAB_00518591
// 00518592: PUSH EDI
// 00518593: CALL shape_meshlod.cpp_FUN_00518740
//   XREF to: 00518740 (UNCONDITIONAL_CALL)
// 00518598: ADD ESP,0x8
// 0051859b: TEST EAX,EAX
// 0051859d: JNZ 0x005186d2
//   XREF to: 005186d2 (CONDITIONAL_JUMP)
// 005185a3: CMP dword ptr [0x02f33330],0x0
//   Label: LAB_005185a3
//   XREF to: 02f33330 (READ)
// 005185aa: JNZ 0x00518729
//   XREF to: 00518729 (CONDITIONAL_JUMP)
// 005185b0: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0xc] (READ)
// 005185b4: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005185b8: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 005185bc: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 005185c0: MOV EDX,dword ptr [EAX + 0x24]
// 005185c3: XOR EBP,EBP
// 005185c5: TEST EDX,EDX
// 005185c7: JLE 0x0051866e
//   XREF to: 0051866e (CONDITIONAL_JUMP)
// 005185cd: MOV EAX,dword ptr [EDI + 0xc]
// 005185d0: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 005185d4: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005185d8: IMUL EBX,dword ptr [ESI + 0x28],0x8c
//   Label: LAB_005185d8
// 005185df: ADD EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 005185e3: XOR EAX,EAX
// 005185e5: MOV ECX,dword ptr [EBX + 0x34]
// 005185e8: MOV EDX,EBX
// 005185ea: CMP ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 005185ee: JZ 0x00518602
//   XREF to: 00518602 (CONDITIONAL_JUMP)
// 005185f0: INC EAX
//   Label: LAB_005185f0
// 005185f1: ADD EDX,0x4
// 005185f4: CMP EAX,0x3
// 005185f7: JGE 0x0051865b
//   XREF to: 0051865b (CONDITIONAL_JUMP)
// 005185f9: MOV ECX,dword ptr [EDX + 0x34]
// 005185fc: CMP ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 00518600: JNZ 0x005185f0
//   XREF to: 005185f0 (CONDITIONAL_JUMP)
// 00518602: LEA EDX,[EAX + -0x1]
//   Label: LAB_00518602
// 00518605: TEST EDX,EDX
// 00518607: JL 0x00518711
//   XREF to: 00518711 (CONDITIONAL_JUMP)
// 0051860d: MOV ECX,dword ptr [EBX + EDX*0x4 + 0x34]
//   Label: LAB_0051860d
// 00518611: IMUL EDX,ECX,0xf0
// 00518617: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x38] (DATA)
// 0051861a: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0051861d: MOV EDX,dword ptr [EDI + 0x48]
// 00518620: INC EAX
// 00518621: ADD EDX,ECX
// 00518623: CMP EAX,0x3
// 00518626: JL 0x0051862a
//   XREF to: 0051862a (CONDITIONAL_JUMP)
// 00518628: XOR EAX,EAX
// 0051862a: IMUL EAX,dword ptr [EBX + EAX*0x4 + 0x34],0xf0
//   Label: LAB_0051862a
// 00518632: MOV EBX,dword ptr [EDI + 0x48]
// 00518635: ADD EAX,EBX
// 00518637: CMP dword ptr [EDX + 0x18],0x0
// 0051863b: JZ 0x00518647
//   XREF to: 00518647 (CONDITIONAL_JUMP)
// 0051863d: CMP dword ptr [EAX + 0x18],0x0
// 00518641: JNZ 0x0051851c
//   XREF to: 0051851c (CONDITIONAL_JUMP)
// 00518647: CMP dword ptr [EDX + 0x18],0x1
//   Label: LAB_00518647
// 0051864b: JG 0x0051851c
//   XREF to: 0051851c (CONDITIONAL_JUMP)
// 00518651: CMP dword ptr [EAX + 0x18],0x1
// 00518655: JG 0x0051851c
//   XREF to: 0051851c (CONDITIONAL_JUMP)
// 0051865b: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0051865b
//   XREF to: Stack[-0x24] (READ)
// 0051865f: INC EBP
// 00518660: MOV EBX,dword ptr [EAX + 0x24]
// 00518663: ADD ESI,0x4
// 00518666: CMP EBP,EBX
// 00518668: JL 0x005185d8
//   XREF to: 005185d8 (CONDITIONAL_JUMP)
// 0051866e: MOV ESI,dword ptr [ESP + 0x8]
//   Label: LAB_0051866e
//   XREF to: Stack[-0x30] (READ)
// 00518672: PUSH ESI
// 00518673: PUSH EDI
// 00518674: CALL shape_meshlod.cpp_FUN_00516420
//   XREF to: 00516420 (UNCONDITIONAL_CALL)
// 00518679: ADD ESP,0x8
// 0051867c: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x34] (READ)
// 00518680: PUSH EBP
// 00518681: PUSH EDI
// 00518682: MOV EBX,EAX
// 00518684: MOV ESI,EAX
// 00518686: CALL shape_meshlod.cpp_FUN_00516420
//   XREF to: 00516420 (UNCONDITIONAL_CALL)
// 0051868b: ADD ESP,0x8
// 0051868e: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 00518692: MOV EDI,dword ptr [ECX + 0x18]
// 00518695: MOV EDX,EAX
// 00518697: TEST EDI,EDI
// 00518699: JZ 0x0051871b
//   XREF to: 0051871b (CONDITIONAL_JUMP)
// 0051869f: CMP EBX,0x3
// 005186a2: JL 0x005186ad
//   XREF to: 005186ad (CONDITIONAL_JUMP)
// 005186a4: CMP EAX,0x3
// 005186a7: JGE 0x0051851c
//   XREF to: 0051851c (CONDITIONAL_JUMP)
// 005186ad: CMP ESI,0x1
//   Label: LAB_005186ad
// 005186b0: JNZ 0x005186bb
//   XREF to: 005186bb (CONDITIONAL_JUMP)
// 005186b2: CMP EDX,0x2
// 005186b5: JNZ 0x0051851c
//   XREF to: 0051851c (CONDITIONAL_JUMP)
// 005186bb: CMP EDX,0x1
//   Label: LAB_005186bb
// 005186be: JNZ 0x00518729
//   XREF to: 00518729 (CONDITIONAL_JUMP)
// 005186c0: CMP ESI,0x2
// 005186c3: JZ 0x00518729
//   XREF to: 00518729 (CONDITIONAL_JUMP)
// 005186c5: MOV EAX,0xffffffff
// 005186ca: ADD ESP,0x28
// 005186cd: POP EBP
// 005186ce: POP EDI
// 005186cf: POP ESI
// 005186d0: POP EBX
// 005186d1: RET
// 005186d2: MOV EBX,dword ptr [ESP + 0x44]
//   Label: LAB_005186d2
//   XREF to: Stack[0xc] (READ)
// 005186d6: PUSH EBX
// 005186d7: PUSH EDI
// 005186d8: CALL shape_meshlod.cpp_FUN_00518740
//   XREF to: 00518740 (UNCONDITIONAL_CALL)
// 005186dd: ADD ESP,0x8
// 005186e0: TEST EAX,EAX
// 005186e2: JZ 0x005185a3
//   XREF to: 005185a3 (CONDITIONAL_JUMP)
// 005186e8: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 005186ec: SHL EAX,0x4
// 005186ef: MOV EDX,EAX
// 005186f1: SHL EAX,0x4
// 005186f4: SUB EAX,EDX
// 005186f6: MOV EDX,dword ptr [EDI + 0x48]
// 005186f9: CMP dword ptr [EDX + EAX*0x1 + 0x24],0x2
// 005186fe: JL 0x005185a3
//   XREF to: 005185a3 (CONDITIONAL_JUMP)
// 00518704: MOV EAX,0xffffffff
// 00518709: ADD ESP,0x28
// 0051870c: POP EBP
// 0051870d: POP EDI
// 0051870e: POP ESI
// 0051870f: POP EBX
// 00518710: RET
// 00518711: MOV EDX,0x2
//   Label: LAB_00518711
// 00518716: JMP 0x0051860d
//   XREF to: 0051860d (UNCONDITIONAL_JUMP)
// 0051871b: CMP EAX,0x1
//   Label: LAB_0051871b
// 0051871e: JL 0x00518729
//   XREF to: 00518729 (CONDITIONAL_JUMP)
// 00518720: CMP EBX,0x1
// 00518723: JGE 0x0051851c
//   XREF to: 0051851c (CONDITIONAL_JUMP)
// 00518729: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00518729
//   XREF to: Stack[-0x14] (READ)
// 0051872d: ADD ESP,0x28
// 00518730: POP EBP
// 00518731: POP EDI
// 00518732: POP ESI
// 00518733: POP EBX
// 00518734: RET

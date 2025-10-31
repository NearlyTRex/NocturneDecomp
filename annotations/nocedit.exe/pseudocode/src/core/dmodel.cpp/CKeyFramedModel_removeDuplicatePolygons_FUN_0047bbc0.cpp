// Name: core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0
// Address: 0047bbc0
// Address Range: [[0047bbc0, 0047bda0]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(CKeyFramedModel * this_ptr)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 (0047b1e0) at 0047b225 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047ddaa [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(CKeyFramedModel *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CKeyFramedModel *in_stack_00000008;
  int local_38;
  CKeyFramedModel *local_34;
  int local_28;
  int local_20;
  int local_1c;
  SMRGLPrimitiveQuad **local_18;
  int local_14;
  bool bVar7;
  
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  local_1c = 0;
  local_38 = 0;
  if (0 < in_stack_00000008->part_count) {
    local_34 = in_stack_00000008;
    do {
      iVar1 = local_1c;
      local_20 = local_1c * 0x48;
      local_28 = local_20 + 0x48;
      while (local_1c < iVar1 + local_34->part_list[0].poly_count) {
        bVar7 = false;
        local_14 = iVar1;
        iVar3 = local_20 + (int)in_stack_00000008->poly_vert_list;
        if (iVar1 < local_1c) {
          local_18 = in_stack_00000008->poly_vert_list + iVar1 * 0x12;
          do {
            if (*(SMRGLPrimitiveQuad **)(iVar3 + 4) == local_18[1]) {
              iVar4 = 0;
              if (0 < *(int *)(iVar3 + 4)) {
                do {
                  iVar6 = 0;
                  bVar7 = true;
                  iVar2 = iVar4;
                  iVar5 = iVar3;
                  if (0 < *(int *)(iVar3 + 4)) {
                    do {
                      if (*(int *)(iVar5 + 0x18) !=
                          *(int *)(iVar3 + (iVar2 % *(int *)(iVar3 + 4)) * 0xc + 0x18)) {
                        bVar7 = false;
                        break;
                      }
                      iVar6 = iVar6 + 1;
                      iVar2 = iVar2 + 1;
                      iVar5 = iVar5 + 0xc;
                    } while (iVar6 < *(int *)(iVar3 + 4));
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(iVar3 + 4));
              }
              if (bVar7) break;
            }
            local_18 = local_18 + 0x12;
            local_14 = local_14 + 1;
          } while (local_14 < local_1c);
        }
        if (bVar7) {
          iVar3 = in_stack_00000008->poly_count + -1;
          in_stack_00000008->poly_count = iVar3;
          crt_string_c_memmove_FUN_005fe5e0
                    ((void *)((int)in_stack_00000008->poly_vert_list + local_20),
                     (void *)(local_28 + (int)in_stack_00000008->poly_vert_list),
                     (iVar3 - local_1c) * 0x48);
          *(int *)(local_28 + 0x558c) = *(int *)(local_28 + 0x558c) + -1;
        }
        else {
          local_28 = local_28 + 0x48;
          local_1c = local_1c + 1;
          local_20 = local_20 + 0x48;
        }
      }
      local_34 = (CKeyFramedModel *)(local_34->model_filename + 8);
      local_38 = local_38 + 1;
    } while (local_38 < in_stack_00000008->part_count);
  }
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(in_stack_00000008);
  return;
}


// Assembly code:
// 0047bbc0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0
// 0047bbc1: PUSH ESI
// 0047bbc2: PUSH EDI
// 0047bbc3: PUSH EBP
// 0047bbc4: SUB ESP,0x2c
// 0047bbc7: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0047bbcb: PUSH EDX
// 0047bbcc: CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   XREF to: 0047bf40 (UNCONDITIONAL_CALL)
// 0047bbd1: ADD ESP,0x4
// 0047bbd4: XOR ECX,ECX
// 0047bbd6: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0047bbda: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0047bbde: MOV ESI,dword ptr [EAX + 0x5584]
// 0047bbe4: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x3c] (DATA)
// 0047bbe7: TEST ESI,ESI
// 0047bbe9: JLE 0x0047bd07
//   XREF to: 0047bd07 (CONDITIONAL_JUMP)
// 0047bbef: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0047bbf3: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0047bbf3
//   XREF to: Stack[-0x20] (READ)
// 0047bbf7: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0047bbfb: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x38] (READ)
// 0047bbff: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 0047bc03: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0047bc07: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0047bc0b: IMUL EAX,EBX,0x48
// 0047bc0e: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0047bc12: ADD EAX,0x48
// 0047bc15: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0047bc19: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_0047bc19
//   XREF to: Stack[-0x34] (READ)
// 0047bc1d: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 0047bc21: MOV ESI,dword ptr [EDX + 0x558c]
// 0047bc27: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 0047bc2b: ADD EAX,ESI
// 0047bc2d: CMP EAX,EDI
// 0047bc2f: JLE 0x0047bce3
//   XREF to: 0047bce3 (CONDITIONAL_JUMP)
// 0047bc35: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0047bc39: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 0047bc3d: XOR EBP,EBP
// 0047bc3f: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 0047bc43: MOV dword ptr [ESP + 0x28],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0047bc47: MOV EDX,dword ptr [EDX + 0x114]
// 0047bc4d: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0047bc51: ADD EBX,EDX
// 0047bc53: CMP EAX,EDI
// 0047bc55: JGE 0x0047bc8c
//   XREF to: 0047bc8c (CONDITIONAL_JUMP)
// 0047bc57: IMUL EAX,EAX,0x48
// 0047bc5a: ADD EAX,EDX
// 0047bc5c: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047bc60: MOV EDX,dword ptr [ESP + 0x20]
//   Label: LAB_0047bc60
//   XREF to: Stack[-0x1c] (READ)
// 0047bc64: MOV EAX,dword ptr [EBX + 0x4]
// 0047bc67: CMP EAX,dword ptr [EDX + 0x4]
// 0047bc6a: JZ 0x0047bd1c
//   XREF to: 0047bd1c (CONDITIONAL_JUMP)
// 0047bc70: MOV ESI,dword ptr [ESP + 0x20]
//   Label: LAB_0047bc70
//   XREF to: Stack[-0x1c] (READ)
// 0047bc74: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 0047bc78: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 0047bc7c: ADD ESI,0x48
// 0047bc7f: INC EDI
// 0047bc80: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0047bc84: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0047bc88: CMP EDI,EBP
// 0047bc8a: JL 0x0047bc60
//   XREF to: 0047bc60 (CONDITIONAL_JUMP)
// 0047bc8c: CMP dword ptr [ESP + 0x28],0x0
//   Label: LAB_0047bc8c
//   XREF to: Stack[-0x14] (READ)
// 0047bc91: JZ 0x0047bd7d
//   XREF to: 0047bd7d (CONDITIONAL_JUMP)
// 0047bc97: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0047bc9b: MOV EBP,dword ptr [EAX + 0x110]
// 0047bca1: DEC EBP
// 0047bca2: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 0047bca6: MOV dword ptr [EAX + 0x110],EBP
// 0047bcac: MOV EAX,EBP
// 0047bcae: SUB EAX,EDX
// 0047bcb0: IMUL EAX,EAX,0x48
// 0047bcb3: PUSH EAX
// 0047bcb4: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 0047bcb8: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 0047bcbc: MOV EAX,dword ptr [EAX + 0x114]
// 0047bcc2: ADD EDX,EAX
// 0047bcc4: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0047bcc8: PUSH EDX
// 0047bcc9: ADD EAX,ECX
// 0047bccb: PUSH EAX
// 0047bccc: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0047bcd1: ADD ESP,0xc
// 0047bcd4: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x30] (READ)
// 0047bcd8: DEC dword ptr [EAX + 0x558c]
// 0047bcde: JMP 0x0047bc19
//   XREF to: 0047bc19 (UNCONDITIONAL_JUMP)
// 0047bce3: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_0047bce3
//   XREF to: Stack[-0x38] (READ)
// 0047bce7: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x3c] (DATA)
// 0047bcea: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0047bcee: ADD EDI,0x8
// 0047bcf1: INC EBP
// 0047bcf2: MOV ECX,dword ptr [EDX + 0x5584]
// 0047bcf8: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 0047bcfc: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x3c] (DATA)
// 0047bcff: CMP EBP,ECX
// 0047bd01: JL 0x0047bbf3
//   XREF to: 0047bbf3 (CONDITIONAL_JUMP)
// 0047bd07: MOV ESI,dword ptr [ESP + 0x40]
//   Label: LAB_0047bd07
//   XREF to: Stack[0x4] (READ)
// 0047bd0b: PUSH ESI
// 0047bd0c: CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   XREF to: 0047bf40 (UNCONDITIONAL_CALL)
// 0047bd11: ADD ESP,0x4
// 0047bd14: ADD ESP,0x2c
// 0047bd17: POP EBP
// 0047bd18: POP EDI
// 0047bd19: POP ESI
// 0047bd1a: POP EBX
// 0047bd1b: RET
// 0047bd1c: MOV EDI,dword ptr [EBX + 0x4]
//   Label: LAB_0047bd1c
// 0047bd1f: XOR EBP,EBP
// 0047bd21: TEST EDI,EDI
// 0047bd23: JLE 0x0047bd5f
//   XREF to: 0047bd5f (CONDITIONAL_JUMP)
// 0047bd25: MOV ECX,0x1
//   Label: LAB_0047bd25
// 0047bd2a: MOV ESI,dword ptr [EBX + 0x4]
// 0047bd2d: XOR EDI,EDI
// 0047bd2f: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0047bd33: TEST ESI,ESI
// 0047bd35: JLE 0x0047bd59
//   XREF to: 0047bd59 (CONDITIONAL_JUMP)
// 0047bd37: MOV ECX,EBP
// 0047bd39: MOV ESI,EBX
// 0047bd3b: MOV EDX,ECX
//   Label: LAB_0047bd3b
// 0047bd3d: MOV EAX,ECX
// 0047bd3f: SAR EDX,0x1f
// 0047bd42: IDIV dword ptr [EBX + 0x4]
// 0047bd45: IMUL EDX,EDX,0xc
// 0047bd48: LEA EAX,[EBX + EDX*0x1]
// 0047bd4b: MOV EDX,dword ptr [ESI + 0x18]
// 0047bd4e: CMP EDX,dword ptr [EAX + 0x18]
// 0047bd51: JZ 0x0047bd6f
//   XREF to: 0047bd6f (CONDITIONAL_JUMP)
// 0047bd53: XOR EDX,EDX
// 0047bd55: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0047bd59: INC EBP
//   Label: LAB_0047bd59
// 0047bd5a: CMP EBP,dword ptr [EBX + 0x4]
// 0047bd5d: JL 0x0047bd25
//   XREF to: 0047bd25 (CONDITIONAL_JUMP)
// 0047bd5f: CMP dword ptr [ESP + 0x28],0x0
//   Label: LAB_0047bd5f
//   XREF to: Stack[-0x14] (READ)
// 0047bd64: JNZ 0x0047bc8c
//   XREF to: 0047bc8c (CONDITIONAL_JUMP)
// 0047bd6a: JMP 0x0047bc70
//   XREF to: 0047bc70 (UNCONDITIONAL_JUMP)
// 0047bd6f: ADD ESI,0xc
//   Label: LAB_0047bd6f
// 0047bd72: INC EDI
// 0047bd73: MOV EAX,dword ptr [EBX + 0x4]
// 0047bd76: INC ECX
// 0047bd77: CMP EDI,EAX
// 0047bd79: JL 0x0047bd3b
//   XREF to: 0047bd3b (CONDITIONAL_JUMP)
// 0047bd7b: JMP 0x0047bd59
//   XREF to: 0047bd59 (UNCONDITIONAL_JUMP)
// 0047bd7d: MOV ESI,dword ptr [ESP + 0x10]
//   Label: LAB_0047bd7d
//   XREF to: Stack[-0x2c] (READ)
// 0047bd81: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 0047bd85: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 0047bd89: ADD ESI,0x48
// 0047bd8c: INC EDI
// 0047bd8d: ADD EBX,0x48
// 0047bd90: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 0047bd94: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0047bd98: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0047bd9c: JMP 0x0047bc19
//   XREF to: 0047bc19 (UNCONDITIONAL_JUMP)

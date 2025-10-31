// Name: core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0
// Address: 0047bdb0
// Address Range: [[0047bdb0, 0047bf30]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(CKeyFramedModel * this_ptr)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 (0047b1e0) at 0047b21a [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047dd9b [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(CKeyFramedModel *this_ptr)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CKeyFramedModel *in_stack_00000008;
  int local_30;
  CKeyFramedModel *local_2c;
  int local_1c;
  int local_18;
  int local_14;
  
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  local_14 = 0;
  local_30 = 0;
  if (0 < in_stack_00000008->part_count) {
    local_2c = in_stack_00000008;
    do {
      iVar2 = local_14;
      local_18 = local_14 * 0x48;
      local_1c = local_18 + 0x48;
      while (local_14 < iVar2 + local_2c->part_list[0].poly_count) {
        iVar5 = (int)in_stack_00000008->poly_vert_list + local_18;
        bVar1 = false;
        iVar6 = 0;
        iVar7 = iVar5;
        if (0 < *(int *)(iVar5 + 4)) {
          do {
            iVar3 = iVar6 + 1;
            if (iVar3 < *(int *)(iVar5 + 4)) {
              iVar4 = iVar3 * 0xc + iVar5;
              do {
                if (*(int *)(iVar7 + 0x18) == *(int *)(iVar4 + 0x18)) {
                  bVar1 = true;
                }
                iVar3 = iVar3 + 1;
                iVar4 = iVar4 + 0xc;
              } while (iVar3 < *(int *)(iVar5 + 4));
            }
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + 0xc;
          } while (iVar6 < *(int *)(iVar5 + 4));
        }
        if (bVar1) {
          iVar7 = in_stack_00000008->poly_count + -1;
          in_stack_00000008->poly_count = iVar7;
          crt_string_c_memmove_FUN_005fe5e0
                    ((void *)((int)in_stack_00000008->poly_vert_list + local_18),
                     (void *)(local_1c + (int)in_stack_00000008->poly_vert_list),
                     (iVar7 - local_14) * 0x48);
          *(int *)(local_1c + 0x558c) = *(int *)(local_1c + 0x558c) + -1;
        }
        else {
          local_1c = local_1c + 0x48;
          local_14 = local_14 + 1;
          local_18 = local_18 + 0x48;
        }
      }
      local_2c = (CKeyFramedModel *)(local_2c->model_filename + 8);
      local_30 = local_30 + 1;
    } while (local_30 < in_stack_00000008->part_count);
  }
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(in_stack_00000008);
  return;
}


// Assembly code:
// 0047bdb0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0
// 0047bdb1: PUSH ESI
// 0047bdb2: PUSH EDI
// 0047bdb3: PUSH EBP
// 0047bdb4: SUB ESP,0x24
// 0047bdb7: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0047bdbb: PUSH EDX
// 0047bdbc: CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   XREF to: 0047bf40 (UNCONDITIONAL_CALL)
// 0047bdc1: ADD ESP,0x4
// 0047bdc4: XOR ECX,ECX
// 0047bdc6: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0047bdca: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0047bdce: MOV ESI,dword ptr [EAX + 0x5584]
// 0047bdd4: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x34] (DATA)
// 0047bdd7: TEST ESI,ESI
// 0047bdd9: JLE 0x0047bef8
//   XREF to: 0047bef8 (CONDITIONAL_JUMP)
// 0047bddf: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0047bde3: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0047bde3
//   XREF to: Stack[-0x18] (READ)
// 0047bde7: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0047bdeb: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x30] (READ)
// 0047bdef: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0047bdf3: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0047bdf7: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0047bdfb: IMUL EAX,EBX,0x48
// 0047bdfe: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047be02: ADD EAX,0x48
// 0047be05: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0047be09: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_0047be09
//   XREF to: Stack[-0x28] (READ)
// 0047be0d: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x2c] (READ)
// 0047be11: MOV ESI,dword ptr [EDX + 0x558c]
// 0047be17: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0047be1b: ADD EAX,ESI
// 0047be1d: CMP EAX,EDI
// 0047be1f: JLE 0x0047bed4
//   XREF to: 0047bed4 (CONDITIONAL_JUMP)
// 0047be25: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0047be29: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 0047be2d: MOV EBX,dword ptr [EBX + 0x114]
// 0047be33: ADD EBX,EBP
// 0047be35: XOR EDI,EDI
// 0047be37: MOV EAX,dword ptr [EBX + 0x4]
// 0047be3a: XOR EBP,EBP
// 0047be3c: TEST EAX,EAX
// 0047be3e: JLE 0x0047be80
//   XREF to: 0047be80 (CONDITIONAL_JUMP)
// 0047be40: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0047be44: LEA EAX,[EBP + 0x1]
//   Label: LAB_0047be44
// 0047be47: CMP EAX,dword ptr [EBX + 0x4]
// 0047be4a: JGE 0x0047be6d
//   XREF to: 0047be6d (CONDITIONAL_JUMP)
// 0047be4c: IMUL EDX,EAX,0xc
// 0047be4f: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 0047be53: ADD EDX,EBX
// 0047be55: MOV ECX,dword ptr [ESI + 0x18]
//   Label: LAB_0047be55
// 0047be58: CMP ECX,dword ptr [EDX + 0x18]
// 0047be5b: JNZ 0x0047be62
//   XREF to: 0047be62 (CONDITIONAL_JUMP)
// 0047be5d: MOV EDI,0x1
// 0047be62: INC EAX
//   Label: LAB_0047be62
// 0047be63: MOV ECX,dword ptr [EBX + 0x4]
// 0047be66: ADD EDX,0xc
// 0047be69: CMP EAX,ECX
// 0047be6b: JL 0x0047be55
//   XREF to: 0047be55 (CONDITIONAL_JUMP)
// 0047be6d: MOV EDX,dword ptr [ESP + 0x20]
//   Label: LAB_0047be6d
//   XREF to: Stack[-0x14] (READ)
// 0047be71: INC EBP
// 0047be72: ADD EDX,0xc
// 0047be75: MOV ECX,dword ptr [EBX + 0x4]
// 0047be78: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0047be7c: CMP EBP,ECX
// 0047be7e: JL 0x0047be44
//   XREF to: 0047be44 (CONDITIONAL_JUMP)
// 0047be80: TEST EDI,EDI
//   Label: LAB_0047be80
// 0047be82: JZ 0x0047bf0d
//   XREF to: 0047bf0d (CONDITIONAL_JUMP)
// 0047be88: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0047be8c: MOV EBP,dword ptr [EAX + 0x110]
// 0047be92: DEC EBP
// 0047be93: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0047be97: MOV dword ptr [EAX + 0x110],EBP
// 0047be9d: MOV EAX,EBP
// 0047be9f: SUB EAX,EDX
// 0047bea1: IMUL EAX,EAX,0x48
// 0047bea4: PUSH EAX
// 0047bea5: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 0047bea9: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 0047bead: MOV EAX,dword ptr [EAX + 0x114]
// 0047beb3: ADD EDX,EAX
// 0047beb5: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 0047beb9: PUSH EDX
// 0047beba: ADD EAX,ECX
// 0047bebc: PUSH EAX
// 0047bebd: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0047bec2: ADD ESP,0xc
// 0047bec5: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 0047bec9: DEC dword ptr [EAX + 0x558c]
// 0047becf: JMP 0x0047be09
//   XREF to: 0047be09 (UNCONDITIONAL_JUMP)
// 0047bed4: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_0047bed4
//   XREF to: Stack[-0x30] (READ)
// 0047bed8: MOV EBP,dword ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 0047bedb: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0047bedf: ADD EDI,0x8
// 0047bee2: INC EBP
// 0047bee3: MOV ECX,dword ptr [EDX + 0x5584]
// 0047bee9: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 0047beed: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x34] (DATA)
// 0047bef0: CMP EBP,ECX
// 0047bef2: JL 0x0047bde3
//   XREF to: 0047bde3 (CONDITIONAL_JUMP)
// 0047bef8: MOV EBX,dword ptr [ESP + 0x38]
//   Label: LAB_0047bef8
//   XREF to: Stack[0x4] (READ)
// 0047befc: PUSH EBX
// 0047befd: CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   XREF to: 0047bf40 (UNCONDITIONAL_CALL)
// 0047bf02: ADD ESP,0x4
// 0047bf05: ADD ESP,0x24
// 0047bf08: POP EBP
// 0047bf09: POP EDI
// 0047bf0a: POP ESI
// 0047bf0b: POP EBX
// 0047bf0c: RET
// 0047bf0d: MOV ESI,dword ptr [ESP + 0x14]
//   Label: LAB_0047bf0d
//   XREF to: Stack[-0x20] (READ)
// 0047bf11: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 0047bf15: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 0047bf19: ADD ESI,0x48
// 0047bf1c: INC EDI
// 0047bf1d: ADD EBX,0x48
// 0047bf20: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0047bf24: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0047bf28: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047bf2c: JMP 0x0047be09
//   XREF to: 0047be09 (UNCONDITIONAL_JUMP)

// Name: shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30
// Address: 0051bd30
// Address Range: [[0051bd30, 0051c068]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh * this_ptr, int attribute_index)
// Cross-references:
//   core_skeledit.cpp_FUN_0058d790 (0058d790) at 0058d9fa [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   core_cloth.cpp_freeVectors_FUN_0043e460
//   crt_memory.c_copyArrayWithFunction_FUN_006020c2
//   crt_memory.c_copyObjectArray_FUN_00600bc2
//   shape_meshlod.cpp_copyFloat_FUN_0051f090
//   shape_meshlod.cpp_copyFloat_FUN_0051f0a0
//   shape_meshlod.cpp_copyFloat_FUN_0051f0b0

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30(CLodMesh *this_ptr,int attribute_index)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 *unaff_retaddr;
  float afStackY_189c [542];
  int aiStackY_1024 [983];
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 local_8c;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  float local_74 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [4];
  CVector3f *apCStack_54 [6];
  undefined4 local_3c;
  int local_38 [4];
  int local_28;
  int local_24;
  undefined4 local_20;
  float *local_18;
  undefined4 *local_14;
  
  bVar6 = 0;
  local_38[1] = this_ptr->tri_count + -1;
  if (-1 < local_38[1]) {
    local_38[3] = attribute_index << 2;
    do {
      if (0 < local_38[1]) {
        local_38[2] = local_38[1] * 0x8c;
        local_28 = 0x8c;
        local_24 = 0;
        do {
          puVar5 = (undefined4 *)((int)this_ptr->tri_data->attribute_indices + local_28);
          puVar3 = (undefined4 *)((int)this_ptr->tri_data->attribute_indices + local_24);
          if (*(int *)(local_38[3] + (int)puVar5) < *(int *)((int)puVar3 + local_38[3])) {
            puVar2 = puVar3 + (uint)bVar6 * -2 + 1;
            *(undefined4 *)(&stack0xffffff44 + (uint)bVar6 * -8) = *puVar2;
            *(undefined4 *)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 puVar2[(uint)bVar6 * -2 + 1];
            *(undefined4 *)
             ((int)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
             ((uint)bVar6 * -2 + 1) * 4) = (puVar2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
            *(undefined4 *)((int)&stack0xffffff54 + (uint)bVar6 * -8) = puVar3[(uint)bVar6 * -2 + 5]
            ;
            *(undefined4 *)(&stack0xffffff58 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 (puVar3 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
            puVar2 = puVar3 + 7;
            puVar4 = (undefined4 *)&stack0xffffff5c;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar4 = *puVar2;
              puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
              puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            }
            local_8c = puVar3[0xd];
            *(undefined4 *)(&stack0xffffff78 + (uint)bVar6 * -8) = puVar3[(uint)bVar6 * -2 + 0xe];
            *(undefined4 *)(&stack0xffffff7c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 (puVar3 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1];
            local_80 = puVar3[0x10];
            local_18 = (float *)(puVar3 + 0x11);
            local_14 = puVar5;
            shape_meshlod_cpp_copyFloat_FUN_0051f0b0(&local_7c,local_18);
            shape_meshlod_cpp_copyFloat_FUN_0051f0a0(local_74,(float *)(puVar3 + 0x12));
            shape_meshlod_cpp_copyFloat_FUN_0051f090(local_74 + 2,(float *)(puVar3 + 0x13));
            uStack_64 = puVar3[0x14];
            crt_memory_c_copyObjectArray_FUN_00600bc2(&uStack_60,puVar3 + 0x15,3,&g_CVectorTypeInfo)
            ;
            local_3c = puVar3[0x1e];
            local_38[(uint)bVar6 * -2] = puVar3[(uint)bVar6 * -2 + 0x1f];
            local_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 (puVar3 + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1];
            local_38[3] = puVar3[0x21];
            local_28 = puVar3[0x22];
            puVar4 = puVar3 + (uint)bVar6 * -2 + 1;
            puVar2 = puVar5 + (uint)bVar6 * -2 + 1;
            *puVar3 = *puVar5;
            *puVar4 = *puVar2;
            puVar4[(uint)bVar6 * -2 + 1] = puVar2[(uint)bVar6 * -2 + 1];
            (puVar4 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
                 (puVar2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
            puVar3[4] = puVar5[4];
            puVar3[(uint)bVar6 * -2 + 5] = puVar5[(uint)bVar6 * -2 + 5];
            (puVar3 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
                 (puVar5 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
            puVar2 = puVar5 + 7;
            puVar4 = puVar3 + 7;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar4 = *puVar2;
              puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
              puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            }
            puVar3[0xd] = puVar5[0xd];
            puVar3[(uint)bVar6 * -2 + 0xe] = puVar5[(uint)bVar6 * -2 + 0xe];
            (puVar3 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1] =
                 (puVar5 + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1];
            puVar3[0x10] = puVar5[0x10];
            if (puVar5 + 0x11 != unaff_ESI) {
              *unaff_ESI = puVar5[0x11];
              unaff_ESI[1] = puVar5[0x12];
              unaff_ESI[2] = puVar5[0x13];
            }
            puVar3[0x14] = puVar5[0x14];
            crt_memory_c_copyArrayWithFunction_FUN_006020c2
                      (puVar3 + 0x15,puVar5 + 0x15,3,0xc,core_actor_cpp_copyVector_FUN_00410360);
            puVar5[0x1e] = unaff_ESI[0x1e];
            puVar5[(uint)bVar6 * -2 + 0x1f] = unaff_ESI[(uint)bVar6 * -2 + 0x1f];
            (puVar5 + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1] =
                 (unaff_ESI + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1];
            puVar5[0x21] = unaff_ESI[0x21];
            puVar5[0x22] = unaff_ESI[0x22];
            puVar3 = unaff_retaddr + (uint)bVar6 * -2 + 1;
            *unaff_retaddr = uStack_ac;
            *puVar3 = *(undefined4 *)(&stack0xffffff58 + (uint)bVar6 * -8);
            puVar3[(uint)bVar6 * -2 + 1] =
                 *(undefined4 *)(&stack0xffffff5c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            (puVar3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
                 *(undefined4 *)
                  ((int)(&stack0xffffff5c + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                  ((uint)bVar6 * -2 + 1) * 4);
            unaff_retaddr[4] = uStack_9c;
            unaff_retaddr[(uint)bVar6 * -2 + 5] =
                 *(undefined4 *)(&stack0xffffff68 + (uint)bVar6 * -8);
            (unaff_retaddr + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
                 *(undefined4 *)(&stack0xffffff6c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
            puVar3 = (undefined4 *)&stack0xffffff70;
            puVar5 = unaff_retaddr + 7;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar5 = *puVar3;
              puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            }
            unaff_retaddr[0xd] = local_78;
            unaff_retaddr[(uint)bVar6 * -2 + 0xe] = local_74[(uint)bVar6 * -2];
            (unaff_retaddr + (uint)bVar6 * -2 + 0xe)[(uint)bVar6 * -2 + 1] =
                 local_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
            unaff_retaddr[0x10] = local_74[2];
            if ((float *)(unaff_retaddr + 0x11) != local_74 + 3) {
              unaff_retaddr[0x11] = local_74[3];
              unaff_retaddr[0x12] = uStack_64;
              unaff_retaddr[0x13] = uStack_60;
            }
            unaff_retaddr[0x14] = uStack_5c;
            crt_memory_c_copyArrayWithFunction_FUN_006020c2
                      (unaff_retaddr + 0x15,auStack_58,3,0xc,core_actor_cpp_copyVector_FUN_00410360)
            ;
            unaff_retaddr[0x1e] = local_38[1];
            unaff_retaddr[(uint)bVar6 * -2 + 0x1f] = local_38[(uint)bVar6 * -2 + 2];
            (unaff_retaddr + (uint)bVar6 * -2 + 0x1f)[(uint)bVar6 * -2 + 1] =
                 local_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3];
            unaff_retaddr[0x21] = local_24;
            uStack_ac = 0;
            unaff_retaddr[0x22] = local_20;
            core_cloth_cpp_freeVectors_FUN_0043e460(apCStack_54);
          }
          local_24 = local_24 + 0x8c;
          local_28 = local_28 + 0x8c;
        } while (local_24 < local_38[2]);
      }
      local_38[1] = local_38[1] + -1;
    } while (-1 < local_38[1]);
  }
  return;
}


// Assembly code:
// 0051bd30: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_sortFacesByAttribute_FUN_0051bd30
// 0051bd31: PUSH ESI
// 0051bd32: PUSH EDI
// 0051bd33: PUSH EBP
// 0051bd34: SUB ESP,0xb0
// 0051bd3a: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[0x4] (READ)
// 0051bd41: MOV EAX,dword ptr [EAX + 0x8]
// 0051bd44: DEC EAX
// 0051bd45: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0051bd4c: TEST EAX,EAX
// 0051bd4e: JL 0x0051be0d
//   XREF to: 0051be0d (CONDITIONAL_JUMP)
// 0051bd54: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[0x8] (READ)
// 0051bd5b: SHL EAX,0x2
// 0051bd5e: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0051bd65: MOV ESI,dword ptr [ESP + 0x8c]
//   Label: LAB_0051bd65
//   XREF to: Stack[-0x34] (READ)
// 0051bd6c: TEST ESI,ESI
// 0051bd6e: JLE 0x0051bdf6
//   XREF to: 0051bdf6 (CONDITIONAL_JUMP)
// 0051bd74: IMUL EAX,ESI,0x8c
// 0051bd7a: MOV EBX,0x8c
// 0051bd7f: XOR ECX,ECX
// 0051bd81: MOV dword ptr [ESP + 0x98],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 0051bd88: MOV dword ptr [ESP + 0x9c],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0051bd8f: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0051bd96: MOV EBX,dword ptr [ESP + 0xc4]
//   Label: LAB_0051bd96
//   XREF to: Stack[0x4] (READ)
// 0051bd9d: MOV EBP,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x28] (READ)
// 0051bda4: MOV EDX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x2c] (READ)
// 0051bdab: MOV EBX,dword ptr [EBX + 0xc]
// 0051bdae: MOV EDI,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x24] (READ)
// 0051bdb5: ADD EBP,EBX
// 0051bdb7: MOV EAX,EDX
// 0051bdb9: ADD EBX,EDI
// 0051bdbb: MOV ECX,dword ptr [EDX + EBP*0x1]
// 0051bdbe: CMP ECX,dword ptr [EBX + EAX*0x1]
// 0051bdc1: JL 0x0051be18
//   XREF to: 0051be18 (CONDITIONAL_JUMP)
// 0051bdc3: MOV EDI,dword ptr [ESP + 0x9c]
//   Label: LAB_0051bdc3
//   XREF to: Stack[-0x24] (READ)
// 0051bdca: MOV EBP,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x28] (READ)
// 0051bdd1: MOV EDX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x30] (READ)
// 0051bdd8: ADD EDI,0x8c
// 0051bdde: ADD EBP,0x8c
// 0051bde4: MOV dword ptr [ESP + 0x9c],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0051bdeb: MOV dword ptr [ESP + 0x98],EBP
//   XREF to: Stack[-0x28] (WRITE)
// 0051bdf2: CMP EDI,EDX
// 0051bdf4: JL 0x0051bd96
//   XREF to: 0051bd96 (CONDITIONAL_JUMP)
// 0051bdf6: MOV ECX,dword ptr [ESP + 0x8c]
//   Label: LAB_0051bdf6
//   XREF to: Stack[-0x34] (READ)
// 0051bdfd: DEC ECX
// 0051bdfe: MOV dword ptr [ESP + 0x8c],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 0051be05: TEST ECX,ECX
// 0051be07: JGE 0x0051bd65
//   XREF to: 0051bd65 (CONDITIONAL_JUMP)
// 0051be0d: ADD ESP,0xb0
//   Label: LAB_0051be0d
// 0051be13: POP EBP
// 0051be14: POP EDI
// 0051be15: POP ESI
// 0051be16: POP EBX
// 0051be17: RET
// 0051be18: MOV EDI,ESP
//   Label: LAB_0051be18
// 0051be1a: MOV ESI,EBX
// 0051be1c: MOVSD ES:EDI,ESI
// 0051be1d: MOVSD ES:EDI,ESI
// 0051be1e: MOVSD ES:EDI,ESI
// 0051be1f: MOVSD ES:EDI,ESI
// 0051be20: LEA EDI,[ESP + 0x10]
//   XREF to: Stack[-0xb0] (DATA)
// 0051be24: LEA ESI,[EBX + 0x10]
// 0051be27: MOVSD ES:EDI,ESI
// 0051be28: MOVSD ES:EDI,ESI
// 0051be29: MOVSD ES:EDI,ESI
// 0051be2a: MOV ECX,0x6
// 0051be2f: LEA EDI,[ESP + 0x1c]
//   XREF to: Stack[-0xa4] (DATA)
// 0051be33: LEA ESI,[EBX + 0x1c]
// 0051be36: MOVSD.REP ES:EDI,ESI
// 0051be38: LEA EDI,[ESP + 0x34]
//   XREF to: Stack[-0x8c] (DATA)
// 0051be3c: LEA ESI,[EBX + 0x34]
// 0051be3f: MOVSD ES:EDI,ESI
// 0051be40: MOVSD ES:EDI,ESI
// 0051be41: MOVSD ES:EDI,ESI
// 0051be42: MOV EAX,dword ptr [EBX + 0x40]
// 0051be45: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0051be49: LEA EAX,[EBX + 0x44]
// 0051be4c: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0051be53: PUSH EAX
// 0051be54: MOV ESI,EAX
// 0051be56: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x7c] (DATA)
// 0051be5a: PUSH EAX
// 0051be5b: MOV dword ptr [ESP + 0xb4],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0051be62: CALL shape_meshlod.cpp_copyFloat_FUN_0051f0b0
//   XREF to: 0051f0b0 (UNCONDITIONAL_CALL)
// 0051be67: MOV EAX,ESI
// 0051be69: ADD ESP,0x8
// 0051be6c: ADD EAX,0x4
// 0051be6f: PUSH EAX
// 0051be70: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x78] (DATA)
// 0051be74: PUSH EAX
// 0051be75: CALL shape_meshlod.cpp_copyFloat_FUN_0051f0a0
//   XREF to: 0051f0a0 (UNCONDITIONAL_CALL)
// 0051be7a: MOV EAX,ESI
// 0051be7c: ADD ESP,0x8
// 0051be7f: ADD EAX,0x8
// 0051be82: PUSH EAX
// 0051be83: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x74] (DATA)
// 0051be87: PUSH EAX
// 0051be88: CALL shape_meshlod.cpp_copyFloat_FUN_0051f090
//   XREF to: 0051f090 (UNCONDITIONAL_CALL)
// 0051be8d: ADD ESP,0x8
// 0051be90: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0051be95: MOV EAX,dword ptr [EBX + 0x50]
// 0051be98: PUSH 0x3
// 0051be9a: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0051be9e: LEA EAX,[EBX + 0x54]
// 0051bea1: PUSH EAX
// 0051bea2: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x6c] (DATA)
// 0051bea6: PUSH EAX
// 0051bea7: LEA EDI,[ESP + 0x88]
//   XREF to: Stack[-0x48] (DATA)
// 0051beae: CALL crt_memory.c_copyObjectArray_FUN_00600bc2
//   XREF to: 00600bc2 (UNCONDITIONAL_CALL)
// 0051beb3: LEA ESI,[EBX + 0x78]
// 0051beb6: ADD ESP,0x10
// 0051beb9: MOVSD ES:EDI,ESI
// 0051beba: MOVSD ES:EDI,ESI
// 0051bebb: MOVSD ES:EDI,ESI
// 0051bebc: MOV EAX,dword ptr [EBX + 0x84]
// 0051bec2: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0051bec9: MOV EDI,EBX
// 0051becb: MOV EAX,dword ptr [EBX + 0x88]
// 0051bed1: MOV ESI,EBP
// 0051bed3: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0051beda: MOVSD ES:EDI,ESI
// 0051bedb: MOVSD ES:EDI,ESI
// 0051bedc: MOVSD ES:EDI,ESI
// 0051bedd: MOVSD ES:EDI,ESI
// 0051bede: LEA EDI,[EBX + 0x10]
// 0051bee1: LEA ESI,[EBP + 0x10]
// 0051bee4: MOVSD ES:EDI,ESI
// 0051bee5: MOVSD ES:EDI,ESI
// 0051bee6: MOVSD ES:EDI,ESI
// 0051bee7: MOV ECX,0x6
// 0051beec: LEA EDI,[EBX + 0x1c]
// 0051beef: LEA ESI,[EBP + 0x1c]
// 0051bef2: MOVSD.REP ES:EDI,ESI
// 0051bef4: LEA EDI,[EBX + 0x34]
// 0051bef7: LEA ESI,[EBP + 0x34]
// 0051befa: MOV dword ptr [ESP + 0xa4],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 0051bf01: ADD EBP,0x44
// 0051bf04: MOVSD ES:EDI,ESI
// 0051bf05: MOVSD ES:EDI,ESI
// 0051bf06: MOVSD ES:EDI,ESI
// 0051bf07: MOV dword ptr [ESP + 0xa0],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0051bf0e: MOV EAX,dword ptr [EBP + -0x4]
// 0051bf11: MOV EDI,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x18] (READ)
// 0051bf18: MOV dword ptr [EBX + 0x40],EAX
// 0051bf1b: CMP EBP,EDI
// 0051bf1d: JZ 0x0051bf30
//   XREF to: 0051bf30 (CONDITIONAL_JUMP)
// 0051bf1f: MOV EAX,dword ptr [EBP]
// 0051bf22: MOV dword ptr [EDI],EAX
// 0051bf24: MOV EAX,dword ptr [EBP + 0x4]
// 0051bf27: MOV dword ptr [EDI + 0x4],EAX
// 0051bf2a: MOV EAX,dword ptr [EBP + 0x8]
// 0051bf2d: MOV dword ptr [EDI + 0x8],EAX
// 0051bf30: MOV EAX,dword ptr [ESP + 0xa4]
//   Label: LAB_0051bf30
//   XREF to: Stack[-0x1c] (READ)
// 0051bf37: PUSH 0x410360
//   XREF to: 00410360 (DATA)
// 0051bf3c: FLD float ptr [EAX + 0x50]
// 0051bf3f: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x20] (READ)
// 0051bf46: PUSH 0xc
// 0051bf48: FSTP float ptr [EAX + 0x50]
// 0051bf4b: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x1c] (READ)
// 0051bf52: PUSH 0x3
// 0051bf54: ADD EAX,0x54
// 0051bf57: PUSH EAX
// 0051bf58: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x20] (READ)
// 0051bf5f: ADD EAX,0x54
// 0051bf62: PUSH EAX
// 0051bf63: CALL crt_memory.c_copyArrayWithFunction_FUN_006020c2
//   XREF to: 006020c2 (UNCONDITIONAL_CALL)
// 0051bf68: ADD ESP,0x14
// 0051bf6b: MOV EDI,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x20] (READ)
// 0051bf72: MOV ESI,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x1c] (READ)
// 0051bf79: LEA EDI,[EDI + 0x78]
// 0051bf7c: LEA ESI,[ESI + 0x78]
// 0051bf7f: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x1c] (READ)
// 0051bf86: MOVSD ES:EDI,ESI
// 0051bf87: MOVSD ES:EDI,ESI
// 0051bf88: MOVSD ES:EDI,ESI
// 0051bf89: MOV EDX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x20] (READ)
// 0051bf90: MOV EAX,dword ptr [EAX + 0x84]
// 0051bf96: MOV dword ptr [EDX + 0x84],EAX
// 0051bf9c: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x1c] (READ)
// 0051bfa3: MOV EBX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x14] (READ)
// 0051bfaa: MOV ESI,ESP
// 0051bfac: MOV EAX,dword ptr [EAX + 0x88]
// 0051bfb2: MOV EDI,EBX
// 0051bfb4: MOV dword ptr [EDX + 0x88],EAX
// 0051bfba: MOVSD ES:EDI,ESI
// 0051bfbb: MOVSD ES:EDI,ESI
// 0051bfbc: MOVSD ES:EDI,ESI
// 0051bfbd: MOVSD ES:EDI,ESI
// 0051bfbe: MOV EDI,EBX
// 0051bfc0: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0xb0] (DATA)
// 0051bfc4: LEA EDI,[EDI + 0x10]
// 0051bfc7: MOVSD ES:EDI,ESI
// 0051bfc8: MOVSD ES:EDI,ESI
// 0051bfc9: MOVSD ES:EDI,ESI
// 0051bfca: MOV EDI,EBX
// 0051bfcc: MOV ECX,0x6
// 0051bfd1: LEA ESI,[ESP + 0x1c]
//   XREF to: Stack[-0xa4] (DATA)
// 0051bfd5: LEA EDI,[EDI + 0x1c]
// 0051bfd8: MOVSD.REP ES:EDI,ESI
// 0051bfda: MOV EDI,EBX
// 0051bfdc: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[-0x8c] (DATA)
// 0051bfe0: LEA EDI,[EDI + 0x34]
// 0051bfe3: MOVSD ES:EDI,ESI
// 0051bfe4: MOVSD ES:EDI,ESI
// 0051bfe5: MOVSD ES:EDI,ESI
// 0051bfe6: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x80] (READ)
// 0051bfea: LEA EBP,[EBX + 0x44]
// 0051bfed: MOV dword ptr [EBX + 0x40],EAX
// 0051bff0: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x7c] (DATA)
// 0051bff4: CMP EBP,EAX
// 0051bff6: JZ 0x0051c00d
//   XREF to: 0051c00d (CONDITIONAL_JUMP)
// 0051bff8: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x7c] (DATA)
// 0051bffc: MOV dword ptr [EBP],EAX
// 0051bfff: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x78] (READ)
// 0051c003: MOV dword ptr [EBP + 0x4],EAX
// 0051c006: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x74] (READ)
// 0051c00a: MOV dword ptr [EBP + 0x8],EAX
// 0051c00d: PUSH 0x410360
//   Label: LAB_0051c00d
//   XREF to: 00410360 (DATA)
// 0051c012: PUSH 0xc
// 0051c014: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x70] (READ)
// 0051c018: PUSH 0x3
// 0051c01a: MOV dword ptr [EBX + 0x50],EAX
// 0051c01d: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x6c] (DATA)
// 0051c021: PUSH EAX
// 0051c022: LEA EAX,[EBX + 0x54]
// 0051c025: PUSH EAX
// 0051c026: LEA ESI,[ESP + 0x8c]
//   XREF to: Stack[-0x48] (DATA)
// 0051c02d: CALL crt_memory.c_copyArrayWithFunction_FUN_006020c2
//   XREF to: 006020c2 (UNCONDITIONAL_CALL)
// 0051c032: LEA EDI,[EBX + 0x78]
// 0051c035: ADD ESP,0x14
// 0051c038: MOVSD ES:EDI,ESI
// 0051c039: MOVSD ES:EDI,ESI
// 0051c03a: MOVSD ES:EDI,ESI
// 0051c03b: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x3c] (READ)
// 0051c042: MOV dword ptr [EBX + 0x84],EAX
// 0051c048: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x38] (READ)
// 0051c04f: PUSH 0x0
// 0051c051: MOV dword ptr [EBX + 0x88],EAX
// 0051c057: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x6c] (DATA)
// 0051c05b: PUSH EAX
// 0051c05c: CALL core_cloth.cpp_freeVectors_FUN_0043e460
//   XREF to: 0043e460 (UNCONDITIONAL_CALL)
// 0051c061: ADD ESP,0x8
// 0051c064: JMP 0x0051bdc3
//   XREF to: 0051bdc3 (UNCONDITIONAL_JUMP)

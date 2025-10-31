// Name: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
// Address: 00477e60
// Address Range: [[00477e60, 00477ffe]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel * this_ptr)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 (00476db0) at 00476ed1 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 (0047b1e0) at 0047b4a6 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30 (0047aa30) at 0047ad7b [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 (0047ada0) at 0047b033 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_0061f73a
//   TerminatedCString s_CKeyFramedModel_calcNorm_0061f74d
//   double g_NormalizeScale = 65535
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   crt_memory.c_memset_FUN_005fde40
//   engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel *this_ptr)

{
  double dVar1;
  double dVar2;
  CVector3i **ppCVar3;
  CVector3i **extraout_EAX;
  SSurfaceNormal *pSVar4;
  int extraout_ECX;
  int iVar5;
  int *piVar6;
  SSurfaceNormal *output;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  int iVar11;
  int iVar12;
  
  if (this_ptr->frame_count == 1) {
    if (this_ptr->vertex_normal_list == (CVector3i **)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x2f1;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::calcNormals() - vertexNormalList not allocated!");
    }
    ppCVar3 = (CVector3i **)
              crt_memory_c_memset_FUN_005fde40
                        (this_ptr->vertex_normal_list,0,this_ptr->vertex_count * 0xc);
    iVar12 = 0;
    if (0 < this_ptr->poly_count) {
      iVar11 = 0;
      do {
        output = (SSurfaceNormal *)((int)this_ptr->poly_vert_list + iVar11);
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0
                  ((CVector3i *)this_ptr->vertex_list,output);
        iVar5 = 0;
        ppCVar3 = extraout_EAX;
        pSVar4 = output;
        if (0 < output->vertex_count) {
          do {
            ppCVar3 = this_ptr->vertex_normal_list + pSVar4->vertex_index_1 * 3;
            *ppCVar3 = (CVector3i *)((int)&(*ppCVar3)->x + output->normal_x);
            ppCVar3[1] = (CVector3i *)((int)&ppCVar3[1]->x + output->normal_y);
            ppCVar3[2] = (CVector3i *)((int)&ppCVar3[2]->x + output->normal_z);
            iVar5 = iVar5 + 1;
            pSVar4 = (SSurfaceNormal *)&pSVar4->normal_y;
          } while (iVar5 < output->vertex_count);
        }
        iVar11 = iVar11 + 0x48;
        iVar12 = iVar12 + 1;
      } while (iVar12 < this_ptr->poly_count);
    }
    iVar12 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar11 = 0;
      do {
        piVar6 = (int *)((int)this_ptr->vertex_normal_list + iVar11);
        dVar10 = (double)*piVar6;
        dVar2 = (double)piVar6[1];
        dVar1 = (double)piVar6[2];
        dVar10 = SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar10 * dVar10);
        if (0.0 < dVar10) {
          fVar7 = (float10)g_NormalizeScale / (float10)dVar10;
          fVar8 = (float10)*piVar6 * fVar7;
          fVar9 = (float10)piVar6[1] * fVar7;
          fVar7 = (float10)piVar6[2] * fVar7;
          dVar10 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44(piVar6,CONCAT22((short)((uint)ppCVar3 >> 0x10),
                                                               (ushort)(0.0 < dVar10) << 8 |
                                                               (ushort)NAN(dVar10) << 10 |
                                                               (ushort)(dVar10 == 0.0) << 0xe)));
          dVar10 = crt_math_c_round_FUN_005fe6b0(dVar10);
          dVar10 = crt_math_c_round_FUN_005fe6b0(dVar10);
          piVar6 = (int *)((ulonglong)dVar10 >> 0x20);
          ppCVar3 = SUB84(dVar10,0);
          *piVar6 = (int)ROUND(fVar8);
          piVar6[1] = (int)ROUND(fVar9);
          piVar6[2] = (int)ROUND(fVar7);
          iVar11 = extraout_ECX;
        }
        else {
          piVar6[2] = 0;
          ppCVar3 = (CVector3i **)piVar6[2];
          piVar6[1] = (int)ppCVar3;
          *piVar6 = (int)ppCVar3;
        }
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 0xc;
      } while (iVar12 < this_ptr->vertex_count);
    }
  }
  return;
}


// Assembly code:
// 00477e60: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
// 00477e61: PUSH ESI
// 00477e62: PUSH EDI
// 00477e63: PUSH EBP
// 00477e64: MOV EBP,ESP
// 00477e66: SUB ESP,0x30
// 00477e69: AND ESP,0xfffffff8
// 00477e6c: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00477e6f: CMP dword ptr [EDI + 0x100],0x1
// 00477e76: JNZ 0x00477f98
//   XREF to: 00477f98 (CONDITIONAL_JUMP)
// 00477e7c: CMP dword ptr [EDI + 0x108],0x0
// 00477e83: JZ 0x00477f9f
//   XREF to: 00477f9f (CONDITIONAL_JUMP)
// 00477e89: MOV EDX,dword ptr [EDI + 0x104]
//   Label: LAB_00477e89
// 00477e8f: LEA EAX,[EDX*0x4 + 0x0]
// 00477e96: SUB EAX,EDX
// 00477e98: SHL EAX,0x2
// 00477e9b: PUSH EAX
// 00477e9c: PUSH 0x0
// 00477e9e: MOV EAX,dword ptr [EDI + 0x108]
// 00477ea4: PUSH EAX
// 00477ea5: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00477eaa: ADD ESP,0xc
// 00477ead: XOR EDX,EDX
// 00477eaf: MOV ECX,dword ptr [EDI + 0x110]
// 00477eb5: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00477eb9: TEST ECX,ECX
// 00477ebb: JLE 0x00477f2e
//   XREF to: 00477f2e (CONDITIONAL_JUMP)
// 00477ebd: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00477ec1: MOV ESI,dword ptr [ESP + 0x28]
//   Label: LAB_00477ec1
//   XREF to: Stack[-0x18] (READ)
// 00477ec5: MOV EBX,dword ptr [EDI + 0x114]
// 00477ecb: ADD EBX,ESI
// 00477ecd: PUSH EBX
// 00477ece: MOV EAX,dword ptr [EDI + 0x10c]
// 00477ed4: PUSH EAX
// 00477ed5: CALL engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
//   XREF to: 00501bc0 (UNCONDITIONAL_CALL)
// 00477eda: ADD ESP,0x8
// 00477edd: MOV ECX,dword ptr [EBX + 0x4]
// 00477ee0: XOR EDX,EDX
// 00477ee2: TEST ECX,ECX
// 00477ee4: JLE 0x00477f10
//   XREF to: 00477f10 (CONDITIONAL_JUMP)
// 00477ee6: MOV ECX,EBX
// 00477ee8: IMUL ESI,dword ptr [ECX + 0x18],0xc
//   Label: LAB_00477ee8
// 00477eec: MOV EAX,dword ptr [EDI + 0x108]
// 00477ef2: ADD EAX,ESI
// 00477ef4: MOV ESI,dword ptr [EBX + 0x8]
// 00477ef7: ADD dword ptr [EAX],ESI
// 00477ef9: MOV ESI,dword ptr [EBX + 0xc]
// 00477efc: ADD dword ptr [EAX + 0x4],ESI
// 00477eff: MOV ESI,dword ptr [EBX + 0x10]
// 00477f02: ADD dword ptr [EAX + 0x8],ESI
// 00477f05: INC EDX
// 00477f06: MOV ESI,dword ptr [EBX + 0x4]
// 00477f09: ADD ECX,0xc
// 00477f0c: CMP EDX,ESI
// 00477f0e: JL 0x00477ee8
//   XREF to: 00477ee8 (CONDITIONAL_JUMP)
// 00477f10: MOV EBX,dword ptr [ESP + 0x28]
//   Label: LAB_00477f10
//   XREF to: Stack[-0x18] (READ)
// 00477f14: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00477f18: MOV EDX,dword ptr [EDI + 0x110]
// 00477f1e: ADD EBX,0x48
// 00477f21: INC ESI
// 00477f22: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00477f26: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 00477f2a: CMP ESI,EDX
// 00477f2c: JL 0x00477ec1
//   XREF to: 00477ec1 (CONDITIONAL_JUMP)
// 00477f2e: MOV ECX,dword ptr [EDI + 0x104]
//   Label: LAB_00477f2e
// 00477f34: XOR EBX,EBX
// 00477f36: TEST ECX,ECX
// 00477f38: JLE 0x00477f98
//   XREF to: 00477f98 (CONDITIONAL_JUMP)
// 00477f3a: XOR ECX,ECX
// 00477f3c: MOV EDX,dword ptr [EDI + 0x108]
//   Label: LAB_00477f3c
// 00477f42: ADD EDX,ECX
// 00477f44: FILD dword ptr [EDX]
// 00477f46: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 00477f4a: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 00477f4e: FILD dword ptr [EDX + 0x4]
// 00477f51: FST double ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 00477f55: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00477f59: FILD dword ptr [EDX + 0x8]
// 00477f5c: FXCH
// 00477f5e: FADDP ST2,ST0
// 00477f60: FST double ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (WRITE)
// 00477f64: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 00477f68: FADDP
// 00477f6a: FSQRT
// 00477f6c: FLDZ
// 00477f6e: FXCH
// 00477f70: FSTP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00477f73: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00477f76: FNSTSW AX
// 00477f78: SAHF
// 00477f79: JC 0x00477fc7
//   XREF to: 00477fc7 (CONDITIONAL_JUMP)
// 00477f7b: MOV dword ptr [EDX + 0x8],0x0
// 00477f82: MOV EAX,dword ptr [EDX + 0x8]
// 00477f85: MOV dword ptr [EDX + 0x4],EAX
// 00477f88: MOV dword ptr [EDX],EAX
// 00477f8a: INC EBX
//   Label: LAB_00477f8a
// 00477f8b: MOV ESI,dword ptr [EDI + 0x104]
// 00477f91: ADD ECX,0xc
// 00477f94: CMP EBX,ESI
// 00477f96: JL 0x00477f3c
//   XREF to: 00477f3c (CONDITIONAL_JUMP)
// 00477f98: MOV ESP,EBP
//   Label: LAB_00477f98
// 00477f9a: POP EBP
// 00477f9b: POP EDI
// 00477f9c: POP ESI
// 00477f9d: POP EBX
// 00477f9e: RET
// 00477f9f: MOV EBX,0x61f73a
//   Label: LAB_00477f9f
//   XREF to: 0061f73a (PARAM)
// 00477fa4: MOV ESI,0x2f1
// 00477fa9: PUSH 0x61f74d
//   XREF to: 0061f74d (DATA)
// 00477fae: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00477fb4: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00477fba: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00477fbf: ADD ESP,0x4
// 00477fc2: JMP 0x00477e89
//   XREF to: 00477e89 (UNCONDITIONAL_JUMP)
// 00477fc7: FLD double ptr [ESP + 0x8]
//   Label: LAB_00477fc7
//   XREF to: Stack[-0x38] (READ)
// 00477fcb: FLD double ptr [0x0061f793]
//   XREF to: 0061f793 (READ)
// 00477fd1: FDIV double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00477fd4: FXCH
// 00477fd6: FMUL ST1
// 00477fd8: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 00477fdc: FMUL ST2
// 00477fde: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x30] (READ)
// 00477fe2: FMULP ST3
// 00477fe4: FXCH
// 00477fe6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00477feb: FXCH
// 00477fed: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00477ff2: FXCH ST2
// 00477ff4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00477ff9: FXCH
// 00477ffb: FISTP dword ptr [EDX]
// 00477ffd: FXCH

// Name: core_setdir.cpp_FUN_005763a0
// Address: 005763a0
// Address Range: [[005763a0, 0057670e]]
// Convention: unknown
// Signature: undefined core_setdir.cpp_FUN_005763a0()
// Cross-references:
//   core_setdir.cpp_CDemonSet_FUN_00576710 (00576710) at 00576800 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

undefined4 core_setdir_cpp_FUN_005763a0(void)

{
  CVector3f *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint uVar3;
  float *pfVar4;
  float *in_stack_00000004;
  float *in_stack_00000008;
  CBoundingBox3D local_c8;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CBoundingBox3D local_74;
  CVector3f local_5c;
  CVector3f local_50;
  double local_44;
  double local_3c;
  double local_34;
  float local_2c;
  CMatrix3x3f *local_28;
  CMatrix3x3f *local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_74.min.x = -in_stack_00000008[3];
  local_74.min.y = -in_stack_00000008[4];
  local_74.min.z = -in_stack_00000008[5];
  if (&local_c8 != &local_74) {
    local_c8.min.x = local_74.min.x;
    local_c8.min.y = local_74.min.y;
    local_c8.min.z = local_74.min.z;
  }
  if (&local_c8.max != (CVector3f *)(in_stack_00000008 + 3)) {
    local_c8.max.x = in_stack_00000008[3];
    local_c8.max.y = in_stack_00000008[4];
    local_c8.max.z = in_stack_00000008[5];
  }
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xfffffed8,8,&g_CVectorTypeInfo);
  local_28 = (CMatrix3x3f *)(in_stack_00000008 + 6);
  uVar3 = 0;
  local_24 = (CMatrix3x3f *)(in_stack_00000004 + 6);
  do {
    local_20 = in_stack_00000004[3];
    pfVar4 = (float *)(&stack0xfffffed8 + uVar3 * 0xc);
    while( true ) {
      local_74.max.x = local_20;
      if ((uVar3 & 2) == 0) {
        local_1c = in_stack_00000004[4];
      }
      else {
        local_1c = -in_stack_00000004[4];
      }
      local_74.max.y = local_1c;
      if ((uVar3 & 4) == 0) {
        local_18 = in_stack_00000004[5];
      }
      else {
        local_18 = -in_stack_00000004[5];
      }
      local_74.max.z = local_18;
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (local_24,&local_5c,&local_74.max);
      local_8c.x = pCVar1->x + *in_stack_00000004;
      local_8c.y = pCVar1->y + in_stack_00000004[1];
      local_8c.z = pCVar1->z + in_stack_00000004[2];
      if (&local_74.max != &local_8c) {
        local_74.max.x = local_8c.x;
        local_74.max.y = local_8c.y;
        local_74.max.z = local_8c.z;
      }
      local_80.x = local_74.max.x - *in_stack_00000008;
      local_80.y = local_74.max.y - in_stack_00000008[1];
      local_80.z = local_74.max.z - in_stack_00000008[2];
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (local_28,&local_98,&local_80);
      if (&local_74.max != pCVar1) {
        local_74.max.x = pCVar1->x;
        local_74.max.y = pCVar1->y;
        local_74.max.z = pCVar1->z;
      }
      if (((((local_c8.min.x <= local_74.max.x) && (local_c8.min.y <= local_74.max.y)) &&
           (local_c8.min.z <= local_74.max.z)) &&
          ((local_74.max.x <= local_c8.max.x && (local_74.max.y <= local_c8.max.y)))) &&
         (local_74.max.z <= local_c8.max.z)) {
        return 1;
      }
      if ((CVector3f *)pfVar4 != &local_74.max) {
        *pfVar4 = local_74.max.x;
        pfVar4[1] = local_74.max.y;
        pfVar4[2] = local_74.max.z;
      }
      uVar3 = uVar3 + 1;
      pfVar4 = pfVar4 + 3;
      if (7 < (int)uVar3) {
        pCVar1 = (CVector3f *)&stack0xfffffed8;
        uVar3 = 0;
        while( true ) {
          iVar2 = (uVar3 ^ 1) * 0xc;
          local_50.x = *(float *)(&stack0xfffffed8 + iVar2) - pCVar1->x;
          local_50.y = *(float *)(&stack0xfffffedc + iVar2) - pCVar1->y;
          local_50.z = *(float *)(&stack0xfffffee0 + iVar2) - pCVar1->z;
          local_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                               (&local_c8,pCVar1,&local_50,(CVector3f *)0x0);
          local_2c = local_14;
          local_44 = (double)local_14;
          if ((0.0 <= local_44) && (local_44 <= 1.0)) {
            return 1;
          }
          iVar2 = (uVar3 ^ 2) * 0xc;
          local_a4.x = *(float *)(&stack0xfffffed8 + iVar2) - pCVar1->x;
          local_a4.y = *(float *)(&stack0xfffffedc + iVar2) - pCVar1->y;
          local_a4.z = *(float *)(&stack0xfffffee0 + iVar2) - pCVar1->z;
          local_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                               (&local_c8,pCVar1,&local_a4,(CVector3f *)0x0);
          local_3c = (double)local_14;
          if ((0.0 <= local_3c) && (local_3c <= 1.0)) break;
          iVar2 = (uVar3 ^ 4) * 0xc;
          local_b0.x = *(float *)(&stack0xfffffed8 + iVar2) - pCVar1->x;
          local_b0.y = *(float *)(&stack0xfffffedc + iVar2) - pCVar1->y;
          local_b0.z = *(float *)(&stack0xfffffee0 + iVar2) - pCVar1->z;
          local_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                               (&local_c8,pCVar1,&local_b0,(CVector3f *)0x0);
          local_34 = (double)local_14;
          if ((0.0 <= local_34) && (local_34 <= 1.0)) {
            return 1;
          }
          uVar3 = uVar3 + 1;
          pCVar1 = pCVar1 + 1;
          if (7 < (int)uVar3) {
            return 0;
          }
        }
        return 1;
      }
      if ((uVar3 & 1) == 0) break;
      local_20 = -in_stack_00000004[3];
    }
  } while( true );
}


// Assembly code:
// 005763a0: PUSH EBX
//   Label: core_setdir.cpp_FUN_005763a0
// 005763a1: PUSH ESI
// 005763a2: PUSH EDI
// 005763a3: PUSH EBP
// 005763a4: MOV EBP,ESP
// 005763a6: SUB ESP,0x118
// 005763ac: SUB EBP,0x7a
// 005763af: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 005763b5: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 005763bb: LEA EDX,[EBP + -0x3e]
//   XREF to: Stack[-0xc8] (DATA)
// 005763be: FLD float ptr [EAX + 0xc]
// 005763c1: FCHS
// 005763c3: FSTP float ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (WRITE)
// 005763c6: FLD float ptr [EAX + 0x10]
// 005763c9: FCHS
// 005763cb: FSTP float ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (WRITE)
// 005763ce: FLD float ptr [EAX + 0x14]
// 005763d1: FCHS
// 005763d3: LEA EAX,[EBP + 0x16]
//   XREF to: Stack[-0x74] (DATA)
// 005763d6: FSTP float ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (WRITE)
// 005763d9: CMP EDX,EAX
// 005763db: JNZ 0x005766a7
//   XREF to: 005766a7 (CONDITIONAL_JUMP)
// 005763e1: MOV EDX,dword ptr [EBP + 0x92]
//   Label: LAB_005763e1
//   XREF to: Stack[0x8] (READ)
// 005763e7: LEA EAX,[EBP + -0x32]
//   XREF to: Stack[-0xbc] (DATA)
// 005763ea: ADD EDX,0xc
// 005763ed: CMP EAX,EDX
// 005763ef: JNZ 0x005766be
//   XREF to: 005766be (CONDITIONAL_JUMP)
// 005763f5: PUSH 0x6598c0
//   Label: LAB_005763f5
//   XREF to: 006598c0 (DATA)
// 005763fa: PUSH 0x8
// 005763fc: LEA EAX,[EBP + 0xffffff62]
//   XREF to: Stack[-0x128] (DATA)
// 00576402: PUSH EAX
// 00576403: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00576408: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0057640e: ADD EAX,0x18
// 00576411: XOR ESI,ESI
// 00576413: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00576416: LEA EAX,[EBX + 0x18]
// 00576419: ADD ESP,0xc
// 0057641c: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0057641f: IMUL EDI,ESI,0xc
//   Label: LAB_0057641f
// 00576422: MOV EAX,dword ptr [EBX + 0xc]
// 00576425: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00576428: LEA EAX,[EBP + 0xffffff62]
//   XREF to: Stack[-0x128] (DATA)
// 0057642e: ADD EDI,EAX
// 00576430: MOV EAX,dword ptr [EBP + 0x6a]
//   Label: LAB_00576430
//   XREF to: Stack[-0x20] (READ)
// 00576433: MOV dword ptr [EBP + 0x22],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00576436: TEST SI,0x2
// 0057643b: JZ 0x005766ec
//   XREF to: 005766ec (CONDITIONAL_JUMP)
// 00576441: FLD float ptr [EBX + 0x10]
// 00576444: FCHS
// 00576446: FSTP float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (WRITE)
// 00576449: MOV EAX,dword ptr [EBP + 0x6e]
//   Label: LAB_00576449
//   XREF to: Stack[-0x1c] (READ)
// 0057644c: MOV dword ptr [EBP + 0x26],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0057644f: TEST SI,0x4
// 00576454: JZ 0x005766f7
//   XREF to: 005766f7 (CONDITIONAL_JUMP)
// 0057645a: FLD float ptr [EBX + 0x14]
// 0057645d: FCHS
// 0057645f: FSTP float ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (WRITE)
// 00576462: MOV EAX,dword ptr [EBP + 0x72]
//   Label: LAB_00576462
//   XREF to: Stack[-0x18] (READ)
// 00576465: MOV dword ptr [EBP + 0x2a],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00576468: LEA EAX,[EBP + 0x22]
//   XREF to: Stack[-0x68] (DATA)
// 0057646b: PUSH EAX
// 0057646c: LEA EAX,[EBP + 0x2e]
//   XREF to: Stack[-0x5c] (DATA)
// 0057646f: PUSH EAX
// 00576470: MOV EDX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 00576473: PUSH EDX
// 00576474: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00576479: FLD float ptr [EAX]
// 0057647b: FADD float ptr [EBX]
// 0057647d: LEA EDX,[EBP + 0x22]
//   XREF to: Stack[-0x68] (DATA)
// 00576480: FSTP float ptr [EBP + -0x2]
//   XREF to: Stack[-0x8c] (WRITE)
// 00576483: FLD float ptr [EAX + 0x4]
// 00576486: FADD float ptr [EBX + 0x4]
// 00576489: ADD ESP,0xc
// 0057648c: FSTP float ptr [EBP + 0x2]
//   XREF to: Stack[-0x88] (WRITE)
// 0057648f: FLD float ptr [EAX + 0x8]
// 00576492: FADD float ptr [EBX + 0x8]
// 00576495: LEA EAX,[EBP + -0x2]
//   XREF to: Stack[-0x8c] (DATA)
// 00576498: FSTP float ptr [EBP + 0x6]
//   XREF to: Stack[-0x84] (WRITE)
// 0057649b: CMP EDX,EAX
// 0057649d: JZ 0x005764b1
//   XREF to: 005764b1 (CONDITIONAL_JUMP)
// 0057649f: MOV EAX,dword ptr [EBP + -0x2]
//   XREF to: Stack[-0x8c] (DATA)
// 005764a2: MOV dword ptr [EBP + 0x22],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005764a5: MOV EAX,dword ptr [EBP + 0x2]
//   XREF to: Stack[-0x88] (READ)
// 005764a8: MOV dword ptr [EBP + 0x26],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005764ab: MOV EAX,dword ptr [EBP + 0x6]
//   XREF to: Stack[-0x84] (READ)
// 005764ae: MOV dword ptr [EBP + 0x2a],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005764b1: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_005764b1
//   XREF to: Stack[0x8] (READ)
// 005764b7: FLD float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (READ)
// 005764ba: FSUB float ptr [EAX]
// 005764bc: FLD float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (READ)
// 005764bf: FXCH
// 005764c1: FSTP float ptr [EBP + 0xa]
//   XREF to: Stack[-0x80] (WRITE)
// 005764c4: FSUB float ptr [EAX + 0x4]
// 005764c7: FLD float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (READ)
// 005764ca: FXCH
// 005764cc: FSTP float ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (WRITE)
// 005764cf: FSUB float ptr [EAX + 0x8]
// 005764d2: LEA EAX,[EBP + 0xa]
//   XREF to: Stack[-0x80] (DATA)
// 005764d5: PUSH EAX
// 005764d6: LEA EAX,[EBP + -0xe]
//   XREF to: Stack[-0x98] (DATA)
// 005764d9: PUSH EAX
// 005764da: MOV ECX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 005764dd: PUSH ECX
// 005764de: FSTP float ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (WRITE)
// 005764e1: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 005764e6: MOV EDX,EAX
// 005764e8: LEA EAX,[EBP + 0x22]
//   XREF to: Stack[-0x68] (DATA)
// 005764eb: ADD ESP,0xc
// 005764ee: CMP EAX,EDX
// 005764f0: JZ 0x00576503
//   XREF to: 00576503 (CONDITIONAL_JUMP)
// 005764f2: MOV EAX,dword ptr [EDX]
// 005764f4: MOV dword ptr [EBP + 0x22],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005764f7: MOV EAX,dword ptr [EDX + 0x4]
// 005764fa: MOV dword ptr [EBP + 0x26],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 005764fd: MOV EAX,dword ptr [EDX + 0x8]
// 00576500: MOV dword ptr [EBP + 0x2a],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00576503: FLD float ptr [EBP + -0x3e]
//   Label: LAB_00576503
//   XREF to: Stack[-0xc8] (READ)
// 00576506: FCOMP float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (READ)
// 00576509: FNSTSW AX
// 0057650b: SAHF
// 0057650c: JA 0x00576549
//   XREF to: 00576549 (CONDITIONAL_JUMP)
// 0057650e: FLD float ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc4] (READ)
// 00576511: FCOMP float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (READ)
// 00576514: FNSTSW AX
// 00576516: SAHF
// 00576517: JA 0x00576549
//   XREF to: 00576549 (CONDITIONAL_JUMP)
// 00576519: FLD float ptr [EBP + -0x36]
//   XREF to: Stack[-0xc0] (READ)
// 0057651c: FCOMP float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (READ)
// 0057651f: FNSTSW AX
// 00576521: SAHF
// 00576522: JA 0x00576549
//   XREF to: 00576549 (CONDITIONAL_JUMP)
// 00576524: FLD float ptr [EBP + -0x32]
//   XREF to: Stack[-0xbc] (READ)
// 00576527: FCOMP float ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (READ)
// 0057652a: FNSTSW AX
// 0057652c: SAHF
// 0057652d: JC 0x00576549
//   XREF to: 00576549 (CONDITIONAL_JUMP)
// 0057652f: FLD float ptr [EBP + -0x2e]
//   XREF to: Stack[-0xb8] (READ)
// 00576532: FCOMP float ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (READ)
// 00576535: FNSTSW AX
// 00576537: SAHF
// 00576538: JC 0x00576549
//   XREF to: 00576549 (CONDITIONAL_JUMP)
// 0057653a: FLD float ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb4] (READ)
// 0057653d: FCOMP float ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (READ)
// 00576540: FNSTSW AX
// 00576542: SAHF
// 00576543: JNC 0x00576702
//   XREF to: 00576702 (CONDITIONAL_JUMP)
// 00576549: LEA EAX,[EBP + 0x22]
//   Label: LAB_00576549
//   XREF to: Stack[-0x68] (DATA)
// 0057654c: CMP EDI,EAX
// 0057654e: JZ 0x00576561
//   XREF to: 00576561 (CONDITIONAL_JUMP)
// 00576550: MOV EAX,dword ptr [EBP + 0x22]
//   XREF to: Stack[-0x68] (DATA)
// 00576553: MOV dword ptr [EDI],EAX
//   XREF to: Stack[-0x128] (DATA)
// 00576555: MOV EAX,dword ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (READ)
// 00576558: MOV dword ptr [EDI + 0x4],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 0057655b: MOV EAX,dword ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (READ)
// 0057655e: MOV dword ptr [EDI + 0x8],EAX
//   XREF to: Stack[-0x120] (WRITE)
// 00576561: INC ESI
//   Label: LAB_00576561
// 00576562: ADD EDI,0xc
// 00576565: CMP ESI,0x8
// 00576568: JL 0x005766d4
//   XREF to: 005766d4 (CONDITIONAL_JUMP)
// 0057656e: LEA ESI,[EBP + 0xffffff62]
//   XREF to: Stack[-0x128] (DATA)
// 00576574: XOR EBX,EBX
// 00576576: MOV EDX,EBX
//   Label: LAB_00576576
// 00576578: XOR DL,0x1
// 0057657b: IMUL EDX,EDX,0xc
// 0057657e: LEA EAX,[EBP + 0xffffff62]
//   XREF to: Stack[-0x128] (DATA)
// 00576584: FLD float ptr [EDX + EAX*0x1]
// 00576587: FSUB float ptr [ESI]
//   XREF to: Stack[-0x128] (DATA)
// 00576589: FSTP float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x50] (WRITE)
// 0057658c: FLD float ptr [EDX + EAX*0x1 + 0x4]
// 00576590: FSUB float ptr [ESI + 0x4]
//   XREF to: Stack[-0x124] (READ)
// 00576593: PUSH 0x0
// 00576595: FSTP float ptr [EBP + 0x3e]
//   XREF to: Stack[-0x4c] (WRITE)
// 00576598: FLD float ptr [EDX + EAX*0x1 + 0x8]
// 0057659c: LEA EAX,[EBP + 0x3a]
//   XREF to: Stack[-0x50] (DATA)
// 0057659f: PUSH EAX
// 005765a0: LEA EAX,[EBP + -0x3e]
//   XREF to: Stack[-0xc8] (DATA)
// 005765a3: PUSH ESI
// 005765a4: FSUB float ptr [ESI + 0x8]
//   XREF to: Stack[-0x120] (READ)
// 005765a7: PUSH EAX
// 005765a8: FSTP float ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (WRITE)
// 005765ab: CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   XREF to: 00420940 (UNCONDITIONAL_CALL)
// 005765b0: FLDZ
// 005765b2: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005765b5: ADD ESP,0x10
// 005765b8: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 005765bb: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005765be: FLD float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (READ)
// 005765c1: FSTP double ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (WRITE)
// 005765c4: FCOMP double ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 005765c7: FNSTSW AX
// 005765c9: SAHF
// 005765ca: JA 0x005765da
//   XREF to: 005765da (CONDITIONAL_JUMP)
// 005765cc: FLD1
// 005765ce: FCOMP double ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 005765d1: FNSTSW AX
// 005765d3: SAHF
// 005765d4: JNC 0x00576702
//   XREF to: 00576702 (CONDITIONAL_JUMP)
// 005765da: MOV EAX,EBX
//   Label: LAB_005765da
// 005765dc: XOR AL,0x2
// 005765de: IMUL EDX,EAX,0xc
// 005765e1: LEA EAX,[EBP + 0xffffff62]
//   XREF to: Stack[-0x128] (DATA)
// 005765e7: FLD float ptr [EDX + EAX*0x1]
// 005765ea: FSUB float ptr [ESI]
//   XREF to: Stack[-0x128] (DATA)
// 005765ec: FSTP float ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (WRITE)
// 005765ef: FLD float ptr [EDX + EAX*0x1 + 0x4]
// 005765f3: FSUB float ptr [ESI + 0x4]
//   XREF to: Stack[-0x124] (READ)
// 005765f6: PUSH 0x0
// 005765f8: FSTP float ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (WRITE)
// 005765fb: FLD float ptr [EDX + EAX*0x1 + 0x8]
// 005765ff: LEA EAX,[EBP + -0x1a]
//   XREF to: Stack[-0xa4] (DATA)
// 00576602: PUSH EAX
// 00576603: LEA EAX,[EBP + -0x3e]
//   XREF to: Stack[-0xc8] (DATA)
// 00576606: PUSH ESI
// 00576607: FSUB float ptr [ESI + 0x8]
//   XREF to: Stack[-0x120] (READ)
// 0057660a: PUSH EAX
// 0057660b: FSTP float ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (WRITE)
// 0057660e: CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   XREF to: 00420940 (UNCONDITIONAL_CALL)
// 00576613: FLDZ
// 00576615: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00576618: ADD ESP,0x10
// 0057661b: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0057661e: FSTP double ptr [EBP + 0x4e]
//   XREF to: Stack[-0x3c] (WRITE)
// 00576621: FCOMP double ptr [EBP + 0x4e]
//   XREF to: Stack[-0x3c] (READ)
// 00576624: FNSTSW AX
// 00576626: SAHF
// 00576627: JA 0x00576637
//   XREF to: 00576637 (CONDITIONAL_JUMP)
// 00576629: FLD1
// 0057662b: FCOMP double ptr [EBP + 0x4e]
//   XREF to: Stack[-0x3c] (READ)
// 0057662e: FNSTSW AX
// 00576630: SAHF
// 00576631: JNC 0x00576702
//   XREF to: 00576702 (CONDITIONAL_JUMP)
// 00576637: MOV EAX,EBX
//   Label: LAB_00576637
// 00576639: XOR AL,0x4
// 0057663b: IMUL EAX,EAX,0xc
// 0057663e: LEA EDX,[EBP + 0xffffff62]
//   XREF to: Stack[-0x128] (DATA)
// 00576644: FLD float ptr [EDX + EAX*0x1]
// 00576647: FSUB float ptr [ESI]
//   XREF to: Stack[-0x128] (DATA)
// 00576649: FSTP float ptr [EBP + -0x26]
//   XREF to: Stack[-0xb0] (WRITE)
// 0057664c: FLD float ptr [EDX + EAX*0x1 + 0x4]
// 00576650: FSUB float ptr [ESI + 0x4]
//   XREF to: Stack[-0x124] (READ)
// 00576653: PUSH 0x0
// 00576655: FSTP float ptr [EBP + -0x22]
//   XREF to: Stack[-0xac] (WRITE)
// 00576658: FLD float ptr [EDX + EAX*0x1 + 0x8]
// 0057665c: LEA EAX,[EBP + -0x26]
//   XREF to: Stack[-0xb0] (DATA)
// 0057665f: PUSH EAX
// 00576660: LEA EAX,[EBP + -0x3e]
//   XREF to: Stack[-0xc8] (DATA)
// 00576663: PUSH ESI
// 00576664: FSUB float ptr [ESI + 0x8]
//   XREF to: Stack[-0x120] (READ)
// 00576667: PUSH EAX
// 00576668: FSTP float ptr [EBP + -0x1e]
//   XREF to: Stack[-0xa8] (WRITE)
// 0057666b: CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   XREF to: 00420940 (UNCONDITIONAL_CALL)
// 00576670: FLDZ
// 00576672: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00576675: ADD ESP,0x10
// 00576678: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0057667b: FSTP double ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (WRITE)
// 0057667e: FCOMP double ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (READ)
// 00576681: FNSTSW AX
// 00576683: SAHF
// 00576684: JA 0x00576690
//   XREF to: 00576690 (CONDITIONAL_JUMP)
// 00576686: FLD1
// 00576688: FCOMP double ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (READ)
// 0057668b: FNSTSW AX
// 0057668d: SAHF
// 0057668e: JNC 0x00576702
//   XREF to: 00576702 (CONDITIONAL_JUMP)
// 00576690: INC EBX
//   Label: LAB_00576690
// 00576691: ADD ESI,0xc
// 00576694: CMP EBX,0x8
// 00576697: JL 0x00576576
//   XREF to: 00576576 (CONDITIONAL_JUMP)
// 0057669d: XOR EAX,EAX
// 0057669f: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 005766a2: POP EBP
// 005766a3: POP EDI
// 005766a4: POP ESI
// 005766a5: POP EBX
// 005766a6: RET
// 005766a7: MOV EAX,dword ptr [EBP + 0x16]
//   Label: LAB_005766a7
//   XREF to: Stack[-0x74] (DATA)
// 005766aa: MOV dword ptr [EBP + -0x3e],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 005766ad: MOV EAX,dword ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (READ)
// 005766b0: MOV dword ptr [EBP + -0x3a],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 005766b3: MOV EAX,dword ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (READ)
// 005766b6: MOV dword ptr [EBP + -0x36],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 005766b9: JMP 0x005763e1
//   XREF to: 005763e1 (UNCONDITIONAL_JUMP)
// 005766be: MOV EAX,dword ptr [EDX]
//   Label: LAB_005766be
// 005766c0: MOV dword ptr [EBP + -0x32],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 005766c3: MOV EAX,dword ptr [EDX + 0x4]
// 005766c6: MOV dword ptr [EBP + -0x2e],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005766c9: MOV EAX,dword ptr [EDX + 0x8]
// 005766cc: MOV dword ptr [EBP + -0x2a],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 005766cf: JMP 0x005763f5
//   XREF to: 005763f5 (UNCONDITIONAL_JUMP)
// 005766d4: TEST SI,0x1
//   Label: LAB_005766d4
// 005766d9: JZ 0x0057641f
//   XREF to: 0057641f (CONDITIONAL_JUMP)
// 005766df: FLD float ptr [EBX + 0xc]
// 005766e2: FCHS
// 005766e4: FSTP float ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (WRITE)
// 005766e7: JMP 0x00576430
//   XREF to: 00576430 (UNCONDITIONAL_JUMP)
// 005766ec: MOV EAX,dword ptr [EBX + 0x10]
//   Label: LAB_005766ec
// 005766ef: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005766f2: JMP 0x00576449
//   XREF to: 00576449 (UNCONDITIONAL_JUMP)
// 005766f7: MOV EAX,dword ptr [EBX + 0x14]
//   Label: LAB_005766f7
// 005766fa: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005766fd: JMP 0x00576462
//   XREF to: 00576462 (UNCONDITIONAL_JUMP)
// 00576702: MOV EAX,0x1
//   Label: LAB_00576702
// 00576707: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 0057670a: POP EBP
// 0057670b: POP EDI
// 0057670c: POP ESI
// 0057670d: POP EBX
// 0057670e: RET

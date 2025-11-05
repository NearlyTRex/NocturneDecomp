// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_005a1160
// Address: 005a1160
// Address Range: [[005a1160, 005a14a2]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModelInstance_FUN_005a1160()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042b5b0 (0042b5b0) at 0042b5f8 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModelInstance_FUN_005a1160(undefined4 param_1,
   undefined4 param_2) */

int core_skeleton_cpp_CDeformableModelInstance_FUN_005a1160(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  CSkeleton *pCVar13;
  CMatrix3x4f *pCVar14;
  CMatrix3x4f *pCVar15;
  int iVar16;
  CDeformableModelInstance *in_stack_00000004;
  float *in_stack_00000008;
  int local_48;
  float local_3c;
  CSkeleton *local_38;
  
  iVar16 = 0;
  pCVar13 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                      (in_stack_00000004);
  local_3c = 1e+30;
  local_48 = 0;
  if (0 < pCVar13->bone_count) {
    pCVar14 = (in_stack_00000004->bone_transform).bone_world_matrices;
    pCVar15 = pCVar14;
    local_38 = pCVar13;
    do {
      iVar1 = local_38->bone_list[0].parent_index;
      if (-1 < iVar1) {
        fVar2 = pCVar15->m[0].z;
        fVar3 = pCVar15->m[1].z;
        fVar4 = pCVar15->m[2].z;
        fVar5 = pCVar14[iVar1].m[0].z;
        fVar6 = pCVar14[iVar1].m[1].z;
        fVar8 = fVar5 - fVar2;
        fVar9 = fVar6 - fVar3;
        fVar7 = pCVar14[iVar1].m[2].z;
        fVar11 = fVar7 - fVar4;
        fVar10 = SQRT(fVar11 * fVar11 + fVar8 * fVar8 + fVar9 * fVar9);
        if (fVar10 <= 0.0) {
LAB_005a1348:
          fVar2 = (in_stack_00000008[1] - fVar3) * (in_stack_00000008[1] - fVar3) +
                  (*in_stack_00000008 - fVar2) * (*in_stack_00000008 - fVar2);
          fVar7 = in_stack_00000008[2] - fVar4;
        }
        else {
          fVar12 = 1.0 / fVar10;
          fVar8 = fVar8 * fVar12;
          fVar9 = fVar9 * fVar12;
          fVar11 = fVar11 * fVar12;
          fVar12 = (in_stack_00000008[2] * fVar11 +
                   *in_stack_00000008 * fVar8 + in_stack_00000008[1] * fVar9) -
                   (fVar4 * fVar11 + fVar2 * fVar8 + fVar3 * fVar9);
          if (fVar12 <= 0.0) goto LAB_005a1348;
          if (fVar12 < fVar10) {
            fVar2 = *in_stack_00000008 - (fVar2 + fVar8 * fVar12);
            fVar3 = in_stack_00000008[1] - (fVar3 + fVar9 * fVar12);
            fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
            fVar7 = in_stack_00000008[2] - (fVar4 + fVar11 * fVar12);
          }
          else {
            fVar5 = *in_stack_00000008 - fVar5;
            fVar6 = in_stack_00000008[1] - fVar6;
            fVar2 = fVar6 * fVar6 + fVar5 * fVar5;
            fVar7 = in_stack_00000008[2] - fVar7;
          }
        }
        fVar2 = SQRT(fVar7 * fVar7 + fVar2);
        if (fVar2 < local_3c) {
          local_48 = iVar1;
          local_3c = fVar2;
        }
      }
      local_38 = (CSkeleton *)((local_38->motion_list).state_names[1] + 2);
      iVar16 = iVar16 + 1;
      pCVar15 = pCVar15 + 1;
    } while (iVar16 < pCVar13->bone_count);
  }
  return local_48;
}


// Assembly code:
// 005a1160: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_005a1160
// 005a1161: PUSH ESI
// 005a1162: PUSH EDI
// 005a1163: PUSH EBP
// 005a1164: MOV EBP,ESP
// 005a1166: SUB ESP,0xbc
// 005a116c: AND ESP,0xfffffff8
// 005a116f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a1172: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a1175: PUSH EDX
// 005a1176: XOR ESI,ESI
// 005a1178: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005a117d: MOV ECX,0x7149f2ca
// 005a1182: ADD ESP,0x4
// 005a1185: MOV EDI,dword ptr [EAX + 0x28558]
// 005a118b: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005a1192: MOV dword ptr [ESP + 0x90],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 005a1199: MOV dword ptr [ESP + 0x84],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 005a11a0: TEST EDI,EDI
// 005a11a2: JLE 0x005a13b2
//   XREF to: 005a13b2 (CONDITIONAL_JUMP)
// 005a11a8: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a11ab: ADD EDX,0xe80
// 005a11b1: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005a11b8: MOV dword ptr [ESP + 0x88],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 005a11bf: MOV ECX,dword ptr [ESP + 0x94]
//   Label: LAB_005a11bf
//   XREF to: Stack[-0x3c] (READ)
// 005a11c6: MOV ECX,dword ptr [ECX + 0x2857c]
// 005a11cc: TEST ECX,ECX
// 005a11ce: JL 0x005a1391
//   XREF to: 005a1391 (CONDITIONAL_JUMP)
// 005a11d4: MOV EAX,dword ptr [EDX + 0xc]
// 005a11d7: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a11de: MOV EAX,dword ptr [EDX + 0x1c]
// 005a11e1: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a11e8: MOV EAX,dword ptr [EDX + 0x2c]
// 005a11eb: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005a11f2: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x1c] (READ)
// 005a11f9: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005a11fd: MOV EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x18] (READ)
// 005a1204: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005a1208: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x20] (READ)
// 005a120f: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 005a1213: IMUL EAX,ECX,0x30
// 005a1216: ADD EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x48] (READ)
// 005a121d: MOV EDI,dword ptr [EAX + 0xc]
// 005a1220: MOV dword ptr [ESP + 0x98],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 005a1227: MOV EDI,dword ptr [EAX + 0x1c]
// 005a122a: FLD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x38] (READ)
// 005a1231: MOV dword ptr [ESP + 0xa0],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 005a1238: FSUB float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x1c] (READ)
// 005a123f: FLD float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x30] (READ)
// 005a1246: FSUB float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x18] (READ)
// 005a124d: MOV EAX,dword ptr [EAX + 0x2c]
// 005a1250: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0xb0] (WRITE)
// 005a1254: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0xb0] (READ)
// 005a1258: FXCH
// 005a125a: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xb4] (WRITE)
// 005a125e: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a1265: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xb4] (READ)
// 005a1269: FMUL ST0
// 005a126b: FLD float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x2c] (READ)
// 005a1272: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x38] (READ)
// 005a1279: FSUB float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x20] (READ)
// 005a1280: FXCH
// 005a1282: FADDP ST2,ST0
// 005a1284: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0xac] (WRITE)
// 005a1288: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0xac] (READ)
// 005a128c: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005a1290: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x2c] (READ)
// 005a1297: FADDP
// 005a1299: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005a129d: FSQRT
// 005a129f: FLDZ
// 005a12a1: MOV dword ptr [ESP + 0x2c],EDI
//   XREF to: Stack[-0xa4] (WRITE)
// 005a12a5: FXCH
// 005a12a7: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xc8] (WRITE)
// 005a12ab: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xc8] (READ)
// 005a12af: FNSTSW AX
// 005a12b1: SAHF
// 005a12b2: JNC 0x005a1348
//   XREF to: 005a1348 (CONDITIONAL_JUMP)
// 005a12b8: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xc8] (READ)
// 005a12bc: FLD1
// 005a12be: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xb4] (READ)
// 005a12c2: FXCH ST2
// 005a12c4: FSTP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x44] (WRITE)
// 005a12cb: FDIV float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x44] (READ)
// 005a12d2: FXCH
// 005a12d4: FMUL ST1
// 005a12d6: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0xb0] (READ)
// 005a12da: FMUL ST2
// 005a12dc: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0xac] (READ)
// 005a12e0: FMULP ST3
// 005a12e2: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x18] (READ)
// 005a12e9: FXCH
// 005a12eb: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0xb0] (WRITE)
// 005a12ef: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0xb0] (READ)
// 005a12f3: FXCH
// 005a12f5: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xb4] (WRITE)
// 005a12f9: FXCH
// 005a12fb: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0xac] (WRITE)
// 005a12ff: FLD float ptr [EBX + 0x4]
// 005a1302: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0xb0] (READ)
// 005a1306: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x1c] (READ)
// 005a130d: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xb4] (READ)
// 005a1311: FLD float ptr [EBX]
// 005a1313: FXCH
// 005a1315: FADDP ST3,ST0
// 005a1317: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xb4] (READ)
// 005a131b: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x20] (READ)
// 005a1322: FXCH
// 005a1324: FADDP ST2,ST0
// 005a1326: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0xac] (READ)
// 005a132a: FLD float ptr [EBX + 0x8]
// 005a132d: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0xac] (READ)
// 005a1331: FXCH
// 005a1333: FADDP ST3,ST0
// 005a1335: FADDP
// 005a1337: FSUBRP
// 005a1339: FLDZ
// 005a133b: FXCH
// 005a133d: FSTP double ptr [ESP]
//   XREF to: Stack[-0xd0] (DATA)
// 005a1340: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xd0] (DATA)
// 005a1343: FNSTSW AX
// 005a1345: SAHF
// 005a1346: JC 0x005a13c0
//   XREF to: 005a13c0 (CONDITIONAL_JUMP)
// 005a1348: FLD float ptr [EBX]
//   Label: LAB_005a1348
// 005a134a: FSUB float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x1c] (READ)
// 005a1351: FMUL ST0
// 005a1353: FLD float ptr [EBX + 0x4]
// 005a1356: FSUB float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x18] (READ)
// 005a135d: FMUL ST0
// 005a135f: FLD float ptr [EBX + 0x8]
// 005a1362: FXCH
// 005a1364: FADDP ST2,ST0
// 005a1366: FSUB float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x20] (READ)
// 005a136d: FMUL ST0
//   Label: LAB_005a136d
// 005a136f: FADDP
// 005a1371: FSQRT
// 005a1373: FSTP float ptr [ESP + 0xac]
//   XREF to: Stack[-0x24] (WRITE)
// 005a137a: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0x24] (READ)
// 005a1381: FCOMP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x40] (READ)
// 005a1388: FNSTSW AX
// 005a138a: SAHF
// 005a138b: JC 0x005a1489
//   XREF to: 005a1489 (CONDITIONAL_JUMP)
// 005a1391: ADD dword ptr [ESP + 0x94],0x24
//   Label: LAB_005a1391
//   XREF to: Stack[-0x3c] (READ_WRITE)
// 005a1399: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x50] (READ)
// 005a13a0: INC ESI
// 005a13a1: MOV ECX,dword ptr [EAX + 0x28558]
// 005a13a7: ADD EDX,0x30
// 005a13aa: CMP ESI,ECX
// 005a13ac: JL 0x005a11bf
//   XREF to: 005a11bf (CONDITIONAL_JUMP)
// 005a13b2: MOV EAX,dword ptr [ESP + 0x84]
//   Label: LAB_005a13b2
//   XREF to: Stack[-0x4c] (READ)
// 005a13b9: MOV ESP,EBP
// 005a13bb: POP EBP
// 005a13bc: POP EDI
// 005a13bd: POP ESI
// 005a13be: POP EBX
// 005a13bf: RET
// 005a13c0: FLD double ptr [ESP]
//   Label: LAB_005a13c0
//   XREF to: Stack[-0xd0] (DATA)
// 005a13c3: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xc8] (READ)
// 005a13c7: FNSTSW AX
// 005a13c9: SAHF
// 005a13ca: JC 0x005a13f6
//   XREF to: 005a13f6 (CONDITIONAL_JUMP)
// 005a13cc: FLD float ptr [EBX]
// 005a13ce: FSUB float ptr [ESP + 0x98]
//   XREF to: Stack[-0x38] (READ)
// 005a13d5: FMUL ST0
// 005a13d7: FLD float ptr [EBX + 0x4]
// 005a13da: FSUB float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x30] (READ)
// 005a13e1: FMUL ST0
// 005a13e3: FLD float ptr [EBX + 0x8]
// 005a13e6: FXCH
// 005a13e8: FADDP ST2,ST0
// 005a13ea: FSUB float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x2c] (READ)
// 005a13f1: JMP 0x005a136d
//   XREF to: 005a136d (UNCONDITIONAL_JUMP)
// 005a13f6: FLD float ptr [ESP + 0x1c]
//   Label: LAB_005a13f6
//   XREF to: Stack[-0xb4] (READ)
// 005a13fa: FLD double ptr [ESP]
//   XREF to: Stack[-0xd0] (DATA)
// 005a13fd: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x28] (WRITE)
// 005a1404: FMUL float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x28] (READ)
// 005a140b: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0xb0] (READ)
// 005a140f: FMUL float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x28] (READ)
// 005a1416: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0xac] (READ)
// 005a141a: FMUL float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x28] (READ)
// 005a1421: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x1c] (READ)
// 005a1428: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x18] (READ)
// 005a142f: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x20] (READ)
// 005a1436: FXCH ST5
// 005a1438: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x90] (WRITE)
// 005a143c: FXCH ST3
// 005a143e: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x8c] (WRITE)
// 005a1442: FXCH
// 005a1444: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x88] (WRITE)
// 005a1448: FADD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x90] (READ)
// 005a144c: FXCH
// 005a144e: FADD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x8c] (READ)
// 005a1452: FXCH ST2
// 005a1454: FADD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x88] (READ)
// 005a1458: FXCH
// 005a145a: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0xc0] (WRITE)
// 005a145e: FXCH
// 005a1460: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0xbc] (WRITE)
// 005a1464: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0xb8] (WRITE)
// 005a1468: FLD float ptr [EBX]
// 005a146a: FSUB float ptr [ESP + 0x10]
//   XREF to: Stack[-0xc0] (READ)
// 005a146e: FMUL ST0
// 005a1470: FLD float ptr [EBX + 0x4]
// 005a1473: FSUB float ptr [ESP + 0x14]
//   XREF to: Stack[-0xbc] (READ)
// 005a1477: FMUL ST0
// 005a1479: FLD float ptr [EBX + 0x8]
// 005a147c: FXCH
// 005a147e: FADDP ST2,ST0
// 005a1480: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[-0xb8] (READ)
// 005a1484: JMP 0x005a136d
//   XREF to: 005a136d (UNCONDITIONAL_JUMP)
// 005a1489: MOV EAX,dword ptr [ESP + 0xac]
//   Label: LAB_005a1489
//   XREF to: Stack[-0x24] (READ)
// 005a1490: MOV dword ptr [ESP + 0x84],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 005a1497: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005a149e: JMP 0x005a1391
//   XREF to: 005a1391 (UNCONDITIONAL_JUMP)

// Name: core_pendulum.cpp_FUN_005495c0
// Address: 005495c0
// Address Range: [[005495c0, 00549a92]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_005495c0()
// Cross-references:
//   core_pendulum.cpp_FUN_0054a180 (0054a180) at 0054a2a3 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0063ec9d = 0.5
//   undefined4 DAT_00662138
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_gore.cpp_FUN_004edbb0
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_pendulum.cpp_FUN_005495c0(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4) */

void core_pendulum_cpp_FUN_005495c0(void)

{
  int iVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  CKeyFramedModel *pCVar4;
  BADSPACEBASE *in_ESP;
  CVector3i **ppCVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  SCollisionInfo aSStack_110 [2];
  CVector3f CStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CMatrix3x3f *pCStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float *pfStack_18;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(aSStack_110);
  if ((((in_stack_0000000c == 0) ||
       (iVar1 = (**(code **)(*(int *)(in_stack_0000000c + 0x154) + 0x120))(), iVar1 == 0)) &&
      ((in_stack_00000010 == 0 ||
       (iVar1 = (**(code **)(*(int *)(in_stack_00000010 + 0x154) + 0x120))(), iVar1 == 0)))) &&
     (iVar1 = (**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x34))(), iVar1 == 2)) {
    pfVar2 = (float *)(**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x14))();
    fStack_58 = *pfVar2 + pfVar2[3];
    fStack_54 = pfVar2[1] + pfVar2[4];
    fStack_34 = fStack_58 * FLOAT_0063ec9d;
    fStack_50 = pfVar2[2] + pfVar2[5];
    fStack_30 = fStack_54 * FLOAT_0063ec9d;
    fStack_2c = fStack_50 * FLOAT_0063ec9d;
    CStack_7c.x = *(float *)(in_stack_00000008 + 0x20) + fStack_34;
    CStack_7c.y = *(float *)(in_stack_00000008 + 0x24) + fStack_30;
    CStack_7c.z = *(float *)(in_stack_00000008 + 0x28) + fStack_2c;
    CStack_70.x = CStack_7c.x - *(float *)(in_stack_00000004 + 0x20);
    CStack_70.y = CStack_7c.y - *(float *)(in_stack_00000004 + 0x24);
    CStack_70.z = CStack_7c.z - *(float *)(in_stack_00000004 + 0x28);
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)(in_stack_00000004 + 0x3c),&CStack_40,&CStack_70);
    if (&CStack_7c != pCVar3) {
      CStack_7c.x = pCVar3->x;
      CStack_7c.y = pCVar3->y;
      CStack_7c.z = pCVar3->z;
    }
    pfVar2 = (float *)(**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
    if (((((*pfVar2 <= CStack_7c.x) && (pfVar2[1] <= CStack_7c.y)) && (pfVar2[2] <= CStack_7c.z)) &&
        ((CStack_7c.x <= pfVar2[3] && (CStack_7c.y <= pfVar2[4])))) && (CStack_7c.z <= pfVar2[5])) {
      pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                         ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
      fStack_24 = aSStack_110[0].cylinder_radius * aSStack_110[0].cylinder_radius;
      iStack_20 = pCVar4->vertex_count;
      ppCVar5 = pCVar4->vertex_list;
      iStack_1c = 0;
      if (0 < iStack_20) {
        pfStack_18 = (float *)(in_stack_00000008 + 0x20);
        pCStack_28 = (CMatrix3x3f *)(in_stack_00000004 + 0x3c);
        while( true ) {
          CStack_a0.x = (float)(int)*ppCVar5 * _DAT_00662138;
          CStack_a0.y = (float)(int)ppCVar5[1] * _DAT_00662138;
          CStack_a0.z = (float)(int)ppCVar5[2] * _DAT_00662138;
          pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (pCStack_28,&CStack_64,&CStack_a0);
          if (&CStack_a0 != pCVar3) {
            CStack_a0.x = pCVar3->x;
            CStack_a0.y = pCVar3->y;
            CStack_a0.z = pCVar3->z;
          }
          CStack_a0.x = (CStack_a0.x + *(float *)(in_stack_00000004 + 0x20)) - *pfStack_18;
          CStack_a0.y = (CStack_a0.y + *(float *)(in_stack_00000004 + 0x24)) - pfStack_18[1];
          CStack_a0.z = (CStack_a0.z + *(float *)(in_stack_00000004 + 0x28)) - pfStack_18[2];
          if (((aSStack_110[0].cylinder_bottom_y <= CStack_a0.y) &&
              (CStack_a0.y <= aSStack_110[0].cylinder_top_y + 1.0)) &&
             (CStack_a0.x * CStack_a0.x + CStack_a0.z * CStack_a0.z <= fStack_24)) break;
          iStack_1c = iStack_1c + 1;
          ppCVar5 = ppCVar5 + 3;
          if (iStack_20 <= iStack_1c) {
            return;
          }
        }
        if (in_stack_0000000c != 0) {
          (**(code **)(*(int *)(in_stack_0000000c + 0x154) + 0xf0))();
        }
        if (in_stack_00000010 != 0) {
          (**(code **)(*(int *)(in_stack_00000010 + 0x154) + 0xf0))();
        }
        pfVar2 = (float *)(**(code **)(*(int *)(in_stack_00000008 + 0x154) + 0x14))();
        fStack_94 = *pfVar2 + pfVar2[3];
        fStack_90 = pfVar2[1] + pfVar2[4];
        fStack_88 = fStack_94 * FLOAT_0063ec9d;
        fStack_8c = pfVar2[2] + pfVar2[5];
        fStack_84 = fStack_90 * FLOAT_0063ec9d;
        fStack_80 = fStack_8c * FLOAT_0063ec9d;
        CStack_4c.x = *(float *)(in_stack_00000008 + 0x20) + fStack_88;
        CStack_4c.y = *(float *)(in_stack_00000008 + 0x24) + fStack_84;
        CStack_4c.z = *(float *)(in_stack_00000008 + 0x28) + fStack_80;
        if (&CStack_a0 != &CStack_4c) {
          CStack_a0.x = CStack_4c.x;
          CStack_a0.y = CStack_4c.y;
          CStack_a0.z = CStack_4c.z;
        }
        core_gore_cpp_FUN_004edbb0();
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 005495c0: PUSH EBX
//   Label: core_pendulum.cpp_FUN_005495c0
// 005495c1: PUSH ESI
// 005495c2: PUSH EDI
// 005495c3: PUSH EBP
// 005495c4: MOV EBP,ESP
// 005495c6: SUB ESP,0xfc
// 005495cc: AND ESP,0xfffffff8
// 005495cf: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005495d2: MOV EAX,ESP
// 005495d4: PUSH EAX
// 005495d5: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 005495da: ADD ESP,0x4
// 005495dd: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005495e0: TEST EDX,EDX
// 005495e2: JNZ 0x00549606
//   XREF to: 00549606 (CONDITIONAL_JUMP)
// 005495e4: MOV ESI,dword ptr [EBP + 0x20]
//   Label: LAB_005495e4
//   XREF to: Stack[0x10] (READ)
// 005495e7: TEST ESI,ESI
// 005495e9: JZ 0x0054961c
//   XREF to: 0054961c (CONDITIONAL_JUMP)
// 005495eb: PUSH ESI
// 005495ec: MOV EAX,dword ptr [ESI + 0x154]
// 005495f2: CALL dword ptr [EAX + 0x120]
// 005495f8: ADD ESP,0x4
// 005495fb: TEST EAX,EAX
// 005495fd: JZ 0x0054961c
//   XREF to: 0054961c (CONDITIONAL_JUMP)
// 005495ff: MOV ESP,EBP
//   Label: LAB_005495ff
// 00549601: POP EBP
// 00549602: POP EDI
// 00549603: POP ESI
// 00549604: POP EBX
// 00549605: RET
// 00549606: PUSH EDX
//   Label: LAB_00549606
// 00549607: MOV EAX,dword ptr [EDX + 0x154]
// 0054960d: CALL dword ptr [EAX + 0x120]
// 00549613: ADD ESP,0x4
// 00549616: TEST EAX,EAX
// 00549618: JNZ 0x005495ff
//   XREF to: 005495ff (CONDITIONAL_JUMP)
// 0054961a: JMP 0x005495e4
//   XREF to: 005495e4 (UNCONDITIONAL_JUMP)
// 0054961c: MOV EDX,ESP
//   Label: LAB_0054961c
// 0054961e: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00549621: PUSH EDX
// 00549622: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00549625: MOV EAX,dword ptr [EAX + 0x154]
// 0054962b: PUSH EDX
// 0054962c: CALL dword ptr [EAX + 0x34]
// 0054962f: ADD ESP,0x8
// 00549632: CMP EAX,0x2
// 00549635: JNZ 0x005495ff
//   XREF to: 005495ff (CONDITIONAL_JUMP)
// 00549637: LEA EAX,[ESP + 0x58]
// 0054963b: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0054963e: PUSH EAX
// 0054963f: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00549642: MOV EDX,dword ptr [EDX + 0x154]
// 00549648: PUSH ECX
// 00549649: CALL dword ptr [EDX + 0x14]
// 0054964c: LEA EDX,[EAX + 0xc]
// 0054964f: FLD float ptr [EAX]
// 00549651: FADD float ptr [EDX]
// 00549653: ADD ESP,0x8
// 00549656: FST float ptr [ESP + 0xb8]
// 0054965d: FLD float ptr [EAX + 0x4]
// 00549660: FADD float ptr [EDX + 0x4]
// 00549663: FXCH
// 00549665: FLD float ptr [0x0063ec9d]
//   XREF to: 0063ec9d (READ)
// 0054966b: FXCH
// 0054966d: FMUL ST1
// 0054966f: FXCH ST2
// 00549671: FST float ptr [ESP + 0xbc]
// 00549678: FLD float ptr [EAX + 0x8]
// 0054967b: FADD float ptr [EDX + 0x8]
// 0054967e: FXCH
// 00549680: FMUL ST2
// 00549682: FXCH
// 00549684: FST float ptr [ESP + 0xc0]
// 0054968b: FMULP ST2
// 0054968d: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00549690: FXCH ST2
// 00549692: FSTP float ptr [ESP + 0xdc]
// 00549699: FXCH
// 0054969b: FSTP float ptr [ESP + 0xe0]
// 005496a2: FSTP float ptr [ESP + 0xe4]
// 005496a9: FLD float ptr [EAX + 0x20]
// 005496ac: FADD float ptr [ESP + 0xdc]
// 005496b3: FSTP float ptr [ESP + 0x94]
// 005496ba: FLD float ptr [EAX + 0x24]
// 005496bd: FADD float ptr [ESP + 0xe0]
// 005496c4: FLD float ptr [ESP + 0x94]
// 005496cb: FXCH
// 005496cd: FSTP float ptr [ESP + 0x98]
// 005496d4: FLD float ptr [EAX + 0x28]
// 005496d7: FADD float ptr [ESP + 0xe4]
// 005496de: LEA EAX,[EBX + 0x20]
// 005496e1: FSTP float ptr [ESP + 0x9c]
// 005496e8: FSUB float ptr [EAX]
// 005496ea: FLD float ptr [ESP + 0x98]
// 005496f1: FXCH
// 005496f3: FSTP float ptr [ESP + 0xa0]
// 005496fa: FSUB float ptr [EAX + 0x4]
// 005496fd: FLD float ptr [ESP + 0x9c]
// 00549704: FXCH
// 00549706: FSTP float ptr [ESP + 0xa4]
// 0054970d: FSUB float ptr [EAX + 0x8]
// 00549710: LEA EAX,[ESP + 0xa0]
// 00549717: PUSH EAX
// 00549718: LEA EAX,[ESP + 0xd4]
// 0054971f: PUSH EAX
// 00549720: LEA EAX,[EBX + 0x3c]
// 00549723: PUSH EAX
// 00549724: FSTP float ptr [ESP + 0xb4]
// 0054972b: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 00549730: MOV EDX,EAX
// 00549732: LEA EAX,[ESP + 0xa0]
// 00549739: ADD ESP,0xc
// 0054973c: CMP EAX,EDX
// 0054973e: JZ 0x0054975d
//   XREF to: 0054975d (CONDITIONAL_JUMP)
// 00549740: MOV EAX,dword ptr [EDX]
// 00549742: MOV dword ptr [ESP + 0x94],EAX
// 00549749: MOV EAX,dword ptr [EDX + 0x4]
// 0054974c: MOV dword ptr [ESP + 0x98],EAX
// 00549753: MOV EAX,dword ptr [EDX + 0x8]
// 00549756: MOV dword ptr [ESP + 0x9c],EAX
// 0054975d: LEA EAX,[ESP + 0x28]
//   Label: LAB_0054975d
// 00549761: PUSH EAX
// 00549762: MOV EDX,dword ptr [EBX + 0x154]
// 00549768: PUSH EBX
// 00549769: CALL dword ptr [EDX + 0x14]
// 0054976c: FLD float ptr [EAX]
// 0054976e: ADD ESP,0x8
// 00549771: MOV EDX,EAX
// 00549773: FCOMP float ptr [ESP + 0x94]
// 0054977a: FNSTSW AX
// 0054977c: SAHF
// 0054977d: JA 0x005495ff
//   XREF to: 005495ff (CONDITIONAL_JUMP)
// 00549783: FLD float ptr [EDX + 0x4]
// 00549786: FCOMP float ptr [ESP + 0x98]
// 0054978d: FNSTSW AX
// 0054978f: SAHF
// 00549790: JA 0x005495ff
//   XREF to: 005495ff (CONDITIONAL_JUMP)
// 00549796: FLD float ptr [EDX + 0x8]
// 00549799: FCOMP float ptr [ESP + 0x9c]
// 005497a0: FNSTSW AX
// 005497a2: SAHF
// 005497a3: JA 0x005495ff
//   XREF to: 005495ff (CONDITIONAL_JUMP)
// 005497a9: FLD float ptr [EDX + 0xc]
// 005497ac: FCOMP float ptr [ESP + 0x94]
// 005497b3: FNSTSW AX
// 005497b5: SAHF
// 005497b6: JC 0x005495ff
//   XREF to: 005495ff (CONDITIONAL_JUMP)
// 005497bc: FLD float ptr [EDX + 0x10]
// 005497bf: FCOMP float ptr [ESP + 0x98]
// 005497c6: FNSTSW AX
// 005497c8: SAHF
// 005497c9: JC 0x005495ff
//   XREF to: 005495ff (CONDITIONAL_JUMP)
// 005497cf: FLD float ptr [EDX + 0x14]
// 005497d2: FCOMP float ptr [ESP + 0x9c]
// 005497d9: FNSTSW AX
// 005497db: SAHF
// 005497dc: JC 0x005495ff
//   XREF to: 005495ff (CONDITIONAL_JUMP)
// 005497e2: LEA EAX,[EBX + 0x158]
// 005497e8: PUSH EAX
// 005497e9: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005497ee: ADD ESP,0x4
// 005497f1: FLD float ptr [ESP + 0x1c]
// 005497f5: FMUL ST0
// 005497f7: XOR EDI,EDI
// 005497f9: MOV EDX,dword ptr [EAX + 0x104]
// 005497ff: MOV ESI,dword ptr [EAX + 0x10c]
// 00549805: MOV dword ptr [ESP + 0xf0],EDX
// 0054980c: MOV dword ptr [ESP + 0xf4],EDI
// 00549813: FSTP float ptr [ESP + 0xec]
// 0054981a: TEST EDX,EDX
// 0054981c: JLE 0x005495ff
//   XREF to: 005495ff (CONDITIONAL_JUMP)
// 00549822: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00549825: LEA EDI,[EBX + 0x20]
// 00549828: ADD EAX,0x20
// 0054982b: ADD EBX,0x3c
// 0054982e: MOV dword ptr [ESP + 0xf8],EAX
// 00549835: MOV dword ptr [ESP + 0xe8],EBX
// 0054983c: LEA EBX,[ESP + 0x70]
//   Label: LAB_0054983c
// 00549840: MOV EAX,ESI
// 00549842: FILD dword ptr [EAX]
// 00549844: FMUL float ptr [0x00662138]
//   XREF to: 00662138 (READ)
// 0054984a: FSTP float ptr [EBX]
// 0054984c: FILD dword ptr [EAX + 0x4]
// 0054984f: FMUL float ptr [0x00662138]
//   XREF to: 00662138 (READ)
// 00549855: FSTP float ptr [EBX + 0x4]
// 00549858: FILD dword ptr [EAX + 0x8]
// 0054985b: FMUL float ptr [0x00662138]
//   XREF to: 00662138 (READ)
// 00549861: FSTP float ptr [EBX + 0x8]
// 00549864: LEA EAX,[ESP + 0x70]
// 00549868: PUSH EAX
// 00549869: LEA EAX,[ESP + 0xb0]
// 00549870: PUSH EAX
// 00549871: MOV ECX,dword ptr [ESP + 0xf0]
// 00549878: PUSH ECX
// 00549879: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0054987e: MOV EDX,EAX
// 00549880: LEA EAX,[ESP + 0x7c]
// 00549884: ADD ESP,0xc
// 00549887: CMP EAX,EDX
// 00549889: JNZ 0x00549917
//   XREF to: 00549917 (CONDITIONAL_JUMP)
// 0054988f: FLD float ptr [ESP + 0x74]
//   Label: LAB_0054988f
// 00549893: FLD float ptr [ESP + 0x70]
// 00549897: FADD float ptr [EDI]
// 00549899: FLD float ptr [ESP + 0x78]
// 0054989d: FXCH
// 0054989f: FSTP float ptr [ESP + 0x70]
// 005498a3: FXCH
// 005498a5: FADD float ptr [EDI + 0x4]
// 005498a8: MOV EAX,dword ptr [ESP + 0xf8]
// 005498af: FSTP float ptr [ESP + 0x74]
// 005498b3: FADD float ptr [EDI + 0x8]
// 005498b6: FLD float ptr [ESP + 0x70]
// 005498ba: FXCH
// 005498bc: FSTP float ptr [ESP + 0x78]
// 005498c0: FSUB float ptr [EAX]
// 005498c2: FLD float ptr [ESP + 0x74]
// 005498c6: FXCH
// 005498c8: FSTP float ptr [ESP + 0x70]
// 005498cc: FSUB float ptr [EAX + 0x4]
// 005498cf: FLD float ptr [ESP + 0x78]
// 005498d3: FXCH
// 005498d5: FSTP float ptr [ESP + 0x74]
// 005498d9: FSUB float ptr [EAX + 0x8]
// 005498dc: FLD float ptr [ESP + 0x74]
// 005498e0: FXCH
// 005498e2: FSTP float ptr [ESP + 0x78]
// 005498e6: FCOMP float ptr [ESP + 0x14]
// 005498ea: FNSTSW AX
// 005498ec: SAHF
// 005498ed: JNC 0x00549930
//   XREF to: 00549930 (CONDITIONAL_JUMP)
// 005498ef: MOV EAX,dword ptr [ESP + 0xf4]
//   Label: LAB_005498ef
// 005498f6: MOV EDX,dword ptr [ESP + 0xf0]
// 005498fd: INC EAX
// 005498fe: ADD ESI,0xc
// 00549901: MOV dword ptr [ESP + 0xf4],EAX
// 00549908: CMP EAX,EDX
// 0054990a: JL 0x0054983c
//   XREF to: 0054983c (CONDITIONAL_JUMP)
// 00549910: MOV ESP,EBP
// 00549912: POP EBP
// 00549913: POP EDI
// 00549914: POP ESI
// 00549915: POP EBX
// 00549916: RET
// 00549917: MOV EAX,dword ptr [EDX]
//   Label: LAB_00549917
// 00549919: MOV dword ptr [ESP + 0x70],EAX
// 0054991d: MOV EAX,dword ptr [EDX + 0x4]
// 00549920: MOV dword ptr [ESP + 0x74],EAX
// 00549924: MOV EAX,dword ptr [EDX + 0x8]
// 00549927: MOV dword ptr [ESP + 0x78],EAX
// 0054992b: JMP 0x0054988f
//   XREF to: 0054988f (UNCONDITIONAL_JUMP)
// 00549930: FLD float ptr [ESP + 0x18]
//   Label: LAB_00549930
// 00549934: FLD1
// 00549936: FADDP
// 00549938: FLD float ptr [ESP + 0x74]
// 0054993c: FCOMPP
// 0054993e: FNSTSW AX
// 00549940: SAHF
// 00549941: JA 0x005498ef
//   XREF to: 005498ef (CONDITIONAL_JUMP)
// 00549943: FLD float ptr [ESP + 0x78]
// 00549947: FMUL ST0
// 00549949: FLD float ptr [ESP + 0x70]
// 0054994d: FMUL ST0
// 0054994f: FADDP
// 00549951: FCOMP float ptr [ESP + 0xec]
// 00549958: FNSTSW AX
// 0054995a: SAHF
// 0054995b: JA 0x005498ef
//   XREF to: 005498ef (CONDITIONAL_JUMP)
// 0054995d: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00549960: TEST EBX,EBX
// 00549962: JZ 0x0054997d
//   XREF to: 0054997d (CONDITIONAL_JUMP)
// 00549964: PUSH 0xbf800000
// 00549969: PUSH 0x0
// 0054996b: PUSH 0x7
// 0054996d: MOV EAX,dword ptr [EBX + 0x154]
// 00549973: PUSH EBX
// 00549974: CALL dword ptr [EAX + 0xf0]
// 0054997a: ADD ESP,0x10
// 0054997d: MOV EDI,dword ptr [EBP + 0x20]
//   Label: LAB_0054997d
//   XREF to: Stack[0x10] (READ)
// 00549980: TEST EDI,EDI
// 00549982: JZ 0x0054999d
//   XREF to: 0054999d (CONDITIONAL_JUMP)
// 00549984: PUSH 0xbf800000
// 00549989: PUSH 0x0
// 0054998b: PUSH 0x7
// 0054998d: MOV EAX,dword ptr [EDI + 0x154]
// 00549993: PUSH EDI
// 00549994: CALL dword ptr [EAX + 0xf0]
// 0054999a: ADD ESP,0x10
// 0054999d: LEA EAX,[ESP + 0x40]
//   Label: LAB_0054999d
// 005499a1: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005499a4: PUSH EAX
// 005499a5: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005499a8: MOV EDX,dword ptr [EDX + 0x154]
// 005499ae: PUSH ECX
// 005499af: CALL dword ptr [EDX + 0x14]
// 005499b2: LEA EDX,[EAX + 0xc]
// 005499b5: FLD float ptr [EAX]
// 005499b7: FADD float ptr [EDX]
// 005499b9: ADD ESP,0x8
// 005499bc: FST float ptr [ESP + 0x7c]
// 005499c0: FLD float ptr [EAX + 0x4]
// 005499c3: FADD float ptr [EDX + 0x4]
// 005499c6: FXCH
// 005499c8: FLD float ptr [0x0063ec9d]
//   XREF to: 0063ec9d (READ)
// 005499ce: FXCH
// 005499d0: FMUL ST1
// 005499d2: FXCH ST2
// 005499d4: FST float ptr [ESP + 0x80]
// 005499db: FLD float ptr [EAX + 0x8]
// 005499de: FADD float ptr [EDX + 0x8]
// 005499e1: FXCH
// 005499e3: FMUL ST2
// 005499e5: FXCH
// 005499e7: FST float ptr [ESP + 0x84]
// 005499ee: FMULP ST2
// 005499f0: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005499f3: FXCH ST2
// 005499f5: FSTP float ptr [ESP + 0x88]
// 005499fc: FXCH
// 005499fe: FSTP float ptr [ESP + 0x8c]
// 00549a05: FSTP float ptr [ESP + 0x90]
// 00549a0c: FLD float ptr [EAX + 0x20]
// 00549a0f: FADD float ptr [ESP + 0x88]
// 00549a16: FSTP float ptr [ESP + 0xc4]
// 00549a1d: FLD float ptr [EAX + 0x24]
// 00549a20: FADD float ptr [ESP + 0x8c]
// 00549a27: LEA EDX,[ESP + 0x70]
// 00549a2b: FSTP float ptr [ESP + 0xc8]
// 00549a32: FLD float ptr [EAX + 0x28]
// 00549a35: FADD float ptr [ESP + 0x90]
// 00549a3c: LEA EAX,[ESP + 0xc4]
// 00549a43: FSTP float ptr [ESP + 0xcc]
// 00549a4a: CMP EDX,EAX
// 00549a4c: JZ 0x00549a6f
//   XREF to: 00549a6f (CONDITIONAL_JUMP)
// 00549a4e: MOV EAX,dword ptr [ESP + 0xc4]
// 00549a55: MOV dword ptr [ESP + 0x70],EAX
// 00549a59: MOV EAX,dword ptr [ESP + 0xc8]
// 00549a60: MOV dword ptr [ESP + 0x74],EAX
// 00549a64: MOV EAX,dword ptr [ESP + 0xcc]
// 00549a6b: MOV dword ptr [ESP + 0x78],EAX
// 00549a6f: PUSH 0x0
//   Label: LAB_00549a6f
// 00549a71: PUSH 0xc8
// 00549a76: PUSH 0x0
// 00549a78: LEA EAX,[ESP + 0x7c]
// 00549a7c: PUSH EAX
// 00549a7d: MOV EBX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 00549a83: PUSH EBX
//   XREF to: 02d83364 (DATA)
// 00549a84: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 00549a89: ADD ESP,0x14
// 00549a8c: MOV ESP,EBP
// 00549a8e: POP EBP
// 00549a8f: POP EDI
// 00549a90: POP ESI
// 00549a91: POP EBX
// 00549a92: RET

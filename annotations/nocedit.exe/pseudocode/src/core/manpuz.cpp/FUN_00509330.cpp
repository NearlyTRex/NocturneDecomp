// Name: core_manpuz.cpp_FUN_00509330
// Address: 00509330
// Address Range: [[00509330, 0050971c]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509330()
// Function calls:
//   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dtri.cpp_rayTriangleIntersection_FUN_0049a800

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_00509330(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4) */

float core_manpuz_cpp_FUN_00509330
                (undefined4 param_1,undefined4 param_2,float unaff_EBX,undefined4 param_4,
                int param_5,CVector3f *param_6,CVector3f *param_7,CVector3f *param_8)

{
  CKeyFramedModel *pCVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  CMatrix3x3f *pCVar6;
  float unaff_EDI;
  CDemonTriangle *triangle;
  undefined1 local_c0 [12];
  float local_b4;
  CVector3f local_b0;
  undefined1 local_9c [12];
  CVector3f local_90;
  CVector3f CStack_80;
  undefined1 local_6c [8];
  undefined1 auStack_64 [16];
  undefined1 local_54 [20];
  undefined1 local_40 [8];
  float fStack_38;
  undefined1 auStack_34 [8];
  float local_2c;
  int *local_28;
  int local_24;
  int local_1c;
  int local_18;
  float fStack_14;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(param_5 + 0x158));
  local_c0._0_4_ = (pCVar1->bounds_min).z;
  local_c0._4_4_ = (pCVar1->bounds_max).x;
  local_c0._8_4_ = (pCVar1->bounds_max).y;
  local_b4 = (pCVar1->bounds_max).z;
  local_24 = param_5 + 0xaa0;
  local_18 = 0x3f8147ae;
  local_28 = (int *)(param_5 + 0x5f0);
  local_1c = 0;
  do {
    if (*local_28 != 0) {
      local_b0.x = param_6->x - (float)local_28[3];
      local_b0.y = param_6->y - (float)local_28[4];
      local_b0.z = param_6->z - (float)local_28[5];
      pCVar6 = (CMatrix3x3f *)(local_28 + 9);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (pCVar6,(CVector3f *)(local_6c + 4),&local_b0);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (pCVar6,(CVector3f *)auStack_34,param_7);
      fVar2 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                        ((CBoundingBox3D *)local_c0,(CVector3f *)(auStack_64 + 4),
                         (CVector3f *)(auStack_34 + 4),(CVector3f *)local_9c);
      if ((0.0 <= fVar2) && (fVar2 < unaff_EDI)) {
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (pCVar6,&CStack_80,(CVector3f *)(local_9c + 4));
        unaff_EDI = fVar2;
        if (param_8 != pCVar4) {
          param_8->x = pCVar4->x;
          param_8->y = pCVar4->y;
          param_8->z = pCVar4->z;
        }
      }
    }
    local_2c = (float)(local_24 + local_1c);
    iVar5 = 0;
    do {
      triangle = (CDemonTriangle *)((int)local_2c + 0x3c + iVar5);
      fVar2 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800(triangle,param_6,param_7);
      if ((0.0 <= fVar2) && (fVar2 < fStack_14)) {
        local_40._0_4_ = -(triangle->normal).x;
        local_40._4_4_ = -(triangle->normal).y;
        fStack_38 = -(triangle->normal).z;
        fStack_14 = fVar2;
        if (param_8 != (CVector3f *)local_40) {
          param_8->x = (float)local_40._0_4_;
          param_8->y = (float)local_40._4_4_;
          param_8->z = fStack_38;
        }
      }
      iVar5 = iVar5 + 0x38;
    } while (iVar5 != 0x70);
    local_18 = local_18 + 0xb8;
    local_24 = local_24 + 100;
  } while (local_18 != 0x8a0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(param_5 + 0x450));
  if ((CVector3f *)local_c0 != &pCVar1->bounds_min) {
    local_c0._0_4_ = (pCVar1->bounds_min).x;
    local_c0._4_4_ = (pCVar1->bounds_min).y;
    local_c0._8_4_ = (pCVar1->bounds_min).z;
  }
  if ((CVector3f *)&local_b4 != &pCVar1->bounds_max) {
    local_b4 = (pCVar1->bounds_max).x;
    local_b0.x = (pCVar1->bounds_max).y;
    local_b0.y = (pCVar1->bounds_max).z;
  }
  iVar5 = param_5 + 0x1340;
  local_18 = param_5 + 0x1400;
  do {
    if (0.0 < *(float *)(iVar5 + 0x18)) {
      local_90.x = param_6->x - *(float *)(iVar5 + 0x1c);
      local_90.y = param_6->y - *(float *)(iVar5 + 0x20);
      local_90.z = param_6->z - *(float *)(iVar5 + 0x24);
      pCVar6 = (CMatrix3x3f *)(iVar5 + 0x34);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (pCVar6,(CVector3f *)local_54,&local_90);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (pCVar6,(CVector3f *)(local_6c + 4),param_7);
      fVar3 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                        ((CBoundingBox3D *)(local_c0 + 8),(CVector3f *)(local_54 + 8),
                         (CVector3f *)auStack_64,(CVector3f *)local_40);
      local_c0._8_4_ = fVar3;
      if ((0.0 <= fVar3) && (fVar3 < unaff_EBX)) {
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           (pCVar6,(CVector3f *)local_6c,(CVector3f *)(local_40 + 4));
        unaff_EBX = fVar3;
        if (param_8 != pCVar4) {
          param_8->x = pCVar4->x;
          param_8->y = pCVar4->y;
          param_8->z = pCVar4->z;
        }
      }
    }
    iVar5 = iVar5 + 0x60;
  } while (iVar5 != local_18);
  return fVar2;
}


// Assembly code:
// 00509330: PUSH EBX
//   Label: core_manpuz.cpp_FUN_00509330
// 00509331: PUSH ESI
// 00509332: PUSH EDI
// 00509333: PUSH EBP
// 00509334: MOV EBP,ESP
// 00509336: SUB ESP,0xc4
// 0050933c: AND ESP,0xfffffff8
// 0050933f: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00509342: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00509345: ADD EAX,0x158
// 0050934a: PUSH EAX
// 0050934b: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00509350: LEA ESI,[EAX + 0x5678]
// 00509356: ADD ESP,0x4
// 00509359: MOV EAX,dword ptr [ESI]
// 0050935b: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 0050935f: LEA EAX,[ESI + 0x4]
// 00509362: MOV EAX,dword ptr [EAX]
// 00509364: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 00509368: LEA EAX,[ESI + 0x8]
// 0050936b: MOV EAX,dword ptr [EAX]
// 0050936d: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 00509371: MOV EAX,dword ptr [ESI + 0xc]
// 00509374: ADD ESI,0xc
// 00509377: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 0050937b: LEA EAX,[ESI + 0x4]
// 0050937e: MOV EAX,dword ptr [EAX]
// 00509380: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 00509384: LEA EAX,[ESI + 0x8]
// 00509387: MOV EAX,dword ptr [EAX]
// 00509389: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 0050938d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00509390: MOV EDX,0x3f8147ae
// 00509395: ADD EAX,0xaa0
// 0050939a: XOR ECX,ECX
// 0050939c: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005093a3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005093a6: MOV dword ptr [ESP + 0xbc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005093ad: ADD EAX,0x5f0
// 005093b2: MOV dword ptr [ESP + 0xb8],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005093b9: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005093c0: MOV EAX,dword ptr [ESP + 0xac]
//   Label: LAB_005093c0
//   XREF to: Stack[-0x2c] (READ)
// 005093c7: CMP dword ptr [EAX],0x0
// 005093ca: JNZ 0x0050954b
//   XREF to: 0050954b (CONDITIONAL_JUMP)
// 005093d0: MOV EAX,dword ptr [ESP + 0xb0]
//   Label: LAB_005093d0
//   XREF to: Stack[-0x28] (READ)
// 005093d7: ADD EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x20] (READ)
// 005093de: XOR ESI,ESI
// 005093e0: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005093e7: MOV ECX,dword ptr [EBP + 0x1c]
//   Label: LAB_005093e7
//   XREF to: Stack[0xc] (READ)
// 005093ea: PUSH ECX
// 005093eb: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005093ee: PUSH EDI
// 005093ef: MOV EDI,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x30] (READ)
// 005093f6: ADD EDI,0x3c
// 005093f9: ADD EDI,ESI
// 005093fb: PUSH EDI
// 005093fc: CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
//   XREF to: 0049a800 (UNCONDITIONAL_CALL)
// 00509401: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00509408: FLD float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x18] (READ)
// 0050940f: ADD ESP,0xc
// 00509412: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (WRITE)
// 00509416: FLDZ
// 00509418: FCOMPP
// 0050941a: FNSTSW AX
// 0050941c: SAHF
// 0050941d: JA 0x00509488
//   XREF to: 00509488 (CONDITIONAL_JUMP)
// 0050941f: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 00509423: FCOMP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x1c] (READ)
// 0050942a: FNSTSW AX
// 0050942c: SAHF
// 0050942d: JNC 0x00509488
//   XREF to: 00509488 (CONDITIONAL_JUMP)
// 0050942f: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xd4] (READ)
// 00509433: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0050943a: LEA EAX,[EDI + 0x24]
// 0050943d: FLD float ptr [EAX]
// 0050943f: FCHS
// 00509441: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x48] (WRITE)
// 00509448: FLD float ptr [EAX + 0x4]
// 0050944b: FCHS
// 0050944d: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x44] (WRITE)
// 00509454: FLD float ptr [EAX + 0x8]
// 00509457: FCHS
// 00509459: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x48] (DATA)
// 00509460: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (WRITE)
// 00509467: CMP EBX,EAX
// 00509469: JZ 0x00509488
//   XREF to: 00509488 (CONDITIONAL_JUMP)
// 0050946b: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x48] (DATA)
// 00509472: MOV dword ptr [EBX],EAX
// 00509474: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x44] (READ)
// 0050947b: MOV dword ptr [EBX + 0x4],EAX
// 0050947e: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x40] (READ)
// 00509485: MOV dword ptr [EBX + 0x8],EAX
// 00509488: ADD ESI,0x38
//   Label: LAB_00509488
// 0050948b: CMP ESI,0x70
// 0050948e: JNZ 0x005093e7
//   XREF to: 005093e7 (CONDITIONAL_JUMP)
// 00509494: MOV EDX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x20] (READ)
// 0050949b: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x2c] (READ)
// 005094a2: ADD EDX,0xb8
// 005094a8: ADD EAX,0x64
// 005094ab: MOV dword ptr [ESP + 0xb8],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005094b2: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005094b9: CMP EDX,0x8a0
// 005094bf: JNZ 0x005093c0
//   XREF to: 005093c0 (CONDITIONAL_JUMP)
// 005094c5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005094c8: ADD EAX,0x450
// 005094cd: PUSH EAX
// 005094ce: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005094d3: LEA ESI,[EAX + 0x5678]
// 005094d9: ADD ESP,0x4
// 005094dc: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xcc] (DATA)
// 005094e0: MOV EDI,ESI
// 005094e2: CMP EAX,ESI
// 005094e4: JZ 0x005094fa
//   XREF to: 005094fa (CONDITIONAL_JUMP)
// 005094e6: MOV EAX,dword ptr [ESI]
// 005094e8: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 005094ec: MOV EAX,dword ptr [ESI + 0x4]
// 005094ef: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 005094f3: MOV EAX,dword ptr [ESI + 0x8]
// 005094f6: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 005094fa: LEA EAX,[ESP + 0x18]
//   Label: LAB_005094fa
//   XREF to: Stack[-0xc0] (DATA)
// 005094fe: LEA ESI,[EDI + 0xc]
// 00509501: CMP EAX,ESI
// 00509503: JNZ 0x00509627
//   XREF to: 00509627 (CONDITIONAL_JUMP)
// 00509509: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00509509
//   XREF to: Stack[0x4] (READ)
// 0050950c: ADD EAX,0x1340
// 00509511: MOV ESI,EAX
// 00509513: ADD EAX,0xc0
// 00509518: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0050951f: FLD float ptr [ESI + 0x18]
//   Label: LAB_0050951f
// 00509522: FLDZ
// 00509524: FCOMPP
// 00509526: FNSTSW AX
// 00509528: SAHF
// 00509529: JC 0x00509640
//   XREF to: 00509640 (CONDITIONAL_JUMP)
// 0050952f: MOV EDX,dword ptr [ESP + 0xb4]
//   Label: LAB_0050952f
//   XREF to: Stack[-0x24] (READ)
// 00509536: ADD ESI,0x60
// 00509539: CMP ESI,EDX
// 0050953b: JNZ 0x0050951f
//   XREF to: 0050951f (CONDITIONAL_JUMP)
// 0050953d: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x1c] (READ)
// 00509544: MOV ESP,EBP
// 00509546: POP EBP
// 00509547: POP EDI
// 00509548: POP ESI
// 00509549: POP EBX
// 0050954a: RET
// 0050954b: MOV ESI,dword ptr [EBP + 0x18]
//   Label: LAB_0050954b
//   XREF to: Stack[0x8] (READ)
// 0050954e: FLD float ptr [ESI]
// 00509550: FSUB float ptr [EAX + 0xc]
// 00509553: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0xb4] (WRITE)
// 00509557: FLD float ptr [ESI + 0x4]
// 0050955a: FSUB float ptr [EAX + 0x10]
// 0050955d: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xb0] (WRITE)
// 00509561: FLD float ptr [ESI + 0x8]
// 00509564: FSUB float ptr [EAX + 0x14]
// 00509567: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0xb4] (DATA)
// 0050956b: PUSH EAX
// 0050956c: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x6c] (DATA)
// 00509570: MOV ESI,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x2c] (READ)
// 00509577: PUSH EAX
// 00509578: ADD ESI,0x24
// 0050957b: PUSH ESI
// 0050957c: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0xac] (WRITE)
// 00509580: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 00509585: ADD ESP,0xc
// 00509588: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0050958b: PUSH EDI
// 0050958c: LEA EAX,[ESP + 0xa0]
//   XREF to: Stack[-0x3c] (DATA)
// 00509593: PUSH EAX
// 00509594: PUSH ESI
// 00509595: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0050959a: ADD ESP,0xc
// 0050959d: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0xa8] (DATA)
// 005095a1: PUSH EAX
// 005095a2: LEA EAX,[ESP + 0xa0]
//   XREF to: Stack[-0x3c] (DATA)
// 005095a9: PUSH EAX
// 005095aa: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x6c] (DATA)
// 005095ae: PUSH EAX
// 005095af: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0xcc] (DATA)
// 005095b3: PUSH EAX
// 005095b4: CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   XREF to: 00420940 (UNCONDITIONAL_CALL)
// 005095b9: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005095c0: FLD float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x18] (READ)
// 005095c7: ADD ESP,0x10
// 005095ca: FST float ptr [ESP]
//   XREF to: Stack[-0xd8] (DATA)
// 005095cd: FLDZ
// 005095cf: FCOMPP
// 005095d1: FNSTSW AX
// 005095d3: SAHF
// 005095d4: JA 0x005093d0
//   XREF to: 005093d0 (CONDITIONAL_JUMP)
// 005095da: FLD float ptr [ESP]
//   XREF to: Stack[-0xd8] (DATA)
// 005095dd: FCOMP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x1c] (READ)
// 005095e4: FNSTSW AX
// 005095e6: SAHF
// 005095e7: JNC 0x005093d0
//   XREF to: 005093d0 (CONDITIONAL_JUMP)
// 005095ed: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xd8] (DATA)
// 005095f0: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005095f7: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0xa8] (DATA)
// 005095fb: PUSH EAX
// 005095fc: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x90] (DATA)
// 00509600: PUSH EAX
// 00509601: PUSH ESI
// 00509602: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00509607: ADD ESP,0xc
// 0050960a: CMP EBX,EAX
// 0050960c: JZ 0x005093d0
//   XREF to: 005093d0 (CONDITIONAL_JUMP)
// 00509612: MOV EDX,dword ptr [EAX]
// 00509614: MOV dword ptr [EBX],EDX
// 00509616: MOV EDX,dword ptr [EAX + 0x4]
// 00509619: MOV dword ptr [EBX + 0x4],EDX
// 0050961c: MOV EDX,dword ptr [EAX + 0x8]
// 0050961f: MOV dword ptr [EBX + 0x8],EDX
// 00509622: JMP 0x005093d0
//   XREF to: 005093d0 (UNCONDITIONAL_JUMP)
// 00509627: MOV EAX,dword ptr [ESI]
//   Label: LAB_00509627
// 00509629: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 0050962d: MOV EAX,dword ptr [ESI + 0x4]
// 00509630: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 00509634: MOV EAX,dword ptr [ESI + 0x8]
// 00509637: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 0050963b: JMP 0x00509509
//   XREF to: 00509509 (UNCONDITIONAL_JUMP)
// 00509640: MOV EDI,dword ptr [EBP + 0x18]
//   Label: LAB_00509640
//   XREF to: Stack[0x8] (READ)
// 00509643: LEA EAX,[ESI + 0x1c]
// 00509646: FLD float ptr [EDI]
// 00509648: FSUB float ptr [EAX]
// 0050964a: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x9c] (WRITE)
// 0050964e: FLD float ptr [EDI + 0x4]
// 00509651: FSUB float ptr [EAX + 0x4]
// 00509654: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x98] (WRITE)
// 00509658: FLD float ptr [EDI + 0x8]
// 0050965b: FSUB float ptr [EAX + 0x8]
// 0050965e: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x9c] (DATA)
// 00509662: PUSH EAX
// 00509663: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[-0x60] (DATA)
// 00509667: PUSH EAX
// 00509668: LEA EDI,[ESI + 0x34]
// 0050966b: PUSH EDI
// 0050966c: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x94] (WRITE)
// 00509670: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 00509675: ADD ESP,0xc
// 00509678: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0050967b: PUSH EAX
// 0050967c: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x78] (DATA)
// 00509680: PUSH EAX
// 00509681: PUSH EDI
// 00509682: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 00509687: ADD ESP,0xc
// 0050968a: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x54] (DATA)
// 00509691: PUSH EAX
// 00509692: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x78] (DATA)
// 00509696: PUSH EAX
// 00509697: LEA EAX,[ESP + 0x80]
//   XREF to: Stack[-0x60] (DATA)
// 0050969e: PUSH EAX
// 0050969f: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0xcc] (DATA)
// 005096a3: PUSH EAX
// 005096a4: CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   XREF to: 00420940 (UNCONDITIONAL_CALL)
// 005096a9: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005096b0: FLD float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x18] (READ)
// 005096b7: ADD ESP,0x10
// 005096ba: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (WRITE)
// 005096be: FLDZ
// 005096c0: FCOMPP
// 005096c2: FNSTSW AX
// 005096c4: SAHF
// 005096c5: JA 0x0050952f
//   XREF to: 0050952f (CONDITIONAL_JUMP)
// 005096cb: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 005096cf: FCOMP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x1c] (READ)
// 005096d6: FNSTSW AX
// 005096d8: SAHF
// 005096d9: JNC 0x0050952f
//   XREF to: 0050952f (CONDITIONAL_JUMP)
// 005096df: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xd0] (READ)
// 005096e3: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005096ea: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x54] (DATA)
// 005096f1: PUSH EAX
// 005096f2: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x84] (DATA)
// 005096f6: PUSH EAX
// 005096f7: PUSH EDI
// 005096f8: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 005096fd: ADD ESP,0xc
// 00509700: CMP EBX,EAX
// 00509702: JZ 0x0050952f
//   XREF to: 0050952f (CONDITIONAL_JUMP)
// 00509708: MOV EDX,dword ptr [EAX]
// 0050970a: MOV dword ptr [EBX],EDX
// 0050970c: MOV EDX,dword ptr [EAX + 0x4]
// 0050970f: MOV dword ptr [EBX + 0x4],EDX
// 00509712: MOV EDX,dword ptr [EAX + 0x8]
// 00509715: MOV dword ptr [EBX + 0x8],EDX
// 00509718: JMP 0x0050952f
//   XREF to: 0050952f (UNCONDITIONAL_JUMP)

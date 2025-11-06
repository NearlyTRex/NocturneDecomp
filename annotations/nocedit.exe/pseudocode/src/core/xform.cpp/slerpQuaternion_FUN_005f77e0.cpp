// Name: core_xform.cpp_slerpQuaternion_FUN_005f77e0
// Address: 005f77e0
// Address Range: [[005f77e0, 005f79a2]]
// Convention: __cdecl
// Signature: CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * result_out, CQuaternion4f * quat1_ptr, CQuaternion4f * quat2_ptr, float t)
// Cross-references:
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c146 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0 (0042dcd0) at 0042dd79 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_FUN_004427a0 (004427a0) at 004428e5 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d54c1 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cab0 (0054cab0) at 0054cb94 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005584a0 (005584a0) at 00558677 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750 (0059f750) at 0059f802 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 (0059eb50) at 0059f085 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260 (0059f260) at 0059f5c5 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070 (0059a070) at 0059a0f5 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_blendBoneTransformData_FUN_005a1b70 (005a1b70) at 005a1c76 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005bfebc [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c02b0 (005c02b0) at 005c0680 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_process_FUN_005e2430 (005e2430) at 005e27fb [UNCONDITIONAL_CALL]
//   core_xform.cpp_lerpMatrix3x4_FUN_005f7140 (005f7140) at 005f71fc [UNCONDITIONAL_CALL]
// Globals:
//   double g_SlerpDotProductThreshold = 0.999990000000000
// Function calls:
//   crt_math.c_atan2_FUN_006013b1

#include "nocturne.h"

CQuaternion4f * __cdecl
core_xform_cpp_slerpQuaternion_FUN_005f77e0
          (CQuaternion4f *result_out,CQuaternion4f *quat1_ptr,CQuaternion4f *quat2_ptr,float t)

{
  double dVar1;
  double dVar2;
  float fVar3;
  CQuaternion4f *extraout_ECX;
  CQuaternion4f *extraout_EDX;
  BADSPACEBASE *in_ESP;
  CQuaternion4f *unaff_ESI;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 extraout_ST1;
  float afStack_1830 [1517];
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50 [3];
  CQuaternion4f aCStack_44 [2];
  double local_18;
  
  bVar7 = 0;
  dVar1 = (double)(float)quat2_ptr;
  if (dVar1 <= 0.0) {
    pfVar6 = local_50;
    quat1_ptr = result_out;
  }
  else if (1.0 <= dVar1) {
    pfVar6 = local_50;
  }
  else {
    local_5c = quat1_ptr->w;
    local_58 = quat1_ptr->x;
    local_60 = quat1_ptr->y;
    local_54 = quat1_ptr->z;
    dVar2 = (double)(result_out->w * quat1_ptr->w +
                    result_out->z * quat1_ptr->z +
                    result_out->y * quat1_ptr->y + result_out->x * quat1_ptr->x);
    afStack_1830[0x5ec] = SUB84(dVar2,0);
    uStack_7c = (uint)((ulonglong)dVar2 >> 0x20);
    if (dVar2 < 0.0) {
      local_5c = -local_5c;
      local_58 = -local_58;
      local_54 = -quat1_ptr->z;
      local_60 = -local_60;
      uStack_7c = uStack_7c ^ 0x80000000;
    }
    if ((double)CONCAT44(uStack_7c,afStack_1830[0x5ec]) <= g_SlerpDotProductThreshold) {
      fVar8 = (float10)(double)CONCAT44(uStack_7c,afStack_1830[0x5ec]);
      fVar8 = crt_math_c_atan2_FUN_006013b1(SQRT((float10)1 - fVar8 * fVar8),fVar8);
      fVar9 = (float10)fsin(((float10)1 - (float10)(float)quat2_ptr) * fVar8);
      fVar8 = (float10)fsin((float10)(float)quat2_ptr * fVar8);
      dVar2 = (double)(fVar9 * ((float10)1 / extraout_ST1));
      uStack_74 = SUB84(dVar2,0);
      local_70 = (undefined4)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)(fVar8 * ((float10)1 / extraout_ST1));
      uStack_7c = SUB84(dVar2,0);
      local_78 = (undefined4)((ulonglong)dVar2 >> 0x20);
      local_18 = (double)CONCAT44(uStack_74,local_78);
      unaff_ESI = extraout_ECX;
      result_out = extraout_EDX;
    }
    else {
      local_18 = (double)(float)quat2_ptr;
      local_70 = SUB84(1.0 - local_18,0);
    }
    uStack_74 = (undefined4)((ulonglong)local_18 >> 0x20);
    local_78 = SUB84(local_18,0);
    fVar3 = (float)(double)CONCAT44(local_70,uStack_74);
    fStack_64 = (float)((ulonglong)dVar1 >> 0x20);
    pfVar6 = &local_54;
    quat1_ptr = aCStack_44;
    aCStack_44[0].y =
         fStack_64 * (float)(double)CONCAT44(local_78,uStack_7c) + result_out->y * fVar3;
    aCStack_44[0].z = local_58 * (float)(double)CONCAT44(local_78,uStack_7c) + result_out->z * fVar3
    ;
    aCStack_44[0].w = local_60 * (float)(double)CONCAT44(local_78,uStack_7c) + result_out->w * fVar3
    ;
    aCStack_44[0].x = local_5c * (float)(double)CONCAT44(local_78,uStack_7c) + result_out->x * fVar3
    ;
  }
  pfVar5 = pfVar6 + (uint)bVar7 * -2 + 1;
  pfVar4 = (float *)((int)quat1_ptr + (uint)bVar7 * -8 + 4);
  *pfVar6 = quat1_ptr->w;
  pfVar6 = pfVar4 + (uint)bVar7 * -2 + 1;
  *pfVar5 = *pfVar4;
  pfVar5[(uint)bVar7 * -2 + 1] = *pfVar6;
  (pfVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] = pfVar6[(uint)bVar7 * -2 + 1];
  pfVar6 = (float *)((int)unaff_ESI + (uint)bVar7 * -8 + 4);
  unaff_ESI->w = local_54;
  pfVar4 = pfVar6 + (uint)bVar7 * -2 + 1;
  *pfVar6 = local_50[(uint)bVar7 * -2];
  *pfVar4 = local_50[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  pfVar4[(uint)bVar7 * -2 + 1] =
       (local_50 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  return unaff_ESI;
}


// Assembly code:
// 005f77e0: PUSH EBX
//   Label: core_xform.cpp_slerpQuaternion_FUN_005f77e0
// 005f77e1: PUSH EDI
// 005f77e2: PUSH EBP
// 005f77e3: MOV EBP,ESP
// 005f77e5: SUB ESP,0x70
// 005f77e8: AND ESP,0xfffffff8
// 005f77eb: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f77ee: MOV ECX,ESI
// 005f77f0: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005f77f3: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005f77f6: FLDZ
// 005f77f8: FXCH
// 005f77fa: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x68] (WRITE)
// 005f77fe: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x68] (READ)
// 005f7802: FNSTSW AX
// 005f7804: SAHF
// 005f7805: JNC 0x005f7912
//   XREF to: 005f7912 (CONDITIONAL_JUMP)
// 005f780b: FLD1
// 005f780d: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x68] (READ)
// 005f7811: FNSTSW AX
// 005f7813: SAHF
// 005f7814: JBE 0x005f791a
//   XREF to: 005f791a (CONDITIONAL_JUMP)
// 005f781a: FLD float ptr [EDX + 0x4]
// 005f781d: FMUL float ptr [ESI + 0x4]
// 005f7820: FLD float ptr [EDX + 0x8]
// 005f7823: FMUL float ptr [ESI + 0x8]
// 005f7826: FADDP
// 005f7828: MOV EAX,dword ptr [ESI]
// 005f782a: FLD float ptr [EDX + 0xc]
// 005f782d: FMUL float ptr [ESI + 0xc]
// 005f7830: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005f7834: FADDP
// 005f7836: MOV EAX,dword ptr [ESI + 0x4]
// 005f7839: FLD float ptr [EDX]
// 005f783b: FMUL float ptr [ESI]
// 005f783d: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005f7841: MOV EAX,dword ptr [ESI + 0x8]
// 005f7844: FLDZ
// 005f7846: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005f784a: MOV EAX,dword ptr [ESI + 0xc]
// 005f784d: FXCH
// 005f784f: FADDP ST2,ST0
// 005f7851: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005f7855: FXCH
// 005f7857: FSTP double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 005f785a: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 005f785d: FNSTSW AX
// 005f785f: SAHF
// 005f7860: JA 0x005f7920
//   XREF to: 005f7920 (CONDITIONAL_JUMP)
// 005f7866: FLD double ptr [ESP]
//   Label: LAB_005f7866
//   XREF to: Stack[-0x80] (DATA)
// 005f7869: FCOMP double ptr [0x006583fd]
//   XREF to: 006583fd (READ)
// 005f786f: FNSTSW AX
// 005f7871: SAHF
// 005f7872: JBE 0x005f795b
//   XREF to: 005f795b (CONDITIONAL_JUMP)
// 005f7878: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005f787b: FLD1
// 005f787d: FXCH
// 005f787f: FSTP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x18] (WRITE)
// 005f7883: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x18] (READ)
// 005f7887: FSUB double ptr [ESP + 0x68]
//   XREF to: Stack[-0x18] (READ)
// 005f788b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005f788f: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x14] (READ)
// 005f7893: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x70] (WRITE)
// 005f7897: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005f789b: FLD double ptr [ESP + 0x10]
//   Label: LAB_005f789b
//   XREF to: Stack[-0x70] (READ)
// 005f789f: FLD float ptr [EDX + 0x4]
// 005f78a2: FMUL ST1
// 005f78a4: FLD float ptr [EDX + 0x8]
// 005f78a7: FMUL ST2
// 005f78a9: FLD float ptr [EDX + 0xc]
// 005f78ac: FMUL ST3
// 005f78ae: FLD float ptr [EDX]
// 005f78b0: FMULP ST4
// 005f78b2: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x58] (READ)
// 005f78b6: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x78] (READ)
// 005f78ba: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x60] (READ)
// 005f78be: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x78] (READ)
// 005f78c2: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x54] (READ)
// 005f78c6: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x78] (READ)
// 005f78ca: FXCH ST2
// 005f78cc: FADDP ST5,ST0
// 005f78ce: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x5c] (READ)
// 005f78d2: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x78] (READ)
// 005f78d6: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x50] (DATA)
// 005f78da: LEA ESI,[ESP + 0x40]
//   XREF to: Stack[-0x40] (DATA)
// 005f78de: FXCH
// 005f78e0: FADDP ST4,ST0
// 005f78e2: FXCH
// 005f78e4: FADDP ST2,ST0
// 005f78e6: FADDP ST4,ST0
// 005f78e8: FXCH
// 005f78ea: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x38] (WRITE)
// 005f78ee: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x34] (WRITE)
// 005f78f2: FXCH
// 005f78f4: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x40] (WRITE)
// 005f78f8: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x3c] (WRITE)
// 005f78fc: MOVSD ES:EDI,ESI
//   Label: LAB_005f78fc
// 005f78fd: MOVSD ES:EDI,ESI
// 005f78fe: MOVSD ES:EDI,ESI
// 005f78ff: MOVSD ES:EDI,ESI
// 005f7900: LEA ESI,[ESP + 0x30]
//   XREF to: Stack[-0x50] (DATA)
// 005f7904: MOV EDI,ECX
// 005f7906: MOVSD ES:EDI,ESI
// 005f7907: MOVSD ES:EDI,ESI
// 005f7908: MOVSD ES:EDI,ESI
// 005f7909: MOVSD ES:EDI,ESI
// 005f790a: MOV EAX,ECX
// 005f790c: MOV ESP,EBP
// 005f790e: POP EBP
// 005f790f: POP EDI
// 005f7910: POP EBX
// 005f7911: RET
// 005f7912: LEA EDI,[ESP + 0x30]
//   Label: LAB_005f7912
//   XREF to: Stack[-0x50] (DATA)
// 005f7916: MOV ESI,EDX
// 005f7918: JMP 0x005f78fc
//   XREF to: 005f78fc (UNCONDITIONAL_JUMP)
// 005f791a: LEA EDI,[ESP + 0x30]
//   Label: LAB_005f791a
//   XREF to: Stack[-0x50] (DATA)
// 005f791e: JMP 0x005f78fc
//   XREF to: 005f78fc (UNCONDITIONAL_JUMP)
// 005f7920: MOV AH,byte ptr [ESP + 0x27]
//   Label: LAB_005f7920
//   XREF to: Stack[-0x59] (READ)
// 005f7924: MOV BL,byte ptr [ESP + 0x2b]
//   XREF to: Stack[-0x55] (READ)
// 005f7928: XOR AH,0x80
// 005f792b: XOR BL,0x80
// 005f792e: MOV byte ptr [ESP + 0x27],AH
//   XREF to: Stack[-0x59] (WRITE)
// 005f7932: MOV AL,byte ptr [ESP + 0x2f]
//   XREF to: Stack[-0x51] (READ)
// 005f7936: MOV byte ptr [ESP + 0x2b],BL
//   XREF to: Stack[-0x55] (WRITE)
// 005f793a: XOR AL,0x80
// 005f793c: MOV BH,byte ptr [ESP + 0x23]
//   XREF to: Stack[-0x5d] (READ)
// 005f7940: MOV byte ptr [ESP + 0x2f],AL
//   XREF to: Stack[-0x51] (WRITE)
// 005f7944: MOV AH,byte ptr [ESP + 0x7]
//   XREF to: Stack[-0x79] (READ)
// 005f7948: XOR BH,0x80
// 005f794b: XOR AH,0x80
// 005f794e: MOV byte ptr [ESP + 0x23],BH
//   XREF to: Stack[-0x5d] (WRITE)
// 005f7952: MOV byte ptr [ESP + 0x7],AH
//   XREF to: Stack[-0x79] (WRITE)
// 005f7956: JMP 0x005f7866
//   XREF to: 005f7866 (UNCONDITIONAL_JUMP)
// 005f795b: FLD double ptr [ESP]
//   Label: LAB_005f795b
//   XREF to: Stack[-0x80] (DATA)
// 005f795e: FLD ST0
// 005f7960: FMUL ST1
// 005f7962: FLD1
// 005f7964: FSUBRP
// 005f7966: FSQRT
// 005f7968: FLD ST0
// 005f796a: FLD ST2
// 005f796c: FXCH
// 005f796e: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 005f7973: FSTP ST2
// 005f7975: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005f7978: FLD1
// 005f797a: FSUB ST0,ST1
// 005f797c: FMUL ST3
// 005f797e: FSIN
// 005f7980: FXCH
// 005f7982: FMULP ST3
// 005f7984: FXCH ST2
// 005f7986: FSIN
// 005f7988: FLD1
// 005f798a: FDIVRP ST2,ST0
// 005f798c: FXCH ST2
// 005f798e: FMUL ST1
// 005f7990: FXCH ST2
// 005f7992: FMULP
// 005f7994: FXCH
// 005f7996: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x70] (WRITE)
// 005f799a: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x78] (WRITE)
// 005f799e: JMP 0x005f789b
//   XREF to: 005f789b (UNCONDITIONAL_JUMP)

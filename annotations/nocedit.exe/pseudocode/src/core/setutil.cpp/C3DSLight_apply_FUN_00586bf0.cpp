// Name: core_setutil.cpp_C3DSLight_apply_FUN_00586bf0
// Address: 00586bf0
// Address Range: [[00586bf0, 00586c9f] [00586ca1, 00586cae]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_apply_FUN_00586bf0(C3DSLight * this_ptr, CDemonLight * light)
// Cross-references:
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056ac59 [UNCONDITIONAL_CALL]
// Globals:
//   double g_AspectScaleConstant = 65536
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dlight.cpp_CDemonLight_allocateFilter_FUN_00474720
//   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_apply_FUN_00586bf0(C3DSLight *this_ptr,CDemonLight *light)

{
  CVector3i *pCVar1;
  char cVar2;
  float fVar3;
  undefined4 extraout_EDX;
  char *pcVar4;
  char *pcVar5;
  float10 fVar6;
  
  pCVar1 = &(light->base).base.position;
  if ((CVector3f *)pCVar1 != &this_ptr->pos) {
    pCVar1->x = (int)(this_ptr->pos).x;
    (light->base).base.position.y = (int)(this_ptr->pos).y;
    (light->base).base.position.z = (int)(this_ptr->pos).z;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&(light->base).base.rotation_matrix,&this_ptr->orient);
  fVar3 = this_ptr->fov;
  (light->base).base.projection_scale = fVar3;
  fVar6 = (float10)this_ptr->aspect * (float10)g_AspectScaleConstant;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,fVar3));
  light->transform_scale_factor = (int)ROUND(fVar6);
  pcVar4 = this_ptr->name;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(light,this_ptr->intensity);
  this_ptr->cycle_elapsed = 0.0;
  pcVar5 = (light->base).camera_name;
  this_ptr->filter_frame_elapsed = 0.0;
  do {
    cVar2 = *pcVar4;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  if (this_ptr->move_filter == 0) {
    return;
  }
  core_dlight_cpp_CDemonLight_allocateFilter_FUN_00474720(light);
  return;
}


// Assembly code:
// 00586bf0: PUSH EBX
//   Label: core_setutil.cpp_C3DSLight_apply_FUN_00586bf0
// 00586bf1: PUSH ESI
// 00586bf2: PUSH EDI
// 00586bf3: PUSH EBP
// 00586bf4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00586bf8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00586bfc: LEA EAX,[EBP + 0x4]
// 00586bff: LEA EDX,[EBX + 0x104]
// 00586c05: CMP EAX,EDX
// 00586c07: JZ 0x00586c19
//   XREF to: 00586c19 (CONDITIONAL_JUMP)
// 00586c09: MOV ECX,dword ptr [EDX]
// 00586c0b: MOV dword ptr [EAX],ECX
// 00586c0d: MOV ECX,dword ptr [EDX + 0x4]
// 00586c10: MOV dword ptr [EAX + 0x4],ECX
// 00586c13: MOV ECX,dword ptr [EDX + 0x8]
// 00586c16: MOV dword ptr [EAX + 0x8],ECX
// 00586c19: LEA EAX,[EBX + 0x110]
//   Label: LAB_00586c19
// 00586c1f: PUSH EAX
// 00586c20: LEA EAX,[EBP + 0x10]
// 00586c23: PUSH EAX
// 00586c24: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00586c29: MOV EAX,dword ptr [EBX + 0x11c]
// 00586c2f: MOV dword ptr [EBP + 0x38],EAX
// 00586c32: FLD float ptr [EBX + 0x120]
// 00586c38: FMUL double ptr [0x0064966b]
//   XREF to: 0064966b (READ)
// 00586c3e: ADD ESP,0x8
// 00586c41: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00586c46: FISTP dword ptr [EBP + 0x2fa4]
// 00586c4c: PUSH dword ptr [EBX + 0x124]
// 00586c52: PUSH EBP
// 00586c53: LEA ESI,[EBX + 0x4]
// 00586c56: CALL core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
//   XREF to: 004765e0 (UNCONDITIONAL_CALL)
// 00586c5b: ADD ESP,0x8
// 00586c5e: MOV dword ptr [EBX + 0x11e8],0x0
// 00586c68: LEA EDI,[EBP + 0x40]
// 00586c6b: MOV dword ptr [EBX + 0x1894],0x0
// 00586c75: PUSH EDI
// 00586c76: MOV AL,byte ptr [ESI]
//   Label: LAB_00586c76
// 00586c78: MOV byte ptr [EDI],AL
// 00586c7a: CMP AL,0x0
// 00586c7c: JZ 0x00586c8e
//   XREF to: 00586c8e (CONDITIONAL_JUMP)
// 00586c7e: MOV AL,byte ptr [ESI + 0x1]
// 00586c81: ADD ESI,0x2
// 00586c84: MOV byte ptr [EDI + 0x1],AL
// 00586c87: ADD EDI,0x2
// 00586c8a: CMP AL,0x0
// 00586c8c: JNZ 0x00586c76
//   XREF to: 00586c76 (CONDITIONAL_JUMP)
// 00586c8e: POP EDI
//   Label: LAB_00586c8e
// 00586c8f: CMP dword ptr [EBX + 0x17f4],0x0
// 00586c96: JNZ 0x00586ca1
//   XREF to: 00586ca1 (CONDITIONAL_JUMP)
// 00586c98: POP EBP
// 00586c99: POP EDI
// 00586c9a: POP ESI
// 00586c9b: POP EBX
// 00586c9c: LEA EAX,[EAX]
// 00586ca1: PUSH EBP
//   Label: LAB_00586ca1
// 00586ca2: CALL core_dlight.cpp_CDemonLight_allocateFilter_FUN_00474720
//   XREF to: 00474720 (UNCONDITIONAL_CALL)
// 00586ca7: ADD ESP,0x4
// 00586caa: POP EBP
// 00586cab: POP EDI
// 00586cac: POP ESI
// 00586cad: POP EBX
// 00586cae: RET

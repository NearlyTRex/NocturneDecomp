// Name: core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
// Address: 00454060
// Address Range: [[00454060, 00454441]]
// Convention: __cdecl
// Signature: CVector3f * core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060(CDemonCamera * this_ptr, CVector3f * output_vectors, CBoundingBox3D * bounding_box)
// Cross-references:
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a7c6 [UNCONDITIONAL_CALL]
// Globals:
//   float g_WorldToFloat = 0.00390625
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z
// Function calls:
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CVector3f * __cdecl
core_dcamera_cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
          (CDemonCamera *this_ptr,CVector3f *output_vectors,CBoundingBox3D *bounding_box)

{
  CVector3f *pCVar1;
  int unaff_EBX;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float *unaff_ESI;
  int unaff_EDI;
  byte bVar3;
  CBoundingBox3D *in_stack_00000024;
  float afStackY_10c8 [1012];
  CDemonCamera *in_stack_ffffff14;
  CDemonCamera *in_stack_ffffff18;
  CDemonCamera *in_stack_ffffff1c;
  CDemonCamera *in_stack_ffffff20;
  int in_stack_ffffff24;
  CBoundingBox3D *in_stack_ffffff28;
  int iStack_d0;
  float afStack_cc [5];
  int iStack_b8;
  undefined4 uStack_b4;
  CDemonCamera *local_a8;
  float local_a4 [2];
  int local_9c;
  float local_90;
  float local_8c;
  float afStack_88 [2];
  int local_80;
  float afStack_7c [2];
  int local_74;
  CVector3i local_6c;
  float local_60 [2];
  int local_58;
  undefined4 local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  CVector3f local_44;
  undefined1 local_38 [8];
  float local_30;
  CDemonCamera *local_2c;
  float local_28;
  CDemonCamera *local_24;
  CVector3i *local_20;
  CDemonCamera *local_1c;
  CVector3i *local_18;
  CDemonCamera *local_14;
  
  bVar3 = 0;
  pCVar1 = output_vectors + 1;
  if (pCVar1 != &g_ZeroVector) {
    pCVar1->x = g_ZeroVector.x;
    output_vectors[1].y = g_ZeroVector.y;
    output_vectors[1].z = g_ZeroVector.z;
  }
  if (pCVar1 != output_vectors) {
    output_vectors->x = pCVar1->x;
    output_vectors->y = output_vectors[1].y;
    output_vectors->z = output_vectors[1].z;
  }
  local_20 = &(this_ptr->base).position;
  local_38._0_4_ = 0.0;
  local_38._4_4_ = &(this_ptr->base).rotation_matrix;
  local_18 = (CVector3i *)&DAT_00000001;
  do {
    if (this_ptr->framebuffer_height + -1 <= (int)local_18) {
      return output_vectors;
    }
    local_2c = (CDemonCamera *)((int)&local_18->x + 1);
    local_28 = (float)local_38._0_4_;
    local_30 = (float)local_38._0_4_;
    local_1c = (CDemonCamera *)0x0;
    local_24 = local_2c;
    for (local_14 = (CDemonCamera *)&DAT_00000001; (int)local_14 < this_ptr->framebuffer_width + -1;
        local_14 = (CDemonCamera *)((int)&(local_14->base).field0_0x0 + 1)) {
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                (this_ptr,(CVector3i *)local_14,(int)local_18,(int)in_stack_ffffff14);
      local_80 = iStack_d0;
      afStack_7c[(uint)bVar3 * -2] = afStack_cc[(uint)bVar3 * -2];
      afStack_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      if (local_74 < 0x1f401) {
LAB_00454218:
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                  (this_ptr,&local_6c,(CVector3i *)in_stack_ffffff28);
        local_54 = afStack_cc[1];
        local_60[(uint)bVar3 * -2 + 4] = local_a4[(uint)bVar3 * -2 + -8];
        local_60[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 5] =
             afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 3];
        local_90 = (float)local_50 * g_WorldToFloat;
        local_8c = (float)iStack_4c * g_WorldToFloat;
        afStack_88[0] = (float)iStack_48 * g_WorldToFloat;
        local_44.x = local_8c - *unaff_ESI;
        local_44.y = afStack_88[0] - unaff_ESI[1];
        local_44.z = afStack_88[1] - unaff_ESI[2];
        in_stack_ffffff1c = (CDemonCamera *)0x4542b6;
        in_stack_ffffff20 = local_1c;
        core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                  ((CMatrix3x3f *)local_1c,(CVector3f *)local_38,&local_44);
        in_stack_ffffff24 = 0x4542ce;
        in_stack_ffffff28 = in_stack_00000024;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                  (in_stack_00000024,(CVector3f *)(local_38 + 4));
      }
      else {
        uVar2 = 0;
        if ((unaff_EBP < 2) || ((int)local_14 < 2)) {
LAB_004541c5:
          uVar2 = 1;
        }
        else {
          in_stack_ffffff14 = local_2c;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,local_18,(int)local_2c,(int)in_stack_ffffff18);
          afStack_cc[2] = (float)uStack_b4;
          afStack_cc[(uint)bVar3 * -2 + 3] = afStack_cc[(uint)bVar3 * -2 + 7];
          afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
               afStack_cc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 8];
          if (0x1f400 < iStack_b8) goto LAB_004541c5;
        }
        if ((unaff_EDI < 2) || (this_ptr->framebuffer_height + -2 <= unaff_EBP)) {
LAB_004541d4:
          uVar2 = uVar2 + 1;
        }
        else {
          in_stack_ffffff14 = local_14;
          in_stack_ffffff18 = local_24;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,(CVector3i *)local_14,(int)local_24,(int)in_stack_ffffff1c);
          local_a8 = in_stack_ffffff20;
          local_a4[(uint)bVar3 * -2] = *(float *)(&stack0xffffff24 + (uint)bVar3 * -8);
          local_a4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               *(float *)(&stack0xffffff28 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if (0x1f400 < local_9c) goto LAB_004541d4;
        }
        if (((int)unaff_ESI < this_ptr->framebuffer_width + -2) && (1 < unaff_EDI)) {
          in_stack_ffffff18 = (CDemonCamera *)((int)unaff_ESI + 1);
          in_stack_ffffff14 = this_ptr;
          in_stack_ffffff1c = local_1c;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,(CVector3i *)in_stack_ffffff18,(int)local_1c,(int)in_stack_ffffff20);
          local_8c = afStack_7c[0];
          afStack_88[(uint)bVar3 * -2] = afStack_7c[(uint)bVar3 * -2 + 1];
          afStack_88[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               afStack_7c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 2];
          if (0x1f400 < local_80) goto LAB_004541ed;
        }
        else {
LAB_004541ed:
          uVar2 = uVar2 + 1;
        }
        if ((unaff_EBX < this_ptr->framebuffer_width + -2) &&
           ((int)unaff_ESI < this_ptr->framebuffer_height + -2)) {
          in_stack_ffffff1c = (CDemonCamera *)(unaff_EBX + 1);
          in_stack_ffffff14 = (CDemonCamera *)0x45440d;
          in_stack_ffffff18 = this_ptr;
          in_stack_ffffff20 = local_14;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
                    (this_ptr,(CVector3i *)in_stack_ffffff1c,(int)local_14,in_stack_ffffff24);
          local_6c.z = (int)local_30;
          local_60[(uint)bVar3 * -2] = (float)(&local_2c)[(uint)bVar3 * -2];
          local_60[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               (&local_28)[(uint)bVar3 * -2 + (uint)bVar3 * -2];
          if (0x1f400 < local_58) goto LAB_00454206;
        }
        else {
LAB_00454206:
          uVar2 = uVar2 + 1;
        }
        if (3 < uVar2) {
          local_6c.z = 0x1f400;
          goto LAB_00454218;
        }
      }
      local_1c = (CDemonCamera *)((int)&(local_1c->base).field0_0x0 + 1);
    }
    local_18 = (CVector3i *)((int)&local_18->x + 1);
    local_38._0_4_ = local_38._0_4_ + 1;
  } while( true );
}


// Assembly code:
// 00454060: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
// 00454061: PUSH ESI
// 00454062: PUSH EDI
// 00454063: PUSH EBP
// 00454064: SUB ESP,0xdc
// 0045406a: MOV EBP,dword ptr [ESP + 0xf0]
//   XREF to: Stack[0x4] (READ)
// 00454071: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[0x8] (READ)
// 00454078: ADD EAX,0xc
// 0045407b: MOV EBX,EAX
// 0045407d: CMP EAX,0x3f87558
//   XREF to: 03f87558 (DATA)
// 00454082: JNZ 0x00454154
//   XREF to: 00454154 (CONDITIONAL_JUMP)
// 00454088: MOV EDX,dword ptr [ESP + 0xf4]
//   Label: LAB_00454088
//   XREF to: Stack[0x8] (READ)
// 0045408f: CMP EBX,EDX
// 00454091: JNZ 0x00454173
//   XREF to: 00454173 (CONDITIONAL_JUMP)
// 00454097: MOV ECX,0x1
//   Label: LAB_00454097
// 0045409c: LEA EAX,[EBP + 0x4]
// 0045409f: XOR EBX,EBX
// 004540a1: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004540a8: MOV dword ptr [ESP + 0xb4],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 004540af: LEA EAX,[EBP + 0x10]
// 004540b2: MOV dword ptr [ESP + 0xd4],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004540b9: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004540c0: MOV EAX,dword ptr [EBP + 0x148]
//   Label: LAB_004540c0
// 004540c6: MOV ESI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x18] (READ)
// 004540cd: DEC EAX
// 004540ce: CMP EAX,ESI
// 004540d0: JLE 0x00454430
//   XREF to: 00454430 (CONDITIONAL_JUMP)
// 004540d6: MOV EDI,0x1
// 004540db: LEA EAX,[ESI + EDI*0x1]
// 004540de: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004540e5: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x38] (READ)
// 004540ec: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004540f3: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x24] (READ)
// 004540fa: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00454101: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x38] (READ)
// 00454108: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0045410f: XOR EAX,EAX
// 00454111: MOV dword ptr [ESP + 0xd8],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00454118: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0045411f: MOV EAX,dword ptr [EBP + 0x144]
//   Label: LAB_0045411f
// 00454125: MOV EDX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x14] (READ)
// 0045412c: DEC EAX
// 0045412d: CMP EAX,EDX
// 0045412f: JG 0x00454188
//   XREF to: 00454188 (CONDITIONAL_JUMP)
// 00454131: MOV EBX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x18] (READ)
// 00454138: MOV ECX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x38] (READ)
// 0045413f: INC EBX
// 00454140: INC ECX
// 00454141: MOV dword ptr [ESP + 0xd4],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00454148: MOV dword ptr [ESP + 0xb4],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 0045414f: JMP 0x004540c0
//   XREF to: 004540c0 (UNCONDITIONAL_JUMP)
// 00454154: MOV EDX,dword ptr [0x03f87558]
//   Label: LAB_00454154
//   XREF to: 03f87558 (READ)
// 0045415a: MOV dword ptr [EAX],EDX
// 0045415c: MOV EDX,dword ptr [0x03f8755c]
//   XREF to: 03f8755c (READ)
// 00454162: MOV dword ptr [EAX + 0x4],EDX
// 00454165: MOV EDX,dword ptr [0x03f87560]
//   XREF to: 03f87560 (READ)
// 0045416b: MOV dword ptr [EAX + 0x8],EDX
// 0045416e: JMP 0x00454088
//   XREF to: 00454088 (UNCONDITIONAL_JUMP)
// 00454173: MOV EAX,dword ptr [EBX]
//   Label: LAB_00454173
// 00454175: MOV dword ptr [EDX],EAX
// 00454177: MOV EAX,dword ptr [EBX + 0x4]
// 0045417a: MOV dword ptr [EDX + 0x4],EAX
// 0045417d: MOV EAX,dword ptr [EBX + 0x8]
// 00454180: MOV dword ptr [EDX + 0x8],EAX
// 00454183: JMP 0x00454097
//   XREF to: 00454097 (UNCONDITIONAL_JUMP)
// 00454188: MOV ESI,dword ptr [ESP + 0xd4]
//   Label: LAB_00454188
//   XREF to: Stack[-0x18] (READ)
// 0045418f: PUSH ESI
// 00454190: PUSH EDX
// 00454191: PUSH EBP
// 00454192: LEA ESI,[ESP + 0x24]
//   XREF to: Stack[-0xd4] (DATA)
// 00454196: LEA EDI,[ESP + 0x78]
//   XREF to: Stack[-0x80] (DATA)
// 0045419a: CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
// 0045419f: LEA ESI,[ESP + 0x24]
//   XREF to: Stack[-0xd4] (DATA)
// 004541a3: ADD ESP,0xc
// 004541a6: MOVSD ES:EDI,ESI
// 004541a7: MOVSD ES:EDI,ESI
// 004541a8: MOVSD ES:EDI,ESI
// 004541a9: CMP dword ptr [ESP + 0x74],0x1f400
//   XREF to: Stack[-0x78] (READ)
// 004541b1: JLE 0x00454218
//   XREF to: 00454218 (CONDITIONAL_JUMP)
// 004541b3: MOV EDX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x14] (READ)
// 004541ba: XOR EBX,EBX
// 004541bc: CMP EDX,0x1
// 004541bf: JG 0x004542f4
//   XREF to: 004542f4 (CONDITIONAL_JUMP)
// 004541c5: INC EBX
//   Label: LAB_004541c5
// 004541c6: CMP dword ptr [ESP + 0xd8],0x1
//   Label: LAB_004541c6
//   XREF to: Stack[-0x14] (READ)
// 004541ce: JG 0x0045433d
//   XREF to: 0045433d (CONDITIONAL_JUMP)
// 004541d4: INC EBX
//   Label: LAB_004541d4
// 004541d5: MOV EAX,dword ptr [EBP + 0x144]
//   Label: LAB_004541d5
// 004541db: MOV EDX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x14] (READ)
// 004541e2: SUB EAX,0x2
// 004541e5: CMP EAX,EDX
// 004541e7: JG 0x00454390
//   XREF to: 00454390 (CONDITIONAL_JUMP)
// 004541ed: INC EBX
//   Label: LAB_004541ed
// 004541ee: MOV EAX,dword ptr [EBP + 0x144]
//   Label: LAB_004541ee
// 004541f4: MOV EDX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x14] (READ)
// 004541fb: SUB EAX,0x2
// 004541fe: CMP EAX,EDX
// 00454200: JG 0x004543d5
//   XREF to: 004543d5 (CONDITIONAL_JUMP)
// 00454206: INC EBX
//   Label: LAB_00454206
// 00454207: CMP EBX,0x4
//   Label: LAB_00454207
// 0045420a: JL 0x004542d1
//   XREF to: 004542d1 (CONDITIONAL_JUMP)
// 00454210: MOV dword ptr [ESP + 0x74],0x1f400
//   XREF to: Stack[-0x78] (WRITE)
// 00454218: LEA EAX,[ESP + 0x6c]
//   Label: LAB_00454218
//   XREF to: Stack[-0x80] (DATA)
// 0045421c: PUSH EAX
// 0045421d: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0xe0] (DATA)
// 00454221: PUSH EBP
// 00454222: LEA EDI,[ESP + 0x8c]
//   XREF to: Stack[-0x68] (DATA)
// 00454229: LEA EBX,[ESP + 0x50]
//   XREF to: Stack[-0xa4] (DATA)
// 0045422d: CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   XREF to: 0044d370 (UNCONDITIONAL_CALL)
// 00454232: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0xe0] (DATA)
// 00454236: ADD ESP,0x8
// 00454239: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x68] (DATA)
// 00454240: MOVSD ES:EDI,ESI
// 00454241: MOVSD ES:EDI,ESI
// 00454242: MOVSD ES:EDI,ESI
// 00454243: FILD dword ptr [EAX]
//   XREF to: Stack[-0x68] (DATA)
// 00454245: FMUL float ptr [0x0065c644]
//   XREF to: 0065c644 (READ)
// 0045424b: FSTP float ptr [EBX]
//   XREF to: Stack[-0xa4] (DATA)
// 0045424d: FILD dword ptr [EAX + 0x4]
//   XREF to: Stack[-0x64] (READ)
// 00454250: FMUL float ptr [0x0065c644]
//   XREF to: 0065c644 (READ)
// 00454256: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0xa0] (WRITE)
// 00454259: FILD dword ptr [EAX + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 0045425c: FMUL float ptr [0x0065c644]
//   XREF to: 0065c644 (READ)
// 00454262: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x9c] (WRITE)
// 00454265: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x20] (READ)
// 0045426c: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0xa4] (READ)
// 00454270: FSUB float ptr [EAX]
// 00454272: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xa0] (READ)
// 00454276: FXCH
// 00454278: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x5c] (WRITE)
// 0045427f: FSUB float ptr [EAX + 0x4]
// 00454282: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x9c] (READ)
// 00454286: FXCH
// 00454288: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x58] (WRITE)
// 0045428f: FSUB float ptr [EAX + 0x8]
// 00454292: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x5c] (DATA)
// 00454299: PUSH EAX
// 0045429a: LEA EAX,[ESP + 0xa0]
//   XREF to: Stack[-0x50] (DATA)
// 004542a1: PUSH EAX
// 004542a2: MOV EDX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x34] (READ)
// 004542a9: PUSH EDX
// 004542aa: FSTP float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x54] (WRITE)
// 004542b1: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 004542b6: ADD ESP,0xc
// 004542b9: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x50] (DATA)
// 004542c0: PUSH EAX
// 004542c1: MOV ECX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[0x8] (READ)
// 004542c8: PUSH ECX
// 004542c9: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 004542ce: ADD ESP,0x8
// 004542d1: MOV ESI,dword ptr [ESP + 0xd8]
//   Label: LAB_004542d1
//   XREF to: Stack[-0x14] (READ)
// 004542d8: MOV EBX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x1c] (READ)
// 004542df: INC ESI
// 004542e0: INC EBX
// 004542e1: MOV dword ptr [ESP + 0xd8],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004542e8: MOV dword ptr [ESP + 0xd0],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004542ef: JMP 0x0045411f
//   XREF to: 0045411f (UNCONDITIONAL_JUMP)
// 004542f4: CMP dword ptr [ESP + 0xd4],0x1
//   Label: LAB_004542f4
//   XREF to: Stack[-0x18] (READ)
// 004542fc: JLE 0x004541c5
//   XREF to: 004541c5 (CONDITIONAL_JUMP)
// 00454302: MOV ESI,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x30] (READ)
// 00454309: PUSH ESI
// 0045430a: MOV EDI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 00454311: PUSH EDI
// 00454312: PUSH EBP
// 00454313: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0xbc] (DATA)
// 00454317: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0xc8] (DATA)
// 0045431b: CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
// 00454320: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0xbc] (DATA)
// 00454324: ADD ESP,0xc
// 00454327: MOVSD ES:EDI,ESI
// 00454328: MOVSD ES:EDI,ESI
// 00454329: MOVSD ES:EDI,ESI
// 0045432a: CMP dword ptr [ESP + 0x2c],0x1f400
//   XREF to: Stack[-0xc0] (READ)
// 00454332: JG 0x004541c5
//   XREF to: 004541c5 (CONDITIONAL_JUMP)
// 00454338: JMP 0x004541c6
//   XREF to: 004541c6 (UNCONDITIONAL_JUMP)
// 0045433d: MOV EAX,dword ptr [EBP + 0x148]
//   Label: LAB_0045433d
// 00454343: MOV ECX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x18] (READ)
// 0045434a: SUB EAX,0x2
// 0045434d: CMP EAX,ECX
// 0045434f: JLE 0x004541d4
//   XREF to: 004541d4 (CONDITIONAL_JUMP)
// 00454355: MOV ESI,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x2c] (READ)
// 0045435c: PUSH ESI
// 0045435d: MOV EDI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 00454364: PUSH EDI
// 00454365: PUSH EBP
// 00454366: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0xec] (DATA)
// 0045436a: LEA EDI,[ESP + 0x48]
//   XREF to: Stack[-0xb0] (DATA)
// 0045436e: CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
// 00454373: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0xec] (DATA)
// 00454377: ADD ESP,0xc
// 0045437a: MOVSD ES:EDI,ESI
// 0045437b: MOVSD ES:EDI,ESI
// 0045437c: MOVSD ES:EDI,ESI
// 0045437d: CMP dword ptr [ESP + 0x44],0x1f400
//   XREF to: Stack[-0xa8] (READ)
// 00454385: JG 0x004541d4
//   XREF to: 004541d4 (CONDITIONAL_JUMP)
// 0045438b: JMP 0x004541d5
//   XREF to: 004541d5 (UNCONDITIONAL_JUMP)
// 00454390: CMP dword ptr [ESP + 0xd4],0x1
//   Label: LAB_00454390
//   XREF to: Stack[-0x18] (READ)
// 00454398: JLE 0x004541ed
//   XREF to: 004541ed (CONDITIONAL_JUMP)
// 0045439e: MOV ESI,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x28] (READ)
// 004543a5: PUSH ESI
// 004543a6: LEA EAX,[EDX + 0x1]
// 004543a9: PUSH EAX
// 004543aa: PUSH EBP
// 004543ab: LEA ESI,[ESP + 0x6c]
//   XREF to: Stack[-0x8c] (DATA)
// 004543af: LEA EDI,[ESP + 0x60]
//   XREF to: Stack[-0x98] (DATA)
// 004543b3: CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
// 004543b8: LEA ESI,[ESP + 0x6c]
//   XREF to: Stack[-0x8c] (DATA)
// 004543bc: ADD ESP,0xc
// 004543bf: MOVSD ES:EDI,ESI
// 004543c0: MOVSD ES:EDI,ESI
// 004543c1: MOVSD ES:EDI,ESI
// 004543c2: CMP dword ptr [ESP + 0x5c],0x1f400
//   XREF to: Stack[-0x90] (READ)
// 004543ca: JG 0x004541ed
//   XREF to: 004541ed (CONDITIONAL_JUMP)
// 004543d0: JMP 0x004541ee
//   XREF to: 004541ee (UNCONDITIONAL_JUMP)
// 004543d5: MOV EAX,dword ptr [EBP + 0x148]
//   Label: LAB_004543d5
// 004543db: MOV ECX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x18] (READ)
// 004543e2: SUB EAX,0x2
// 004543e5: CMP EAX,ECX
// 004543e7: JLE 0x00454206
//   XREF to: 00454206 (CONDITIONAL_JUMP)
// 004543ed: MOV ESI,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x24] (READ)
// 004543f4: PUSH ESI
// 004543f5: LEA EAX,[EDX + 0x1]
// 004543f8: PUSH EAX
// 004543f9: PUSH EBP
// 004543fa: LEA ESI,[ESP + 0xb4]
//   XREF to: Stack[-0x44] (DATA)
// 00454401: LEA EDI,[ESP + 0x84]
//   XREF to: Stack[-0x74] (DATA)
// 00454408: CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
// 0045440d: LEA ESI,[ESP + 0xb4]
//   XREF to: Stack[-0x44] (DATA)
// 00454414: ADD ESP,0xc
// 00454417: MOVSD ES:EDI,ESI
// 00454418: MOVSD ES:EDI,ESI
// 00454419: MOVSD ES:EDI,ESI
// 0045441a: CMP dword ptr [ESP + 0x80],0x1f400
//   XREF to: Stack[-0x6c] (READ)
// 00454425: JG 0x00454206
//   XREF to: 00454206 (CONDITIONAL_JUMP)
// 0045442b: JMP 0x00454207
//   XREF to: 00454207 (UNCONDITIONAL_JUMP)
// 00454430: MOV EAX,dword ptr [ESP + 0xf4]
//   Label: LAB_00454430
//   XREF to: Stack[0x8] (READ)
// 00454437: ADD ESP,0xdc
// 0045443d: POP EBP
// 0045443e: POP EDI
// 0045443f: POP ESI
// 00454440: POP EBX
// 00454441: RET

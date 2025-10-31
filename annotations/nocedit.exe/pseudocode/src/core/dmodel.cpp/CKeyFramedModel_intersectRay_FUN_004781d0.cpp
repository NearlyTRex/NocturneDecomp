// Name: core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0
// Address: 004781d0
// Address Range: [[004781d0, 0047864a]]
// Convention: __cdecl
// Signature: float core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0(CKeyFramedModel * this_ptr, int frame_index, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * output_normal)
// Cross-references:
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 (00409470) at 00409733 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054df80 (0054df80) at 0054e139 [UNCONDITIONAL_CALL]
// Globals:
//   float g_Fixed16ToFloat = 0.00390625
// Function calls:
//   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
//   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   core_dtri.cpp_rayTriangleIntersection_FUN_0049a800

#include "nocturne.h"

float __cdecl
core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_004781d0
          (CKeyFramedModel *this_ptr,int frame_index,CVector3f *ray_origin,CVector3f *ray_direction,
          CVector3f *output_normal)

{
  CVector3i *pCVar1;
  int iVar2;
  float fVar3;
  CVector3f *pCVar4;
  CMatrix3x3f *matrix;
  CDemonTriangle *triangle;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  int iVar5;
  undefined1 auStack_c4 [36];
  float fStack_a0;
  float fStack_9c;
  float local_98;
  CVector3f local_8c;
  undefined1 auStack_7c [24];
  undefined1 local_64 [12];
  float local_58;
  float local_54;
  undefined1 local_50 [8];
  undefined1 auStack_48 [16];
  CVector3f local_38;
  CVector3i *local_2c;
  float local_28;
  CMatrix3x3f *local_24;
  CMatrix3x3f *local_20;
  int local_1c;
  int local_18;
  float fStack_14;
  
  if (this_ptr->frame_count <= frame_index) {
    frame_index = this_ptr->frame_count + -1;
  }
  if (frame_index < 0) {
    frame_index = 0;
  }
  fStack_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                        ((CBoundingBox3D *)(this_ptr->frame_bounds + frame_index * 2),ray_origin,
                         ray_direction,(CVector3f *)0x0);
  if ((0.0 <= fStack_14) && (fStack_14 <= 1.0)) {
    local_1c = 0x40000000;
    if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
      local_2c = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00477890(this_ptr,frame_index)
      ;
      local_20 = (CMatrix3x3f *)0x0;
      if (0 < this_ptr->poly_count) {
        local_1c = 0;
        do {
          local_18 = local_1c + (int)this_ptr->poly_vert_list;
          pCVar1 = local_2c + *(int *)(local_18 + 0x18);
          local_64._8_4_ = (float)pCVar1->x * g_Fixed16ToFloat;
          local_58 = (float)pCVar1->y * g_Fixed16ToFloat;
          local_54 = (float)pCVar1->z * g_Fixed16ToFloat;
          pCVar1 = local_2c + *(int *)(local_18 + 0x24);
          local_50._0_4_ = (float)pCVar1->x * g_Fixed16ToFloat;
          local_50._4_4_ = (float)pCVar1->y * g_Fixed16ToFloat;
          auStack_48._0_4_ = (float)pCVar1->z * g_Fixed16ToFloat;
          iVar5 = 2;
          if (2 < *(int *)(local_18 + 4)) {
            iVar2 = local_18 + 0x18;
            do {
              pCVar1 = local_2c + *(int *)(iVar2 + 0x18);
              local_38.x = (float)pCVar1->x * g_Fixed16ToFloat;
              local_38.y = (float)pCVar1->y * g_Fixed16ToFloat;
              local_38.z = (float)pCVar1->z * g_Fixed16ToFloat;
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                        ((CDemonTriangle *)auStack_c4,(CVector3f *)(local_64 + 8),
                         (CVector3f *)local_50,&local_38);
              if ((CVector3f *)(local_50 + 4) != &local_38) {
                local_50._4_4_ = local_38.y;
                auStack_48._0_4_ = local_38.z;
                auStack_48._4_4_ = local_2c;
              }
              fVar3 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                                ((CDemonTriangle *)(auStack_c4 + 4),ray_origin,ray_direction);
              if (((fVar3 <= fStack_14) && (0.0 <= fVar3)) &&
                 ((fVar3 <= 1.0 && (fStack_14 = fVar3, output_normal != (CVector3f *)0x0)))) {
                local_8c.x = -fStack_a0;
                local_8c.y = -fStack_9c;
                local_8c.z = -local_98;
                if (output_normal != &local_8c) {
                  output_normal->x = local_8c.x;
                  output_normal->y = local_8c.y;
                  output_normal->z = local_8c.z;
                }
              }
              iVar2 = iVar2 + 0xc;
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(local_18 + 4));
          }
          local_1c = local_1c + 0x48;
          local_20 = (CMatrix3x3f *)((int)local_20 + 1);
        } while ((int)local_20 < this_ptr->poly_count);
      }
    }
    else {
      matrix = &this_ptr->rotation_matrix_workspace;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (matrix,(CVector3f *)auStack_7c,ray_origin);
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                (matrix,(CVector3f *)(local_50 + 8),ray_direction);
      triangle = this_ptr->collision_triangle_list +
                 frame_index * this_ptr->collision_triangle_count;
      iVar5 = 0;
      local_24 = matrix;
      if (0 < this_ptr->collision_triangle_count) {
        do {
          fVar3 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                            (triangle,(CVector3f *)(auStack_7c + 8),(CVector3f *)(auStack_48 + 4));
          if ((((fVar3 <= unaff_EBP) && (0.0 <= fVar3)) && (fVar3 <= 1.0)) &&
             (unaff_EBP = fVar3, output_normal != (CVector3f *)0x0)) {
            auStack_7c._0_4_ = -(triangle->normal).x;
            auStack_7c._4_4_ = -(triangle->normal).y;
            auStack_7c._8_4_ = -(triangle->normal).z;
            pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                               (local_20,(CVector3f *)local_64,(CVector3f *)auStack_7c);
            if (output_normal != pCVar4) {
              output_normal->x = pCVar4->x;
              output_normal->y = pCVar4->y;
              output_normal->z = pCVar4->z;
            }
          }
          iVar5 = iVar5 + 1;
          triangle = triangle + 1;
        } while (iVar5 < this_ptr->collision_triangle_count);
      }
    }
    local_28 = fStack_14;
  }
  return local_28;
}


// Assembly code:
// 004781d0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0
// 004781d1: PUSH ESI
// 004781d2: PUSH EDI
// 004781d3: PUSH EBP
// 004781d4: MOV EBP,ESP
// 004781d6: SUB ESP,0xdc
// 004781dc: AND ESP,0xfffffff8
// 004781df: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004781e2: MOV ESI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004781e5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004781e8: MOV EDX,dword ptr [EAX + 0x100]
// 004781ee: CMP EDI,EDX
// 004781f0: JL 0x004781f5
//   XREF to: 004781f5 (CONDITIONAL_JUMP)
// 004781f2: LEA EDI,[EDX + -0x1]
// 004781f5: TEST EDI,EDI
//   Label: LAB_004781f5
// 004781f7: JGE 0x004781fb
//   XREF to: 004781fb (CONDITIONAL_JUMP)
// 004781f9: XOR EDI,EDI
// 004781fb: PUSH 0x0
//   Label: LAB_004781fb
// 004781fd: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00478200: LEA EAX,[EDI*0x4 + 0x0]
// 00478207: PUSH ECX
// 00478208: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0047820b: SUB EAX,EDI
// 0047820d: PUSH EBX
// 0047820e: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00478211: SHL EAX,0x3
// 00478214: MOV EBX,dword ptr [EBX + 0x5690]
// 0047821a: ADD EAX,EBX
// 0047821c: PUSH EAX
// 0047821d: CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   XREF to: 00420940 (UNCONDITIONAL_CALL)
// 00478222: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00478229: FLD float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x18] (READ)
// 00478230: ADD ESP,0x10
// 00478233: FLDZ
// 00478235: FXCH
// 00478237: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (WRITE)
// 0047823b: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (READ)
// 0047823f: FNSTSW AX
// 00478241: SAHF
// 00478242: JA 0x00478477
//   XREF to: 00478477 (CONDITIONAL_JUMP)
// 00478248: FLD1
// 0047824a: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xe0] (READ)
// 0047824e: FNSTSW AX
// 00478250: SAHF
// 00478251: JC 0x00478477
//   XREF to: 00478477 (CONDITIONAL_JUMP)
// 00478257: MOV dword ptr [ESP + 0xd0],0x40000000
//   XREF to: Stack[-0x20] (WRITE)
// 00478262: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00478265: CMP dword ptr [EAX + 0x5698],0x0
// 0047826c: JNZ 0x0047850c
//   XREF to: 0047850c (CONDITIONAL_JUMP)
// 00478272: PUSH EDI
// 00478273: PUSH EAX
// 00478274: MOV EBX,EAX
// 00478276: CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00477890
//   XREF to: 00477890 (UNCONDITIONAL_CALL)
// 0047827b: ADD ESP,0x8
// 0047827e: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00478285: MOV EAX,EBX
// 00478287: XOR EDI,EDI
// 00478289: MOV EDX,dword ptr [EAX + 0x110]
// 0047828f: MOV dword ptr [ESP + 0xc4],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 00478296: TEST EDX,EDX
// 00478298: JLE 0x0047845b
//   XREF to: 0047845b (CONDITIONAL_JUMP)
// 0047829e: MOV dword ptr [ESP + 0xc8],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 004782a5: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004782a5
//   XREF to: Stack[0x4] (READ)
// 004782a8: MOV EDX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x28] (READ)
// 004782af: MOV EAX,dword ptr [EAX + 0x114]
// 004782b5: ADD EDX,EAX
// 004782b7: IMUL EAX,dword ptr [EDX + 0x18],0xc
// 004782bb: MOV EDI,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 004782c2: LEA EBX,[ESP + 0x88]
//   XREF to: Stack[-0x68] (DATA)
// 004782c9: ADD EAX,EDI
// 004782cb: MOV dword ptr [ESP + 0xcc],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 004782d2: FILD dword ptr [EAX]
// 004782d4: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 004782da: FSTP float ptr [EBX]
//   XREF to: Stack[-0x68] (DATA)
// 004782dc: FILD dword ptr [EAX + 0x4]
// 004782df: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 004782e5: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x64] (WRITE)
// 004782e8: FILD dword ptr [EAX + 0x8]
// 004782eb: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 004782f1: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x60] (WRITE)
// 004782f4: IMUL EAX,dword ptr [EDX + 0x24],0xc
// 004782f8: LEA EBX,[ESP + 0x94]
//   XREF to: Stack[-0x5c] (DATA)
// 004782ff: ADD EAX,EDI
// 00478301: FILD dword ptr [EAX]
// 00478303: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 00478309: FSTP float ptr [EBX]
//   XREF to: Stack[-0x5c] (DATA)
// 0047830b: FILD dword ptr [EAX + 0x4]
// 0047830e: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 00478314: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x58] (WRITE)
// 00478317: FILD dword ptr [EAX + 0x8]
// 0047831a: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 00478320: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x54] (WRITE)
// 00478323: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x24] (READ)
// 0047832a: MOV EDI,0x2
// 0047832f: CMP EDI,dword ptr [EAX + 0x4]
// 00478332: JGE 0x0047842a
//   XREF to: 0047842a (CONDITIONAL_JUMP)
// 00478338: ADD EAX,0x18
// 0047833b: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00478342: MOV EAX,dword ptr [ESP + 0xd4]
//   Label: LAB_00478342
//   XREF to: Stack[-0x1c] (READ)
// 00478349: IMUL EAX,dword ptr [EAX + 0x18],0xc
// 0047834d: ADD EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 00478354: LEA EBX,[ESP + 0xac]
//   XREF to: Stack[-0x44] (DATA)
// 0047835b: FILD dword ptr [EAX]
// 0047835d: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 00478363: FSTP float ptr [EBX]
//   XREF to: Stack[-0x44] (DATA)
// 00478365: FILD dword ptr [EAX + 0x4]
// 00478368: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 0047836e: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x40] (WRITE)
// 00478371: FILD dword ptr [EAX + 0x8]
// 00478374: FMUL float ptr [0x0065c974]
//   XREF to: 0065c974 (READ)
// 0047837a: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x3c] (WRITE)
// 0047837d: LEA EAX,[ESP + 0xac]
//   XREF to: Stack[-0x44] (DATA)
// 00478384: PUSH EAX
// 00478385: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x5c] (DATA)
// 0047838c: PUSH EAX
// 0047838d: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x68] (DATA)
// 00478394: PUSH EAX
// 00478395: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0xd0] (DATA)
// 00478399: PUSH EAX
// 0047839a: LEA EBX,[ESP + 0xbc]
//   XREF to: Stack[-0x44] (DATA)
// 004783a1: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 004783a6: LEA EAX,[ESP + 0xa4]
//   XREF to: Stack[-0x5c] (DATA)
// 004783ad: ADD ESP,0x10
// 004783b0: CMP EAX,EBX
// 004783b2: JZ 0x004783de
//   XREF to: 004783de (CONDITIONAL_JUMP)
// 004783b4: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x44] (READ)
// 004783bb: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 004783c2: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x40] (READ)
// 004783c9: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 004783d0: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x3c] (READ)
// 004783d7: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004783de: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_004783de
//   XREF to: Stack[0x10] (READ)
// 004783e1: PUSH EAX
// 004783e2: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004783e5: PUSH EDX
// 004783e6: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xd0] (DATA)
// 004783ea: PUSH EAX
// 004783eb: CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
//   XREF to: 0049a800 (UNCONDITIONAL_CALL)
// 004783f0: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004783f7: FLD float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x18] (READ)
// 004783fe: ADD ESP,0xc
// 00478401: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xd4] (WRITE)
// 00478405: FCOMP float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x20] (READ)
// 0047840c: FNSTSW AX
// 0047840e: SAHF
// 0047840f: JBE 0x00478484
//   XREF to: 00478484 (CONDITIONAL_JUMP)
// 00478411: ADD dword ptr [ESP + 0xd4],0xc
//   Label: LAB_00478411
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 00478419: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x24] (READ)
// 00478420: INC EDI
// 00478421: CMP EDI,dword ptr [EAX + 0x4]
// 00478424: JL 0x00478342
//   XREF to: 00478342 (CONDITIONAL_JUMP)
// 0047842a: MOV EBX,dword ptr [ESP + 0xc8]
//   Label: LAB_0047842a
//   XREF to: Stack[-0x28] (READ)
// 00478431: ADD EBX,0x48
// 00478434: MOV EDI,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x2c] (READ)
// 0047843b: MOV dword ptr [ESP + 0xc8],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 00478442: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00478445: INC EDI
// 00478446: MOV EDX,dword ptr [EBX + 0x110]
// 0047844c: MOV dword ptr [ESP + 0xc4],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 00478453: CMP EDI,EDX
// 00478455: JL 0x004782a5
//   XREF to: 004782a5 (CONDITIONAL_JUMP)
// 0047845b: MOV EAX,dword ptr [ESP + 0xd0]
//   Label: LAB_0047845b
//   XREF to: Stack[-0x20] (READ)
// 00478462: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00478469: MOV EAX,dword ptr [ESP + 0xbc]
//   Label: LAB_00478469
//   XREF to: Stack[-0x34] (READ)
// 00478470: MOV ESP,EBP
// 00478472: POP EBP
// 00478473: POP EDI
// 00478474: POP ESI
// 00478475: POP EBX
// 00478476: RET
// 00478477: MOV dword ptr [ESP + 0xbc],0x40000000
//   Label: LAB_00478477
//   XREF to: Stack[-0x34] (WRITE)
// 00478482: JMP 0x00478469
//   XREF to: 00478469 (UNCONDITIONAL_JUMP)
// 00478484: FLD float ptr [ESP + 0x1c]
//   Label: LAB_00478484
//   XREF to: Stack[-0xd4] (READ)
// 00478488: FLDZ
// 0047848a: FXCH
// 0047848c: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (WRITE)
// 00478490: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (READ)
// 00478494: FNSTSW AX
// 00478496: SAHF
// 00478497: JA 0x00478411
//   XREF to: 00478411 (CONDITIONAL_JUMP)
// 0047849d: FLD1
// 0047849f: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xe8] (READ)
// 004784a3: FNSTSW AX
// 004784a5: SAHF
// 004784a6: JC 0x00478411
//   XREF to: 00478411 (CONDITIONAL_JUMP)
// 004784ac: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xd4] (READ)
// 004784b0: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004784b7: TEST ESI,ESI
// 004784b9: JZ 0x00478411
//   XREF to: 00478411 (CONDITIONAL_JUMP)
// 004784bf: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0xac] (READ)
// 004784c3: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0xa8] (READ)
// 004784c7: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xa4] (READ)
// 004784cb: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x98] (DATA)
// 004784cf: FXCH ST2
// 004784d1: FCHS
// 004784d3: FXCH
// 004784d5: FCHS
// 004784d7: FXCH ST2
// 004784d9: FCHS
// 004784db: FXCH ST2
// 004784dd: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x94] (WRITE)
// 004784e1: FXCH
// 004784e3: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x90] (WRITE)
// 004784e7: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x98] (WRITE)
// 004784eb: CMP ESI,EAX
// 004784ed: JZ 0x00478411
//   XREF to: 00478411 (CONDITIONAL_JUMP)
// 004784f3: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x98] (DATA)
// 004784f7: MOV dword ptr [ESI],EAX
// 004784f9: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x94] (READ)
// 004784fd: MOV dword ptr [ESI + 0x4],EAX
// 00478500: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x90] (READ)
// 00478504: MOV dword ptr [ESI + 0x8],EAX
// 00478507: JMP 0x00478411
//   XREF to: 00478411 (UNCONDITIONAL_JUMP)
// 0047850c: MOV ECX,dword ptr [EBP + 0x1c]
//   Label: LAB_0047850c
//   XREF to: Stack[0xc] (READ)
// 0047850f: PUSH ECX
// 00478510: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x80] (DATA)
// 00478514: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00478517: PUSH EAX
// 00478518: ADD EBX,0x56b0
// 0047851e: PUSH EBX
// 0047851f: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 00478524: ADD ESP,0xc
// 00478527: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0047852a: PUSH EAX
// 0047852b: LEA EAX,[ESP + 0xa4]
//   XREF to: Stack[-0x50] (DATA)
// 00478532: PUSH EAX
// 00478533: PUSH EBX
// 00478534: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 00478539: ADD ESP,0xc
// 0047853c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047853f: MOV EDX,dword ptr [EAX + 0x5694]
// 00478545: MOV EAX,EDI
// 00478547: IMUL EAX,EDX
// 0047854a: SHL EAX,0x3
// 0047854d: MOV EDI,EAX
// 0047854f: SHL EAX,0x3
// 00478552: SUB EAX,EDI
// 00478554: MOV EDI,EAX
// 00478556: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00478559: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047855c: MOV EAX,dword ptr [EAX + 0x5698]
// 00478562: MOV ECX,dword ptr [EDX + 0x5694]
// 00478568: ADD EAX,EDI
// 0047856a: XOR EDI,EDI
// 0047856c: TEST ECX,ECX
// 0047856e: JLE 0x0047845b
//   XREF to: 0047845b (CONDITIONAL_JUMP)
// 00478574: MOV dword ptr [ESP + 0xc0],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0047857b: MOV EBX,EAX
// 0047857d: LEA EAX,[ESP + 0xa0]
//   Label: LAB_0047857d
//   XREF to: Stack[-0x50] (DATA)
// 00478584: PUSH EAX
// 00478585: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x80] (DATA)
// 00478589: PUSH EAX
// 0047858a: PUSH EBX
// 0047858b: CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
//   XREF to: 0049a800 (UNCONDITIONAL_CALL)
// 00478590: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00478597: FLD float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x18] (READ)
// 0047859e: ADD ESP,0xc
// 004785a1: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (WRITE)
// 004785a5: FCOMP float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x20] (READ)
// 004785ac: FNSTSW AX
// 004785ae: SAHF
// 004785af: JBE 0x004785c8
//   XREF to: 004785c8 (CONDITIONAL_JUMP)
// 004785b1: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004785b1
//   XREF to: Stack[0x4] (READ)
// 004785b4: INC EDI
// 004785b5: MOV EDX,dword ptr [EAX + 0x5694]
// 004785bb: ADD EBX,0x38
// 004785be: CMP EDI,EDX
// 004785c0: JGE 0x0047845b
//   XREF to: 0047845b (CONDITIONAL_JUMP)
// 004785c6: JMP 0x0047857d
//   XREF to: 0047857d (UNCONDITIONAL_JUMP)
// 004785c8: FLD float ptr [ESP + 0x18]
//   Label: LAB_004785c8
//   XREF to: Stack[-0xd8] (READ)
// 004785cc: FLDZ
// 004785ce: FXCH
// 004785d0: FSTP double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 004785d3: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 004785d6: FNSTSW AX
// 004785d8: SAHF
// 004785d9: JA 0x004785b1
//   XREF to: 004785b1 (CONDITIONAL_JUMP)
// 004785db: FLD1
// 004785dd: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 004785e0: FNSTSW AX
// 004785e2: SAHF
// 004785e3: JC 0x004785b1
//   XREF to: 004785b1 (CONDITIONAL_JUMP)
// 004785e5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (READ)
// 004785e9: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004785f0: TEST ESI,ESI
// 004785f2: JZ 0x004785b1
//   XREF to: 004785b1 (CONDITIONAL_JUMP)
// 004785f4: LEA EAX,[EBX + 0x24]
// 004785f7: FLD float ptr [EAX]
// 004785f9: FCHS
// 004785fb: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x8c] (WRITE)
// 004785ff: FLD float ptr [EAX + 0x4]
// 00478602: FCHS
// 00478604: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x88] (WRITE)
// 00478608: FLD float ptr [EAX + 0x8]
// 0047860b: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x8c] (DATA)
// 0047860f: PUSH EAX
// 00478610: LEA EAX,[ESP + 0x80]
//   XREF to: Stack[-0x74] (DATA)
// 00478617: MOV ECX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x30] (READ)
// 0047861e: PUSH EAX
// 0047861f: FCHS
// 00478621: PUSH ECX
// 00478622: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x84] (WRITE)
// 00478626: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0047862b: ADD ESP,0xc
// 0047862e: CMP ESI,EAX
// 00478630: JZ 0x004785b1
//   XREF to: 004785b1 (CONDITIONAL_JUMP)
// 00478636: MOV EDX,dword ptr [EAX]
// 00478638: MOV dword ptr [ESI],EDX
// 0047863a: MOV EDX,dword ptr [EAX + 0x4]
// 0047863d: MOV dword ptr [ESI + 0x4],EDX
// 00478640: MOV EDX,dword ptr [EAX + 0x8]
// 00478643: MOV dword ptr [ESI + 0x8],EDX
// 00478646: JMP 0x004785b1
//   XREF to: 004785b1 (UNCONDITIONAL_JUMP)

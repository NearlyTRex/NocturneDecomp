// Name: core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40
// Address: 0059ce40
// Address Range: [[0059ce40, 0059cebc]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40(CDeformableModel * this_ptr, CBoundingBox3D * bounding_box)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042af60 (0042af60) at 0042b045 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 (005a0150) at 005a01a8 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0059ce40
          (CDeformableModel *this_ptr,CBoundingBox3D *bounding_box)

{
  int iVar1;
  float fVar2;
  int extraout_ECX;
  undefined4 extraout_EDX;
  int *piVar3;
  float10 fVar4;
  CBoundingBox3D *in_stack_0000000c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (1 < this_ptr->num_lods) {
      fVar2 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(in_stack_0000000c);
      fVar4 = (float10)fVar2;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,fVar2));
      iVar1 = extraout_ECX + -1;
      if (0 < iVar1) {
        piVar3 = &this_ptr->lod_info[extraout_ECX + -2].shadow_only_flag;
        do {
          if ((piVar3[2] == 0) && ((int)ROUND(fVar4) < piVar3[1])) {
            return iVar1;
          }
          iVar1 = iVar1 + -1;
          piVar3 = piVar3 + -2;
        } while (0 < iVar1);
      }
      return iVar1;
    }
  }
  else {
    iVar1 = this_ptr->num_lods + -1;
  }
  return iVar1;
}


// Assembly code:
// 0059ce40: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40
// 0059ce41: PUSH EBP
// 0059ce42: SUB ESP,0x8
// 0059ce45: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ce49: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059ce4f: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0059ce50: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0059ce55: ADD ESP,0x4
// 0059ce58: TEST EAX,EAX
// 0059ce5a: JNZ 0x0059ce67
//   XREF to: 0059ce67 (CONDITIONAL_JUMP)
// 0059ce5c: CMP dword ptr [EBX],0x1
// 0059ce5f: JG 0x0059ce6c
//   XREF to: 0059ce6c (CONDITIONAL_JUMP)
// 0059ce61: ADD ESP,0x8
//   Label: LAB_0059ce61
// 0059ce64: POP EBP
// 0059ce65: POP EBX
// 0059ce66: RET
// 0059ce67: MOV EAX,dword ptr [EBX]
//   Label: LAB_0059ce67
// 0059ce69: DEC EAX
// 0059ce6a: JMP 0x0059ce61
//   XREF to: 0059ce61 (UNCONDITIONAL_JUMP)
// 0059ce6c: PUSH ESI
//   Label: LAB_0059ce6c
// 0059ce6d: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0059ce71: PUSH ESI
// 0059ce72: CALL core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
//   XREF to: 00420840 (UNCONDITIONAL_CALL)
// 0059ce77: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0059ce7b: MOV ECX,dword ptr [EBX]
// 0059ce7d: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0xc] (READ)
// 0059ce81: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0059ce86: ADD ESP,0x4
// 0059ce89: DEC ECX
// 0059ce8a: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (WRITE)
// 0059ce8e: TEST ECX,ECX
// 0059ce90: JLE 0x0059cead
//   XREF to: 0059cead (CONDITIONAL_JUMP)
// 0059ce92: LEA EDX,[ECX*0x8 + 0x0]
// 0059ce99: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 0059ce9d: ADD EDX,EBX
// 0059ce9f: CMP dword ptr [EDX + 0x8],0x0
//   Label: LAB_0059ce9f
// 0059cea3: JZ 0x0059ceb6
//   XREF to: 0059ceb6 (CONDITIONAL_JUMP)
// 0059cea5: DEC ECX
//   Label: LAB_0059cea5
// 0059cea6: SUB EDX,0x8
// 0059cea9: TEST ECX,ECX
// 0059ceab: JG 0x0059ce9f
//   XREF to: 0059ce9f (CONDITIONAL_JUMP)
// 0059cead: MOV EAX,ECX
//   Label: LAB_0059cead
// 0059ceaf: POP ESI
// 0059ceb0: ADD ESP,0x8
// 0059ceb3: POP EBP
// 0059ceb4: POP EBX
// 0059ceb5: RET
// 0059ceb6: CMP EBP,dword ptr [EDX + 0x4]
//   Label: LAB_0059ceb6
// 0059ceb9: JL 0x0059cead
//   XREF to: 0059cead (CONDITIONAL_JUMP)
// 0059cebb: JMP 0x0059cea5
//   XREF to: 0059cea5 (UNCONDITIONAL_JUMP)

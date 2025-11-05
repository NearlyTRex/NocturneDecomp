// Name: core_charactr.cpp_CCharacter_FUN_0042ad00
// Address: 0042ad00
// Address Range: [[0042ad00, 0042af5a]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042ad00(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_00429aa0 (00429aa0) at 00429acd [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00617132 = 65535
//   undefined4 DAT_0065b830
//   SMRGLTextureBasic DAT_0066e784
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 DAT_00823c54
//   undefined4 DAT_00823c58
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042ad00(CCharacter *this_ptr)

{
  int iVar1;
  SVert *pSVar2;
  float fVar3;
  float fVar4;
  CSkeleton *pCVar5;
  CDeformableModel *pCVar6;
  int iVar7;
  int extraout_ECX;
  SVert *pSVar8;
  int extraout_ECX_00;
  int iVar9;
  CCharacter *pCVar10;
  SVert *pSVar11;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModel *pCVar12;
  float10 fVar13;
  double dVar14;
  float local_24;
  
  if (*(int *)(this_ptr->cloth_data + 0x478) == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_0066e784);
  this_ptr_00 = &this_ptr->model;
  if (*(int *)(this_ptr->cloth_data + 0x8d40) != 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
              (this_ptr_00,-1,0xc9,0,1);
    return;
  }
  pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = (this_ptr->model).cached_skinned_lod_index;
  iVar7 = 0;
  if (0 < pCVar5->bone_count) {
    iVar9 = 0;
    do {
      *(undefined4 *)((int)&DAT_00823c54 + iVar9) = 0;
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar7 < pCVar5->bone_count);
  }
  fVar4 = DAT_0065b830;
  iVar7 = 0;
  if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
    fVar3 = (float)DOUBLE_00617132;
    pCVar10 = this_ptr;
    do {
      (&DAT_00823c54)[*(int *)(pCVar10->cloth_data + 0x488)] =
           (float)(&DAT_00823c54)[*(int *)(pCVar10->cloth_data + 0x488)] +
           (*(float *)(pCVar10->cloth_data + 0x498) * fVar3) / fVar4;
      iVar7 = iVar7 + 1;
      pCVar10 = (CCharacter *)((pCVar10->base_actor).actor_name + 0x18);
    } while (iVar7 < *(int *)(this_ptr->cloth_data + 0x478));
  }
  iVar7 = 0;
  iVar9 = 0;
  pCVar12 = pCVar6;
  if (0 < pCVar5->bone_count) {
    do {
      if ((float)DOUBLE_00617132 <= (float)(&DAT_00823c54)[iVar7]) {
        iVar9 = iVar9 + 1;
      }
      if (pCVar12->farthest_child_bone[0] == -1) {
        iVar9 = iVar9 + 1;
      }
      iVar7 = iVar7 + 1;
      pCVar12 = (CDeformableModel *)pCVar12->lod_info;
    } while (iVar7 < pCVar5->bone_count);
  }
  if (iVar9 == pCVar5->bone_count) {
    this_ptr->cloth_data[0x8d44] = '\0';
    this_ptr->cloth_data[0x8d45] = '\0';
    this_ptr->cloth_data[0x8d46] = -0x80;
    this_ptr->cloth_data[0x8d47] = '?';
    this_ptr->cloth_data[0x8d40] = '\x01';
    this_ptr->cloth_data[0x8d41] = '\0';
    this_ptr->cloth_data[0x8d42] = '\0';
    this_ptr->cloth_data[0x8d43] = '\0';
  }
  for (iVar7 = 0; iVar7 < pCVar6->vertex_count[iVar1]; iVar7 = iVar7 + 1) {
    pSVar2 = pCVar6->vertex_data_ptr[iVar1];
    local_24 = 0.0;
    iVar9 = 0;
    pSVar8 = pSVar2;
    pSVar11 = pSVar2;
    while (iVar9 < (int)(uint)pSVar2->num_bone_influences) {
      fVar13 = (float10)pSVar8->bone_weights[0] *
               (float10)(float)(&DAT_00823c54)[pSVar11->bone_indices[0]];
      dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar9,(uint)pSVar11->bone_indices[0]))
      ;
      pSVar8 = (SVert *)(extraout_ECX + 4);
      pSVar11 = (SVert *)pSVar11->bone_indices;
      local_24 = (float)(int)ROUND(fVar13) + local_24;
      iVar9 = (int)((ulonglong)dVar14 >> 0x20) + 1;
    }
    if ((float)DOUBLE_00617132 < local_24) {
      local_24 = 65535.0;
    }
    fVar13 = (float10)local_24;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar9,g_CDemonRendererPtr));
    *(int *)(*SUB84(dVar14,0) + extraout_ECX_00 + 0x2c) = (int)ROUND(fVar13);
  }
  core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
            (&this_ptr->model,-1,0x163,0,1);
  return;
}


// Assembly code:
// 0042ad00: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042ad00
// 0042ad01: PUSH ESI
// 0042ad02: PUSH EDI
// 0042ad03: PUSH EBP
// 0042ad04: MOV EBP,ESP
// 0042ad06: SUB ESP,0x20
// 0042ad09: AND ESP,0xfffffff8
// 0042ad0c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042ad0f: CMP dword ptr [EAX + 0x2f10],0x0
// 0042ad16: JNZ 0x0042ad1f
//   XREF to: 0042ad1f (CONDITIONAL_JUMP)
// 0042ad18: MOV ESP,EBP
// 0042ad1a: POP EBP
// 0042ad1b: POP EDI
// 0042ad1c: POP ESI
// 0042ad1d: POP EBX
// 0042ad1e: RET
// 0042ad1f: PUSH 0x66e784
//   Label: LAB_0042ad1f
//   XREF to: 0066e784 (DATA)
// 0042ad24: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042ad2a: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0042ad2b: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0042ad30: ADD ESP,0x8
// 0042ad33: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042ad36: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042ad39: MOV EBX,dword ptr [EAX + 0xb7d8]
// 0042ad3f: ADD EDI,0x158
// 0042ad45: TEST EBX,EBX
// 0042ad47: JNZ 0x0042aeb4
//   XREF to: 0042aeb4 (CONDITIONAL_JUMP)
// 0042ad4d: PUSH EDI
// 0042ad4e: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0042ad53: ADD ESP,0x4
// 0042ad56: PUSH EDI
// 0042ad57: MOV ESI,EAX
// 0042ad59: MOV EBX,EAX
// 0042ad5b: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0042ad60: ADD ESP,0x4
// 0042ad63: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0042ad67: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042ad6a: MOV EAX,dword ptr [EAX + 0x2388]
// 0042ad70: MOV EDI,dword ptr [ESI + 0x28558]
// 0042ad76: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0042ad7a: XOR EAX,EAX
// 0042ad7c: TEST EDI,EDI
// 0042ad7e: JLE 0x0042ada0
//   XREF to: 0042ada0 (CONDITIONAL_JUMP)
// 0042ad80: XOR EDX,EDX
// 0042ad82: XOR ECX,ECX
//   Label: LAB_0042ad82
// 0042ad84: MOV dword ptr [EDX + 0x823c54],ECX
//   XREF to: 00823c54 (WRITE)
//   XREF to: 00823c58 (WRITE)
// 0042ad8a: INC EAX
// 0042ad8b: MOV ESI,dword ptr [EBX + 0x28558]
// 0042ad91: ADD EDX,0x4
// 0042ad94: CMP EAX,ESI
// 0042ad96: JL 0x0042ad82
//   XREF to: 0042ad82 (CONDITIONAL_JUMP)
// 0042ad98: LEA EAX,[EAX]
// 0042ad9e: MOV EDX,EDX
// 0042ada0: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0042ada0
//   XREF to: Stack[0x4] (READ)
// 0042ada3: MOV EDI,dword ptr [EAX + 0x2f10]
// 0042ada9: XOR ECX,ECX
// 0042adab: TEST EDI,EDI
// 0042adad: JLE 0x0042adf4
//   XREF to: 0042adf4 (CONDITIONAL_JUMP)
// 0042adaf: FLD float ptr [0x0065b830]
//   XREF to: 0065b830 (READ)
// 0042adb5: FLD double ptr [0x00617132]
//   XREF to: 00617132 (READ)
// 0042adbb: MOV EDX,EAX
// 0042adbd: FLD float ptr [EDX + 0x2f30]
//   Label: LAB_0042adbd
// 0042adc3: MOV EAX,dword ptr [EDX + 0x2f20]
// 0042adc9: FMUL ST1
// 0042adcb: FLD float ptr [EAX*0x4 + 0x823c54]
//   XREF to: 00823c54 (DATA)
// 0042add2: FLD ST3
// 0042add4: FDIVP ST2,ST0
// 0042add6: FADDP
// 0042add8: FSTP float ptr [EAX*0x4 + 0x823c54]
//   XREF to: 00823c54 (DATA)
// 0042addf: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042ade2: INC ECX
// 0042ade3: MOV ESI,dword ptr [EAX + 0x2f10]
// 0042ade9: ADD EDX,0x18
// 0042adec: CMP ECX,ESI
// 0042adee: JL 0x0042adbd
//   XREF to: 0042adbd (CONDITIONAL_JUMP)
// 0042adf0: FSTP ST0
// 0042adf2: FSTP ST0
// 0042adf4: MOV EDI,dword ptr [EBX + 0x28558]
//   Label: LAB_0042adf4
// 0042adfa: XOR ECX,ECX
// 0042adfc: XOR EDX,EDX
// 0042adfe: TEST EDI,EDI
// 0042ae00: JLE 0x0042ae31
//   XREF to: 0042ae31 (CONDITIONAL_JUMP)
// 0042ae02: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0042ae06: FLD float ptr [ECX*0x4 + 0x823c54]
//   Label: LAB_0042ae06
//   XREF to: 00823c54 (READ)
//   XREF to: 00823c58 (READ)
// 0042ae0d: FCOMP double ptr [0x00617132]
//   XREF to: 00617132 (READ)
// 0042ae13: FNSTSW AX
// 0042ae15: SAHF
// 0042ae16: JC 0x0042ae19
//   XREF to: 0042ae19 (CONDITIONAL_JUMP)
// 0042ae18: INC EDX
// 0042ae19: CMP dword ptr [EDI + 0x8dcc],-0x1
//   Label: LAB_0042ae19
// 0042ae20: JNZ 0x0042ae23
//   XREF to: 0042ae23 (CONDITIONAL_JUMP)
// 0042ae22: INC EDX
// 0042ae23: INC ECX
//   Label: LAB_0042ae23
// 0042ae24: MOV EAX,dword ptr [EBX + 0x28558]
// 0042ae2a: ADD EDI,0x4
// 0042ae2d: CMP ECX,EAX
// 0042ae2f: JL 0x0042ae06
//   XREF to: 0042ae06 (CONDITIONAL_JUMP)
// 0042ae31: CMP EDX,dword ptr [EBX + 0x28558]
//   Label: LAB_0042ae31
// 0042ae37: JZ 0x0042aecf
//   XREF to: 0042aecf (CONDITIONAL_JUMP)
// 0042ae3d: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0042ae3d
//   XREF to: Stack[-0x28] (READ)
// 0042ae41: XOR EDI,EDI
// 0042ae43: SHL EAX,0x2
// 0042ae46: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0042ae4a: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0042ae4e: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0042ae52: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0042ae52
//   XREF to: Stack[-0x20] (READ)
// 0042ae56: ADD EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0042ae5a: CMP EDI,dword ptr [EAX + 0x2c]
// 0042ae5d: JGE 0x0042af38
//   XREF to: 0042af38 (CONDITIONAL_JUMP)
// 0042ae63: MOV ESI,dword ptr [EAX + 0x40]
// 0042ae66: XOR EBX,EBX
// 0042ae68: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0042ae6c: XOR EDX,EDX
// 0042ae6e: ADD ESI,EAX
// 0042ae70: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x30] (DATA)
// 0042ae73: MOV ECX,ESI
// 0042ae75: MOV EBX,ESI
// 0042ae77: XOR EAX,EAX
//   Label: LAB_0042ae77
// 0042ae79: MOV AL,byte ptr [ESI]
// 0042ae7b: CMP EDX,EAX
// 0042ae7d: JGE 0x0042aeeb
//   XREF to: 0042aeeb (CONDITIONAL_JUMP)
// 0042ae83: XOR EAX,EAX
// 0042ae85: MOV AL,byte ptr [EBX + 0x1]
// 0042ae88: FLD float ptr [ECX + 0x4]
// 0042ae8b: FMUL float ptr [EAX*0x4 + 0x823c54]
//   XREF to: 00823c54 (DATA)
// 0042ae92: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0042ae97: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (WRITE)
// 0042ae9b: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0042ae9f: ADD ECX,0x4
// 0042aea2: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0042aea6: INC EBX
// 0042aea7: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0042aeab: FADD float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0042aeae: INC EDX
// 0042aeaf: FSTP float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0042aeb2: JMP 0x0042ae77
//   XREF to: 0042ae77 (UNCONDITIONAL_JUMP)
// 0042aeb4: PUSH 0x1
//   Label: LAB_0042aeb4
// 0042aeb6: PUSH 0x0
// 0042aeb8: PUSH 0xc9
// 0042aebd: PUSH -0x1
// 0042aebf: PUSH EDI
// 0042aec0: CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
//   XREF to: 005a0150 (UNCONDITIONAL_CALL)
// 0042aec5: ADD ESP,0x14
// 0042aec8: MOV ESP,EBP
// 0042aeca: POP EBP
// 0042aecb: POP EDI
// 0042aecc: POP ESI
// 0042aecd: POP EBX
// 0042aece: RET
// 0042aecf: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0042aecf
//   XREF to: Stack[0x4] (READ)
// 0042aed2: MOV dword ptr [EAX + 0xb7dc],0x3f800000
// 0042aedc: MOV dword ptr [EAX + 0xb7d8],0x1
// 0042aee6: JMP 0x0042ae3d
//   XREF to: 0042ae3d (UNCONDITIONAL_JUMP)
// 0042aeeb: FLD float ptr [ESP]
//   Label: LAB_0042aeeb
//   XREF to: Stack[-0x30] (DATA)
// 0042aeee: FCOMP double ptr [0x00617132]
//   XREF to: 00617132 (READ)
// 0042aef4: FNSTSW AX
// 0042aef6: SAHF
// 0042aef7: JBE 0x0042af00
//   XREF to: 0042af00 (CONDITIONAL_JUMP)
// 0042aef9: MOV dword ptr [ESP],0x477fff00
//   XREF to: Stack[-0x30] (DATA)
// 0042af00: FLD float ptr [ESP]
//   Label: LAB_0042af00
//   XREF to: Stack[-0x30] (DATA)
// 0042af03: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0042af07: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0042af0b: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042af10: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0042af15: INC EDI
// 0042af16: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (WRITE)
// 0042af1a: ADD EBX,0x34
// 0042af1d: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0042af1f: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0042af23: ADD EDX,ECX
// 0042af25: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0042af29: LEA ESI,[ECX + 0x30]
// 0042af2c: MOV dword ptr [EDX + 0x2c],EAX
// 0042af2f: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0042af33: JMP 0x0042ae52
//   XREF to: 0042ae52 (UNCONDITIONAL_JUMP)
// 0042af38: PUSH 0x1
//   Label: LAB_0042af38
// 0042af3a: PUSH 0x0
// 0042af3c: PUSH 0x163
// 0042af41: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042af44: PUSH -0x1
// 0042af46: ADD EAX,0x158
// 0042af4b: PUSH EAX
// 0042af4c: CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
//   XREF to: 005a0150 (UNCONDITIONAL_CALL)
// 0042af51: ADD ESP,0x14
// 0042af54: MOV ESP,EBP
// 0042af56: POP EBP
// 0042af57: POP EDI
// 0042af58: POP ESI
// 0042af59: POP EBX
// 0042af5a: RET

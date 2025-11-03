// Name: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
// Address: 0059c2f0
// Address Range: [[0059c2f0, 0059c5d1]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0(CDeformableModel * model_ptr, int bone_index, CVector3f * reference_position)
// Cross-references:
//   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 (0059d460) at 0059d90d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064eab7
//   TerminatedCString s_core_skeleton_cpp_0064eacc
//   TerminatedCString s_Out_of_memory_0064eae1
//   TerminatedCString s_core_skeleton_cpp_0064eaef
//   float FLOAT_00662ea0 = 0.00390625
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059df80
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a01d0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0480
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
          (CDeformableModel *model_ptr,int bone_index,CVector3f *reference_position)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDeformableModelInstance *this_ptr;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  SVert *pSVar7;
  SVert *pSVar8;
  ushort *puVar9;
  SVert *pSVar10;
  float local_6c;
  float local_68;
  float local_64;
  float local_48;
  int local_44;
  float local_40;
  CDeformableModel *local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  float local_18;
  float local_14;
  
  local_40 = 0.0;
  local_48 = 1e+30;
  local_30 = 0;
  local_44 = 0;
  if (1 < model_ptr->num_parts) {
    this_ptr = (CDeformableModelInstance *)
               shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22b4,"..\\core\\skeleton.cpp",0x5ef);
    if (this_ptr != (CDeformableModelInstance *)0x0) {
      this_ptr = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(this_ptr);
    }
    if (this_ptr == (CDeformableModelInstance *)0x0) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x5f0;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
    }
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a0480(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059df80(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb40(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a01d0(this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20(this_ptr);
    local_38 = 0;
    if (0 < model_ptr->num_parts) {
      local_3c = model_ptr;
      do {
        local_18 = 0.0;
        local_1c = 0;
        local_28 = 0;
        local_14 = 0.0;
        local_2c = local_30 * 0x12;
        if (0 < local_3c->parts[0].tri_counts[0]) {
          do {
            puVar9 = (ushort *)
                     ((int)&(model_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 + local_2c);
            puVar4 = puVar9 + 3;
            do {
              pSVar10 = model_ptr->vertex_data_ptr[0] + *puVar9;
              iVar5 = 0;
              pSVar7 = pSVar10;
              pSVar8 = pSVar10;
              while (iVar5 < (int)(uint)pSVar10->num_bone_influences) {
                if ((uint)pSVar8->bone_indices[0] == bone_index) {
                  local_14 = local_14 + pSVar7->bone_weights[0];
                  pSVar7 = (SVert *)pSVar7->bone_weights;
                  iVar5 = iVar5 + 1;
                  pSVar8 = (SVert *)pSVar8->bone_indices;
                }
                else {
                  pSVar7 = (SVert *)pSVar7->bone_weights;
                  iVar5 = iVar5 + 1;
                  pSVar8 = (SVert *)pSVar8->bone_indices;
                }
              }
              piVar6 = (int *)(this_ptr->field7_0x2234 + (uint)*puVar9 * 0xc);
              fVar1 = (float)*piVar6 * FLOAT_00662ea0 - local_6c;
              fVar3 = (float)piVar6[1] * FLOAT_00662ea0 - local_68;
              fVar2 = (float)piVar6[2] * FLOAT_00662ea0 - local_64;
              puVar9 = puVar9 + 1;
              local_1c = local_1c + 1;
              local_18 = fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 + local_18;
            } while (puVar9 != puVar4);
            local_30 = local_30 + 1;
            local_2c = local_2c + 0x12;
            local_28 = local_28 + 1;
          } while (local_28 < local_3c->parts[0].tri_counts[0]);
        }
        if (local_14 <= local_40) {
          if ((ABS(local_40) == 0.0) && (local_18 / (float)local_1c < local_48)) {
            local_44 = local_38;
            local_48 = local_18 / (float)local_1c;
          }
        }
        else {
          local_40 = local_14;
          local_44 = local_38;
        }
        local_3c = (CDeformableModel *)(local_3c->tri_count + 3);
        local_38 = local_38 + 1;
      } while (local_38 < model_ptr->num_parts);
    }
    g_CurrentDebugLine = 0x628;
    g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
    if (this_ptr != (CDeformableModelInstance *)0x0) {
      (*(code *)((this_ptr->motion_controller).vtable)->dtor)();
    }
    return local_44;
  }
  return 0;
}


// Assembly code:
// 0059c2f0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
// 0059c2f1: PUSH EDI
// 0059c2f2: PUSH EBP
// 0059c2f3: SUB ESP,0x60
// 0059c2f6: MOV EDI,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 0059c2fa: MOV EBX,0x7149f2ca
// 0059c2ff: XOR EDX,EDX
// 0059c301: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 0059c305: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 0059c309: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x48] (WRITE)
// 0059c30d: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0059c311: MOV EBP,dword ptr [EAX + 0x7140]
// 0059c317: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0059c31b: CMP EBP,0x2
// 0059c31e: JGE 0x0059c329
//   XREF to: 0059c329 (CONDITIONAL_JUMP)
// 0059c320: XOR EAX,EAX
// 0059c322: ADD ESP,0x60
// 0059c325: POP EBP
// 0059c326: POP EDI
// 0059c327: POP EBX
// 0059c328: RET
// 0059c329: PUSH 0x5ef
//   Label: LAB_0059c329
// 0059c32e: PUSH 0x64eab7
//   XREF to: 0064eab7 (DATA)
// 0059c333: PUSH 0x22b4
// 0059c338: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0059c33d: ADD ESP,0xc
// 0059c340: TEST EAX,EAX
// 0059c342: JZ 0x0059c34d
//   XREF to: 0059c34d (CONDITIONAL_JUMP)
// 0059c344: PUSH EAX
// 0059c345: CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)
// 0059c34a: ADD ESP,0x4
// 0059c34d: MOV dword ptr [ESP + 0x48],EAX
//   Label: LAB_0059c34d
//   XREF to: Stack[-0x24] (WRITE)
// 0059c351: TEST EAX,EAX
// 0059c353: JNZ 0x0059c377
//   XREF to: 0059c377 (CONDITIONAL_JUMP)
// 0059c355: MOV EAX,0x64eacc
//   XREF to: 0064eacc (PARAM)
// 0059c35a: MOV EDX,0x5f0
// 0059c35f: PUSH 0x64eae1
//   XREF to: 0064eae1 (DATA)
// 0059c364: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0059c369: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0059c36f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059c374: ADD ESP,0x4
// 0059c377: PUSH ESI
//   Label: LAB_0059c377
// 0059c378: MOV ECX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 0059c37c: PUSH ECX
// 0059c37d: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x24] (READ)
// 0059c381: PUSH EBX
// 0059c382: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0480
//   XREF to: 005a0480 (UNCONDITIONAL_CALL)
// 0059c387: ADD ESP,0x8
// 0059c38a: PUSH EBX
// 0059c38b: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 0059c390: ADD ESP,0x4
// 0059c393: PUSH EBX
// 0059c394: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 0059c399: ADD ESP,0x4
// 0059c39c: PUSH 0x0
// 0059c39e: PUSH EBX
// 0059c39f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 0059c3a4: ADD ESP,0x8
// 0059c3a7: PUSH EDI
// 0059c3a8: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 0059c3ac: PUSH EAX
// 0059c3ad: PUSH EBX
// 0059c3ae: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 0059c3b3: ADD ESP,0xc
// 0059c3b6: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 0059c3ba: XOR ECX,ECX
// 0059c3bc: MOV EBX,dword ptr [EAX + 0x7140]
// 0059c3c2: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 0059c3c6: TEST EBX,EBX
// 0059c3c8: JLE 0x0059c59d
//   XREF to: 0059c59d (CONDITIONAL_JUMP)
// 0059c3ce: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0059c3d2: XOR EAX,EAX
//   Label: LAB_0059c3d2
// 0059c3d4: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0059c3d8: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059c3dc: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0059c3e0: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0059c3e4: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x3c] (READ)
// 0059c3e8: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x30] (READ)
// 0059c3ec: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0059c3f0: IMUL EAX,ESI,0x12
// 0059c3f3: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059c3f7: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x3c] (READ)
// 0059c3fb: CMP dword ptr [EAX + 0x7164],0x0
// 0059c402: JLE 0x0059c481
//   XREF to: 0059c481 (CONDITIONAL_JUMP)
// 0059c408: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_0059c408
//   XREF to: Stack[0x4] (READ)
// 0059c40c: MOV EBP,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x2c] (READ)
// 0059c410: MOV EAX,dword ptr [EAX + 0x7c]
// 0059c413: ADD EAX,EBP
// 0059c415: MOV EBP,EAX
// 0059c417: ADD EAX,0x6
// 0059c41a: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0059c41e: XOR EAX,EAX
//   Label: LAB_0059c41e
// 0059c420: MOV AX,word ptr [EBP]
// 0059c424: IMUL EAX,EAX,0x34
// 0059c427: MOV ESI,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 0059c42b: MOV ESI,dword ptr [ESI + 0x40]
// 0059c42e: ADD ESI,EAX
// 0059c430: MOV EBX,ESI
// 0059c432: MOV EDX,ESI
// 0059c434: XOR EAX,EAX
// 0059c436: XOR ECX,ECX
//   Label: LAB_0059c436
// 0059c438: MOV CL,byte ptr [ESI]
// 0059c43a: CMP EAX,ECX
// 0059c43c: JGE 0x0059c4a7
//   XREF to: 0059c4a7 (CONDITIONAL_JUMP)
// 0059c442: XOR ECX,ECX
// 0059c444: MOV CL,byte ptr [EBX + 0x1]
// 0059c447: CMP ECX,EDI
// 0059c449: JZ 0x0059c52b
//   XREF to: 0059c52b (CONDITIONAL_JUMP)
// 0059c44f: ADD EDX,0x4
// 0059c452: INC EAX
// 0059c453: INC EBX
// 0059c454: JMP 0x0059c436
//   XREF to: 0059c436 (UNCONDITIONAL_JUMP)
// 0059c456: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_0059c456
//   XREF to: Stack[-0x2c] (READ)
// 0059c45a: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x30] (READ)
// 0059c45e: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x28] (READ)
// 0059c462: INC EDX
// 0059c463: ADD EAX,0x12
// 0059c466: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0059c46a: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x34] (READ)
// 0059c46e: INC ECX
// 0059c46f: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059c473: MOV EBX,dword ptr [EDX + 0x7164]
// 0059c479: MOV dword ptr [ESP + 0x48],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0059c47d: CMP ECX,EBX
// 0059c47f: JL 0x0059c408
//   XREF to: 0059c408 (CONDITIONAL_JUMP)
// 0059c481: FLD float ptr [ESP + 0x5c]
//   Label: LAB_0059c481
//   XREF to: Stack[-0x14] (READ)
// 0059c485: FCOMP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x40] (READ)
// 0059c489: FNSTSW AX
// 0059c48b: SAHF
// 0059c48c: JBE 0x0059c540
//   XREF to: 0059c540 (CONDITIONAL_JUMP)
// 0059c492: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (READ)
// 0059c496: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0059c49a: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x38] (READ)
// 0059c49e: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0059c4a2: JMP 0x0059c577
//   XREF to: 0059c577 (UNCONDITIONAL_JUMP)
// 0059c4a7: XOR EDX,EDX
//   Label: LAB_0059c4a7
// 0059c4a9: MOV DX,word ptr [EBP]
// 0059c4ad: IMUL EDX,EDX,0xc
// 0059c4b0: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x24] (READ)
// 0059c4b4: MOV EAX,dword ptr [EAX + 0x2234]
// 0059c4ba: LEA EBX,[ESP + 0x10]
//   XREF to: Stack[-0x60] (DATA)
// 0059c4be: ADD EAX,EDX
// 0059c4c0: FILD dword ptr [EAX]
// 0059c4c2: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059c4c8: FSTP float ptr [EBX]
//   XREF to: Stack[-0x60] (DATA)
// 0059c4ca: FILD dword ptr [EAX + 0x4]
// 0059c4cd: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059c4d3: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x5c] (WRITE)
// 0059c4d6: FILD dword ptr [EAX + 0x8]
// 0059c4d9: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059c4df: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x58] (WRITE)
// 0059c4e2: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x60] (READ)
// 0059c4e6: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x6c] (READ)
// 0059c4ea: FMUL ST0
// 0059c4ec: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x5c] (READ)
// 0059c4f0: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 0059c4f4: FMUL ST0
// 0059c4f6: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x58] (READ)
// 0059c4fa: FXCH
// 0059c4fc: FADDP ST2,ST0
// 0059c4fe: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[-0x64] (READ)
// 0059c502: FMUL ST0
// 0059c504: ADD EBP,0x2
// 0059c507: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1c] (READ)
// 0059c50b: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x20] (READ)
// 0059c50f: FADDP
// 0059c511: INC EAX
// 0059c512: FADD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 0059c516: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059c51a: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (WRITE)
// 0059c51e: CMP EBP,EDX
// 0059c520: JZ 0x0059c456
//   XREF to: 0059c456 (CONDITIONAL_JUMP)
// 0059c526: JMP 0x0059c41e
//   XREF to: 0059c41e (UNCONDITIONAL_JUMP)
// 0059c52b: FLD float ptr [ESP + 0x5c]
//   Label: LAB_0059c52b
//   XREF to: Stack[-0x14] (READ)
// 0059c52f: FADD float ptr [EDX + 0x4]
// 0059c532: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x14] (WRITE)
// 0059c536: ADD EDX,0x4
// 0059c539: INC EAX
// 0059c53a: INC EBX
// 0059c53b: JMP 0x0059c436
//   XREF to: 0059c436 (UNCONDITIONAL_JUMP)
// 0059c540: TEST dword ptr [ESP + 0x30],0x7fffffff
//   Label: LAB_0059c540
//   XREF to: Stack[-0x40] (READ)
// 0059c548: JNZ 0x0059c577
//   XREF to: 0059c577 (CONDITIONAL_JUMP)
// 0059c54a: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1c] (READ)
// 0059c54e: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0059c552: FILD dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x10] (READ)
// 0059c556: FDIVR float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 0059c55a: FST float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (WRITE)
// 0059c55e: FCOMP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x48] (READ)
// 0059c562: FNSTSW AX
// 0059c564: SAHF
// 0059c565: JNC 0x0059c577
//   XREF to: 0059c577 (CONDITIONAL_JUMP)
// 0059c567: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 0059c56b: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0059c56f: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x38] (READ)
// 0059c573: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0059c577: MOV ESI,dword ptr [ESP + 0x34]
//   Label: LAB_0059c577
//   XREF to: Stack[-0x3c] (READ)
// 0059c57b: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x38] (READ)
// 0059c57f: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 0059c583: ADD ESI,0x60
// 0059c586: INC EBP
// 0059c587: MOV ECX,dword ptr [EDX + 0x7140]
// 0059c58d: MOV dword ptr [ESP + 0x34],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 0059c591: MOV dword ptr [ESP + 0x38],EBP
//   XREF to: Stack[-0x38] (WRITE)
// 0059c595: CMP EBP,ECX
// 0059c597: JL 0x0059c3d2
//   XREF to: 0059c3d2 (CONDITIONAL_JUMP)
// 0059c59d: MOV ESI,0x628
//   Label: LAB_0059c59d
// 0059c5a2: MOV EBX,0x64eaef
//   XREF to: 0064eaef (DATA)
// 0059c5a7: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x24] (READ)
// 0059c5ab: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 0059c5b1: MOV dword ptr [0x0067d20c],EBX
//   XREF to: 0067d20c (WRITE)
// 0059c5b7: TEST EDI,EDI
// 0059c5b9: JZ 0x0059c5c6
//   XREF to: 0059c5c6 (CONDITIONAL_JUMP)
// 0059c5bb: PUSH 0x2
// 0059c5bd: MOV EAX,dword ptr [EDI + 0x50]
// 0059c5c0: PUSH EDI
// 0059c5c1: CALL dword ptr [EAX]
// 0059c5c3: ADD ESP,0x8
// 0059c5c6: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_0059c5c6
//   XREF to: Stack[-0x44] (READ)
// 0059c5ca: POP ESI
// 0059c5cb: ADD ESP,0x60
// 0059c5ce: POP EBP
// 0059c5cf: POP EDI
// 0059c5d0: POP EBX
// 0059c5d1: RET

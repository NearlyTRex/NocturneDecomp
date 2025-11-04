// Name: core_bugs.cpp_FUN_00425fe0
// Address: 00425fe0
// Address Range: [[00425fe0, 00426400]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00425fe0()
// Cross-references:
//   core_bugs.cpp_FUN_004250f0 (004250f0) at 0042518c [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425cc0 (00425cc0) at 00425fca [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00616e03 = 2
//   double DOUBLE_00616e0b = 0.0500000000000000
//   float FLOAT_00616e13 = 0.5
//   undefined4 DAT_0065b5d4
//   undefined4 g_CCharacterClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_bugs.cpp_FUN_004257f0
//   core_bugs.cpp_FUN_004268e0
//   core_bugs.cpp_FUN_004272f0
//   core_bugs.cpp_FUN_004276c0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   core_path.cpp_FUN_00548500
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a01d0
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_00425fe0(undefined4 param_1, undefined4 param_2)
    */

void core_bugs_cpp_FUN_00425fe0(void)

{
  CLocation *dest_position;
  uint class_name_hash;
  int iVar1;
  CDemonActor *pCVar2;
  CPathMap *this_ptr;
  BADSPACEBASE *in_ESP;
  CCharacter *pCVar3;
  undefined4 *puVar4;
  float *pfVar5;
  char *pcVar6;
  byte bVar7;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CMatrix3x4f *in_stack_fffffe78;
  CMatrix3x4f CStack_14c;
  CMatrix3x4f local_11c;
  undefined4 auStack_ec [12];
  CMatrix3x3f CStack_bc;
  CVector3f CStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f CStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float *pfStack_1c;
  float *local_18;
  
  bVar7 = 0;
  if (*(int *)(in_stack_00000004[1].cloth_data + 0x423c) != 0) {
    iVar1 = 0;
    pfVar5 = (float *)0x0;
    pCVar3 = in_stack_00000004;
    if (0 < *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24)) {
      do {
        if (-1 < *(int *)(pCVar3[1].base_actor.create_event + 0x54)) {
          pfVar5 = (float *)((int)pfVar5 + 1);
        }
        iVar1 = iVar1 + 1;
        pCVar3 = (CCharacter *)&(pCVar3->base_actor).orient_matrix.m[0].y;
      } while (iVar1 < *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24));
    }
    if ((int)pfVar5 < *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24)) {
      iVar1 = *(int *)(in_stack_00000004[1].cloth_data + 0x423c);
      local_4c = (in_stack_00000004->base_actor).location.position.x - *(float *)(iVar1 + 0x20);
      local_48 = (in_stack_00000004->base_actor).location.position.y - *(float *)(iVar1 + 0x24);
      local_44 = (in_stack_00000004->base_actor).location.position.z - *(float *)(iVar1 + 0x28);
      if ((((float)DOUBLE_00616e03 < ABS(local_48)) || ((float)DOUBLE_00616e03 < ABS(local_4c))) ||
         ((float)DOUBLE_00616e03 < ABS(local_44))) {
        this_ptr = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].cloth_data + 0x423c) + 0x154)
                               + 0xbc))();
        if (this_ptr == (CPathMap *)0x0) {
          this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
        }
        dest_position = &(in_stack_00000004->base_actor).location;
        iVar1 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                          (this_ptr,&dest_position->position,&CStack_64,
                           (in_stack_00000004->base_actor).field7_0x6c);
        if (iVar1 != 0) {
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_bc,&CStack_64);
          CStack_94.z = _DAT_0065b5d4 * in_stack_00000008;
          CStack_94.x = 0.0;
          CStack_94.y = 0.0;
          pfStack_1c = (float *)CStack_94.z;
          core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_bc,&CStack_7c,&CStack_94)
          ;
          fStack_40 = (dest_position->position).x;
          pfStack_1c = &(in_stack_00000004->base_actor).location.position.y;
          fStack_3c = *pfStack_1c;
          local_18 = &(in_stack_00000004->base_actor).location.position.z;
          fStack_38 = *local_18;
          core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
          fStack_70 = (dest_position->position).x;
          fStack_6c = *pfStack_1c;
          fStack_68 = *local_18;
          (dest_position->position).x = fStack_40;
          (in_stack_00000004->base_actor).location.position.y = fStack_3c;
          (in_stack_00000004->base_actor).location.position.z = fStack_38;
          core_bugs_cpp_FUN_004276c0();
        }
        core_bugs_cpp_FUN_004257f0();
      }
      else {
        core_bugs_cpp_FUN_004257f0();
      }
    }
    if ((0 < (int)pfVar5) &&
       (in_stack_00000008 =
             in_stack_00000004[2].model.bone_world_matrices[0x49].m[2].x - in_stack_00000008,
       in_stack_00000004[2].model.bone_world_matrices[0x49].m[2].x = in_stack_00000008,
       class_name_hash = g_CCharacterClassInfo.name_hash, in_stack_00000008 <= 0.0)) {
      pCVar2 = *(CDemonActor **)(in_stack_00000004[1].cloth_data + 0x423c);
      in_stack_00000004[2].model.bone_world_matrices[0x49].m[2].x = 0.2;
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar2,class_name_hash);
      if (pCVar2 != (CDemonActor *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xfffffe78);
        local_18 = pfVar5;
        (*pCVar2->vtable[1].playAmbientSoundWithVolume)
                  (pCVar2,&stack0xfffffe78,(float)in_stack_fffffe78);
      }
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_11c,(CVector3f *)(*(int *)(in_stack_00000004[1].cloth_data + 0x423c) + 0x20),
               (CVector3f *)(*(int *)(in_stack_00000004[1].cloth_data + 0x423c) + 0x30));
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
              (&CStack_14c,&(in_stack_00000004->base_actor).location.position,
               (CVector3f *)&(in_stack_00000004->base_actor).orient);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_11c,&CStack_14c,in_stack_fffffe78);
    puVar4 = auStack_ec;
    pcVar6 = in_stack_00000004[1].cloth_data + 0x4244;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pcVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
      pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
    }
    if (*(int *)(in_stack_00000004[1].cloth_data + 0x4274) !=
        (*(CDeformableModelInstance **)(in_stack_00000004[1].cloth_data + 0x4240))->field13_0x2230)
    {
      core_skeleton_cpp_CDeformableModelInstance_FUN_005a01d0
                (*(CDeformableModelInstance **)(in_stack_00000004[1].cloth_data + 0x4240));
    }
    iVar1 = 0;
    if (0 < *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24)) {
      do {
        iVar1 = iVar1 + 1;
        core_bugs_cpp_FUN_004268e0();
      } while (iVar1 < *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24));
    }
    core_bugs_cpp_FUN_004272f0();
    fStack_58 = in_stack_00000004[2].model.bone_world_matrices[0x48].m[2].z +
                in_stack_00000004[2].model.bone_world_matrices[0x49].m[0].y;
    fStack_54 = in_stack_00000004[2].model.bone_world_matrices[0x49].m[0].w +
                in_stack_00000004[2].model.bone_world_matrices[0x49].m[0].z;
    fStack_88 = fStack_58 * FLOAT_00616e13;
    fStack_50 = in_stack_00000004[2].model.bone_world_matrices[0x49].m[0].x +
                in_stack_00000004[2].model.bone_world_matrices[0x49].m[1].w;
    fStack_84 = fStack_54 * FLOAT_00616e13;
    fStack_80 = fStack_50 * FLOAT_00616e13;
    fStack_34 = (in_stack_00000004->base_actor).location.position.x + fStack_88;
    fStack_30 = (in_stack_00000004->base_actor).location.position.y + fStack_84;
    fStack_2c = (in_stack_00000004->base_actor).location.position.z + fStack_80;
    core_bugs_cpp_FUN_004276c0();
    return;
  }
  in_stack_00000004 = in_stack_00000004 + 1;
  (in_stack_00000004->base_actor).create_event[0x20] = '\0';
  (in_stack_00000004->base_actor).create_event[0x21] = '\0';
  (in_stack_00000004->base_actor).create_event[0x22] = '\0';
  (in_stack_00000004->base_actor).create_event[0x23] = '\0';
  return;
}


// Assembly code:
// 00425fe0: PUSH EBX
//   Label: core_bugs.cpp_FUN_00425fe0
// 00425fe1: PUSH ESI
// 00425fe2: PUSH EDI
// 00425fe3: PUSH EBP
// 00425fe4: MOV EBP,ESP
// 00425fe6: SUB ESP,0x174
// 00425fec: AND ESP,0xfffffff8
// 00425fef: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00425ff2: MOV EDX,dword ptr [EBX + 0x12af8]
// 00425ff8: TEST EDX,EDX
// 00425ffa: JZ 0x00426216
//   XREF to: 00426216 (CONDITIONAL_JUMP)
// 00426000: MOV ECX,dword ptr [EBX + 0xbec0]
// 00426006: XOR EAX,EAX
// 00426008: XOR EDI,EDI
// 0042600a: TEST ECX,ECX
// 0042600c: JLE 0x00426028
//   XREF to: 00426028 (CONDITIONAL_JUMP)
// 0042600e: MOV ESI,EBX
// 00426010: CMP dword ptr [ESI + 0xbef0],0x0
//   Label: LAB_00426010
// 00426017: JL 0x0042601a
//   XREF to: 0042601a (CONDITIONAL_JUMP)
// 00426019: INC EDI
// 0042601a: INC EAX
//   Label: LAB_0042601a
// 0042601b: MOV EDX,dword ptr [EBX + 0xbec0]
// 00426021: ADD ESI,0x40
// 00426024: CMP EAX,EDX
// 00426026: JL 0x00426010
//   XREF to: 00426010 (CONDITIONAL_JUMP)
// 00426028: CMP EDI,dword ptr [EBX + 0xbec0]
//   Label: LAB_00426028
// 0042602e: JL 0x00426223
//   XREF to: 00426223 (CONDITIONAL_JUMP)
// 00426034: TEST EDI,EDI
//   Label: LAB_00426034
// 00426036: JLE 0x004260b8
//   XREF to: 004260b8 (CONDITIONAL_JUMP)
// 0042603c: FLD float ptr [EBX + 0x199f4]
// 00426042: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00426045: FST float ptr [EBX + 0x199f4]
// 0042604b: FLDZ
// 0042604d: FCOMPP
// 0042604f: FNSTSW AX
// 00426051: SAHF
// 00426052: JC 0x004260b8
//   XREF to: 004260b8 (CONDITIONAL_JUMP)
// 00426054: MOV ECX,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 0042605a: PUSH ECX
// 0042605b: MOV ESI,dword ptr [EBX + 0x12af8]
// 00426061: PUSH ESI
// 00426062: MOV dword ptr [EBX + 0x199f4],0x3e4ccccd
// 0042606c: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00426071: MOV ESI,EAX
// 00426073: ADD ESP,0x8
// 00426076: TEST EAX,EAX
// 00426078: JZ 0x004260b8
//   XREF to: 004260b8 (CONDITIONAL_JUMP)
// 0042607a: MOV EAX,ESP
// 0042607c: PUSH EAX
// 0042607d: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00426082: ADD ESP,0x4
// 00426085: MOV dword ptr [ESP + 0x170],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0042608c: MOV EAX,ESP
// 0042608e: FILD dword ptr [ESP + 0x170]
//   XREF to: Stack[-0x18] (READ)
// 00426095: FMUL double ptr [0x00616e0b]
//   XREF to: 00616e0b (READ)
// 0042609b: PUSH EAX
// 0042609c: MOV dword ptr [ESP + 0x38],EBX
//   XREF to: Stack[-0x154] (WRITE)
// 004260a0: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x150] (WRITE)
// 004260a4: PUSH ESI
// 004260a5: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x184] (WRITE)
// 004260a9: MOV EDX,dword ptr [ESI + 0x154]
// 004260af: CALL dword ptr [EDX + 0x11c]
// 004260b5: ADD ESP,0x8
// 004260b8: MOV EAX,dword ptr [EBX + 0x12af8]
//   Label: LAB_004260b8
// 004260be: LEA EDX,[EAX + 0x30]
// 004260c1: PUSH EDX
// 004260c2: ADD EAX,0x20
// 004260c5: PUSH EAX
// 004260c6: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x11c] (DATA)
// 004260ca: PUSH EAX
// 004260cb: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 004260d0: ADD ESP,0xc
// 004260d3: LEA EAX,[EBX + 0x30]
// 004260d6: PUSH EAX
// 004260d7: LEA EAX,[EBX + 0x20]
// 004260da: PUSH EAX
// 004260db: LEA EAX,[ESP + 0x44]
// 004260df: PUSH EAX
// 004260e0: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 004260e5: ADD ESP,0xc
// 004260e8: LEA EAX,[ESP + 0x3c]
// 004260ec: PUSH EAX
// 004260ed: LEA EAX,[ESP + 0x70]
// 004260f1: PUSH EAX
// 004260f2: LEA ESI,[ESP + 0xa4]
// 004260f9: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004260fe: MOV ECX,0xc
// 00426103: LEA ESI,[ESP + 0xa4]
// 0042610a: LEA EDI,[EBX + 0x12b00]
// 00426110: ADD ESP,0x8
// 00426113: MOVSD.REP ES:EDI,ESI
// 00426115: MOV EAX,dword ptr [EBX + 0x12afc]
// 0042611b: MOV EDI,dword ptr [EBX + 0x12b30]
// 00426121: CMP EDI,dword ptr [EAX + 0x2230]
// 00426127: JZ 0x00426133
//   XREF to: 00426133 (CONDITIONAL_JUMP)
// 00426129: PUSH EDI
// 0042612a: PUSH EAX
// 0042612b: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 00426130: ADD ESP,0x8
// 00426133: MOV ECX,dword ptr [EBX + 0xbec0]
//   Label: LAB_00426133
// 00426139: XOR EDI,EDI
// 0042613b: TEST ECX,ECX
// 0042613d: JLE 0x00426160
//   XREF to: 00426160 (CONDITIONAL_JUMP)
// 0042613f: LEA ESI,[EBX + 0xbec4]
// 00426145: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_00426145
//   XREF to: Stack[0x8] (READ)
// 00426148: PUSH ESI
// 00426149: PUSH EBX
// 0042614a: INC EDI
// 0042614b: CALL core_bugs.cpp_FUN_004268e0
//   XREF to: 004268e0 (UNCONDITIONAL_CALL)
// 00426150: ADD ESI,0x40
// 00426153: MOV ECX,dword ptr [EBX + 0xbec0]
// 00426159: ADD ESP,0xc
// 0042615c: CMP EDI,ECX
// 0042615e: JL 0x00426145
//   XREF to: 00426145 (CONDITIONAL_JUMP)
// 00426160: PUSH EBX
//   Label: LAB_00426160
// 00426161: CALL core_bugs.cpp_FUN_004272f0
//   XREF to: 004272f0 (UNCONDITIONAL_CALL)
// 00426166: LEA EAX,[EBX + 0x199cc]
// 0042616c: LEA ESI,[EBX + 0x199d8]
// 00426172: FLD float ptr [EAX]
// 00426174: FADD float ptr [ESI]
// 00426176: ADD ESP,0x4
// 00426179: FST float ptr [ESP + 0x130]
// 00426180: FLD float ptr [EAX + 0x4]
// 00426183: FADD float ptr [ESI + 0x4]
// 00426186: FXCH
// 00426188: FLD float ptr [0x00616e13]
//   XREF to: 00616e13 (READ)
// 0042618e: FXCH
// 00426190: FMUL ST1
// 00426192: FXCH ST2
// 00426194: FST float ptr [ESP + 0x134]
// 0042619b: FLD float ptr [EAX + 0x8]
// 0042619e: FADD float ptr [ESI + 0x8]
// 004261a1: FXCH
// 004261a3: FMUL ST2
// 004261a5: FXCH
// 004261a7: FST float ptr [ESP + 0x138]
// 004261ae: FMULP ST2
// 004261b0: LEA EAX,[EBX + 0x20]
// 004261b3: FXCH ST2
// 004261b5: FSTP float ptr [ESP + 0x100]
// 004261bc: FXCH
// 004261be: FSTP float ptr [ESP + 0x104]
// 004261c5: FSTP float ptr [ESP + 0x108]
// 004261cc: FLD float ptr [EAX]
// 004261ce: FADD float ptr [ESP + 0x100]
// 004261d5: FSTP float ptr [ESP + 0x154]
// 004261dc: FLD float ptr [EAX + 0x4]
// 004261df: FADD float ptr [ESP + 0x104]
// 004261e6: FSTP float ptr [ESP + 0x158]
// 004261ed: FLD float ptr [EAX + 0x8]
// 004261f0: LEA EAX,[ESP + 0x154]
// 004261f7: PUSH EAX
// 004261f8: FADD float ptr [ESP + 0x10c]
// 004261ff: PUSH EBX
// 00426200: FSTP float ptr [ESP + 0x164]
// 00426207: CALL core_bugs.cpp_FUN_004276c0
//   XREF to: 004276c0 (UNCONDITIONAL_CALL)
// 0042620c: ADD ESP,0x8
// 0042620f: MOV ESP,EBP
// 00426211: POP EBP
// 00426212: POP EDI
// 00426213: POP ESI
// 00426214: POP EBX
// 00426215: RET
// 00426216: MOV dword ptr [EBX + 0xbebc],EDX
//   Label: LAB_00426216
// 0042621c: MOV ESP,EBP
// 0042621e: POP EBP
// 0042621f: POP EDI
// 00426220: POP ESI
// 00426221: POP EBX
// 00426222: RET
// 00426223: LEA EAX,[EBX + 0x20]
//   Label: LAB_00426223
// 00426226: MOV ESI,dword ptr [EBX + 0x12af8]
// 0042622c: FLD float ptr [EAX]
// 0042622e: FSUB float ptr [ESI + 0x20]
// 00426231: FSTP float ptr [ESP + 0x13c]
//   XREF to: Stack[-0x4c] (WRITE)
// 00426238: FLD float ptr [EAX + 0x4]
// 0042623b: FSUB float ptr [ESI + 0x24]
// 0042623e: FST float ptr [ESP + 0x140]
//   XREF to: Stack[-0x48] (WRITE)
// 00426245: FLD float ptr [EAX + 0x8]
// 00426248: FXCH
// 0042624a: FABS
// 0042624c: FXCH
// 0042624e: FSUB float ptr [ESI + 0x28]
// 00426251: FSTP float ptr [ESP + 0x144]
//   XREF to: Stack[-0x44] (WRITE)
// 00426258: FCOMP double ptr [0x00616e03]
//   XREF to: 00616e03 (READ)
// 0042625e: FNSTSW AX
// 00426260: SAHF
// 00426261: JBE 0x004263c3
//   XREF to: 004263c3 (CONDITIONAL_JUMP)
// 00426267: MOV EAX,dword ptr [EBX + 0x12af8]
//   Label: LAB_00426267
// 0042626d: PUSH EAX
// 0042626e: MOV EDX,dword ptr [EAX + 0x154]
// 00426274: CALL dword ptr [EDX + 0xbc]
// 0042627a: ADD ESP,0x4
// 0042627d: MOV EDX,EAX
// 0042627f: TEST EAX,EAX
// 00426281: JNZ 0x00426297
//   XREF to: 00426297 (CONDITIONAL_JUMP)
// 00426283: MOV EAX,dword ptr [EBX + 0x12af8]
// 00426289: ADD EAX,0x20
// 0042628c: PUSH EAX
// 0042628d: CALL core_path.cpp_FUN_00548500
//   XREF to: 00548500 (UNCONDITIONAL_CALL)
// 00426292: ADD ESP,0x4
// 00426295: MOV EDX,EAX
// 00426297: MOV ESI,dword ptr [EBX + 0x6c]
//   Label: LAB_00426297
// 0042629a: PUSH ESI
// 0042629b: LEA EAX,[ESP + 0x128]
// 004262a2: PUSH EAX
// 004262a3: LEA ESI,[EBX + 0x20]
// 004262a6: PUSH ESI
// 004262a7: PUSH EDX
// 004262a8: CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   XREF to: 00547d00 (UNCONDITIONAL_CALL)
// 004262ad: ADD ESP,0x10
// 004262b0: TEST EAX,EAX
// 004262b2: JZ 0x004263b5
//   XREF to: 004263b5 (CONDITIONAL_JUMP)
// 004262b8: LEA EAX,[ESP + 0x124]
// 004262bf: PUSH EAX
// 004262c0: LEA EAX,[ESP + 0xd0]
// 004262c7: PUSH EAX
// 004262c8: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 004262cd: FLD float ptr [0x0065b5d4]
//   XREF to: 0065b5d4 (READ)
// 004262d3: ADD ESP,0x8
// 004262d6: XOR EAX,EAX
// 004262d8: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004262db: MOV dword ptr [ESP + 0xf4],EAX
// 004262e2: MOV dword ptr [ESP + 0xf8],EAX
// 004262e9: FSTP float ptr [ESP + 0x16c]
// 004262f0: MOV EAX,dword ptr [ESP + 0x16c]
// 004262f7: MOV dword ptr [ESP + 0xfc],EAX
// 004262fe: LEA EAX,[ESP + 0xf4]
// 00426305: PUSH EAX
// 00426306: LEA EAX,[ESP + 0x110]
// 0042630d: PUSH EAX
// 0042630e: LEA EAX,[ESP + 0xd4]
// 00426315: PUSH EAX
// 00426316: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0042631b: ADD ESP,0xc
// 0042631e: MOV EAX,dword ptr [ESI]
// 00426320: MOV dword ptr [ESP + 0x148],EAX
// 00426327: LEA EAX,[ESI + 0x4]
// 0042632a: MOV dword ptr [ESP + 0x16c],EAX
// 00426331: MOV EAX,dword ptr [EAX]
// 00426333: MOV dword ptr [ESP + 0x14c],EAX
// 0042633a: LEA EAX,[ESI + 0x8]
// 0042633d: MOV dword ptr [ESP + 0x170],EAX
// 00426344: MOV EAX,dword ptr [EAX]
// 00426346: MOV dword ptr [ESP + 0x150],EAX
// 0042634d: LEA EAX,[ESP + 0x10c]
// 00426354: PUSH EAX
// 00426355: PUSH EBX
// 00426356: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 0042635b: ADD ESP,0x8
// 0042635e: MOV EAX,dword ptr [ESI]
// 00426360: MOV dword ptr [ESP + 0x118],EAX
// 00426367: MOV EAX,dword ptr [ESP + 0x16c]
// 0042636e: MOV EAX,dword ptr [EAX]
// 00426370: MOV dword ptr [ESP + 0x11c],EAX
// 00426377: MOV EAX,dword ptr [ESP + 0x170]
// 0042637e: MOV EAX,dword ptr [EAX]
// 00426380: MOV dword ptr [ESP + 0x120],EAX
// 00426387: MOV EAX,dword ptr [ESP + 0x148]
// 0042638e: MOV dword ptr [ESI],EAX
// 00426390: MOV EAX,dword ptr [ESP + 0x14c]
// 00426397: MOV dword ptr [ESI + 0x4],EAX
// 0042639a: MOV EAX,dword ptr [ESP + 0x150]
// 004263a1: MOV dword ptr [ESI + 0x8],EAX
// 004263a4: LEA EAX,[ESP + 0x118]
// 004263ab: PUSH EAX
// 004263ac: PUSH EBX
// 004263ad: CALL core_bugs.cpp_FUN_004276c0
//   XREF to: 004276c0 (UNCONDITIONAL_CALL)
// 004263b2: ADD ESP,0x8
// 004263b5: PUSH EBX
//   Label: LAB_004263b5
// 004263b6: CALL core_bugs.cpp_FUN_004257f0
//   XREF to: 004257f0 (UNCONDITIONAL_CALL)
// 004263bb: ADD ESP,0x4
// 004263be: JMP 0x00426034
//   XREF to: 00426034 (UNCONDITIONAL_JUMP)
// 004263c3: FLD float ptr [ESP + 0x13c]
//   Label: LAB_004263c3
//   XREF to: Stack[-0x4c] (READ)
// 004263ca: FABS
// 004263cc: FCOMP double ptr [0x00616e03]
//   XREF to: 00616e03 (READ)
// 004263d2: FNSTSW AX
// 004263d4: SAHF
// 004263d5: JA 0x00426267
//   XREF to: 00426267 (CONDITIONAL_JUMP)
// 004263db: FLD float ptr [ESP + 0x144]
//   XREF to: Stack[-0x44] (READ)
// 004263e2: FABS
// 004263e4: FCOMP double ptr [0x00616e03]
//   XREF to: 00616e03 (READ)
// 004263ea: FNSTSW AX
// 004263ec: SAHF
// 004263ed: JA 0x00426267
//   XREF to: 00426267 (CONDITIONAL_JUMP)
// 004263f3: PUSH EBX
// 004263f4: CALL core_bugs.cpp_FUN_004257f0
//   XREF to: 004257f0 (UNCONDITIONAL_CALL)
// 004263f9: ADD ESP,0x4
// 004263fc: JMP 0x00426034
//   XREF to: 00426034 (UNCONDITIONAL_JUMP)

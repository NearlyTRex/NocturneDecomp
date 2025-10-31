// Name: core_moloch.cpp_FUN_005293b0
// Address: 005293b0
// Address Range: [[005293b0, 0052974a]]
// Convention: unknown
// Signature: undefined core_moloch.cpp_FUN_005293b0()
// Cross-references:
//   core_moloch.cpp_FUN_00528d20 (00528d20) at 0052905b [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00639e45
//   undefined4 DAT_00639e4d
//   undefined4 DAT_00639e55
//   undefined4 DAT_00639e5d
//   undefined4 DAT_00639e65
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_actor.cpp_FUN_0040cd70
//   core_charactr.cpp_CCharacter_FUN_0042ede0
//   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_moloch.cpp_FUN_005293b0(undefined4 param_1, undefined4 param_2)
    */

void core_moloch_cpp_FUN_005293b0
               (undefined4 param_1,undefined4 param_2,float unaff_EBX,undefined4 param_4,
               CCharacter *param_5,float param_6)

{
  CLocation *pCVar1;
  CHero *pCVar2;
  CHero *pCVar3;
  CCharacter *pCVar4;
  CPathMap *this_ptr;
  int iVar5;
  float fVar6;
  CVector3f *pCVar7;
  uint uVar8;
  BADSPACEBASE *in_ESP;
  float unaff_retaddr;
  int in_stack_ffffff74;
  float local_70;
  undefined8 local_6c;
  undefined4 uStack_5c;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  float local_40;
  float local_3c;
  float fStack_38;
  CVector3f CStack_34;
  undefined4 local_24;
  undefined4 local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = 0x3e800000;
  local_24 = 0x3f490fdb;
  pCVar2 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40(param_5[1].base_actor.actor_name + 8,0,0x2c);
  iVar5 = g_LocalHeroIndex;
  if ((*(int *)(param_5[2].cloth_data + 0x54f0) != 0) &&
     (*(int *)(param_5[2].cloth_data + 0x54f0) == 1)) {
    pCVar3 = g_HeroActors[g_LocalHeroIndex];
    pCVar1 = &(param_5->base_actor).location;
    local_6c._0_4_ =
         (param_5->base_actor).location.position.y -
         (pCVar3->base_character).base_actor.location.position.y;
    local_6c._4_4_ =
         (param_5->base_actor).location.position.z -
         (pCVar3->base_character).base_actor.location.position.z;
    local_40 = (pCVar2->base_character).base_actor.location.position.x - (pCVar1->position).x;
    local_3c = (pCVar2->base_character).base_actor.location.position.y -
               (param_5->base_actor).location.position.y;
    fStack_38 = (pCVar2->base_character).base_actor.location.position.z -
                (param_5->base_actor).location.position.z;
    local_70 = (pCVar1->position).x - (pCVar3->base_character).base_actor.location.position.x;
    if (&local_70 != &local_40) {
      local_70 = local_40;
      local_6c._0_4_ = local_3c;
      local_6c._4_4_ = fStack_38;
    }
    param_5->field2_0x240c[0xc] = '\0';
    param_5->field2_0x240c[0xd] = '\0';
    param_5->field2_0x240c[0xe] = '\0';
    param_5->field2_0x240c[0xf] = '\0';
    if (SQRT(local_6c._4_4_ * local_6c._4_4_ +
             local_70 * local_70 + (float)local_6c * (float)local_6c) <= (float)_DAT_00639e45) {
      iVar5 = (*(g_HeroActors[iVar5]->base_character).base_actor.metadata.vtable[1].processMeleeHit)
                        ((CDemonActor *)g_HeroActors[iVar5],in_stack_ffffff74);
      if ((iVar5 == 0) && (uVar8 = core_charactr_cpp_CCharacter_FUN_0042ede0(param_5), uVar8 != 0))
      {
        if (uVar8 < 2) {
          pCVar4 = param_5 + 1;
          (pCVar4->base_actor).actor_name[8] = '\x01';
          (pCVar4->base_actor).actor_name[9] = '\0';
          (pCVar4->base_actor).actor_name[10] = '\0';
          (pCVar4->base_actor).actor_name[0xb] = '\0';
        }
        else if (uVar8 == 2) {
          pCVar4 = param_5 + 1;
          (pCVar4->base_actor).actor_name[0x10] = '\x01';
          (pCVar4->base_actor).actor_name[0x11] = '\0';
          (pCVar4->base_actor).actor_name[0x12] = '\0';
          (pCVar4->base_actor).actor_name[0x13] = '\0';
          pCVar4 = param_5 + 1;
          (pCVar4->base_actor).actor_name[8] = '\x01';
          (pCVar4->base_actor).actor_name[9] = '\0';
          (pCVar4->base_actor).actor_name[10] = '\0';
          (pCVar4->base_actor).actor_name[0xb] = '\0';
        }
      }
    }
    else {
      this_ptr = (*((g_HeroActors[iVar5]->base_character).base_actor.metadata.vtable)->getPathMap)
                           ((CDemonActor *)g_HeroActors[iVar5]);
      iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr,&(param_5->base_actor).location.position,
                         (CVector3f *)(auStack_58 + 4),(param_5->base_actor).field7_0x6c);
      if (iVar5 != 0) {
        fVar6 = core_actor_cpp_FUN_0040cd70(fStack_4c - (param_5->base_actor).orient.bank);
        fVar6 = fVar6 * (float)_DAT_00639e4d * (float)_DAT_00639e55;
        param_5[1].base_actor.location.area_id = (int)fVar6;
        if (fVar6 < -unaff_EBX) {
          param_5[1].base_actor.location.area_id = (int)-unaff_EBX;
        }
        if (unaff_EBX < (float)param_5[1].base_actor.location.area_id) {
          param_5[1].base_actor.location.area_id = (int)unaff_EBX;
        }
        pCVar4 = param_5 + 1;
        (pCVar4->base_actor).actor_name[8] = '\x01';
        (pCVar4->base_actor).actor_name[9] = '\0';
        (pCVar4->base_actor).actor_name[10] = '\0';
        (pCVar4->base_actor).actor_name[0xb] = '\0';
      }
      param_5->cloth_data[0x32c] = '\0';
      param_5->cloth_data[0x32d] = '\0';
      param_5->cloth_data[0x32e] = '\0';
      param_5->cloth_data[0x32f] = '\0';
    }
    local_6c = (double)*(float *)(param_5->field2_0x240c + 0xc);
    if (local_6c <= 0.0) {
      if (local_6c < 0.0) {
        param_5->field2_0x240c[0xc] = '\0';
        param_5->field2_0x240c[0xd] = '\0';
        param_5->field2_0x240c[0xe] = '\0';
        param_5->field2_0x240c[0xf] = '\0';
        param_5[1].base_actor.location.area_id = (int)-unaff_EBX;
      }
    }
    else {
      param_5->field2_0x240c[0xc] = '\0';
      param_5->field2_0x240c[0xd] = '\0';
      param_5->field2_0x240c[0xe] = '\0';
      param_5->field2_0x240c[0xf] = '\0';
      param_5[1].base_actor.location.area_id = (int)unaff_EBX;
    }
    fStack_1c = (pCVar2->base_character).base_actor.location.position.x -
                (param_5->base_actor).location.position.x;
    fStack_18 = (pCVar2->base_character).base_actor.location.position.y -
                (param_5->base_actor).location.position.y;
    fStack_14 = (pCVar2->base_character).base_actor.location.position.z -
                (param_5->base_actor).location.position.z;
    if ((float *)auStack_58 != &fStack_1c) {
      auStack_58._0_4_ = fStack_1c;
      auStack_58._4_4_ = fStack_18;
      fStack_50 = fStack_14;
    }
    pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_34,(CVector3f *)auStack_58);
    if ((CVector3f *)(auStack_58 + 4) != pCVar7) {
      auStack_58._4_4_ = pCVar7->x;
      fStack_50 = pCVar7->y;
      fStack_4c = pCVar7->z;
    }
    CStack_34.x = core_actor_cpp_FUN_0040cd70(fStack_50 - (param_5->base_actor).orient.bank);
    if (unaff_retaddr < CStack_34.x) {
      CStack_34.x = unaff_retaddr;
    }
    if (CStack_34.x < -unaff_retaddr) {
      CStack_34.x = -unaff_retaddr;
    }
    auStack_58._4_4_ = CStack_34.x - *(float *)(param_5[2].cloth_data + 0x84ac);
    if (param_6 * (float)_DAT_00639e5d < (float)auStack_58._4_4_) {
      auStack_58._4_4_ = param_6 * (float)_DAT_00639e5d;
    }
    if ((float)auStack_58._4_4_ < param_6 * (float)_DAT_00639e65) {
      auStack_58._4_4_ = param_6 * (float)_DAT_00639e65;
    }
    *(float *)(param_5[2].cloth_data + 0x84ac) =
         *(float *)(param_5[2].cloth_data + 0x84ac) + (float)auStack_58._4_4_;
  }
  return;
}


// Assembly code:
// 005293b0: PUSH EBX
//   Label: core_moloch.cpp_FUN_005293b0
// 005293b1: PUSH ESI
// 005293b2: PUSH EDI
// 005293b3: PUSH EBP
// 005293b4: MOV EBP,ESP
// 005293b6: SUB ESP,0x7c
// 005293b9: AND ESP,0xfffffff8
// 005293bc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005293bf: MOV EDX,0x3e800000
// 005293c4: PUSH 0x2c
// 005293c6: MOV ECX,0x3f490fdb
// 005293cb: MOV ESI,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005293d1: PUSH 0x0
// 005293d3: LEA EAX,[EBX + 0xbe2c]
// 005293d9: MOV dword ptr [ESP + 0x78],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005293dd: PUSH EAX
// 005293de: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005293e2: MOV ESI,dword ptr [ESI*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005293e9: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005293ee: MOV EDI,dword ptr [EBX + 0x1fbd0]
// 005293f4: ADD ESP,0xc
// 005293f7: TEST EDI,EDI
// 005293f9: JZ 0x0052969f
//   XREF to: 0052969f (CONDITIONAL_JUMP)
// 005293ff: CMP EDI,0x1
// 00529402: JNZ 0x0052969f
//   XREF to: 0052969f (CONDITIONAL_JUMP)
// 00529408: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0052940d: MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00529414: LEA EAX,[EBX + 0x20]
// 00529417: FLD float ptr [EAX]
// 00529419: FSUB float ptr [EDX + 0x20]
// 0052941c: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x74] (WRITE)
// 00529420: FLD float ptr [EAX + 0x4]
// 00529423: FSUB float ptr [EDX + 0x24]
// 00529426: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x70] (WRITE)
// 0052942a: FLD float ptr [EAX + 0x8]
// 0052942d: FSUB float ptr [EDX + 0x28]
// 00529430: LEA EDX,[ESI + 0x20]
// 00529433: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x6c] (WRITE)
// 00529437: FLD float ptr [EDX]
// 00529439: FSUB float ptr [EAX]
// 0052943b: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x44] (WRITE)
// 0052943f: FLD float ptr [EDX + 0x4]
// 00529442: FSUB float ptr [EAX + 0x4]
// 00529445: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x40] (WRITE)
// 00529449: FLD float ptr [EDX + 0x8]
// 0052944c: LEA EDX,[ESP + 0x1c]
//   XREF to: Stack[-0x74] (DATA)
// 00529450: FSUB float ptr [EAX + 0x8]
// 00529453: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x44] (DATA)
// 00529457: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (WRITE)
// 0052945b: CMP EDX,EAX
// 0052945d: JNZ 0x005296a6
//   XREF to: 005296a6 (CONDITIONAL_JUMP)
// 00529463: FLD float ptr [ESP + 0x20]
//   Label: LAB_00529463
//   XREF to: Stack[-0x70] (READ)
// 00529467: FMUL ST0
// 00529469: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x74] (READ)
// 0052946d: FMUL ST0
// 0052946f: FADDP
// 00529471: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x6c] (READ)
// 00529475: FMUL ST0
// 00529477: FADDP
// 00529479: FSQRT
// 0052947b: MOV EDX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 00529481: SHL EDX,0x2
// 00529484: MOV dword ptr [EBX + 0x2418],0x0
// 0052948e: FCOMP double ptr [0x00639e45]
//   XREF to: 00639e45 (READ)
// 00529494: FNSTSW AX
// 00529496: SAHF
// 00529497: JBE 0x005296c3
//   XREF to: 005296c3 (CONDITIONAL_JUMP)
// 0052949d: MOV EAX,dword ptr [EDX + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005294a3: PUSH EAX
// 005294a4: MOV EDX,dword ptr [EAX + 0x154]
// 005294aa: CALL dword ptr [EDX + 0xbc]
// 005294b0: ADD ESP,0x4
// 005294b3: MOV EDX,dword ptr [EBX + 0x6c]
// 005294b6: PUSH EDX
// 005294b7: LEA EDX,[ESP + 0x2c]
// 005294bb: PUSH EDX
// 005294bc: LEA EDX,[EBX + 0x20]
// 005294bf: PUSH EDX
// 005294c0: PUSH EAX
// 005294c1: CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   XREF to: 00547d00 (UNCONDITIONAL_CALL)
// 005294c6: ADD ESP,0x10
// 005294c9: TEST EAX,EAX
// 005294cb: JZ 0x0052953c
//   XREF to: 0052953c (CONDITIONAL_JUMP)
// 005294cd: FLD float ptr [ESP + 0x2c]
// 005294d1: FSUB float ptr [EBX + 0x34]
// 005294d4: SUB ESP,0x4
// 005294d7: FSTP float ptr [ESP]
// 005294da: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005294df: MOV dword ptr [ESP + 0x7c],EAX
// 005294e3: FLD float ptr [ESP + 0x7c]
// 005294e7: FMUL double ptr [0x00639e4d]
//   XREF to: 00639e4d (READ)
// 005294ed: ADD ESP,0x4
// 005294f0: FMUL double ptr [0x00639e55]
//   XREF to: 00639e55 (READ)
// 005294f6: FLD float ptr [ESP + 0x70]
// 005294fa: FCHS
// 005294fc: FSTP float ptr [ESP + 0x68]
// 00529500: FST float ptr [EBX + 0xbe50]
// 00529506: FCOMP float ptr [ESP + 0x68]
// 0052950a: FNSTSW AX
// 0052950c: SAHF
// 0052950d: JNC 0x00529519
//   XREF to: 00529519 (CONDITIONAL_JUMP)
// 0052950f: MOV EAX,dword ptr [ESP + 0x68]
// 00529513: MOV dword ptr [EBX + 0xbe50],EAX
// 00529519: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_00529519
// 0052951f: FCOMP float ptr [ESP + 0x70]
// 00529523: FNSTSW AX
// 00529525: SAHF
// 00529526: JBE 0x00529532
//   XREF to: 00529532 (CONDITIONAL_JUMP)
// 00529528: MOV EAX,dword ptr [ESP + 0x70]
// 0052952c: MOV dword ptr [EBX + 0xbe50],EAX
// 00529532: MOV dword ptr [EBX + 0xbe2c],0x1
//   Label: LAB_00529532
// 0052953c: MOV dword ptr [EBX + 0x2dc4],0x0
//   Label: LAB_0052953c
// 00529546: FLDZ
//   Label: LAB_00529546
// 00529548: FLD float ptr [EBX + 0x2418]
// 0052954e: FSTP double ptr [ESP + 0x8]
// 00529552: FCOMP double ptr [ESP + 0x8]
// 00529556: FNSTSW AX
// 00529558: SAHF
// 00529559: JNC 0x0052972a
//   XREF to: 0052972a (CONDITIONAL_JUMP)
// 0052955f: MOV EAX,dword ptr [ESP + 0x70]
// 00529563: MOV dword ptr [EBX + 0x2418],0x0
// 0052956d: MOV dword ptr [EBX + 0xbe50],EAX
// 00529573: LEA EDX,[ESI + 0x20]
//   Label: LAB_00529573
// 00529576: LEA EAX,[EBX + 0x20]
// 00529579: FLD float ptr [EDX]
// 0052957b: FSUB float ptr [EAX]
// 0052957d: FSTP float ptr [ESP + 0x58]
// 00529581: FLD float ptr [EDX + 0x4]
// 00529584: FSUB float ptr [EAX + 0x4]
// 00529587: FSTP float ptr [ESP + 0x5c]
// 0052958b: FLD float ptr [EDX + 0x8]
// 0052958e: LEA EDX,[ESP + 0x1c]
// 00529592: FSUB float ptr [EAX + 0x8]
// 00529595: LEA EAX,[ESP + 0x58]
// 00529599: FSTP float ptr [ESP + 0x60]
// 0052959d: CMP EDX,EAX
// 0052959f: JZ 0x005295b9
//   XREF to: 005295b9 (CONDITIONAL_JUMP)
// 005295a1: MOV EAX,dword ptr [ESP + 0x58]
// 005295a5: MOV dword ptr [ESP + 0x1c],EAX
// 005295a9: MOV EAX,dword ptr [ESP + 0x5c]
// 005295ad: MOV dword ptr [ESP + 0x20],EAX
// 005295b1: MOV EAX,dword ptr [ESP + 0x60]
// 005295b5: MOV dword ptr [ESP + 0x24],EAX
// 005295b9: LEA EAX,[ESP + 0x1c]
//   Label: LAB_005295b9
// 005295bd: PUSH EAX
// 005295be: LEA EAX,[ESP + 0x44]
// 005295c2: PUSH EAX
// 005295c3: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005295c8: MOV EDX,EAX
// 005295ca: LEA EAX,[ESP + 0x24]
// 005295ce: ADD ESP,0x8
// 005295d1: CMP EAX,EDX
// 005295d3: JZ 0x005295e9
//   XREF to: 005295e9 (CONDITIONAL_JUMP)
// 005295d5: MOV EAX,dword ptr [EDX]
// 005295d7: MOV dword ptr [ESP + 0x1c],EAX
// 005295db: MOV EAX,dword ptr [EDX + 0x4]
// 005295de: MOV dword ptr [ESP + 0x20],EAX
// 005295e2: MOV EAX,dword ptr [EDX + 0x8]
// 005295e5: MOV dword ptr [ESP + 0x24],EAX
// 005295e9: FLD float ptr [ESP + 0x20]
//   Label: LAB_005295e9
// 005295ed: FSUB float ptr [EBX + 0x34]
// 005295f0: SUB ESP,0x4
// 005295f3: FSTP float ptr [ESP]
// 005295f6: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005295fb: MOV dword ptr [ESP + 0x7c],EAX
// 005295ff: FLD float ptr [ESP + 0x7c]
// 00529603: ADD ESP,0x4
// 00529606: FST float ptr [ESP + 0x38]
// 0052960a: FCOMP float ptr [ESP + 0x6c]
// 0052960e: FNSTSW AX
// 00529610: SAHF
// 00529611: JBE 0x0052961b
//   XREF to: 0052961b (CONDITIONAL_JUMP)
// 00529613: MOV EAX,dword ptr [ESP + 0x6c]
// 00529617: MOV dword ptr [ESP + 0x38],EAX
// 0052961b: FLD float ptr [ESP + 0x38]
//   Label: LAB_0052961b
// 0052961f: FLD float ptr [ESP + 0x6c]
// 00529623: FCHS
// 00529625: FSTP float ptr [ESP + 0x64]
// 00529629: FCOMP float ptr [ESP + 0x64]
// 0052962d: FNSTSW AX
// 0052962f: SAHF
// 00529630: JNC 0x0052963a
//   XREF to: 0052963a (CONDITIONAL_JUMP)
// 00529632: MOV EAX,dword ptr [ESP + 0x64]
// 00529636: MOV dword ptr [ESP + 0x38],EAX
// 0052963a: FLD float ptr [ESP + 0x38]
//   Label: LAB_0052963a
// 0052963e: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00529641: FXCH
// 00529643: FSUB float ptr [EBX + 0x22b8c]
// 00529649: FXCH
// 0052964b: FMUL double ptr [0x00639e5d]
//   XREF to: 00639e5d (READ)
// 00529651: FXCH
// 00529653: FST float ptr [ESP + 0x18]
// 00529657: FXCH
// 00529659: FSTP double ptr [ESP + 0x10]
// 0052965d: FCOMP double ptr [ESP + 0x10]
// 00529661: FNSTSW AX
// 00529663: SAHF
// 00529664: JBE 0x0052966e
//   XREF to: 0052966e (CONDITIONAL_JUMP)
// 00529666: FLD double ptr [ESP + 0x10]
// 0052966a: FSTP float ptr [ESP + 0x18]
// 0052966e: FLD float ptr [EBP + 0x18]
//   Label: LAB_0052966e
//   XREF to: Stack[0x8] (READ)
// 00529671: FMUL double ptr [0x00639e65]
//   XREF to: 00639e65 (READ)
// 00529677: FLD float ptr [ESP + 0x18]
// 0052967b: FXCH
// 0052967d: FSTP double ptr [ESP]
// 00529680: FCOMP double ptr [ESP]
// 00529683: FNSTSW AX
// 00529685: SAHF
// 00529686: JNC 0x0052968f
//   XREF to: 0052968f (CONDITIONAL_JUMP)
// 00529688: FLD double ptr [ESP]
// 0052968b: FSTP float ptr [ESP + 0x18]
// 0052968f: FLD float ptr [EBX + 0x22b8c]
//   Label: LAB_0052968f
// 00529695: FADD float ptr [ESP + 0x18]
// 00529699: FSTP float ptr [EBX + 0x22b8c]
// 0052969f: MOV ESP,EBP
//   Label: LAB_0052969f
// 005296a1: POP EBP
// 005296a2: POP EDI
// 005296a3: POP ESI
// 005296a4: POP EBX
// 005296a5: RET
// 005296a6: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_005296a6
//   XREF to: Stack[-0x44] (DATA)
// 005296aa: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005296ae: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x40] (READ)
// 005296b2: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005296b6: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (READ)
// 005296ba: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005296be: JMP 0x00529463
//   XREF to: 00529463 (UNCONDITIONAL_JUMP)
// 005296c3: MOV EAX,dword ptr [EDX + 0x2db87c0]
//   Label: LAB_005296c3
//   XREF to: 02db87c0 (DATA)
// 005296c9: PUSH EAX
// 005296ca: MOV EDX,dword ptr [EAX + 0x154]
// 005296d0: CALL dword ptr [EDX + 0x15c]
// 005296d6: ADD ESP,0x4
// 005296d9: TEST EAX,EAX
// 005296db: JNZ 0x00529546
//   XREF to: 00529546 (CONDITIONAL_JUMP)
// 005296e1: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005296e4: PUSH EBX
// 005296e5: CALL core_charactr.cpp_CCharacter_FUN_0042ede0
//   XREF to: 0042ede0 (UNCONDITIONAL_CALL)
// 005296ea: ADD ESP,0x8
// 005296ed: CMP EAX,0x1
// 005296f0: JC 0x00529546
//   XREF to: 00529546 (CONDITIONAL_JUMP)
// 005296f6: JA 0x00529720
//   XREF to: 00529720 (CONDITIONAL_JUMP)
// 005296f8: MOV dword ptr [EBX + 0xbe2c],0x1
// 00529702: JMP 0x00529546
//   XREF to: 00529546 (UNCONDITIONAL_JUMP)
// 00529707: MOV dword ptr [EBX + 0xbe34],0x1
//   Label: LAB_00529707
// 00529711: MOV dword ptr [EBX + 0xbe2c],0x1
// 0052971b: JMP 0x00529546
//   XREF to: 00529546 (UNCONDITIONAL_JUMP)
// 00529720: CMP EAX,0x2
//   Label: LAB_00529720
// 00529723: JZ 0x00529707
//   XREF to: 00529707 (CONDITIONAL_JUMP)
// 00529725: JMP 0x00529546
//   XREF to: 00529546 (UNCONDITIONAL_JUMP)
// 0052972a: JBE 0x00529573
//   Label: LAB_0052972a
//   XREF to: 00529573 (CONDITIONAL_JUMP)
// 00529730: FLD float ptr [ESP + 0x70]
// 00529734: MOV dword ptr [EBX + 0x2418],0x0
// 0052973e: FCHS
// 00529740: FSTP float ptr [EBX + 0xbe50]
// 00529746: JMP 0x00529573
//   XREF to: 00529573 (UNCONDITIONAL_JUMP)

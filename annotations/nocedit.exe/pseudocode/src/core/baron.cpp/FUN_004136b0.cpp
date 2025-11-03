// Name: core_baron.cpp_FUN_004136b0
// Address: 004136b0
// Address Range: [[004136b0, 004139f7]]
// Convention: unknown
// Signature: undefined core_baron.cpp_FUN_004136b0()
// Cross-references:
//   core_baron.cpp_FUN_00413a00 (00413a00) at 00413a36 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_baron-attack.wav_00615041
//   undefined4 DAT_00615059
//   undefined4 DAT_00615061
//   WatcomTypeInfo g_CVectorTypeInfo
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   undefined4 DAT_008224cc
//   undefined4 DAT_008224d0
//   CFireEffect g_CFireEffectInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_fire.cpp_CFireEffect_FUN_004c8ea0
//   core_fire.cpp_CFireEffect_FUN_004c8f50
//   core_fire.cpp_CFireEffect_FUN_004c8fd0
//   core_hero.cpp_FUN_004f3960
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_baron.cpp_FUN_004136b0(undefined4 param_1) */

void core_baron_cpp_FUN_004136b0(void)

{
  CDemonActor *this_ptr;
  CVector3f *pCVar1;
  float fVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  int in_stack_0000001c;
  undefined1 auStack_138 [4];
  float fStack_134;
  float in_stack_ffffff18;
  undefined1 auStack_74 [12];
  CVector3f aCStack_68 [2];
  CVector3f CStack_48;
  undefined1 local_3c [8];
  undefined1 auStack_34 [16];
  CVector3f CStack_24;
  float local_14;
  
  this_ptr = (CDemonActor *)core_hero_cpp_FUN_004f3960();
  if (this_ptr == (CDemonActor *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (in_stack_00000004,(CVector3f *)local_3c,&(this_ptr->location).position);
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     ((CVector3f *)auStack_74,(CVector3f *)(local_3c + 4));
  if ((CVector3f *)auStack_34 != pCVar1) {
    auStack_34._0_4_ = pCVar1->x;
    auStack_34._4_4_ = pCVar1->y;
    auStack_34._8_4_ = pCVar1->z;
  }
  auStack_34._8_4_ = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)auStack_34._4_4_);
  if (((float)auStack_34._8_4_ < (float)_DAT_00615059) ||
     (_DAT_00615061 < (double)(float)auStack_34._8_4_)) {
    core_fire_cpp_CFireEffect_FUN_004c8f50(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c8ea0(g_CFireEffectPtr);
  }
  else {
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(auStack_138,10,&g_CVectorTypeInfo);
    fVar2 = (float)(*this_ptr->vtable->getTargetPoints)(this_ptr,(CVector3f *)&fStack_134);
    in_stack_00000010 = fVar2;
    iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    fStack_134 = 5.98957e-39;
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (this_ptr,aCStack_68,
                        (CVector3f *)(&stack0xfffffee4 + (iVar3 % (int)fVar2) * 0xc));
    if ((CVector3f *)&stack0x00000008 != pCVar1) {
      in_stack_00000008 = pCVar1->x;
      in_stack_0000000c = pCVar1->y;
      in_stack_00000010 = pCVar1->z;
    }
    iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (this_ptr,&CStack_24,
                        (CVector3f *)(&stack0xfffffeec + (iVar3 % in_stack_0000001c) * 0xc));
    if ((CVector3f *)&local_14 != pCVar1) {
      local_14 = pCVar1->x;
    }
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       ((CVector3f *)(auStack_34 + 8),&g_ZeroVector,
                        (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_008224cc * 4].z);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,(CVector3f *)auStack_34,pCVar1);
    pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                       (&CStack_48,&g_ZeroVector,
                        (CMatrix3x4f *)&(&in_stack_00000004[0xb].scale)[DAT_008224d0 * 4].z);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,(CVector3f *)&stack0x00000010,pCVar1);
    core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"@@baron-attack.wav" + 2);
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)(auStack_74 + 8));
  local_3c._4_4_ = 8.40779e-45;
  aCStack_68[0].y = 100.0;
  auStack_34._0_4_ = in_stack_00000004;
  auStack_34._4_4_ = *(undefined4 *)(in_stack_00000004[0x17a].create_event + 0x44);
  if ((CDemonActor *)auStack_34._4_4_ == (CDemonActor *)0x0) {
    auStack_34._4_4_ = in_stack_00000004;
  }
  (*this_ptr->vtable[1].playAmbientSoundWithVolume)(this_ptr,(char *)aCStack_68,in_stack_ffffff18);
  this_ptr[0x88].field22_0x120 = 0x40400000;
  return;
}


// Assembly code:
// 004136b0: PUSH EBX
//   Label: core_baron.cpp_FUN_004136b0
// 004136b1: PUSH ESI
// 004136b2: PUSH EDI
// 004136b3: PUSH EBP
// 004136b4: MOV EBP,ESP
// 004136b6: SUB ESP,0x140
// 004136bc: AND ESP,0xfffffff8
// 004136bf: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004136c2: LEA EAX,[ESP + 0x134]
//   XREF to: Stack[-0x1c] (DATA)
// 004136c9: PUSH EAX
// 004136ca: PUSH EBX
// 004136cb: CALL core_hero.cpp_FUN_004f3960
//   XREF to: 004f3960 (UNCONDITIONAL_CALL)
// 004136d0: ADD ESP,0x8
// 004136d3: MOV ESI,EAX
// 004136d5: TEST EAX,EAX
// 004136d7: JNZ 0x004136e0
//   XREF to: 004136e0 (CONDITIONAL_JUMP)
// 004136d9: MOV ESP,EBP
// 004136db: POP EBP
// 004136dc: POP EDI
// 004136dd: POP ESI
// 004136de: POP EBX
// 004136df: RET
// 004136e0: ADD EAX,0x20
//   Label: LAB_004136e0
// 004136e3: PUSH EAX
// 004136e4: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x40] (DATA)
// 004136eb: PUSH EAX
// 004136ec: PUSH EBX
// 004136ed: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004136f2: ADD ESP,0xc
// 004136f5: LEA EAX,[ESP + 0x110]
//   XREF to: Stack[-0x40] (DATA)
// 004136fc: PUSH EAX
// 004136fd: LEA EAX,[ESP + 0xd8]
//   XREF to: Stack[-0x7c] (DATA)
// 00413704: PUSH EAX
// 00413705: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0041370a: MOV EDX,EAX
// 0041370c: LEA EAX,[ESP + 0x118]
//   XREF to: Stack[-0x40] (DATA)
// 00413713: ADD ESP,0x8
// 00413716: CMP EAX,EDX
// 00413718: JZ 0x00413737
//   XREF to: 00413737 (CONDITIONAL_JUMP)
// 0041371a: MOV EAX,dword ptr [EDX]
// 0041371c: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00413723: MOV EAX,dword ptr [EDX + 0x4]
// 00413726: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0041372d: MOV EAX,dword ptr [EDX + 0x8]
// 00413730: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00413737: PUSH dword ptr [ESP + 0x114]
//   Label: LAB_00413737
//   XREF to: Stack[-0x3c] (READ)
// 0041373e: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00413743: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041374a: FLD float ptr [ESP + 0x140]
//   XREF to: Stack[-0x14] (READ)
// 00413751: ADD ESP,0x4
// 00413754: FST float ptr [ESP + 0x114]
//   XREF to: Stack[-0x3c] (WRITE)
// 0041375b: FST double ptr [ESP]
//   XREF to: Stack[-0x150] (DATA)
// 0041375e: FCOMP double ptr [0x00615059]
//   XREF to: 00615059 (READ)
// 00413764: FNSTSW AX
// 00413766: SAHF
// 00413767: JNC 0x0041380e
//   XREF to: 0041380e (CONDITIONAL_JUMP)
// 0041376d: PUSH 0x0
//   Label: LAB_0041376d
// 0041376f: PUSH 0x1
// 00413771: LEA EDI,[ESI + 0x20]
// 00413774: PUSH 0x41800000
// 00413779: PUSH EDI
// 0041377a: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 00413780: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 00413781: CALL core_fire.cpp_CFireEffect_FUN_004c8f50
//   XREF to: 004c8f50 (UNCONDITIONAL_CALL)
// 00413786: ADD ESP,0x14
// 00413789: PUSH 0x40800000
// 0041378e: PUSH EDI
// 0041378f: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 00413795: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 00413796: CALL core_fire.cpp_CFireEffect_FUN_004c8ea0
//   XREF to: 004c8ea0 (UNCONDITIONAL_CALL)
// 0041379b: ADD ESP,0xc
// 0041379e: LEA EAX,[ESP + 0x80]
//   Label: LAB_0041379e
//   XREF to: Stack[-0xd0] (DATA)
// 004137a5: PUSH EAX
// 004137a6: MOV EDI,0x6
// 004137ab: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 004137b0: ADD ESP,0x4
// 004137b3: MOV EAX,0x42c80000
// 004137b8: MOV dword ptr [ESP + 0xb0],EDI
//   XREF to: Stack[-0xa0] (WRITE)
// 004137bf: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 004137c6: MOV dword ptr [ESP + 0xb4],EBX
//   XREF to: Stack[-0x9c] (WRITE)
// 004137cd: MOV EAX,dword ptr [EBX + 0x1fcac]
// 004137d3: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 004137da: TEST EAX,EAX
// 004137dc: JNZ 0x004137e5
//   XREF to: 004137e5 (CONDITIONAL_JUMP)
// 004137de: MOV dword ptr [ESP + 0xb8],EBX
//   XREF to: Stack[-0x98] (WRITE)
// 004137e5: LEA EAX,[ESP + 0x80]
//   Label: LAB_004137e5
//   XREF to: Stack[-0xd0] (DATA)
// 004137ec: PUSH EAX
// 004137ed: MOV EDX,dword ptr [ESI + 0x154]
// 004137f3: PUSH ESI
// 004137f4: CALL dword ptr [EDX + 0x11c]
// 004137fa: ADD ESP,0x8
// 004137fd: MOV dword ptr [ESI + 0xb7e0],0x40400000
// 00413807: MOV ESP,EBP
// 00413809: POP EBP
// 0041380a: POP EDI
// 0041380b: POP ESI
// 0041380c: POP EBX
// 0041380d: RET
// 0041380e: FLD double ptr [ESP]
//   Label: LAB_0041380e
//   XREF to: Stack[-0x150] (DATA)
// 00413811: FCOMP double ptr [0x00615061]
//   XREF to: 00615061 (READ)
// 00413817: FNSTSW AX
// 00413819: SAHF
// 0041381a: JA 0x0041376d
//   XREF to: 0041376d (CONDITIONAL_JUMP)
// 00413820: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 00413825: PUSH 0xa
// 00413827: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x148] (DATA)
// 0041382b: PUSH EAX
// 0041382c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00413831: ADD ESP,0xc
// 00413834: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x148] (DATA)
// 00413838: PUSH EAX
// 00413839: MOV EDX,dword ptr [ESI + 0x154]
// 0041383f: PUSH ESI
// 00413840: CALL dword ptr [EDX + 0x4c]
// 00413843: ADD ESP,0x8
// 00413846: MOV EDI,EAX
// 00413848: MOV dword ptr [ESP + 0x138],EAX
// 0041384f: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00413854: MOV EDX,EAX
// 00413856: SAR EDX,0x1f
// 00413859: IDIV EDI
// 0041385b: LEA EAX,[EDX*0x4 + 0x0]
// 00413862: SUB EAX,EDX
// 00413864: LEA EDX,[ESP + 0x8]
// 00413868: SHL EAX,0x2
// 0041386b: ADD EAX,EDX
// 0041386d: PUSH EAX
// 0041386e: LEA EAX,[ESP + 0xc0]
// 00413875: PUSH EAX
// 00413876: PUSH ESI
// 00413877: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0041387c: MOV EDX,EAX
// 0041387e: LEA EAX,[ESP + 0x134]
// 00413885: ADD ESP,0xc
// 00413888: CMP EAX,EDX
// 0041388a: JZ 0x004138a9
//   XREF to: 004138a9 (CONDITIONAL_JUMP)
// 0041388c: MOV EAX,dword ptr [EDX]
// 0041388e: MOV dword ptr [ESP + 0x128],EAX
// 00413895: MOV EAX,dword ptr [EDX + 0x4]
// 00413898: MOV dword ptr [ESP + 0x12c],EAX
// 0041389f: MOV EAX,dword ptr [EDX + 0x8]
// 004138a2: MOV dword ptr [ESP + 0x130],EAX
// 004138a9: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: LAB_004138a9
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 004138ae: MOV EDX,EAX
// 004138b0: MOV ECX,dword ptr [ESP + 0x138]
// 004138b7: SAR EDX,0x1f
// 004138ba: IDIV ECX
// 004138bc: LEA EAX,[EDX*0x4 + 0x0]
// 004138c3: SUB EAX,EDX
// 004138c5: LEA EDX,[EAX*0x4 + 0x0]
// 004138cc: LEA EAX,[ESP + 0x8]
// 004138d0: ADD EAX,EDX
// 004138d2: PUSH EAX
// 004138d3: LEA EAX,[ESP + 0xfc]
// 004138da: PUSH EAX
// 004138db: PUSH ESI
// 004138dc: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004138e1: MOV EDX,EAX
// 004138e3: LEA EAX,[ESP + 0x110]
// 004138ea: ADD ESP,0xc
// 004138ed: CMP EAX,EDX
// 004138ef: JZ 0x0041390e
//   XREF to: 0041390e (CONDITIONAL_JUMP)
// 004138f1: MOV EAX,dword ptr [EDX]
// 004138f3: MOV dword ptr [ESP + 0x104],EAX
// 004138fa: MOV EAX,dword ptr [EDX + 0x4]
// 004138fd: MOV dword ptr [ESP + 0x108],EAX
// 00413904: MOV EAX,dword ptr [EDX + 0x8]
// 00413907: MOV dword ptr [ESP + 0x10c],EAX
// 0041390e: MOV EDX,dword ptr [0x008224cc]
//   Label: LAB_0041390e
//   XREF to: 008224cc (READ)
// 00413914: LEA EAX,[EDX*0x4 + 0x0]
// 0041391b: SUB EAX,EDX
// 0041391d: LEA EDI,[EBX + 0xfd8]
// 00413923: SHL EAX,0x4
// 00413926: ADD EAX,EDI
// 00413928: PUSH EAX
// 00413929: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0041392e: LEA EAX,[ESP + 0xf4]
// 00413935: PUSH EAX
// 00413936: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0041393b: ADD ESP,0xc
// 0041393e: PUSH EAX
// 0041393f: LEA EAX,[ESP + 0xe4]
// 00413946: PUSH EAX
// 00413947: PUSH EBX
// 00413948: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0041394d: MOV EDX,dword ptr [0x008224d0]
//   XREF to: 008224d0 (READ)
// 00413953: LEA EAX,[EDX*0x4 + 0x0]
// 0041395a: SUB EAX,EDX
// 0041395c: SHL EAX,0x4
// 0041395f: ADD ESP,0xc
// 00413962: ADD EDI,EAX
// 00413964: PUSH EDI
// 00413965: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0041396a: LEA EAX,[ESP + 0xd0]
// 00413971: PUSH EAX
// 00413972: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 00413977: ADD ESP,0xc
// 0041397a: PUSH EAX
// 0041397b: LEA EAX,[ESP + 0x120]
// 00413982: PUSH EAX
// 00413983: PUSH EBX
// 00413984: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00413989: ADD ESP,0xc
// 0041398c: PUSH 0x40800000
// 00413991: PUSH 0x3f000000
// 00413996: PUSH 0x1
// 00413998: LEA EAX,[ESP + 0x134]
// 0041399f: PUSH EAX
// 004139a0: LEA EAX,[ESP + 0xf0]
// 004139a7: PUSH EAX
// 004139a8: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004139ae: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 004139af: CALL core_fire.cpp_CFireEffect_FUN_004c8fd0
//   XREF to: 004c8fd0 (UNCONDITIONAL_CALL)
// 004139b4: ADD ESP,0x18
// 004139b7: PUSH 0x40800000
// 004139bc: PUSH 0x3f000000
// 004139c1: PUSH 0x1
// 004139c3: LEA EAX,[ESP + 0x134]
// 004139ca: PUSH EAX
// 004139cb: LEA EAX,[ESP + 0x12c]
// 004139d2: PUSH EAX
// 004139d3: MOV EAX,[0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004139d8: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 004139d9: CALL core_fire.cpp_CFireEffect_FUN_004c8fd0
//   XREF to: 004c8fd0 (UNCONDITIONAL_CALL)
// 004139de: ADD ESP,0x18
// 004139e1: PUSH 0x615041
//   XREF to: 00615041 (DATA)
// 004139e6: MOV EAX,dword ptr [EBX + 0x154]
// 004139ec: PUSH EBX
// 004139ed: CALL dword ptr [EAX + 0x24]
// 004139f0: ADD ESP,0x8
// 004139f3: JMP 0x0041379e
//   XREF to: 0041379e (UNCONDITIONAL_JUMP)

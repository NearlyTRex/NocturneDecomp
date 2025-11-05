// Name: core_werewolf.cpp_CWerewolf_FUN_005f1820
// Address: 005f1820
// Address Range: [[005f1820, 005f1975]]
// Convention: __cdecl
// Signature: int core_werewolf.cpp_CWerewolf_FUN_005f1820(CWerewolf * this_ptr)
// Globals:
//   undefined4 DAT_00657db0
//   double DOUBLE_00657db4 = 0.800000000000000
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   CVector3f g_ZeroVector
//   undefined4 DAT_03f96b44
//   undefined4 DAT_03f96b50
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_charactr.cpp_CCharacter_FUN_0042b0e0
//   core_werewolf.cpp_FUN_005f1230
//   core_xform.cpp_getTranslation_FUN_005f6110
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_werewolf_cpp_CWerewolf_FUN_005f1820(CWerewolf *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CMatrix3x4f *pCVar2;
  undefined4 *puVar3;
  byte bVar4;
  CWerewolf *pCStack_48;
  undefined *puStack_44;
  CVector3i local_14;
  
  bVar4 = 0;
  if ((*(int *)(this_ptr->base_enemy).base_character.field13_0x2620 == 0) ||
     ((this_ptr->base_enemy).pool_me != 0)) {
    return 0;
  }
  if (1.0 < (float)this_ptr->field11_0xbf00) {
    this_ptr->field11_0xbf00 = (int)((float)this_ptr->field11_0xbf00 + _DAT_00657db0);
  }
  if ((float)this_ptr->field11_0xbf00 <= (float)DOUBLE_00657db4) {
    if (*(int *)(this_ptr->base_enemy).base_character.field13_0x2620 != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
      pCVar2 = (this_ptr->base_enemy).base_character.model.bone_transform.bone_world_matrices +
               *(int *)(this_ptr->field4_0xbec0 + 0x10);
      puVar3 = (undefined4 *)&stack0xffffffb4;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = pCVar2->m[0].w;
        pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                ((CVector3f *)&stack0xffffffb4,(CMatrix3x3f *)&local_14.y);
      core_xform_cpp_getTranslation_FUN_005f6110
                ((CVector3f *)&pCStack_48,(CMatrix3x4f *)&stack0xffffffe8);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector,&local_14);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,(CVector3i *)&stack0xfffffffc,(CVector3i *)0x0);
      pCStack_48 = (CWerewolf *)&DAT_03f96b44;
      core_werewolf_cpp_FUN_005f1230();
      puStack_44 = &DAT_03f96b50;
      pCStack_48 = this_ptr;
      core_werewolf_cpp_FUN_005f1230();
      puStack_44 = (undefined *)0x5f191c;
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    }
    core_charactr_cpp_CCharacter_FUN_0042b0e0((CCharacter *)this_ptr);
    return *(int *)(this_ptr->base_enemy).base_character.field13_0x2620;
  }
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042b0e0((CCharacter *)this_ptr);
  return iVar1;
}


// Assembly code:
// 005f1820: PUSH EBX
//   Label: core_werewolf.cpp_CWerewolf_FUN_005f1820
// 005f1821: PUSH EBP
// 005f1822: SUB ESP,0x48
// 005f1825: MOV EBX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x4] (READ)
// 005f1829: CMP dword ptr [EBX + 0x2620],0x0
// 005f1830: JZ 0x005f1948
//   XREF to: 005f1948 (CONDITIONAL_JUMP)
// 005f1836: CMP dword ptr [EBX + 0xbe28],0x0
// 005f183d: JNZ 0x005f1948
//   XREF to: 005f1948 (CONDITIONAL_JUMP)
// 005f1843: FLD float ptr [EBX + 0xbf00]
// 005f1849: FLD1
// 005f184b: FCOMPP
// 005f184d: FNSTSW AX
// 005f184f: SAHF
// 005f1850: JC 0x005f1950
//   XREF to: 005f1950 (CONDITIONAL_JUMP)
// 005f1856: FLD float ptr [EBX + 0xbf00]
//   Label: LAB_005f1856
// 005f185c: FCOMP double ptr [0x00657db4]
//   XREF to: 00657db4 (READ)
// 005f1862: FNSTSW AX
// 005f1864: SAHF
// 005f1865: JA 0x005f1967
//   XREF to: 005f1967 (CONDITIONAL_JUMP)
// 005f186b: CMP dword ptr [EBX + 0x2620],0x0
// 005f1872: JZ 0x005f1933
//   XREF to: 005f1933 (CONDITIONAL_JUMP)
// 005f1878: PUSH EDI
// 005f1879: PUSH ESI
// 005f187a: PUSH EBX
// 005f187b: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005f1880: MOV EDX,dword ptr [EBX + 0xbed0]
// 005f1886: LEA EAX,[EDX*0x4 + 0x0]
// 005f188d: SUB EAX,EDX
// 005f188f: SHL EAX,0x4
// 005f1892: ADD ESP,0x4
// 005f1895: LEA ESI,[EBX + EAX*0x1 + 0xfd8]
// 005f189c: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x14] (DATA)
// 005f18a0: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x50] (DATA)
// 005f18a4: PUSH EAX
// 005f18a5: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x50] (DATA)
// 005f18a9: MOV ECX,0xc
// 005f18ae: PUSH EAX
// 005f18af: MOVSD.REP ES:EDI,ESI
// 005f18b1: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 005f18b6: ADD ESP,0x8
// 005f18b9: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x20] (DATA)
// 005f18bd: PUSH EAX
// 005f18be: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x50] (DATA)
// 005f18c2: PUSH EAX
// 005f18c3: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 005f18c8: ADD ESP,0x8
// 005f18cb: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x20] (DATA)
// 005f18cf: PUSH EAX
// 005f18d0: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 005f18d5: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005f18db: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005f18dc: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005f18e1: ADD ESP,0xc
// 005f18e4: PUSH 0x0
// 005f18e6: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x14] (DATA)
// 005f18ea: PUSH EAX
// 005f18eb: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005f18f1: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 005f18f2: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005f18f7: ADD ESP,0xc
// 005f18fa: PUSH 0x3f96b44
//   XREF to: 03f96b44 (DATA)
// 005f18ff: PUSH EBX
// 005f1900: CALL core_werewolf.cpp_FUN_005f1230
//   XREF to: 005f1230 (UNCONDITIONAL_CALL)
// 005f1905: ADD ESP,0x8
// 005f1908: PUSH 0x3f96b50
//   XREF to: 03f96b50 (DATA)
// 005f190d: PUSH EBX
// 005f190e: CALL core_werewolf.cpp_FUN_005f1230
//   XREF to: 005f1230 (UNCONDITIONAL_CALL)
// 005f1913: ADD ESP,0x8
// 005f1916: PUSH EBX
// 005f1917: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005f191c: ADD ESP,0x4
// 005f191f: PUSH EBX
// 005f1920: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005f1925: ADD ESP,0x4
// 005f1928: PUSH EBX
// 005f1929: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 005f192e: ADD ESP,0x4
// 005f1931: POP ESI
// 005f1932: POP EDI
// 005f1933: PUSH EBX
//   Label: LAB_005f1933
// 005f1934: CALL core_charactr.cpp_CCharacter_FUN_0042b0e0
//   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)
// 005f1939: ADD ESP,0x4
// 005f193c: MOV EAX,dword ptr [EBX + 0x2620]
// 005f1942: ADD ESP,0x48
// 005f1945: POP EBP
// 005f1946: POP EBX
// 005f1947: RET
// 005f1948: XOR EAX,EAX
//   Label: LAB_005f1948
// 005f194a: ADD ESP,0x48
// 005f194d: POP EBP
// 005f194e: POP EBX
// 005f194f: RET
// 005f1950: FLD float ptr [EBX + 0xbf00]
//   Label: LAB_005f1950
// 005f1956: FADD float ptr [0x00657db0]
//   XREF to: 00657db0 (READ)
// 005f195c: FSTP float ptr [EBX + 0xbf00]
// 005f1962: JMP 0x005f1856
//   XREF to: 005f1856 (UNCONDITIONAL_JUMP)
// 005f1967: PUSH EBX
//   Label: LAB_005f1967
// 005f1968: CALL core_charactr.cpp_CCharacter_FUN_0042b0e0
//   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)
// 005f196d: ADD ESP,0x4
// 005f1970: ADD ESP,0x48
// 005f1973: POP EBP
// 005f1974: POP EBX
// 005f1975: RET

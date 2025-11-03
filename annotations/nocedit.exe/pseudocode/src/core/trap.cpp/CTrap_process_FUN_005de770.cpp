// Name: core_trap.cpp_CTrap_process_FUN_005de770
// Address: 005de770
// Address Range: [[005de770, 005de918]]
// Convention: __cdecl
// Signature: void core_trap.cpp_CTrap_process_FUN_005de770(CTrap * this_ptr)
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.field19_0x14f0a0[7996]
//   undefined4 DAT_03265258
//   undefined4 g_CWerewolfClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_process_FUN_005de770(CTrap *this_ptr)

{
  CDemonActor *this_ptr_00;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  int iVar1;
  float unaff_EDI;
  int iVar2;
  float in_stack_ffffff78;
  undefined1 auStack_54 [36];
  void *pvStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (*(int *)(this_ptr->field2_0x15c + 0x178) == 0) {
    if (this_ptr->wolf_in_trap != 0) {
      iVar1 = (**(code **)(*(int *)(this_ptr->wolf_in_trap + 0x154) + 0x120))();
      if (iVar1 == 0) {
        return;
      }
      *(undefined4 *)(this_ptr->wolf_in_trap + 0xbee8) = 0;
      this_ptr->wolf_in_trap = 0;
    }
    iVar2 = 0;
    (*((this_ptr->base_actor).vtable)->getBoundingBox)
              (&this_ptr->base_actor,(CBoundingBox3D *)(auStack_54 + 0x20));
    for (iVar1 = 0; iVar1 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c); iVar1 = iVar1 + 1)
    {
      this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar2 + 8000),
                               g_CWerewolfClassInfo.name_hash);
      if ((this_ptr_00 != (CDemonActor *)0x0) &&
         (*(int *)(this_ptr_00[0x8e].actor_name + 0x18) == 0)) {
        core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0((SCollisionInfo *)auStack_54);
        (*this_ptr_00->vtable->hasCollision)(this_ptr_00,(SCollisionInfo *)auStack_54);
        if (((this_ptr_00->location).position.y <=
             (this_ptr->base_actor).location.position.y + fStack_14) &&
           ((this_ptr->base_actor).location.position.y + fStack_20 <=
            (this_ptr_00->location).position.y + (float)auStack_54._32_4_)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (&this_ptr->base_actor,(CVector3f *)&stack0xfffffff4,
                     &(this_ptr_00->location).position);
          if ((((fStack_24 <= unaff_EDI + (float)pvStack_30) &&
               (unaff_EDI - (float)pvStack_30 <= fStack_18)) &&
              (fStack_1c <= unaff_EBX + (float)pvStack_30)) &&
             (unaff_EBX - (float)pvStack_30 <= unaff_EBP)) {
            this_ptr->wolf_in_trap = (int)this_ptr_00;
            this_ptr_00[0x8e].actor_name[0x1c] = '\0';
            this_ptr_00[0x8e].actor_name[0x1d] = '\0';
            this_ptr_00[0x8e].actor_name[0x1e] = '\0';
            this_ptr_00[0x8e].actor_name[0x1f] = '@';
            *(CTrap **)(this_ptr_00[0x8e].actor_name + 0x18) = this_ptr;
            core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff78);
            (*this_ptr_00->vtable[1].playAmbientSoundWithVolume)
                      (this_ptr_00,&stack0xffffff78,in_stack_ffffff78);
            return;
          }
        }
      }
      iVar2 = iVar2 + 4;
    }
  }
  return;
}


// Assembly code:
// 005de770: PUSH EBX
//   Label: core_trap.cpp_CTrap_process_FUN_005de770
// 005de771: PUSH ESI
// 005de772: PUSH EDI
// 005de773: PUSH EBP
// 005de774: SUB ESP,0x88
// 005de77a: MOV ESI,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x4] (READ)
// 005de781: CMP dword ptr [ESI + 0x2d4],0x0
// 005de788: JNZ 0x005de7b8
//   XREF to: 005de7b8 (CONDITIONAL_JUMP)
// 005de78a: MOV ECX,dword ptr [ESI + 0x2d8]
// 005de790: TEST ECX,ECX
// 005de792: JNZ 0x005de7c3
//   XREF to: 005de7c3 (CONDITIONAL_JUMP)
// 005de794: LEA EDX,[ESP + 0x64]
//   Label: LAB_005de794
//   XREF to: Stack[-0x34] (DATA)
// 005de798: PUSH EDX
// 005de799: MOV EAX,dword ptr [ESI + 0x154]
// 005de79f: PUSH ESI
// 005de7a0: XOR EBP,EBP
// 005de7a2: XOR EDI,EDI
// 005de7a4: CALL dword ptr [EAX + 0x14]
// 005de7a7: ADD ESP,0x8
// 005de7aa: MOV EBX,dword ptr [0x006810c8]
//   Label: LAB_005de7aa
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005de7b0: CMP EBP,dword ptr [EBX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 005de7b6: JL 0x005de7f9
//   XREF to: 005de7f9 (CONDITIONAL_JUMP)
// 005de7b8: ADD ESP,0x88
//   Label: LAB_005de7b8
// 005de7be: POP EBP
// 005de7bf: POP EDI
// 005de7c0: POP ESI
// 005de7c1: POP EBX
// 005de7c2: RET
// 005de7c3: PUSH ECX
//   Label: LAB_005de7c3
// 005de7c4: MOV EDX,dword ptr [ECX + 0x154]
// 005de7ca: CALL dword ptr [EDX + 0x120]
// 005de7d0: ADD ESP,0x4
// 005de7d3: TEST EAX,EAX
// 005de7d5: JZ 0x005de7b8
//   XREF to: 005de7b8 (CONDITIONAL_JUMP)
// 005de7d7: MOV EAX,dword ptr [ESI + 0x2d8]
// 005de7dd: MOV dword ptr [EAX + 0xbee8],0x0
// 005de7e7: MOV dword ptr [ESI + 0x2d8],0x0
// 005de7f1: JMP 0x005de794
//   XREF to: 005de794 (UNCONDITIONAL_JUMP)
// 005de7f3: INC EBP
//   Label: LAB_005de7f3
// 005de7f4: ADD EDI,0x4
// 005de7f7: JMP 0x005de7aa
//   XREF to: 005de7aa (UNCONDITIONAL_JUMP)
// 005de7f9: MOV EDX,dword ptr [0x03f96b94]
//   Label: LAB_005de7f9
//   XREF to: 03f96b94 (READ)
// 005de7ff: PUSH EDX
// 005de800: MOV ECX,dword ptr [EDI + EBX*0x1 + 0x150fe0]
//   XREF to: 03265258 (READ)
// 005de807: PUSH ECX
// 005de808: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005de80d: MOV EBX,EAX
// 005de80f: ADD ESP,0x8
// 005de812: TEST EAX,EAX
// 005de814: JZ 0x005de7f3
//   XREF to: 005de7f3 (CONDITIONAL_JUMP)
// 005de816: CMP dword ptr [EAX + 0xbee8],0x0
// 005de81d: JNZ 0x005de7f3
//   XREF to: 005de7f3 (CONDITIONAL_JUMP)
// 005de81f: LEA EAX,[ESP + 0x3c]
// 005de823: PUSH EAX
// 005de824: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 005de829: ADD ESP,0x4
// 005de82c: LEA EAX,[ESP + 0x3c]
// 005de830: PUSH EAX
// 005de831: MOV EDX,dword ptr [EBX + 0x154]
// 005de837: PUSH EBX
// 005de838: CALL dword ptr [EDX + 0x34]
// 005de83b: ADD ESP,0x8
// 005de83e: FLD float ptr [ESI + 0x24]
// 005de841: FADD float ptr [ESP + 0x74]
// 005de845: FCOMP float ptr [EBX + 0x24]
// 005de848: FNSTSW AX
// 005de84a: SAHF
// 005de84b: JC 0x005de7f3
//   XREF to: 005de7f3 (CONDITIONAL_JUMP)
// 005de84d: FLD float ptr [EBX + 0x24]
// 005de850: FADD float ptr [ESP + 0x54]
// 005de854: FLD float ptr [ESI + 0x24]
// 005de857: FADD float ptr [ESP + 0x68]
// 005de85b: FCOMPP
// 005de85d: FNSTSW AX
// 005de85f: SAHF
// 005de860: JA 0x005de7f3
//   XREF to: 005de7f3 (CONDITIONAL_JUMP)
// 005de862: LEA EAX,[EBX + 0x20]
// 005de865: PUSH EAX
// 005de866: LEA EAX,[ESP + 0x80]
// 005de86d: PUSH EAX
// 005de86e: PUSH ESI
// 005de86f: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005de874: ADD ESP,0xc
// 005de877: FLD float ptr [ESP + 0x7c]
// 005de87b: FADD float ptr [ESP + 0x58]
// 005de87f: FCOMP float ptr [ESP + 0x64]
// 005de883: FNSTSW AX
// 005de885: SAHF
// 005de886: JC 0x005de7f3
//   XREF to: 005de7f3 (CONDITIONAL_JUMP)
// 005de88c: FLD float ptr [ESP + 0x7c]
// 005de890: FSUB float ptr [ESP + 0x58]
// 005de894: FCOMP float ptr [ESP + 0x70]
// 005de898: FNSTSW AX
// 005de89a: SAHF
// 005de89b: JA 0x005de7f3
//   XREF to: 005de7f3 (CONDITIONAL_JUMP)
// 005de8a1: FLD float ptr [ESP + 0x84]
// 005de8a8: FADD float ptr [ESP + 0x58]
// 005de8ac: FCOMP float ptr [ESP + 0x6c]
// 005de8b0: FNSTSW AX
// 005de8b2: SAHF
// 005de8b3: JC 0x005de7f3
//   XREF to: 005de7f3 (CONDITIONAL_JUMP)
// 005de8b9: FLD float ptr [ESP + 0x84]
// 005de8c0: FSUB float ptr [ESP + 0x58]
// 005de8c4: FCOMP float ptr [ESP + 0x78]
// 005de8c8: FNSTSW AX
// 005de8ca: SAHF
// 005de8cb: JA 0x005de7f3
//   XREF to: 005de7f3 (CONDITIONAL_JUMP)
// 005de8d1: MOV dword ptr [ESI + 0x2d8],EBX
// 005de8d7: MOV EAX,ESP
// 005de8d9: MOV dword ptr [EBX + 0xbeec],0x40000000
// 005de8e3: PUSH EAX
// 005de8e4: MOV dword ptr [EBX + 0xbee8],ESI
// 005de8ea: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005de8ef: ADD ESP,0x4
// 005de8f2: MOV EAX,ESP
// 005de8f4: MOV EDX,0x41200000
// 005de8f9: PUSH EAX
// 005de8fa: MOV dword ptr [ESP + 0x8],EDX
// 005de8fe: PUSH EBX
// 005de8ff: MOV EDX,dword ptr [EBX + 0x154]
// 005de905: CALL dword ptr [EDX + 0x11c]
// 005de90b: ADD ESP,0x8
// 005de90e: ADD ESP,0x88
// 005de914: POP EBP
// 005de915: POP EDI
// 005de916: POP ESI
// 005de917: POP EBX
// 005de918: RET

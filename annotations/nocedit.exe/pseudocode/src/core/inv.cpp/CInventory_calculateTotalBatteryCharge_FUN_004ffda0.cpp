// Name: core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
// Address: 004ffda0
// Address Range: [[004ffda0, 004ffe0c]]
// Convention: __cdecl
// Signature: float core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0(CInventory * inventory_ptr, float max_charge)
// Cross-references:
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 0050647e [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CBatteryClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

float __cdecl
core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
          (CInventory *inventory_ptr,float max_charge)

{
  CDemonActor *pCVar1;
  int iVar2;
  CInventory *pCVar3;
  float local_20;
  
  local_20 = 1.0 / max_charge;
  iVar2 = 0;
  pCVar3 = inventory_ptr;
  if (0 < inventory_ptr->item_count) {
    do {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (pCVar3->items[0],g_CBatteryClassInfo.name_hash);
      if (pCVar1 != (CDemonActor *)0x0) {
        local_20 = 1.0 / pCVar1[2].location.position.z + local_20;
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CInventory *)&pCVar3->owner;
    } while (iVar2 < inventory_ptr->item_count);
  }
  return 1.0 / local_20;
}


// Assembly code:
// 004ffda0: PUSH EBX
//   Label: core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
// 004ffda1: PUSH ESI
// 004ffda2: PUSH EDI
// 004ffda3: PUSH EBP
// 004ffda4: MOV EBP,ESP
// 004ffda6: SUB ESP,0x10
// 004ffda9: AND ESP,0xfffffff8
// 004ffdac: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ffdaf: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004ffdb2: FLD1
// 004ffdb4: FDIVRP
// 004ffdb6: MOV EDX,dword ptr [EDI + 0x8]
// 004ffdb9: XOR EBX,EBX
// 004ffdbb: FSTP float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004ffdbe: TEST EDX,EDX
// 004ffdc0: JLE 0x004ffde5
//   XREF to: 004ffde5 (CONDITIONAL_JUMP)
// 004ffdc2: MOV ESI,EDI
// 004ffdc4: MOV EAX,[0x0082285c]
//   Label: LAB_004ffdc4
//   XREF to: 0082285c (READ)
// 004ffdc9: PUSH EAX
// 004ffdca: MOV EDX,dword ptr [ESI + 0xc]
// 004ffdcd: PUSH EDX
// 004ffdce: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004ffdd3: ADD ESP,0x8
// 004ffdd6: TEST EAX,EAX
// 004ffdd8: JNZ 0x004ffdfb
//   XREF to: 004ffdfb (CONDITIONAL_JUMP)
// 004ffdda: INC EBX
//   Label: LAB_004ffdda
// 004ffddb: MOV ECX,dword ptr [EDI + 0x8]
// 004ffdde: ADD ESI,0x4
// 004ffde1: CMP EBX,ECX
// 004ffde3: JL 0x004ffdc4
//   XREF to: 004ffdc4 (CONDITIONAL_JUMP)
// 004ffde5: FLD float ptr [ESP]
//   Label: LAB_004ffde5
//   XREF to: Stack[-0x20] (DATA)
// 004ffde8: FLD1
// 004ffdea: FDIVRP
// 004ffdec: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 004ffdf0: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 004ffdf4: MOV ESP,EBP
// 004ffdf6: POP EBP
// 004ffdf7: POP EDI
// 004ffdf8: POP ESI
// 004ffdf9: POP EBX
// 004ffdfa: RET
// 004ffdfb: FLD float ptr [EAX + 0x2d8]
//   Label: LAB_004ffdfb
// 004ffe01: FLD1
// 004ffe03: FDIVRP
// 004ffe05: FADD float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004ffe08: FSTP float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004ffe0b: JMP 0x004ffdda
//   XREF to: 004ffdda (UNCONDITIONAL_JUMP)

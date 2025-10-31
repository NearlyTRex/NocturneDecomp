// Name: core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
// Address: 005742b0
// Address Range: [[005742b0, 005743b4]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0(CDemonSet * this_ptr, SDamageInfo * damage_info, CVector3f * actor_position, void * unknown_param)
// Cross-references:
//   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 (004219e0) at 00421def [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
          (CDemonSet *this_ptr,SDamageInfo *damage_info,CVector3f *actor_position,
          void *unknown_param)

{
  int iVar1;
  CDemonSet *pCVar2;
  
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->damage_listener_count) {
    do {
      (**(code **)((int)pCVar2->damage_listeners[0x55] + 0x118))();
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)pCVar2->cameras;
    } while (iVar1 < this_ptr->damage_listener_count);
  }
  return;
}


// Assembly code:
// 005742b0: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
// 005742b1: PUSH ESI
// 005742b2: PUSH EBP
// 005742b3: SUB ESP,0x50
// 005742b6: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x10] (READ)
// 005742ba: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 005742be: MOV EDX,dword ptr [EAX + 0x14f098]
// 005742c4: XOR ESI,ESI
// 005742c6: TEST EDX,EDX
// 005742c8: JLE 0x005743ae
//   XREF to: 005743ae (CONDITIONAL_JUMP)
// 005742ce: PUSH EDI
// 005742cf: LEA EAX,[EBX + 0xc]
// 005742d2: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005742d6: LEA EAX,[EBX + 0x10]
// 005742d9: LEA EBP,[EBX + 0x14]
// 005742dc: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005742e0: LEA EAX,[EBX + 0x1c]
// 005742e3: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005742e7: LEA EAX,[EBX + 0x20]
// 005742ea: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005742ee: LEA EAX,[EBX + 0x24]
// 005742f1: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x4] (READ)
// 005742f5: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005742f9: MOV EAX,dword ptr [EBX]
//   Label: LAB_005742f9
// 005742fb: MOV EDX,dword ptr [EDI + 0x14f09c]
// 00574301: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00574305: MOV EAX,dword ptr [EBX + 0x4]
// 00574308: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0057430c: MOV EAX,dword ptr [EBX + 0x8]
// 0057430f: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00574313: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 00574317: MOV EAX,dword ptr [EAX]
// 00574319: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0057431d: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 00574321: MOV EAX,dword ptr [EAX]
// 00574323: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00574327: MOV EAX,dword ptr [EBP]
// 0057432a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0057432e: MOV EAX,dword ptr [EBX + 0x18]
// 00574331: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00574335: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 00574339: MOV EAX,dword ptr [EAX]
// 0057433b: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0057433f: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 00574343: MOV EAX,dword ptr [EAX]
// 00574345: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00574349: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 0057434d: MOV EAX,dword ptr [EAX]
// 0057434f: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00574353: MOV EAX,dword ptr [EBX + 0x28]
// 00574356: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0057435a: MOV EAX,dword ptr [EBX + 0x2c]
// 0057435d: PUSH 0x0
// 0057435f: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00574363: LEA ECX,[ESP + 0x8]
//   XREF to: Stack[-0x5c] (DATA)
// 00574367: MOV EAX,dword ptr [EBX + 0x30]
// 0057436a: PUSH ECX
// 0057436b: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0057436f: MOV ECX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 00574373: MOV EAX,dword ptr [EBX + 0x34]
// 00574376: PUSH ECX
// 00574377: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0057437b: MOV ECX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 0057437f: MOV EAX,dword ptr [EBX + 0x38]
// 00574382: PUSH ECX
// 00574383: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00574387: PUSH EDX
// 00574388: MOV EAX,dword ptr [EDX + 0x154]
// 0057438e: CALL dword ptr [EAX + 0x118]
// 00574394: ADD ESP,0x14
// 00574397: MOV EAX,dword ptr [ESP + 0x64]
// 0057439b: INC ESI
// 0057439c: MOV EDX,dword ptr [EAX + 0x14f098]
// 005743a2: ADD EDI,0x4
// 005743a5: CMP ESI,EDX
// 005743a7: JL 0x005742f9
//   XREF to: 005742f9 (CONDITIONAL_JUMP)
// 005743ad: POP EDI
// 005743ae: ADD ESP,0x50
//   Label: LAB_005743ae
// 005743b1: POP EBP
// 005743b2: POP ESI
// 005743b3: POP EBX
// 005743b4: RET

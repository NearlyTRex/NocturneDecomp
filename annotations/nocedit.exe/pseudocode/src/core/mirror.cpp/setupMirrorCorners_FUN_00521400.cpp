// Name: core_mirror.cpp_setupMirrorCorners_FUN_00521400
// Address: 00521400
// Address Range: [[00521400, 00521479]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_setupMirrorCorners_FUN_00521400(SMirror * mirror, CVector3f * corner1, CVector3f * corner2, CVector3f * corner3, CVector3f * corner4)

#include "nocturne.h"

void __cdecl
core_mirror_cpp_setupMirrorCorners_FUN_00521400
          (SMirror *mirror,CVector3f *corner1,CVector3f *corner2,CVector3f *corner3,
          CVector3f *corner4)

{
  CVector3f *pCVar1;
  
  if (mirror != (SMirror *)corner1) {
    (mirror->reflection).corner1.x = corner1->x;
    (mirror->reflection).corner1.y = corner1->y;
    (mirror->reflection).corner1.z = corner1->z;
  }
  pCVar1 = &(mirror->reflection).corner2;
  if (pCVar1 != corner2) {
    pCVar1->x = corner2->x;
    (mirror->reflection).corner2.y = corner2->y;
    (mirror->reflection).corner2.z = corner2->z;
  }
  pCVar1 = &(mirror->reflection).corner3;
  if (pCVar1 != corner3) {
    pCVar1->x = corner3->x;
    (mirror->reflection).corner3.y = corner3->y;
    (mirror->reflection).corner3.z = corner3->z;
  }
  pCVar1 = &(mirror->reflection).corner4;
  if (pCVar1 == corner4) {
    return;
  }
  pCVar1->x = corner4->x;
  (mirror->reflection).corner4.y = corner4->y;
  (mirror->reflection).corner4.z = corner4->z;
  return;
}


// Assembly code:
// 00521400: PUSH EBX
//   Label: core_mirror.cpp_setupMirrorCorners_FUN_00521400
// 00521401: PUSH ESI
// 00521402: PUSH EDI
// 00521403: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00521407: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0052140b: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0052140f: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 00521413: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 00521417: CMP EAX,EDX
// 00521419: JNZ 0x00521454
//   XREF to: 00521454 (CONDITIONAL_JUMP)
// 0052141b: LEA EDX,[EAX + 0xc]
//   Label: LAB_0052141b
// 0052141e: CMP EDX,EBX
// 00521420: JZ 0x00521432
//   XREF to: 00521432 (CONDITIONAL_JUMP)
// 00521422: MOV EDI,dword ptr [EBX]
// 00521424: MOV dword ptr [EDX],EDI
// 00521426: MOV EDI,dword ptr [EBX + 0x4]
// 00521429: MOV dword ptr [EDX + 0x4],EDI
// 0052142c: MOV EDI,dword ptr [EBX + 0x8]
// 0052142f: MOV dword ptr [EDX + 0x8],EDI
// 00521432: LEA EDX,[EAX + 0x18]
//   Label: LAB_00521432
// 00521435: CMP EDX,ECX
// 00521437: JZ 0x00521449
//   XREF to: 00521449 (CONDITIONAL_JUMP)
// 00521439: MOV EBX,dword ptr [ECX]
// 0052143b: MOV dword ptr [EDX],EBX
// 0052143d: MOV EBX,dword ptr [ECX + 0x4]
// 00521440: MOV dword ptr [EDX + 0x4],EBX
// 00521443: MOV EBX,dword ptr [ECX + 0x8]
// 00521446: MOV dword ptr [EDX + 0x8],EBX
// 00521449: ADD EAX,0x24
//   Label: LAB_00521449
// 0052144c: CMP EAX,ESI
// 0052144e: JNZ 0x00521466
//   XREF to: 00521466 (CONDITIONAL_JUMP)
// 00521450: POP EDI
// 00521451: POP ESI
// 00521452: POP EBX
// 00521453: RET
// 00521454: MOV EDI,dword ptr [EDX]
//   Label: LAB_00521454
// 00521456: MOV dword ptr [EAX],EDI
// 00521458: MOV EDI,dword ptr [EDX + 0x4]
// 0052145b: MOV dword ptr [EAX + 0x4],EDI
// 0052145e: MOV EDI,dword ptr [EDX + 0x8]
// 00521461: MOV dword ptr [EAX + 0x8],EDI
// 00521464: JMP 0x0052141b
//   XREF to: 0052141b (UNCONDITIONAL_JUMP)
// 00521466: MOV EDX,dword ptr [ESI]
//   Label: LAB_00521466
// 00521468: MOV dword ptr [EAX],EDX
// 0052146a: MOV EDX,dword ptr [ESI + 0x4]
// 0052146d: MOV dword ptr [EAX + 0x4],EDX
// 00521470: MOV EDX,dword ptr [ESI + 0x8]
// 00521473: MOV dword ptr [EAX + 0x8],EDX
// 00521476: POP EDI
// 00521477: POP ESI
// 00521478: POP EBX
// 00521479: RET

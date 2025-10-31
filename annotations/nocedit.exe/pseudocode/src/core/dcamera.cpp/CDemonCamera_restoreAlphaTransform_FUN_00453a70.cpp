// Name: core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70
// Address: 00453a70
// Address Range: [[00453a70, 00453bcf]]
// Convention: __cdecl
// Signature: CVector3i * core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70(CDemonCamera * this_ptr, CVector3i * screen_pos, int alpha_index, CVector3i * world_pos)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360 (0044e360) at 0044e48e [UNCONDITIONAL_CALL]

#include "nocturne.h"
// Decompilation failed or timed out

// Assembly code:
// 00453a70: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70
// 00453a71: PUSH EDI
// 00453a72: PUSH EBP
// 00453a73: SUB ESP,0x20
// 00453a76: MOV EDI,dword ptr [ESP + 0x30]
// 00453a7a: MOV ECX,dword ptr [ESP + 0x34]
// 00453a7e: MOV EBP,ESI
// 00453a80: MOV EAX,dword ptr [ECX + 0x8]
// 00453a83: MOV EDX,dword ptr [EDI + 0x1c8]
// 00453a89: MOV dword ptr [ESP + 0x8],EAX
// 00453a8d: MOV EAX,dword ptr [ECX]
// 00453a8f: MOV EBX,dword ptr [EDI + 0x1c0]
// 00453a95: SUB EAX,EDX
// 00453a97: MOV EDX,dword ptr [ESP + 0x8]
// 00453a9b: IMUL EDX
// 00453a9d: IDIV EBX
// 00453a9f: MOV EDX,dword ptr [ESP + 0x8]
// 00453aa3: MOV ESI,EAX
// 00453aa5: MOV dword ptr [ESP],EAX
// 00453aa8: MOV EAX,dword ptr [ECX + 0x4]
// 00453aab: MOV ECX,dword ptr [EDI + 0x1cc]
// 00453ab1: MOV EBX,dword ptr [EDI + 0x1c4]
// 00453ab7: SUB EAX,ECX
// 00453ab9: MOV ECX,dword ptr [ESP + 0x38]
// 00453abd: IMUL EDX
// 00453abf: IDIV EBX
// 00453ac1: SHL ECX,0x2
// 00453ac4: MOV EBX,EAX
// 00453ac6: ADD ECX,EDI
// 00453ac8: MOV dword ptr [ESP + 0x4],EAX
// 00453acc: MOV EDX,ESI
// 00453ace: MOV EAX,dword ptr [ECX + 0x136c]
// 00453ad4: IMUL EDX
// 00453ad6: SHRD EAX,EDX,0x10
// 00453ada: MOV dword ptr [ESP + 0x18],EAX
// 00453ade: MOV EDX,EBX
// 00453ae0: MOV EAX,dword ptr [ECX + 0x13cc]
// 00453ae6: IMUL EDX
// 00453ae8: SHRD EAX,EDX,0x10
// 00453aec: MOV EDX,dword ptr [ESP + 0x18]
// 00453af0: ADD EDX,EAX
// 00453af2: MOV dword ptr [ESP + 0x18],EDX
// 00453af6: MOV EAX,dword ptr [ECX + 0x142c]
// 00453afc: MOV EDX,dword ptr [ESP + 0x8]
// 00453b00: IMUL EDX
// 00453b02: SHRD EAX,EDX,0x10
// 00453b06: MOV EDX,dword ptr [ESP + 0x18]
// 00453b0a: ADD EDX,EAX
// 00453b0c: MOV EAX,dword ptr [ESP + 0x38]
// 00453b10: MOV dword ptr [ESP + 0x18],EAX
// 00453b14: MOV dword ptr [ESP + 0x1c],EDX
// 00453b18: MOV EDX,dword ptr [ESP + 0x18]
// 00453b1c: SHL EAX,0x2
// 00453b1f: SUB EAX,EDX
// 00453b21: SHL EAX,0x2
// 00453b24: ADD EDI,EAX
// 00453b26: MOV EAX,dword ptr [ESP + 0x1c]
// 00453b2a: MOV EDX,dword ptr [EDI + 0x11ec]
// 00453b30: ADD EAX,EDX
// 00453b32: MOV dword ptr [ESP + 0xc],EAX
// 00453b36: MOV EDX,ESI
// 00453b38: MOV EAX,dword ptr [ECX + 0x138c]
// 00453b3e: IMUL EDX
// 00453b40: SHRD EAX,EDX,0x10
// 00453b44: MOV dword ptr [ESP + 0x18],EAX
// 00453b48: MOV EDX,EBX
// 00453b4a: MOV EAX,dword ptr [ECX + 0x13ec]
// 00453b50: IMUL EDX
// 00453b52: SHRD EAX,EDX,0x10
// 00453b56: MOV EDX,dword ptr [ESP + 0x18]
// 00453b5a: ADD EDX,EAX
// 00453b5c: MOV dword ptr [ESP + 0x18],EDX
// 00453b60: MOV EAX,dword ptr [ECX + 0x144c]
// 00453b66: MOV EDX,dword ptr [ESP + 0x8]
// 00453b6a: IMUL EDX
// 00453b6c: SHRD EAX,EDX,0x10
// 00453b70: ADD EAX,dword ptr [ESP + 0x18]
// 00453b74: MOV EDX,dword ptr [EDI + 0x11f0]
// 00453b7a: ADD EDX,EAX
// 00453b7c: MOV dword ptr [ESP + 0x10],EDX
// 00453b80: MOV EDX,ESI
// 00453b82: MOV EAX,dword ptr [ECX + 0x13ac]
// 00453b88: IMUL EDX
// 00453b8a: SHRD EAX,EDX,0x10
// 00453b8e: MOV ESI,EAX
// 00453b90: MOV EDX,EBX
// 00453b92: MOV EAX,dword ptr [ECX + 0x140c]
// 00453b98: IMUL EDX
// 00453b9a: SHRD EAX,EDX,0x10
// 00453b9e: MOV EDX,dword ptr [ESP + 0x8]
// 00453ba2: ADD ESI,EAX
// 00453ba4: MOV EAX,dword ptr [ECX + 0x146c]
// 00453baa: IMUL EDX
// 00453bac: SHRD EAX,EDX,0x10
// 00453bb0: MOV EDX,dword ptr [EDI + 0x11f4]
// 00453bb6: ADD EAX,ESI
// 00453bb8: LEA ESI,[ESP + 0xc]
// 00453bbc: ADD EDX,EAX
// 00453bbe: MOV EDI,EBP
// 00453bc0: MOV dword ptr [ESP + 0x14],EDX
// 00453bc4: MOVSD ES:EDI,ESI
// 00453bc5: MOVSD ES:EDI,ESI
// 00453bc6: MOVSD ES:EDI,ESI
// 00453bc7: MOV EAX,EBP
// 00453bc9: ADD ESP,0x20
// 00453bcc: POP EBP
// 00453bcd: POP EDI
// 00453bce: POP EBX
// 00453bcf: RET

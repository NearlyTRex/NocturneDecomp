// Name: engine_3d.c_updateAnimatedTexture_FUN_004050c0
// Address: 004050c0
// Address Range: [[004050c0, 00405164]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_updateAnimatedTexture_FUN_004050c0(SAnimatedTexture * anim_texture)
// Globals:
//   int g_GlobalDeltaTimeInt
// Function calls:
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_updateAnimatedTexture_FUN_004050c0(SAnimatedTexture *anim_texture)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  SMRGLTextureBasic SStack_28;
  
  iVar2 = anim_texture->accumulated_time + g_GlobalDeltaTimeInt;
  anim_texture->accumulated_time = iVar2;
  iVar2 = (iVar2 / anim_texture->frame_duration) % anim_texture->frame_count;
  if (iVar2 != anim_texture->current_frame) {
    anim_texture->dirty_flag = 1;
    anim_texture->current_frame = iVar2;
  }
  SStack_28.base.count = 0;
  pcVar4 = SStack_28.texture_name;
  pcVar3 = (char *)((int)anim_texture + anim_texture->current_frame * 0x20 + 0x1c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&SStack_28);
  if (anim_texture->dirty_flag == 0) {
    return (SMRGLHeaderExtended *)((int)anim_texture + anim_texture->frame_count * 0x20 + 0x1c);
  }
  anim_texture->dirty_flag = 0;
  return (SMRGLHeaderExtended *)((int)anim_texture + anim_texture->frame_count * 0x20 + 0x1c);
}


// Assembly code:
// 004050c0: PUSH EBX
//   Label: engine_3d.c_updateAnimatedTexture_FUN_004050c0
// 004050c1: PUSH ESI
// 004050c2: PUSH EDI
// 004050c3: PUSH EBP
// 004050c4: SUB ESP,0x18
// 004050c7: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 004050cb: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004050d0: MOV EDX,dword ptr [EBX + 0x14]
// 004050d3: ADD EDX,EAX
// 004050d5: MOV ECX,dword ptr [EBX + 0x10]
// 004050d8: MOV EAX,EDX
// 004050da: MOV dword ptr [EBX + 0x14],EDX
// 004050dd: SAR EDX,0x1f
// 004050e0: IDIV ECX
// 004050e2: MOV EDX,EAX
// 004050e4: MOV ESI,dword ptr [EBX + 0x8]
// 004050e7: SAR EDX,0x1f
// 004050ea: IDIV ESI
// 004050ec: CMP EDX,dword ptr [EBX + 0xc]
// 004050ef: JZ 0x004050fb
//   XREF to: 004050fb (CONDITIONAL_JUMP)
// 004050f1: MOV dword ptr [EBX + 0x18],0x1
// 004050f8: MOV dword ptr [EBX + 0xc],EDX
// 004050fb: XOR EBP,EBP
//   Label: LAB_004050fb
// 004050fd: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x24] (WRITE)
// 00405101: MOV ESI,dword ptr [EBX + 0xc]
// 00405104: LEA EAX,[EBX + 0x1c]
// 00405107: SHL ESI,0x5
// 0040510a: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 0040510e: ADD ESI,EAX
// 00405110: PUSH EDI
// 00405111: MOV AL,byte ptr [ESI]
//   Label: LAB_00405111
// 00405113: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x20] (DATA)
// 00405115: CMP AL,0x0
// 00405117: JZ 0x00405129
//   XREF to: 00405129 (CONDITIONAL_JUMP)
// 00405119: MOV AL,byte ptr [ESI + 0x1]
// 0040511c: ADD ESI,0x2
// 0040511f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x1f] (WRITE)
// 00405122: ADD EDI,0x2
// 00405125: CMP AL,0x0
// 00405127: JNZ 0x00405111
//   XREF to: 00405111 (CONDITIONAL_JUMP)
// 00405129: POP EDI
//   Label: LAB_00405129
// 0040512a: MOV EAX,ESP
// 0040512c: PUSH EAX
// 0040512d: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 00405132: MOV EAX,dword ptr [EBX + 0x18]
// 00405135: ADD ESP,0x4
// 00405138: TEST EAX,EAX
// 0040513a: JNZ 0x0040514f
//   XREF to: 0040514f (CONDITIONAL_JUMP)
// 0040513c: MOV EAX,dword ptr [EBX + 0x8]
// 0040513f: SHL EAX,0x5
// 00405142: ADD EAX,EBX
// 00405144: ADD EAX,0x1c
// 00405147: ADD ESP,0x18
// 0040514a: POP EBP
// 0040514b: POP EDI
// 0040514c: POP ESI
// 0040514d: POP EBX
// 0040514e: RET
// 0040514f: MOV dword ptr [EBX + 0x18],EBP
//   Label: LAB_0040514f
// 00405152: MOV EAX,dword ptr [EBX + 0x8]
// 00405155: SHL EAX,0x5
// 00405158: ADD EAX,EBX
// 0040515a: ADD EAX,0x1c
// 0040515d: ADD ESP,0x18
// 00405160: POP EBP
// 00405161: POP EDI
// 00405162: POP ESI
// 00405163: POP EBX
// 00405164: RET

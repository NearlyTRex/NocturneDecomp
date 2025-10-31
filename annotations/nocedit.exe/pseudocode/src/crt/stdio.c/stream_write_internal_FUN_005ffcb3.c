// Name: crt_stdio.c_stream_write_internal_FUN_005ffcb3
// Address: 005ffcb3
// Address Range: [[005ffcb3, 005ffd74]]
// Convention: __cdecl
// Signature: FILE * crt_stdio.c_stream_write_internal_FUN_005ffcb3(FILE * stream, void * buffer, SIZE_T count)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452b01 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e103d [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_prepare_stream_for_write_FUN_00606055
//   crt_stdio.c_reportStreamError_FUN_00606020
//   crt_stdio.c_stream_flush_FUN_006060bb

#include "nocturne.h"

FILE * __cdecl
crt_stdio_c_stream_write_internal_FUN_005ffcb3(FILE *stream,void *buffer,SIZE_T count)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  SIZE_T SVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((*(int *)((int)&stream->_handle + *(int *)(stream->_ptr + 4)) == 0) &&
     (((*(int *)((int)&stream->_link + *(int *)(stream->_ptr + 4)) == 0 &&
       ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 0x4000) == 0)) ||
      (bVar2 = crt_stdio_c_prepare_stream_for_write_FUN_00606055(stream),
      CONCAT31(extraout_var,bVar2) != 0)))) {
    if (count != 0) {
      iVar1 = *(int *)((int)&stream->_cnt + *(int *)(stream->_ptr + 4));
      if ((int)count < *(int *)(iVar1 + 0x1c) - (int)*(undefined4 **)(iVar1 + 0x20)) {
        puVar5 = *(undefined4 **)(iVar1 + 0x20);
                    /* WARNING: Load size is inaccurate */
        for (uVar4 = count >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = *buffer;
          buffer = (undefined4 *)((int)buffer + ((uint)bVar6 * -2 + 1) * 4);
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
                    /* WARNING: Load size is inaccurate */
        for (uVar4 = count & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar5 = *buffer;
          buffer = (undefined4 *)((int)buffer + (uint)bVar6 * -2 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar6 * -2 + 1);
        }
        *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + count;
        SVar3 = count;
      }
      else {
        SVar3 = (**(code **)(*(int *)(iVar1 + 0x28) + 4))();
      }
      if (SVar3 != count) {
        crt_stdio_c_reportStreamError_FUN_00606020
                  ((FileEmbeddedData *)((int)&stream->_ptr + *(int *)(stream->_ptr + 4)),2);
      }
    }
    if ((*(uint *)((int)&stream->_flag + *(int *)(stream->_ptr + 4)) & 0x2000) != 0) {
      crt_stdio_c_stream_flush_FUN_006060bb(stream);
    }
  }
  return stream;
}


// Assembly code:
// 005ffcb3: PUSH EBX
//   Label: crt_stdio.c_stream_write_internal_FUN_005ffcb3
// 005ffcb4: PUSH ESI
// 005ffcb5: PUSH EDI
// 005ffcb6: PUSH EBP
// 005ffcb7: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ffcbb: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005ffcbf: MOV EAX,dword ptr [EBX]
// 005ffcc1: MOV EAX,dword ptr [EAX + 0x4]
// 005ffcc4: MOV ECX,dword ptr [EBX + EAX*0x1 + 0x10]
// 005ffcc8: MOV EDX,EBX
// 005ffcca: TEST ECX,ECX
// 005ffccc: JNZ 0x005ffd42
//   XREF to: 005ffd42 (CONDITIONAL_JUMP)
// 005ffcd2: MOV EAX,dword ptr [EBX]
// 005ffcd4: MOV EAX,dword ptr [EAX + 0x4]
// 005ffcd7: ADD EAX,EBX
// 005ffcd9: MOV EDI,dword ptr [EAX + 0x8]
// 005ffcdc: TEST EDI,EDI
// 005ffcde: JNZ 0x005ffd49
//   XREF to: 005ffd49 (CONDITIONAL_JUMP)
// 005ffce0: MOV EAX,dword ptr [EAX + 0xc]
// 005ffce3: TEST AH,0x40
// 005ffce6: JNZ 0x005ffd49
//   XREF to: 005ffd49 (CONDITIONAL_JUMP)
// 005ffce8: TEST EBP,EBP
//   Label: LAB_005ffce8
// 005ffcea: JZ 0x005ffd34
//   XREF to: 005ffd34 (CONDITIONAL_JUMP)
// 005ffcec: MOV EAX,dword ptr [EBX]
// 005ffcee: MOV EDX,dword ptr [EAX + 0x4]
// 005ffcf1: MOV EDX,dword ptr [EDX + EBX*0x1 + 0x4]
// 005ffcf5: MOV EAX,dword ptr [EDX + 0x1c]
// 005ffcf8: MOV ESI,dword ptr [EDX + 0x20]
// 005ffcfb: SUB EAX,ESI
// 005ffcfd: CMP EBP,EAX
// 005ffcff: JGE 0x005ffd58
//   XREF to: 005ffd58 (CONDITIONAL_JUMP)
// 005ffd01: MOV EDI,ESI
// 005ffd03: MOV ECX,EBP
// 005ffd05: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ffd09: PUSH EDI
// 005ffd0a: MOV EAX,ECX
// 005ffd0c: SHR ECX,0x2
// 005ffd0f: MOVSD.REP ES:EDI,ESI
// 005ffd11: MOV CL,AL
// 005ffd13: AND CL,0x3
// 005ffd16: MOVSB.REP ES:EDI,ESI
// 005ffd18: POP EDI
// 005ffd19: ADD dword ptr [EDX + 0x20],EBP
// 005ffd1c: MOV EAX,EBP
// 005ffd1e: CMP EAX,EBP
//   Label: LAB_005ffd1e
// 005ffd20: JZ 0x005ffd34
//   XREF to: 005ffd34 (CONDITIONAL_JUMP)
// 005ffd22: MOV EAX,dword ptr [EBX]
// 005ffd24: MOV EAX,dword ptr [EAX + 0x4]
// 005ffd27: PUSH 0x2
// 005ffd29: ADD EAX,EBX
// 005ffd2b: PUSH EAX
// 005ffd2c: CALL crt_stdio.c_reportStreamError_FUN_00606020
//   XREF to: 00606020 (UNCONDITIONAL_CALL)
// 005ffd31: ADD ESP,0x8
// 005ffd34: MOV EAX,dword ptr [EBX]
//   Label: LAB_005ffd34
// 005ffd36: MOV EAX,dword ptr [EAX + 0x4]
// 005ffd39: MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc]
// 005ffd3d: TEST AH,0x20
// 005ffd40: JNZ 0x005ffd6a
//   XREF to: 005ffd6a (CONDITIONAL_JUMP)
// 005ffd42: MOV EAX,EBX
//   Label: LAB_005ffd42
// 005ffd44: POP EBP
// 005ffd45: POP EDI
// 005ffd46: POP ESI
// 005ffd47: POP EBX
// 005ffd48: RET
// 005ffd49: PUSH EDX
//   Label: LAB_005ffd49
// 005ffd4a: CALL crt_stdio.c_prepare_stream_for_write_FUN_00606055
//   XREF to: 00606055 (UNCONDITIONAL_CALL)
// 005ffd4f: ADD ESP,0x4
// 005ffd52: TEST EAX,EAX
// 005ffd54: JNZ 0x005ffce8
//   XREF to: 005ffce8 (CONDITIONAL_JUMP)
// 005ffd56: JMP 0x005ffd42
//   XREF to: 005ffd42 (UNCONDITIONAL_JUMP)
// 005ffd58: PUSH EBP
//   Label: LAB_005ffd58
// 005ffd59: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005ffd5d: PUSH EDI
// 005ffd5e: MOV EAX,dword ptr [EDX + 0x28]
// 005ffd61: PUSH EDX
// 005ffd62: CALL dword ptr [EAX + 0x4]
// 005ffd65: ADD ESP,0xc
// 005ffd68: JMP 0x005ffd1e
//   XREF to: 005ffd1e (UNCONDITIONAL_JUMP)
// 005ffd6a: PUSH EBX
//   Label: LAB_005ffd6a
// 005ffd6b: CALL crt_stdio.c_stream_flush_FUN_006060bb
//   XREF to: 006060bb (UNCONDITIONAL_CALL)
// 005ffd70: ADD ESP,0x4
// 005ffd73: JMP 0x005ffd42
//   XREF to: 005ffd42 (UNCONDITIONAL_JUMP)

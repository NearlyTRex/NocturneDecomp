// Name: crt_string.c_memcpy_FUN_0060cd60
// Address: 0060cd60
// Address Range: [[0060cd60, 0060cd88]]
// Convention: __cdecl
// Signature: void * crt_string.c_memcpy_FUN_0060cd60(void * dest, void * src, SIZE_T count)
// Cross-references:
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f411 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 (0060e6a0) at 0060e7c1 [UNCONDITIONAL_CALL]
//   crt_string.c_wcsdup_FUN_0060a660 (0060a660) at 0060a68d [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fb40 (0060fb40) at 0060fbb2 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fcf4 (0060fcf4) at 0060fe05 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void * __cdecl crt_string_c_memcpy_FUN_0060cd60(void *dest,void *src,SIZE_T count)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)dest;
                    /* WARNING: Load size is inaccurate */
  for (uVar1 = count >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *src;
    src = (undefined4 *)((int)src + 4);
    puVar2 = puVar2 + 1;
  }
                    /* WARNING: Load size is inaccurate */
  for (uVar1 = count & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *src;
    src = (undefined4 *)((int)src + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return dest;
}


// Assembly code:
// 0060cd60: PUSH ESI
//   Label: crt_string.c_memcpy_FUN_0060cd60
// 0060cd61: PUSH EDI
// 0060cd62: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0060cd66: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0060cd6a: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060cd6e: PUSH ES
// 0060cd6f: MOV AX,DS
// 0060cd71: MOV ES,AX
// 0060cd73: PUSH EDI
// 0060cd74: MOV EAX,ECX
// 0060cd76: SHR ECX,0x2
// 0060cd79: MOVSD.REP ES:EDI,ESI
// 0060cd7b: MOV CL,AL
// 0060cd7d: AND CL,0x3
// 0060cd80: MOVSB.REP ES:EDI,ESI
// 0060cd82: POP EDI
// 0060cd83: POP ES
// 0060cd84: MOV EAX,EDI
// 0060cd86: POP EDI
// 0060cd87: POP ESI
// 0060cd88: RET

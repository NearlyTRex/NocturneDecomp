// Name: engine_clipper.c_copyMemory_FUN_00437200
// Address: 00437200
// Address Range: [[00437200, 00437220]]
// Convention: __cdecl
// Signature: void engine_clipper.c_copyMemory_FUN_00437200(void * dest_ptr, void * src_ptr, int byte_count)

#include "nocturne.h"

void __cdecl engine_clipper_c_copyMemory_FUN_00437200(void *dest_ptr,void *src_ptr,int byte_count)

{
  uint uVar1;
  
                    /* WARNING: Load size is inaccurate */
  for (uVar1 = (uint)byte_count >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)dest_ptr = *src_ptr;
    src_ptr = (undefined4 *)((int)src_ptr + 4);
    dest_ptr = (undefined4 *)((int)dest_ptr + 4);
  }
                    /* WARNING: Load size is inaccurate */
  for (uVar1 = byte_count & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)dest_ptr = *src_ptr;
    src_ptr = (undefined4 *)((int)src_ptr + 1);
    dest_ptr = (undefined4 *)((int)dest_ptr + 1);
  }
  return;
}


// Assembly code:
// 00437200: PUSH ESI
//   Label: engine_clipper.c_copyMemory_FUN_00437200
// 00437201: PUSH EDI
// 00437202: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00437206: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0043720a: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0043720e: PUSH EDI
// 0043720f: MOV EAX,ECX
// 00437211: SHR ECX,0x2
// 00437214: MOVSD.REP ES:EDI,ESI
// 00437216: MOV CL,AL
// 00437218: AND CL,0x3
// 0043721b: MOVSB.REP ES:EDI,ESI
// 0043721d: POP EDI
// 0043721e: POP EDI
// 0043721f: POP ESI
// 00437220: RET

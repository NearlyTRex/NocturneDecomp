// Name: cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0
// Address: 004317b0
// Address Range: [[004317b0, 0043182d]]
// Convention: __cdecl
// Signature: void * cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0(char * filename, int width, int height, void * span_data_buffer, void * buffer, int transparent_color_index)
// Globals:
//   TerminatedCString s_cockpit_ckptutil_c_0061796b
// Function calls:
//   cockpit_ckptutil.c_applyActPalette_FUN_004319b0
//   cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730
//   cockpit_ckptutil.c_readBitmapFile_FUN_00431870
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

void * __cdecl
cockpit_ckptutil_c_loadBitmapWithPalette_FUN_004317b0
          (char *filename,int width,int height,void *span_data_buffer,void *buffer,
          int transparent_color_index)

{
  void *pvVar1;
  int size;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  
  size = width * height;
  pvVar1 = buffer;
  if (buffer == (void *)0x0) {
    pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\cockpit\\ckptutil.c",0x99);
    if (pvVar1 == (void *)0x0) {
      return (void *)0x0;
    }
  }
  pvVar1 = cockpit_ckptutil_c_readBitmapFile_FUN_00431870(filename,pvVar1,size);
  cockpit_ckptutil_c_applyActPalette_FUN_004319b0(filename,pvVar1,size,in_stack_00000020);
  if (in_stack_0000001c != 0) {
    cockpit_ckptutil_c_generateTransparencySpans_FUN_00435730
              (pvVar1,filename,in_stack_0000001c,(int)buffer,(void *)transparent_color_index,
               in_stack_00000024);
  }
  return pvVar1;
}


// Assembly code:
// 004317b0: PUSH ESI
//   Label: cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0
// 004317b1: PUSH EDI
// 004317b2: PUSH EBP
// 004317b3: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004317b7: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 004317bb: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004317bf: IMUL ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004317c4: TEST EDI,EDI
// 004317c6: JZ 0x00431811
//   XREF to: 00431811 (CONDITIONAL_JUMP)
// 004317c8: PUSH EBX
//   Label: LAB_004317c8
// 004317c9: PUSH ESI
// 004317ca: PUSH EDI
// 004317cb: PUSH EBP
// 004317cc: CALL cockpit_ckptutil.c_readBitmapFile_FUN_00431870
//   XREF to: 00431870 (UNCONDITIONAL_CALL)
// 004317d1: ADD ESP,0xc
// 004317d4: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004317d8: PUSH ECX
// 004317d9: PUSH ESI
// 004317da: PUSH EAX
// 004317db: PUSH EBP
// 004317dc: MOV EBX,EAX
// 004317de: MOV EDI,EAX
// 004317e0: CALL cockpit_ckptutil.c_applyActPalette_FUN_004319b0
//   XREF to: 004319b0 (UNCONDITIONAL_CALL)
// 004317e5: ADD ESP,0x10
// 004317e8: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004317ec: TEST ESI,ESI
// 004317ee: JZ 0x0043180a
//   XREF to: 0043180a (CONDITIONAL_JUMP)
// 004317f0: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004317f4: PUSH EAX
// 004317f5: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 004317f9: PUSH EDX
// 004317fa: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004317fe: PUSH ECX
// 004317ff: PUSH ESI
// 00431800: PUSH EBP
// 00431801: PUSH EBX
// 00431802: CALL cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730
//   XREF to: 00435730 (UNCONDITIONAL_CALL)
// 00431807: ADD ESP,0x18
// 0043180a: MOV EAX,EDI
//   Label: LAB_0043180a
// 0043180c: POP EBX
// 0043180d: POP EBP
// 0043180e: POP EDI
// 0043180f: POP ESI
// 00431810: RET
// 00431811: PUSH 0x99
//   Label: LAB_00431811
// 00431816: PUSH 0x61796b
//   XREF to: 0061796b (DATA)
// 0043181b: PUSH ESI
// 0043181c: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00431821: ADD ESP,0xc
// 00431824: MOV EDI,EAX
// 00431826: TEST EAX,EAX
// 00431828: JNZ 0x004317c8
//   XREF to: 004317c8 (CONDITIONAL_JUMP)
// 0043182a: POP EBP
// 0043182b: POP EDI
// 0043182c: POP ESI
// 0043182d: RET

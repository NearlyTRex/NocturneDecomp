// Name: cockpit_ckptutil.c_copyBitmapRegion_FUN_00432860
// Address: 00432860
// Address Range: [[00432860, 004328cd]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_copyBitmapRegion_FUN_00432860(void * src_buffer, int src_stride, void * dest_buffer, int copy_width, int copy_height, int src_x, int src_y)
// Function calls:
//   cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_copyBitmapRegion_FUN_00432860
          (void *src_buffer,int src_stride,void *dest_buffer,int copy_width,int copy_height,
          int src_x,int src_y)

{
  OptimizedMemcpyFunc *pOVar1;
  void *dest_buffer_00;
  int iVar2;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_00000038;
  
  if ((copy_width != 0) && (src_buffer != (void *)0x0)) {
    pOVar1 = cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00431780();
    dest_buffer_00 =
         (void *)((int)src_buffer + in_stack_00000024 * (int)dest_buffer + in_stack_00000020);
    iVar2 = 0;
    if (0 < src_y) {
      do {
        iVar2 = iVar2 + 1;
        (*pOVar1)(dest_buffer_00,(void *)copy_width,copy_height);
        copy_width = copy_width + copy_height;
        dest_buffer_00 = (void *)((int)dest_buffer_00 + in_stack_00000028);
      } while (iVar2 < in_stack_00000038);
      return;
    }
  }
  return;
}


// Assembly code:
// 00432860: PUSH EBX
//   Label: cockpit_ckptutil.c_copyBitmapRegion_FUN_00432860
// 00432861: PUSH ESI
// 00432862: PUSH EDI
// 00432863: PUSH EBP
// 00432864: SUB ESP,0x4
// 00432867: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0043286b: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0043286f: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 00432873: TEST EDI,EDI
// 00432875: JZ 0x00432880
//   XREF to: 00432880 (CONDITIONAL_JUMP)
// 00432877: TEST EBX,EBX
// 00432879: JNZ 0x00432888
//   XREF to: 00432888 (CONDITIONAL_JUMP)
// 0043287b: LEA EAX,[EAX]
// 0043287e: MOV ECX,ECX
// 00432880: ADD ESP,0x4
//   Label: LAB_00432880
// 00432883: POP EBP
// 00432884: POP EDI
// 00432885: POP ESI
// 00432886: POP EBX
// 00432887: RET
// 00432888: CALL cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780
//   Label: LAB_00432888
//   XREF to: 00431780 (UNCONDITIONAL_CALL)
// 0043288d: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00432891: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00432894: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x20] (READ)
// 00432898: IMUL EAX,EDX
// 0043289b: ADD EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x1c] (READ)
// 0043289f: ADD EBX,EAX
// 004328a1: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x18] (READ)
// 004328a5: XOR ESI,ESI
// 004328a7: TEST EAX,EAX
// 004328a9: JLE 0x00432880
//   XREF to: 00432880 (CONDITIONAL_JUMP)
// 004328ab: PUSH EBP
//   Label: LAB_004328ab
// 004328ac: PUSH EDI
// 004328ad: PUSH EBX
// 004328ae: INC ESI
// 004328af: CALL dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 004328b3: ADD ESP,0xc
// 004328b6: ADD EDI,EBP
// 004328b8: MOV EDX,dword ptr [ESP + 0x1c]
// 004328bc: MOV ECX,dword ptr [ESP + 0x2c]
// 004328c0: ADD EBX,EDX
// 004328c2: CMP ESI,ECX
// 004328c4: JL 0x004328ab
//   XREF to: 004328ab (CONDITIONAL_JUMP)
// 004328c6: ADD ESP,0x4
// 004328c9: POP EBP
// 004328ca: POP EDI
// 004328cb: POP ESI
// 004328cc: POP EBX
// 004328cd: RET

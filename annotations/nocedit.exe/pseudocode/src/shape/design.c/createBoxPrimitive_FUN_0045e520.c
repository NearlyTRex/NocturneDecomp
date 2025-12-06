// Name: shape_design.c_createBoxPrimitive_FUN_0045e520
// Address: 0045e520
// Address Range: [[0045e520, 0045ea88]]
// Convention: unknown
// Signature: undefined shape_design.c_createBoxPrimitive_FUN_0045e520()

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0045e5b1) */
/* WARNING: Removing unreachable block (ram,0x0045e5a3) */
/* WARNING: Removing unreachable block (ram,0x0045e5c2) */
/* WARNING: Removing unreachable block (ram,0x0045e5e2) */
/* WARNING: Removing unreachable block (ram,0x0045e5e4) */
/* WARNING: Removing unreachable block (ram,0x0045e5f0) */
/* WARNING: Removing unreachable block (ram,0x0045e61c) */
/* WARNING: Removing unreachable block (ram,0x0045e8d1) */
/* WARNING: Removing unreachable block (ram,0x0045e8db) */
/* WARNING: Removing unreachable block (ram,0x0045e9a4) */
/* WARNING: Removing unreachable block (ram,0x0045e9aa) */
/* WARNING: Removing unreachable block (ram,0x0045e9b4) */
/* WARNING: Removing unreachable block (ram,0x0045ea7d) */
/* WARNING: Removing unreachable block (ram,0x0045e617) */
/* WARNING: Removing unreachable block (ram,0x0045e5eb) */

void shape_design_c_createBoxPrimitive_FUN_0045e520(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  
  bVar4 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff78,0x4f,0,0,"Enter in X,Y,Z box dimentions : ");
  iVar2 = -1;
  pcVar3 = &stack0xffffff78;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    crt_stdio_c_sscanf_FUN_0060013c(&stack0xffffff78,"%f,%f,%f");
  }
  return;
}

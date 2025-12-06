// Name: core_script.cpp_CScript_loadState_FUN_00560820
// Address: 00560820
// Address Range: [[00560820, 00560b46]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_loadState_FUN_00560820()

#include "nocturne.h"

/* Signature: void core_script.cpp_CScript_loadState(CScript* pScript, uint pFilePtr, int
   param_3) */

int core_script_cpp_CScript_loadState_FUN_00560820
              (uint param_1,uint param_2,int unaff_EBX,uint param_4,int param_5,
              FILE *param_6)

{
  int iVar1;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar2;
  int in_stack_00000040;
  int in_stack_00000048;
  int in_stack_00000058;
  byte *puStack_b8;
  
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffee8,0xff,param_6);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
  if (6 < unaff_EBP) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0xf56;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::loadState - file version is newer than .EXE");
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef4,0xff,param_6);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
  if (1 < unaff_EBX) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffefc,0xff,param_6);
    crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
  }
  if (2 < param_5) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff04,0xff,param_6);
    crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff04,0xff,param_6);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%g\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff0c,0xff,param_6);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff14,0xff,param_6);
  *(byte *)(param_5 + 0x54) = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"\"%[^\"]");
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"\"\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff20,0xff,param_6);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%g\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff28,0xff,param_6);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%g\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff30,0xff,param_6);
  core_script_cpp_GetReferencedActor_FUN_00560760();
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff38,0xff,param_6);
  iVar1 = core_script_cpp_GetReferencedActor_FUN_00560760();
  if (4 < in_stack_00000040) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff40,0xff,param_6);
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
  }
  if (3 < in_stack_00000048) {
    crt_stdio_c_fgets_FUN_005fefd0((char *)&puStack_b8,0xff,param_6);
    iVar2 = 0;
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
    if (0 < *(int *)(param_5 + 0x45c)) {
      do {
        iVar2 = iVar2 + 1;
        crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
        iVar1 = *(int *)(param_5 + 0x45c);
      } while (iVar2 < iVar1);
    }
  }
  if (5 < in_stack_00000048) {
    crt_stdio_c_fgets_FUN_005fefd0((char *)&puStack_b8,0xff,param_6);
    puStack_b8 = &stack0x00000050;
    crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%u\n");
    puStack_b8 = (byte *)0x560b1c;
    iVar1 = core_script_cpp_CalculateCRC_FUN_00560d80();
    if (iVar1 != in_stack_00000058) {
      puStack_b8 = (byte *)0x560b39;
      shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                (g_CEditorToolsPtr,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return extraout_EAX;
    }
  }
  return iVar1;
}

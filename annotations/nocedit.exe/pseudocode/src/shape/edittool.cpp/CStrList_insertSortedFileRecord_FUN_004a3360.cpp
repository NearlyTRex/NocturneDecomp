// Name: shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360
// Address: 004a3360
// Address Range: [[004a3360, 004a35a7]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360(CStrList * this_ptr, char * search_key, char * file_path, int file_size)
// Cross-references:
//   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 (004a35b0) at 004a372e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_006239af
//   TerminatedCString s_m_d_y_I_M_S_p_006239bb
//   TerminatedCString s_s_s_d_s_s_006239d0
//   char[512] g_Field1ParseBuffer
//   undefined4 DAT_00678d8c
//   char[512] g_Field2ParseBuffer
//   undefined4 DAT_00678f8c
//   char[260] g_FilePathBuffer
//   undefined4 DAT_0067918c
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   crt_string.c_memmove_FUN_005fe5e0
//   crt_string.c_stricmp_FUN_005fe7f0
//   crt_string.c_strupr_FUN_00600770
//   crt_time.c_localtime_FUN_00600288
//   crt_time.c_strftime_FUN_006002d4
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_004a3360
          (CStrList *this_ptr,char *search_key,char *file_path,int file_size)

{
  char cVar1;
  int index;
  char *pcVar2;
  tm *time_ptr;
  int iVar3;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  undefined4 *puVar6;
  byte bVar7;
  char *in_stack_00000014;
  char *in_stack_00000018;
  CStrList *in_stack_00000024;
  char *in_stack_fffff4e4;
  CStrList *pCVar8;
  char *pcVar9;
  char acStack_90c [8];
  undefined4 local_904 [129];
  undefined4 auStack_700 [2];
  char acStack_6f8 [240];
  char acStack_608 [4];
  char acStack_604 [272];
  char acStack_4f4 [4];
  char acStack_4f0 [260];
  char acStack_3ec [4];
  char cStack_3e8;
  undefined1 auStack_3e7 [251];
  char acStack_2ec [248];
  char acStack_1f4 [4];
  char acStack_1f0 [268];
  char acStack_e4 [4];
  char acStack_e0 [4];
  char acStack_dc [172];
  char acStack_30 [28];
  int local_14;
  
  bVar7 = 0;
  iVar5 = this_ptr->item_count + -1;
  local_14 = 0;
  if (-1 < iVar5) {
    do {
      index = (local_14 + iVar5) / 2;
      pcVar2 = g_Field1ParseBuffer;
      puVar6 = local_904;
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + ((uint)bVar7 * -2 + 1) * 4;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      pcVar9 = "%[^\t]\t%[^\t]";
      pcVar2 = g_Field2ParseBuffer;
      puVar6 = (undefined4 *)&stack0xfffff4fc;
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + ((uint)bVar7 * -2 + 1) * 4;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      pCVar8 = this_ptr;
      iVar3 = index;
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,index);
      crt_stdio_c_sscanf_FUN_0060013c(pcVar2,in_stack_fffff4e4,pCVar8,iVar3,pcVar9);
      in_stack_fffff4e4 = (char *)0x0;
      engine_dosio_c_makePath_FUN_00481f50
                (acStack_608,(char *)0x0,(char *)0x0,acStack_90c,&stack0xfffff4f4);
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0((char *)this_ptr,acStack_604);
      if (iVar3 == 0) {
        return;
      }
      if (iVar3 < 0) {
        iVar5 = index + -1;
      }
      else {
        local_14 = index + 1;
      }
    } while (local_14 <= iVar5);
  }
  time_ptr = crt_time_c_localtime_FUN_00600288((time_t *)&stack0x00000014);
  crt_time_c_strftime_FUN_006002d4(acStack_30,0x1e,"%m/%d/%y %I:%M:%S %p",time_ptr);
  pcVar2 = g_FilePathBuffer;
  puVar6 = auStack_700;
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + ((uint)bVar7 * -2 + 1) * 4;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  if (in_stack_00000014 != (char *)0x0) {
    engine_dosio_c_splitPath_FUN_00481f20
              (in_stack_00000014,(char *)0x0,(char *)0x0,acStack_1f4,acStack_4f4);
    engine_dosio_c_makePath_FUN_00481f50
              (acStack_6f8,(char *)0x0,(char *)0x0,acStack_1f0,acStack_4f0);
  }
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000018,(char *)0x0,(char *)0x0,acStack_2ec,acStack_3ec);
  if (cStack_3e8 == '.') {
    uVar4 = 0xffffffff;
    pcVar2 = &cStack_3e8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    crt_string_c_memmove_FUN_005fe5e0(&cStack_3e8,auStack_3e7,~uVar4 - 1);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_e4,"%s\t%s\t%d\t%s\t%s");
  crt_string_c_strupr_FUN_00600770(acStack_e0);
  (*in_stack_00000024->vtable->insert)(in_stack_00000024,(int)file_path,acStack_dc);
  return;
}


// Assembly code:
// 004a3360: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360
// 004a3361: PUSH ESI
// 004a3362: PUSH EDI
// 004a3363: PUSH EBP
// 004a3364: SUB ESP,0xaf4
// 004a336a: MOV EBP,dword ptr [ESP + 0xb08]
//   XREF to: Stack[0x4] (READ)
// 004a3371: MOV EBP,dword ptr [EBP]
// 004a3374: XOR EDX,EDX
// 004a3376: DEC EBP
// 004a3377: MOV dword ptr [ESP + 0xaf0],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004a337e: TEST EBP,EBP
// 004a3380: JL 0x004a3441
//   XREF to: 004a3441 (CONDITIONAL_JUMP)
// 004a3386: MOV EDX,dword ptr [ESP + 0xaf0]
//   Label: LAB_004a3386
//   XREF to: Stack[-0x14] (READ)
// 004a338d: ADD EDX,EBP
// 004a338f: MOV EAX,EDX
// 004a3391: SAR EDX,0x1f
// 004a3394: SUB EAX,EDX
// 004a3396: SAR EAX,0x1
// 004a3398: MOV ECX,0x80
// 004a339d: LEA EDI,[ESP + 0x200]
//   XREF to: Stack[-0x904] (DATA)
// 004a33a4: MOV ESI,0x678d88
//   XREF to: 00678d88 (DATA)
// 004a33a9: MOV EBX,EAX
// 004a33ab: MOV EAX,ESP
// 004a33ad: MOVSD.REP ES:EDI,ESI
//   XREF to: 00678d88 (READ)
//   XREF to: 00678d8c (READ)
// 004a33af: PUSH EAX
// 004a33b0: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x904] (DATA)
// 004a33b7: MOV ECX,0x80
// 004a33bc: PUSH EAX
// 004a33bd: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0xb04] (DATA)
// 004a33c1: MOV ESI,0x678f88
//   XREF to: 00678f88 (DATA)
// 004a33c6: PUSH 0x6239af
//   XREF to: 006239af (DATA)
// 004a33cb: MOVSD.REP ES:EDI,ESI
//   XREF to: 00678f88 (READ)
//   XREF to: 00678f8c (READ)
// 004a33cd: PUSH EBX
// 004a33ce: MOV ESI,dword ptr [ESP + 0xb18]
//   XREF to: Stack[0x4] (READ)
// 004a33d5: PUSH ESI
// 004a33d6: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004a33db: ADD ESP,0x8
// 004a33de: PUSH EAX
// 004a33df: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 004a33e4: ADD ESP,0x10
// 004a33e7: MOV EAX,ESP
// 004a33e9: PUSH EAX
// 004a33ea: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x904] (DATA)
// 004a33f1: PUSH EAX
// 004a33f2: PUSH 0x0
// 004a33f4: PUSH 0x0
// 004a33f6: LEA EAX,[ESP + 0x514]
//   XREF to: Stack[-0x600] (DATA)
// 004a33fd: PUSH EAX
// 004a33fe: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004a3403: ADD ESP,0x14
// 004a3406: LEA EAX,[ESP + 0x504]
//   XREF to: Stack[-0x600] (DATA)
// 004a340d: PUSH EAX
// 004a340e: MOV EDI,dword ptr [ESP + 0xb10]
//   XREF to: Stack[0x8] (READ)
// 004a3415: PUSH EDI
// 004a3416: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004a341b: ADD ESP,0x8
// 004a341e: TEST EAX,EAX
// 004a3420: JZ 0x004a3595
//   XREF to: 004a3595 (CONDITIONAL_JUMP)
// 004a3426: JL 0x004a35a0
//   XREF to: 004a35a0 (CONDITIONAL_JUMP)
// 004a342c: INC EBX
// 004a342d: MOV dword ptr [ESP + 0xaf0],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004a3434: CMP EBP,dword ptr [ESP + 0xaf0]
//   Label: LAB_004a3434
//   XREF to: Stack[-0x14] (READ)
// 004a343b: JGE 0x004a3386
//   XREF to: 004a3386 (CONDITIONAL_JUMP)
// 004a3441: LEA EAX,[ESP + 0xb18]
//   Label: LAB_004a3441
//   XREF to: Stack[0x14] (DATA)
// 004a3448: PUSH EAX
// 004a3449: CALL crt_time.c_localtime_FUN_00600288
//   XREF to: 00600288 (UNCONDITIONAL_CALL)
// 004a344e: ADD ESP,0x4
// 004a3451: PUSH EAX
// 004a3452: PUSH 0x6239bb
//   XREF to: 006239bb (DATA)
// 004a3457: PUSH 0x1e
// 004a3459: LEA EAX,[ESP + 0xadc]
//   XREF to: Stack[-0x34] (DATA)
// 004a3460: PUSH EAX
// 004a3461: LEA EDI,[ESP + 0x410]
//   XREF to: Stack[-0x704] (DATA)
// 004a3468: MOV ESI,0x679188
//   XREF to: 00679188 (DATA)
// 004a346d: CALL crt_time.c_strftime_FUN_006002d4
//   XREF to: 006002d4 (UNCONDITIONAL_CALL)
// 004a3472: ADD ESP,0x10
// 004a3475: MOV ECX,0x41
// 004a347a: MOV EBX,dword ptr [ESP + 0xb10]
//   XREF to: Stack[0xc] (READ)
// 004a3481: MOVSD.REP ES:EDI,ESI
//   XREF to: 00679188 (READ)
//   XREF to: 0067918c (READ)
// 004a3483: TEST EBX,EBX
// 004a3485: JZ 0x004a34c8
//   XREF to: 004a34c8 (CONDITIONAL_JUMP)
// 004a3487: LEA EAX,[ESP + 0x608]
//   XREF to: Stack[-0x4fc] (DATA)
// 004a348e: PUSH EAX
// 004a348f: LEA EAX,[ESP + 0x90c]
//   XREF to: Stack[-0x1fc] (DATA)
// 004a3496: PUSH EAX
// 004a3497: PUSH 0x0
// 004a3499: PUSH 0x0
// 004a349b: PUSH EBX
// 004a349c: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004a34a1: ADD ESP,0x14
// 004a34a4: LEA EAX,[ESP + 0x608]
//   XREF to: Stack[-0x4fc] (DATA)
// 004a34ab: PUSH EAX
// 004a34ac: LEA EAX,[ESP + 0x90c]
//   XREF to: Stack[-0x1fc] (DATA)
// 004a34b3: PUSH EAX
// 004a34b4: PUSH 0x0
// 004a34b6: PUSH 0x0
// 004a34b8: LEA EAX,[ESP + 0x410]
//   XREF to: Stack[-0x704] (DATA)
// 004a34bf: PUSH EAX
// 004a34c0: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004a34c5: ADD ESP,0x14
// 004a34c8: LEA EAX,[ESP + 0x708]
//   Label: LAB_004a34c8
//   XREF to: Stack[-0x3fc] (DATA)
// 004a34cf: PUSH EAX
// 004a34d0: LEA EAX,[ESP + 0x80c]
//   XREF to: Stack[-0x2fc] (DATA)
// 004a34d7: PUSH EAX
// 004a34d8: PUSH 0x0
// 004a34da: PUSH 0x0
// 004a34dc: MOV EDI,dword ptr [ESP + 0xb1c]
//   XREF to: Stack[0x8] (READ)
// 004a34e3: PUSH EDI
// 004a34e4: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004a34e9: ADD ESP,0x14
// 004a34ec: CMP byte ptr [ESP + 0x708],0x2e
//   XREF to: Stack[-0x3fc] (READ)
// 004a34f4: JNZ 0x004a3520
//   XREF to: 004a3520 (CONDITIONAL_JUMP)
// 004a34f6: LEA EDI,[ESP + 0x708]
//   XREF to: Stack[-0x3fc] (DATA)
// 004a34fd: SUB ECX,ECX
// 004a34ff: DEC ECX
// 004a3500: XOR EAX,EAX
// 004a3502: SCASB.REPNE ES:EDI
// 004a3504: NOT ECX
// 004a3506: DEC ECX
// 004a3507: PUSH ECX
// 004a3508: LEA EAX,[ESP + 0x70d]
//   XREF to: Stack[-0x3fb] (DATA)
// 004a350f: PUSH EAX
// 004a3510: LEA EAX,[ESP + 0x710]
//   XREF to: Stack[-0x3fc] (DATA)
// 004a3517: PUSH EAX
// 004a3518: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004a351d: ADD ESP,0xc
// 004a3520: LEA EAX,[ESP + 0x400]
//   Label: LAB_004a3520
//   XREF to: Stack[-0x704] (DATA)
// 004a3527: PUSH EAX
// 004a3528: LEA EAX,[ESP + 0xad4]
//   XREF to: Stack[-0x34] (DATA)
// 004a352f: PUSH EAX
// 004a3530: MOV EBP,dword ptr [ESP + 0xb1c]
//   XREF to: Stack[0x10] (READ)
// 004a3537: PUSH EBP
// 004a3538: LEA EAX,[ESP + 0x714]
//   XREF to: Stack[-0x3fc] (DATA)
// 004a353f: PUSH EAX
// 004a3540: LEA EAX,[ESP + 0x818]
//   XREF to: Stack[-0x2fc] (DATA)
// 004a3547: PUSH EAX
// 004a3548: PUSH 0x6239d0
//   XREF to: 006239d0 (DATA)
// 004a354d: LEA EAX,[ESP + 0xa20]
//   XREF to: Stack[-0xfc] (DATA)
// 004a3554: PUSH EAX
// 004a3555: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004a355a: ADD ESP,0x1c
// 004a355d: LEA EAX,[ESP + 0xa08]
//   XREF to: Stack[-0xfc] (DATA)
// 004a3564: PUSH EAX
// 004a3565: CALL crt_string.c_strupr_FUN_00600770
//   XREF to: 00600770 (UNCONDITIONAL_CALL)
// 004a356a: ADD ESP,0x4
// 004a356d: LEA EAX,[ESP + 0xa08]
//   XREF to: Stack[-0xfc] (DATA)
// 004a3574: PUSH EAX
// 004a3575: MOV EAX,dword ptr [ESP + 0xaf4]
//   XREF to: Stack[-0x14] (READ)
// 004a357c: MOV EDX,dword ptr [ESP + 0xb0c]
//   XREF to: Stack[0x4] (READ)
// 004a3583: PUSH EAX
// 004a3584: MOV ECX,dword ptr [ESP + 0xb10]
//   XREF to: Stack[0x4] (READ)
// 004a358b: MOV EDX,dword ptr [EDX + 0xc]
// 004a358e: PUSH ECX
// 004a358f: CALL dword ptr [EDX + 0xc]
// 004a3592: ADD ESP,0xc
// 004a3595: ADD ESP,0xaf4
//   Label: LAB_004a3595
// 004a359b: POP EBP
// 004a359c: POP EDI
// 004a359d: POP ESI
// 004a359e: POP EBX
// 004a359f: RET
// 004a35a0: LEA EBP,[EBX + -0x1]
//   Label: LAB_004a35a0
// 004a35a3: JMP 0x004a3434
//   XREF to: 004a3434 (UNCONDITIONAL_JUMP)

// Name: wincore_winvideo.cpp_openMovie_FUN_005f4700
// Address: 005f4700
// Address Range: [[005f4700, 005f4983]]
// Convention: __cdecl
// Signature: void wincore_winvideo.cpp_openMovie_FUN_005f4700(HWND parent_window, char * movie_filename)
// Globals:
//   mciGetErrorStringA* mciGetErrorStringA = 0021183a
//   mciSendStringA* mciSendStringA = 00211850
//   GetClientRect* GetClientRect = 00211ac0
//   MessageBoxA* MessageBoxA = 00211b44
//   MoveWindow* MoveWindow = 00211b52
//   SetRectEmpty* SetRectEmpty = 00211bf6
//   TerminatedCString s_where_mov_source_006581dd
//   TerminatedCString s_open_s_alias_mov_style_c_006581f8
//   TerminatedCString s_status_mov_window_handle_00658222
//   TerminatedCString s_Unable_to_open_AVI_0065823b
//   HWND g_MovieWindowHandle
//   int g_MoviePlaying
//   int g_FullscreenMovie
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_atoi_FUN_005ffef0
//   wincore_winvideo.cpp_closeMovie_FUN_005f46b0

#include "nocturne.h"

void __cdecl wincore_winvideo_cpp_openMovie_FUN_005f4700(HWND parent_window,char *movie_filename)

{
  byte *pbVar1;
  MCIERROR MVar2;
  byte *pbVar3;
  BADSPACEBASE *in_ESP;
  undefined4 in_stack_0000000c;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_00000064;
  int in_stack_00000068;
  CHAR aCStack_1ac [4];
  CHAR aCStack_198 [4];
  undefined4 uStack_194;
  CHAR aCStack_174 [8];
  undefined4 uStack_16c;
  CHAR aCStack_50 [28];
  byte bStack_34;
  byte abStack_33 [35];
  
  if (g_MoviePlaying != 0) {
    wincore_winvideo_cpp_closeMovie_FUN_005f46b0(parent_window);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xfffffe50,"open \"%s\" alias mov style child parent %d",in_stack_0000000c,parent_window);
  MVar2 = (*mciSendStringA)(aCStack_1ac,(LPSTR)0x0,0,(HWND)0x0);
  if (MVar2 != 0) {
    builtin_memcpy(aCStack_1ac,"sI_",4);
    (*MessageBoxA)(parent_window,"Unable to open .AVI!",(LPCSTR)0x0,0x30);
    g_MoviePlaying = 0;
    return;
  }
  g_MoviePlaying = 1;
  builtin_memcpy(aCStack_1ac,"zG_",4);
  MVar2 = (*mciSendStringA)("status mov window handle",aCStack_198,0x104,(HWND)0x0);
  if (MVar2 == 0) {
    g_MovieWindowHandle = (HWND)crt_stdlib_c_atoi_FUN_005ffef0(&stack0xfffffe7c);
  }
  else {
    uStack_194 = 0x5f47be;
    (*mciGetErrorStringA)(MVar2,&stack0xfffffe7c,0x104);
    (*MessageBoxA)(parent_window,aCStack_174,(LPCSTR)0x0,0x30);
  }
  if ((g_FullscreenMovie == 0) && (g_MoviePlaying != 0)) {
    uStack_16c = 0x5f47e1;
    (*GetClientRect)(parent_window,(LPRECT)&stack0x00000034);
    (*mciSendStringA)("where mov source",aCStack_50,0x80,(HWND)0x0);
    (*SetRectEmpty)((LPRECT)&stack0x00000044);
    pbVar3 = &bStack_34;
    while (bStack_34 == 0x20) {
      pbVar1 = pbVar3 + 1;
      pbVar3 = pbVar3 + 1;
      bStack_34 = *pbVar1;
    }
    for (; *pbVar3 != 0x20; pbVar3 = pbVar3 + 1) {
    }
    for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
    }
    for (; *pbVar3 != 0x20; pbVar3 = pbVar3 + 1) {
    }
    for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
    }
    for (; (0x2f < *pbVar3 && (*pbVar3 < 0x3a)); pbVar3 = pbVar3 + 1) {
      in_stack_00000054 = in_stack_00000054 * 10 + (*pbVar3 - 0x30);
    }
    for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
    }
    for (; (0x2f < *pbVar3 && (*pbVar3 < 0x3a)); pbVar3 = pbVar3 + 1) {
      in_stack_00000058 = in_stack_00000058 * 10 + (*pbVar3 - 0x30);
    }
    if ((400 < in_stack_00000064) || (300 < in_stack_00000068)) {
      in_stack_00000054 = in_stack_00000054 * 2;
      in_stack_00000058 = in_stack_00000058 * 2;
    }
    (*MoveWindow)(g_MovieWindowHandle,in_stack_00000064 / 2 - in_stack_00000054 / 2,
                  in_stack_00000068 / 2 - in_stack_00000058 / 2,in_stack_00000054,in_stack_00000058,
                  1);
    return;
  }
  return;
}


// Assembly code:
// 005f4700: PUSH EBX
//   Label: wincore_winvideo.cpp_openMovie_FUN_005f4700
// 005f4701: PUSH ESI
// 005f4702: PUSH EDI
// 005f4703: PUSH EBP
// 005f4704: SUB ESP,0x1a4
// 005f470a: MOV EBX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[0x4] (READ)
// 005f4711: CMP dword ptr [0x03f99504],0x0
//   XREF to: 03f99504 (READ)
// 005f4718: JZ 0x005f4723
//   XREF to: 005f4723 (CONDITIONAL_JUMP)
// 005f471a: PUSH EBX
// 005f471b: CALL wincore_winvideo.cpp_closeMovie_FUN_005f46b0
//   XREF to: 005f46b0 (UNCONDITIONAL_CALL)
// 005f4720: ADD ESP,0x4
// 005f4723: PUSH EBX
//   Label: LAB_005f4723
// 005f4724: MOV ECX,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[0x8] (READ)
// 005f472b: PUSH ECX
// 005f472c: PUSH 0x6581f8
//   XREF to: 006581f8 (DATA)
// 005f4731: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1b4] (DATA)
// 005f4735: PUSH EAX
// 005f4736: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005f473b: ADD ESP,0x10
// 005f473e: PUSH 0x0
// 005f4740: PUSH 0x0
// 005f4742: PUSH 0x0
// 005f4744: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1b4] (DATA)
// 005f4748: PUSH EAX
// 005f4749: CALL dword ptr CS:[0x611410]
//   XREF to: 00611410 (READ)
// 005f4750: TEST EAX,EAX
// 005f4752: JNZ 0x005f4960
//   XREF to: 005f4960 (CONDITIONAL_JUMP)
// 005f4758: PUSH EAX
// 005f4759: PUSH 0x104
// 005f475e: LEA EAX,[ESP + 0x8]
// 005f4762: PUSH EAX
// 005f4763: MOV ESI,0x1
// 005f4768: PUSH 0x658222
//   XREF to: 00658222 (DATA)
// 005f476d: MOV dword ptr [0x03f99504],ESI
//   XREF to: 03f99504 (WRITE)
// 005f4773: CALL dword ptr CS:[0x611410]
//   XREF to: 00611410 (READ)
// 005f477a: TEST EAX,EAX
// 005f477c: JNZ 0x005f47ac
//   XREF to: 005f47ac (CONDITIONAL_JUMP)
// 005f477e: MOV EAX,ESP
// 005f4780: PUSH EAX
// 005f4781: CALL crt_stdlib.c_atoi_FUN_005ffef0
//   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
// 005f4786: ADD ESP,0x4
// 005f4789: MOV [0x03f994fc],EAX
//   XREF to: 03f994fc (WRITE)
// 005f478e: MOV EDI,dword ptr [0x03f9950c]
//   Label: LAB_005f478e
//   XREF to: 03f9950c (READ)
// 005f4794: TEST EDI,EDI
// 005f4796: JNZ 0x005f47a1
//   XREF to: 005f47a1 (CONDITIONAL_JUMP)
// 005f4798: CMP dword ptr [0x03f99504],0x0
//   XREF to: 03f99504 (READ)
// 005f479f: JNZ 0x005f47d1
//   XREF to: 005f47d1 (CONDITIONAL_JUMP)
// 005f47a1: ADD ESP,0x1a4
//   Label: LAB_005f47a1
// 005f47a7: POP EBP
// 005f47a8: POP EDI
// 005f47a9: POP ESI
// 005f47aa: POP EBX
// 005f47ab: RET
// 005f47ac: PUSH 0x104
//   Label: LAB_005f47ac
// 005f47b1: LEA EDX,[ESP + 0x4]
// 005f47b5: PUSH EDX
// 005f47b6: PUSH EAX
// 005f47b7: CALL dword ptr CS:[0x61140c]
//   XREF to: 0061140c (READ)
// 005f47be: PUSH 0x30
// 005f47c0: PUSH 0x0
// 005f47c2: LEA EAX,[ESP + 0x8]
// 005f47c6: PUSH EAX
// 005f47c7: PUSH EBX
// 005f47c8: CALL dword ptr CS:[0x6114c4]
//   XREF to: 006114c4 (READ)
// 005f47cf: JMP 0x005f478e
//   XREF to: 005f478e (UNCONDITIONAL_JUMP)
// 005f47d1: LEA EAX,[ESP + 0x194]
//   Label: LAB_005f47d1
// 005f47d8: PUSH EAX
// 005f47d9: PUSH EBX
// 005f47da: CALL dword ptr CS:[0x6114a4]
//   XREF to: 006114a4 (READ)
// 005f47e1: PUSH EDI
// 005f47e2: PUSH 0x80
// 005f47e7: LEA EAX,[ESP + 0x10c]
// 005f47ee: PUSH EAX
// 005f47ef: PUSH 0x6581dd
//   XREF to: 006581dd (DATA)
// 005f47f4: CALL dword ptr CS:[0x611410]
//   XREF to: 00611410 (READ)
// 005f47fb: LEA EAX,[ESP + 0x184]
// 005f4802: PUSH EAX
// 005f4803: CALL dword ptr CS:[0x6114f0]
//   XREF to: 006114f0 (READ)
// 005f480a: MOV DL,byte ptr [ESP + 0x104]
// 005f4811: LEA EAX,[ESP + 0x104]
// 005f4818: CMP DL,0x20
// 005f481b: JNZ 0x005f4830
//   XREF to: 005f4830 (CONDITIONAL_JUMP)
// 005f481d: MOV DH,byte ptr [EAX + 0x1]
//   Label: LAB_005f481d
// 005f4820: INC EAX
// 005f4821: CMP DH,0x20
// 005f4824: JZ 0x005f481d
//   XREF to: 005f481d (CONDITIONAL_JUMP)
// 005f4826: LEA EAX,[EAX]
// 005f482c: LEA EDX,[EDX]
// 005f4830: CMP byte ptr [EAX],0x20
//   Label: LAB_005f4830
// 005f4833: JZ 0x005f4838
//   XREF to: 005f4838 (CONDITIONAL_JUMP)
// 005f4835: INC EAX
// 005f4836: JMP 0x005f4830
//   XREF to: 005f4830 (UNCONDITIONAL_JUMP)
// 005f4838: CMP byte ptr [EAX],0x20
//   Label: LAB_005f4838
// 005f483b: JNZ 0x005f4840
//   XREF to: 005f4840 (CONDITIONAL_JUMP)
// 005f483d: INC EAX
// 005f483e: JMP 0x005f4838
//   XREF to: 005f4838 (UNCONDITIONAL_JUMP)
// 005f4840: CMP byte ptr [EAX],0x20
//   Label: LAB_005f4840
// 005f4843: JZ 0x005f4848
//   XREF to: 005f4848 (CONDITIONAL_JUMP)
// 005f4845: INC EAX
// 005f4846: JMP 0x005f4840
//   XREF to: 005f4840 (UNCONDITIONAL_JUMP)
// 005f4848: CMP byte ptr [EAX],0x20
//   Label: LAB_005f4848
// 005f484b: JNZ 0x005f4869
//   XREF to: 005f4869 (CONDITIONAL_JUMP)
// 005f484d: INC EAX
// 005f484e: JMP 0x005f4848
//   XREF to: 005f4848 (UNCONDITIONAL_JUMP)
// 005f4850: IMUL EDX,dword ptr [ESP + 0x18c],0xa
//   Label: LAB_005f4850
// 005f4858: XOR ECX,ECX
// 005f485a: MOV CL,byte ptr [EAX]
// 005f485c: SUB ECX,0x30
// 005f485f: ADD EDX,ECX
// 005f4861: INC EAX
// 005f4862: MOV dword ptr [ESP + 0x18c],EDX
// 005f4869: MOV DL,byte ptr [EAX]
//   Label: LAB_005f4869
// 005f486b: CMP DL,0x30
// 005f486e: JNC 0x005f4878
//   XREF to: 005f4878 (CONDITIONAL_JUMP)
// 005f4870: CMP byte ptr [EAX],0x20
//   Label: LAB_005f4870
// 005f4873: JNZ 0x005f4898
//   XREF to: 005f4898 (CONDITIONAL_JUMP)
// 005f4875: INC EAX
// 005f4876: JMP 0x005f4870
//   XREF to: 005f4870 (UNCONDITIONAL_JUMP)
// 005f4878: CMP DL,0x39
//   Label: LAB_005f4878
// 005f487b: JBE 0x005f4850
//   XREF to: 005f4850 (CONDITIONAL_JUMP)
// 005f487d: JMP 0x005f4870
//   XREF to: 005f4870 (UNCONDITIONAL_JUMP)
// 005f487f: IMUL ECX,dword ptr [ESP + 0x190],0xa
//   Label: LAB_005f487f
// 005f4887: XOR EDX,EDX
// 005f4889: MOV DL,byte ptr [EAX]
// 005f488b: SUB EDX,0x30
// 005f488e: ADD ECX,EDX
// 005f4890: INC EAX
// 005f4891: MOV dword ptr [ESP + 0x190],ECX
// 005f4898: MOV BH,byte ptr [EAX]
//   Label: LAB_005f4898
// 005f489a: CMP BH,0x30
// 005f489d: JC 0x005f48a4
//   XREF to: 005f48a4 (CONDITIONAL_JUMP)
// 005f489f: CMP BH,0x39
// 005f48a2: JBE 0x005f487f
//   XREF to: 005f487f (CONDITIONAL_JUMP)
// 005f48a4: CMP dword ptr [ESP + 0x19c],0x190
//   Label: LAB_005f48a4
// 005f48af: JLE 0x005f494a
//   XREF to: 005f494a (CONDITIONAL_JUMP)
// 005f48b5: MOV EBP,dword ptr [ESP + 0x18c]
//   Label: LAB_005f48b5
// 005f48bc: MOV EDI,dword ptr [ESP + 0x190]
// 005f48c3: ADD EBP,EBP
// 005f48c5: ADD EDI,EDI
// 005f48c7: MOV dword ptr [ESP + 0x18c],EBP
// 005f48ce: MOV dword ptr [ESP + 0x190],EDI
// 005f48d5: MOV EAX,dword ptr [ESP + 0x19c]
//   Label: LAB_005f48d5
// 005f48dc: MOV EDX,EAX
// 005f48de: SAR EDX,0x1f
// 005f48e1: SUB EAX,EDX
// 005f48e3: SAR EAX,0x1
// 005f48e5: MOV EBX,EAX
// 005f48e7: MOV EAX,dword ptr [ESP + 0x18c]
// 005f48ee: MOV EDX,EAX
// 005f48f0: SAR EDX,0x1f
// 005f48f3: SUB EAX,EDX
// 005f48f5: SAR EAX,0x1
// 005f48f7: SUB EBX,EAX
// 005f48f9: MOV EAX,dword ptr [ESP + 0x1a0]
// 005f4900: MOV EDX,EAX
// 005f4902: SAR EDX,0x1f
// 005f4905: SUB EAX,EDX
// 005f4907: SAR EAX,0x1
// 005f4909: MOV ECX,EAX
// 005f490b: MOV EAX,dword ptr [ESP + 0x190]
// 005f4912: MOV EDX,EAX
// 005f4914: SAR EDX,0x1f
// 005f4917: SUB EAX,EDX
// 005f4919: SAR EAX,0x1
// 005f491b: PUSH 0x1
// 005f491d: SUB ECX,EAX
// 005f491f: MOV EAX,dword ptr [ESP + 0x194]
// 005f4926: PUSH EAX
// 005f4927: MOV EDX,dword ptr [ESP + 0x194]
// 005f492e: PUSH EDX
// 005f492f: PUSH ECX
// 005f4930: PUSH EBX
// 005f4931: MOV ECX,dword ptr [0x03f994fc]
//   XREF to: 03f994fc (READ)
// 005f4937: PUSH ECX
// 005f4938: CALL dword ptr CS:[0x6114c8]
//   XREF to: 006114c8 (READ)
// 005f493f: ADD ESP,0x1a4
// 005f4945: POP EBP
// 005f4946: POP EDI
// 005f4947: POP ESI
// 005f4948: POP EBX
// 005f4949: RET
// 005f494a: CMP dword ptr [ESP + 0x1a0],0x12c
//   Label: LAB_005f494a
// 005f4955: JG 0x005f48b5
//   XREF to: 005f48b5 (CONDITIONAL_JUMP)
// 005f495b: JMP 0x005f48d5
//   XREF to: 005f48d5 (UNCONDITIONAL_JUMP)
// 005f4960: PUSH 0x30
//   Label: LAB_005f4960
// 005f4962: PUSH 0x0
// 005f4964: PUSH 0x65823b
//   XREF to: 0065823b (DATA)
// 005f4969: PUSH EBX
// 005f496a: XOR EBX,EBX
// 005f496c: CALL dword ptr CS:[0x6114c4]
//   XREF to: 006114c4 (READ)
// 005f4973: MOV dword ptr [0x03f99504],EBX
//   XREF to: 03f99504 (WRITE)
// 005f4979: ADD ESP,0x1a4
// 005f497f: POP EBP
// 005f4980: POP EDI
// 005f4981: POP ESI
// 005f4982: POP EBX
// 005f4983: RET

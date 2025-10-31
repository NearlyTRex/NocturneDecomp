// Name: wincore_winrun.cpp_getJoystickState_FUN_005f43a0
// Address: 005f43a0
// Address Range: [[005f43a0, 005f44f5]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_getJoystickState_FUN_005f43a0(void)
// Cross-references:
//   core_game.cpp_CGame_resetKeyState_FUN_004dbe60 (004dbe60) at 004dbe7e [UNCONDITIONAL_CALL]
// Globals:
//   joyGetPos* joyGetPos = 0021182e
//   DWORD g_JoyXPos
//   DWORD g_JoyYPos
//   DWORD g_JoyRPos
//   DWORD g_JoyZPos
//   DWORD g_JoyButtons
//   int g_JoystickPresent
//   int g_JoyWantUAxis
//   int g_JoyWantRAxis
//   int g_JoystickHasPOV
//   int g_JoyPOVDirection
//   FARPROC g_joyGetPosEx
// Function calls:
//   joyGetPos

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_getJoystickState_FUN_005f43a0(void)

{
  BADSPACEBASE *in_ESP;
  DWORD local_50;
  uint local_4c;
  DWORD DStack_48;
  DWORD DStack_44;
  DWORD DStack_38;
  uint uStack_30;
  joyinfo_tag local_1c;
  
  if (g_JoystickPresent != 0) {
    if (g_joyGetPosEx == (FARPROC)0x0) {
      (*joyGetPos)(0,&local_1c);
      g_JoyButtons = local_1c.wButtons;
      g_JoyXPos = local_1c.wXpos;
      g_JoyYPos = local_1c.wYpos;
      g_JoyZPos = local_1c.wZpos;
      return;
    }
    local_4c = 0x83;
    local_50 = 0x34;
    if (g_JoystickHasPOV != 0) {
      local_4c = 0xc3;
    }
    if (g_JoyWantRAxis != 0) {
      local_4c = local_4c | 4;
    }
    if (g_JoyWantUAxis != 0) {
      local_4c = local_4c | 8;
    }
    (*g_joyGetPosEx)(0,&local_50);
    g_JoyButtons = DStack_38;
    g_JoyXPos = local_50;
    g_JoyYPos = local_4c;
    g_JoyRPos = DStack_44;
    g_JoyZPos = DStack_48;
    if (g_JoystickHasPOV != 0) {
      if (uStack_30 < 18000) {
        if (uStack_30 == 0) {
          g_JoyPOVDirection = 1;
          return;
        }
        if (uStack_30 == 9000) {
          g_JoyPOVDirection = 4;
          return;
        }
      }
      else {
        if (uStack_30 < 0x4651) {
          g_JoyPOVDirection = 2;
          return;
        }
        if (26999 < uStack_30) {
          if (27000 < uStack_30) {
            g_JoyPOVDirection = 0;
            return;
          }
          g_JoyPOVDirection = 3;
          return;
        }
      }
      g_JoyPOVDirection = 0;
    }
  }
  return;
}


// Assembly code:
// 005f43a0: PUSH EBX
//   Label: wincore_winrun.cpp_getJoystickState_FUN_005f43a0
// 005f43a1: PUSH ESI
// 005f43a2: PUSH EDI
// 005f43a3: SUB ESP,0x44
// 005f43a6: CMP dword ptr [0x02d0520c],0x0
//   XREF to: 02d0520c (READ)
// 005f43ad: JZ 0x005f4460
//   XREF to: 005f4460 (CONDITIONAL_JUMP)
// 005f43b3: MOV ECX,dword ptr [0x03f994f4]
//   XREF to: 03f994f4 (READ)
// 005f43b9: TEST ECX,ECX
// 005f43bb: JZ 0x005f44be
//   XREF to: 005f44be (CONDITIONAL_JUMP)
// 005f43c1: MOV ESI,0x83
// 005f43c6: MOV EBX,0x34
// 005f43cb: MOV EDI,dword ptr [0x02d0521c]
//   XREF to: 02d0521c (READ)
// 005f43d1: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 005f43d5: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x50] (DATA)
// 005f43d8: TEST EDI,EDI
// 005f43da: JNZ 0x005f4467
//   XREF to: 005f4467 (CONDITIONAL_JUMP)
// 005f43e0: CMP dword ptr [0x02d05214],0x0
//   Label: LAB_005f43e0
//   XREF to: 02d05214 (READ)
// 005f43e7: JZ 0x005f43ee
//   XREF to: 005f43ee (CONDITIONAL_JUMP)
// 005f43e9: OR byte ptr [ESP + 0x4],0x4
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 005f43ee: CMP dword ptr [0x02d05210],0x0
//   Label: LAB_005f43ee
//   XREF to: 02d05210 (READ)
// 005f43f5: JZ 0x005f43fc
//   XREF to: 005f43fc (CONDITIONAL_JUMP)
// 005f43f7: OR byte ptr [ESP + 0x4],0x8
//   XREF to: Stack[-0x4c] (READ_WRITE)
// 005f43fc: MOV EAX,ESP
//   Label: LAB_005f43fc
// 005f43fe: PUSH EAX
// 005f43ff: PUSH 0x0
// 005f4401: CALL dword ptr [g_joyGetPosEx]
//   XREF to: 03f994f4 (READ)
// 005f4407: MOV EAX,dword ptr [ESP + 0x20]
// 005f440b: MOV [0x02d05208],EAX
//   XREF to: 02d05208 (WRITE)
// 005f4410: MOV EAX,dword ptr [ESP + 0x8]
// 005f4414: MOV [0x02d051f8],EAX
//   XREF to: 02d051f8 (WRITE)
// 005f4419: MOV EAX,dword ptr [ESP + 0xc]
// 005f441d: MOV [0x02d051fc],EAX
//   XREF to: 02d051fc (WRITE)
// 005f4422: MOV EAX,dword ptr [ESP + 0x14]
// 005f4426: MOV [0x02d05200],EAX
//   XREF to: 02d05200 (WRITE)
// 005f442b: MOV EAX,dword ptr [ESP + 0x10]
// 005f442f: MOV ECX,dword ptr [0x02d0521c]
//   XREF to: 02d0521c (READ)
// 005f4435: MOV [0x02d05204],EAX
//   XREF to: 02d05204 (WRITE)
// 005f443a: TEST ECX,ECX
// 005f443c: JZ 0x005f4460
//   XREF to: 005f4460 (CONDITIONAL_JUMP)
// 005f443e: MOV EBX,dword ptr [ESP + 0x28]
// 005f4442: CMP EBX,0x4650
// 005f4448: JNC 0x005f44a2
//   XREF to: 005f44a2 (CONDITIONAL_JUMP)
// 005f444a: TEST EBX,EBX
// 005f444c: JBE 0x005f4474
//   XREF to: 005f4474 (CONDITIONAL_JUMP)
// 005f444e: CMP EBX,0x2328
// 005f4454: JNZ 0x005f4498
//   XREF to: 005f4498 (CONDITIONAL_JUMP)
// 005f4456: MOV dword ptr [0x02d05220],0x4
//   XREF to: 02d05220 (WRITE)
// 005f4460: ADD ESP,0x44
//   Label: LAB_005f4460
// 005f4463: POP EDI
// 005f4464: POP ESI
// 005f4465: POP EBX
// 005f4466: RET
// 005f4467: MOV dword ptr [ESP + 0x4],0xc3
//   Label: LAB_005f4467
//   XREF to: Stack[-0x4c] (WRITE)
// 005f446f: JMP 0x005f43e0
//   XREF to: 005f43e0 (UNCONDITIONAL_JUMP)
// 005f4474: MOV dword ptr [0x02d05220],0x1
//   Label: LAB_005f4474
//   XREF to: 02d05220 (WRITE)
// 005f447e: JMP 0x005f4460
//   XREF to: 005f4460 (UNCONDITIONAL_JUMP)
// 005f4480: MOV dword ptr [0x02d05220],0x2
//   Label: LAB_005f4480
//   XREF to: 02d05220 (WRITE)
// 005f448a: JMP 0x005f4460
//   XREF to: 005f4460 (UNCONDITIONAL_JUMP)
// 005f448c: MOV dword ptr [0x02d05220],0x3
//   Label: LAB_005f448c
//   XREF to: 02d05220 (WRITE)
// 005f4496: JMP 0x005f4460
//   XREF to: 005f4460 (UNCONDITIONAL_JUMP)
// 005f4498: XOR EDX,EDX
//   Label: LAB_005f4498
// 005f449a: MOV dword ptr [0x02d05220],EDX
//   XREF to: 02d05220 (WRITE)
// 005f44a0: JMP 0x005f4460
//   XREF to: 005f4460 (UNCONDITIONAL_JUMP)
// 005f44a2: JBE 0x005f4480
//   Label: LAB_005f44a2
//   XREF to: 005f4480 (CONDITIONAL_JUMP)
// 005f44a4: CMP EBX,0x6978
// 005f44aa: JC 0x005f4498
//   XREF to: 005f4498 (CONDITIONAL_JUMP)
// 005f44ac: JBE 0x005f448c
//   XREF to: 005f448c (CONDITIONAL_JUMP)
// 005f44ae: CMP EBX,0xffff
// 005f44b4: XOR EDX,EDX
// 005f44b6: MOV dword ptr [0x02d05220],EDX
//   XREF to: 02d05220 (WRITE)
// 005f44bc: JMP 0x005f4460
//   XREF to: 005f4460 (UNCONDITIONAL_JUMP)
// 005f44be: LEA EAX,[ESP + 0x34]
//   Label: LAB_005f44be
//   XREF to: Stack[-0x1c] (DATA)
// 005f44c2: PUSH EAX
// 005f44c3: PUSH ECX
// 005f44c4: CALL dword ptr CS:[0x611408]
//   XREF to: EXTERNAL:00000010 (COMPUTED_CALL)
//   XREF to: 00611408 (READ)
// 005f44cb: MOV EAX,dword ptr [ESP + 0x40]
// 005f44cf: MOV [0x02d05208],EAX
//   XREF to: 02d05208 (WRITE)
// 005f44d4: MOV EAX,dword ptr [ESP + 0x34]
// 005f44d8: MOV [0x02d051f8],EAX
//   XREF to: 02d051f8 (WRITE)
// 005f44dd: MOV EAX,dword ptr [ESP + 0x38]
// 005f44e1: MOV [0x02d051fc],EAX
//   XREF to: 02d051fc (WRITE)
// 005f44e6: MOV EAX,dword ptr [ESP + 0x3c]
// 005f44ea: MOV [0x02d05204],EAX
//   XREF to: 02d05204 (WRITE)
// 005f44ef: ADD ESP,0x44
// 005f44f2: POP EDI
// 005f44f3: POP ESI
// 005f44f4: POP EBX
// 005f44f5: RET

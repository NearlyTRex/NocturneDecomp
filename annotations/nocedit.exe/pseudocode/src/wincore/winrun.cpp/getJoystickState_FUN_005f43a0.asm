; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_winrun.cpp_getJoystickState_FUN_005f43a0(void)
;
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined1       Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_game.cpp_CGame_resetKeyState_FUN_004dbe60 at 004dbe7e
;
; Referenced Globals:
;   joyGetPos* joyGetPos = 0021182e
;   DWORD g_JoyXPos
;   DWORD g_JoyYPos
;   DWORD g_JoyRPos
;   DWORD g_JoyZPos
;   DWORD g_JoyButtons
;   int g_JoystickPresent
;   int g_JoyWantUAxis
;   int g_JoyWantRAxis
;   int g_JoystickHasPOV
;   int g_JoyPOVDirection
;   FARPROC g_joyGetPosEx
;
; Called Functions:
;   joyGetPos
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f43a0
        ;   Label: wincore_winrun.cpp_getJoystickState_FUN_005f43a0
    PUSH ESI                            ; 005f43a1
    PUSH EDI                            ; 005f43a2
    SUB ESP,0x44                        ; 005f43a3
    CMP dword ptr [0x02d0520c],0x0      ; 005f43a6 | g_JoystickPresent
    JZ 0x005f4460                       ; 005f43ad
        ;   XREF to: 005f4460 (CONDITIONAL_JUMP)  ; LAB_005f4460
    MOV ECX,dword ptr [0x03f994f4]      ; 005f43b3 | g_joyGetPosEx
    TEST ECX,ECX                        ; 005f43b9
    JZ 0x005f44be                       ; 005f43bb
        ;   XREF to: 005f44be (CONDITIONAL_JUMP)  ; LAB_005f44be
    MOV ESI,0x83                        ; 005f43c1
    MOV EBX,0x34                        ; 005f43c6
    MOV EDI,dword ptr [0x02d0521c]      ; 005f43cb | g_JoystickHasPOV
    MOV dword ptr [ESP + 0x4],ESI       ; 005f43d1
    MOV dword ptr [ESP],EBX             ; 005f43d5
    TEST EDI,EDI                        ; 005f43d8
    JNZ 0x005f4467                      ; 005f43da
        ;   XREF to: 005f4467 (CONDITIONAL_JUMP)  ; LAB_005f4467
    CMP dword ptr [0x02d05214],0x0      ; 005f43e0 | g_JoyWantRAxis
        ;   Label: LAB_005f43e0
    JZ 0x005f43ee                       ; 005f43e7
        ;   XREF to: 005f43ee (CONDITIONAL_JUMP)  ; LAB_005f43ee
    OR byte ptr [ESP + 0x4],0x4         ; 005f43e9
    CMP dword ptr [0x02d05210],0x0      ; 005f43ee | g_JoyWantUAxis
        ;   Label: LAB_005f43ee
    JZ 0x005f43fc                       ; 005f43f5
        ;   XREF to: 005f43fc (CONDITIONAL_JUMP)  ; LAB_005f43fc
    OR byte ptr [ESP + 0x4],0x8         ; 005f43f7
    MOV EAX,ESP                         ; 005f43fc
        ;   Label: LAB_005f43fc
    PUSH EAX                            ; 005f43fe
    PUSH 0x0                            ; 005f43ff
    CALL dword ptr [0x03f994f4]         ; 005f4401 | g_joyGetPosEx
    MOV EAX,dword ptr [ESP + 0x20]      ; 005f4407
    MOV [0x02d05208],EAX                ; 005f440b | g_JoyButtons
    MOV EAX,dword ptr [ESP + 0x8]       ; 005f4410
    MOV [0x02d051f8],EAX                ; 005f4414 | g_JoyXPos
    MOV EAX,dword ptr [ESP + 0xc]       ; 005f4419
    MOV [0x02d051fc],EAX                ; 005f441d | g_JoyYPos
    MOV EAX,dword ptr [ESP + 0x14]      ; 005f4422
    MOV [0x02d05200],EAX                ; 005f4426 | g_JoyRPos
    MOV EAX,dword ptr [ESP + 0x10]      ; 005f442b
    MOV ECX,dword ptr [0x02d0521c]      ; 005f442f | g_JoystickHasPOV
    MOV [0x02d05204],EAX                ; 005f4435 | g_JoyZPos
    TEST ECX,ECX                        ; 005f443a
    JZ 0x005f4460                       ; 005f443c
        ;   XREF to: 005f4460 (CONDITIONAL_JUMP)  ; LAB_005f4460
    MOV EBX,dword ptr [ESP + 0x28]      ; 005f443e
    CMP EBX,0x4650                      ; 005f4442
    JNC 0x005f44a2                      ; 005f4448
        ;   XREF to: 005f44a2 (CONDITIONAL_JUMP)  ; LAB_005f44a2
    TEST EBX,EBX                        ; 005f444a
    JBE 0x005f4474                      ; 005f444c
        ;   XREF to: 005f4474 (CONDITIONAL_JUMP)  ; LAB_005f4474
    CMP EBX,0x2328                      ; 005f444e
    JNZ 0x005f4498                      ; 005f4454
        ;   XREF to: 005f4498 (CONDITIONAL_JUMP)  ; LAB_005f4498
    MOV dword ptr [0x02d05220],0x4      ; 005f4456 | g_JoyPOVDirection
    ADD ESP,0x44                        ; 005f4460
        ;   Label: LAB_005f4460
    POP EDI                             ; 005f4463
    POP ESI                             ; 005f4464
    POP EBX                             ; 005f4465
    RET                                 ; 005f4466
    MOV dword ptr [ESP + 0x4],0xc3      ; 005f4467
        ;   Label: LAB_005f4467
    JMP 0x005f43e0                      ; 005f446f
        ;   XREF to: 005f43e0 (UNCONDITIONAL_JUMP)  ; LAB_005f43e0
    MOV dword ptr [0x02d05220],0x1      ; 005f4474 | g_JoyPOVDirection
        ;   Label: LAB_005f4474
    JMP 0x005f4460                      ; 005f447e
        ;   XREF to: 005f4460 (UNCONDITIONAL_JUMP)  ; LAB_005f4460
    MOV dword ptr [0x02d05220],0x2      ; 005f4480 | g_JoyPOVDirection
        ;   Label: LAB_005f4480
    JMP 0x005f4460                      ; 005f448a
        ;   XREF to: 005f4460 (UNCONDITIONAL_JUMP)  ; LAB_005f4460
    MOV dword ptr [0x02d05220],0x3      ; 005f448c | g_JoyPOVDirection
        ;   Label: LAB_005f448c
    JMP 0x005f4460                      ; 005f4496
        ;   XREF to: 005f4460 (UNCONDITIONAL_JUMP)  ; LAB_005f4460
    XOR EDX,EDX                         ; 005f4498
        ;   Label: LAB_005f4498
    MOV dword ptr [0x02d05220],EDX      ; 005f449a | g_JoyPOVDirection
    JMP 0x005f4460                      ; 005f44a0
        ;   XREF to: 005f4460 (UNCONDITIONAL_JUMP)  ; LAB_005f4460
    JBE 0x005f4480                      ; 005f44a2
        ;   XREF to: 005f4480 (CONDITIONAL_JUMP)  ; LAB_005f4480
        ;   Label: LAB_005f44a2
    CMP EBX,0x6978                      ; 005f44a4
    JC 0x005f4498                       ; 005f44aa
        ;   XREF to: 005f4498 (CONDITIONAL_JUMP)  ; LAB_005f4498
    JBE 0x005f448c                      ; 005f44ac
        ;   XREF to: 005f448c (CONDITIONAL_JUMP)  ; LAB_005f448c
    CMP EBX,0xffff                      ; 005f44ae
    XOR EDX,EDX                         ; 005f44b4
    MOV dword ptr [0x02d05220],EDX      ; 005f44b6 | g_JoyPOVDirection
    JMP 0x005f4460                      ; 005f44bc
        ;   XREF to: 005f4460 (UNCONDITIONAL_JUMP)  ; LAB_005f4460
    LEA EAX,[ESP + 0x34]                ; 005f44be
        ;   Label: LAB_005f44be
    PUSH EAX                            ; 005f44c2
    PUSH ECX                            ; 005f44c3
    CALL dword ptr CS:[0x611408]        ; 005f44c4 | joyGetPos
    MOV EAX,dword ptr [ESP + 0x40]      ; 005f44cb
    MOV [0x02d05208],EAX                ; 005f44cf | g_JoyButtons
    MOV EAX,dword ptr [ESP + 0x34]      ; 005f44d4
    MOV [0x02d051f8],EAX                ; 005f44d8 | g_JoyXPos
    MOV EAX,dword ptr [ESP + 0x38]      ; 005f44dd
    MOV [0x02d051fc],EAX                ; 005f44e1 | g_JoyYPos
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005f44e6
    MOV [0x02d05204],EAX                ; 005f44ea | g_JoyZPos
    ADD ESP,0x44                        ; 005f44ef
    POP EDI                             ; 005f44f2
    POP ESI                             ; 005f44f3
    POP EBX                             ; 005f44f4
    RET                                 ; 005f44f5


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_stdio.c_SetupConsoleInputMode_FUN_006059b0()
;
;
; XREF[1]:
;   crt_stdio.c_FillInputBuffer_FUN_005fe940 at 005fe99e
;
; Referenced Globals:
;   int g_ConsoleInitializationFlag = 0x0
;
; Called Functions:
;   crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8
;   crt_stdio.c_WriteConsoleChar_FUN_0060b490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006059b0
        ;   Label: crt_stdio.c_SetupConsoleInputMode_FUN_006059b0
    PUSH ESI                            ; 006059b1
    MOV ESI,dword ptr [0x00685000]      ; 006059b2 | int g_ConsoleInitializationFlag
    CALL crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8 ; 006059b8 | undefined crt_stdio.c_DrainConsoleInputAndSetup_FUN_0060b3f8()
        ;   XREF to: 0060b3f8 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 006059bd
    CMP EAX,-0x1                        ; 006059bf
    JZ 0x006059d1                       ; 006059c2 | LAB_006059d1
        ;   XREF to: 006059d1 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 006059c4
    JNZ 0x006059d1                      ; 006059c6 | LAB_006059d1
        ;   XREF to: 006059d1 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 006059c8
    CALL crt_stdio.c_WriteConsoleChar_FUN_0060b490 ; 006059c9 | int crt_stdio.c_WriteConsoleChar_FUN_0060b490(int character)
        ;   XREF to: 0060b490 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 006059ce
    MOV EAX,EBX                         ; 006059d1
        ;   Label: LAB_006059d1
    POP ESI                             ; 006059d3
    POP EBX                             ; 006059d4
    RET                                 ; 006059d5


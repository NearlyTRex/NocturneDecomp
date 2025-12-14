; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40()
;
;
; XREF[1]:
;   core_netgame.cpp_FUN_00541390 at 00541c6b
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063dac5
;   TerminatedCString s_CNetGame_processChatOut__0063dad9
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_LastPingTime
;   uint g_CurrentGameTime
;   undefined4 DAT_02f98ad0
;   undefined4 DAT_02f98ad4
;   undefined4 DAT_02f98ad8
;   undefined1 DAT_02f98adc
;   undefined1 DAT_02f98add
;   undefined4 DAT_02f98ae0
;   undefined4 DAT_02f98ae4
;   undefined4 DAT_02f9c0bc
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_netgame.cpp_CNetGame_FUN_00542370
;   crt_memory.c_memset_FUN_005fde40
;   crt_string.c_strncpy_FUN_00600f40
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541e40
        ;   Label: core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40
    PUSH ESI                            ; 00541e41
    PUSH EDI                            ; 00541e42
    PUSH EBP                            ; 00541e43
    MOV EDI,dword ptr [0x02f7c8b8]      ; 00541e44 | g_CurrentGameTime
    MOV ESI,dword ptr [ESP + 0x14]      ; 00541e4a
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00541e4e
    CMP dword ptr [0x02f98ad0],0x32     ; 00541e52 | DAT_02f98ad0
    JGE 0x00541f7f                      ; 00541e59
        ;   XREF to: 00541f7f (CONDITIONAL_JUMP)  ; LAB_00541f7f
    MOV EDX,dword ptr [0x02f98ad0]      ; 00541e5f | DAT_02f98ad0
        ;   Label: LAB_00541e5f
    MOV EAX,EDX                         ; 00541e65
    SHL EAX,0x4                         ; 00541e67
    ADD EAX,EDX                         ; 00541e6a
    SHL EAX,0x2                         ; 00541e6c
    ADD EAX,EDX                         ; 00541e6f
    MOV EBP,0x2f98ad4                   ; 00541e71 | DAT_02f98ad4
    SHL EAX,0x2                         ; 00541e76
    ADD EBP,EAX                         ; 00541e79
    LEA EAX,[EDX + 0x1]                 ; 00541e7b
    MOV [0x02f98ad0],EAX                ; 00541e7e | DAT_02f98ad0
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00541e83
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,EAX                         ; 00541e88
    MOV ECX,0x12                        ; 00541e8a
    SAR EDX,0x1f                        ; 00541e8f
    IDIV ECX                            ; 00541e92
    MOV ECX,dword ptr [0x02f7c8b4]      ; 00541e94 | g_LastPingTime
    MOV EDX,EAX                         ; 00541e9a
    SUB EAX,ECX                         ; 00541e9c
    MOV dword ptr [0x02f7c8b4],EDX      ; 00541e9e | g_LastPingTime
    TEST EAX,EAX                        ; 00541ea4
    JL 0x00541fa7                       ; 00541ea6
        ;   XREF to: 00541fa7 (CONDITIONAL_JUMP)  ; LAB_00541fa7
    MOV EDI,dword ptr [0x02f7c8b8]      ; 00541eac | g_CurrentGameTime
    CMP EAX,0x20000                     ; 00541eb2
    JLE 0x00541ebe                      ; 00541eb7
        ;   XREF to: 00541ebe (CONDITIONAL_JUMP)  ; LAB_00541ebe
    MOV EAX,0x20000                     ; 00541eb9
    ADD EDI,EAX                         ; 00541ebe
        ;   Label: LAB_00541ebe
    MOV EAX,[0x02f9c0bc]                ; 00541ec0 | DAT_02f9c0bc
    PUSH 0x2                            ; 00541ec5
    INC EAX                             ; 00541ec7
    PUSH 0x1                            ; 00541ec8
    MOV [0x02f9c0bc],EAX                ; 00541eca | DAT_02f9c0bc
    MOV dword ptr [EBP + 0x4],EAX       ; 00541ecf | DAT_02f98ad8
    LEA EAX,[EBP + 0x8]                 ; 00541ed2
    PUSH EAX                            ; 00541ed5
    MOV dword ptr [0x02f7c8b8],EDI      ; 00541ed6 | g_CurrentGameTime
    MOV dword ptr [EBP],EDI             ; 00541edc | DAT_02f98ad4
    CALL crt_memory.c_memset_FUN_005fde40 ; 00541edf
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EDI,dword ptr [0x02f7c8b8]      ; 00541ee4 | g_CurrentGameTime
    ADD ESP,0xc                         ; 00541eea
    TEST EBX,EBX                        ; 00541eed
    JL 0x00541fb4                       ; 00541eef
        ;   XREF to: 00541fb4 (CONDITIONAL_JUMP)  ; LAB_00541fb4
    LEA EAX,[EBX + EBP*0x1]             ; 00541ef5
    MOV byte ptr [EAX + 0x8],0x0        ; 00541ef8
    LEA EAX,[EDI + 0xffc40000]          ; 00541efc
    MOV dword ptr [EBP + EBX*0x4 + 0xc],EAX ; 00541f02
    LEA EAX,[EAX]                       ; 00541f06
    LEA EDX,[EDX]                       ; 00541f0c
    PUSH 0x100                          ; 00541f10
        ;   Label: LAB_00541f10
    PUSH 0x0                            ; 00541f15
    LEA EBX,[EBP + 0x14]                ; 00541f17
    MOV EAX,dword ptr [ESI + 0x114]     ; 00541f1a
    PUSH EBX                            ; 00541f20
    MOV dword ptr [0x02f7c8b8],EDI      ; 00541f21 | g_CurrentGameTime
    MOV byte ptr [EAX + EBP*0x1 + 0x8],0x1 ; 00541f27
    CALL crt_memory.c_memset_FUN_005fde40 ; 00541f2c
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00541f31
    PUSH 0xff                           ; 00541f34
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00541f39
    PUSH EAX                            ; 00541f3d
    PUSH EBX                            ; 00541f3e
    CALL crt_string.c_strncpy_FUN_00600f40 ; 00541f3f
        ;   XREF to: 00600f40 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strncpy_FUN_00600f40(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 00541f44
    PUSH EBX                            ; 00541f47
    LEA EAX,[ESI + 0x8]                 ; 00541f48
    PUSH EAX                            ; 00541f4b
    MOV EAX,dword ptr [ESI + 0x114]     ; 00541f4c
    MOV EDX,dword ptr [EBP + 0x4]       ; 00541f52 | DAT_02f98ad8
    SHL EAX,0x3                         ; 00541f55
    PUSH EDX                            ; 00541f58
    MOV EDX,EAX                         ; 00541f59
    SHL EAX,0x4                         ; 00541f5b
    SUB EAX,EDX                         ; 00541f5e
    MOV EDX,EAX                         ; 00541f60
    LEA EAX,[ESI + 0x20]                ; 00541f62
    ADD EAX,EDX                         ; 00541f65
    ADD EAX,0x1c                        ; 00541f67
    PUSH EAX                            ; 00541f6a
    PUSH ESI                            ; 00541f6b
    CALL core_netgame.cpp_CNetGame_FUN_00542370 ; 00541f6c
        ;   XREF to: 00542370 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_FUN_00542370()
    MOV EDI,dword ptr [0x02f7c8b8]      ; 00541f71 | g_CurrentGameTime
    ADD ESP,0x14                        ; 00541f77
    POP EBP                             ; 00541f7a
    POP EDI                             ; 00541f7b
    POP ESI                             ; 00541f7c
    POP EBX                             ; 00541f7d
    RET                                 ; 00541f7e
    MOV ECX,0x63dac5                    ; 00541f7f | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00541f7f
    MOV EBP,0x76c                       ; 00541f84
    PUSH 0x63dad9                       ; 00541f89 | = "CNetGame::processChatOut - too many p..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00541f8e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00541f94 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00541f9a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00541f9f
    JMP 0x00541e5f                      ; 00541fa2
        ;   XREF to: 00541e5f (UNCONDITIONAL_JUMP)  ; LAB_00541e5f
    MOV EDI,dword ptr [0x02f7c8b8]      ; 00541fa7 | g_CurrentGameTime
        ;   Label: LAB_00541fa7
    XOR EAX,EAX                         ; 00541fad
    JMP 0x00541ebe                      ; 00541faf
        ;   XREF to: 00541ebe (UNCONDITIONAL_JUMP)  ; LAB_00541ebe
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00541fb4
        ;   Label: LAB_00541fb4
    XOR EAX,EAX                         ; 00541fb7
    TEST EDX,EDX                        ; 00541fb9
    JLE 0x00541f10                      ; 00541fbb
        ;   XREF to: 00541f10 (CONDITIONAL_JUMP)  ; LAB_00541f10
    MOV EDX,EBP                         ; 00541fc1
    MOV ECX,EBP                         ; 00541fc3
    ADD ECX,0x4                         ; 00541fc5
        ;   Label: LAB_00541fc5
    LEA EBX,[EDI + 0xffc40000]          ; 00541fc8
    MOV byte ptr [EDX + 0x8],0x0        ; 00541fce | DAT_02f98adc | DAT_02f98add
    MOV dword ptr [ECX + 0x8],EBX       ; 00541fd2 | DAT_02f98ae0 | DAT_02f98ae4
    INC EAX                             ; 00541fd5
    MOV EBX,dword ptr [ESI + 0x1c]      ; 00541fd6
    INC EDX                             ; 00541fd9
    CMP EAX,EBX                         ; 00541fda
    JL 0x00541fc5                       ; 00541fdc
        ;   XREF to: 00541fc5 (CONDITIONAL_JUMP)  ; LAB_00541fc5
    JMP 0x00541f10                      ; 00541fde
        ;   XREF to: 00541f10 (UNCONDITIONAL_JUMP)  ; LAB_00541f10


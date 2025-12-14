; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00()
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 at 00540f0a
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470 at 00542675
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063dbcc
;   TerminatedCString s_CNetGame_removePlayer_in_0063dbe0
;   TerminatedCString s_core_netgame_cpp_0063dc0e
;   TerminatedCString s_CNetGame_removePlayer_tr_0063dc22
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_02f98ad0
;   undefined4 DAT_02f98ad4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542b00
        ;   Label: core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00
    PUSH ESI                            ; 00542b01
    PUSH EDI                            ; 00542b02
    PUSH EBP                            ; 00542b03
    SUB ESP,0x8                         ; 00542b04
    MOV EDX,dword ptr [ESP + 0x20]      ; 00542b07
    TEST EDX,EDX                        ; 00542b0b
    JL 0x00542b18                       ; 00542b0d
        ;   XREF to: 00542b18 (CONDITIONAL_JUMP)  ; LAB_00542b18
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00542b0f
    CMP EDX,dword ptr [EBX + 0x1c]      ; 00542b13
    JL 0x00542b3b                       ; 00542b16
        ;   XREF to: 00542b3b (CONDITIONAL_JUMP)  ; LAB_00542b3b
    MOV EBX,0x63dbcc                    ; 00542b18 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00542b18
    MOV ESI,0x862                       ; 00542b1d
    PUSH 0x63dbe0                       ; 00542b22 | = "CNetGame::removePlayer - invalid play..."
    MOV dword ptr [0x02f0ca48],EBX      ; 00542b27 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00542b2d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00542b33
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00542b38
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00542b3b
        ;   Label: LAB_00542b3b
    MOV EAX,dword ptr [ESP + 0x20]      ; 00542b3f
    CMP EAX,dword ptr [EBX + 0x114]     ; 00542b43
    JNZ 0x00542b6d                      ; 00542b49
        ;   XREF to: 00542b6d (CONDITIONAL_JUMP)  ; LAB_00542b6d
    MOV EBP,0x63dc0e                    ; 00542b4b | = "..\\core\\netgame.cpp"
    MOV EAX,0x869                       ; 00542b50
    PUSH 0x63dc22                       ; 00542b55 | = "CNetGame::removePlayer - tried to rem..."
    MOV dword ptr [0x02f0ca48],EBP      ; 00542b5a | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00542b60 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00542b65
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00542b6a
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00542b6d
        ;   Label: LAB_00542b6d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00542b71
    CMP EAX,dword ptr [EBX + 0x110]     ; 00542b75
    JNZ 0x00542b87                      ; 00542b7b
        ;   XREF to: 00542b87 (CONDITIONAL_JUMP)  ; LAB_00542b87
    MOV dword ptr [EBX + 0x110],0xffffffff ; 00542b7d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00542b87
        ;   Label: LAB_00542b87
    MOV EAX,dword ptr [ESP + 0x20]      ; 00542b8b
    CMP EAX,dword ptr [EBX + 0x114]     ; 00542b8f
    JNZ 0x00542ba1                      ; 00542b95
        ;   XREF to: 00542ba1 (CONDITIONAL_JUMP)  ; LAB_00542ba1
    MOV dword ptr [EBX + 0x114],0xffffffff ; 00542b97
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00542ba1
        ;   Label: LAB_00542ba1
    MOV EBX,dword ptr [EAX + 0x1c]      ; 00542ba5
    DEC EBX                             ; 00542ba8
    MOV ESI,dword ptr [ESP + 0x20]      ; 00542ba9
    MOV dword ptr [EAX + 0x1c],EBX      ; 00542bad
    MOV EAX,EBX                         ; 00542bb0
    SUB EAX,ESI                         ; 00542bb2
    SHL EAX,0x3                         ; 00542bb4
    MOV EBX,EAX                         ; 00542bb7
    SHL EAX,0x4                         ; 00542bb9
    SUB EAX,EBX                         ; 00542bbc
    PUSH EAX                            ; 00542bbe
    LEA EAX,[ESI + 0x1]                 ; 00542bbf
    MOV dword ptr [ESP + 0x4],EAX       ; 00542bc2
    SHL EAX,0x3                         ; 00542bc6
    MOV ESI,dword ptr [ESP + 0x20]      ; 00542bc9
    MOV EBX,EAX                         ; 00542bcd
    SHL EAX,0x4                         ; 00542bcf
    ADD ESI,0x20                        ; 00542bd2
    SUB EAX,EBX                         ; 00542bd5
    ADD EAX,ESI                         ; 00542bd7
    PUSH EAX                            ; 00542bd9
    MOV EAX,dword ptr [ESP + 0x28]      ; 00542bda
    SHL EAX,0x3                         ; 00542bde
    MOV EBX,EAX                         ; 00542be1
    SHL EAX,0x4                         ; 00542be3
    SUB EAX,EBX                         ; 00542be6
    ADD EAX,ESI                         ; 00542be8
    PUSH EAX                            ; 00542bea
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00542beb
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    XOR ESI,ESI                         ; 00542bf0
    MOV EDI,dword ptr [0x02f98ad0]      ; 00542bf2 | DAT_02f98ad0
    ADD ESP,0xc                         ; 00542bf8
    TEST EDI,EDI                        ; 00542bfb
    JLE 0x00542ca0                      ; 00542bfd
        ;   XREF to: 00542ca0 (CONDITIONAL_JUMP)  ; LAB_00542ca0
    MOV EAX,dword ptr [ESP + 0x20]      ; 00542c03
    MOV EDI,dword ptr [ESP + 0x20]      ; 00542c07
    MOV EBX,dword ptr [ESP]             ; 00542c0b
    SHL EAX,0x2                         ; 00542c0e
    ADD EDI,0x8                         ; 00542c11
    ADD EBX,0x8                         ; 00542c14
    LEA EBP,[EAX + 0xc]                 ; 00542c17
    ADD EDI,0x2f98ad4                   ; 00542c1a | DAT_02f98ad4
    ADD EAX,0x10                        ; 00542c20
    ADD EBX,0x2f98ad4                   ; 00542c23 | DAT_02f98ad4
    ADD EAX,0x2f98ad4                   ; 00542c29 | DAT_02f98ad4
    ADD EBP,0x2f98ad4                   ; 00542c2e | DAT_02f98ad4
    MOV dword ptr [ESP + 0x4],EAX       ; 00542c34
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00542c38
        ;   Label: LAB_00542c38
    MOV EDX,dword ptr [ESP + 0x20]      ; 00542c3c
    MOV EAX,dword ptr [EAX + 0x1c]      ; 00542c40
    SUB EAX,EDX                         ; 00542c43
    PUSH EAX                            ; 00542c45
    PUSH EBX                            ; 00542c46
    PUSH EDI                            ; 00542c47
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00542c48
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00542c4d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00542c50
    MOV ECX,dword ptr [ESP + 0x20]      ; 00542c54
    MOV EAX,dword ptr [EAX + 0x1c]      ; 00542c58
    SUB EAX,ECX                         ; 00542c5b
    SHL EAX,0x2                         ; 00542c5d
    PUSH EAX                            ; 00542c60
    MOV EAX,dword ptr [ESP + 0x8]       ; 00542c61
    PUSH EAX                            ; 00542c65
    PUSH EBP                            ; 00542c66
    INC ESI                             ; 00542c67
    ADD EBX,0x114                       ; 00542c68
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00542c6e
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00542c73
    ADD EDI,0x114                       ; 00542c76
    MOV EDX,dword ptr [ESP + 0x4]       ; 00542c7c
    MOV ECX,dword ptr [0x02f98ad0]      ; 00542c80 | DAT_02f98ad0
    ADD EDX,0x114                       ; 00542c86
    ADD EBP,0x114                       ; 00542c8c
    MOV dword ptr [ESP + 0x4],EDX       ; 00542c92
    CMP ESI,ECX                         ; 00542c96
    JL 0x00542c38                       ; 00542c98
        ;   XREF to: 00542c38 (CONDITIONAL_JUMP)  ; LAB_00542c38
    LEA EAX,[EAX]                       ; 00542c9a
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00542ca0
        ;   Label: LAB_00542ca0
    MOV EAX,dword ptr [ESP + 0x20]      ; 00542ca4
    MOV ESI,dword ptr [EBX + 0x110]     ; 00542ca8
    CMP EAX,ESI                         ; 00542cae
    JGE 0x00542cbb                      ; 00542cb0
        ;   XREF to: 00542cbb (CONDITIONAL_JUMP)  ; LAB_00542cbb
    LEA EDI,[ESI + -0x1]                ; 00542cb2
    MOV dword ptr [EBX + 0x110],EDI     ; 00542cb5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00542cbb
        ;   Label: LAB_00542cbb
    MOV EAX,dword ptr [ESP + 0x20]      ; 00542cbf
    MOV EBP,dword ptr [EBX + 0x114]     ; 00542cc3
    CMP EAX,EBP                         ; 00542cc9
    JL 0x00542cd5                       ; 00542ccb
        ;   XREF to: 00542cd5 (CONDITIONAL_JUMP)  ; LAB_00542cd5
    ADD ESP,0x8                         ; 00542ccd
    POP EBP                             ; 00542cd0
    POP EDI                             ; 00542cd1
    POP ESI                             ; 00542cd2
    POP EBX                             ; 00542cd3
    RET                                 ; 00542cd4
    LEA EDX,[EBP + -0x1]                ; 00542cd5
        ;   Label: LAB_00542cd5
    MOV dword ptr [EBX + 0x114],EDX     ; 00542cd8
    ADD ESP,0x8                         ; 00542cde
    POP EBP                             ; 00542ce1
    POP EDI                             ; 00542ce2
    POP ESI                             ; 00542ce3
    POP EBX                             ; 00542ce4
    RET                                 ; 00542ce5


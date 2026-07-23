; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_004ecc80(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_004ec600 at 004ec805
;   core_netgame.cpp_CNetGame_processPacket_FUN_004ea830 at 004eb09a
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0058c3a9
;   TerminatedCString s_CNetGame_removePlayer_in_0058c3bd
;   TerminatedCString s_core_netgame_cpp_0058c3eb
;   TerminatedCString s_CNetGame_removePlayer_tr_0058c3ff
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01d06610
;
; Called Functions:
;   crt_string.c_memmove_FUN_00566170
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecc80
        ;   Label: core_netgame.cpp_CNetGame_removePlayer_FUN_004ecc80
    PUSH ESI                            ; 004ecc81
    PUSH EDI                            ; 004ecc82
    PUSH EBP                            ; 004ecc83
    SUB ESP,0x8                         ; 004ecc84
    MOV EDX,dword ptr [ESP + 0x20]      ; 004ecc87
    TEST EDX,EDX                        ; 004ecc8b
    JL 0x004ecc98                       ; 004ecc8d
        ;   XREF to: 004ecc98 (CONDITIONAL_JUMP)  ; LAB_004ecc98
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004ecc8f
    CMP EDX,dword ptr [EBX + 0x1c]      ; 004ecc93
    JL 0x004eccbb                       ; 004ecc96
        ;   XREF to: 004eccbb (CONDITIONAL_JUMP)  ; LAB_004eccbb
    MOV EBX,0x58c3a9                    ; 004ecc98 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004ecc98
    MOV ESI,0x862                       ; 004ecc9d
    PUSH 0x58c3bd                       ; 004ecca2 | = "CNetGame::removePlayer - invalid play..."
    MOV dword ptr [0x01cc4800],EBX      ; 004ecca7 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004eccad | DAT_01cc4804
    CALL FUN_004c8440                   ; 004eccb3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004eccb8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004eccbb
        ;   Label: LAB_004eccbb
    MOV EAX,dword ptr [ESP + 0x20]      ; 004eccbf
    CMP EAX,dword ptr [EBX + 0x114]     ; 004eccc3
    JNZ 0x004ecced                      ; 004eccc9
        ;   XREF to: 004ecced (CONDITIONAL_JUMP)  ; LAB_004ecced
    MOV EBP,0x58c3eb                    ; 004ecccb | = "..\\core\\netgame.cpp"
    MOV EAX,0x869                       ; 004eccd0
    PUSH 0x58c3ff                       ; 004eccd5 | = "CNetGame::removePlayer - tried to rem..."
    MOV dword ptr [0x01cc4800],EBP      ; 004eccda | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004ecce0 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004ecce5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004eccea
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004ecced
        ;   Label: LAB_004ecced
    MOV EAX,dword ptr [ESP + 0x20]      ; 004eccf1
    CMP EAX,dword ptr [EBX + 0x110]     ; 004eccf5
    JNZ 0x004ecd07                      ; 004eccfb
        ;   XREF to: 004ecd07 (CONDITIONAL_JUMP)  ; LAB_004ecd07
    MOV dword ptr [EBX + 0x110],0xffffffff ; 004eccfd
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004ecd07
        ;   Label: LAB_004ecd07
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ecd0b
    CMP EAX,dword ptr [EBX + 0x114]     ; 004ecd0f
    JNZ 0x004ecd21                      ; 004ecd15
        ;   XREF to: 004ecd21 (CONDITIONAL_JUMP)  ; LAB_004ecd21
    MOV dword ptr [EBX + 0x114],0xffffffff ; 004ecd17
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ecd21
        ;   Label: LAB_004ecd21
    MOV EBX,dword ptr [EAX + 0x1c]      ; 004ecd25
    DEC EBX                             ; 004ecd28
    MOV ESI,dword ptr [ESP + 0x20]      ; 004ecd29
    MOV dword ptr [EAX + 0x1c],EBX      ; 004ecd2d
    MOV EAX,EBX                         ; 004ecd30
    SUB EAX,ESI                         ; 004ecd32
    SHL EAX,0x3                         ; 004ecd34
    MOV EBX,EAX                         ; 004ecd37
    SHL EAX,0x4                         ; 004ecd39
    SUB EAX,EBX                         ; 004ecd3c
    PUSH EAX                            ; 004ecd3e
    LEA EAX,[ESI + 0x1]                 ; 004ecd3f
    MOV dword ptr [ESP + 0x4],EAX       ; 004ecd42
    SHL EAX,0x3                         ; 004ecd46
    MOV ESI,dword ptr [ESP + 0x20]      ; 004ecd49
    MOV EBX,EAX                         ; 004ecd4d
    SHL EAX,0x4                         ; 004ecd4f
    ADD ESI,0x20                        ; 004ecd52
    SUB EAX,EBX                         ; 004ecd55
    ADD EAX,ESI                         ; 004ecd57
    PUSH EAX                            ; 004ecd59
    MOV EAX,dword ptr [ESP + 0x28]      ; 004ecd5a
    SHL EAX,0x3                         ; 004ecd5e
    MOV EBX,EAX                         ; 004ecd61
    SHL EAX,0x4                         ; 004ecd63
    SUB EAX,EBX                         ; 004ecd66
    ADD EAX,ESI                         ; 004ecd68
    PUSH EAX                            ; 004ecd6a
    CALL crt_string.c_memmove_FUN_00566170 ; 004ecd6b
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    XOR ESI,ESI                         ; 004ecd70
    MOV EDI,dword ptr [0x01d06610]      ; 004ecd72 | DAT_01d06610
    ADD ESP,0xc                         ; 004ecd78
    TEST EDI,EDI                        ; 004ecd7b
    JLE 0x004ece20                      ; 004ecd7d
        ;   XREF to: 004ece20 (CONDITIONAL_JUMP)  ; LAB_004ece20
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ecd83
    MOV EDI,dword ptr [ESP + 0x20]      ; 004ecd87
    MOV EBX,dword ptr [ESP]             ; 004ecd8b
    SHL EAX,0x2                         ; 004ecd8e
    ADD EDI,0x8                         ; 004ecd91
    ADD EBX,0x8                         ; 004ecd94
    LEA EBP,[EAX + 0xc]                 ; 004ecd97
    ADD EDI,0x1d06614                   ; 004ecd9a
    ADD EAX,0x10                        ; 004ecda0
    ADD EBX,0x1d06614                   ; 004ecda3
    ADD EAX,0x1d06614                   ; 004ecda9
    ADD EBP,0x1d06614                   ; 004ecdae
    MOV dword ptr [ESP + 0x4],EAX       ; 004ecdb4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ecdb8
        ;   Label: LAB_004ecdb8
    MOV EDX,dword ptr [ESP + 0x20]      ; 004ecdbc
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004ecdc0
    SUB EAX,EDX                         ; 004ecdc3
    PUSH EAX                            ; 004ecdc5
    PUSH EBX                            ; 004ecdc6
    PUSH EDI                            ; 004ecdc7
    CALL crt_string.c_memmove_FUN_00566170 ; 004ecdc8
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 004ecdcd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ecdd0
    MOV ECX,dword ptr [ESP + 0x20]      ; 004ecdd4
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004ecdd8
    SUB EAX,ECX                         ; 004ecddb
    SHL EAX,0x2                         ; 004ecddd
    PUSH EAX                            ; 004ecde0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ecde1
    PUSH EAX                            ; 004ecde5
    PUSH EBP                            ; 004ecde6
    INC ESI                             ; 004ecde7
    ADD EBX,0x114                       ; 004ecde8
    CALL crt_string.c_memmove_FUN_00566170 ; 004ecdee
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 004ecdf3
    ADD EDI,0x114                       ; 004ecdf6
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ecdfc
    MOV ECX,dword ptr [0x01d06610]      ; 004ece00 | DAT_01d06610
    ADD EDX,0x114                       ; 004ece06
    ADD EBP,0x114                       ; 004ece0c
    MOV dword ptr [ESP + 0x4],EDX       ; 004ece12
    CMP ESI,ECX                         ; 004ece16
    JL 0x004ecdb8                       ; 004ece18
        ;   XREF to: 004ecdb8 (CONDITIONAL_JUMP)  ; LAB_004ecdb8
    LEA EAX,[EAX]                       ; 004ece1a
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004ece20
        ;   Label: LAB_004ece20
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ece24
    MOV ESI,dword ptr [EBX + 0x110]     ; 004ece28
    CMP EAX,ESI                         ; 004ece2e
    JGE 0x004ece3b                      ; 004ece30
        ;   XREF to: 004ece3b (CONDITIONAL_JUMP)  ; LAB_004ece3b
    LEA EDI,[ESI + -0x1]                ; 004ece32
    MOV dword ptr [EBX + 0x110],EDI     ; 004ece35
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004ece3b
        ;   Label: LAB_004ece3b
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ece3f
    MOV EBP,dword ptr [EBX + 0x114]     ; 004ece43
    CMP EAX,EBP                         ; 004ece49
    JL 0x004ece55                       ; 004ece4b
        ;   XREF to: 004ece55 (CONDITIONAL_JUMP)  ; LAB_004ece55
    ADD ESP,0x8                         ; 004ece4d
    POP EBP                             ; 004ece50
    POP EDI                             ; 004ece51
    POP ESI                             ; 004ece52
    POP EBX                             ; 004ece53
    RET                                 ; 004ece54
    LEA EDX,[EBP + -0x1]                ; 004ece55
        ;   Label: LAB_004ece55
    MOV dword ptr [EBX + 0x114],EDX     ; 004ece58
    ADD ESP,0x8                         ; 004ece5e
    POP EBP                             ; 004ece61
    POP EDI                             ; 004ece62
    POP ESI                             ; 004ece63
    POP EBX                             ; 004ece64
    RET                                 ; 004ece65


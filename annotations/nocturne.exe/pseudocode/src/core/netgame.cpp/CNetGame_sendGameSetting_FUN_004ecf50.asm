; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_004ecf50(CNetGame *this_ptr,int player_index)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   player_index
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004ebaa6
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0058c489
;   TerminatedCString s_CNetGame_sendGameSetting_0058c49d
;   TerminatedCString s_core_netgame_cpp_0058c4eb
;   TerminatedCString s_CNetGame_send_invalid_pl_0058c4ff
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_01cea3f4
;   undefined4 DAT_01cea3f8
;   undefined4 DAT_01cea404
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_netgame.cpp_CNetGame_send_FUN_004eb350
;   crt_memory.c___arrinit_FUN_005644a7
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecf50
        ;   Label: core_netgame.cpp_CNetGame_sendGameSetting_FUN_004ecf50
    PUSH ESI                            ; 004ecf51
    PUSH EDI                            ; 004ecf52
    PUSH EBP                            ; 004ecf53
    SUB ESP,0xb8                        ; 004ecf54
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004ecf5a
    MOV EDX,dword ptr [EAX]             ; 004ecf61
    CMP EDX,0x1                         ; 004ecf63
    JNZ 0x004ecf6d                      ; 004ecf66
        ;   XREF to: 004ecf6d (CONDITIONAL_JUMP)  ; LAB_004ecf6d
    CMP EDX,dword ptr [EAX + 0x4]       ; 004ecf68
    JZ 0x004ecf90                       ; 004ecf6b
        ;   XREF to: 004ecf90 (CONDITIONAL_JUMP)  ; LAB_004ecf90
    MOV EBX,0x58c489                    ; 004ecf6d | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004ecf6d
    MOV ESI,0x8a8                       ; 004ecf72
    PUSH 0x58c49d                       ; 004ecf77 | = "CNetGame::sendGameSettingsPacket - sh..."
    MOV dword ptr [0x01cc4800],EBX      ; 004ecf7c | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004ecf82 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ecf88
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ecf8d
    MOV EDI,dword ptr [ESP + 0xd0]      ; 004ecf90
        ;   Label: LAB_004ecf90
    TEST EDI,EDI                        ; 004ecf97
    JL 0x004ecfa7                       ; 004ecf99
        ;   XREF to: 004ecfa7 (CONDITIONAL_JUMP)  ; LAB_004ecfa7
    MOV EDX,dword ptr [ESP + 0xcc]      ; 004ecf9b
    CMP EDI,dword ptr [EDX + 0x1c]      ; 004ecfa2
    JL 0x004ecfc9                       ; 004ecfa5
        ;   XREF to: 004ecfc9 (CONDITIONAL_JUMP)  ; LAB_004ecfc9
    MOV EAX,0x58c4eb                    ; 004ecfa7 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004ecfa7
    MOV EDX,0x8ae                       ; 004ecfac
    PUSH 0x58c4ff                       ; 004ecfb1 | = "CNetGame::send - invalid player index"
    MOV [0x01cc4800],EAX                ; 004ecfb6 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004ecfbb | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ecfc1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ecfc6
    PUSH 0x5a0e00                       ; 004ecfc9
        ;   Label: LAB_004ecfc9
    MOV AH,0xb                          ; 004ecfce
    PUSH 0x2                            ; 004ecfd0
    MOV byte ptr [ESP + 0xc],AH         ; 004ecfd2
    LEA EAX,[ESP + 0x69]                ; 004ecfd6
    MOV ECX,0xb1                        ; 004ecfda
    PUSH EAX                            ; 004ecfdf
    MOV dword ptr [ESP + 0xc],ECX       ; 004ecfe0
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004ecfe4
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004ecfe9
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004ecfec
    MOV EAX,dword ptr [EAX + 0x16c]     ; 004ecff3
    MOV dword ptr [ESP + 0x9],EAX       ; 004ecff9
    MOV EAX,[0x01cea404]                ; 004ecffd | DAT_01cea404
    MOV dword ptr [ESP + 0x5],EAX       ; 004ed002
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004ed006
    LEA EDI,[ESP + 0xd]                 ; 004ed00d
    MOV ESI,dword ptr [ESP + 0xcc]      ; 004ed011
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004ed018
    ADD ESI,0x118                       ; 004ed01b
    MOV dword ptr [ESP + 0x5d],EAX      ; 004ed021
    PUSH EDI                            ; 004ed025
    MOV AL,byte ptr [ESI]               ; 004ed026
        ;   Label: LAB_004ed026
    MOV byte ptr [EDI],AL               ; 004ed028
    CMP AL,0x0                          ; 004ed02a
    JZ 0x004ed03e                       ; 004ed02c
        ;   XREF to: 004ed03e (CONDITIONAL_JUMP)  ; LAB_004ed03e
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed02e
    ADD ESI,0x2                         ; 004ed031
    MOV byte ptr [EDI + 0x1],AL         ; 004ed034
    ADD EDI,0x2                         ; 004ed037
    CMP AL,0x0                          ; 004ed03a
    JNZ 0x004ed026                      ; 004ed03c
        ;   XREF to: 004ed026 (CONDITIONAL_JUMP)  ; LAB_004ed026
    POP EDI                             ; 004ed03e
        ;   Label: LAB_004ed03e
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004ed03f
    MOV ESI,dword ptr [EAX + 0x1c]      ; 004ed046
    XOR EBX,EBX                         ; 004ed049
    TEST ESI,ESI                        ; 004ed04b
    JLE 0x004ed0e0                      ; 004ed04d
        ;   XREF to: 004ed0e0 (CONDITIONAL_JUMP)  ; LAB_004ed0e0
    MOV EDX,dword ptr [ESP + 0xcc]      ; 004ed053
    ADD EAX,0x20                        ; 004ed05a
    LEA EBP,[ESP + 0x61]                ; 004ed05d
    MOV dword ptr [ESP + 0xb4],EAX      ; 004ed061
    IMUL ECX,EBX,0x28                   ; 004ed068
        ;   Label: LAB_004ed068
    MOV ESI,dword ptr [ESP + 0xb4]      ; 004ed06b
    MOV EDI,EBP                         ; 004ed072
    PUSH EDI                            ; 004ed074
    MOV AL,byte ptr [ESI]               ; 004ed075
        ;   Label: LAB_004ed075
    MOV byte ptr [EDI],AL               ; 004ed077
    CMP AL,0x0                          ; 004ed079
    JZ 0x004ed08d                       ; 004ed07b
        ;   XREF to: 004ed08d (CONDITIONAL_JUMP)  ; LAB_004ed08d
    MOV AL,byte ptr [ESI + 0x1]         ; 004ed07d
    ADD ESI,0x2                         ; 004ed080
    MOV byte ptr [EDI + 0x1],AL         ; 004ed083
    ADD EDI,0x2                         ; 004ed086
    CMP AL,0x0                          ; 004ed089
    JNZ 0x004ed075                      ; 004ed08b
        ;   XREF to: 004ed075 (CONDITIONAL_JUMP)  ; LAB_004ed075
    POP EDI                             ; 004ed08d
        ;   Label: LAB_004ed08d
    LEA ESI,[EDX + 0x3c]                ; 004ed08e
    LEA EDI,[ESP + ECX*0x1 + 0x75]      ; 004ed091
    MOVSD ES:EDI,ESI                    ; 004ed095
    MOVSD ES:EDI,ESI                    ; 004ed096
    MOV EAX,dword ptr [EDX + 0x64]      ; 004ed097
    MOV dword ptr [ESP + ECX*0x1 + 0x85],EAX ; 004ed09a
    MOV EAX,dword ptr [EDX + 0x34]      ; 004ed0a1
    ADD EDX,0x78                        ; 004ed0a4
    MOV dword ptr [ESP + ECX*0x1 + 0x7d],EAX ; 004ed0a7
    ADD EBP,0x28                        ; 004ed0ab
    MOV EAX,dword ptr [EDX + -0x40]     ; 004ed0ae
    MOV EDI,dword ptr [ESP + 0xb4]      ; 004ed0b1
    MOV dword ptr [ESP + ECX*0x1 + 0x81],EAX ; 004ed0b8
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004ed0bf
    INC EBX                             ; 004ed0c6
    ADD EDI,0x78                        ; 004ed0c7
    MOV ECX,dword ptr [EAX + 0x1c]      ; 004ed0ca
    MOV dword ptr [ESP + 0xb4],EDI      ; 004ed0cd
    CMP EBX,ECX                         ; 004ed0d4
    JL 0x004ed068                       ; 004ed0d6
        ;   XREF to: 004ed068 (CONDITIONAL_JUMP)  ; LAB_004ed068
    LEA EAX,[EAX]                       ; 004ed0d8
    MOV EDX,EDX                         ; 004ed0de
    MOV EAX,ESP                         ; 004ed0e0
        ;   Label: LAB_004ed0e0
    PUSH EAX                            ; 004ed0e2
    MOV EBX,dword ptr [ESP + 0xd4]      ; 004ed0e3
    PUSH EBX                            ; 004ed0ea
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004ed0eb
    PUSH ESI                            ; 004ed0f2
    CALL core_netgame.cpp_CNetGame_send_FUN_004eb350 ; 004ed0f3
        ;   XREF to: 004eb350 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_004eb350(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 004ed0f8
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004ed0fb
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EDX,EAX                         ; 004ed100
    MOV ECX,0x12                        ; 004ed102
    SAR EDX,0x1f                        ; 004ed107
    IDIV ECX                            ; 004ed10a
    MOV EDI,dword ptr [0x01cea3f4]      ; 004ed10c | DAT_01cea3f4
    MOV EDX,EAX                         ; 004ed112
    SUB EDX,EDI                         ; 004ed114
    MOV [0x01cea3f4],EAX                ; 004ed116 | DAT_01cea3f4
    TEST EDX,EDX                        ; 004ed11b
    JL 0x004ed160                       ; 004ed11d
        ;   XREF to: 004ed160 (CONDITIONAL_JUMP)  ; LAB_004ed160
    CMP EDX,0x20000                     ; 004ed11f
    JLE 0x004ed12c                      ; 004ed125
        ;   XREF to: 004ed12c (CONDITIONAL_JUMP)  ; LAB_004ed12c
    MOV EDX,0x20000                     ; 004ed127
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004ed12c
        ;   Label: LAB_004ed12c
    MOV EBP,dword ptr [0x01cea3f8]      ; 004ed133 | DAT_01cea3f8
    SHL EAX,0x3                         ; 004ed139
    ADD EBP,EDX                         ; 004ed13c
    MOV EDX,EAX                         ; 004ed13e
    SHL EAX,0x4                         ; 004ed140
    SUB EAX,EDX                         ; 004ed143
    ADD EAX,dword ptr [ESP + 0xcc]      ; 004ed145
    MOV dword ptr [0x01cea3f8],EBP      ; 004ed14c | DAT_01cea3f8
    MOV dword ptr [EAX + 0x58],EBP      ; 004ed152
    ADD ESP,0xb8                        ; 004ed155
    POP EBP                             ; 004ed15b
    POP EDI                             ; 004ed15c
    POP ESI                             ; 004ed15d
    POP EBX                             ; 004ed15e
    RET                                 ; 004ed15f
    XOR EDX,EDX                         ; 004ed160
        ;   Label: LAB_004ed160
    JMP 0x004ed12c                      ; 004ed162
        ;   XREF to: 004ed12c (UNCONDITIONAL_JUMP)  ; LAB_004ed12c


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_00507c00(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b6f90
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005cb0cc
;   TerminatedCString s_CNetGame_processClientFr_005cb0e0
;   undefined4 DAT_005cb119
;   undefined4 DAT_005cb121
;   undefined4 DAT_005cb129
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01da6478
;   undefined4 DAT_01da6488
;   undefined4 DAT_01dc5c80
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00507e50
;   core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70
;   core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00507fd0
;   core_netgame.cpp_CNetGame_updatePing_FUN_00506320
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507c00
        ;   Label: core_netgame.cpp_CNetGame_processClientFrame_FUN_00507c00
    PUSH ESI                            ; 00507c01
    PUSH EDI                            ; 00507c02
    PUSH EBP                            ; 00507c03
    MOV EBP,ESP                         ; 00507c04
    SUB ESP,0x10                        ; 00507c06
    AND ESP,0xfffffff8                  ; 00507c09
    MOV ESI,dword ptr [EBP + 0x14]      ; 00507c0c
    CMP dword ptr [ESI],0x2             ; 00507c0f
    JNZ 0x00507d76                      ; 00507c12
        ;   XREF to: 00507d76 (CONDITIONAL_JUMP)  ; LAB_00507d76
    CMP dword ptr [ESI + 0x4],0x3       ; 00507c18
    JNZ 0x00507d76                      ; 00507c1c
        ;   XREF to: 00507d76 (CONDITIONAL_JUMP)  ; LAB_00507d76
    CMP dword ptr [ESI + 0x120],0x0     ; 00507c22
    JL 0x00507d76                       ; 00507c29
        ;   XREF to: 00507d76 (CONDITIONAL_JUMP)  ; LAB_00507d76
    CMP dword ptr [ESI + 0x124],0x0     ; 00507c2f
    JL 0x00507d7d                       ; 00507c36
        ;   XREF to: 00507d7d (CONDITIONAL_JUMP)  ; LAB_00507d7d
    MOV ECX,dword ptr [ESI + 0x120]     ; 00507c3c
        ;   Label: LAB_00507c3c
    PUSH 0x41200000                     ; 00507c42
    PUSH ECX                            ; 00507c47
    PUSH ESI                            ; 00507c48
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_00506320 ; 00507c49
        ;   XREF to: 00506320 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_updatePing_FUN_00506320(CNetGame * this_ptr, int player_index, float max_ping)
    ADD ESP,0xc                         ; 00507c4e
    PUSH ESI                            ; 00507c51
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70 ; 00507c52
        ;   XREF to: 00504c70 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70(CNetGame * this_ptr)
    MOV EBX,dword ptr [ESI]             ; 00507c57
    ADD ESP,0x4                         ; 00507c59
    CMP EBX,0x2                         ; 00507c5c
    JNZ 0x00507d76                      ; 00507c5f
        ;   XREF to: 00507d76 (CONDITIONAL_JUMP)  ; LAB_00507d76
    MOV EBX,dword ptr [ESI + 0x124]     ; 00507c65
        ;   Label: LAB_00507c65
    MOV EDI,dword ptr [0x01dc5c80]      ; 00507c6b | DAT_01dc5c80
    SHL EBX,0x7                         ; 00507c71
    XOR EDX,EDX                         ; 00507c74
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x68] ; 00507c76
    TEST EDI,EDI                        ; 00507c7a
    JLE 0x00507db0                      ; 00507c7c
        ;   XREF to: 00507db0 (CONDITIONAL_JUMP)  ; LAB_00507db0
    XOR EAX,EAX                         ; 00507c82
    IMUL ECX,EDI,0x74                   ; 00507c84
    MOV EDI,dword ptr [EAX + 0x1dc5c84] ; 00507c87
        ;   Label: LAB_00507c87
    CMP EBX,EDI                         ; 00507c8d
    JNZ 0x00507da4                      ; 00507c8f
        ;   XREF to: 00507da4 (CONDITIONAL_JUMP)  ; LAB_00507da4
    TEST EDX,EDX                        ; 00507c95
    JL 0x00507db0                       ; 00507c97
        ;   XREF to: 00507db0 (CONDITIONAL_JUMP)  ; LAB_00507db0
    ADD EAX,0x1dc5c84                   ; 00507c9d
    PUSH EAX                            ; 00507ca2
    PUSH ESI                            ; 00507ca3
    CALL core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00507e50 ; 00507ca4
        ;   XREF to: 00507e50 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00507e50(CNetGame * this_ptr, SSimFrame * sim_frame)
    ADD ESP,0x8                         ; 00507ca9
    PUSH ESI                            ; 00507cac
    CALL core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00507fd0 ; 00507cad
        ;   XREF to: 00507fd0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00507fd0(CNetGame * this_ptr)
    MOV EAX,dword ptr [ESI + 0x124]     ; 00507cb2
    XOR EBX,EDI                         ; 00507cb8
    SHL EAX,0x7                         ; 00507cba
    ADD ESP,0x4                         ; 00507cbd
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x68] ; 00507cc0
    MOV EDI,dword ptr [0x01dc5c80]      ; 00507cc4 | DAT_01dc5c80
    MOV dword ptr [ESP + 0x4],EAX       ; 00507cca
    TEST EDI,EDI                        ; 00507cce
    JLE 0x00507d22                      ; 00507cd0
        ;   XREF to: 00507d22 (CONDITIONAL_JUMP)  ; LAB_00507d22
    MOV EAX,0x1dc5c84                   ; 00507cd2
    ADD EAX,0x74                        ; 00507cd7
    XOR EDI,EDI                         ; 00507cda
    MOV dword ptr [ESP + 0x8],EAX       ; 00507cdc
    MOV ECX,dword ptr [ESP + 0x4]       ; 00507ce0
        ;   Label: LAB_00507ce0
    CMP ECX,dword ptr [EDI + 0x1dc5c84] ; 00507ce4
    JLE 0x00507e21                      ; 00507cea
        ;   XREF to: 00507e21 (CONDITIONAL_JUMP)  ; LAB_00507e21
    MOV EDX,dword ptr [0x01dc5c80]      ; 00507cf0 | DAT_01dc5c80
    DEC EDX                             ; 00507cf6
    MOV EAX,EDX                         ; 00507cf7
    SUB EAX,EBX                         ; 00507cf9
    IMUL EAX,EAX,0x74                   ; 00507cfb
    PUSH EAX                            ; 00507cfe
    MOV ECX,dword ptr [ESP + 0xc]       ; 00507cff
    MOV EAX,0x1dc5c84                   ; 00507d03
    PUSH ECX                            ; 00507d08
    ADD EAX,EDI                         ; 00507d09
    PUSH EAX                            ; 00507d0b
    MOV dword ptr [0x01dc5c80],EDX      ; 00507d0c | DAT_01dc5c80
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00507d12
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00507d17
    CMP EBX,dword ptr [0x01dc5c80]      ; 00507d1a | DAT_01dc5c80
        ;   Label: LAB_00507d1a
    JL 0x00507ce0                       ; 00507d20
        ;   XREF to: 00507ce0 (CONDITIONAL_JUMP)  ; LAB_00507ce0
    MOV EDX,dword ptr [0x01dc5c80]      ; 00507d22 | DAT_01dc5c80
        ;   Label: LAB_00507d22
    MOV ECX,dword ptr [ESI + 0x124]     ; 00507d28
    MOV dword ptr [ESI + 0x178],0x0     ; 00507d2e
    SHL ECX,0x7                         ; 00507d38
    XOR EDI,EDI                         ; 00507d3b
    MOV ECX,dword ptr [ECX + ESI*0x1 + 0x68] ; 00507d3d
    TEST EDX,EDX                        ; 00507d41
    JLE 0x00507d76                      ; 00507d43
        ;   XREF to: 00507d76 (CONDITIONAL_JUMP)  ; LAB_00507d76
    MOV dword ptr [ESP + 0xc],EDX       ; 00507d45
    MOV EBX,dword ptr [ESP + 0xc]       ; 00507d49
    SHL EDX,0x3                         ; 00507d4d
    SUB EDX,EBX                         ; 00507d50
    SHL EDX,0x2                         ; 00507d52
    ADD EDX,EBX                         ; 00507d55
    XOR EAX,EAX                         ; 00507d57
    SHL EDX,0x2                         ; 00507d59
    CMP ECX,dword ptr [EAX + 0x1dc5c84] ; 00507d5c
        ;   Label: LAB_00507d5c
    JNZ 0x00507e35                      ; 00507d62
        ;   XREF to: 00507e35 (CONDITIONAL_JUMP)  ; LAB_00507e35
    TEST EDI,EDI                        ; 00507d68
    JL 0x00507d76                       ; 00507d6a
        ;   XREF to: 00507d76 (CONDITIONAL_JUMP)  ; LAB_00507d76
    MOV dword ptr [ESI + 0x178],0x1     ; 00507d6c
    MOV ESP,EBP                         ; 00507d76
        ;   Label: LAB_00507d76
    POP EBP                             ; 00507d78
    POP EDI                             ; 00507d79
    POP ESI                             ; 00507d7a
    POP EBX                             ; 00507d7b
    RET                                 ; 00507d7c
    MOV EAX,0x5cb0cc                    ; 00507d7d | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00507d7d
    MOV EDX,0x97c                       ; 00507d82
    PUSH 0x5cb0e0                       ; 00507d87 | = "CNetGame::processClientFrame - I'm no..."
    MOV [0x01d71de0],EAX                ; 00507d8c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00507d91 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00507d97
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00507d9c
    JMP 0x00507c3c                      ; 00507d9f
        ;   XREF to: 00507c3c (UNCONDITIONAL_JUMP)  ; LAB_00507c3c
    ADD EAX,0x74                        ; 00507da4
        ;   Label: LAB_00507da4
    INC EDX                             ; 00507da7
    CMP EAX,ECX                         ; 00507da8
    JL 0x00507c87                       ; 00507daa
        ;   XREF to: 00507c87 (CONDITIONAL_JUMP)  ; LAB_00507c87
    PUSH ESI                            ; 00507db0
        ;   Label: LAB_00507db0
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70 ; 00507db1
        ;   XREF to: 00504c70 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70(CNetGame * this_ptr)
    MOV EAX,dword ptr [ESI]             ; 00507db6
    ADD ESP,0x4                         ; 00507db8
    CMP EAX,0x2                         ; 00507dbb
    JNZ 0x00507d76                      ; 00507dbe
        ;   XREF to: 00507d76 (CONDITIONAL_JUMP)  ; LAB_00507d76
    MOV EAX,[0x01da6488]                ; 00507dc0 | DAT_01da6488
    MOV EDX,dword ptr [0x01da6478]      ; 00507dc5 | DAT_01da6478
    SUB EDX,EAX                         ; 00507dcb
    MOV dword ptr [ESP + 0xc],EDX       ; 00507dcd
    FILD dword ptr [ESP + 0xc]          ; 00507dd1
    FMUL double ptr [0x005cb119]        ; 00507dd5 | DAT_005cb119
    FST float ptr [ESP]                 ; 00507ddb
    FLDZ                                ; 00507dde
    FCOMPP                              ; 00507de0
    FNSTSW AX                           ; 00507de2
    SAHF                                ; 00507de4
    JBE 0x00507dec                      ; 00507de5
        ;   XREF to: 00507dec (CONDITIONAL_JUMP)  ; LAB_00507dec
    XOR EDX,EDX                         ; 00507de7
    MOV dword ptr [ESP],EDX             ; 00507de9
    FLD float ptr [ESP]                 ; 00507dec
        ;   Label: LAB_00507dec
    FCOMP double ptr [0x005cb121]       ; 00507def | DAT_005cb121
    FNSTSW AX                           ; 00507df5
    SAHF                                ; 00507df7
    JBE 0x00507e01                      ; 00507df8
        ;   XREF to: 00507e01 (CONDITIONAL_JUMP)  ; LAB_00507e01
    MOV dword ptr [ESP],0x41f00000      ; 00507dfa
    FLD float ptr [ESP]                 ; 00507e01
        ;   Label: LAB_00507e01
    FCOMP double ptr [0x005cb129]       ; 00507e04 | DAT_005cb129
    FNSTSW AX                           ; 00507e0a
    SAHF                                ; 00507e0c
    JBE 0x00507c65                      ; 00507e0d
        ;   XREF to: 00507c65 (CONDITIONAL_JUMP)  ; LAB_00507c65
    PUSH ESI                            ; 00507e13
    CALL core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00507fd0 ; 00507e14
        ;   XREF to: 00507fd0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00507fd0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00507e19
    JMP 0x00507c65                      ; 00507e1c
        ;   XREF to: 00507c65 (UNCONDITIONAL_JUMP)  ; LAB_00507c65
    MOV EAX,dword ptr [ESP + 0x8]       ; 00507e21
        ;   Label: LAB_00507e21
    INC EBX                             ; 00507e25
    ADD EAX,0x74                        ; 00507e26
    ADD EDI,0x74                        ; 00507e29
    MOV dword ptr [ESP + 0x8],EAX       ; 00507e2c
    JMP 0x00507d1a                      ; 00507e30
        ;   XREF to: 00507d1a (UNCONDITIONAL_JUMP)  ; LAB_00507d1a
    ADD EAX,0x74                        ; 00507e35
        ;   Label: LAB_00507e35
    INC EDI                             ; 00507e38
    CMP EAX,EDX                         ; 00507e39
    JL 0x00507d5c                       ; 00507e3b
        ;   XREF to: 00507d5c (CONDITIONAL_JUMP)  ; LAB_00507d5c
    MOV ESP,EBP                         ; 00507e41
    POP EBP                             ; 00507e43
    POP EDI                             ; 00507e44
    POP ESI                             ; 00507e45
    POP EBX                             ; 00507e46
    RET                                 ; 00507e47


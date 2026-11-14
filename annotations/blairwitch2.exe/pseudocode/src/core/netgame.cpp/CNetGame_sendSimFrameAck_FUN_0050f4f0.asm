; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_0050f4f0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined1       Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x4b]:4  local_4b
; undefined        Stack[-0x47]:1  local_47
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_0050f120 at 0050f1cd
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005e1160
;   TerminatedCString s_CNetGame_sendSimFrameAck_005e1174
;   TerminatedCString s_core_netgame_cpp_005e11b5
;   TerminatedCString s_CNetGame_sendSimFrameAck_005e11c9
;   TerminatedCString s_core_netgame_cpp_005e120c
;   TerminatedCString s_CNetGame_sendSimFrameAck_005e1220
;   TerminatedCString s_core_netgame_cpp_005e1256
;   TerminatedCString s_CNetGame_sendSimFrameAck_005e126a
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d34e38
;   undefined4 DAT_01d34e48
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_netgame.cpp_CNetGame_send_FUN_0050cd90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f4f0
        ;   Label: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_0050f4f0
    PUSH ESI                            ; 0050f4f1
    PUSH EDI                            ; 0050f4f2
    PUSH EBP                            ; 0050f4f3
    SUB ESP,0x40                        ; 0050f4f4
    MOV EBX,dword ptr [ESP + 0x54]      ; 0050f4f7
    CMP dword ptr [EBX],0x2             ; 0050f4fb
    JNZ 0x0050f5a2                      ; 0050f4fe
        ;   XREF to: 0050f5a2 (CONDITIONAL_JUMP)  ; LAB_0050f5a2
    CMP dword ptr [EBX + 0x4],0x3       ; 0050f504
        ;   Label: LAB_0050f504
    JZ 0x0050f52c                       ; 0050f508
        ;   XREF to: 0050f52c (CONDITIONAL_JUMP)  ; LAB_0050f52c
    MOV EBP,0x5e11b5                    ; 0050f50a | = "..\\core\\netgame.cpp"
    MOV EAX,0xa2a                       ; 0050f50f
    PUSH 0x5e11c9                       ; 0050f514 | = "CNetGame::sendSimFrameAck - should on..."
    MOV dword ptr [0x01d046a0],EBP      ; 0050f519 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0050f51f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050f524
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050f529
    CMP dword ptr [EBX + 0x120],0x0     ; 0050f52c
        ;   Label: LAB_0050f52c
    JL 0x0050f5ca                       ; 0050f533
        ;   XREF to: 0050f5ca (CONDITIONAL_JUMP)  ; LAB_0050f5ca
    CMP dword ptr [EBX + 0x124],0x0     ; 0050f539
        ;   Label: LAB_0050f539
    JL 0x0050f5f2                       ; 0050f540
        ;   XREF to: 0050f5f2 (CONDITIONAL_JUMP)  ; LAB_0050f5f2
    MOV EDX,0x3d                        ; 0050f546
        ;   Label: LAB_0050f546
    MOV AH,0x10                         ; 0050f54b
    MOV dword ptr [ESP],EDX             ; 0050f54d
    MOV byte ptr [ESP + 0x4],AH         ; 0050f550
    MOV EAX,dword ptr [EBX + 0x124]     ; 0050f554
    SHL EAX,0x7                         ; 0050f55a
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x68] ; 0050f55d
    MOV dword ptr [ESP + 0x5],EAX       ; 0050f561
    MOV EAX,dword ptr [EBX + 0x124]     ; 0050f565
    MOV ECX,0xd                         ; 0050f56b
    SHL EAX,0x7                         ; 0050f570
    LEA EDI,[ESP + 0x9]                 ; 0050f573
    LEA ESI,[EBX + EAX*0x1 + 0x6c]      ; 0050f577
    MOV EAX,ESP                         ; 0050f57b
    MOVSD.REP ES:EDI,ESI                ; 0050f57d
    PUSH EAX                            ; 0050f57f
    MOV ECX,dword ptr [EBX + 0x120]     ; 0050f580
    PUSH ECX                            ; 0050f586
    PUSH EBX                            ; 0050f587
    CALL core_netgame.cpp_CNetGame_send_FUN_0050cd90 ; 0050f588
        ;   XREF to: 0050cd90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_0050cd90(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    MOV EAX,[0x01d34e38]                ; 0050f58d | DAT_01d34e38
    ADD ESP,0xc                         ; 0050f592
    MOV [0x01d34e48],EAX                ; 0050f595 | DAT_01d34e48
    ADD ESP,0x40                        ; 0050f59a
    POP EBP                             ; 0050f59d
    POP EDI                             ; 0050f59e
    POP ESI                             ; 0050f59f
    POP EBX                             ; 0050f5a0
    RET                                 ; 0050f5a1
    MOV ECX,0x5e1160                    ; 0050f5a2 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050f5a2
    MOV ESI,0xa29                       ; 0050f5a7
    PUSH 0x5e1174                       ; 0050f5ac | = "CNetGame::sendSimFrameAck - should on..."
    MOV dword ptr [0x01d046a0],ECX      ; 0050f5b1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0050f5b7 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050f5bd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050f5c2
    JMP 0x0050f504                      ; 0050f5c5
        ;   XREF to: 0050f504 (UNCONDITIONAL_JUMP)  ; LAB_0050f504
    MOV ECX,0x5e120c                    ; 0050f5ca | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050f5ca
    MOV ESI,0xa2b                       ; 0050f5cf
    PUSH 0x5e1220                       ; 0050f5d4 | = "CNetGame::sendSimFrameAck - server no..."
    MOV dword ptr [0x01d046a0],ECX      ; 0050f5d9 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0050f5df | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050f5e5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050f5ea
    JMP 0x0050f539                      ; 0050f5ed
        ;   XREF to: 0050f539 (UNCONDITIONAL_JUMP)  ; LAB_0050f539
    MOV EBP,0x5e1256                    ; 0050f5f2 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050f5f2
    MOV EAX,0xa2c                       ; 0050f5f7
    PUSH 0x5e126a                       ; 0050f5fc | = "CNetGame::sendSimFrameAck - I'm not i..."
    MOV dword ptr [0x01d046a0],EBP      ; 0050f601 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0050f607 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050f60c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050f611
    JMP 0x0050f546                      ; 0050f614
        ;   XREF to: 0050f546 (UNCONDITIONAL_JUMP)  ; LAB_0050f546


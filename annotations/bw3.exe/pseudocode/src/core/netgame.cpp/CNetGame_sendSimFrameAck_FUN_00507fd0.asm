; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00507fd0(CNetGame *this_ptr)
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
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_00507c00 at 00507cad
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005cb1cc
;   TerminatedCString s_CNetGame_sendSimFrameAck_005cb1e0
;   TerminatedCString s_core_netgame_cpp_005cb221
;   TerminatedCString s_CNetGame_sendSimFrameAck_005cb235
;   TerminatedCString s_core_netgame_cpp_005cb278
;   TerminatedCString s_CNetGame_sendSimFrameAck_005cb28c
;   TerminatedCString s_core_netgame_cpp_005cb2c2
;   TerminatedCString s_CNetGame_sendSimFrameAck_005cb2d6
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01da6478
;   undefined4 DAT_01da6488
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_netgame.cpp_CNetGame_send_FUN_00505870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507fd0
        ;   Label: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00507fd0
    PUSH ESI                            ; 00507fd1
    PUSH EDI                            ; 00507fd2
    PUSH EBP                            ; 00507fd3
    SUB ESP,0x40                        ; 00507fd4
    MOV EBX,dword ptr [ESP + 0x54]      ; 00507fd7
    CMP dword ptr [EBX],0x2             ; 00507fdb
    JNZ 0x00508082                      ; 00507fde
        ;   XREF to: 00508082 (CONDITIONAL_JUMP)  ; LAB_00508082
    CMP dword ptr [EBX + 0x4],0x3       ; 00507fe4
        ;   Label: LAB_00507fe4
    JZ 0x0050800c                       ; 00507fe8
        ;   XREF to: 0050800c (CONDITIONAL_JUMP)  ; LAB_0050800c
    MOV EBP,0x5cb221                    ; 00507fea | = "..\\core\\netgame.cpp"
    MOV EAX,0xa2a                       ; 00507fef
    PUSH 0x5cb235                       ; 00507ff4 | = "CNetGame::sendSimFrameAck - should on..."
    MOV dword ptr [0x01d71de0],EBP      ; 00507ff9 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00507fff | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00508004
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00508009
    CMP dword ptr [EBX + 0x120],0x0     ; 0050800c
        ;   Label: LAB_0050800c
    JL 0x005080aa                       ; 00508013
        ;   XREF to: 005080aa (CONDITIONAL_JUMP)  ; LAB_005080aa
    CMP dword ptr [EBX + 0x124],0x0     ; 00508019
        ;   Label: LAB_00508019
    JL 0x005080d2                       ; 00508020
        ;   XREF to: 005080d2 (CONDITIONAL_JUMP)  ; LAB_005080d2
    MOV EDX,0x3d                        ; 00508026
        ;   Label: LAB_00508026
    MOV AH,0x10                         ; 0050802b
    MOV dword ptr [ESP],EDX             ; 0050802d
    MOV byte ptr [ESP + 0x4],AH         ; 00508030
    MOV EAX,dword ptr [EBX + 0x124]     ; 00508034
    SHL EAX,0x7                         ; 0050803a
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x68] ; 0050803d
    MOV dword ptr [ESP + 0x5],EAX       ; 00508041
    MOV EAX,dword ptr [EBX + 0x124]     ; 00508045
    MOV ECX,0xd                         ; 0050804b
    SHL EAX,0x7                         ; 00508050
    LEA EDI,[ESP + 0x9]                 ; 00508053
    LEA ESI,[EBX + EAX*0x1 + 0x6c]      ; 00508057
    MOV EAX,ESP                         ; 0050805b
    MOVSD.REP ES:EDI,ESI                ; 0050805d
    PUSH EAX                            ; 0050805f
    MOV ECX,dword ptr [EBX + 0x120]     ; 00508060
    PUSH ECX                            ; 00508066
    PUSH EBX                            ; 00508067
    CALL core_netgame.cpp_CNetGame_send_FUN_00505870 ; 00508068
        ;   XREF to: 00505870 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_00505870(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    MOV EAX,[0x01da6478]                ; 0050806d | DAT_01da6478
    ADD ESP,0xc                         ; 00508072
    MOV [0x01da6488],EAX                ; 00508075 | DAT_01da6488
    ADD ESP,0x40                        ; 0050807a
    POP EBP                             ; 0050807d
    POP EDI                             ; 0050807e
    POP ESI                             ; 0050807f
    POP EBX                             ; 00508080
    RET                                 ; 00508081
    MOV ECX,0x5cb1cc                    ; 00508082 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00508082
    MOV ESI,0xa29                       ; 00508087
    PUSH 0x5cb1e0                       ; 0050808c | = "CNetGame::sendSimFrameAck - should on..."
    MOV dword ptr [0x01d71de0],ECX      ; 00508091 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00508097 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050809d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005080a2
    JMP 0x00507fe4                      ; 005080a5
        ;   XREF to: 00507fe4 (UNCONDITIONAL_JUMP)  ; LAB_00507fe4
    MOV ECX,0x5cb278                    ; 005080aa | = "..\\core\\netgame.cpp"
        ;   Label: LAB_005080aa
    MOV ESI,0xa2b                       ; 005080af
    PUSH 0x5cb28c                       ; 005080b4 | = "CNetGame::sendSimFrameAck - server no..."
    MOV dword ptr [0x01d71de0],ECX      ; 005080b9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 005080bf | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005080c5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005080ca
    JMP 0x00508019                      ; 005080cd
        ;   XREF to: 00508019 (UNCONDITIONAL_JUMP)  ; LAB_00508019
    MOV EBP,0x5cb2c2                    ; 005080d2 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_005080d2
    MOV EAX,0xa2c                       ; 005080d7
    PUSH 0x5cb2d6                       ; 005080dc | = "CNetGame::sendSimFrameAck - I'm not i..."
    MOV dword ptr [0x01d71de0],EBP      ; 005080e1 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 005080e7 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005080ec
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005080f1
    JMP 0x00508026                      ; 005080f4
        ;   XREF to: 00508026 (UNCONDITIONAL_JUMP)  ; LAB_00508026


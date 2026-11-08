; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00530710(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x47]:4  local_47
; undefined        Stack[-0x43]:1  local_43
;
; XREF[1]:
;   FUN_00530340 at 005303e9
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005ec3bb
;   TerminatedCString s_CNetGame_sendSimFrameAck_005ec3cf
;   TerminatedCString s_core_netgame_cpp_005ec410
;   TerminatedCString s_CNetGame_sendSimFrameAck_005ec424
;   TerminatedCString s_core_netgame_cpp_005ec467
;   TerminatedCString s_CNetGame_sendSimFrameAck_005ec47b
;   TerminatedCString s_core_netgame_cpp_005ec4b1
;   TerminatedCString s_CNetGame_sendSimFrameAck_005ec4c5
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d51da0
;   undefined4 DAT_01d51db0
;
; Called Functions:
;   FUN_005030e0
;   FUN_0052df50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530710
        ;   Label: FUN_00530710
    PUSH ESI                            ; 00530711
    PUSH EDI                            ; 00530712
    PUSH EBP                            ; 00530713
    SUB ESP,0x3c                        ; 00530714
    MOV EBX,dword ptr [ESP + 0x50]      ; 00530717
    CMP dword ptr [EBX],0x2             ; 0053071b
    JNZ 0x005307d2                      ; 0053071e
        ;   XREF to: 005307d2 (CONDITIONAL_JUMP)  ; LAB_005307d2
    CMP dword ptr [EBX + 0x4],0x3       ; 00530724
        ;   Label: LAB_00530724
    JZ 0x0053074c                       ; 00530728
        ;   XREF to: 0053074c (CONDITIONAL_JUMP)  ; LAB_0053074c
    MOV EBP,0x5ec410                    ; 0053072a | = "..\\core\\netgame.cpp"
    MOV EAX,0xa2a                       ; 0053072f
    PUSH 0x5ec424                       ; 00530734 | = "CNetGame::sendSimFrameAck - should on..."
    MOV dword ptr [0x01d1d400],EBP      ; 00530739 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0053073f | DAT_01d1d404
    CALL FUN_005030e0                   ; 00530744
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00530749
    CMP dword ptr [EBX + 0x118],0x0     ; 0053074c
        ;   Label: LAB_0053074c
    JL 0x005307fa                       ; 00530753
        ;   XREF to: 005307fa (CONDITIONAL_JUMP)  ; LAB_005307fa
    CMP dword ptr [EBX + 0x11c],0x0     ; 00530759
        ;   Label: LAB_00530759
    JL 0x00530822                       ; 00530760
        ;   XREF to: 00530822 (CONDITIONAL_JUMP)  ; LAB_00530822
    MOV EDX,0x39                        ; 00530766
        ;   Label: LAB_00530766
    MOV AH,0x10                         ; 0053076b
    MOV dword ptr [ESP],EDX             ; 0053076d
    MOV byte ptr [ESP + 0x4],AH         ; 00530770
    MOV EAX,dword ptr [EBX + 0x11c]     ; 00530774
    SHL EAX,0x2                         ; 0053077a
    MOV EDX,EAX                         ; 0053077d
    SHL EAX,0x5                         ; 0053077f
    SUB EAX,EDX                         ; 00530782
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x68] ; 00530784
    MOV dword ptr [ESP + 0x5],EAX       ; 00530788
    MOV EAX,dword ptr [EBX + 0x11c]     ; 0053078c
    SHL EAX,0x2                         ; 00530792
    MOV EDX,EAX                         ; 00530795
    SHL EAX,0x5                         ; 00530797
    SUB EAX,EDX                         ; 0053079a
    LEA ESI,[EBX + EAX*0x1]             ; 0053079c
    MOV ECX,0xc                         ; 0053079f
    LEA EDI,[ESP + 0x9]                 ; 005307a4
    LEA ESI,[ESI + 0x6c]                ; 005307a8
    MOV EAX,ESP                         ; 005307ab
    MOVSD.REP ES:EDI,ESI                ; 005307ad
    PUSH EAX                            ; 005307af
    MOV ECX,dword ptr [EBX + 0x118]     ; 005307b0
    PUSH ECX                            ; 005307b6
    PUSH EBX                            ; 005307b7
    CALL FUN_0052df50                   ; 005307b8
        ;   XREF to: 0052df50 (UNCONDITIONAL_CALL)  ; undefined FUN_0052df50()
    MOV EAX,[0x01d51da0]                ; 005307bd | DAT_01d51da0
    ADD ESP,0xc                         ; 005307c2
    MOV [0x01d51db0],EAX                ; 005307c5 | DAT_01d51db0
    ADD ESP,0x3c                        ; 005307ca
    POP EBP                             ; 005307cd
    POP EDI                             ; 005307ce
    POP ESI                             ; 005307cf
    POP EBX                             ; 005307d0
    RET                                 ; 005307d1
    MOV ECX,0x5ec3bb                    ; 005307d2 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_005307d2
    MOV ESI,0xa29                       ; 005307d7
    PUSH 0x5ec3cf                       ; 005307dc | = "CNetGame::sendSimFrameAck - should on..."
    MOV dword ptr [0x01d1d400],ECX      ; 005307e1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005307e7 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005307ed
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005307f2
    JMP 0x00530724                      ; 005307f5
        ;   XREF to: 00530724 (UNCONDITIONAL_JUMP)  ; LAB_00530724
    MOV ECX,0x5ec467                    ; 005307fa | = "..\\core\\netgame.cpp"
        ;   Label: LAB_005307fa
    MOV ESI,0xa2b                       ; 005307ff
    PUSH 0x5ec47b                       ; 00530804 | = "CNetGame::sendSimFrameAck - server no..."
    MOV dword ptr [0x01d1d400],ECX      ; 00530809 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0053080f | DAT_01d1d404
    CALL FUN_005030e0                   ; 00530815
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0053081a
    JMP 0x00530759                      ; 0053081d
        ;   XREF to: 00530759 (UNCONDITIONAL_JUMP)  ; LAB_00530759
    MOV EBP,0x5ec4b1                    ; 00530822 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00530822
    MOV EAX,0xa2c                       ; 00530827
    PUSH 0x5ec4c5                       ; 0053082c | = "CNetGame::sendSimFrameAck - I'm not i..."
    MOV dword ptr [0x01d1d400],EBP      ; 00530831 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00530837 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0053083c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00530841
    JMP 0x00530766                      ; 00530844
        ;   XREF to: 00530766 (UNCONDITIONAL_JUMP)  ; LAB_00530766


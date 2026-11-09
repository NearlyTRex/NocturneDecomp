; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_00530340(CNetGame *this_ptr)
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
;   core_game.cpp_FUN_004ce580 at 004ce5e0
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005ec2bb
;   TerminatedCString s_CNetGame_processClientFr_005ec2cf
;   undefined4 DAT_005ec308
;   undefined4 DAT_005ec310
;   undefined4 DAT_005ec318
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d51da0
;   undefined4 DAT_01d51db0
;   undefined4 DAT_01d715a8
;   undefined4 DAT_01d71618
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_005305a0
;   core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360
;   core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00530710
;   core_netgame.cpp_CNetGame_updatePing_FUN_0052ea10
;   crt_string.c_memmove_FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530340
        ;   Label: core_netgame.cpp_CNetGame_processClientFrame_FUN_00530340
    PUSH ESI                            ; 00530341
    PUSH EDI                            ; 00530342
    PUSH EBP                            ; 00530343
    MOV EBP,ESP                         ; 00530344
    SUB ESP,0x10                        ; 00530346
    AND ESP,0xfffffff8                  ; 00530349
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053034c
    CMP dword ptr [ESI],0x2             ; 0053034f
    JNZ 0x005304c8                      ; 00530352
        ;   XREF to: 005304c8 (CONDITIONAL_JUMP)  ; LAB_005304c8
    CMP dword ptr [ESI + 0x4],0x3       ; 00530358
    JNZ 0x005304c8                      ; 0053035c
        ;   XREF to: 005304c8 (CONDITIONAL_JUMP)  ; LAB_005304c8
    CMP dword ptr [ESI + 0x118],0x0     ; 00530362
    JL 0x005304c8                       ; 00530369
        ;   XREF to: 005304c8 (CONDITIONAL_JUMP)  ; LAB_005304c8
    CMP dword ptr [ESI + 0x11c],0x0     ; 0053036f
    JL 0x005304cf                       ; 00530376
        ;   XREF to: 005304cf (CONDITIONAL_JUMP)  ; LAB_005304cf
    MOV ECX,dword ptr [ESI + 0x118]     ; 0053037c
        ;   Label: LAB_0053037c
    PUSH 0x41200000                     ; 00530382
    PUSH ECX                            ; 00530387
    PUSH ESI                            ; 00530388
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_0052ea10 ; 00530389
        ;   XREF to: 0052ea10 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_updatePing_FUN_0052ea10(CNetGame * this_ptr, int player_index, float max_ping)
    ADD ESP,0xc                         ; 0053038e
    PUSH ESI                            ; 00530391
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360 ; 00530392
        ;   XREF to: 0052d360 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360(CNetGame * this_ptr)
    MOV EBX,dword ptr [ESI]             ; 00530397
    ADD ESP,0x4                         ; 00530399
    CMP EBX,0x2                         ; 0053039c
    JNZ 0x005304c8                      ; 0053039f
        ;   XREF to: 005304c8 (CONDITIONAL_JUMP)  ; LAB_005304c8
    IMUL EAX,dword ptr [ESI + 0x11c],0x7c ; 005303a5
        ;   Label: LAB_005303a5
    MOV ECX,dword ptr [0x01d715a8]      ; 005303ac | DAT_01d715a8
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x68] ; 005303b2
    XOR EDX,EDX                         ; 005303b6
    TEST ECX,ECX                        ; 005303b8
    JLE 0x00530502                      ; 005303ba
        ;   XREF to: 00530502 (CONDITIONAL_JUMP)  ; LAB_00530502
    XOR EAX,EAX                         ; 005303c0
    IMUL ECX,ECX,0x6c                   ; 005303c2
    CMP EBX,dword ptr [EAX + 0x1d715ac] ; 005303c5 | DAT_01d71618
        ;   Label: LAB_005303c5
    JNZ 0x005304f6                      ; 005303cb
        ;   XREF to: 005304f6 (CONDITIONAL_JUMP)  ; LAB_005304f6
    TEST EDX,EDX                        ; 005303d1
    JL 0x00530502                       ; 005303d3
        ;   XREF to: 00530502 (CONDITIONAL_JUMP)  ; LAB_00530502
    ADD EAX,0x1d715ac                   ; 005303d9
    PUSH EAX                            ; 005303de | DAT_01d71618
    PUSH ESI                            ; 005303df
    CALL core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_005305a0 ; 005303e0
        ;   XREF to: 005305a0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_005305a0(CNetGame * this_ptr, SSimFrame * sim_frame)
    ADD ESP,0x8                         ; 005303e5
    PUSH ESI                            ; 005303e8
    CALL core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00530710 ; 005303e9
        ;   XREF to: 00530710 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00530710(CNetGame * this_ptr)
    MOV EAX,dword ptr [ESI + 0x11c]     ; 005303ee
    SHL EAX,0x2                         ; 005303f4
    MOV EDX,EAX                         ; 005303f7
    SHL EAX,0x5                         ; 005303f9
    SUB EAX,EDX                         ; 005303fc
    XOR EDI,EDI                         ; 005303fe
    ADD ESP,0x4                         ; 00530400
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x68] ; 00530403
    MOV ECX,dword ptr [0x01d715a8]      ; 00530407 | DAT_01d715a8
    MOV dword ptr [ESP + 0x4],EAX       ; 0053040d
    TEST ECX,ECX                        ; 00530411
    JLE 0x00530465                      ; 00530413
        ;   XREF to: 00530465 (CONDITIONAL_JUMP)  ; LAB_00530465
    MOV EAX,0x1d715ac                   ; 00530415
    ADD EAX,0x6c                        ; 0053041a
    XOR EBX,EBX                         ; 0053041d
    MOV dword ptr [ESP + 0x8],EAX       ; 0053041f | DAT_01d71618
    MOV ECX,dword ptr [ESP + 0x4]       ; 00530423
        ;   Label: LAB_00530423
    CMP ECX,dword ptr [EBX + 0x1d715ac] ; 00530427
    JLE 0x00530573                      ; 0053042d
        ;   XREF to: 00530573 (CONDITIONAL_JUMP)  ; LAB_00530573
    MOV EDX,dword ptr [0x01d715a8]      ; 00530433 | DAT_01d715a8
    DEC EDX                             ; 00530439
    MOV EAX,EDX                         ; 0053043a
    SUB EAX,EDI                         ; 0053043c
    IMUL EAX,EAX,0x6c                   ; 0053043e
    PUSH EAX                            ; 00530441
    MOV ECX,dword ptr [ESP + 0xc]       ; 00530442
    MOV EAX,0x1d715ac                   ; 00530446
    PUSH ECX                            ; 0053044b | DAT_01d71618
    ADD EAX,EBX                         ; 0053044c
    PUSH EAX                            ; 0053044e
    MOV dword ptr [0x01d715a8],EDX      ; 0053044f | DAT_01d715a8
    CALL crt_string.c_memmove_FUN_005c25d0 ; 00530455
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0053045a
    CMP EDI,dword ptr [0x01d715a8]      ; 0053045d | DAT_01d715a8
        ;   Label: LAB_0053045d
    JL 0x00530423                       ; 00530463
        ;   XREF to: 00530423 (CONDITIONAL_JUMP)  ; LAB_00530423
    MOV EAX,dword ptr [ESI + 0x11c]     ; 00530465
        ;   Label: LAB_00530465
    SHL EAX,0x2                         ; 0053046b
    MOV EDX,EAX                         ; 0053046e
    SHL EAX,0x5                         ; 00530470
    MOV dword ptr [ESI + 0x170],0x0     ; 00530473
    SUB EAX,EDX                         ; 0053047d
    XOR EBX,EBX                         ; 0053047f
    MOV EDX,dword ptr [0x01d715a8]      ; 00530481 | DAT_01d715a8
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x68] ; 00530487
    TEST EDX,EDX                        ; 0053048b
    JLE 0x005304c8                      ; 0053048d
        ;   XREF to: 005304c8 (CONDITIONAL_JUMP)  ; LAB_005304c8
    MOV dword ptr [ESP + 0xc],EDX       ; 0053048f
    MOV EDI,dword ptr [ESP + 0xc]       ; 00530493
    SHL EDX,0x2                         ; 00530497
    SUB EDX,EDI                         ; 0053049a
    SHL EDX,0x2                         ; 0053049c
    MOV dword ptr [ESP + 0xc],EDX       ; 0053049f
    MOV EDI,dword ptr [ESP + 0xc]       ; 005304a3
    SHL EDX,0x3                         ; 005304a7
    XOR EAX,EAX                         ; 005304aa
    ADD EDX,EDI                         ; 005304ac
    CMP ECX,dword ptr [EAX + 0x1d715ac] ; 005304ae | DAT_01d71618
        ;   Label: LAB_005304ae
    JNZ 0x00530587                      ; 005304b4
        ;   XREF to: 00530587 (CONDITIONAL_JUMP)  ; LAB_00530587
    TEST EBX,EBX                        ; 005304ba
    JL 0x005304c8                       ; 005304bc
        ;   XREF to: 005304c8 (CONDITIONAL_JUMP)  ; LAB_005304c8
    MOV dword ptr [ESI + 0x170],0x1     ; 005304be
    MOV ESP,EBP                         ; 005304c8
        ;   Label: LAB_005304c8
    POP EBP                             ; 005304ca
    POP EDI                             ; 005304cb
    POP ESI                             ; 005304cc
    POP EBX                             ; 005304cd
    RET                                 ; 005304ce
    MOV EAX,0x5ec2bb                    ; 005304cf | = "..\\core\\netgame.cpp"
        ;   Label: LAB_005304cf
    MOV EDX,0x97c                       ; 005304d4
    PUSH 0x5ec2cf                       ; 005304d9 | = "CNetGame::processClientFrame - I'm no..."
    MOV [0x01d1d400],EAX                ; 005304de | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005304e3 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005304e9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005304ee
    JMP 0x0053037c                      ; 005304f1
        ;   XREF to: 0053037c (UNCONDITIONAL_JUMP)  ; LAB_0053037c
    ADD EAX,0x6c                        ; 005304f6
        ;   Label: LAB_005304f6
    INC EDX                             ; 005304f9
    CMP EAX,ECX                         ; 005304fa
    JL 0x005303c5                       ; 005304fc
        ;   XREF to: 005303c5 (CONDITIONAL_JUMP)  ; LAB_005303c5
    PUSH ESI                            ; 00530502
        ;   Label: LAB_00530502
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360 ; 00530503
        ;   XREF to: 0052d360 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360(CNetGame * this_ptr)
    MOV EBX,dword ptr [ESI]             ; 00530508
    ADD ESP,0x4                         ; 0053050a
    CMP EBX,0x2                         ; 0053050d
    JNZ 0x005304c8                      ; 00530510
        ;   XREF to: 005304c8 (CONDITIONAL_JUMP)  ; LAB_005304c8
    MOV EAX,[0x01d51db0]                ; 00530512 | DAT_01d51db0
    MOV EDX,dword ptr [0x01d51da0]      ; 00530517 | DAT_01d51da0
    SUB EDX,EAX                         ; 0053051d
    MOV dword ptr [ESP + 0xc],EDX       ; 0053051f
    FILD dword ptr [ESP + 0xc]          ; 00530523
    FMUL double ptr [0x005ec308]        ; 00530527 | DAT_005ec308
    FST float ptr [ESP]                 ; 0053052d
    FLDZ                                ; 00530530
    FCOMPP                              ; 00530532
    FNSTSW AX                           ; 00530534
    SAHF                                ; 00530536
    JBE 0x0053053e                      ; 00530537
        ;   XREF to: 0053053e (CONDITIONAL_JUMP)  ; LAB_0053053e
    XOR EAX,EAX                         ; 00530539
    MOV dword ptr [ESP],EAX             ; 0053053b
    FLD float ptr [ESP]                 ; 0053053e
        ;   Label: LAB_0053053e
    FCOMP double ptr [0x005ec310]       ; 00530541 | DAT_005ec310
    FNSTSW AX                           ; 00530547
    SAHF                                ; 00530549
    JBE 0x00530553                      ; 0053054a
        ;   XREF to: 00530553 (CONDITIONAL_JUMP)  ; LAB_00530553
    MOV dword ptr [ESP],0x41f00000      ; 0053054c
    FLD float ptr [ESP]                 ; 00530553
        ;   Label: LAB_00530553
    FCOMP double ptr [0x005ec318]       ; 00530556 | DAT_005ec318
    FNSTSW AX                           ; 0053055c
    SAHF                                ; 0053055e
    JBE 0x005303a5                      ; 0053055f
        ;   XREF to: 005303a5 (CONDITIONAL_JUMP)  ; LAB_005303a5
    PUSH ESI                            ; 00530565
    CALL core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00530710 ; 00530566
        ;   XREF to: 00530710 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00530710(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0053056b
    JMP 0x005303a5                      ; 0053056e
        ;   XREF to: 005303a5 (UNCONDITIONAL_JUMP)  ; LAB_005303a5
    MOV EAX,dword ptr [ESP + 0x8]       ; 00530573
        ;   Label: LAB_00530573
    INC EDI                             ; 00530577
    ADD EAX,0x6c                        ; 00530578
    ADD EBX,0x6c                        ; 0053057b
    MOV dword ptr [ESP + 0x8],EAX       ; 0053057e
    JMP 0x0053045d                      ; 00530582
        ;   XREF to: 0053045d (UNCONDITIONAL_JUMP)  ; LAB_0053045d
    ADD EAX,0x6c                        ; 00530587
        ;   Label: LAB_00530587
    INC EBX                             ; 0053058a
    CMP EAX,EDX                         ; 0053058b
    JL 0x005304ae                       ; 0053058d
        ;   XREF to: 005304ae (CONDITIONAL_JUMP)  ; LAB_005304ae
    MOV ESP,EBP                         ; 00530593
    POP EBP                             ; 00530595
    POP EDI                             ; 00530596
    POP ESI                             ; 00530597
    POP EBX                             ; 00530598
    RET                                 ; 00530599


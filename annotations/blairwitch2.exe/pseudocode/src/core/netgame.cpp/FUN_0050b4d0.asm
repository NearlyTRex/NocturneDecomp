; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_FUN_0050b4d0(CNetGame *this_ptr,uint32_t *server_ip)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; uint32_t *       Stack[0x8]:4   server_ip
;
; XREF[1]:
;   core_game.cpp_joinNetworkGame_FUN_004bd3a0 at 004bd3f6
;
; Referenced Globals:
;   undefined4 DAT_005e0535
;   undefined4 DAT_005e053d
;   undefined4 DAT_005e0545
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_00617dd4
;   undefined4 DAT_0061e990
;   undefined4 DAT_01d34e38
;   undefined4 DAT_01d34e3c
;   undefined4 DAT_02653630
;
; Called Functions:
;   core_netgame.cpp_CNetGame_addPlayer_FUN_0050ce70
;   core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0
;   core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190
;   core_netgame.cpp_CNetGame_send_FUN_0050cd90
;   core_netgame.cpp_FUN_0050b790
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047be40
;   shape_edittool.cpp_FUN_0047be90
;   support_trisock.cpp_createNetworkAddr_FUN_00578e60
;   wincore_wddvmem.cpp_swapBuffers_FUN_00589560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b4d0
        ;   Label: core_netgame.cpp_FUN_0050b4d0
    PUSH ESI                            ; 0050b4d1
    PUSH EDI                            ; 0050b4d2
    PUSH EBP                            ; 0050b4d3
    MOV EBP,ESP                         ; 0050b4d4
    SUB ESP,0x4c                        ; 0050b4d6
    AND ESP,0xfffffff8                  ; 0050b4d9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050b4dc
    PUSH 0x0                            ; 0050b4df
    PUSH EBX                            ; 0050b4e1
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0 ; 0050b4e2
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0(CNetGame * this_ptr, int perform_handshake)
    MOV EAX,[0x00616494]                ; 0050b4e7 | g_CGamePtr
    MOV dword ptr [EBX + 0x1c],0x0      ; 0050b4ec
    ADD ESP,0x8                         ; 0050b4f3
    MOV EDX,dword ptr [EAX + 0xd8]      ; 0050b4f6
    PUSH EDX                            ; 0050b4fc
    MOV ECX,dword ptr [EAX + 0xd4]      ; 0050b4fd
    PUSH ECX                            ; 0050b503
    LEA ESI,[EBX + 0x8]                 ; 0050b504
    PUSH ESI                            ; 0050b507
    PUSH 0x1ddf                         ; 0050b508
    MOV EDI,dword ptr [0x02653630]      ; 0050b50d | DAT_02653630
    PUSH EDI                            ; 0050b513
    LEA EAX,[ESP + 0x4c]                ; 0050b514
    PUSH EAX                            ; 0050b518
    CALL support_trisock.cpp_createNetworkAddr_FUN_00578e60 ; 0050b519
        ;   XREF to: 00578e60 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_createNetworkAddr_FUN_00578e60()
    ADD ESP,0xc                         ; 0050b51e
    PUSH EAX                            ; 0050b521
    PUSH EBX                            ; 0050b522
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_0050ce70 ; 0050b523
        ;   XREF to: 0050ce70 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_addPlayer_FUN_0050ce70(CNetGame * this_ptr, SNetworkAddr * addr, char * name, int hero_number, ...)
    ADD ESP,0x14                        ; 0050b528
    PUSH EBX                            ; 0050b52b
    MOV dword ptr [EBX + 0x124],EAX     ; 0050b52c
    CALL core_netgame.cpp_FUN_0050b790  ; 0050b532
        ;   XREF to: 0050b790 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_FUN_0050b790(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050b537
    TEST EAX,EAX                        ; 0050b53a
    JNZ 0x0050b545                      ; 0050b53c
        ;   XREF to: 0050b545 (CONDITIONAL_JUMP)  ; LAB_0050b545
    MOV ESP,EBP                         ; 0050b53e
    POP EBP                             ; 0050b540
    POP EDI                             ; 0050b541
    POP ESI                             ; 0050b542
    POP EBX                             ; 0050b543
    RET                                 ; 0050b544
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050b545
        ;   Label: LAB_0050b545
    PUSH 0x1ddf                         ; 0050b548
    MOV EDX,dword ptr [EAX]             ; 0050b54d
    PUSH EDX                            ; 0050b54f
    LEA EAX,[ESP + 0x38]                ; 0050b550
    PUSH EAX                            ; 0050b554
    CALL support_trisock.cpp_createNetworkAddr_FUN_00578e60 ; 0050b555
        ;   XREF to: 00578e60 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_createNetworkAddr_FUN_00578e60()
    ADD ESP,0xc                         ; 0050b55a
    PUSH 0x0                            ; 0050b55d
    PUSH 0x0                            ; 0050b55f
    PUSH 0x5e0486                       ; 0050b561
    LEA EAX,[ESP + 0x3c]                ; 0050b566
    PUSH EAX                            ; 0050b56a
    PUSH EBX                            ; 0050b56b
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_0050ce70 ; 0050b56c
        ;   XREF to: 0050ce70 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_addPlayer_FUN_0050ce70(CNetGame * this_ptr, SNetworkAddr * addr, char * name, int hero_number, ...)
    MOV dword ptr [EBX],0x2             ; 0050b571
    ADD ESP,0x14                        ; 0050b577
    MOV dword ptr [EBX + 0x4],0x1       ; 0050b57a
    MOV EDI,dword ptr [0x01d34e38]      ; 0050b581 | DAT_01d34e38
    MOV dword ptr [EBX + 0x120],EAX     ; 0050b587
    PUSH 0x5e0490                       ; 0050b58d
    MOV EAX,[0x006138e0]                ; 0050b592 | g_CEditorToolsPtr
    XOR ECX,ECX                         ; 0050b597
    PUSH EAX                            ; 0050b599
    MOV dword ptr [0x01d34e3c],ECX      ; 0050b59a | DAT_01d34e3c
    SUB EDI,0x50000                     ; 0050b5a0
    CALL shape_edittool.cpp_FUN_0047be90 ; 0050b5a6
        ;   XREF to: 0047be90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be90()
    MOV EAX,[0x0061e990]                ; 0050b5ab | DAT_0061e990
    ADD ESP,0x8                         ; 0050b5b0
    MOV ECX,dword ptr [EBX + 0x120]     ; 0050b5b3
    XOR EDX,EDX                         ; 0050b5b9
    MOV dword ptr [ESP + 0x40],EAX      ; 0050b5bb
    MOV dword ptr [0x0061e990],EDX      ; 0050b5bf | DAT_0061e990
    TEST ECX,ECX                        ; 0050b5c5
    JL 0x0050b6e1                       ; 0050b5c7
        ;   XREF to: 0050b6e1 (CONDITIONAL_JUMP)  ; LAB_0050b6e1
    MOV dword ptr [ESP + 0x44],ESI      ; 0050b5cd
    MOV EAX,[0x01d34e38]                ; 0050b5d1 | DAT_01d34e38
        ;   Label: LAB_0050b5d1
    SUB EAX,EDI                         ; 0050b5d6
    MOV dword ptr [ESP + 0x48],EAX      ; 0050b5d8
    FILD dword ptr [ESP + 0x48]         ; 0050b5dc
    FMUL double ptr [0x005e0535]        ; 0050b5e0 | DAT_005e0535
    FST float ptr [ESP]                 ; 0050b5e6
    FLDZ                                ; 0050b5e9
    FCOMPP                              ; 0050b5eb
    FNSTSW AX                           ; 0050b5ed
    SAHF                                ; 0050b5ef
    JBE 0x0050b5f7                      ; 0050b5f0
        ;   XREF to: 0050b5f7 (CONDITIONAL_JUMP)  ; LAB_0050b5f7
    XOR EAX,EAX                         ; 0050b5f2
    MOV dword ptr [ESP],EAX             ; 0050b5f4
    FLD float ptr [ESP]                 ; 0050b5f7
        ;   Label: LAB_0050b5f7
    FCOMP double ptr [0x005e053d]       ; 0050b5fa | DAT_005e053d
    FNSTSW AX                           ; 0050b600
    SAHF                                ; 0050b602
    JBE 0x0050b60c                      ; 0050b603
        ;   XREF to: 0050b60c (CONDITIONAL_JUMP)  ; LAB_0050b60c
    MOV dword ptr [ESP],0x41f00000      ; 0050b605
    FLD float ptr [ESP]                 ; 0050b60c
        ;   Label: LAB_0050b60c
    FCOMP double ptr [0x005e0545]       ; 0050b60f | DAT_005e0545
    FNSTSW AX                           ; 0050b615
    SAHF                                ; 0050b617
    JBE 0x0050b692                      ; 0050b618
        ;   XREF to: 0050b692 (CONDITIONAL_JUMP)  ; LAB_0050b692
    MOV ECX,0x29                        ; 0050b61a
    MOV AH,0x1                          ; 0050b61f
    LEA EDI,[ESP + 0x9]                 ; 0050b621
    LEA ESI,[ESP + 0x30]                ; 0050b625
    MOV dword ptr [ESP + 0x4],ECX       ; 0050b629
    MOV byte ptr [ESP + 0x8],AH         ; 0050b62d
    MOVSD ES:EDI,ESI                    ; 0050b631
    MOVSD ES:EDI,ESI                    ; 0050b632
    MOV EAX,dword ptr [EBX + 0x124]     ; 0050b633
    SHL EAX,0x7                         ; 0050b639
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x34] ; 0050b63c
    MOV dword ptr [ESP + 0x25],EAX      ; 0050b640
    MOV EAX,dword ptr [EBX + 0x124]     ; 0050b644
    SHL EAX,0x7                         ; 0050b64a
    MOV ESI,dword ptr [ESP + 0x44]      ; 0050b64d
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x38] ; 0050b651
    LEA EDI,[ESP + 0x11]                ; 0050b655
    MOV dword ptr [ESP + 0x29],EAX      ; 0050b659
    PUSH EDI                            ; 0050b65d
    MOV AL,byte ptr [ESI]               ; 0050b65e
        ;   Label: LAB_0050b65e
    MOV byte ptr [EDI],AL               ; 0050b660
    CMP AL,0x0                          ; 0050b662
    JZ 0x0050b676                       ; 0050b664
        ;   XREF to: 0050b676 (CONDITIONAL_JUMP)  ; LAB_0050b676
    MOV AL,byte ptr [ESI + 0x1]         ; 0050b666
    ADD ESI,0x2                         ; 0050b669
    MOV byte ptr [EDI + 0x1],AL         ; 0050b66c
    ADD EDI,0x2                         ; 0050b66f
    CMP AL,0x0                          ; 0050b672
    JNZ 0x0050b65e                      ; 0050b674
        ;   XREF to: 0050b65e (CONDITIONAL_JUMP)  ; LAB_0050b65e
    POP EDI                             ; 0050b676
        ;   Label: LAB_0050b676
    LEA EAX,[ESP + 0x4]                 ; 0050b677
    PUSH EAX                            ; 0050b67b
    MOV ESI,dword ptr [EBX + 0x120]     ; 0050b67c
    PUSH ESI                            ; 0050b682
    PUSH EBX                            ; 0050b683
    CALL core_netgame.cpp_CNetGame_send_FUN_0050cd90 ; 0050b684
        ;   XREF to: 0050cd90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_0050cd90(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    MOV EDI,dword ptr [0x01d34e38]      ; 0050b689 | DAT_01d34e38
    ADD ESP,0xc                         ; 0050b68f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 0050b692
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
        ;   Label: LAB_0050b692
    PUSH EBX                            ; 0050b697
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190 ; 0050b698
        ;   XREF to: 0050c190 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_0050c190(CNetGame * this_ptr)
    MOV EAX,[0x01d34e3c]                ; 0050b69d | DAT_01d34e3c
    ADD ESP,0x4                         ; 0050b6a2
    CMP EAX,0x1                         ; 0050b6a5
    JZ 0x0050b779                       ; 0050b6a8
        ;   XREF to: 0050b779 (CONDITIONAL_JUMP)  ; LAB_0050b779
    CMP EAX,0x3                         ; 0050b6ae
    JNC 0x0050b76d                      ; 0050b6b1
        ;   XREF to: 0050b76d (CONDITIONAL_JUMP)  ; LAB_0050b76d
    CMP EAX,0x2                         ; 0050b6b7
    JZ 0x0050b6f5                       ; 0050b6ba
        ;   XREF to: 0050b6f5 (CONDITIONAL_JUMP)  ; LAB_0050b6f5
    PUSH 0x1                            ; 0050b6bc
        ;   Label: LAB_0050b6bc
    MOV EAX,[0x00617dd4]                ; 0050b6be | DAT_00617dd4
    PUSH EAX                            ; 0050b6c3
    MOV EDX,dword ptr [EAX]             ; 0050b6c4
    CALL dword ptr [EDX + 0x4]          ; 0050b6c6
    ADD ESP,0x8                         ; 0050b6c9
    TEST EAX,EAX                        ; 0050b6cc
    JNZ 0x0050b759                      ; 0050b6ce
        ;   XREF to: 0050b759 (CONDITIONAL_JUMP)  ; LAB_0050b759
    CMP dword ptr [EBX + 0x120],0x0     ; 0050b6d4
    JGE 0x0050b5d1                      ; 0050b6db
        ;   XREF to: 0050b5d1 (CONDITIONAL_JUMP)  ; LAB_0050b5d1
    PUSH 0x1                            ; 0050b6e1
        ;   Label: LAB_0050b6e1
    PUSH EBX                            ; 0050b6e3
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0 ; 0050b6e4
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 0050b6e9
    XOR EAX,EAX                         ; 0050b6ec
    MOV ESP,EBP                         ; 0050b6ee
    POP EBP                             ; 0050b6f0
    POP EDI                             ; 0050b6f1
    POP ESI                             ; 0050b6f2
    POP EBX                             ; 0050b6f3
    RET                                 ; 0050b6f4
    PUSH 0x5e04bc                       ; 0050b6f5
        ;   Label: LAB_0050b6f5
    MOV ESI,dword ptr [0x006138e0]      ; 0050b6fa | g_CEditorToolsPtr
    PUSH ESI                            ; 0050b700
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 0050b701
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050b706
    PUSH 0x0                            ; 0050b709
    PUSH EBX                            ; 0050b70b
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0 ; 0050b70c
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 0050b711
    XOR EAX,EAX                         ; 0050b714
    MOV ESP,EBP                         ; 0050b716
    POP EBP                             ; 0050b718
    POP EDI                             ; 0050b719
    POP ESI                             ; 0050b71a
    POP EBX                             ; 0050b71b
    RET                                 ; 0050b71c
    PUSH 0x5e04ea                       ; 0050b71d
        ;   Label: LAB_0050b71d
    MOV ECX,dword ptr [0x006138e0]      ; 0050b722 | g_CEditorToolsPtr
    PUSH ECX                            ; 0050b728
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 0050b729
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050b72e
    PUSH 0x0                            ; 0050b731
    PUSH EBX                            ; 0050b733
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0 ; 0050b734
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 0050b739
    XOR EAX,EAX                         ; 0050b73c
    MOV ESP,EBP                         ; 0050b73e
    POP EBP                             ; 0050b740
    POP EDI                             ; 0050b741
    POP ESI                             ; 0050b742
    POP EBX                             ; 0050b743
    RET                                 ; 0050b744
    PUSH 0x5e050c                       ; 0050b745
        ;   Label: LAB_0050b745
    MOV EDX,dword ptr [0x006138e0]      ; 0050b74a | g_CEditorToolsPtr
    PUSH EDX                            ; 0050b750
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 0050b751
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050b756
    PUSH 0x0                            ; 0050b759
        ;   Label: LAB_0050b759
    PUSH EBX                            ; 0050b75b
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0 ; 0050b75c
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0050b8d0(CNetGame * this_ptr, int perform_handshake)
    ADD ESP,0x8                         ; 0050b761
    XOR EAX,EAX                         ; 0050b764
    MOV ESP,EBP                         ; 0050b766
    POP EBP                             ; 0050b768
    POP EDI                             ; 0050b769
    POP ESI                             ; 0050b76a
    POP EBX                             ; 0050b76b
    RET                                 ; 0050b76c
    JBE 0x0050b71d                      ; 0050b76d
        ;   XREF to: 0050b71d (CONDITIONAL_JUMP)  ; LAB_0050b71d
        ;   Label: LAB_0050b76d
    CMP EAX,0x4                         ; 0050b76f
    JZ 0x0050b745                       ; 0050b772
        ;   XREF to: 0050b745 (CONDITIONAL_JUMP)  ; LAB_0050b745
    JMP 0x0050b6bc                      ; 0050b774
        ;   XREF to: 0050b6bc (UNCONDITIONAL_JUMP)  ; LAB_0050b6bc
    MOV EAX,dword ptr [ESP + 0x40]      ; 0050b779
        ;   Label: LAB_0050b779
    MOV [0x0061e990],EAX                ; 0050b77d | DAT_0061e990
    MOV EAX,0x1                         ; 0050b782
    MOV ESP,EBP                         ; 0050b787
    POP EBP                             ; 0050b789
    POP EDI                             ; 0050b78a
    POP ESI                             ; 0050b78b
    POP EBX                             ; 0050b78c
    RET                                 ; 0050b78d


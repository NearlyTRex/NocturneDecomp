; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(CNetGame *this_ptr,int perform_handshake)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   perform_handshake
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b858c
;   core_game.cpp_joinNetworkGame_FUN_004bf2e0 at 004bf377
;   core_netgame.cpp_CNetGame_init_FUN_00503e20 at 00503ea6
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0 at 00503fc2
;   core_netgame.cpp_CNetGame_processPacket_FUN_00504d60 at 005055e7
;   core_netgame.cpp_CNetGame_runLobby_FUN_00505a30 at 00505d70
;   core_netgame.cpp_CNetGame_shutdown_FUN_00503ed0 at 00503ed7
;   core_netgame.cpp_FUN_00503f00 at 00503f21
;
; Referenced Globals:
;   TerminatedCString s_Disconnecting_from_serve_005ca66b
;   TerminatedCString s_Couldn_t_contact_server_005ca688
;   TerminatedCString s_Disconnecting_005ca6af
;   TerminatedCString s_Couldn_t_connect_to_all_005ca6c0
;   undefined4 DAT_005ca6f1
;   undefined4 DAT_005ca6f9
;   undefined4 DAT_005ca701
;   undefined4 DAT_005ca709
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_01da6474
;   undefined4 DAT_01da6478
;   undefined4 DAT_01da6480
;   undefined4 DAT_01da6484
;   undefined4 DAT_01da648c
;   undefined4 DAT_01dc2690
;
; Called Functions:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70
;   core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80
;   shape_edittool.cpp_FUN_0047ee50
;   shape_edittool.cpp_FUN_0047f970
;   wincore_winrun.cpp_getTime_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005043b0
        ;   Label: core_netgame.cpp_CNetGame_disconnect_FUN_005043b0
    PUSH ESI                            ; 005043b1
    PUSH EDI                            ; 005043b2
    PUSH EBP                            ; 005043b3
    MOV EBP,ESP                         ; 005043b4
    SUB ESP,0x20                        ; 005043b6
    AND ESP,0xfffffff8                  ; 005043b9
    MOV ESI,dword ptr [EBP + 0x14]      ; 005043bc
    CMP dword ptr [EBP + 0x18],0x0      ; 005043bf
    JZ 0x005043d3                       ; 005043c3
        ;   XREF to: 005043d3 (CONDITIONAL_JUMP)  ; LAB_005043d3
    CMP dword ptr [ESI],0x2             ; 005043c5
    JZ 0x00504425                       ; 005043c8
        ;   XREF to: 00504425 (CONDITIONAL_JUMP)  ; LAB_00504425
    CMP dword ptr [ESI],0x1             ; 005043ca
        ;   Label: LAB_005043ca
    JZ 0x0050464b                       ; 005043cd
        ;   XREF to: 0050464b (CONDITIONAL_JUMP)  ; LAB_0050464b
    MOV dword ptr [ESI + 0x4],0x0       ; 005043d3
        ;   Label: LAB_005043d3
    MOV dword ptr [ESI + 0x124],0xffffffff ; 005043da
    MOV dword ptr [ESI + 0x120],0xffffffff ; 005043e4
    MOV byte ptr [ESI + 0x128],0x0      ; 005043ee
    XOR EBX,EBX                         ; 005043f5
    MOV dword ptr [ESI],0x0             ; 005043f7
    MOV dword ptr [0x01da648c],EBX      ; 005043fd | DAT_01da648c
    MOV dword ptr [0x01dc2690],EBX      ; 00504403 | DAT_01dc2690
    MOV dword ptr [0x01da6480],EBX      ; 00504409 | DAT_01da6480
    MOV dword ptr [ESI + 0x1c],EBX      ; 0050440f
    MOV dword ptr [0x01da6484],EBX      ; 00504412 | DAT_01da6484
    MOV dword ptr [ESI + 0x178],EBX     ; 00504418
    MOV ESP,EBP                         ; 0050441e
    POP EBP                             ; 00504420
    POP EDI                             ; 00504421
    POP ESI                             ; 00504422
    POP EBX                             ; 00504423
    RET                                 ; 00504424
    PUSH 0x5ca66b                       ; 00504425 | = "Disconnecting from server..."
        ;   Label: LAB_00504425
    MOV EBX,dword ptr [0x005fb140]      ; 0050442a | g_CEditorToolsPtr
    PUSH EBX                            ; 00504430
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50 ; 00504431
        ;   XREF to: 0047ed50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 00504436
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 00504439
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EDX,EAX                         ; 0050443e
    MOV EBX,0x12                        ; 00504440
    SAR EDX,0x1f                        ; 00504445
    IDIV EBX                            ; 00504448
    MOV EDI,dword ptr [0x01da6474]      ; 0050444a | DAT_01da6474
    MOV EDX,EAX                         ; 00504450
    SUB EAX,EDI                         ; 00504452
    MOV dword ptr [0x01da6474],EDX      ; 00504454 | DAT_01da6474
    TEST EAX,EAX                        ; 0050445a
    JL 0x00504535                       ; 0050445c
        ;   XREF to: 00504535 (CONDITIONAL_JUMP)  ; LAB_00504535
    CMP EAX,0x20000                     ; 00504462
    JLE 0x0050446e                      ; 00504467
        ;   XREF to: 0050446e (CONDITIONAL_JUMP)  ; LAB_0050446e
    MOV EAX,0x20000                     ; 00504469
    MOV EDX,dword ptr [0x01da6478]      ; 0050446e | DAT_01da6478
        ;   Label: LAB_0050446e
    ADD EDX,EAX                         ; 00504474
    MOV ECX,dword ptr [ESI + 0x120]     ; 00504476
    MOV EDI,EDX                         ; 0050447c
    MOV dword ptr [0x01da6478],EDX      ; 0050447e | DAT_01da6478
    LEA EBX,[EDX + 0xffe20000]          ; 00504484
    TEST ECX,ECX                        ; 0050448a
    JL 0x00504521                       ; 0050448c
        ;   XREF to: 00504521 (CONDITIONAL_JUMP)  ; LAB_00504521
    LEA EAX,[ESI + 0x20]                ; 00504492
    MOV dword ptr [ESP + 0x14],EAX      ; 00504495
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 00504499
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
        ;   Label: LAB_00504499
    MOV EDX,EAX                         ; 0050449e
    MOV ECX,0x12                        ; 005044a0
    SAR EDX,0x1f                        ; 005044a5
    IDIV ECX                            ; 005044a8
    MOV ECX,dword ptr [0x01da6474]      ; 005044aa | DAT_01da6474
    MOV EDX,EAX                         ; 005044b0
    SUB EAX,ECX                         ; 005044b2
    MOV dword ptr [0x01da6474],EDX      ; 005044b4 | DAT_01da6474
    TEST EAX,EAX                        ; 005044ba
    JL 0x0050453c                       ; 005044bc
        ;   XREF to: 0050453c (CONDITIONAL_JUMP)  ; LAB_0050453c
    CMP EAX,0x20000                     ; 005044c2
    JLE 0x005044ce                      ; 005044c7
        ;   XREF to: 005044ce (CONDITIONAL_JUMP)  ; LAB_005044ce
    MOV EAX,0x20000                     ; 005044c9
    MOV EDX,dword ptr [0x01da6478]      ; 005044ce | DAT_01da6478
        ;   Label: LAB_005044ce
    ADD EDX,EAX                         ; 005044d4
    MOV EAX,EDX                         ; 005044d6
    SUB EAX,EDI                         ; 005044d8
    MOV dword ptr [ESP + 0x1c],EAX      ; 005044da
    FILD dword ptr [ESP + 0x1c]         ; 005044de
    FMUL double ptr [0x005ca6f1]        ; 005044e2 | DAT_005ca6f1
    MOV dword ptr [0x01da6478],EDX      ; 005044e8 | DAT_01da6478
    FST float ptr [ESP]                 ; 005044ee
    FLDZ                                ; 005044f1
    FCOMPP                              ; 005044f3
    FNSTSW AX                           ; 005044f5
    SAHF                                ; 005044f7
    JBE 0x005044ff                      ; 005044f8
        ;   XREF to: 005044ff (CONDITIONAL_JUMP)  ; LAB_005044ff
    XOR ECX,ECX                         ; 005044fa
    MOV dword ptr [ESP],ECX             ; 005044fc
    FLD float ptr [ESP]                 ; 005044ff
        ;   Label: LAB_005044ff
    FCOMP double ptr [0x005ca701]       ; 00504502 | DAT_005ca701
    FNSTSW AX                           ; 00504508
    SAHF                                ; 0050450a
    JBE 0x00504540                      ; 0050450b
        ;   XREF to: 00504540 (CONDITIONAL_JUMP)  ; LAB_00504540
    PUSH 0x5ca688                       ; 0050450d | = "Couldn't contact server to disconnect."
        ;   Label: LAB_0050450d
    MOV EBX,dword ptr [0x005fb140]      ; 00504512 | g_CEditorToolsPtr
    PUSH EBX                            ; 00504518
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80 ; 00504519
        ;   XREF to: 0047ce80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050451e
    MOV EDI,dword ptr [0x005fb140]      ; 00504521 | g_CEditorToolsPtr
        ;   Label: LAB_00504521
    PUSH EDI                            ; 00504527
    CALL shape_edittool.cpp_FUN_0047f970 ; 00504528
        ;   XREF to: 0047f970 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f970()
    ADD ESP,0x4                         ; 0050452d
    JMP 0x005043ca                      ; 00504530
        ;   XREF to: 005043ca (UNCONDITIONAL_JUMP)  ; LAB_005043ca
    XOR EAX,EAX                         ; 00504535
        ;   Label: LAB_00504535
    JMP 0x0050446e                      ; 00504537
        ;   XREF to: 0050446e (UNCONDITIONAL_JUMP)  ; LAB_0050446e
    XOR EAX,EAX                         ; 0050453c
        ;   Label: LAB_0050453c
    JMP 0x005044ce                      ; 0050453e
        ;   XREF to: 005044ce (UNCONDITIONAL_JUMP)  ; LAB_005044ce
    CMP dword ptr [ESP],0x40400000      ; 00504540
        ;   Label: LAB_00504540
    JG 0x0050450d                       ; 00504547
        ;   XREF to: 0050450d (CONDITIONAL_JUMP)  ; LAB_0050450d
    FLD float ptr [ESP]                 ; 00504549
    FMUL float ptr [0x005ca6f9]         ; 0050454c | DAT_005ca6f9
    PUSH 0x453b8000                     ; 00504552
    SUB ESP,0x4                         ; 00504557
    MOV ECX,dword ptr [0x005fb140]      ; 0050455a | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 00504560
    PUSH ECX                            ; 00504563
    CALL shape_edittool.cpp_FUN_0047ee50 ; 00504564
        ;   XREF to: 0047ee50 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047ee50()
    ADD ESP,0xc                         ; 00504569
    MOV EAX,[0x01da6478]                ; 0050456c | DAT_01da6478
        ;   Label: LAB_0050456c
    SUB EAX,EBX                         ; 00504571
    MOV dword ptr [ESP + 0x1c],EAX      ; 00504573
    FILD dword ptr [ESP + 0x1c]         ; 00504577
    FMUL double ptr [0x005ca6f1]        ; 0050457b | DAT_005ca6f1
    FST float ptr [ESP + 0x8]           ; 00504581
    FLDZ                                ; 00504585
    FCOMPP                              ; 00504587
    FNSTSW AX                           ; 00504589
    SAHF                                ; 0050458b
    JBE 0x00504594                      ; 0050458c
        ;   XREF to: 00504594 (CONDITIONAL_JUMP)  ; LAB_00504594
    XOR EAX,EAX                         ; 0050458e
    MOV dword ptr [ESP + 0x8],EAX       ; 00504590
    FLD float ptr [ESP + 0x8]           ; 00504594
        ;   Label: LAB_00504594
    FCOMP double ptr [0x005ca701]       ; 00504598 | DAT_005ca701
    FNSTSW AX                           ; 0050459e
    SAHF                                ; 005045a0
    JBE 0x005045ab                      ; 005045a1
        ;   XREF to: 005045ab (CONDITIONAL_JUMP)  ; LAB_005045ab
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 005045a3
    FLD float ptr [ESP + 0x8]           ; 005045ab
        ;   Label: LAB_005045ab
    FCOMP double ptr [0x005ca709]       ; 005045af | DAT_005ca709
    FNSTSW AX                           ; 005045b5
    SAHF                                ; 005045b7
    JNC 0x005045fc                      ; 005045b8
        ;   XREF to: 005045fc (CONDITIONAL_JUMP)  ; LAB_005045fc
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 005045ba
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EDX,EAX                         ; 005045bf
    MOV ECX,0x12                        ; 005045c1
    SAR EDX,0x1f                        ; 005045c6
    IDIV ECX                            ; 005045c9
    MOV ECX,dword ptr [0x01da6474]      ; 005045cb | DAT_01da6474
    MOV EDX,EAX                         ; 005045d1
    SUB EDX,ECX                         ; 005045d3
    MOV [0x01da6474],EAX                ; 005045d5 | DAT_01da6474
    TEST EDX,EDX                        ; 005045da
    JL 0x005045f1                       ; 005045dc
        ;   XREF to: 005045f1 (CONDITIONAL_JUMP)  ; LAB_005045f1
    CMP EDX,0x20000                     ; 005045de
    JG 0x005045f5                       ; 005045e4
        ;   XREF to: 005045f5 (CONDITIONAL_JUMP)  ; LAB_005045f5
    ADD dword ptr [0x01da6478],EDX      ; 005045e6 | DAT_01da6478
        ;   Label: LAB_005045e6
    JMP 0x0050456c                      ; 005045ec
        ;   XREF to: 0050456c (UNCONDITIONAL_JUMP)  ; LAB_0050456c
    XOR EDX,EDX                         ; 005045f1
        ;   Label: LAB_005045f1
    JMP 0x005045e6                      ; 005045f3
        ;   XREF to: 005045e6 (UNCONDITIONAL_JUMP)  ; LAB_005045e6
    MOV EDX,0x20000                     ; 005045f5
        ;   Label: LAB_005045f5
    JMP 0x005045e6                      ; 005045fa
        ;   XREF to: 005045e6 (UNCONDITIONAL_JUMP)  ; LAB_005045e6
    MOV EAX,dword ptr [ESI + 0x120]     ; 005045fc
        ;   Label: LAB_005045fc
    MOV EBX,dword ptr [ESP + 0x14]      ; 00504602
    SHL EAX,0x7                         ; 00504606
    ADD EAX,EBX                         ; 00504609
    PUSH 0x1                            ; 0050460b
    ADD EAX,0x1c                        ; 0050460d
    PUSH EAX                            ; 00504610
    PUSH ESI                            ; 00504611
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90 ; 00504612
        ;   XREF to: 00507f90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 00504617
    PUSH ESI                            ; 0050461a
    MOV EBX,dword ptr [0x01da6478]      ; 0050461b | DAT_01da6478
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70 ; 00504621
        ;   XREF to: 00504c70 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70(CNetGame * this_ptr)
    MOV EAX,dword ptr [ESI + 0x120]     ; 00504626
    ADD ESP,0x4                         ; 0050462c
    TEST EAX,EAX                        ; 0050462f
    JGE 0x00504499                      ; 00504631
        ;   XREF to: 00504499 (CONDITIONAL_JUMP)  ; LAB_00504499
    MOV EDI,dword ptr [0x005fb140]      ; 00504637 | g_CEditorToolsPtr
    PUSH EDI                            ; 0050463d
    CALL shape_edittool.cpp_FUN_0047f970 ; 0050463e
        ;   XREF to: 0047f970 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f970()
    ADD ESP,0x4                         ; 00504643
    JMP 0x005043ca                      ; 00504646
        ;   XREF to: 005043ca (UNCONDITIONAL_JUMP)  ; LAB_005043ca
    PUSH 0x5ca6af                       ; 0050464b | = "Disconnecting..."
        ;   Label: LAB_0050464b
    MOV ECX,dword ptr [0x005fb140]      ; 00504650 | g_CEditorToolsPtr
    PUSH ECX                            ; 00504656
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50 ; 00504657
        ;   XREF to: 0047ed50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0050465c
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 0050465f
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EDX,EAX                         ; 00504664
    MOV EBX,0x12                        ; 00504666
    SAR EDX,0x1f                        ; 0050466b
    IDIV EBX                            ; 0050466e
    MOV EBX,dword ptr [0x01da6474]      ; 00504670 | DAT_01da6474
    MOV EDX,EAX                         ; 00504676
    SUB EAX,EBX                         ; 00504678
    MOV dword ptr [0x01da6474],EDX      ; 0050467a | DAT_01da6474
    TEST EAX,EAX                        ; 00504680
    JL 0x00504762                       ; 00504682
        ;   XREF to: 00504762 (CONDITIONAL_JUMP)  ; LAB_00504762
    CMP EAX,0x20000                     ; 00504688
    JLE 0x00504694                      ; 0050468d
        ;   XREF to: 00504694 (CONDITIONAL_JUMP)  ; LAB_00504694
    MOV EAX,0x20000                     ; 0050468f
    MOV EDI,dword ptr [0x01da6478]      ; 00504694 | DAT_01da6478
        ;   Label: LAB_00504694
    ADD EDI,EAX                         ; 0050469a
    MOV dword ptr [ESP + 0x18],EDI      ; 0050469c
    MOV dword ptr [0x01da6478],EDI      ; 005046a0 | DAT_01da6478
    MOV EAX,dword ptr [ESI + 0x1c]      ; 005046a6
    LEA EBX,[EDI + 0xffe20000]          ; 005046a9
    CMP EAX,0x1                         ; 005046af
    JLE 0x0050474e                      ; 005046b2
        ;   XREF to: 0050474e (CONDITIONAL_JUMP)  ; LAB_0050474e
    LEA EAX,[ESI + 0x20]                ; 005046b8
    MOV dword ptr [ESP + 0x10],EAX      ; 005046bb
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 005046bf
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
        ;   Label: LAB_005046bf
    MOV EDX,EAX                         ; 005046c4
    MOV ECX,0x12                        ; 005046c6
    SAR EDX,0x1f                        ; 005046cb
    IDIV ECX                            ; 005046ce
    MOV ECX,dword ptr [0x01da6474]      ; 005046d0 | DAT_01da6474
    MOV EDX,EAX                         ; 005046d6
    SUB EAX,ECX                         ; 005046d8
    MOV dword ptr [0x01da6474],EDX      ; 005046da | DAT_01da6474
    TEST EAX,EAX                        ; 005046e0
    JL 0x00504769                       ; 005046e2
        ;   XREF to: 00504769 (CONDITIONAL_JUMP)  ; LAB_00504769
    CMP EAX,0x20000                     ; 005046e8
    JLE 0x005046f4                      ; 005046ed
        ;   XREF to: 005046f4 (CONDITIONAL_JUMP)  ; LAB_005046f4
    MOV EAX,0x20000                     ; 005046ef
    MOV EDI,dword ptr [0x01da6478]      ; 005046f4 | DAT_01da6478
        ;   Label: LAB_005046f4
    ADD EDI,EAX                         ; 005046fa
    MOV EDX,dword ptr [ESP + 0x18]      ; 005046fc
    MOV EAX,EDI                         ; 00504700
    SUB EAX,EDX                         ; 00504702
    MOV dword ptr [ESP + 0x1c],EAX      ; 00504704
    FILD dword ptr [ESP + 0x1c]         ; 00504708
    FMUL double ptr [0x005ca6f1]        ; 0050470c | DAT_005ca6f1
    MOV dword ptr [0x01da6478],EDI      ; 00504712 | DAT_01da6478
    FST float ptr [ESP + 0x4]           ; 00504718
    FLDZ                                ; 0050471c
    FCOMPP                              ; 0050471e
    FNSTSW AX                           ; 00504720
    SAHF                                ; 00504722
    JBE 0x0050472b                      ; 00504723
        ;   XREF to: 0050472b (CONDITIONAL_JUMP)  ; LAB_0050472b
    XOR ECX,ECX                         ; 00504725
    MOV dword ptr [ESP + 0x4],ECX       ; 00504727
    FLD float ptr [ESP + 0x4]           ; 0050472b
        ;   Label: LAB_0050472b
    FCOMP double ptr [0x005ca701]       ; 0050472f | DAT_005ca701
    FNSTSW AX                           ; 00504735
    SAHF                                ; 00504737
    JBE 0x0050476d                      ; 00504738
        ;   XREF to: 0050476d (CONDITIONAL_JUMP)  ; LAB_0050476d
    PUSH 0x5ca6c0                       ; 0050473a | = "Couldn't connect to all clients to di..."
        ;   Label: LAB_0050473a
    MOV EDX,dword ptr [0x005fb140]      ; 0050473f | g_CEditorToolsPtr
    PUSH EDX                            ; 00504745
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80 ; 00504746
        ;   XREF to: 0047ce80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050474b
    MOV ECX,dword ptr [0x005fb140]      ; 0050474e | g_CEditorToolsPtr
        ;   Label: LAB_0050474e
    PUSH ECX                            ; 00504754
    CALL shape_edittool.cpp_FUN_0047f970 ; 00504755
        ;   XREF to: 0047f970 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f970()
    ADD ESP,0x4                         ; 0050475a
    JMP 0x005043d3                      ; 0050475d
        ;   XREF to: 005043d3 (UNCONDITIONAL_JUMP)  ; LAB_005043d3
    XOR EAX,EAX                         ; 00504762
        ;   Label: LAB_00504762
    JMP 0x00504694                      ; 00504764
        ;   XREF to: 00504694 (UNCONDITIONAL_JUMP)  ; LAB_00504694
    XOR EAX,EAX                         ; 00504769
        ;   Label: LAB_00504769
    JMP 0x005046f4                      ; 0050476b
        ;   XREF to: 005046f4 (UNCONDITIONAL_JUMP)  ; LAB_005046f4
    CMP dword ptr [ESP + 0x4],0x40a00000 ; 0050476d
        ;   Label: LAB_0050476d
    JG 0x0050473a                       ; 00504775
        ;   XREF to: 0050473a (CONDITIONAL_JUMP)  ; LAB_0050473a
    FLD float ptr [ESP + 0x4]           ; 00504777
    FMUL float ptr [0x005ca6f9]         ; 0050477b | DAT_005ca6f9
    PUSH 0x459c4000                     ; 00504781
    SUB ESP,0x4                         ; 00504786
    MOV EAX,[0x005fb140]                ; 00504789 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 0050478e
    PUSH EAX                            ; 00504791
    MOV EDI,0x20000                     ; 00504792
    CALL shape_edittool.cpp_FUN_0047ee50 ; 00504797
        ;   XREF to: 0047ee50 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047ee50()
    ADD ESP,0xc                         ; 0050479c
    MOV EAX,[0x01da6478]                ; 0050479f | DAT_01da6478
        ;   Label: LAB_0050479f
    SUB EAX,EBX                         ; 005047a4
    MOV dword ptr [ESP + 0x1c],EAX      ; 005047a6
    FILD dword ptr [ESP + 0x1c]         ; 005047aa
    FMUL double ptr [0x005ca6f1]        ; 005047ae | DAT_005ca6f1
    FST float ptr [ESP + 0xc]           ; 005047b4
    FLDZ                                ; 005047b8
    FCOMPP                              ; 005047ba
    FNSTSW AX                           ; 005047bc
    SAHF                                ; 005047be
    JBE 0x005047c7                      ; 005047bf
        ;   XREF to: 005047c7 (CONDITIONAL_JUMP)  ; LAB_005047c7
    XOR EAX,EAX                         ; 005047c1
    MOV dword ptr [ESP + 0xc],EAX       ; 005047c3
    FLD float ptr [ESP + 0xc]           ; 005047c7
        ;   Label: LAB_005047c7
    FCOMP double ptr [0x005ca701]       ; 005047cb | DAT_005ca701
    FNSTSW AX                           ; 005047d1
    SAHF                                ; 005047d3
    JBE 0x005047de                      ; 005047d4
        ;   XREF to: 005047de (CONDITIONAL_JUMP)  ; LAB_005047de
    MOV dword ptr [ESP + 0xc],0x41f00000 ; 005047d6
    FLD float ptr [ESP + 0xc]           ; 005047de
        ;   Label: LAB_005047de
    FCOMP double ptr [0x005ca709]       ; 005047e2 | DAT_005ca709
    FNSTSW AX                           ; 005047e8
    SAHF                                ; 005047ea
    JNC 0x0050482c                      ; 005047eb
        ;   XREF to: 0050482c (CONDITIONAL_JUMP)  ; LAB_0050482c
    CALL wincore_winrun.cpp_getTime_FUN_005806a0 ; 005047ed
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005806a0()
    MOV EDX,EAX                         ; 005047f2
    MOV ECX,0x12                        ; 005047f4
    SAR EDX,0x1f                        ; 005047f9
    IDIV ECX                            ; 005047fc
    MOV ECX,dword ptr [0x01da6474]      ; 005047fe | DAT_01da6474
    MOV EDX,EAX                         ; 00504804
    SUB EDX,ECX                         ; 00504806
    MOV [0x01da6474],EAX                ; 00504808 | DAT_01da6474
    TEST EDX,EDX                        ; 0050480d
    JL 0x00504824                       ; 0050480f
        ;   XREF to: 00504824 (CONDITIONAL_JUMP)  ; LAB_00504824
    CMP EDX,0x20000                     ; 00504811
    JG 0x00504828                       ; 00504817
        ;   XREF to: 00504828 (CONDITIONAL_JUMP)  ; LAB_00504828
    ADD dword ptr [0x01da6478],EDX      ; 00504819 | DAT_01da6478
        ;   Label: LAB_00504819
    JMP 0x0050479f                      ; 0050481f
        ;   XREF to: 0050479f (UNCONDITIONAL_JUMP)  ; LAB_0050479f
    XOR EDX,EDX                         ; 00504824
        ;   Label: LAB_00504824
    JMP 0x00504819                      ; 00504826
        ;   XREF to: 00504819 (UNCONDITIONAL_JUMP)  ; LAB_00504819
    MOV EDX,EDI                         ; 00504828
        ;   Label: LAB_00504828
    JMP 0x00504819                      ; 0050482a
        ;   XREF to: 00504819 (UNCONDITIONAL_JUMP)  ; LAB_00504819
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0050482c
        ;   Label: LAB_0050482c
    XOR EBX,EBX                         ; 0050482f
    TEST ECX,ECX                        ; 00504831
    JLE 0x0050485e                      ; 00504833
        ;   XREF to: 0050485e (CONDITIONAL_JUMP)  ; LAB_0050485e
    MOV EDI,dword ptr [ESP + 0x10]      ; 00504835
    ADD EDI,0x1c                        ; 00504839
    CMP EBX,dword ptr [ESI + 0x124]     ; 0050483c
        ;   Label: LAB_0050483c
    JZ 0x00504850                       ; 00504842
        ;   XREF to: 00504850 (CONDITIONAL_JUMP)  ; LAB_00504850
    PUSH 0x1                            ; 00504844
    PUSH EDI                            ; 00504846
    PUSH ESI                            ; 00504847
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90 ; 00504848
        ;   XREF to: 00507f90 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 0050484d
    INC EBX                             ; 00504850
        ;   Label: LAB_00504850
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00504851
    ADD EDI,0x80                        ; 00504854
    CMP EBX,EDX                         ; 0050485a
    JL 0x0050483c                       ; 0050485c
        ;   XREF to: 0050483c (CONDITIONAL_JUMP)  ; LAB_0050483c
    PUSH ESI                            ; 0050485e
        ;   Label: LAB_0050485e
    MOV EBX,dword ptr [0x01da6478]      ; 0050485f | DAT_01da6478
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70 ; 00504865
        ;   XREF to: 00504c70 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70(CNetGame * this_ptr)
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0050486a
    ADD ESP,0x4                         ; 0050486d
    CMP EDX,0x1                         ; 00504870
    JG 0x005046bf                       ; 00504873
        ;   XREF to: 005046bf (CONDITIONAL_JUMP)  ; LAB_005046bf
    MOV ECX,dword ptr [0x005fb140]      ; 00504879 | g_CEditorToolsPtr
    PUSH ECX                            ; 0050487f
    CALL shape_edittool.cpp_FUN_0047f970 ; 00504880
        ;   XREF to: 0047f970 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047f970()
    ADD ESP,0x4                         ; 00504885
    JMP 0x005043d3                      ; 00504888
        ;   XREF to: 005043d3 (UNCONDITIONAL_JUMP)  ; LAB_005043d3


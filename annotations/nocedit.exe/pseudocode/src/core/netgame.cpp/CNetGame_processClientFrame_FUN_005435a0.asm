; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0(CNetGame * this_ptr)
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
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da169
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063df08
;   TerminatedCString s_CNetGame_processClientFr_0063df1c
;   double DOUBLE_0063df55 = 0.0000152587890625
;   double DOUBLE_0063df5d = 30
;   double DOUBLE_0063df65 = 0.100000000000000
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   uint g_CurrentGameTime
;   undefined4 DAT_02f7c8c8
;   int g_SimFrameCount
;   undefined4 g_SimFrameHistory
;   undefined4 DAT_02f9c128
;   undefined4 DAT_02f9c18c
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
;   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
;   core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970
;   core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005435a0
        ;   Label: core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0
    PUSH ESI                            ; 005435a1
    PUSH EDI                            ; 005435a2
    PUSH EBP                            ; 005435a3
    MOV EBP,ESP                         ; 005435a4
    SUB ESP,0x10                        ; 005435a6
    AND ESP,0xfffffff8                  ; 005435a9
    MOV ESI,dword ptr [EBP + 0x14]      ; 005435ac
    CMP dword ptr [ESI],0x2             ; 005435af
    JNZ 0x00543720                      ; 005435b2
        ;   XREF to: 00543720 (CONDITIONAL_JUMP)  ; LAB_00543720
    CMP dword ptr [ESI + 0x4],0x3       ; 005435b8
    JNZ 0x00543720                      ; 005435bc
        ;   XREF to: 00543720 (CONDITIONAL_JUMP)  ; LAB_00543720
    CMP dword ptr [ESI + 0x110],0x0     ; 005435c2
    JL 0x00543720                       ; 005435c9
        ;   XREF to: 00543720 (CONDITIONAL_JUMP)  ; LAB_00543720
    CMP dword ptr [ESI + 0x114],0x0     ; 005435cf
    JL 0x00543727                       ; 005435d6
        ;   XREF to: 00543727 (CONDITIONAL_JUMP)  ; LAB_00543727
    MOV ECX,dword ptr [ESI + 0x110]     ; 005435dc
        ;   Label: LAB_005435dc
    PUSH 0x41200000                     ; 005435e2
    PUSH ECX                            ; 005435e7
    PUSH ESI                            ; 005435e8
    CALL core_netgame.cpp_CNetGame_updatePing_FUN_00541c80 ; 005435e9
        ;   XREF to: 00541c80 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_updatePing_FUN_00541c80(CNetGame * this_ptr, int player_index, float max_ping)
    ADD ESP,0xc                         ; 005435ee
    PUSH ESI                            ; 005435f1
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 ; 005435f2
        ;   XREF to: 005405b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame * this_ptr)
    MOV EBX,dword ptr [ESI]             ; 005435f7
    ADD ESP,0x4                         ; 005435f9
    CMP EBX,0x2                         ; 005435fc
    JNZ 0x00543720                      ; 005435ff
        ;   XREF to: 00543720 (CONDITIONAL_JUMP)  ; LAB_00543720
    IMUL EAX,dword ptr [ESI + 0x114],0x78 ; 00543605
        ;   Label: LAB_00543605
    MOV ECX,dword ptr [0x02f9c0c0]      ; 0054360c | g_SimFrameCount
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x68] ; 00543612
    XOR EDX,EDX                         ; 00543616
    TEST ECX,ECX                        ; 00543618
    JLE 0x0054375a                      ; 0054361a
        ;   XREF to: 0054375a (CONDITIONAL_JUMP)  ; LAB_0054375a
    XOR EAX,EAX                         ; 00543620
    IMUL ECX,ECX,0x64                   ; 00543622
    CMP EBX,dword ptr [EAX + 0x2f9c0c4] ; 00543625 | g_SimFrameHistory | DAT_02f9c128
        ;   Label: LAB_00543625
    JNZ 0x0054374e                      ; 0054362b
        ;   XREF to: 0054374e (CONDITIONAL_JUMP)  ; LAB_0054374e
    TEST EDX,EDX                        ; 00543631
    JL 0x0054375a                       ; 00543633
        ;   XREF to: 0054375a (CONDITIONAL_JUMP)  ; LAB_0054375a
    ADD EAX,0x2f9c0c4                   ; 00543639 | DAT_02f9c128 | g_SimFrameHistory
    PUSH EAX                            ; 0054363e | g_SimFrameHistory | DAT_02f9c128
    PUSH ESI                            ; 0054363f
    CALL core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800 ; 00543640
        ;   XREF to: 00543800 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800()
    ADD ESP,0x8                         ; 00543645
    PUSH ESI                            ; 00543648
    CALL core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970 ; 00543649
        ;   XREF to: 00543970 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970()
    MOV EAX,dword ptr [ESI + 0x114]     ; 0054364e
    SHL EAX,0x3                         ; 00543654
    MOV EDX,EAX                         ; 00543657
    SHL EAX,0x4                         ; 00543659
    SUB EAX,EDX                         ; 0054365c
    XOR EDI,EDI                         ; 0054365e
    ADD ESP,0x4                         ; 00543660
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x68] ; 00543663
    MOV ECX,dword ptr [0x02f9c0c0]      ; 00543667 | g_SimFrameCount
    MOV dword ptr [ESP + 0x4],EAX       ; 0054366d
    TEST ECX,ECX                        ; 00543671
    JLE 0x005436c5                      ; 00543673
        ;   XREF to: 005436c5 (CONDITIONAL_JUMP)  ; LAB_005436c5
    MOV EAX,0x2f9c0c4                   ; 00543675 | g_SimFrameHistory
    ADD EAX,0x64                        ; 0054367a
    XOR EBX,EBX                         ; 0054367d
    MOV dword ptr [ESP + 0x8],EAX       ; 0054367f | DAT_02f9c128
    MOV ECX,dword ptr [ESP + 0x4]       ; 00543683
        ;   Label: LAB_00543683
    CMP ECX,dword ptr [EBX + 0x2f9c0c4] ; 00543687 | g_SimFrameHistory
    JLE 0x005437cb                      ; 0054368d
        ;   XREF to: 005437cb (CONDITIONAL_JUMP)  ; LAB_005437cb
    MOV EDX,dword ptr [0x02f9c0c0]      ; 00543693 | g_SimFrameCount
    DEC EDX                             ; 00543699
    MOV EAX,EDX                         ; 0054369a
    SUB EAX,EDI                         ; 0054369c
    IMUL EAX,EAX,0x64                   ; 0054369e
    PUSH EAX                            ; 005436a1
    MOV ECX,dword ptr [ESP + 0xc]       ; 005436a2
    MOV EAX,0x2f9c0c4                   ; 005436a6 | g_SimFrameHistory
    PUSH ECX                            ; 005436ab | DAT_02f9c128
    ADD EAX,EBX                         ; 005436ac
    PUSH EAX                            ; 005436ae | g_SimFrameHistory
    MOV dword ptr [0x02f9c0c0],EDX      ; 005436af | g_SimFrameCount
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005436b5
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005436ba
    CMP EDI,dword ptr [0x02f9c0c0]      ; 005436bd | g_SimFrameCount
        ;   Label: LAB_005436bd
    JL 0x00543683                       ; 005436c3
        ;   XREF to: 00543683 (CONDITIONAL_JUMP)  ; LAB_00543683
    MOV EAX,dword ptr [ESI + 0x114]     ; 005436c5
        ;   Label: LAB_005436c5
    SHL EAX,0x3                         ; 005436cb
    MOV EDX,EAX                         ; 005436ce
    SHL EAX,0x4                         ; 005436d0
    MOV dword ptr [ESI + 0x168],0x0     ; 005436d3
    SUB EAX,EDX                         ; 005436dd
    XOR EBX,EBX                         ; 005436df
    MOV EDX,dword ptr [0x02f9c0c0]      ; 005436e1 | g_SimFrameCount
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x68] ; 005436e7
    TEST EDX,EDX                        ; 005436eb
    JLE 0x00543720                      ; 005436ed
        ;   XREF to: 00543720 (CONDITIONAL_JUMP)  ; LAB_00543720
    MOV dword ptr [ESP + 0xc],EDX       ; 005436ef
    MOV EDI,dword ptr [ESP + 0xc]       ; 005436f3
    SHL EDX,0x2                         ; 005436f7
    SUB EDX,EDI                         ; 005436fa
    SHL EDX,0x3                         ; 005436fc
    ADD EDX,EDI                         ; 005436ff
    XOR EAX,EAX                         ; 00543701
    SHL EDX,0x2                         ; 00543703
    CMP ECX,dword ptr [EAX + 0x2f9c0c4] ; 00543706 | g_SimFrameHistory | DAT_02f9c128
        ;   Label: LAB_00543706
    JNZ 0x005437df                      ; 0054370c
        ;   XREF to: 005437df (CONDITIONAL_JUMP)  ; LAB_005437df
    TEST EBX,EBX                        ; 00543712
    JL 0x00543720                       ; 00543714
        ;   XREF to: 00543720 (CONDITIONAL_JUMP)  ; LAB_00543720
    MOV dword ptr [ESI + 0x168],0x1     ; 00543716
    MOV ESP,EBP                         ; 00543720
        ;   Label: LAB_00543720
    POP EBP                             ; 00543722
    POP EDI                             ; 00543723
    POP ESI                             ; 00543724
    POP EBX                             ; 00543725
    RET                                 ; 00543726
    MOV EAX,0x63df08                    ; 00543727 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00543727
    MOV EDX,0x97c                       ; 0054372c
    PUSH 0x63df1c                       ; 00543731 | = "CNetGame::processClientFrame - I'm no..."
    MOV [0x02f0ca48],EAX                ; 00543736 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0054373b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00543741
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00543746
    JMP 0x005435dc                      ; 00543749
        ;   XREF to: 005435dc (UNCONDITIONAL_JUMP)  ; LAB_005435dc
    ADD EAX,0x64                        ; 0054374e
        ;   Label: LAB_0054374e
    INC EDX                             ; 00543751
    CMP EAX,ECX                         ; 00543752
    JL 0x00543625                       ; 00543754
        ;   XREF to: 00543625 (CONDITIONAL_JUMP)  ; LAB_00543625
    PUSH ESI                            ; 0054375a
        ;   Label: LAB_0054375a
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 ; 0054375b
        ;   XREF to: 005405b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame * this_ptr)
    MOV EBX,dword ptr [ESI]             ; 00543760
    ADD ESP,0x4                         ; 00543762
    CMP EBX,0x2                         ; 00543765
    JNZ 0x00543720                      ; 00543768
        ;   XREF to: 00543720 (CONDITIONAL_JUMP)  ; LAB_00543720
    MOV EAX,[0x02f7c8c8]                ; 0054376a | DAT_02f7c8c8
    MOV EDX,dword ptr [0x02f7c8b8]      ; 0054376f | g_CurrentGameTime
    SUB EDX,EAX                         ; 00543775
    MOV dword ptr [ESP + 0xc],EDX       ; 00543777
    FILD dword ptr [ESP + 0xc]          ; 0054377b
    FMUL double ptr [0x0063df55]        ; 0054377f | DOUBLE_0063df55
    FST float ptr [ESP]                 ; 00543785
    FLDZ                                ; 00543788
    FCOMPP                              ; 0054378a
    FNSTSW AX                           ; 0054378c
    SAHF                                ; 0054378e
    JBE 0x00543796                      ; 0054378f
        ;   XREF to: 00543796 (CONDITIONAL_JUMP)  ; LAB_00543796
    XOR EAX,EAX                         ; 00543791
    MOV dword ptr [ESP],EAX             ; 00543793
    FLD float ptr [ESP]                 ; 00543796
        ;   Label: LAB_00543796
    FCOMP double ptr [0x0063df5d]       ; 00543799 | DOUBLE_0063df5d
    FNSTSW AX                           ; 0054379f
    SAHF                                ; 005437a1
    JBE 0x005437ab                      ; 005437a2
        ;   XREF to: 005437ab (CONDITIONAL_JUMP)  ; LAB_005437ab
    MOV dword ptr [ESP],0x41f00000      ; 005437a4
    FLD float ptr [ESP]                 ; 005437ab
        ;   Label: LAB_005437ab
    FCOMP double ptr [0x0063df65]       ; 005437ae | DOUBLE_0063df65
    FNSTSW AX                           ; 005437b4
    SAHF                                ; 005437b6
    JBE 0x00543605                      ; 005437b7
        ;   XREF to: 00543605 (CONDITIONAL_JUMP)  ; LAB_00543605
    PUSH ESI                            ; 005437bd
    CALL core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970 ; 005437be
        ;   XREF to: 00543970 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970()
    ADD ESP,0x4                         ; 005437c3
    JMP 0x00543605                      ; 005437c6
        ;   XREF to: 00543605 (UNCONDITIONAL_JUMP)  ; LAB_00543605
    MOV EAX,dword ptr [ESP + 0x8]       ; 005437cb
        ;   Label: LAB_005437cb
    INC EDI                             ; 005437cf
    ADD EAX,0x64                        ; 005437d0
    ADD EBX,0x64                        ; 005437d3
    MOV dword ptr [ESP + 0x8],EAX       ; 005437d6 | DAT_02f9c18c
    JMP 0x005436bd                      ; 005437da
        ;   XREF to: 005436bd (UNCONDITIONAL_JUMP)  ; LAB_005436bd
    ADD EAX,0x64                        ; 005437df
        ;   Label: LAB_005437df
    INC EBX                             ; 005437e2
    CMP EAX,EDX                         ; 005437e3
    JL 0x00543706                       ; 005437e5
        ;   XREF to: 00543706 (CONDITIONAL_JUMP)  ; LAB_00543706
    MOV ESP,EBP                         ; 005437eb
    POP EBP                             ; 005437ed
    POP EDI                             ; 005437ee
    POP ESI                             ; 005437ef
    POP EBX                             ; 005437f0
    RET                                 ; 005437f1


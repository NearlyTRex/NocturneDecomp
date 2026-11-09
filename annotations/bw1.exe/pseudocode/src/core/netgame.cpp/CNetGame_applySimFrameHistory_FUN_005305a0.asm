; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_005305a0(CNetGame *this_ptr,SSimFrame *sim_frame)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SSimFrame *      Stack[0x8]:4   sim_frame
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_00530340 at 005303e0
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_0052fee0 at 005300d8
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005ec320
;   TerminatedCString s_CNetGame_applySimFrameHi_005ec334
;   CGame* g_CGamePtr = 01ccf390
;   CGame g_CGameInstance
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_game.cpp_CGame_slamDT_FUN_004d7f50
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005305a0
        ;   Label: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_005305a0
    PUSH ESI                            ; 005305a1
    PUSH EDI                            ; 005305a2
    PUSH EBP                            ; 005305a3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005305a4
    CMP dword ptr [EBP + 0x11c],0x0     ; 005305a8
    JL 0x00530630                       ; 005305af
        ;   XREF to: 00530630 (CONDITIONAL_JUMP)  ; LAB_00530630
    MOV EAX,dword ptr [ESP + 0x18]      ; 005305b5
        ;   Label: LAB_005305b5
    MOV EAX,dword ptr [EAX + 0x4]       ; 005305b9
    MOV dword ptr [EBP + 0x174],EAX     ; 005305bc
    MOV EAX,dword ptr [ESP + 0x18]      ; 005305c2
    MOV ESI,dword ptr [0x0061d95c]      ; 005305c6 | g_CGamePtr
    PUSH dword ptr [EAX + 0x8]          ; 005305cc
    PUSH ESI                            ; 005305cf | g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004d7f50 ; 005305d0
        ;   XREF to: 004d7f50 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004d7f50(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005305d5
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005305d8
    XOR EDX,EDX                         ; 005305db
    TEST EDI,EDI                        ; 005305dd
    JLE 0x00530610                      ; 005305df
        ;   XREF to: 00530610 (CONDITIONAL_JUMP)  ; LAB_00530610
    MOV EAX,dword ptr [ESP + 0x18]      ; 005305e1
    XOR EBX,EBX                         ; 005305e5
    MOV ESI,dword ptr [EBX + 0x1d06aa4] ; 005305e7
        ;   Label: LAB_005305e7
    MOV ECX,0xc                         ; 005305ed
    LEA EDI,[ESI + 0xc1d8]              ; 005305f2
    LEA ESI,[EAX + 0xc]                 ; 005305f8
    ADD EBX,0x4                         ; 005305fb
    MOVSD.REP ES:EDI,ESI                ; 005305fe
    INC EDX                             ; 00530600
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00530601
    ADD EAX,0x30                        ; 00530604
    CMP EDX,ECX                         ; 00530607
    JL 0x005305e7                       ; 00530609
        ;   XREF to: 005305e7 (CONDITIONAL_JUMP)  ; LAB_005305e7
    LEA EAX,[EAX]                       ; 0053060b
    MOV ECX,ECX                         ; 0053060e
    MOV EAX,dword ptr [EBP + 0x11c]     ; 00530610
        ;   Label: LAB_00530610
    SHL EAX,0x2                         ; 00530616
    MOV EBX,dword ptr [ESP + 0x18]      ; 00530619
    MOV EDX,EAX                         ; 0053061d
    SHL EAX,0x5                         ; 0053061f
    MOV EBX,dword ptr [EBX]             ; 00530622
    SUB EAX,EDX                         ; 00530624
    INC EBX                             ; 00530626
    MOV dword ptr [EAX + EBP*0x1 + 0x68],EBX ; 00530627
    POP EBP                             ; 0053062b
    POP EDI                             ; 0053062c
    POP ESI                             ; 0053062d
    POP EBX                             ; 0053062e
    RET                                 ; 0053062f
    MOV ECX,0x5ec320                    ; 00530630 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00530630
    MOV EBX,0x9cd                       ; 00530635
    PUSH 0x5ec334                       ; 0053063a | = "CNetGame::applySimFrameHistory - I'm ..."
    MOV dword ptr [0x01d1d400],ECX      ; 0053063f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00530645 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053064b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00530650
    JMP 0x005305b5                      ; 00530653
        ;   XREF to: 005305b5 (UNCONDITIONAL_JUMP)  ; LAB_005305b5


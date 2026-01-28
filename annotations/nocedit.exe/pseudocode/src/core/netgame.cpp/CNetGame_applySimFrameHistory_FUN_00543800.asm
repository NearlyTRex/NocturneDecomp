; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(void)
;
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0 at 00543640
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 at 00543348
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063df6d
;   TerminatedCString s_CNetGame_applySimFrameHi_0063df81
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   CHero*[4] g_HeroActors
;   undefined4 DAT_02db87c4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_game.cpp_CGame_slamDT_FUN_004e3080
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543800
        ;   Label: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800
    PUSH ESI                            ; 00543801
    PUSH EDI                            ; 00543802
    PUSH EBP                            ; 00543803
    MOV EBP,dword ptr [ESP + 0x14]      ; 00543804
    CMP dword ptr [EBP + 0x114],0x0     ; 00543808
    JL 0x00543890                       ; 0054380f
        ;   XREF to: 00543890 (CONDITIONAL_JUMP)  ; LAB_00543890
    MOV EAX,dword ptr [ESP + 0x18]      ; 00543815
        ;   Label: LAB_00543815
    MOV EAX,dword ptr [EAX + 0x4]       ; 00543819
    MOV dword ptr [EBP + 0x16c],EAX     ; 0054381c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00543822
    MOV ESI,dword ptr [0x0067b654]      ; 00543826 | g_CGamePtr
    PUSH dword ptr [EAX + 0x8]          ; 0054382c
    PUSH ESI                            ; 0054382f | g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004e3080 ; 00543830
        ;   XREF to: 004e3080 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004e3080(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00543835
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00543838
    XOR EDX,EDX                         ; 0054383b
    TEST EDI,EDI                        ; 0054383d
    JLE 0x00543870                      ; 0054383f
        ;   XREF to: 00543870 (CONDITIONAL_JUMP)  ; LAB_00543870
    MOV EAX,dword ptr [ESP + 0x18]      ; 00543841
    XOR EBX,EBX                         ; 00543845
    MOV ESI,dword ptr [EBX + 0x2db87c0] ; 00543847 | g_HeroActors | DAT_02db87c4
        ;   Label: LAB_00543847
    MOV ECX,0xb                         ; 0054384d
    LEA EDI,[ESI + 0xbe2c]              ; 00543852
    LEA ESI,[EAX + 0xc]                 ; 00543858
    ADD EBX,0x4                         ; 0054385b
    MOVSD.REP ES:EDI,ESI                ; 0054385e
    INC EDX                             ; 00543860
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00543861
    ADD EAX,0x2c                        ; 00543864
    CMP EDX,ECX                         ; 00543867
    JL 0x00543847                       ; 00543869
        ;   XREF to: 00543847 (CONDITIONAL_JUMP)  ; LAB_00543847
    LEA EAX,[EAX]                       ; 0054386b
    MOV ECX,ECX                         ; 0054386e
    MOV EAX,dword ptr [EBP + 0x114]     ; 00543870
        ;   Label: LAB_00543870
    SHL EAX,0x3                         ; 00543876
    MOV EBX,dword ptr [ESP + 0x18]      ; 00543879
    MOV EDX,EAX                         ; 0054387d
    SHL EAX,0x4                         ; 0054387f
    MOV EBX,dword ptr [EBX]             ; 00543882
    SUB EAX,EDX                         ; 00543884
    INC EBX                             ; 00543886
    MOV dword ptr [EAX + EBP*0x1 + 0x68],EBX ; 00543887
    POP EBP                             ; 0054388b
    POP EDI                             ; 0054388c
    POP ESI                             ; 0054388d
    POP EBX                             ; 0054388e
    RET                                 ; 0054388f
    MOV ECX,0x63df6d                    ; 00543890 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00543890
    MOV EBX,0x9cd                       ; 00543895
    PUSH 0x63df81                       ; 0054389a | = "CNetGame::applySimFrameHistory - I'm ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0054389f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005438a5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005438ab
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005438b0
    JMP 0x00543815                      ; 005438b3
        ;   XREF to: 00543815 (UNCONDITIONAL_JUMP)  ; LAB_00543815


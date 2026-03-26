; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(CNetGame *this_ptr,SSimFrame *sim_frame)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SSimFrame *      Stack[0x8]:4   sim_frame
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
;   undefined4 g_HeroActors[1]
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
    MOV ESI,dword ptr [EBX + 0x2db87c0] ; 00543847 | g_HeroActors | g_HeroActors[1]
        ;   Label: LAB_00543847
    JMP 0x03fc419b                      ; 0054384d
        ;   XREF to: 03fc419b (UNCONDITIONAL_JUMP)  ; LAB_03fc419b
    INC EDX                             ; 00543860
        ;   Label: LAB_00543860
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
    MOV ECX,0xb                         ; 03fc419b
        ;   Label: LAB_03fc419b
    LEA EDI,[ESI + 0xbe2c]              ; 03fc41a0
    LEA ESI,[EAX + 0xc]                 ; 03fc41a6
    ADD EBX,0x4                         ; 03fc41a9
    MOV ECX,dword ptr [ESI]             ; 03fc41ac
    MOV dword ptr [EDI],ECX             ; 03fc41ae
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc41b0
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc41b3
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc41b6
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc41b9
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc41bc
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc41bf
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc41c2
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc41c5
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc41c8
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc41cb
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc41ce
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc41d1
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc41d4
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc41d7
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc41da
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc41dd
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc41e0
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc41e3
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc41e6
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc41e9
    ADD ESI,0x2c                        ; 03fc41ec
    ADD EDI,0x2c                        ; 03fc41ef
    XOR ECX,ECX                         ; 03fc41f2
    JMP 0x00543860                      ; 03fc41f4
        ;   XREF to: 00543860 (UNCONDITIONAL_JUMP)  ; LAB_00543860


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_004ed980(CNetGame *this_ptr,SSimFrame *sim_frame)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SSimFrame *      Stack[0x8]:4   sim_frame
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_004ed720 at 004ed7c0
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_004ed2d0 at 004ed4c8
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0058c74a
;   TerminatedCString s_CNetGame_applySimFrameHi_0058c75e
;   undefined4 DAT_005b9354
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_game.cpp_CGame_slamDT_FUN_004a5f00
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed980
        ;   Label: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_004ed980
    PUSH ESI                            ; 004ed981
    PUSH EDI                            ; 004ed982
    PUSH EBP                            ; 004ed983
    MOV EBP,dword ptr [ESP + 0x14]      ; 004ed984
    CMP dword ptr [EBP + 0x114],0x0     ; 004ed988
    JL 0x004eda10                       ; 004ed98f
        ;   XREF to: 004eda10 (CONDITIONAL_JUMP)  ; LAB_004eda10
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ed995
        ;   Label: LAB_004ed995
    MOV EAX,dword ptr [EAX + 0x4]       ; 004ed999
    MOV dword ptr [EBP + 0x16c],EAX     ; 004ed99c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ed9a2
    MOV ESI,dword ptr [0x005b9354]      ; 004ed9a6 | DAT_005b9354
    PUSH dword ptr [EAX + 0x8]          ; 004ed9ac
    PUSH ESI                            ; 004ed9af
    CALL core_game.cpp_CGame_slamDT_FUN_004a5f00 ; 004ed9b0
        ;   XREF to: 004a5f00 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004a5f00(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ed9b5
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004ed9b8
    XOR EDX,EDX                         ; 004ed9bb
    TEST EDI,EDI                        ; 004ed9bd
    JLE 0x004ed9f0                      ; 004ed9bf
        ;   XREF to: 004ed9f0 (CONDITIONAL_JUMP)  ; LAB_004ed9f0
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ed9c1
    XOR EBX,EBX                         ; 004ed9c5
    MOV ESI,dword ptr [EBX + 0x1cae0d8] ; 004ed9c7
        ;   Label: LAB_004ed9c7
    MOV ECX,0xb                         ; 004ed9cd
    LEA EDI,[ESI + 0xbc94]              ; 004ed9d2
    LEA ESI,[EAX + 0xc]                 ; 004ed9d8
    ADD EBX,0x4                         ; 004ed9db
    MOVSD.REP ES:EDI,ESI                ; 004ed9de
    INC EDX                             ; 004ed9e0
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004ed9e1
    ADD EAX,0x2c                        ; 004ed9e4
    CMP EDX,ECX                         ; 004ed9e7
    JL 0x004ed9c7                       ; 004ed9e9
        ;   XREF to: 004ed9c7 (CONDITIONAL_JUMP)  ; LAB_004ed9c7
    LEA EAX,[EAX]                       ; 004ed9eb
    MOV ECX,ECX                         ; 004ed9ee
    MOV EAX,dword ptr [EBP + 0x114]     ; 004ed9f0
        ;   Label: LAB_004ed9f0
    SHL EAX,0x3                         ; 004ed9f6
    MOV EBX,dword ptr [ESP + 0x18]      ; 004ed9f9
    MOV EDX,EAX                         ; 004ed9fd
    SHL EAX,0x4                         ; 004ed9ff
    MOV EBX,dword ptr [EBX]             ; 004eda02
    SUB EAX,EDX                         ; 004eda04
    INC EBX                             ; 004eda06
    MOV dword ptr [EAX + EBP*0x1 + 0x68],EBX ; 004eda07
    POP EBP                             ; 004eda0b
    POP EDI                             ; 004eda0c
    POP ESI                             ; 004eda0d
    POP EBX                             ; 004eda0e
    RET                                 ; 004eda0f
    MOV ECX,0x58c74a                    ; 004eda10 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004eda10
    MOV EBX,0x9cd                       ; 004eda15
    PUSH 0x58c75e                       ; 004eda1a | = "CNetGame::applySimFrameHistory - I'm ..."
    MOV dword ptr [0x01cc4800],ECX      ; 004eda1f | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004eda25 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004eda2b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004eda30
    JMP 0x004ed995                      ; 004eda33
        ;   XREF to: 004ed995 (UNCONDITIONAL_JUMP)  ; LAB_004ed995


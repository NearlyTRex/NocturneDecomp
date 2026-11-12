; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_0050f370(CNetGame *this_ptr,SSimFrame *sim_frame)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SSimFrame *      Stack[0x8]:4   sim_frame
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_0050f120 at 0050f1c4
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_0050ecb0 at 0050eea8
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005e10c5
;   TerminatedCString s_CNetGame_applySimFrameHi_005e10d9
;   CGame* g_CGamePtr = 01cb6900
;   CGame g_CGameInstance
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_game.cpp_CGame_slamDT_FUN_004bd460
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f370
        ;   Label: core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_0050f370
    PUSH ESI                            ; 0050f371
    PUSH EDI                            ; 0050f372
    PUSH EBP                            ; 0050f373
    MOV EBP,dword ptr [ESP + 0x14]      ; 0050f374
    CMP dword ptr [EBP + 0x124],0x0     ; 0050f378
    JL 0x0050f3f9                       ; 0050f37f
        ;   XREF to: 0050f3f9 (CONDITIONAL_JUMP)  ; LAB_0050f3f9
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050f385
        ;   Label: LAB_0050f385
    MOV EAX,dword ptr [EAX + 0x4]       ; 0050f389
    MOV dword ptr [EBP + 0x17c],EAX     ; 0050f38c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050f392
    MOV ESI,dword ptr [0x00616494]      ; 0050f396 | g_CGamePtr
    PUSH dword ptr [EAX + 0x8]          ; 0050f39c
    PUSH ESI                            ; 0050f39f | g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004bd460 ; 0050f3a0
        ;   XREF to: 004bd460 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004bd460(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0050f3a5
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0050f3a8
    XOR EAX,EAX                         ; 0050f3ab
    TEST EDI,EDI                        ; 0050f3ad
    JLE 0x0050f3e0                      ; 0050f3af
        ;   XREF to: 0050f3e0 (CONDITIONAL_JUMP)  ; LAB_0050f3e0
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050f3b1
    XOR EBX,EBX                         ; 0050f3b5
    MOV ESI,dword ptr [EBX + 0x1cedee4] ; 0050f3b7
        ;   Label: LAB_0050f3b7
    MOV ECX,0xd                         ; 0050f3bd
    LEA EDI,[ESI + 0x10a68]             ; 0050f3c2
    LEA ESI,[EDX + 0xc]                 ; 0050f3c8
    ADD EBX,0x4                         ; 0050f3cb
    MOVSD.REP ES:EDI,ESI                ; 0050f3ce
    INC EAX                             ; 0050f3d0
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0050f3d1
    ADD EDX,0x34                        ; 0050f3d4
    CMP EAX,ECX                         ; 0050f3d7
    JL 0x0050f3b7                       ; 0050f3d9
        ;   XREF to: 0050f3b7 (CONDITIONAL_JUMP)  ; LAB_0050f3b7
    LEA EAX,[EAX]                       ; 0050f3db
    MOV ECX,ECX                         ; 0050f3de
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050f3e0
        ;   Label: LAB_0050f3e0
    MOV EDX,dword ptr [EBP + 0x124]     ; 0050f3e4
    MOV EAX,dword ptr [EAX]             ; 0050f3ea
    SHL EDX,0x7                         ; 0050f3ec
    INC EAX                             ; 0050f3ef
    MOV dword ptr [EDX + EBP*0x1 + 0x68],EAX ; 0050f3f0
    POP EBP                             ; 0050f3f4
    POP EDI                             ; 0050f3f5
    POP ESI                             ; 0050f3f6
    POP EBX                             ; 0050f3f7
    RET                                 ; 0050f3f8
    MOV ECX,0x5e10c5                    ; 0050f3f9 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050f3f9
    MOV EBX,0x9cd                       ; 0050f3fe
    PUSH 0x5e10d9                       ; 0050f403 | = "CNetGame::applySimFrameHistory - I'm ..."
    MOV dword ptr [0x01d046a0],ECX      ; 0050f408 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0050f40e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050f414
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050f419
    JMP 0x0050f385                      ; 0050f41c
        ;   XREF to: 0050f385 (UNCONDITIONAL_JUMP)  ; LAB_0050f385


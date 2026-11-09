; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_0050f430(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_playerControls_FUN_004b7050 at 004b7122
;   core_game.cpp_FUN_004b8250 at 004b825b
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005e1116
;   TerminatedCString s_CNetGame_getMyControls_I_005e112a
;   undefined4 DAT_01cedef4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f430
        ;   Label: core_netgame.cpp_CNetGame_getMyControls_FUN_0050f430
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050f431
    CMP dword ptr [EBX],0x0             ; 0050f435
    JZ 0x0050f456                       ; 0050f438
        ;   XREF to: 0050f456 (CONDITIONAL_JUMP)  ; LAB_0050f456
    CMP dword ptr [EBX + 0x124],0x0     ; 0050f43a
    JL 0x0050f469                       ; 0050f441
        ;   XREF to: 0050f469 (CONDITIONAL_JUMP)  ; LAB_0050f469
    MOV EAX,dword ptr [EBX + 0x124]     ; 0050f443
    ADD EBX,0x20                        ; 0050f449
    SHL EAX,0x7                         ; 0050f44c
    ADD EAX,EBX                         ; 0050f44f
    ADD EAX,0x4c                        ; 0050f451
    POP EBX                             ; 0050f454
    RET                                 ; 0050f455
    MOV EAX,[0x01cedef4]                ; 0050f456 | DAT_01cedef4
        ;   Label: LAB_0050f456
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 0050f45b
    ADD EAX,0x10a68                     ; 0050f462
    POP EBX                             ; 0050f467
    RET                                 ; 0050f468
    PUSH EDI                            ; 0050f469
        ;   Label: LAB_0050f469
    PUSH ESI                            ; 0050f46a
    MOV ESI,0x5e1116                    ; 0050f46b | = "..\\core\\netgame.cpp"
    MOV EDI,0xa0f                       ; 0050f470
    PUSH 0x5e112a                       ; 0050f475 | = "CNetGame::getMyControls - I'm not in ..."
    MOV dword ptr [0x01d046a0],ESI      ; 0050f47a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0050f480 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050f486
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050f48b
    POP ESI                             ; 0050f48e
    POP EDI                             ; 0050f48f
    MOV EAX,dword ptr [EBX + 0x124]     ; 0050f490
    ADD EBX,0x20                        ; 0050f496
    SHL EAX,0x7                         ; 0050f499
    ADD EAX,EBX                         ; 0050f49c
    ADD EAX,0x4c                        ; 0050f49e
    POP EBX                             ; 0050f4a1
    RET                                 ; 0050f4a2


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPlayerInput * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_00530660(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_playerControls_FUN_004d0860 at 004d093c
;   core_game.cpp_FUN_004d19d0 at 004d19db
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005ec371
;   TerminatedCString s_CNetGame_getMyControls_I_005ec385
;   undefined4 DAT_01d06ab4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530660
        ;   Label: core_netgame.cpp_CNetGame_getMyControls_FUN_00530660
    MOV EBX,dword ptr [ESP + 0x8]       ; 00530661
    CMP dword ptr [EBX],0x0             ; 00530665
    JZ 0x0053068f                       ; 00530668
        ;   XREF to: 0053068f (CONDITIONAL_JUMP)  ; LAB_0053068f
    CMP dword ptr [EBX + 0x11c],0x0     ; 0053066a
    JL 0x005306a2                       ; 00530671
        ;   XREF to: 005306a2 (CONDITIONAL_JUMP)  ; LAB_005306a2
    MOV EAX,dword ptr [EBX + 0x11c]     ; 00530673
        ;   Label: LAB_00530673
    SHL EAX,0x2                         ; 00530679
    MOV EDX,EAX                         ; 0053067c
    SHL EAX,0x5                         ; 0053067e
    SUB EAX,EDX                         ; 00530681
    MOV EDX,EAX                         ; 00530683
    LEA EAX,[EBX + 0x20]                ; 00530685
    ADD EAX,EDX                         ; 00530688
    ADD EAX,0x4c                        ; 0053068a
    POP EBX                             ; 0053068d
    RET                                 ; 0053068e
    MOV EAX,[0x01d06ab4]                ; 0053068f | DAT_01d06ab4
        ;   Label: LAB_0053068f
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00530694
    ADD EAX,0xc1d8                      ; 0053069b
    POP EBX                             ; 005306a0
    RET                                 ; 005306a1
    PUSH EDI                            ; 005306a2
        ;   Label: LAB_005306a2
    PUSH ESI                            ; 005306a3
    MOV ESI,0x5ec371                    ; 005306a4 | = "..\\core\\netgame.cpp"
    MOV EDI,0xa0f                       ; 005306a9
    PUSH 0x5ec385                       ; 005306ae | = "CNetGame::getMyControls - I'm not in ..."
    MOV dword ptr [0x01d1d400],ESI      ; 005306b3 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005306b9 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005306bf
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005306c4
    POP ESI                             ; 005306c7
    POP EDI                             ; 005306c8
    JMP 0x00530673                      ; 005306c9
        ;   XREF to: 00530673 (UNCONDITIONAL_JUMP)  ; LAB_00530673


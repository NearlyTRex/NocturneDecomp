; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_formatIPAddress_FUN_00548bb0(undefined1 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_runLobby_FUN_004eb520 at 004eb894
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00548bb0
        ;   Label: support_trisock.cpp_formatIPAddress_FUN_00548bb0
    XOR EDX,EDX                         ; 00548bb4
    MOV DL,byte ptr [EAX + 0x3]         ; 00548bb6
    PUSH EDX                            ; 00548bb9
    XOR EDX,EDX                         ; 00548bba
    MOV DL,byte ptr [EAX + 0x2]         ; 00548bbc
    PUSH EDX                            ; 00548bbf
    XOR EDX,EDX                         ; 00548bc0
    MOV DL,byte ptr [EAX + 0x1]         ; 00548bc2
    PUSH EDX                            ; 00548bc5
    MOV AL,byte ptr [EAX]               ; 00548bc6
    AND EAX,0xff                        ; 00548bc8
    PUSH EAX                            ; 00548bcd
    PUSH 0x596c11                       ; 00548bce
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00548bd3
    PUSH EDX                            ; 00548bd7
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00548bd8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x18                        ; 00548bdd
    RET                                 ; 00548be0


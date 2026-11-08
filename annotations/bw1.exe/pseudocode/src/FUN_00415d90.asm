; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00415d90(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00415b20 at 00415b67
;
; Called Functions:
;   FUN_0040d0a0
;   FUN_00415ba0
;   FUN_00468860
;   FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00415d90
        ;   Label: FUN_00415d90
    PUSH EAX                            ; 00415d94
    CALL FUN_00415ba0                   ; 00415d95
        ;   XREF to: 00415ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00415ba0()
    ADD ESP,0x4                         ; 00415d9a
    ADD EAX,0x4                         ; 00415d9d
    PUSH EAX                            ; 00415da0
    CALL FUN_0040d0a0                   ; 00415da1
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 00415da6
    PUSH 0x5fca50                       ; 00415da9
    PUSH 0x32                           ; 00415dae
    ADD EAX,0x5c                        ; 00415db0
    PUSH EAX                            ; 00415db3
    CALL FUN_005c0357                   ; 00415db4
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00415db9
    ADD EAX,0x898                       ; 00415dbc
    PUSH EAX                            ; 00415dc1
    CALL FUN_00468860                   ; 00415dc2
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 00415dc7
    ADD EAX,0x17c                       ; 00415dca
    PUSH EAX                            ; 00415dcf
    CALL FUN_00468860                   ; 00415dd0
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    SUB EAX,0xa74                       ; 00415dd5
    ADD ESP,0x4                         ; 00415dda
    MOV dword ptr [EAX],0x5fc974        ; 00415ddd
    RET                                 ; 00415de3


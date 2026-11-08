; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00411b50(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004118e0 at 00411927
;
; Called Functions:
;   FUN_0040d2e0
;   FUN_00411960
;   FUN_00462500
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00411b50
        ;   Label: FUN_00411b50
    PUSH EAX                            ; 00411b54
    CALL FUN_00411960                   ; 00411b55
        ;   XREF to: 00411960 (UNCONDITIONAL_CALL)  ; undefined FUN_00411960()
    ADD ESP,0x4                         ; 00411b5a
    ADD EAX,0x4                         ; 00411b5d
    PUSH EAX                            ; 00411b60
    CALL FUN_0040d2e0                   ; 00411b61
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    ADD ESP,0x4                         ; 00411b66
    PUSH 0x5dbf60                       ; 00411b69
    PUSH 0x32                           ; 00411b6e
    ADD EAX,0x50                        ; 00411b70
    PUSH EAX                            ; 00411b73
    CALL FUN_005a30d7                   ; 00411b74
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 00411b79
    ADD EAX,0x898                       ; 00411b7c
    PUSH EAX                            ; 00411b81
    CALL FUN_00462500                   ; 00411b82
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 00411b87
    ADD EAX,0x17c                       ; 00411b8a
    PUSH EAX                            ; 00411b8f
    CALL FUN_00462500                   ; 00411b90
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    SUB EAX,0xa68                       ; 00411b95
    ADD ESP,0x4                         ; 00411b9a
    MOV dword ptr [EAX],0x5dbe84        ; 00411b9d
    RET                                 ; 00411ba3


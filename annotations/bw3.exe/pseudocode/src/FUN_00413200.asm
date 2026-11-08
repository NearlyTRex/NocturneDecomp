; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00413200(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004118e0 at 00411941
;
; Called Functions:
;   FUN_0040d2e0
;   FUN_00411960
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00413200
        ;   Label: FUN_00413200
    PUSH EAX                            ; 00413204
    CALL FUN_00411960                   ; 00413205
        ;   XREF to: 00411960 (UNCONDITIONAL_CALL)  ; undefined FUN_00411960()
    ADD ESP,0x4                         ; 0041320a
    ADD EAX,0x4                         ; 0041320d
    PUSH EAX                            ; 00413210
    CALL FUN_0040d2e0                   ; 00413211
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2e0()
    ADD ESP,0x4                         ; 00413216
    PUSH 0x5dbfa0                       ; 00413219
    PUSH 0x32                           ; 0041321e
    ADD EAX,0x6c                        ; 00413220
    PUSH EAX                            ; 00413223
    CALL FUN_005a30d7                   ; 00413224
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    SUB EAX,0x70                        ; 00413229
    ADD ESP,0xc                         ; 0041322c
    MOV dword ptr [EAX],0x5dbee4        ; 0041322f
    RET                                 ; 00413235


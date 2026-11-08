; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00472440(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004724c0
;   FUN_004725c0
;   FUN_004727f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472440
        ;   Label: FUN_00472440
    MOV EBX,dword ptr [ESP + 0x8]       ; 00472441
    PUSH EBX                            ; 00472445
    CALL FUN_004724c0                   ; 00472446
        ;   XREF to: 004724c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004724c0()
    ADD ESP,0x4                         ; 0047244b
    PUSH EBX                            ; 0047244e
    CALL FUN_004727f0                   ; 0047244f
        ;   XREF to: 004727f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004727f0()
    ADD ESP,0x4                         ; 00472454
    PUSH EBX                            ; 00472457
    CALL FUN_004725c0                   ; 00472458
        ;   XREF to: 004725c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004725c0()
    ADD ESP,0x4                         ; 0047245d
    MOV EAX,EBX                         ; 00472460
    POP EBX                             ; 00472462
    RET                                 ; 00472463


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00521c00(int param_1)
;
;
; Called Functions:
;   FUN_00466880
;   FUN_00521d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521c00
        ;   Label: FUN_00521c00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00521c01
    PUSH EBX                            ; 00521c05
    CALL FUN_00521d50                   ; 00521c06
        ;   XREF to: 00521d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00521d50()
    ADD ESP,0x4                         ; 00521c0b
    PUSH 0x0                            ; 00521c0e
    ADD EBX,0x738                       ; 00521c10
    PUSH EBX                            ; 00521c16
    CALL FUN_00466880                   ; 00521c17
        ;   XREF to: 00466880 (UNCONDITIONAL_CALL)  ; undefined FUN_00466880()
    ADD ESP,0x8                         ; 00521c1c
    PUSH 0x0                            ; 00521c1f
    SUB EAX,0x398                       ; 00521c21
    PUSH EAX                            ; 00521c26
    CALL FUN_00466880                   ; 00521c27
        ;   XREF to: 00466880 (UNCONDITIONAL_CALL)  ; undefined FUN_00466880()
    ADD ESP,0x8                         ; 00521c2c
    PUSH 0x0                            ; 00521c2f
    SUB EAX,0x398                       ; 00521c31
    PUSH EAX                            ; 00521c36
    CALL FUN_00466880                   ; 00521c37
        ;   XREF to: 00466880 (UNCONDITIONAL_CALL)  ; undefined FUN_00466880()
    ADD ESP,0x8                         ; 00521c3c
    SUB EAX,0x8                         ; 00521c3f
    POP EBX                             ; 00521c42
    RET                                 ; 00521c43


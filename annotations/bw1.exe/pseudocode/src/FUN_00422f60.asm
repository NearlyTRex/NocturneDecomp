; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00422f60(int param_1)
;
;
; Called Functions:
;   FUN_00421de0
;   FUN_004232c0
;   FUN_00462590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422f60
        ;   Label: FUN_00422f60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00422f61
    PUSH EBX                            ; 00422f65
    CALL FUN_004232c0                   ; 00422f66
        ;   XREF to: 004232c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004232c0()
    ADD ESP,0x4                         ; 00422f6b
    PUSH EBX                            ; 00422f6e
    CALL FUN_00421de0                   ; 00422f6f
        ;   XREF to: 00421de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00421de0()
    ADD ESP,0x4                         ; 00422f74
    LEA EAX,[EBX + 0x67c]               ; 00422f77
    PUSH EAX                            ; 00422f7d
    CALL FUN_00462590                   ; 00422f7e
        ;   XREF to: 00462590 (UNCONDITIONAL_CALL)  ; undefined FUN_00462590()
    ADD ESP,0x4                         ; 00422f83
    POP EBX                             ; 00422f86
    RET                                 ; 00422f87


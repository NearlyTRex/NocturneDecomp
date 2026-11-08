; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00528d20(int param_1)
;
;
; Called Functions:
;   FUN_00481f40
;   FUN_00528d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528d20
        ;   Label: FUN_00528d20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00528d21
    PUSH EBX                            ; 00528d25
    CALL FUN_00528d50                   ; 00528d26
        ;   XREF to: 00528d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00528d50()
    ADD ESP,0x4                         ; 00528d2b
    PUSH 0x0                            ; 00528d2e
    ADD EBX,0x34                        ; 00528d30
    PUSH EBX                            ; 00528d33
    CALL FUN_00481f40                   ; 00528d34
        ;   XREF to: 00481f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00481f40()
    ADD ESP,0x8                         ; 00528d39
    SUB EAX,0x34                        ; 00528d3c
    POP EBX                             ; 00528d3f
    RET                                 ; 00528d40


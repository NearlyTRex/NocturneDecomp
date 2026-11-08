; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004bbf40(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004bbf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bbf40
        ;   Label: FUN_004bbf40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bbf41
    PUSH EBX                            ; 004bbf45
    CALL FUN_004bbf60                   ; 004bbf46
        ;   XREF to: 004bbf60 (UNCONDITIONAL_CALL)  ; undefined FUN_004bbf60()
    ADD ESP,0x4                         ; 004bbf4b
    MOV EAX,EBX                         ; 004bbf4e
    POP EBX                             ; 004bbf50
    RET                                 ; 004bbf51


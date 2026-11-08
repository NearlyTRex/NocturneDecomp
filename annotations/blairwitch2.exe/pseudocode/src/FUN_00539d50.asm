; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00539d50(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00539860 at 00539884
;
; Called Functions:
;   FUN_005398d0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00539d50
        ;   Label: FUN_00539d50
    MOV EDX,dword ptr [ESP + 0x8]       ; 00539d52
    PUSH EDX                            ; 00539d56
    CALL FUN_005398d0                   ; 00539d57
        ;   XREF to: 005398d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005398d0()
    ADD ESP,0x8                         ; 00539d5c
    RET                                 ; 00539d5f


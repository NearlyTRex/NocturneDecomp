; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a4840(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004a4840
        ;   Label: FUN_004a4840
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a4842
    PUSH EDX                            ; 004a4846
    CALL FUN_00509e30                   ; 004a4847
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e30()
    ADD ESP,0x8                         ; 004a484c
    RET                                 ; 004a484f


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cf230(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004cf230
        ;   Label: FUN_004cf230
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cf232
    PUSH EDX                            ; 004cf236
    CALL FUN_00509e30                   ; 004cf237
        ;   XREF to: 00509e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e30()
    ADD ESP,0x8                         ; 004cf23c
    RET                                 ; 004cf23f


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc040(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005a0230
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a0230                       ; 004cc040 | DAT_005a0230
        ;   Label: FUN_004cc040
    PUSH 0xc                            ; 004cc045
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cc047
    PUSH EDX                            ; 004cc04b
    CALL FUN_0056494f                   ; 004cc04c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 004cc051
    RET                                 ; 004cc054


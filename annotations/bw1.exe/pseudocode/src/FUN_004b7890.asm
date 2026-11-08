; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7890(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600340                       ; 004b7890
        ;   Label: FUN_004b7890
    PUSH 0x100                          ; 004b7895
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b789a
    PUSH EDX                            ; 004b789e
    CALL FUN_005c1066                   ; 004b789f
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004b78a4
    RET                                 ; 004b78a7


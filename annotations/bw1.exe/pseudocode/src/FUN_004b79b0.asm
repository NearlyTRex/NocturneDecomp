; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b79b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600120                       ; 004b79b0
        ;   Label: FUN_004b79b0
    PUSH 0x100                          ; 004b79b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b79ba
    PUSH EDX                            ; 004b79be
    CALL FUN_005c1066                   ; 004b79bf
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004b79c4
    RET                                 ; 004b79c7


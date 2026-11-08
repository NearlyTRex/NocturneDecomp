; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7970(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600160                       ; 004b7970
        ;   Label: FUN_004b7970
    PUSH 0x40                           ; 004b7975
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b7977
    PUSH EDX                            ; 004b797b
    CALL FUN_005c1066                   ; 004b797c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004b7981
    RET                                 ; 004b7984


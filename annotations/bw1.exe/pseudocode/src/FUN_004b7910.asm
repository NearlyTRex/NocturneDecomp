; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7910(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600200                       ; 004b7910
        ;   Label: FUN_004b7910
    PUSH 0x40                           ; 004b7915
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b7917
    PUSH EDX                            ; 004b791b
    CALL FUN_005c1066                   ; 004b791c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004b7921
    RET                                 ; 004b7924


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e68b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x601710                       ; 004e68b0
        ;   Label: FUN_004e68b0
    PUSH 0x100                          ; 004e68b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e68ba
    PUSH EDX                            ; 004e68be
    CALL FUN_005c1066                   ; 004e68bf
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004e68c4
    RET                                 ; 004e68c7


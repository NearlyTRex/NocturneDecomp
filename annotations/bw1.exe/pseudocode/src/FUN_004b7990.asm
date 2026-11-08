; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7990(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600140                       ; 004b7990
        ;   Label: FUN_004b7990
    PUSH 0x100                          ; 004b7995
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b799a
    PUSH EDX                            ; 004b799e
    CALL FUN_005c1066                   ; 004b799f
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004b79a4
    RET                                 ; 004b79a7


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b78b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600320                       ; 004b78b0
        ;   Label: FUN_004b78b0
    PUSH 0x32                           ; 004b78b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b78b7
    PUSH EDX                            ; 004b78bb
    CALL FUN_005c1066                   ; 004b78bc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004b78c1
    RET                                 ; 004b78c4


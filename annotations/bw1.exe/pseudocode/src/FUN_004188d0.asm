; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004188d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 004188d0
        ;   Label: FUN_004188d0
    PUSH 0x5                            ; 004188d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004188d7
    PUSH EDX                            ; 004188db
    CALL FUN_005c1066                   ; 004188dc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004188e1
    RET                                 ; 004188e4


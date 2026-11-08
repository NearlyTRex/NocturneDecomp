; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004188f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 004188f0
        ;   Label: FUN_004188f0
    PUSH 0x4                            ; 004188f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004188f7
    PUSH EDX                            ; 004188fb
    CALL FUN_005c1066                   ; 004188fc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 00418901
    RET                                 ; 00418904


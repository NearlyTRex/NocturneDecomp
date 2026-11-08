; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005774d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x605b60                       ; 005774d0
        ;   Label: FUN_005774d0
    PUSH 0x40                           ; 005774d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005774d7
    PUSH EDX                            ; 005774db
    CALL FUN_005c1066                   ; 005774dc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 005774e1
    RET                                 ; 005774e4


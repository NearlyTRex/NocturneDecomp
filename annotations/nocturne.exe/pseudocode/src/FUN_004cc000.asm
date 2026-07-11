; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc000(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0059c080
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59c080                       ; 004cc000 | DAT_0059c080
        ;   Label: FUN_004cc000
    PUSH 0x2                            ; 004cc005
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cc007
    PUSH EDX                            ; 004cc00b
    CALL FUN_0056494f                   ; 004cc00c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 004cc011
    RET                                 ; 004cc014


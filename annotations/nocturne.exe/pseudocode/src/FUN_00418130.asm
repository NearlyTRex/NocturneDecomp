; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00418130(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0059a840
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59a840                       ; 00418130 | DAT_0059a840
        ;   Label: FUN_00418130
    PUSH 0x2                            ; 00418135
    MOV EDX,dword ptr [ESP + 0xc]       ; 00418137
    PUSH EDX                            ; 0041813b
    CALL FUN_0056494f                   ; 0041813c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 00418141
    RET                                 ; 00418144


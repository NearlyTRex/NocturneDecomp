; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00418110(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00415e40 at 00415e8c
;
; Referenced Globals:
;   undefined4 DAT_0059a820
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59a820                       ; 00418110 | DAT_0059a820
        ;   Label: FUN_00418110
    PUSH 0x3                            ; 00418115
    MOV EDX,dword ptr [ESP + 0xc]       ; 00418117
    PUSH EDX                            ; 0041811b
    CALL FUN_0056494f                   ; 0041811c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 00418121
    RET                                 ; 00418124


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054f8a0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005a3d20
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a3d20                       ; 0054f8a0 | DAT_005a3d20
        ;   Label: FUN_0054f8a0
    PUSH 0x4                            ; 0054f8a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0054f8a7
    PUSH EDX                            ; 0054f8ab
    CALL FUN_0056494f                   ; 0054f8ac
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0054f8b1
    RET                                 ; 0054f8b4


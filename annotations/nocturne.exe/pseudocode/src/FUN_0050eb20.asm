; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050eb20(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005a1990
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a1990                       ; 0050eb20 | DAT_005a1990
        ;   Label: FUN_0050eb20
    PUSH 0xc8                           ; 0050eb25
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050eb2a
    PUSH EDX                            ; 0050eb2e
    CALL FUN_0056494f                   ; 0050eb2f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0050eb34
    RET                                 ; 0050eb37


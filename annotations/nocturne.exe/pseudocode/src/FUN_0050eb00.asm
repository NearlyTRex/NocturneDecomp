; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050eb00(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00506e50 at 00506e97
;
; Referenced Globals:
;   undefined4 DAT_005a1970
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a1970                       ; 0050eb00 | DAT_005a1970
        ;   Label: FUN_0050eb00
    PUSH 0xfa                           ; 0050eb05
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050eb0a
    PUSH EDX                            ; 0050eb0e
    CALL FUN_0056494f                   ; 0050eb0f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0050eb14
    RET                                 ; 0050eb17


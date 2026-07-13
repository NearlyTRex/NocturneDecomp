; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050eb60(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00506e50 at 00506e67
;
; Referenced Globals:
;   undefined4 DAT_005a19d0
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a19d0                       ; 0050eb60 | DAT_005a19d0
        ;   Label: FUN_0050eb60
    PUSH 0xfa                           ; 0050eb65
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050eb6a
    PUSH EDX                            ; 0050eb6e
    CALL FUN_0056494f                   ; 0050eb6f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0050eb74
    RET                                 ; 0050eb77


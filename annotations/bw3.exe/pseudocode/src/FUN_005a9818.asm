; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9818(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005a3660 at 005a3722
;
; Called Functions:
;   FUN_005a9768
;   FUN_005ae8c0
;
; *****************************************************************************

section .text

    CALL FUN_005ae8c0                   ; 005a9818
        ;   XREF to: 005ae8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae8c0()
        ;   Label: FUN_005a9818
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a981d
    PUSH EDX                            ; 005a9821
    CALL FUN_005a9768                   ; 005a9822
        ;   XREF to: 005a9768 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9768()
    ADD ESP,0x4                         ; 005a9827
    RET                                 ; 005a982a


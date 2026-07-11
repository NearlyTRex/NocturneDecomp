; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005671e8(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0056b960 at 0056ba01
;
; Called Functions:
;   FUN_0056e010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005671e8
        ;   Label: FUN_005671e8
    PUSH EDX                            ; 005671ec
    CALL FUN_0056e010                   ; 005671ed
        ;   XREF to: 0056e010 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e010()
    ADD ESP,0x4                         ; 005671f2
    RET                                 ; 005671f5


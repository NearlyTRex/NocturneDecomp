; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410500(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005ad680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00410500
        ;   Label: FUN_00410500
    PUSH EDX                            ; 00410504
    CALL FUN_005ad680                   ; 00410505
        ;   XREF to: 005ad680 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad680()
    ADD ESP,0x4                         ; 0041050a
    RET                                 ; 0041050d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e6880(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532130
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e6880
        ;   Label: FUN_004e6880
    PUSH EDX                            ; 004e6884
    CALL FUN_00532130                   ; 004e6885
        ;   XREF to: 00532130 (UNCONDITIONAL_CALL)  ; undefined FUN_00532130()
    ADD ESP,0x4                         ; 004e688a
    MOV dword ptr [EAX + 0x3c],0x6016d4 ; 004e688d
    RET                                 ; 004e6894


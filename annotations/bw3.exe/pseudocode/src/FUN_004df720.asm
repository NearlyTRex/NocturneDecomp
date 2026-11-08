; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df720(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004df930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004df720
        ;   Label: FUN_004df720
    PUSH EDX                            ; 004df724
    CALL FUN_004df930                   ; 004df725
        ;   XREF to: 004df930 (UNCONDITIONAL_CALL)  ; undefined FUN_004df930()
    ADD ESP,0x4                         ; 004df72a
    RET                                 ; 004df72d


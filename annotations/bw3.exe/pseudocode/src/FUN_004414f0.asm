; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004414f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00440800
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004414f0
        ;   Label: FUN_004414f0
    PUSH EDX                            ; 004414f4
    CALL FUN_00440800                   ; 004414f5
        ;   XREF to: 00440800 (UNCONDITIONAL_CALL)  ; undefined FUN_00440800()
    ADD ESP,0x4                         ; 004414fa
    MOV dword ptr [EAX],0x5dd4c4        ; 004414fd
    RET                                 ; 00441503


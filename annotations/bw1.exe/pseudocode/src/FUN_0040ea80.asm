; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ea80(int param_1)
;
;
; Called Functions:
;   FUN_004a0510
;   FUN_00569b20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040ea80
        ;   Label: FUN_0040ea80
    PUSH EDX                            ; 0040ea84
    CALL FUN_004a0510                   ; 0040ea85
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    ADD ESP,0x4                         ; 0040ea8a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040ea8d
    ADD EAX,0x158                       ; 0040ea91
    PUSH EAX                            ; 0040ea96
    CALL FUN_00569b20                   ; 0040ea97
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 0040ea9c
    RET                                 ; 0040ea9f


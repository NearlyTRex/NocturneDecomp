; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004aa7e0(int param_1)
;
;
; Called Functions:
;   FUN_004a8e00
;   FUN_004ab7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa7e0
        ;   Label: FUN_004aa7e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004aa7e1
    PUSH EBX                            ; 004aa7e5
    CALL FUN_004ab7a0                   ; 004aa7e6
        ;   XREF to: 004ab7a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab7a0()
    ADD ESP,0x4                         ; 004aa7eb
    PUSH 0x1d19d30                      ; 004aa7ee
    MOV dword ptr [EBX + 0x40],0x0      ; 004aa7f3
    CALL FUN_004a8e00                   ; 004aa7fa
        ;   XREF to: 004a8e00 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8e00()
    ADD ESP,0x4                         ; 004aa7ff
    MOV EAX,EBX                         ; 004aa802
    POP EBX                             ; 004aa804
    RET                                 ; 004aa805


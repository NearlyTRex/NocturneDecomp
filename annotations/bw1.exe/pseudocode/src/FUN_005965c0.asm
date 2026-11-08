; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005965c0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005979d0 at 005979d8
;
; Called Functions:
;   FUN_005965d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005965c0
        ;   Label: FUN_005965c0
    PUSH EDX                            ; 005965c4
    CALL FUN_005965d0                   ; 005965c5
        ;   XREF to: 005965d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005965d0()
    ADD ESP,0x4                         ; 005965ca
    RET                                 ; 005965cd


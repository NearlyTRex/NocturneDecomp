; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a7f48(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005aa0f0 at 005aa191
;
; Called Functions:
;   FUN_005aba00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a7f48
        ;   Label: FUN_005a7f48
    PUSH EDX                            ; 005a7f4c
    CALL FUN_005aba00                   ; 005a7f4d
        ;   XREF to: 005aba00 (UNCONDITIONAL_CALL)  ; undefined FUN_005aba00()
    ADD ESP,0x4                         ; 005a7f52
    RET                                 ; 005a7f55


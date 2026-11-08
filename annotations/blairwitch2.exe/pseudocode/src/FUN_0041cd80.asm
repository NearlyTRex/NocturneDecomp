; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041cd80(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00409ec0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0041cd80
        ;   Label: FUN_0041cd80
    PUSH EDX                            ; 0041cd84
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041cd85
    PUSH ECX                            ; 0041cd89
    CALL FUN_00409ec0                   ; 0041cd8a
        ;   XREF to: 00409ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ec0()
    ADD ESP,0x8                         ; 0041cd8f
    RET                                 ; 0041cd92


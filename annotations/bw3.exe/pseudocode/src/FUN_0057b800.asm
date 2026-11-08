; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057b800(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00409d50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0057b800
        ;   Label: FUN_0057b800
    PUSH EDX                            ; 0057b804
    MOV ECX,dword ptr [ESP + 0x8]       ; 0057b805
    PUSH ECX                            ; 0057b809
    CALL FUN_00409d50                   ; 0057b80a
        ;   XREF to: 00409d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d50()
    ADD ESP,0x8                         ; 0057b80f
    RET                                 ; 0057b812


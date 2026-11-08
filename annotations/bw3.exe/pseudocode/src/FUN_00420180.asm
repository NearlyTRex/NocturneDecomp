; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00420180(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00409d50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00420180
        ;   Label: FUN_00420180
    PUSH EDX                            ; 00420184
    MOV ECX,dword ptr [ESP + 0x8]       ; 00420185
    PUSH ECX                            ; 00420189
    CALL FUN_00409d50                   ; 0042018a
        ;   XREF to: 00409d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d50()
    ADD ESP,0x8                         ; 0042018f
    RET                                 ; 00420192


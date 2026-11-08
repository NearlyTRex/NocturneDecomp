; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00526dc0(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00518ab0 at 00518c78
;   FUN_00518cd0 at 00519e6c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00526dc0
        ;   Label: FUN_00526dc0
    MOV EDX,dword ptr [EAX + 0x20c24]   ; 00526dc4
    TEST EDX,EDX                        ; 00526dca
    JNZ 0x00526dcf                      ; 00526dcc
        ;   XREF to: 00526dcf (CONDITIONAL_JUMP)  ; LAB_00526dcf
    RET                                 ; 00526dce
    MOV EAX,EDX                         ; 00526dcf
        ;   Label: LAB_00526dcf
    PUSH dword ptr [ESP + 0x8]          ; 00526dd1
    PUSH EAX                            ; 00526dd5
    MOV EDX,dword ptr [EDX + 0x154]     ; 00526dd6
    CALL dword ptr [EDX + 0xc]          ; 00526ddc
    ADD ESP,0x8                         ; 00526ddf
    RET                                 ; 00526de2


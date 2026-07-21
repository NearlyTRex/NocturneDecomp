; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl core_xform_cpp_determinant_FUN_0055bcb0(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[1]:
;   core_xform.cpp_inverse_FUN_0055bd00 at 0055bd19
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0055bcb0
        ;   Label: core_xform.cpp_determinant_FUN_0055bcb0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055bcb3
    FLD float ptr [EAX + 0x10]          ; 0055bcb7
    FMUL float ptr [EAX + 0x28]         ; 0055bcba
    FLD float ptr [EAX + 0x18]          ; 0055bcbd
    FMUL float ptr [EAX + 0x20]         ; 0055bcc0
    FSUBP                               ; 0055bcc3
    FMUL float ptr [EAX + 0x4]          ; 0055bcc5
    FLD float ptr [EAX + 0x14]          ; 0055bcc8
    FMUL float ptr [EAX + 0x28]         ; 0055bccb
    FLD float ptr [EAX + 0x18]          ; 0055bcce
    FMUL float ptr [EAX + 0x24]         ; 0055bcd1
    FSUBP                               ; 0055bcd4
    FMUL float ptr [EAX]                ; 0055bcd6
    FSUBRP                              ; 0055bcd8
    FLD float ptr [EAX + 0x10]          ; 0055bcda
    FMUL float ptr [EAX + 0x24]         ; 0055bcdd
    FLD float ptr [EAX + 0x14]          ; 0055bce0
    FMUL float ptr [EAX + 0x20]         ; 0055bce3
    FSUBP                               ; 0055bce6
    FMUL float ptr [EAX + 0x8]          ; 0055bce8
    FADDP                               ; 0055bceb
    FSTP double ptr [ESP]               ; 0055bced
    MOV EAX,dword ptr [ESP]             ; 0055bcf0
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055bcf3
    ADD ESP,0x8                         ; 0055bcf7
    RET                                 ; 0055bcfa


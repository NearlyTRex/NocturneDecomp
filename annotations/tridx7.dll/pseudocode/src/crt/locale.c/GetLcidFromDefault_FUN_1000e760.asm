; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_locale_c_GetLcidFromDefault_FUN_1000e760(ushort langid)
;
; Parameters:
; ushort           Stack[0x4]:2   langid
;
; XREF[1]:
;   crt_locale.c_GetLcidFromCountry_FUN_1000e710 at 1000e71d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 1000e760
        ;   Label: crt_locale.c_GetLcidFromDefault_FUN_1000e760
    AND EAX,0xffff                      ; 1000e764
    CMP EAX,0x354                       ; 1000e769
    JZ 0x1000e774                       ; 1000e76e
        ;   XREF to: 1000e774 (CONDITIONAL_JUMP)  ; LAB_1000e774
    XOR AX,AX                           ; 1000e770
    RET                                 ; 1000e773
    MOV AX,0xc04                        ; 1000e774
        ;   Label: LAB_1000e774
    RET                                 ; 1000e778


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack wchar_t crt_locale.c_fullwidth_toupper_FUN_0060ffb0(wchar_t character)
;
; Parameters:
; wchar_t          Stack[0x4]:2   character
;
; XREF[1]:
;   crt_locale.c_toupper_multibyte_FUN_0060f300 at 0060f355
;
; Called Functions:
;   crt_locale.c_islower_multibyte_FUN_00610990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ffb0
        ;   Label: crt_locale.c_fullwidth_toupper_FUN_0060ffb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060ffb1
    PUSH EBX                            ; 0060ffb5
    CALL crt_locale.c_islower_multibyte_FUN_00610990 ; 0060ffb6
        ;   XREF to: 00610990 (UNCONDITIONAL_CALL)  ; int crt_locale.c_islower_multibyte_FUN_00610990(wchar_t character)
    ADD ESP,0x4                         ; 0060ffbb
    TEST EAX,EAX                        ; 0060ffbe
    JZ 0x0060ffc7                       ; 0060ffc0
        ;   XREF to: 0060ffc7 (CONDITIONAL_JUMP)  ; LAB_0060ffc7
    LEA EAX,[EBX + -0x21]               ; 0060ffc2
    POP EBX                             ; 0060ffc5
    RET                                 ; 0060ffc6
    MOV EAX,EBX                         ; 0060ffc7
        ;   Label: LAB_0060ffc7
    POP EBX                             ; 0060ffc9
    RET                                 ; 0060ffca


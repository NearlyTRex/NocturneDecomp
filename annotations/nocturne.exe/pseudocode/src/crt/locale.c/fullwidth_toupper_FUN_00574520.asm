; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; wchar_t __watcallStack crt_locale_c_fullwidth_toupper_FUN_00574520(wchar_t character)
;
; Parameters:
; wchar_t          Stack[0x4]:2   character
;
; XREF[1]:
;   FUN_00573db0 at 00573e05
;
; Called Functions:
;   crt_locale.c_islower_multibyte_FUN_00574710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574520
        ;   Label: crt_locale.c_fullwidth_toupper_FUN_00574520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574521
    PUSH EBX                            ; 00574525
    CALL crt_locale.c_islower_multibyte_FUN_00574710 ; 00574526
        ;   XREF to: 00574710 (UNCONDITIONAL_CALL)  ; int crt_locale.c_islower_multibyte_FUN_00574710(wchar_t character)
    ADD ESP,0x4                         ; 0057452b
    TEST EAX,EAX                        ; 0057452e
    JZ 0x00574537                       ; 00574530
        ;   XREF to: 00574537 (CONDITIONAL_JUMP)  ; LAB_00574537
    LEA EAX,[EBX + -0x21]               ; 00574532
    POP EBX                             ; 00574535
    RET                                 ; 00574536
    MOV EAX,EBX                         ; 00574537
        ;   Label: LAB_00574537
    POP EBX                             ; 00574539
    RET                                 ; 0057453a


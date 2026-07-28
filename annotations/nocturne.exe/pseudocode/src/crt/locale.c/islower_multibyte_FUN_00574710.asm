; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_locale_c_islower_multibyte_FUN_00574710(wchar_t character)
;
; Parameters:
; wchar_t          Stack[0x4]:2   character
;
; XREF[1]:
;   crt_locale.c_fullwidth_toupper_FUN_00574520 at 00574526
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;
; Called Functions:
;   crt_locale.c_ismultibyte_FUN_00574760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574710
        ;   Label: crt_locale.c_islower_multibyte_FUN_00574710
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574711
    PUSH EBX                            ; 00574715
    CALL crt_locale.c_ismultibyte_FUN_00574760 ; 00574716
        ;   XREF to: 00574760 (UNCONDITIONAL_CALL)  ; int crt_locale.c_ismultibyte_FUN_00574760(wchar_t character)
    ADD ESP,0x4                         ; 0057471b
    TEST EAX,EAX                        ; 0057471e
    JZ 0x0057473d                       ; 00574720
        ;   XREF to: 0057473d (CONDITIONAL_JUMP)  ; LAB_0057473d
    CMP EBX,0x8281                      ; 00574722
    JC 0x00574739                       ; 00574728
        ;   XREF to: 00574739 (CONDITIONAL_JUMP)  ; LAB_00574739
    CMP EBX,0x829a                      ; 0057472a
    JA 0x00574739                       ; 00574730
        ;   XREF to: 00574739 (CONDITIONAL_JUMP)  ; LAB_00574739
    MOV EAX,0x1                         ; 00574732
    POP EBX                             ; 00574737
    RET                                 ; 00574738
    XOR EAX,EAX                         ; 00574739
        ;   Label: LAB_00574739
    POP EBX                             ; 0057473b
    RET                                 ; 0057473c
    MOV AL,BL                           ; 0057473d
        ;   Label: LAB_0057473d
    INC AL                              ; 0057473f
    AND EAX,0xff                        ; 00574741
    MOV AL,byte ptr [EAX + 0x5c168c]    ; 00574746 | DAT_005c168c
    AND AL,0x80                         ; 0057474c
    AND EAX,0xff                        ; 0057474e
    POP EBX                             ; 00574753
    RET                                 ; 00574754


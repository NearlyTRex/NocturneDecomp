; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_locale_c_islower_multibyte_FUN_00610990(wchar_t character)
;
; Parameters:
; wchar_t          Stack[0x4]:2   character
;
; XREF[1]:
;   crt_locale.c_fullwidth_toupper_FUN_0060ffb0 at 0060ffb6
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; Called Functions:
;   crt_locale.c_ismultibyte_FUN_00610a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00610990
        ;   Label: crt_locale.c_islower_multibyte_FUN_00610990
    MOV EBX,dword ptr [ESP + 0x8]       ; 00610991
    PUSH EBX                            ; 00610995
    CALL crt_locale.c_ismultibyte_FUN_00610a20 ; 00610996
        ;   XREF to: 00610a20 (UNCONDITIONAL_CALL)  ; int crt_locale.c_ismultibyte_FUN_00610a20(wchar_t character)
    ADD ESP,0x4                         ; 0061099b
    TEST EAX,EAX                        ; 0061099e
    JZ 0x006109bd                       ; 006109a0
        ;   XREF to: 006109bd (CONDITIONAL_JUMP)  ; LAB_006109bd
    CMP EBX,0x8281                      ; 006109a2
    JC 0x006109b9                       ; 006109a8
        ;   XREF to: 006109b9 (CONDITIONAL_JUMP)  ; LAB_006109b9
    CMP EBX,0x829a                      ; 006109aa
    JA 0x006109b9                       ; 006109b0
        ;   XREF to: 006109b9 (CONDITIONAL_JUMP)  ; LAB_006109b9
    MOV EAX,0x1                         ; 006109b2
    POP EBX                             ; 006109b7
    RET                                 ; 006109b8
    XOR EAX,EAX                         ; 006109b9
        ;   Label: LAB_006109b9
    POP EBX                             ; 006109bb
    RET                                 ; 006109bc
    MOV AL,BL                           ; 006109bd
        ;   Label: LAB_006109bd
    INC AL                              ; 006109bf
    AND EAX,0xff                        ; 006109c1
    MOV AL,byte ptr [EAX + 0x6849c4]    ; 006109c6 | g_CharacterClassificationTable
    AND AL,0x80                         ; 006109cc
    AND EAX,0xff                        ; 006109ce
    POP EBX                             ; 006109d3
    RET                                 ; 006109d4


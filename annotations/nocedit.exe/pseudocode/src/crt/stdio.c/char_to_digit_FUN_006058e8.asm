; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_char_to_digit_FUN_006058e8(int ch)
;
; Parameters:
; int              Stack[0x4]:4   ch
;
; XREF[1]:
;   crt_stdio.c_scanf_integer_FUN_0060547c at 0060576b
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005feb30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 006058e8
        ;   Label: crt_stdio.c_char_to_digit_FUN_006058e8
    CMP EAX,0x30                        ; 006058ec
    JL 0x006058fa                       ; 006058ef
        ;   XREF to: 006058fa (CONDITIONAL_JUMP)  ; LAB_006058fa
    CMP EAX,0x39                        ; 006058f1
    JG 0x006058fa                       ; 006058f4
        ;   XREF to: 006058fa (CONDITIONAL_JUMP)  ; LAB_006058fa
    SUB EAX,0x30                        ; 006058f6
    RET                                 ; 006058f9
    PUSH EAX                            ; 006058fa
        ;   Label: LAB_006058fa
    CALL crt_ctype.c_tolower_FUN_005feb30 ; 006058fb
        ;   XREF to: 005feb30 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005feb30(int character)
    ADD ESP,0x4                         ; 00605900
    CMP EAX,0x61                        ; 00605903
    JL 0x00605911                       ; 00605906
        ;   XREF to: 00605911 (CONDITIONAL_JUMP)  ; LAB_00605911
    CMP EAX,0x66                        ; 00605908
    JG 0x00605911                       ; 0060590b
        ;   XREF to: 00605911 (CONDITIONAL_JUMP)  ; LAB_00605911
    SUB EAX,0x57                        ; 0060590d
    RET                                 ; 00605910
    MOV EAX,0x10                        ; 00605911
        ;   Label: LAB_00605911
    RET                                 ; 00605916


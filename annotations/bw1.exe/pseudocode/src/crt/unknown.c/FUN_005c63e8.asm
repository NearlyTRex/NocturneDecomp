; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c63e8(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c5f7c at 005c611b
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005c0820
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c63e8
        ;   Label: crt_unknown.c_FUN_005c63e8
    CMP EAX,0x30                        ; 005c63ec
    JL 0x005c63fa                       ; 005c63ef
        ;   XREF to: 005c63fa (CONDITIONAL_JUMP)  ; LAB_005c63fa
    CMP EAX,0x39                        ; 005c63f1
    JG 0x005c63fa                       ; 005c63f4
        ;   XREF to: 005c63fa (CONDITIONAL_JUMP)  ; LAB_005c63fa
    SUB EAX,0x30                        ; 005c63f6
    RET                                 ; 005c63f9
    PUSH EAX                            ; 005c63fa
        ;   Label: LAB_005c63fa
    CALL crt_ctype.c_tolower_FUN_005c0820 ; 005c63fb
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005c0820(int character)
    ADD ESP,0x4                         ; 005c6400
    CMP EAX,0x61                        ; 005c6403
    JL 0x005c6411                       ; 005c6406
        ;   XREF to: 005c6411 (CONDITIONAL_JUMP)  ; LAB_005c6411
    CMP EAX,0x66                        ; 005c6408
    JG 0x005c6411                       ; 005c640b
        ;   XREF to: 005c6411 (CONDITIONAL_JUMP)  ; LAB_005c6411
    SUB EAX,0x57                        ; 005c640d
    RET                                 ; 005c6410
    MOV EAX,0x10                        ; 005c6411
        ;   Label: LAB_005c6411
    RET                                 ; 005c6416


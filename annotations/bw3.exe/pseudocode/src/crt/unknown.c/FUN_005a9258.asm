; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005a9258(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a8dec at 005a8f8b
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005a35a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a9258
        ;   Label: crt_unknown.c_FUN_005a9258
    CMP EAX,0x30                        ; 005a925c
    JL 0x005a926a                       ; 005a925f
        ;   XREF to: 005a926a (CONDITIONAL_JUMP)  ; LAB_005a926a
    CMP EAX,0x39                        ; 005a9261
    JG 0x005a926a                       ; 005a9264
        ;   XREF to: 005a926a (CONDITIONAL_JUMP)  ; LAB_005a926a
    SUB EAX,0x30                        ; 005a9266
    RET                                 ; 005a9269
    PUSH EAX                            ; 005a926a
        ;   Label: LAB_005a926a
    CALL crt_ctype.c_tolower_FUN_005a35a0 ; 005a926b
        ;   XREF to: 005a35a0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005a35a0(int character)
    ADD ESP,0x4                         ; 005a9270
    CMP EAX,0x61                        ; 005a9273
    JL 0x005a9281                       ; 005a9276
        ;   XREF to: 005a9281 (CONDITIONAL_JUMP)  ; LAB_005a9281
    CMP EAX,0x66                        ; 005a9278
    JG 0x005a9281                       ; 005a927b
        ;   XREF to: 005a9281 (CONDITIONAL_JUMP)  ; LAB_005a9281
    SUB EAX,0x57                        ; 005a927d
    RET                                 ; 005a9280
    MOV EAX,0x10                        ; 005a9281
        ;   Label: LAB_005a9281
    RET                                 ; 005a9286


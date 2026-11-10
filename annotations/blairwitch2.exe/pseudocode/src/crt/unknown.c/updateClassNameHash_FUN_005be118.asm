; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_updateClassNameHash_FUN_005be118(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bdcac at 005bde4b
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005b8470
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005be118
        ;   Label: crt_unknown.c_updateClassNameHash_FUN_005be118
    CMP EAX,0x30                        ; 005be11c
    JL 0x005be12a                       ; 005be11f
        ;   XREF to: 005be12a (CONDITIONAL_JUMP)  ; LAB_005be12a
    CMP EAX,0x39                        ; 005be121
    JG 0x005be12a                       ; 005be124
        ;   XREF to: 005be12a (CONDITIONAL_JUMP)  ; LAB_005be12a
    SUB EAX,0x30                        ; 005be126
    RET                                 ; 005be129
    PUSH EAX                            ; 005be12a
        ;   Label: LAB_005be12a
    CALL crt_ctype.c_tolower_FUN_005b8470 ; 005be12b
        ;   XREF to: 005b8470 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005b8470(int character)
    ADD ESP,0x4                         ; 005be130
    CMP EAX,0x61                        ; 005be133
    JL 0x005be141                       ; 005be136
        ;   XREF to: 005be141 (CONDITIONAL_JUMP)  ; LAB_005be141
    CMP EAX,0x66                        ; 005be138
    JG 0x005be141                       ; 005be13b
        ;   XREF to: 005be141 (CONDITIONAL_JUMP)  ; LAB_005be141
    SUB EAX,0x57                        ; 005be13d
    RET                                 ; 005be140
    MOV EAX,0x10                        ; 005be141
        ;   Label: LAB_005be141
    RET                                 ; 005be146


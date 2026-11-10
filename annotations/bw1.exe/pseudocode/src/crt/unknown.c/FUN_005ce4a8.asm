; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005ce4a8(byte param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ce300 at 005ce3bb
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005c0820
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [ESP + 0x4]         ; 005ce4a8
        ;   Label: crt_unknown.c_FUN_005ce4a8
    CMP AL,0x30                         ; 005ce4ac
    JC 0x005ce4bd                       ; 005ce4ae
        ;   XREF to: 005ce4bd (CONDITIONAL_JUMP)  ; LAB_005ce4bd
    CMP AL,0x39                         ; 005ce4b0
    JA 0x005ce4bd                       ; 005ce4b2
        ;   XREF to: 005ce4bd (CONDITIONAL_JUMP)  ; LAB_005ce4bd
    AND EAX,0xff                        ; 005ce4b4
    SUB EAX,0x30                        ; 005ce4b9
    RET                                 ; 005ce4bc
    AND EAX,0xff                        ; 005ce4bd
        ;   Label: LAB_005ce4bd
    PUSH EAX                            ; 005ce4c2
    CALL crt_ctype.c_tolower_FUN_005c0820 ; 005ce4c3
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005c0820(int character)
    MOV EDX,EAX                         ; 005ce4c8
    ADD ESP,0x4                         ; 005ce4ca
    CMP AL,0x61                         ; 005ce4cd
    JC 0x005ce4dd                       ; 005ce4cf
        ;   XREF to: 005ce4dd (CONDITIONAL_JUMP)  ; LAB_005ce4dd
    CMP AL,0x69                         ; 005ce4d1
    JA 0x005ce4dd                       ; 005ce4d3
        ;   XREF to: 005ce4dd (CONDITIONAL_JUMP)  ; LAB_005ce4dd
    XOR EAX,EAX                         ; 005ce4d5
    MOV AL,DL                           ; 005ce4d7
    SUB EAX,0x57                        ; 005ce4d9
    RET                                 ; 005ce4dc
    CMP AL,0x6a                         ; 005ce4dd
        ;   Label: LAB_005ce4dd
    JC 0x005ce4ee                       ; 005ce4df
        ;   XREF to: 005ce4ee (CONDITIONAL_JUMP)  ; LAB_005ce4ee
    CMP AL,0x72                         ; 005ce4e1
    JA 0x005ce4ee                       ; 005ce4e3
        ;   XREF to: 005ce4ee (CONDITIONAL_JUMP)  ; LAB_005ce4ee
    AND EAX,0xff                        ; 005ce4e5
    SUB EAX,0x57                        ; 005ce4ea
    RET                                 ; 005ce4ed
    CMP AL,0x73                         ; 005ce4ee
        ;   Label: LAB_005ce4ee
    JC 0x005ce4ff                       ; 005ce4f0
        ;   XREF to: 005ce4ff (CONDITIONAL_JUMP)  ; LAB_005ce4ff
    CMP AL,0x7a                         ; 005ce4f2
    JA 0x005ce4ff                       ; 005ce4f4
        ;   XREF to: 005ce4ff (CONDITIONAL_JUMP)  ; LAB_005ce4ff
    AND EAX,0xff                        ; 005ce4f6
    SUB EAX,0x57                        ; 005ce4fb
    RET                                 ; 005ce4fe
    MOV EAX,0x25                        ; 005ce4ff
        ;   Label: LAB_005ce4ff
    RET                                 ; 005ce504


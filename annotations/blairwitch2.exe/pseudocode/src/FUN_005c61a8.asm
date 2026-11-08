; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c61a8(byte param_1)
;
;
; XREF[1]:
;   FUN_005c6000 at 005c60bb
;
; Called Functions:
;   FUN_005b8470
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [ESP + 0x4]         ; 005c61a8
        ;   Label: FUN_005c61a8
    CMP AL,0x30                         ; 005c61ac
    JC 0x005c61bd                       ; 005c61ae
        ;   XREF to: 005c61bd (CONDITIONAL_JUMP)  ; LAB_005c61bd
    CMP AL,0x39                         ; 005c61b0
    JA 0x005c61bd                       ; 005c61b2
        ;   XREF to: 005c61bd (CONDITIONAL_JUMP)  ; LAB_005c61bd
    AND EAX,0xff                        ; 005c61b4
    SUB EAX,0x30                        ; 005c61b9
    RET                                 ; 005c61bc
    AND EAX,0xff                        ; 005c61bd
        ;   Label: LAB_005c61bd
    PUSH EAX                            ; 005c61c2
    CALL FUN_005b8470                   ; 005c61c3
        ;   XREF to: 005b8470 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8470()
    MOV EDX,EAX                         ; 005c61c8
    ADD ESP,0x4                         ; 005c61ca
    CMP AL,0x61                         ; 005c61cd
    JC 0x005c61dd                       ; 005c61cf
        ;   XREF to: 005c61dd (CONDITIONAL_JUMP)  ; LAB_005c61dd
    CMP AL,0x69                         ; 005c61d1
    JA 0x005c61dd                       ; 005c61d3
        ;   XREF to: 005c61dd (CONDITIONAL_JUMP)  ; LAB_005c61dd
    XOR EAX,EAX                         ; 005c61d5
    MOV AL,DL                           ; 005c61d7
    SUB EAX,0x57                        ; 005c61d9
    RET                                 ; 005c61dc
    CMP AL,0x6a                         ; 005c61dd
        ;   Label: LAB_005c61dd
    JC 0x005c61ee                       ; 005c61df
        ;   XREF to: 005c61ee (CONDITIONAL_JUMP)  ; LAB_005c61ee
    CMP AL,0x72                         ; 005c61e1
    JA 0x005c61ee                       ; 005c61e3
        ;   XREF to: 005c61ee (CONDITIONAL_JUMP)  ; LAB_005c61ee
    AND EAX,0xff                        ; 005c61e5
    SUB EAX,0x57                        ; 005c61ea
    RET                                 ; 005c61ed
    CMP AL,0x73                         ; 005c61ee
        ;   Label: LAB_005c61ee
    JC 0x005c61ff                       ; 005c61f0
        ;   XREF to: 005c61ff (CONDITIONAL_JUMP)  ; LAB_005c61ff
    CMP AL,0x7a                         ; 005c61f2
    JA 0x005c61ff                       ; 005c61f4
        ;   XREF to: 005c61ff (CONDITIONAL_JUMP)  ; LAB_005c61ff
    AND EAX,0xff                        ; 005c61f6
    SUB EAX,0x57                        ; 005c61fb
    RET                                 ; 005c61fe
    MOV EAX,0x25                        ; 005c61ff
        ;   Label: LAB_005c61ff
    RET                                 ; 005c6204


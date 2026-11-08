; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b8130(byte *param_1,byte *param_2)
;
;
; XREF[97]:
;   FUN_0040b1c0 at 0040b20a
;   FUN_004177e0 at 00417800
;   FUN_00422930 at 00422a2f
;   FUN_004281d0 at 0042821a
;   FUN_0044fba0 at 0044fbbc
;   FUN_00462c90 at 00462cbf
;   FUN_0047c970 at 0047ca35
;   FUN_00481300 at 0048131f
;   FUN_00481340 at 0048139f
;   FUN_00481620 at 004816d6
;   ... and 87 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8130
        ;   Label: FUN_005b8130
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b8131
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b8135
    MOV AL,byte ptr [EBX]               ; 005b8139
        ;   Label: LAB_005b8139
    MOV AH,byte ptr [EDX]               ; 005b813b
    CMP AL,0x41                         ; 005b813d
    JC 0x005b8147                       ; 005b813f
        ;   XREF to: 005b8147 (CONDITIONAL_JUMP)  ; LAB_005b8147
    CMP AL,0x5a                         ; 005b8141
    JA 0x005b8147                       ; 005b8143
        ;   XREF to: 005b8147 (CONDITIONAL_JUMP)  ; LAB_005b8147
    ADD AL,0x20                         ; 005b8145
    CMP AH,0x41                         ; 005b8147
        ;   Label: LAB_005b8147
    JC 0x005b8154                       ; 005b814a
        ;   XREF to: 005b8154 (CONDITIONAL_JUMP)  ; LAB_005b8154
    CMP AH,0x5a                         ; 005b814c
    JA 0x005b8154                       ; 005b814f
        ;   XREF to: 005b8154 (CONDITIONAL_JUMP)  ; LAB_005b8154
    ADD AH,0x20                         ; 005b8151
    CMP AL,AH                           ; 005b8154
        ;   Label: LAB_005b8154
    JNZ 0x005b8160                      ; 005b8156
        ;   XREF to: 005b8160 (CONDITIONAL_JUMP)  ; LAB_005b8160
    TEST AH,AH                          ; 005b8158
    JZ 0x005b8160                       ; 005b815a
        ;   XREF to: 005b8160 (CONDITIONAL_JUMP)  ; LAB_005b8160
    INC EBX                             ; 005b815c
    INC EDX                             ; 005b815d
    JMP 0x005b8139                      ; 005b815e
        ;   XREF to: 005b8139 (UNCONDITIONAL_JUMP)  ; LAB_005b8139
    XOR EDX,EDX                         ; 005b8160
        ;   Label: LAB_005b8160
    MOV DL,AL                           ; 005b8162
    MOV AL,AH                           ; 005b8164
    AND EAX,0xff                        ; 005b8166
    SUB EDX,EAX                         ; 005b816b
    MOV EAX,EDX                         ; 005b816d
    POP EBX                             ; 005b816f
    RET                                 ; 005b8170


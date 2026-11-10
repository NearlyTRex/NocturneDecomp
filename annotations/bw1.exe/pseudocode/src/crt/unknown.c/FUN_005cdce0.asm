; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cdce0(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cc8b0 at 005cc989
;
; Called Functions:
;   crt_env.c_getenv_FUN_005c3050
;   crt_string.c__strncpy_FUN_005c20d0
;   crt_unknown.c_FUN_005c8b38
;   crt_unknown.c_FUN_005c8c4c
;   crt_unknown.c_FUN_005ce48c
;   crt_unknown.c_FUN_005ce510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cdce0
        ;   Label: crt_unknown.c_FUN_005cdce0
    PUSH ESI                            ; 005cdce1
    PUSH EDI                            ; 005cdce2
    PUSH EBP                            ; 005cdce3
    SUB ESP,0x10                        ; 005cdce4
    PUSH 0x5fb2a0                       ; 005cdce7
    CALL crt_env.c_getenv_FUN_005c3050  ; 005cdcec
        ;   XREF to: 005c3050 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005c3050(char * name)
    ADD ESP,0x4                         ; 005cdcf1
    MOV EBX,EAX                         ; 005cdcf4
    TEST EAX,EAX                        ; 005cdcf6
    JZ 0x005cde16                       ; 005cdcf8
        ;   XREF to: 005cde16 (CONDITIONAL_JUMP)  ; LAB_005cde16
    CMP byte ptr [EBX],0x0              ; 005cdcfe
        ;   Label: LAB_005cdcfe
    JZ 0x005cde09                       ; 005cdd01
        ;   XREF to: 005cde09 (CONDITIONAL_JUMP)  ; LAB_005cde09
    MOV DL,0x3a                         ; 005cdd07
    MOV ESI,EBX                         ; 005cdd09
    MOV AL,byte ptr [ESI]               ; 005cdd0b
        ;   Label: LAB_005cdd0b
    CMP AL,DL                           ; 005cdd0d
    JZ 0x005cdd23                       ; 005cdd0f
        ;   XREF to: 005cdd23 (CONDITIONAL_JUMP)  ; LAB_005cdd23
    CMP AL,0x0                          ; 005cdd11
    JZ 0x005cdd21                       ; 005cdd13
        ;   XREF to: 005cdd21 (CONDITIONAL_JUMP)  ; LAB_005cdd21
    INC ESI                             ; 005cdd15
    MOV AL,byte ptr [ESI]               ; 005cdd16
    CMP AL,DL                           ; 005cdd18
    JZ 0x005cdd23                       ; 005cdd1a
        ;   XREF to: 005cdd23 (CONDITIONAL_JUMP)  ; LAB_005cdd23
    INC ESI                             ; 005cdd1c
    CMP AL,0x0                          ; 005cdd1d
    JNZ 0x005cdd0b                      ; 005cdd1f
        ;   XREF to: 005cdd0b (CONDITIONAL_JUMP)  ; LAB_005cdd0b
    SUB ESI,ESI                         ; 005cdd21
        ;   Label: LAB_005cdd21
    MOV EDI,ESI                         ; 005cdd23
        ;   Label: LAB_005cdd23
    SUB ESI,EBX                         ; 005cdd25
    PUSH ESI                            ; 005cdd27
    PUSH EBX                            ; 005cdd28
    LEA EBX,[ESP + 0x8]                 ; 005cdd29
    PUSH EBX                            ; 005cdd2d
    CALL crt_string.c__strncpy_FUN_005c20d0 ; 005cdd2e
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005c20d0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 005cdd33
    PUSH 0x10                           ; 005cdd36
    PUSH 0x0                            ; 005cdd38
    LEA EBX,[ESP + 0x8]                 ; 005cdd3a
    XOR DL,DL                           ; 005cdd3e
    PUSH EBX                            ; 005cdd40
    MOV byte ptr [ESP + ESI*0x1 + 0xc],DL ; 005cdd41
    LEA ESI,[EDI + 0x1]                 ; 005cdd45
    CALL crt_unknown.c_FUN_005ce48c     ; 005cdd48
        ;   XREF to: 005ce48c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ce48c()
    MOV DL,0x3a                         ; 005cdd4d
    ADD ESP,0xc                         ; 005cdd4f
    MOV EBP,EAX                         ; 005cdd52
    MOV EBX,ESI                         ; 005cdd54
    MOV AL,byte ptr [ESI]               ; 005cdd56
        ;   Label: LAB_005cdd56
    CMP AL,DL                           ; 005cdd58
    JZ 0x005cdd6e                       ; 005cdd5a
        ;   XREF to: 005cdd6e (CONDITIONAL_JUMP)  ; LAB_005cdd6e
    CMP AL,0x0                          ; 005cdd5c
    JZ 0x005cdd6c                       ; 005cdd5e
        ;   XREF to: 005cdd6c (CONDITIONAL_JUMP)  ; LAB_005cdd6c
    INC ESI                             ; 005cdd60
    MOV AL,byte ptr [ESI]               ; 005cdd61
    CMP AL,DL                           ; 005cdd63
    JZ 0x005cdd6e                       ; 005cdd65
        ;   XREF to: 005cdd6e (CONDITIONAL_JUMP)  ; LAB_005cdd6e
    INC ESI                             ; 005cdd67
    CMP AL,0x0                          ; 005cdd68
    JNZ 0x005cdd56                      ; 005cdd6a
        ;   XREF to: 005cdd56 (CONDITIONAL_JUMP)  ; LAB_005cdd56
    SUB ESI,ESI                         ; 005cdd6c
        ;   Label: LAB_005cdd6c
    MOV EDI,ESI                         ; 005cdd6e
        ;   Label: LAB_005cdd6e
    SUB ESI,EBX                         ; 005cdd70
    PUSH ESI                            ; 005cdd72
    PUSH EBX                            ; 005cdd73
    LEA EBX,[ESP + 0x8]                 ; 005cdd74
    PUSH EBX                            ; 005cdd78
    CALL crt_string.c__strncpy_FUN_005c20d0 ; 005cdd79
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005c20d0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 005cdd7e
    PUSH 0x10                           ; 005cdd81
    PUSH 0x0                            ; 005cdd83
    LEA EBX,[ESP + 0x8]                 ; 005cdd85
    XOR DH,DH                           ; 005cdd89
    PUSH EBX                            ; 005cdd8b
    MOV byte ptr [ESP + ESI*0x1 + 0xc],DH ; 005cdd8c
    LEA ESI,[EDI + 0x1]                 ; 005cdd90
    CALL crt_unknown.c_FUN_005ce48c     ; 005cdd93
        ;   XREF to: 005ce48c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ce48c()
    MOV dword ptr [ESP + 0x18],EAX      ; 005cdd98
    ADD ESP,0xc                         ; 005cdd9c
    MOV DL,0x2a                         ; 005cdd9f
    MOV EBX,ESI                         ; 005cdda1
    MOV AL,byte ptr [ESI]               ; 005cdda3
        ;   Label: LAB_005cdda3
    CMP AL,DL                           ; 005cdda5
    JZ 0x005cddbb                       ; 005cdda7
        ;   XREF to: 005cddbb (CONDITIONAL_JUMP)  ; LAB_005cddbb
    CMP AL,0x0                          ; 005cdda9
    JZ 0x005cddb9                       ; 005cddab
        ;   XREF to: 005cddb9 (CONDITIONAL_JUMP)  ; LAB_005cddb9
    INC ESI                             ; 005cddad
    MOV AL,byte ptr [ESI]               ; 005cddae
    CMP AL,DL                           ; 005cddb0
    JZ 0x005cddbb                       ; 005cddb2
        ;   XREF to: 005cddbb (CONDITIONAL_JUMP)  ; LAB_005cddbb
    INC ESI                             ; 005cddb4
    CMP AL,0x0                          ; 005cddb5
    JNZ 0x005cdda3                      ; 005cddb7
        ;   XREF to: 005cdda3 (CONDITIONAL_JUMP)  ; LAB_005cdda3
    SUB ESI,ESI                         ; 005cddb9
        ;   Label: LAB_005cddb9
    MOV EDI,ESI                         ; 005cddbb
        ;   Label: LAB_005cddbb
    SUB ESI,EBX                         ; 005cddbd
    PUSH ESI                            ; 005cddbf
    PUSH EBX                            ; 005cddc0
    LEA EBX,[ESP + 0x8]                 ; 005cddc1
    PUSH EBX                            ; 005cddc5
    CALL crt_string.c__strncpy_FUN_005c20d0 ; 005cddc6
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005c20d0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 005cddcb
    PUSH 0x10                           ; 005cddce
    XOR BL,BL                           ; 005cddd0
    PUSH 0x0                            ; 005cddd2
    MOV byte ptr [ESP + ESI*0x1 + 0x8],BL ; 005cddd4
    LEA EBX,[ESP + 0x8]                 ; 005cddd8
    PUSH EBX                            ; 005cdddc
    CALL crt_unknown.c_FUN_005ce48c     ; 005cdddd
        ;   XREF to: 005ce48c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ce48c()
    ADD ESP,0xc                         ; 005cdde2
    PUSH EBP                            ; 005cdde5
    MOV EDX,dword ptr [ESP + 0x10]      ; 005cdde6
    PUSH EDX                            ; 005cddea
    MOV EBX,EAX                         ; 005cddeb
    CALL crt_unknown.c_FUN_005c8c4c     ; 005cdded
        ;   XREF to: 005c8c4c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8c4c()
    ADD ESP,0x8                         ; 005cddf2
    PUSH EBX                            ; 005cddf5
    PUSH EBP                            ; 005cddf6
    LEA ESI,[EDI + 0x1]                 ; 005cddf7
    CALL crt_unknown.c_FUN_005c8b38     ; 005cddfa
        ;   XREF to: 005c8b38 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8b38()
    MOV EBX,ESI                         ; 005cddff
    ADD ESP,0x8                         ; 005cde01
    JMP 0x005cdcfe                      ; 005cde04
        ;   XREF to: 005cdcfe (UNCONDITIONAL_JUMP)  ; LAB_005cdcfe
    PUSH 0x5fb2ac                       ; 005cde09
        ;   Label: LAB_005cde09
    CALL crt_unknown.c_FUN_005ce510     ; 005cde0e
        ;   XREF to: 005ce510 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ce510()
    ADD ESP,0x4                         ; 005cde13
    ADD ESP,0x10                        ; 005cde16
        ;   Label: LAB_005cde16
    POP EBP                             ; 005cde19
    POP EDI                             ; 005cde1a
    POP ESI                             ; 005cde1b
    POP EBX                             ; 005cde1c
    RET                                 ; 005cde1d


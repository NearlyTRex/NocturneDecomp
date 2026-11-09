; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_mimic_cpp_FUN_004ab1ac(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab1ac
        ;   Label: unkafter_mimic.cpp_FUN_004ab1ac
    MOV AL,byte ptr [EDX]               ; 004ab1ad
    TEST ECX,0x7                        ; 004ab1af
    JZ 0x004ab1cf                       ; 004ab1b5
        ;   XREF to: 004ab1cf (CONDITIONAL_JUMP)  ; LAB_004ab1cf
    TEST AL,AL                          ; 004ab1b7
        ;   Label: LAB_004ab1b7
    MOV byte ptr [ECX],AL               ; 004ab1b9
    JZ 0x004ab21b                       ; 004ab1bb
        ;   XREF to: 004ab21b (CONDITIONAL_JUMP)  ; LAB_004ab21b
    MOV AL,byte ptr [EDX + 0x1]         ; 004ab1bd
    INC ECX                             ; 004ab1c0
    INC EDX                             ; 004ab1c1
    TEST ECX,0x7                        ; 004ab1c2
    JNZ 0x004ab1b7                      ; 004ab1c8
        ;   XREF to: 004ab1b7 (CONDITIONAL_JUMP)  ; LAB_004ab1b7
    JMP 0x004ab1cf                      ; 004ab1ca
        ;   XREF to: 004ab1cf (UNCONDITIONAL_JUMP)  ; LAB_004ab1cf
    FISTP qword ptr [ECX + -0x8]        ; 004ab1cc
        ;   Label: LAB_004ab1cc
    FILD qword ptr [EDX]                ; 004ab1cf
        ;   Label: LAB_004ab1cf
    MOV EAX,dword ptr [EDX]             ; 004ab1d1
    ADD ECX,0x8                         ; 004ab1d3
    TEST EAX,0xff                       ; 004ab1d6
    JZ 0x004ab248                       ; 004ab1db
        ;   XREF to: 004ab248 (CONDITIONAL_JUMP)  ; LAB_004ab248
    TEST EAX,0xff00                     ; 004ab1dd
    JZ 0x004ab240                       ; 004ab1e2
        ;   XREF to: 004ab240 (CONDITIONAL_JUMP)  ; LAB_004ab240
    TEST EAX,0xff0000                   ; 004ab1e4
    JZ 0x004ab23c                       ; 004ab1e9
        ;   XREF to: 004ab23c (CONDITIONAL_JUMP)  ; LAB_004ab23c
    TEST EAX,0xff000000                 ; 004ab1eb
    JZ 0x004ab233                       ; 004ab1f0
        ;   XREF to: 004ab233 (CONDITIONAL_JUMP)  ; LAB_004ab233
    MOV EBX,dword ptr [EDX + 0x4]       ; 004ab1f2
    ADD EDX,0x8                         ; 004ab1f5
    TEST EBX,0xff                       ; 004ab1f8
    JZ 0x004ab230                       ; 004ab1fe
        ;   XREF to: 004ab230 (CONDITIONAL_JUMP)  ; LAB_004ab230
    TEST EBX,0xff00                     ; 004ab200
    JZ 0x004ab224                       ; 004ab206
        ;   XREF to: 004ab224 (CONDITIONAL_JUMP)  ; LAB_004ab224
    TEST EBX,0xff0000                   ; 004ab208
    JZ 0x004ab220                       ; 004ab20e
        ;   XREF to: 004ab220 (CONDITIONAL_JUMP)  ; LAB_004ab220
    TEST EBX,0xff000000                 ; 004ab210
    JNZ 0x004ab1cc                      ; 004ab216
        ;   XREF to: 004ab1cc (CONDITIONAL_JUMP)  ; LAB_004ab1cc
    FISTP qword ptr [ECX + -0x8]        ; 004ab218
    POP EBX                             ; 004ab21b
        ;   Label: LAB_004ab21b
    RET                                 ; 004ab21c
    MOV byte ptr [ECX + -0x2],0x0       ; 004ab220
        ;   Label: LAB_004ab220
    MOV word ptr [ECX + -0x4],BX        ; 004ab224
        ;   Label: LAB_004ab224
    MOV dword ptr [ECX + -0x8],EAX      ; 004ab228
    FMULP ST0                           ; 004ab22b
    POP EBX                             ; 004ab22d
    RET                                 ; 004ab22e
    MOV byte ptr [ECX + -0x4],BL        ; 004ab230
        ;   Label: LAB_004ab230
    MOV dword ptr [ECX + -0x8],EAX      ; 004ab233
        ;   Label: LAB_004ab233
    POP EBX                             ; 004ab236
    FMULP ST0                           ; 004ab237
    RET                                 ; 004ab239
    MOV byte ptr [ECX + -0x6],0x0       ; 004ab23c
        ;   Label: LAB_004ab23c
    MOV word ptr [ECX + -0x8],AX        ; 004ab240
        ;   Label: LAB_004ab240
    POP EBX                             ; 004ab244
    FMULP ST0                           ; 004ab245
    RET                                 ; 004ab247
    MOV byte ptr [ECX + -0x8],AL        ; 004ab248
        ;   Label: LAB_004ab248
    POP EBX                             ; 004ab24b
    FMULP ST0                           ; 004ab24c
    RET                                 ; 004ab24e


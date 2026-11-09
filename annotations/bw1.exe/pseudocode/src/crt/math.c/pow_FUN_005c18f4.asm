; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_math_c_pow_FUN_005c18f4(void)
;
; Local Variables:
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[6]:
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00454830 at 00454868
;   core_menu.cpp_FUN_0050ba70 at 0050c1de
;   core_set.cpp_CDemonSet_setGamma_FUN_00555830 at 0055587b
;   core_shadow.cpp_FUN_0055de50 at 0055eafd
;   sound_mp3.cpp_calculateIntensityStereoRatio_FUN_005292d0 at 00529310
;   sound_mp3.cpp_requantizeLayer3Samples_FUN_00528ae0 at 00528d6b
;
; Referenced Globals:
;   undefined4 DAT_006267b8
;
; Called Functions:
;   crt_unknown.c_FUN_005c1a30
;   crt_unknown.c_FUN_005c7570
;   crt_unknown.c_FUN_005c7620
;   crt_unknown.c_FUN_005c77b3
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c18f4
        ;   Label: crt_math.c_pow_FUN_005c18f4
    MOV EBP,ESP                         ; 005c18f5
    FTST                                ; 005c18f7
    SUB ESP,0x18                        ; 005c18f9
    FSTSW word ptr [EBP + -0x8]         ; 005c18fc
    FST double ptr [EBP + -0x18]        ; 005c1900
    MOV AH,byte ptr [EBP + -0x7]        ; 005c1903
    SAHF                                ; 005c1906
    JNZ 0x005c192c                      ; 005c1907
        ;   XREF to: 005c192c (CONDITIONAL_JUMP)  ; LAB_005c192c
    MOV AL,0x0                          ; 005c1909
    FSTP ST0                            ; 005c190b
        ;   Label: LAB_005c190b
    FSTP double ptr [EBP + -0x10]       ; 005c190d
    MOV dword ptr [EBP + -0x8],EAX      ; 005c1910
    MOV dword ptr [EBP + -0x4],EDX      ; 005c1913
    CALL crt_unknown.c_FUN_005c7570     ; 005c1916
        ;   XREF to: 005c7570 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7570()
    SUB ESP,0x8                         ; 005c191b
    PUSH EDX                            ; 005c191e
    PUSH EAX                            ; 005c191f
    FLD double ptr [ESP]                ; 005c1920
    MOV EDX,dword ptr [EBP + -0x4]      ; 005c1923
    WAIT                                ; 005c1926
    JMP 0x005c1a25                      ; 005c1927
        ;   XREF to: 005c1a25 (UNCONDITIONAL_JUMP)  ; LAB_005c1a25
    FLD ST1                             ; 005c192c
        ;   Label: LAB_005c192c
    FRNDINT                             ; 005c192e
    FCOMP ST2                           ; 005c1930
    FSTSW word ptr [EBP + -0x6]         ; 005c1932
    WAIT                                ; 005c1936
    MOV AH,byte ptr [EBP + -0x5]        ; 005c1937
    JNC 0x005c1977                      ; 005c193a
        ;   XREF to: 005c1977 (CONDITIONAL_JUMP)  ; LAB_005c1977
    MOV AL,0x1                          ; 005c193c
    SAHF                                ; 005c193e
    JNZ 0x005c190b                      ; 005c193f
        ;   XREF to: 005c190b (CONDITIONAL_JUMP)  ; LAB_005c190b
    MOV AX,0x2                          ; 005c1941
    MOV word ptr [EBP + -0x4],AX        ; 005c1945
    FILD word ptr [EBP + -0x4]          ; 005c1949
    FLD ST2                             ; 005c194c
    FPREM                               ; 005c194e
    FSTSW word ptr [EBP + -0x4]         ; 005c1950
    WAIT                                ; 005c1954
    MOV AH,byte ptr [EBP + -0x3]        ; 005c1955
    SAHF                                ; 005c1958
    MOV AH,0x0                          ; 005c1959
    JP 0x005c196e                       ; 005c195b
        ;   XREF to: 005c196e (CONDITIONAL_JUMP)  ; LAB_005c196e
    FTST                                ; 005c195d
    FSTSW word ptr [EBP + -0x4]         ; 005c195f
    WAIT                                ; 005c1963
    MOV AH,byte ptr [EBP + -0x3]        ; 005c1964
    SAHF                                ; 005c1967
    MOV AH,0x0                          ; 005c1968
    JZ 0x005c196e                       ; 005c196a
        ;   XREF to: 005c196e (CONDITIONAL_JUMP)  ; LAB_005c196e
    MOV AH,0x1                          ; 005c196c
    MOV byte ptr [EBP + -0x7],AH        ; 005c196e
        ;   Label: LAB_005c196e
    FSTP ST0                            ; 005c1971
    FSTP ST0                            ; 005c1973
    JMP 0x005c197f                      ; 005c1975
        ;   XREF to: 005c197f (UNCONDITIONAL_JUMP)  ; LAB_005c197f
    SAHF                                ; 005c1977
        ;   Label: LAB_005c1977
    JZ 0x005c197f                       ; 005c1978
        ;   XREF to: 005c197f (CONDITIONAL_JUMP)  ; LAB_005c197f
    JMP 0x005c1a06                      ; 005c197a
        ;   XREF to: 005c1a06 (UNCONDITIONAL_JUMP)  ; LAB_005c1a06
    FLD ST1                             ; 005c197f
        ;   Label: LAB_005c197f
    FSTP double ptr [EBP + -0x10]       ; 005c1981
    WAIT                                ; 005c1984
    MOV AX,word ptr [EBP + -0xa]        ; 005c1985
    AND AX,0x7ff0                       ; 005c1989
    SUB AX,0x3ff0                       ; 005c198d
    CMP AX,0x100                        ; 005c1991
    JNC 0x005c1a06                      ; 005c1995
        ;   XREF to: 005c1a06 (CONDITIONAL_JUMP)  ; LAB_005c1a06
    FLD ST1                             ; 005c1997
    FISTP dword ptr [EBP + -0x4]        ; 005c1999
    WAIT                                ; 005c199c
    MOV AX,word ptr [EBP + -0x2]        ; 005c199d
    OR AX,AX                            ; 005c19a1
    JNZ 0x005c19b1                      ; 005c19a4
        ;   XREF to: 005c19b1 (CONDITIONAL_JUMP)  ; LAB_005c19b1
    MOV AX,word ptr [EBP + -0x4]        ; 005c19a6
    CALL crt_unknown.c_FUN_005c1a30     ; 005c19aa
        ;   XREF to: 005c1a30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1a30()
    JMP 0x005c19dc                      ; 005c19af
        ;   XREF to: 005c19dc (UNCONDITIONAL_JUMP)  ; LAB_005c19dc
    INC AX                              ; 005c19b1
        ;   Label: LAB_005c19b1
    JNZ 0x005c1a06                      ; 005c19b3
        ;   XREF to: 005c1a06 (CONDITIONAL_JUMP)  ; LAB_005c1a06
    OR AX,word ptr [EBP + -0x4]         ; 005c19b5
    JZ 0x005c1a06                       ; 005c19b9
        ;   XREF to: 005c1a06 (CONDITIONAL_JUMP)  ; LAB_005c1a06
    NEG AX                              ; 005c19bb
    CALL crt_unknown.c_FUN_005c1a30     ; 005c19be
        ;   XREF to: 005c1a30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1a30()
    FLD1                                ; 005c19c3
    TEST byte ptr [0x006267b8],0x1      ; 005c19c5 | DAT_006267b8
    JNZ 0x005c19d2                      ; 005c19cc
        ;   XREF to: 005c19d2 (CONDITIONAL_JUMP)  ; LAB_005c19d2
    FDIVRP                              ; 005c19ce
    JMP 0x005c19dc                      ; 005c19d0
        ;   XREF to: 005c19dc (UNCONDITIONAL_JUMP)  ; LAB_005c19dc
    MOV EAX,0xf                         ; 005c19d2
        ;   Label: LAB_005c19d2
    CALL crt_unknown.c_FUN_005c77b3     ; 005c19d7
        ;   XREF to: 005c77b3 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c77b3()
    FST double ptr [EBP + -0x8]         ; 005c19dc
        ;   Label: LAB_005c19dc
    WAIT                                ; 005c19df
    MOV AX,word ptr [EBP + -0x8]        ; 005c19e0
    OR AX,word ptr [EBP + -0x6]         ; 005c19e4
    OR AX,word ptr [EBP + -0x4]         ; 005c19e8
    JNZ 0x005c1a02                      ; 005c19ec
        ;   XREF to: 005c1a02 (CONDITIONAL_JUMP)  ; LAB_005c1a02
    MOV AX,word ptr [EBP + -0x2]        ; 005c19ee
    SHL AX,0x1                          ; 005c19f2
    CMP AX,0xffe0                       ; 005c19f5
    JNZ 0x005c1a02                      ; 005c19f9
        ;   XREF to: 005c1a02 (CONDITIONAL_JUMP)  ; LAB_005c1a02
    MOV AL,0x2                          ; 005c19fb
        ;   Label: LAB_005c19fb
    JMP 0x005c190b                      ; 005c19fd
        ;   XREF to: 005c190b (UNCONDITIONAL_JUMP)  ; LAB_005c190b
    FSTP ST1                            ; 005c1a02
        ;   Label: LAB_005c1a02
    JMP 0x005c1a25                      ; 005c1a04
        ;   XREF to: 005c1a25 (UNCONDITIONAL_JUMP)  ; LAB_005c1a25
    FLDLN2                              ; 005c1a06
        ;   Label: LAB_005c1a06
    FMUL ST2                            ; 005c1a08
    FXCH                                ; 005c1a0a
    FABS                                ; 005c1a0c
    FYL2X                               ; 005c1a0e
    MOV AL,0x7                          ; 005c1a10
    CALL crt_unknown.c_FUN_005c7620     ; 005c1a12
        ;   XREF to: 005c7620 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7620()
    CMP AL,0x0                          ; 005c1a17
    JNZ 0x005c19fb                      ; 005c1a19
        ;   XREF to: 005c19fb (CONDITIONAL_JUMP)  ; LAB_005c19fb
    MOV AH,byte ptr [EBP + -0x7]        ; 005c1a1b
    SAHF                                ; 005c1a1e
    JNC 0x005c1a23                      ; 005c1a1f
        ;   XREF to: 005c1a23 (CONDITIONAL_JUMP)  ; LAB_005c1a23
    FCHS                                ; 005c1a21
    FSTP ST1                            ; 005c1a23
        ;   Label: LAB_005c1a23
    FSTP double ptr [EBP + -0x8]        ; 005c1a25
        ;   Label: LAB_005c1a25
    FLD double ptr [EBP + -0x8]         ; 005c1a28
    WAIT                                ; 005c1a2b
    MOV ESP,EBP                         ; 005c1a2c
    POP EBP                             ; 005c1a2e
    RET                                 ; 005c1a2f


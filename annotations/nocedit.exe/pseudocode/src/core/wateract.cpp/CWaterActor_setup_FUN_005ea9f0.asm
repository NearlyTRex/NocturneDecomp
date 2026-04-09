; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_005ea9f0(CWaterActor *this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; float            Stack[-0x28]:4  local_28
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   double DOUBLE_00657277 = 0.5
;   double DOUBLE_0065727f = 2
;   double DOUBLE_00657287 = 3.14159265350000
;   double DOUBLE_0065728f = 0.707000000000000
;   double DOUBLE_00657297 = 128
;   double DOUBLE_0065729f = 65536
;   double DOUBLE_006572a7 = 252
;   double DOUBLE_006572af = 8388608
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_wateract.cpp_CWaterActor_updateWorldPositions_FUN_005eafa0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ea9f0
        ;   Label: core_wateract.cpp_CWaterActor_setup_FUN_005ea9f0
    PUSH ESI                            ; 005ea9f1
    PUSH EDI                            ; 005ea9f2
    PUSH EBP                            ; 005ea9f3
    MOV EBP,ESP                         ; 005ea9f4
    SUB ESP,0x40                        ; 005ea9f6
    AND ESP,0xfffffff8                  ; 005ea9f9
    MOV EDI,dword ptr [EBP + 0x14]      ; 005ea9fc
    PUSH EDI                            ; 005ea9ff
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005eaa00
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    FLD float ptr [EDI + 0x168]         ; 005eaa05
    FMUL float ptr [EDI + 0x27c]        ; 005eaa0b
    ADD ESP,0x4                         ; 005eaa11
    FSUBR float ptr [EDI + 0x24]        ; 005eaa14
    MOV EDX,dword ptr [EDI + 0x288]     ; 005eaa17
    FSTP float ptr [EDI + 0x2b230]      ; 005eaa1d
    TEST EDX,EDX                        ; 005eaa23
    JNZ 0x005eaaab                      ; 005eaa25
        ;   XREF to: 005eaaab (CONDITIONAL_JUMP)  ; LAB_005eaaab
    FLD1                                ; 005eaa2b
        ;   Label: LAB_005eaa2b
    FLD float ptr [EDI + 0x160]         ; 005eaa2d
    FXCH                                ; 005eaa33
    FDIV float ptr [EDI + 0x284]        ; 005eaa35
    FXCH                                ; 005eaa3b
    FMUL ST1                            ; 005eaa3d
    FLD float ptr [EDI + 0x158]         ; 005eaa3f
    FMULP ST2                           ; 005eaa45
    CALL crt_math.c_round_FUN_005fe6b0  ; 005eaa47
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc]         ; 005eaa4c
    MOV EAX,dword ptr [ESP + 0xc]       ; 005eaa50
    CALL crt_math.c_round_FUN_005fe6b0  ; 005eaa54
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    INC EAX                             ; 005eaa59
    FISTP dword ptr [ESP + 0x3c]        ; 005eaa5a
    MOV dword ptr [ESP + 0x14],EAX      ; 005eaa5e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005eaa62
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005eaa66
    MOV dword ptr [EDI + 0x7fa0],EAX    ; 005eaa6a
    MOV EAX,dword ptr [ESP + 0xc]       ; 005eaa70
    INC EBX                             ; 005eaa74
    MOV dword ptr [EDI + 0x7fa4],EAX    ; 005eaa75
    MOV EAX,dword ptr [ESP + 0x14]      ; 005eaa7b
    IMUL EAX,EBX                        ; 005eaa7f
    MOV dword ptr [EDI + 0x298],EAX     ; 005eaa82
    CMP EAX,0x3e8                       ; 005eaa88
    JLE 0x005eace4                      ; 005eaa8d
        ;   XREF to: 005eace4 (CONDITIONAL_JUMP)  ; LAB_005eace4
    FLD float ptr [EDI + 0x284]         ; 005eaa93
    FLD ST0                             ; 005eaa99
    FMUL double ptr [0x0065727f]        ; 005eaa9b | DOUBLE_0065727f
    FSTP ST1                            ; 005eaaa1
    FSTP float ptr [EDI + 0x284]        ; 005eaaa3
    JMP 0x005eaa2b                      ; 005eaaa9
        ;   XREF to: 005eaa2b (UNCONDITIONAL_JUMP)  ; LAB_005eaa2b
    MOV dword ptr [EDI + 0x2b234],0x20  ; 005eaaab
        ;   Label: LAB_005eaaab
    MOV dword ptr [EDI + 0x298],0x0     ; 005eaab5
    MOV ECX,dword ptr [EDI + 0x2b234]   ; 005eaabf
    XOR EDX,EDX                         ; 005eaac5
    TEST ECX,ECX                        ; 005eaac7
    JLE 0x005eabd7                      ; 005eaac9
        ;   XREF to: 005eabd7 (CONDITIONAL_JUMP)  ; LAB_005eabd7
    FLD double ptr [0x006572af]         ; 005eaacf | DOUBLE_006572af
    FLD double ptr [0x0065729f]         ; 005eaad5 | DOUBLE_0065729f
    FLD double ptr [0x00657297]         ; 005eaadb | DOUBLE_00657297
    MOV dword ptr [ESP + 0x3c],EDX      ; 005eaae1
        ;   Label: LAB_005eaae1
    FILD dword ptr [EDI + 0x2b234]      ; 005eaae5
    FILD dword ptr [ESP + 0x3c]         ; 005eaaeb
    FDIVRP                              ; 005eaaef
    FMUL double ptr [0x00657287]        ; 005eaaf1 | DOUBLE_00657287
    FMUL double ptr [0x0065727f]        ; 005eaaf7 | DOUBLE_0065727f
    FLD float ptr [EDI + 0x158]         ; 005eaafd
    FLD ST1                             ; 005eab03
    FCOS                                ; 005eab05
    FXCH ST2                            ; 005eab07
    FSIN                                ; 005eab09
    FXCH ST2                            ; 005eab0b
    FMULP                               ; 005eab0d
    MOV EAX,dword ptr [EDI + 0x298]     ; 005eab0f
    FMUL double ptr [0x0065728f]        ; 005eab15 | DOUBLE_0065728f
    SHL EAX,0x5                         ; 005eab1b
    FSTP float ptr [EDI + EAX*0x1 + 0x29c] ; 005eab1e
    MOV EAX,dword ptr [EDI + 0x298]     ; 005eab25
    SHL EAX,0x5                         ; 005eab2b
    MOV dword ptr [EDI + EAX*0x1 + 0x2a0],0x0 ; 005eab2e
    FMUL float ptr [EDI + 0x160]        ; 005eab39
    MOV EAX,dword ptr [EDI + 0x298]     ; 005eab3f
    FMUL double ptr [0x0065728f]        ; 005eab45 | DOUBLE_0065728f
    SHL EAX,0x5                         ; 005eab4b
    FSTP float ptr [EDI + EAX*0x1 + 0x2a4] ; 005eab4e
    MOV ECX,dword ptr [EDI + 0x298]     ; 005eab55
    SHL ECX,0x5                         ; 005eab5b
    FLD float ptr [ECX + EDI*0x1 + 0x29c] ; 005eab5e
    FDIV float ptr [EDI + 0x158]        ; 005eab65
    FMUL ST1                            ; 005eab6b
    FMUL ST2                            ; 005eab6d
    FADD ST0,ST3                        ; 005eab6f
    CALL crt_math.c_round_FUN_005fe6b0  ; 005eab71
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc]         ; 005eab76
    MOV EAX,dword ptr [ESP + 0xc]       ; 005eab7a
    MOV dword ptr [ECX + EDI*0x1 + 0x2b4],EAX ; 005eab7e
    MOV ECX,dword ptr [EDI + 0x298]     ; 005eab85
    SHL ECX,0x5                         ; 005eab8b
    FLD float ptr [ECX + EDI*0x1 + 0x2a4] ; 005eab8e
    FDIV float ptr [EDI + 0x160]        ; 005eab95
    FMUL ST1                            ; 005eab9b
    FMUL ST2                            ; 005eab9d
    FADD ST0,ST3                        ; 005eab9f
    CALL crt_math.c_round_FUN_005fe6b0  ; 005eaba1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x3c]        ; 005eaba6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005eabaa
    MOV dword ptr [ECX + EDI*0x1 + 0x2b8],EAX ; 005eabae
    MOV EBX,dword ptr [EDI + 0x298]     ; 005eabb5
    INC EDX                             ; 005eabbb
    INC EBX                             ; 005eabbc
    MOV ESI,dword ptr [EDI + 0x2b234]   ; 005eabbd
    MOV dword ptr [EDI + 0x298],EBX     ; 005eabc3
    CMP EDX,ESI                         ; 005eabc9
    JL 0x005eaae1                       ; 005eabcb
        ;   XREF to: 005eaae1 (CONDITIONAL_JUMP)  ; LAB_005eaae1
    FSTP ST0                            ; 005eabd1
    FSTP ST0                            ; 005eabd3
    FSTP ST0                            ; 005eabd5
    MOV EDX,dword ptr [EDI + 0x298]     ; 005eabd7
        ;   Label: LAB_005eabd7
    LEA EAX,[EDI + 0x29c]               ; 005eabdd
    SHL EDX,0x5                         ; 005eabe3
    MOV dword ptr [EDX + EAX*0x1 + 0x8],0x0 ; 005eabe6
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x8] ; 005eabee
    MOV dword ptr [EDX + EAX*0x1 + 0x4],ECX ; 005eabf2
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x4] ; 005eabf6
    MOV dword ptr [EDX + EAX*0x1],ECX   ; 005eabfa
    MOV EDX,dword ptr [EDI + 0x298]     ; 005eabfd
    MOV ECX,dword ptr [EDI + 0x2b234]   ; 005eac03
    XOR EAX,EAX                         ; 005eac09
    INC EDX                             ; 005eac0b
    MOV dword ptr [ESP + 0x34],EAX      ; 005eac0c
    MOV dword ptr [EDI + 0x298],EDX     ; 005eac10
    TEST ECX,ECX                        ; 005eac16
    JLE 0x005eacc0                      ; 005eac18
        ;   XREF to: 005eacc0 (CONDITIONAL_JUMP)  ; LAB_005eacc0
    LEA ECX,[EDI + 0x7fa8]              ; 005eac1e
    MOV ESI,EDI                         ; 005eac24
    MOV dword ptr [ECX + 0x4],0x3       ; 005eac26
        ;   Label: LAB_005eac26
    MOV dword ptr [ECX + 0x14],0x0      ; 005eac2d
    MOV EAX,dword ptr [ECX + 0x14]      ; 005eac34
    MOV dword ptr [ECX + 0x10],EAX      ; 005eac37
    MOV dword ptr [ECX + 0xc],EAX       ; 005eac3a
    MOV EBX,dword ptr [ESP + 0x34]      ; 005eac3d
    MOV dword ptr [ECX + 0x8],EAX       ; 005eac41
    INC EBX                             ; 005eac44
    MOV EAX,dword ptr [EDI + 0x2b234]   ; 005eac45
    MOV dword ptr [ECX + 0x1c],0x0      ; 005eac4b
    MOV EDX,EBX                         ; 005eac52
    MOV dword ptr [ECX + 0x20],0x0      ; 005eac54
    SAR EDX,0x1f                        ; 005eac5b
    MOV dword ptr [ECX + 0x18],EAX      ; 005eac5e
    MOV EAX,EBX                         ; 005eac61
    IDIV dword ptr [EDI + 0x2b234]      ; 005eac63
    MOV EAX,dword ptr [ESP + 0x34]      ; 005eac69
    MOV dword ptr [ECX + 0x24],EAX      ; 005eac6d
    MOV EAX,dword ptr [ESI + 0x2b4]     ; 005eac70
    MOV dword ptr [ECX + 0x28],EAX      ; 005eac76
    MOV EAX,dword ptr [ESI + 0x2b8]     ; 005eac79
    MOV dword ptr [ECX + 0x30],EDX      ; 005eac7f
    SHL EDX,0x5                         ; 005eac82
    MOV dword ptr [ECX + 0x2c],EAX      ; 005eac85
    LEA EAX,[EDI + EDX*0x1]             ; 005eac88
    MOV EDX,dword ptr [EAX + 0x2b4]     ; 005eac8b
    MOV dword ptr [ECX + 0x34],EDX      ; 005eac91
    MOV EAX,dword ptr [EAX + 0x2b8]     ; 005eac94
    ADD ESI,0x20                        ; 005eac9a
    MOV dword ptr [ECX + 0x38],EAX      ; 005eac9d
    ADD ECX,0x48                        ; 005eaca0
    MOV EAX,dword ptr [EDI + 0x2b234]   ; 005eaca3
    MOV dword ptr [ESP + 0x34],EBX      ; 005eaca9
    CMP EBX,EAX                         ; 005eacad
    JL 0x005eac26                       ; 005eacaf
        ;   XREF to: 005eac26 (CONDITIONAL_JUMP)  ; LAB_005eac26
    LEA EAX,[EAX]                       ; 005eacb5
    LEA EDX,[EDX]                       ; 005eacbb
    MOV EBX,EBX                         ; 005eacbe
    PUSH EDI                            ; 005eacc0
        ;   Label: LAB_005eacc0
    CALL core_wateract.cpp_CWaterActor_updateWorldPositions_FUN_005eafa0 ; 005eacc1
        ;   XREF to: 005eafa0 (UNCONDITIONAL_CALL)  ; void core_wateract.cpp_CWaterActor_updateWorldPositions_FUN_005eafa0(CWaterActor * this_ptr)
    MOV dword ptr [EDI + 0x2b228],0x0   ; 005eacc6
    ADD ESP,0x4                         ; 005eacd0
    MOV dword ptr [EDI + 0x2b22c],0x0   ; 005eacd3
    MOV ESP,EBP                         ; 005eacdd
    POP EBP                             ; 005eacdf
    POP EDI                             ; 005eace0
    POP ESI                             ; 005eace1
    POP EBX                             ; 005eace2
    RET                                 ; 005eace3
    LEA EAX,[EBX + -0x1]                ; 005eace4
        ;   Label: LAB_005eace4
    MOV dword ptr [ESP + 0x3c],EAX      ; 005eace7
    FILD dword ptr [ESP + 0x3c]         ; 005eaceb
    FDIVR float ptr [EDI + 0x158]       ; 005eacef
    MOV EAX,dword ptr [ESP + 0x14]      ; 005eacf5
    DEC EAX                             ; 005eacf9
    MOV dword ptr [ESP + 0x3c],EAX      ; 005eacfa
    FILD dword ptr [ESP + 0x3c]         ; 005eacfe
    FDIVR float ptr [EDI + 0x160]       ; 005ead02
    FLD float ptr [EDI + 0x160]         ; 005ead08
    FCHS                                ; 005ead0e
    FMUL double ptr [0x00657277]        ; 005ead10 | DOUBLE_00657277
    XOR EDX,EDX                         ; 005ead16
    MOV ECX,dword ptr [ESP + 0x14]      ; 005ead18
    MOV dword ptr [ESP + 0x38],EDX      ; 005ead1c
    FSTP float ptr [ESP + 0x1c]         ; 005ead20
    FXCH                                ; 005ead24
    FSTP float ptr [ESP + 0x18]         ; 005ead26
    FSTP float ptr [ESP + 0x10]         ; 005ead2a
    TEST ECX,ECX                        ; 005ead2e
    JLE 0x005eae1e                      ; 005ead30
        ;   XREF to: 005eae1e (CONDITIONAL_JUMP)  ; LAB_005eae1e
    LEA EAX,[EDI + 0x29c]               ; 005ead36
    MOV dword ptr [ESP + 0x30],EAX      ; 005ead3c
    FLD float ptr [EDI + 0x158]         ; 005ead40
        ;   Label: LAB_005ead40
    FCHS                                ; 005ead46
    FMUL double ptr [0x00657277]        ; 005ead48 | DOUBLE_00657277
    XOR ECX,ECX                         ; 005ead4e
    FSTP float ptr [ESP + 0x28]         ; 005ead50
    TEST EBX,EBX                        ; 005ead54
    JLE 0x005eadfd                      ; 005ead56
        ;   XREF to: 005eadfd (CONDITIONAL_JUMP)  ; LAB_005eadfd
    FLD double ptr [0x006572a7]         ; 005ead5c | DOUBLE_006572a7
    MOV ESI,dword ptr [ESP + 0x30]      ; 005ead62
    FLD double ptr [0x0065729f]         ; 005ead66 | DOUBLE_0065729f
    MOV EAX,EDX                         ; 005ead6c
    FLD double ptr [0x00657277]         ; 005ead6e | DOUBLE_00657277
    SHL EAX,0x5                         ; 005ead74
    FLD float ptr [ESP + 0x18]          ; 005ead77
    ADD EAX,ESI                         ; 005ead7b
    MOV ESI,dword ptr [ESP + 0x28]      ; 005ead7d
        ;   Label: LAB_005ead7d
    MOV dword ptr [EAX + 0x4],0x0       ; 005ead81
    MOV dword ptr [EAX],ESI             ; 005ead88
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005ead8a
    MOV dword ptr [EAX + 0x8],ESI       ; 005ead8e
    FLD float ptr [EDI + 0x158]         ; 005ead91
    FLD ST0                             ; 005ead97
    FMUL ST3                            ; 005ead99
    FADD float ptr [EAX]                ; 005ead9b
    FDIVRP                              ; 005ead9d
    FMUL ST4                            ; 005ead9f
    FMUL ST3                            ; 005eada1
    CALL crt_math.c_round_FUN_005fe6b0  ; 005eada3
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x3c]        ; 005eada8
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005eadac
    ADD ESI,0x20000                     ; 005eadb0
    MOV dword ptr [EAX + 0x18],ESI      ; 005eadb6
    FLD float ptr [EAX + 0x8]           ; 005eadb9
    FDIV float ptr [EDI + 0x160]        ; 005eadbc
    FLD1                                ; 005eadc2
    FSUBRP                              ; 005eadc4
    FMUL ST4                            ; 005eadc6
    FMUL ST3                            ; 005eadc8
    FLD float ptr [ESP + 0x28]          ; 005eadca
    ADD EAX,0x20                        ; 005eadce
    INC EDX                             ; 005eadd1
    INC ECX                             ; 005eadd2
    FXCH                                ; 005eadd3
    CALL crt_math.c_round_FUN_005fe6b0  ; 005eadd5
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x3c]        ; 005eadda
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005eadde
    FADD ST0,ST1                        ; 005eade2
    ADD ESI,0x20000                     ; 005eade4
    FSTP float ptr [ESP + 0x28]         ; 005eadea
    MOV dword ptr [EAX + -0x4],ESI      ; 005eadee
    CMP ECX,EBX                         ; 005eadf1
    JL 0x005ead7d                       ; 005eadf3
        ;   XREF to: 005ead7d (CONDITIONAL_JUMP)  ; LAB_005ead7d
    FSTP ST0                            ; 005eadf5
    FSTP ST0                            ; 005eadf7
    FSTP ST0                            ; 005eadf9
    FSTP ST0                            ; 005eadfb
    FLD float ptr [ESP + 0x1c]          ; 005eadfd
        ;   Label: LAB_005eadfd
    MOV ECX,dword ptr [ESP + 0x38]      ; 005eae01
    MOV ESI,dword ptr [ESP + 0x14]      ; 005eae05
    FADD float ptr [ESP + 0x10]         ; 005eae09
    INC ECX                             ; 005eae0d
    FSTP float ptr [ESP + 0x1c]         ; 005eae0e
    MOV dword ptr [ESP + 0x38],ECX      ; 005eae12
    CMP ECX,ESI                         ; 005eae16
    JL 0x005ead40                       ; 005eae18
        ;   XREF to: 005ead40 (CONDITIONAL_JUMP)  ; LAB_005ead40
    LEA ECX,[EDI + 0x7fa8]              ; 005eae1e
        ;   Label: LAB_005eae1e
    XOR EAX,EAX                         ; 005eae24
    MOV EDX,dword ptr [EDI + 0x7fa4]    ; 005eae26
    MOV dword ptr [ESP + 0x20],EAX      ; 005eae2c
    TEST EDX,EDX                        ; 005eae30
    JLE 0x005eaf7d                      ; 005eae32
        ;   XREF to: 005eaf7d (CONDITIONAL_JUMP)  ; LAB_005eaf7d
    MOV EBX,dword ptr [EDI + 0x7fa0]    ; 005eae38
        ;   Label: LAB_005eae38
    XOR ESI,ESI                         ; 005eae3e
    TEST EBX,EBX                        ; 005eae40
    JLE 0x005eaf66                      ; 005eae42
        ;   XREF to: 005eaf66 (CONDITIONAL_JUMP)  ; LAB_005eaf66
    MOV EAX,dword ptr [ESP + 0x20]      ; 005eae48
    MOV EDX,EAX                         ; 005eae4c
    MOV EBX,0x4                         ; 005eae4e
    SAR EDX,0x1f                        ; 005eae53
    IDIV EBX                            ; 005eae56
    MOV EAX,EDX                         ; 005eae58
    INC EDX                             ; 005eae5a
    SHL EAX,0x16                        ; 005eae5b
    SHL EDX,0x16                        ; 005eae5e
    MOV dword ptr [ESP + 0x24],EAX      ; 005eae61
    MOV dword ptr [ESP + 0x2c],EDX      ; 005eae65
    MOV dword ptr [ECX + 0x4],0x3       ; 005eae69
        ;   Label: LAB_005eae69
    MOV dword ptr [ECX + 0x14],0x0      ; 005eae70
    MOV EAX,dword ptr [ECX + 0x14]      ; 005eae77
    MOV dword ptr [ECX + 0x10],EAX      ; 005eae7a
    MOV dword ptr [ECX + 0xc],EAX       ; 005eae7d
    MOV dword ptr [ECX + 0x8],EAX       ; 005eae80
    MOV EBX,dword ptr [EDI + 0x7fa0]    ; 005eae83
    MOV EAX,dword ptr [ESP + 0x20]      ; 005eae89
    INC EBX                             ; 005eae8d
    IMUL EBX,EAX                        ; 005eae8e
    MOV EDX,ESI                         ; 005eae91
    MOV dword ptr [ESP + 0x3c],0x4      ; 005eae93
    SAR EDX,0x1f                        ; 005eae9b
    MOV EAX,ESI                         ; 005eae9e
    IDIV dword ptr [ESP + 0x3c]         ; 005eaea0
    ADD EBX,ESI                         ; 005eaea4
    MOV dword ptr [ECX + 0x30],EBX      ; 005eaea6
    MOV dword ptr [ESP + 0x3c],EDX      ; 005eaea9
    MOV EAX,EDX                         ; 005eaead
    MOV EDX,dword ptr [ESP + 0x24]      ; 005eaeaf
    INC EBX                             ; 005eaeb3
    MOV dword ptr [ECX + 0x38],EDX      ; 005eaeb4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005eaeb7
    MOV dword ptr [ECX + 0x24],EBX      ; 005eaebb
    INC EDX                             ; 005eaebe
    SHL EAX,0x16                        ; 005eaebf
    SHL EDX,0x16                        ; 005eaec2
    MOV dword ptr [ECX + 0x34],EAX      ; 005eaec5
    MOV dword ptr [ESP + 0x3c],EDX      ; 005eaec8
    MOV dword ptr [ECX + 0x28],EDX      ; 005eaecc
    MOV EDX,dword ptr [ESP + 0x24]      ; 005eaecf
    MOV dword ptr [ECX + 0x2c],EDX      ; 005eaed3
    MOV EDX,dword ptr [EDI + 0x7fa0]    ; 005eaed6
    INC EDX                             ; 005eaedc
    ADD EBX,EDX                         ; 005eaedd
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005eaedf
    MOV dword ptr [ECX + 0x18],EBX      ; 005eaee3
    MOV dword ptr [ECX + 0x1c],EDX      ; 005eaee6
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005eaee9
    MOV dword ptr [ECX + 0x20],EDX      ; 005eaeed
    MOV dword ptr [ECX + 0x4c],0x3      ; 005eaef0
    MOV dword ptr [ECX + 0x5c],0x0      ; 005eaef7
    MOV EDX,dword ptr [ECX + 0x5c]      ; 005eaefe
    MOV dword ptr [ECX + 0x58],EDX      ; 005eaf01
    MOV dword ptr [ECX + 0x54],EDX      ; 005eaf04
    MOV dword ptr [ECX + 0x50],EDX      ; 005eaf07
    MOV EDX,dword ptr [EDI + 0x7fa0]    ; 005eaf0a
    MOV EBX,dword ptr [ESP + 0x20]      ; 005eaf10
    INC EDX                             ; 005eaf14
    IMUL EDX,EBX                        ; 005eaf15
    MOV dword ptr [ECX + 0x7c],EAX      ; 005eaf18
    LEA EBX,[ESI + EDX*0x1]             ; 005eaf1b
    MOV EDX,dword ptr [ESP + 0x24]      ; 005eaf1e
    MOV dword ptr [ECX + 0x78],EBX      ; 005eaf22
    MOV dword ptr [ECX + 0x80],EDX      ; 005eaf25
    MOV EDX,dword ptr [EDI + 0x7fa0]    ; 005eaf2b
    ADD ECX,0x48                        ; 005eaf31
    ADD EDX,0x2                         ; 005eaf34
    MOV dword ptr [ECX + 0x1c],EAX      ; 005eaf37
    ADD EBX,EDX                         ; 005eaf3a
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005eaf3c
    MOV dword ptr [ECX + 0x24],EBX      ; 005eaf40
    DEC EBX                             ; 005eaf43
    MOV dword ptr [ECX + 0x28],EDX      ; 005eaf44
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005eaf47
    MOV dword ptr [ECX + 0x18],EBX      ; 005eaf4b
    MOV dword ptr [ECX + 0x2c],EDX      ; 005eaf4e
    MOV dword ptr [ECX + 0x20],EDX      ; 005eaf51
    INC ESI                             ; 005eaf54
    MOV EBX,dword ptr [EDI + 0x7fa0]    ; 005eaf55
    ADD ECX,0x48                        ; 005eaf5b
    CMP ESI,EBX                         ; 005eaf5e
    JL 0x005eae69                       ; 005eaf60
        ;   XREF to: 005eae69 (CONDITIONAL_JUMP)  ; LAB_005eae69
    MOV EAX,dword ptr [ESP + 0x20]      ; 005eaf66
        ;   Label: LAB_005eaf66
    INC EAX                             ; 005eaf6a
    MOV EDX,dword ptr [EDI + 0x7fa4]    ; 005eaf6b
    MOV dword ptr [ESP + 0x20],EAX      ; 005eaf71
    CMP EAX,EDX                         ; 005eaf75
    JL 0x005eae38                       ; 005eaf77
        ;   XREF to: 005eae38 (CONDITIONAL_JUMP)  ; LAB_005eae38
    MOV ECX,dword ptr [EDI + 0x7fa4]    ; 005eaf7d
        ;   Label: LAB_005eaf7d
    MOV EAX,dword ptr [EDI + 0x7fa0]    ; 005eaf83
    IMUL EAX,ECX                        ; 005eaf89
    ADD EAX,EAX                         ; 005eaf8c
    MOV dword ptr [EDI + 0x2b234],EAX   ; 005eaf8e
    JMP 0x005eacc0                      ; 005eaf94
        ;   XREF to: 005eacc0 (UNCONDITIONAL_JUMP)  ; LAB_005eacc0


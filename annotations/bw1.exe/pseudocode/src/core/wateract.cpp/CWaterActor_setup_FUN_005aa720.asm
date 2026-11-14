; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_wateract_cpp_CWaterActor_setup_FUN_005aa720(CWaterActor *this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f928a
;   undefined4 DAT_005f9292
;   undefined4 DAT_005f929a
;   undefined4 DAT_005f92a2
;   undefined4 DAT_005f92aa
;   undefined4 DAT_005f92b2
;   undefined4 DAT_005f92ba
;   undefined4 DAT_005f92c2
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_wateract.cpp_FUN_005aacd0
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa720
        ;   Label: core_wateract.cpp_CWaterActor_setup_FUN_005aa720
    PUSH ESI                            ; 005aa721
    PUSH EDI                            ; 005aa722
    PUSH EBP                            ; 005aa723
    MOV EBP,ESP                         ; 005aa724
    SUB ESP,0x40                        ; 005aa726
    AND ESP,0xfffffff8                  ; 005aa729
    MOV EDI,dword ptr [EBP + 0x14]      ; 005aa72c
    PUSH EDI                            ; 005aa72f
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 005aa730
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    FLD float ptr [EDI + 0x168]         ; 005aa735
    FMUL float ptr [EDI + 0x27c]        ; 005aa73b
    ADD ESP,0x4                         ; 005aa741
    FSUBR float ptr [EDI + 0x24]        ; 005aa744
    MOV EDX,dword ptr [EDI + 0x288]     ; 005aa747
    FSTP float ptr [EDI + 0x2b230]      ; 005aa74d
    TEST EDX,EDX                        ; 005aa753
    JNZ 0x005aa7db                      ; 005aa755
        ;   XREF to: 005aa7db (CONDITIONAL_JUMP)  ; LAB_005aa7db
    FLD1                                ; 005aa75b
        ;   Label: LAB_005aa75b
    FLD float ptr [EDI + 0x160]         ; 005aa75d
    FXCH                                ; 005aa763
    FDIV float ptr [EDI + 0x284]        ; 005aa765
    FXCH                                ; 005aa76b
    FMUL ST1                            ; 005aa76d
    FLD float ptr [EDI + 0x158]         ; 005aa76f
    FMULP ST2                           ; 005aa775
    CALL crt_math.c_round_FUN_005c03a0  ; 005aa777
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xc]         ; 005aa77c
    MOV EAX,dword ptr [ESP + 0xc]       ; 005aa780
    CALL crt_math.c_round_FUN_005c03a0  ; 005aa784
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    INC EAX                             ; 005aa789
    FISTP dword ptr [ESP + 0x3c]        ; 005aa78a
    MOV dword ptr [ESP + 0x14],EAX      ; 005aa78e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005aa792
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005aa796
    MOV dword ptr [EDI + 0x7fa0],EAX    ; 005aa79a
    MOV EAX,dword ptr [ESP + 0xc]       ; 005aa7a0
    INC EBX                             ; 005aa7a4
    MOV dword ptr [EDI + 0x7fa4],EAX    ; 005aa7a5
    MOV EAX,dword ptr [ESP + 0x14]      ; 005aa7ab
    IMUL EAX,EBX                        ; 005aa7af
    MOV dword ptr [EDI + 0x298],EAX     ; 005aa7b2
    CMP EAX,0x3e8                       ; 005aa7b8
    JLE 0x005aaa14                      ; 005aa7bd
        ;   XREF to: 005aaa14 (CONDITIONAL_JUMP)  ; LAB_005aaa14
    FLD float ptr [EDI + 0x284]         ; 005aa7c3
    FLD ST0                             ; 005aa7c9
    FMUL double ptr [0x005f9292]        ; 005aa7cb | DAT_005f9292
    FSTP ST1                            ; 005aa7d1
    FSTP float ptr [EDI + 0x284]        ; 005aa7d3
    JMP 0x005aa75b                      ; 005aa7d9
        ;   XREF to: 005aa75b (UNCONDITIONAL_JUMP)  ; LAB_005aa75b
    MOV dword ptr [EDI + 0x2b234],0x20  ; 005aa7db
        ;   Label: LAB_005aa7db
    MOV dword ptr [EDI + 0x298],0x0     ; 005aa7e5
    MOV ECX,dword ptr [EDI + 0x2b234]   ; 005aa7ef
    XOR EDX,EDX                         ; 005aa7f5
    TEST ECX,ECX                        ; 005aa7f7
    JLE 0x005aa907                      ; 005aa7f9
        ;   XREF to: 005aa907 (CONDITIONAL_JUMP)  ; LAB_005aa907
    FLD double ptr [0x005f92c2]         ; 005aa7ff | DAT_005f92c2
    FLD double ptr [0x005f92b2]         ; 005aa805 | DAT_005f92b2
    FLD double ptr [0x005f92aa]         ; 005aa80b | DAT_005f92aa
    MOV dword ptr [ESP + 0x3c],EDX      ; 005aa811
        ;   Label: LAB_005aa811
    FILD dword ptr [EDI + 0x2b234]      ; 005aa815
    FILD dword ptr [ESP + 0x3c]         ; 005aa81b
    FDIVRP                              ; 005aa81f
    FMUL float ptr [0x005f929a]         ; 005aa821 | DAT_005f929a
    FMUL double ptr [0x005f9292]        ; 005aa827 | DAT_005f9292
    FLD float ptr [EDI + 0x158]         ; 005aa82d
    FLD ST1                             ; 005aa833
    FCOS                                ; 005aa835
    FXCH ST2                            ; 005aa837
    FSIN                                ; 005aa839
    FXCH ST2                            ; 005aa83b
    FMULP                               ; 005aa83d
    MOV EAX,dword ptr [EDI + 0x298]     ; 005aa83f
    FMUL double ptr [0x005f92a2]        ; 005aa845 | DAT_005f92a2
    SHL EAX,0x5                         ; 005aa84b
    FSTP float ptr [EDI + EAX*0x1 + 0x29c] ; 005aa84e
    MOV EAX,dword ptr [EDI + 0x298]     ; 005aa855
    SHL EAX,0x5                         ; 005aa85b
    MOV dword ptr [EDI + EAX*0x1 + 0x2a0],0x0 ; 005aa85e
    FMUL float ptr [EDI + 0x160]        ; 005aa869
    MOV EAX,dword ptr [EDI + 0x298]     ; 005aa86f
    FMUL double ptr [0x005f92a2]        ; 005aa875 | DAT_005f92a2
    SHL EAX,0x5                         ; 005aa87b
    FSTP float ptr [EDI + EAX*0x1 + 0x2a4] ; 005aa87e
    MOV ECX,dword ptr [EDI + 0x298]     ; 005aa885
    SHL ECX,0x5                         ; 005aa88b
    FLD float ptr [ECX + EDI*0x1 + 0x29c] ; 005aa88e
    FDIV float ptr [EDI + 0x158]        ; 005aa895
    FMUL ST1                            ; 005aa89b
    FMUL ST2                            ; 005aa89d
    FADD ST0,ST3                        ; 005aa89f
    CALL crt_math.c_round_FUN_005c03a0  ; 005aa8a1
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xc]         ; 005aa8a6
    MOV EAX,dword ptr [ESP + 0xc]       ; 005aa8aa
    MOV dword ptr [ECX + EDI*0x1 + 0x2b4],EAX ; 005aa8ae
    MOV ECX,dword ptr [EDI + 0x298]     ; 005aa8b5
    SHL ECX,0x5                         ; 005aa8bb
    FLD float ptr [ECX + EDI*0x1 + 0x2a4] ; 005aa8be
    FDIV float ptr [EDI + 0x160]        ; 005aa8c5
    FMUL ST1                            ; 005aa8cb
    FMUL ST2                            ; 005aa8cd
    FADD ST0,ST3                        ; 005aa8cf
    CALL crt_math.c_round_FUN_005c03a0  ; 005aa8d1
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x3c]        ; 005aa8d6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005aa8da
    MOV dword ptr [ECX + EDI*0x1 + 0x2b8],EAX ; 005aa8de
    MOV EBX,dword ptr [EDI + 0x298]     ; 005aa8e5
    INC EDX                             ; 005aa8eb
    INC EBX                             ; 005aa8ec
    MOV ESI,dword ptr [EDI + 0x2b234]   ; 005aa8ed
    MOV dword ptr [EDI + 0x298],EBX     ; 005aa8f3
    CMP EDX,ESI                         ; 005aa8f9
    JL 0x005aa811                       ; 005aa8fb
        ;   XREF to: 005aa811 (CONDITIONAL_JUMP)  ; LAB_005aa811
    FSTP ST0                            ; 005aa901
    FSTP ST0                            ; 005aa903
    FSTP ST0                            ; 005aa905
    MOV EDX,dword ptr [EDI + 0x298]     ; 005aa907
        ;   Label: LAB_005aa907
    LEA EAX,[EDI + 0x29c]               ; 005aa90d
    SHL EDX,0x5                         ; 005aa913
    MOV dword ptr [EDX + EAX*0x1 + 0x8],0x0 ; 005aa916
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x8] ; 005aa91e
    MOV dword ptr [EDX + EAX*0x1 + 0x4],ECX ; 005aa922
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x4] ; 005aa926
    MOV dword ptr [EDX + EAX*0x1],ECX   ; 005aa92a
    MOV EDX,dword ptr [EDI + 0x298]     ; 005aa92d
    MOV ECX,dword ptr [EDI + 0x2b234]   ; 005aa933
    XOR EAX,EAX                         ; 005aa939
    INC EDX                             ; 005aa93b
    MOV dword ptr [ESP + 0x34],EAX      ; 005aa93c
    MOV dword ptr [EDI + 0x298],EDX     ; 005aa940
    TEST ECX,ECX                        ; 005aa946
    JLE 0x005aa9f0                      ; 005aa948
        ;   XREF to: 005aa9f0 (CONDITIONAL_JUMP)  ; LAB_005aa9f0
    LEA ECX,[EDI + 0x7fa8]              ; 005aa94e
    MOV ESI,EDI                         ; 005aa954
    MOV dword ptr [ECX + 0x4],0x3       ; 005aa956
        ;   Label: LAB_005aa956
    MOV dword ptr [ECX + 0x14],0x0      ; 005aa95d
    MOV EAX,dword ptr [ECX + 0x14]      ; 005aa964
    MOV dword ptr [ECX + 0x10],EAX      ; 005aa967
    MOV dword ptr [ECX + 0xc],EAX       ; 005aa96a
    MOV EBX,dword ptr [ESP + 0x34]      ; 005aa96d
    MOV dword ptr [ECX + 0x8],EAX       ; 005aa971
    INC EBX                             ; 005aa974
    MOV EAX,dword ptr [EDI + 0x2b234]   ; 005aa975
    MOV dword ptr [ECX + 0x1c],0x0      ; 005aa97b
    MOV EDX,EBX                         ; 005aa982
    MOV dword ptr [ECX + 0x20],0x0      ; 005aa984
    SAR EDX,0x1f                        ; 005aa98b
    MOV dword ptr [ECX + 0x18],EAX      ; 005aa98e
    MOV EAX,EBX                         ; 005aa991
    IDIV dword ptr [EDI + 0x2b234]      ; 005aa993
    MOV EAX,dword ptr [ESP + 0x34]      ; 005aa999
    MOV dword ptr [ECX + 0x24],EAX      ; 005aa99d
    MOV EAX,dword ptr [ESI + 0x2b4]     ; 005aa9a0
    MOV dword ptr [ECX + 0x28],EAX      ; 005aa9a6
    MOV EAX,dword ptr [ESI + 0x2b8]     ; 005aa9a9
    MOV dword ptr [ECX + 0x30],EDX      ; 005aa9af
    SHL EDX,0x5                         ; 005aa9b2
    MOV dword ptr [ECX + 0x2c],EAX      ; 005aa9b5
    LEA EAX,[EDI + EDX*0x1]             ; 005aa9b8
    MOV EDX,dword ptr [EAX + 0x2b4]     ; 005aa9bb
    MOV dword ptr [ECX + 0x34],EDX      ; 005aa9c1
    MOV EAX,dword ptr [EAX + 0x2b8]     ; 005aa9c4
    ADD ESI,0x20                        ; 005aa9ca
    MOV dword ptr [ECX + 0x38],EAX      ; 005aa9cd
    ADD ECX,0x48                        ; 005aa9d0
    MOV EAX,dword ptr [EDI + 0x2b234]   ; 005aa9d3
    MOV dword ptr [ESP + 0x34],EBX      ; 005aa9d9
    CMP EBX,EAX                         ; 005aa9dd
    JL 0x005aa956                       ; 005aa9df
        ;   XREF to: 005aa956 (CONDITIONAL_JUMP)  ; LAB_005aa956
    LEA EAX,[EAX]                       ; 005aa9e5
    LEA EDX,[EDX]                       ; 005aa9eb
    MOV EBX,EBX                         ; 005aa9ee
    PUSH EDI                            ; 005aa9f0
        ;   Label: LAB_005aa9f0
    CALL core_wateract.cpp_FUN_005aacd0 ; 005aa9f1
        ;   XREF to: 005aacd0 (UNCONDITIONAL_CALL)  ; undefined core_wateract.cpp_FUN_005aacd0()
    MOV dword ptr [EDI + 0x2b228],0x0   ; 005aa9f6
    ADD ESP,0x4                         ; 005aaa00
    MOV dword ptr [EDI + 0x2b22c],0x0   ; 005aaa03
    MOV ESP,EBP                         ; 005aaa0d
    POP EBP                             ; 005aaa0f
    POP EDI                             ; 005aaa10
    POP ESI                             ; 005aaa11
    POP EBX                             ; 005aaa12
    RET                                 ; 005aaa13
    LEA EAX,[EBX + -0x1]                ; 005aaa14
        ;   Label: LAB_005aaa14
    MOV dword ptr [ESP + 0x3c],EAX      ; 005aaa17
    FILD dword ptr [ESP + 0x3c]         ; 005aaa1b
    FDIVR float ptr [EDI + 0x158]       ; 005aaa1f
    MOV EAX,dword ptr [ESP + 0x14]      ; 005aaa25
    DEC EAX                             ; 005aaa29
    MOV dword ptr [ESP + 0x3c],EAX      ; 005aaa2a
    FILD dword ptr [ESP + 0x3c]         ; 005aaa2e
    FDIVR float ptr [EDI + 0x160]       ; 005aaa32
    FLD float ptr [EDI + 0x160]         ; 005aaa38
    FCHS                                ; 005aaa3e
    FMUL double ptr [0x005f928a]        ; 005aaa40 | DAT_005f928a
    XOR EDX,EDX                         ; 005aaa46
    MOV ECX,dword ptr [ESP + 0x14]      ; 005aaa48
    MOV dword ptr [ESP + 0x38],EDX      ; 005aaa4c
    FSTP float ptr [ESP + 0x1c]         ; 005aaa50
    FXCH                                ; 005aaa54
    FSTP float ptr [ESP + 0x18]         ; 005aaa56
    FSTP float ptr [ESP + 0x10]         ; 005aaa5a
    TEST ECX,ECX                        ; 005aaa5e
    JLE 0x005aab4e                      ; 005aaa60
        ;   XREF to: 005aab4e (CONDITIONAL_JUMP)  ; LAB_005aab4e
    LEA EAX,[EDI + 0x29c]               ; 005aaa66
    MOV dword ptr [ESP + 0x30],EAX      ; 005aaa6c
    FLD float ptr [EDI + 0x158]         ; 005aaa70
        ;   Label: LAB_005aaa70
    FCHS                                ; 005aaa76
    FMUL double ptr [0x005f928a]        ; 005aaa78 | DAT_005f928a
    XOR ECX,ECX                         ; 005aaa7e
    FSTP float ptr [ESP + 0x28]         ; 005aaa80
    TEST EBX,EBX                        ; 005aaa84
    JLE 0x005aab2d                      ; 005aaa86
        ;   XREF to: 005aab2d (CONDITIONAL_JUMP)  ; LAB_005aab2d
    FLD double ptr [0x005f92ba]         ; 005aaa8c | DAT_005f92ba
    MOV ESI,dword ptr [ESP + 0x30]      ; 005aaa92
    FLD double ptr [0x005f92b2]         ; 005aaa96 | DAT_005f92b2
    MOV EAX,EDX                         ; 005aaa9c
    FLD double ptr [0x005f928a]         ; 005aaa9e | DAT_005f928a
    SHL EAX,0x5                         ; 005aaaa4
    FLD float ptr [ESP + 0x18]          ; 005aaaa7
    ADD EAX,ESI                         ; 005aaaab
    MOV ESI,dword ptr [ESP + 0x28]      ; 005aaaad
        ;   Label: LAB_005aaaad
    MOV dword ptr [EAX + 0x4],0x0       ; 005aaab1
    MOV dword ptr [EAX],ESI             ; 005aaab8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005aaaba
    MOV dword ptr [EAX + 0x8],ESI       ; 005aaabe
    FLD float ptr [EDI + 0x158]         ; 005aaac1
    FLD ST0                             ; 005aaac7
    FMUL ST3                            ; 005aaac9
    FADD float ptr [EAX]                ; 005aaacb
    FDIVRP                              ; 005aaacd
    FMUL ST4                            ; 005aaacf
    FMUL ST3                            ; 005aaad1
    CALL crt_math.c_round_FUN_005c03a0  ; 005aaad3
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x3c]        ; 005aaad8
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005aaadc
    ADD ESI,0x20000                     ; 005aaae0
    MOV dword ptr [EAX + 0x18],ESI      ; 005aaae6
    FLD float ptr [EAX + 0x8]           ; 005aaae9
    FDIV float ptr [EDI + 0x160]        ; 005aaaec
    FLD1                                ; 005aaaf2
    FSUBRP                              ; 005aaaf4
    FMUL ST4                            ; 005aaaf6
    FMUL ST3                            ; 005aaaf8
    FLD float ptr [ESP + 0x28]          ; 005aaafa
    ADD EAX,0x20                        ; 005aaafe
    INC EDX                             ; 005aab01
    INC ECX                             ; 005aab02
    FXCH                                ; 005aab03
    CALL crt_math.c_round_FUN_005c03a0  ; 005aab05
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x3c]        ; 005aab0a
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005aab0e
    FADD ST0,ST1                        ; 005aab12
    ADD ESI,0x20000                     ; 005aab14
    FSTP float ptr [ESP + 0x28]         ; 005aab1a
    MOV dword ptr [EAX + -0x4],ESI      ; 005aab1e
    CMP ECX,EBX                         ; 005aab21
    JL 0x005aaaad                       ; 005aab23
        ;   XREF to: 005aaaad (CONDITIONAL_JUMP)  ; LAB_005aaaad
    FSTP ST0                            ; 005aab25
    FSTP ST0                            ; 005aab27
    FSTP ST0                            ; 005aab29
    FSTP ST0                            ; 005aab2b
    FLD float ptr [ESP + 0x1c]          ; 005aab2d
        ;   Label: LAB_005aab2d
    MOV ECX,dword ptr [ESP + 0x38]      ; 005aab31
    MOV ESI,dword ptr [ESP + 0x14]      ; 005aab35
    FADD float ptr [ESP + 0x10]         ; 005aab39
    INC ECX                             ; 005aab3d
    FSTP float ptr [ESP + 0x1c]         ; 005aab3e
    MOV dword ptr [ESP + 0x38],ECX      ; 005aab42
    CMP ECX,ESI                         ; 005aab46
    JL 0x005aaa70                       ; 005aab48
        ;   XREF to: 005aaa70 (CONDITIONAL_JUMP)  ; LAB_005aaa70
    LEA ECX,[EDI + 0x7fa8]              ; 005aab4e
        ;   Label: LAB_005aab4e
    XOR EAX,EAX                         ; 005aab54
    MOV EDX,dword ptr [EDI + 0x7fa4]    ; 005aab56
    MOV dword ptr [ESP + 0x20],EAX      ; 005aab5c
    TEST EDX,EDX                        ; 005aab60
    JLE 0x005aacad                      ; 005aab62
        ;   XREF to: 005aacad (CONDITIONAL_JUMP)  ; LAB_005aacad
    MOV EBX,dword ptr [EDI + 0x7fa0]    ; 005aab68
        ;   Label: LAB_005aab68
    XOR ESI,ESI                         ; 005aab6e
    TEST EBX,EBX                        ; 005aab70
    JLE 0x005aac96                      ; 005aab72
        ;   XREF to: 005aac96 (CONDITIONAL_JUMP)  ; LAB_005aac96
    MOV EAX,dword ptr [ESP + 0x20]      ; 005aab78
    MOV EDX,EAX                         ; 005aab7c
    MOV EBX,0x4                         ; 005aab7e
    SAR EDX,0x1f                        ; 005aab83
    IDIV EBX                            ; 005aab86
    MOV EAX,EDX                         ; 005aab88
    INC EDX                             ; 005aab8a
    SHL EAX,0x16                        ; 005aab8b
    SHL EDX,0x16                        ; 005aab8e
    MOV dword ptr [ESP + 0x24],EAX      ; 005aab91
    MOV dword ptr [ESP + 0x2c],EDX      ; 005aab95
    MOV dword ptr [ECX + 0x4],0x3       ; 005aab99
        ;   Label: LAB_005aab99
    MOV dword ptr [ECX + 0x14],0x0      ; 005aaba0
    MOV EAX,dword ptr [ECX + 0x14]      ; 005aaba7
    MOV dword ptr [ECX + 0x10],EAX      ; 005aabaa
    MOV dword ptr [ECX + 0xc],EAX       ; 005aabad
    MOV dword ptr [ECX + 0x8],EAX       ; 005aabb0
    MOV EBX,dword ptr [EDI + 0x7fa0]    ; 005aabb3
    MOV EAX,dword ptr [ESP + 0x20]      ; 005aabb9
    INC EBX                             ; 005aabbd
    IMUL EBX,EAX                        ; 005aabbe
    MOV EDX,ESI                         ; 005aabc1
    MOV dword ptr [ESP + 0x3c],0x4      ; 005aabc3
    SAR EDX,0x1f                        ; 005aabcb
    MOV EAX,ESI                         ; 005aabce
    IDIV dword ptr [ESP + 0x3c]         ; 005aabd0
    ADD EBX,ESI                         ; 005aabd4
    MOV dword ptr [ECX + 0x30],EBX      ; 005aabd6
    MOV dword ptr [ESP + 0x3c],EDX      ; 005aabd9
    MOV EAX,EDX                         ; 005aabdd
    MOV EDX,dword ptr [ESP + 0x24]      ; 005aabdf
    INC EBX                             ; 005aabe3
    MOV dword ptr [ECX + 0x38],EDX      ; 005aabe4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005aabe7
    MOV dword ptr [ECX + 0x24],EBX      ; 005aabeb
    INC EDX                             ; 005aabee
    SHL EAX,0x16                        ; 005aabef
    SHL EDX,0x16                        ; 005aabf2
    MOV dword ptr [ECX + 0x34],EAX      ; 005aabf5
    MOV dword ptr [ESP + 0x3c],EDX      ; 005aabf8
    MOV dword ptr [ECX + 0x28],EDX      ; 005aabfc
    MOV EDX,dword ptr [ESP + 0x24]      ; 005aabff
    MOV dword ptr [ECX + 0x2c],EDX      ; 005aac03
    MOV EDX,dword ptr [EDI + 0x7fa0]    ; 005aac06
    INC EDX                             ; 005aac0c
    ADD EBX,EDX                         ; 005aac0d
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005aac0f
    MOV dword ptr [ECX + 0x18],EBX      ; 005aac13
    MOV dword ptr [ECX + 0x1c],EDX      ; 005aac16
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005aac19
    MOV dword ptr [ECX + 0x20],EDX      ; 005aac1d
    MOV dword ptr [ECX + 0x4c],0x3      ; 005aac20
    MOV dword ptr [ECX + 0x5c],0x0      ; 005aac27
    MOV EDX,dword ptr [ECX + 0x5c]      ; 005aac2e
    MOV dword ptr [ECX + 0x58],EDX      ; 005aac31
    MOV dword ptr [ECX + 0x54],EDX      ; 005aac34
    MOV dword ptr [ECX + 0x50],EDX      ; 005aac37
    MOV EDX,dword ptr [EDI + 0x7fa0]    ; 005aac3a
    MOV EBX,dword ptr [ESP + 0x20]      ; 005aac40
    INC EDX                             ; 005aac44
    IMUL EDX,EBX                        ; 005aac45
    MOV dword ptr [ECX + 0x7c],EAX      ; 005aac48
    LEA EBX,[ESI + EDX*0x1]             ; 005aac4b
    MOV EDX,dword ptr [ESP + 0x24]      ; 005aac4e
    MOV dword ptr [ECX + 0x78],EBX      ; 005aac52
    MOV dword ptr [ECX + 0x80],EDX      ; 005aac55
    MOV EDX,dword ptr [EDI + 0x7fa0]    ; 005aac5b
    ADD ECX,0x48                        ; 005aac61
    ADD EDX,0x2                         ; 005aac64
    MOV dword ptr [ECX + 0x1c],EAX      ; 005aac67
    ADD EBX,EDX                         ; 005aac6a
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005aac6c
    MOV dword ptr [ECX + 0x24],EBX      ; 005aac70
    DEC EBX                             ; 005aac73
    MOV dword ptr [ECX + 0x28],EDX      ; 005aac74
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005aac77
    MOV dword ptr [ECX + 0x18],EBX      ; 005aac7b
    MOV dword ptr [ECX + 0x2c],EDX      ; 005aac7e
    MOV dword ptr [ECX + 0x20],EDX      ; 005aac81
    INC ESI                             ; 005aac84
    MOV EBX,dword ptr [EDI + 0x7fa0]    ; 005aac85
    ADD ECX,0x48                        ; 005aac8b
    CMP ESI,EBX                         ; 005aac8e
    JL 0x005aab99                       ; 005aac90
        ;   XREF to: 005aab99 (CONDITIONAL_JUMP)  ; LAB_005aab99
    MOV EAX,dword ptr [ESP + 0x20]      ; 005aac96
        ;   Label: LAB_005aac96
    INC EAX                             ; 005aac9a
    MOV EDX,dword ptr [EDI + 0x7fa4]    ; 005aac9b
    MOV dword ptr [ESP + 0x20],EAX      ; 005aaca1
    CMP EAX,EDX                         ; 005aaca5
    JL 0x005aab68                       ; 005aaca7
        ;   XREF to: 005aab68 (CONDITIONAL_JUMP)  ; LAB_005aab68
    MOV ECX,dword ptr [EDI + 0x7fa4]    ; 005aacad
        ;   Label: LAB_005aacad
    MOV EAX,dword ptr [EDI + 0x7fa0]    ; 005aacb3
    IMUL EAX,ECX                        ; 005aacb9
    ADD EAX,EAX                         ; 005aacbc
    MOV dword ptr [EDI + 0x2b234],EAX   ; 005aacbe
    JMP 0x005aa9f0                      ; 005aacc4
        ;   XREF to: 005aa9f0 (UNCONDITIONAL_JUMP)  ; LAB_005aa9f0


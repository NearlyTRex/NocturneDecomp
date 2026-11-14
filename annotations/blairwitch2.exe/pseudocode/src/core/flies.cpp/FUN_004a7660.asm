; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_flies_cpp_FUN_004a7660(int param_1,float *param_2)
;
;
; XREF[2]:
;   core_flies.cpp_CFlies_initFly_FUN_004a7560 at 004a759a
;   core_flies.cpp_CFlies_process_FUN_004a6c30 at 004a6fa3
;
; Referenced Globals:
;   undefined4 DAT_005d6711
;   undefined4 DAT_005d6719
;   undefined4 DAT_005d6721
;   undefined4 DAT_005d6729
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7660
        ;   Label: core_flies.cpp_FUN_004a7660
    PUSH EDI                            ; 004a7661
    PUSH EBP                            ; 004a7662
    MOV EBP,ESP                         ; 004a7663
    SUB ESP,0xd8                        ; 004a7665
    AND ESP,0xfffffff8                  ; 004a766b
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a766e
    MOV dword ptr [ESP + 0xcc],ESI      ; 004a7671
    MOV ESI,dword ptr [EBP + 0x10]      ; 004a7678
    PUSH 0x3f800000                     ; 004a767b
    PUSH 0x0                            ; 004a7680
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004a7682
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004a7687
    FLD float ptr [ESP + 0xdc]          ; 004a768e
    ADD ESP,0x8                         ; 004a7695
    FST float ptr [ESP + 0x28]          ; 004a7698
    FMUL float ptr [ESP + 0x28]         ; 004a769c
    FMUL float ptr [ESI + 0x2b8]        ; 004a76a0
    FSTP float ptr [ESP + 0x28]         ; 004a76a6
    FLD float ptr [ESI + 0x2b4]         ; 004a76aa
    FLD ST0                             ; 004a76b0
    FMUL double ptr [0x005d6711]        ; 004a76b2 | DAT_005d6711
    SUB ESP,0x4                         ; 004a76b8
    FXCH                                ; 004a76bb
    FMUL double ptr [0x005d6719]        ; 004a76bd | DAT_005d6719
    FXCH                                ; 004a76c3
    FSTP float ptr [ESP]                ; 004a76c5
    SUB ESP,0x4                         ; 004a76c8
    FSTP float ptr [ESP]                ; 004a76cb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004a76ce
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004a76d3
    FLD float ptr [ESP + 0xdc]          ; 004a76da
    ADD ESP,0x8                         ; 004a76e1
    FSTP float ptr [ESP + 0x24]         ; 004a76e4
    FLD float ptr [ESI + 0x2bc]         ; 004a76e8
    FLD ST0                             ; 004a76ee
    FMUL double ptr [0x005d6711]        ; 004a76f0 | DAT_005d6711
    SUB ESP,0x4                         ; 004a76f6
    FXCH                                ; 004a76f9
    FMUL double ptr [0x005d6719]        ; 004a76fb | DAT_005d6719
    FXCH                                ; 004a7701
    FSTP float ptr [ESP]                ; 004a7703
    SUB ESP,0x4                         ; 004a7706
    FSTP float ptr [ESP]                ; 004a7709
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004a770c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004a7711
    FLD float ptr [ESP + 0xdc]          ; 004a7718
    ADD ESP,0x8                         ; 004a771f
    FSTP float ptr [ESP + 0x2c]         ; 004a7722
    TEST EBX,EBX                        ; 004a7726
    JZ 0x004a7876                       ; 004a7728
        ;   XREF to: 004a7876 (CONDITIONAL_JUMP)  ; LAB_004a7876
    FLD float ptr [ESP + 0x24]          ; 004a772e
    FLD float ptr [ESP + 0x28]          ; 004a7732
    FLD float ptr [ESP + 0x2c]          ; 004a7736
    LEA EDI,[ESP + 0xb4]                ; 004a773a
    LEA ESI,[ESP + 0x84]                ; 004a7741
    FXCH ST2                            ; 004a7748
    FSUB float ptr [EBX]                ; 004a774a
    FXCH                                ; 004a774c
    FSUB float ptr [EBX + 0x4]          ; 004a774e
    FXCH ST2                            ; 004a7751
    FSUB float ptr [EBX + 0x8]          ; 004a7753
    FXCH                                ; 004a7756
    FSTP float ptr [ESP + 0x84]         ; 004a7758
    FXCH                                ; 004a775f
    FSTP float ptr [ESP + 0x88]         ; 004a7761
    FSTP float ptr [ESP + 0x8c]         ; 004a7768
    MOVSD ES:EDI,ESI                    ; 004a776f
    MOVSD ES:EDI,ESI                    ; 004a7770
    MOVSD ES:EDI,ESI                    ; 004a7771
    FLD float ptr [ESP + 0xb8]          ; 004a7772
    FMUL ST0                            ; 004a7779
    FLD float ptr [ESP + 0xb4]          ; 004a777b
    FMUL ST0                            ; 004a7782
    FADDP                               ; 004a7784
    FLD float ptr [ESP + 0xbc]          ; 004a7786
    FMUL ST0                            ; 004a778d
    FADDP                               ; 004a778f
    FSQRT                               ; 004a7791
    FST float ptr [ESP + 0x8]           ; 004a7793
    FST double ptr [ESP]                ; 004a7797
    FCOMP double ptr [0x005d6721]       ; 004a779a | DAT_005d6721
    FNSTSW AX                           ; 004a77a0
    SAHF                                ; 004a77a2
    JA 0x004a7891                       ; 004a77a3
        ;   XREF to: 004a7891 (CONDITIONAL_JUMP)  ; LAB_004a7891
    FLD1                                ; 004a77a9
    FCOMP double ptr [ESP]              ; 004a77ab
    FNSTSW AX                           ; 004a77ae
    SAHF                                ; 004a77b0
    JBE 0x004a7876                      ; 004a77b1
        ;   XREF to: 004a7876 (CONDITIONAL_JUMP)  ; LAB_004a7876
    FLDZ                                ; 004a77b7
    FCOMP double ptr [ESP]              ; 004a77b9
    FNSTSW AX                           ; 004a77bc
    SAHF                                ; 004a77be
    JNC 0x004a7876                      ; 004a77bf
        ;   XREF to: 004a7876 (CONDITIONAL_JUMP)  ; LAB_004a7876
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004a77c5
    MOV dword ptr [ESP + 0x54],EAX      ; 004a77cc
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004a77d0
    LEA EDI,[ESP + 0x90]                ; 004a77d7
    MOV dword ptr [ESP + 0x58],EAX      ; 004a77de
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004a77e2
    LEA ESI,[ESP + 0x54]                ; 004a77e9
    MOV dword ptr [ESP + 0x5c],EAX      ; 004a77ed
    MOVSD ES:EDI,ESI                    ; 004a77f1
    MOVSD ES:EDI,ESI                    ; 004a77f2
    MOVSD ES:EDI,ESI                    ; 004a77f3
    FLD1                                ; 004a77f4
    FLD float ptr [ESP + 0x90]          ; 004a77f6
    FXCH                                ; 004a77fd
    FDIV float ptr [ESP + 0x8]          ; 004a77ff
    FXCH                                ; 004a7803
    FMUL ST1                            ; 004a7805
    FLD float ptr [ESP + 0x94]          ; 004a7807
    FMUL ST2                            ; 004a780e
    FLD float ptr [ESP + 0x98]          ; 004a7810
    FMULP ST3                           ; 004a7817
    LEA EDI,[ESP + 0x18]                ; 004a7819
    LEA ESI,[ESP + 0x6c]                ; 004a781d
    FXCH                                ; 004a7821
    FSTP float ptr [ESP + 0x6c]         ; 004a7823
    FSTP float ptr [ESP + 0x70]         ; 004a7827
    FSTP float ptr [ESP + 0x74]         ; 004a782b
    MOVSD ES:EDI,ESI                    ; 004a782f
    MOVSD ES:EDI,ESI                    ; 004a7830
    MOVSD ES:EDI,ESI                    ; 004a7831
    LEA EAX,[ESP + 0x24]                ; 004a7832
    FLD float ptr [EBX + 0x4]           ; 004a7836
    FLD float ptr [EBX + 0x8]           ; 004a7839
    FLD float ptr [EBX]                 ; 004a783c
    LEA EDI,[ESP + 0x3c]                ; 004a783e
    LEA ESI,[ESP + 0x78]                ; 004a7842
    LEA EBX,[ESP + 0x3c]                ; 004a7846
    FADD float ptr [ESP + 0x18]         ; 004a784a
    FXCH ST2                            ; 004a784e
    FADD float ptr [ESP + 0x1c]         ; 004a7850
    FXCH                                ; 004a7854
    FADD float ptr [ESP + 0x20]         ; 004a7856
    FXCH ST2                            ; 004a785a
    FSTP float ptr [ESP + 0x78]         ; 004a785c
    FSTP float ptr [ESP + 0x7c]         ; 004a7860
    FSTP float ptr [ESP + 0x80]         ; 004a7864
    MOVSD ES:EDI,ESI                    ; 004a786b
    MOVSD ES:EDI,ESI                    ; 004a786c
    MOVSD ES:EDI,ESI                    ; 004a786d
    CMP EAX,EBX                         ; 004a786e
    JNZ 0x004a7979                      ; 004a7870
        ;   XREF to: 004a7979 (CONDITIONAL_JUMP)  ; LAB_004a7979
    MOV EDI,dword ptr [ESP + 0xcc]      ; 004a7876
        ;   Label: LAB_004a7876
    LEA ESI,[ESP + 0x24]                ; 004a787d
    MOVSD ES:EDI,ESI                    ; 004a7881
    MOVSD ES:EDI,ESI                    ; 004a7882
    MOVSD ES:EDI,ESI                    ; 004a7883
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004a7884
    MOV ESP,EBP                         ; 004a788b
    POP EBP                             ; 004a788d
    POP EDI                             ; 004a788e
    POP EBX                             ; 004a788f
    RET                                 ; 004a7890
    FLD float ptr [0x005d6729]          ; 004a7891 | DAT_005d6729
        ;   Label: LAB_004a7891
    FLD float ptr [ESP + 0xb4]          ; 004a7897
    FMUL ST1                            ; 004a789e
    FLD float ptr [ESP + 0xb8]          ; 004a78a0
    FMUL ST2                            ; 004a78a7
    FLD float ptr [ESP + 0xbc]          ; 004a78a9
    FMULP ST3                           ; 004a78b0
    LEA EDI,[ESP + 0xc]                 ; 004a78b2
    LEA ESI,[ESP + 0x9c]                ; 004a78b6
    FXCH                                ; 004a78bd
    FSTP float ptr [ESP + 0x9c]         ; 004a78bf
    FSTP float ptr [ESP + 0xa0]         ; 004a78c6
    FSTP float ptr [ESP + 0xa4]         ; 004a78cd
    MOVSD ES:EDI,ESI                    ; 004a78d4
    MOVSD ES:EDI,ESI                    ; 004a78d5
    MOVSD ES:EDI,ESI                    ; 004a78d6
    FLD1                                ; 004a78d7
    FLD float ptr [ESP + 0xc]           ; 004a78d9
    FXCH                                ; 004a78dd
    FDIV float ptr [ESP + 0x8]          ; 004a78df
    FXCH                                ; 004a78e3
    FMUL ST1                            ; 004a78e5
    FLD float ptr [ESP + 0x10]          ; 004a78e7
    FMUL ST2                            ; 004a78eb
    FLD float ptr [ESP + 0x14]          ; 004a78ed
    FMULP ST3                           ; 004a78f1
    LEA EDI,[ESP + 0x30]                ; 004a78f3
    LEA ESI,[ESP + 0x60]                ; 004a78f7
    FXCH                                ; 004a78fb
    FSTP float ptr [ESP + 0x60]         ; 004a78fd
    FSTP float ptr [ESP + 0x64]         ; 004a7901
    FSTP float ptr [ESP + 0x68]         ; 004a7905
    MOVSD ES:EDI,ESI                    ; 004a7909
    MOVSD ES:EDI,ESI                    ; 004a790a
    MOVSD ES:EDI,ESI                    ; 004a790b
    LEA EAX,[ESP + 0xa8]                ; 004a790c
    FLD float ptr [EBX + 0x4]           ; 004a7913
    FLD float ptr [EBX + 0x8]           ; 004a7916
    FLD float ptr [EBX]                 ; 004a7919
    LEA EDI,[ESP + 0xa8]                ; 004a791b
    LEA ESI,[ESP + 0x48]                ; 004a7922
    LEA EBX,[ESP + 0x24]                ; 004a7926
    FADD float ptr [ESP + 0x30]         ; 004a792a
    FXCH ST2                            ; 004a792e
    FADD float ptr [ESP + 0x34]         ; 004a7930
    FXCH                                ; 004a7934
    FADD float ptr [ESP + 0x38]         ; 004a7936
    FXCH ST2                            ; 004a793a
    FSTP float ptr [ESP + 0x48]         ; 004a793c
    FSTP float ptr [ESP + 0x4c]         ; 004a7940
    FSTP float ptr [ESP + 0x50]         ; 004a7944
    MOVSD ES:EDI,ESI                    ; 004a7948
    MOVSD ES:EDI,ESI                    ; 004a7949
    MOVSD ES:EDI,ESI                    ; 004a794a
    CMP EBX,EAX                         ; 004a794b
    JZ 0x004a7876                       ; 004a794d
        ;   XREF to: 004a7876 (CONDITIONAL_JUMP)  ; LAB_004a7876
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004a7953
    MOV dword ptr [ESP + 0x24],EAX      ; 004a795a
    MOV EAX,dword ptr [ESP + 0xac]      ; 004a795e
    MOV dword ptr [ESP + 0x28],EAX      ; 004a7965
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004a7969
    MOV dword ptr [ESP + 0x2c],EAX      ; 004a7970
    JMP 0x004a7876                      ; 004a7974
        ;   XREF to: 004a7876 (UNCONDITIONAL_JUMP)  ; LAB_004a7876
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004a7979
        ;   Label: LAB_004a7979
    MOV dword ptr [ESP + 0x24],EAX      ; 004a797d
    MOV EAX,dword ptr [ESP + 0x40]      ; 004a7981
    MOV dword ptr [ESP + 0x28],EAX      ; 004a7985
    MOV EAX,dword ptr [ESP + 0x44]      ; 004a7989
    MOV dword ptr [ESP + 0x2c],EAX      ; 004a798d
    JMP 0x004a7876                      ; 004a7991
        ;   XREF to: 004a7876 (UNCONDITIONAL_JUMP)  ; LAB_004a7876


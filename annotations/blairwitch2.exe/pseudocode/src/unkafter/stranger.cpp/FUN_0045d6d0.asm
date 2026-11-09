; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_stranger_cpp_FUN_0045d6d0(int param_1,int param_2,undefined4 param_3,float *param_4)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0045d6b4 = 0045d6f2
;   undefined4 DAT_005d0807
;   undefined4 DAT_005d080f
;   undefined4 DAT_005d0817
;   undefined4 DAT_005d081f
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_vecdir.cpp_FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d6d0
        ;   Label: unkafter_stranger.cpp_FUN_0045d6d0
    PUSH ESI                            ; 0045d6d1
    PUSH EDI                            ; 0045d6d2
    PUSH EBP                            ; 0045d6d3
    MOV EBP,ESP                         ; 0045d6d4
    SUB ESP,0x12c                       ; 0045d6d6
    AND ESP,0xfffffff8                  ; 0045d6dc
    MOV EBX,dword ptr [EBP + 0x18]      ; 0045d6df
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0045d6e2
    DEC ESI                             ; 0045d6e5
    CMP ESI,0x3                         ; 0045d6e6
    JA 0x0045d702                       ; 0045d6e9
        ;   XREF to: 0045d702 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [ESI*0x4 + 0x45d6b4]  ; 0045d6eb | caseD_1 | caseD_2 | caseD_4
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d6f2
        ;   Label: caseD_1
    CMP dword ptr [EAX + 0x2620],0x0    ; 0045d6f5
    JZ 0x0045da09                       ; 0045d6fc
        ;   XREF to: 0045da09 (CONDITIONAL_JUMP)  ; LAB_0045da09
    XOR ESI,ESI                         ; 0045d702
        ;   Label: default
    MOV EAX,ESI                         ; 0045d704
    MOV ESP,EBP                         ; 0045d706
    POP EBP                             ; 0045d708
    POP EDI                             ; 0045d709
    POP ESI                             ; 0045d70a
    POP EBX                             ; 0045d70b
    RET                                 ; 0045d70c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d70d
        ;   Label: caseD_2
    MOV EDI,dword ptr [EAX + 0x2698]    ; 0045d710
    TEST EDI,EDI                        ; 0045d716
    JNZ 0x0045d702                      ; 0045d718
        ;   XREF to: 0045d702 (CONDITIONAL_JUMP)  ; default
    MOV EDX,0x40400000                  ; 0045d71a
    MOV ECX,0x40000000                  ; 0045d71f
    LEA EAX,[ESP + 0x94]                ; 0045d724
    LEA ESI,[ESP + 0xa0]                ; 0045d72b
    MOV dword ptr [ESP + 0x94],EDI      ; 0045d732
    MOV dword ptr [ESP + 0x98],EDX      ; 0045d739
    MOV dword ptr [ESP + 0x9c],ECX      ; 0045d740
    CMP ESI,EAX                         ; 0045d747
    JZ 0x0045d760                       ; 0045d749
        ;   XREF to: 0045d760 (CONDITIONAL_JUMP)  ; LAB_0045d760
    MOV dword ptr [ESP + 0xa4],EDX      ; 0045d74b
    MOV dword ptr [ESP + 0xa8],ECX      ; 0045d752
    MOV dword ptr [ESP + 0xa0],EDI      ; 0045d759
    LEA EAX,[ESP + 0xa0]                ; 0045d760
        ;   Label: LAB_0045d760
    PUSH EAX                            ; 0045d767
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045d768
    PUSH EDX                            ; 0045d76b
    LEA ESI,[ESP + 0xfc]                ; 0045d76c
    LEA EDI,[ESP + 0x90]                ; 0045d773
    CALL core_actor.cpp_FUN_00408d70    ; 0045d77a
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xfc]                ; 0045d77f
    ADD ESP,0x8                         ; 0045d786
    MOVSD ES:EDI,ESI                    ; 0045d789
    MOVSD ES:EDI,ESI                    ; 0045d78a
    MOVSD ES:EDI,ESI                    ; 0045d78b
    PUSH EBX                            ; 0045d78c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045d78d
    LEA ESI,[ESP + 0x8]                 ; 0045d793
    LEA EDI,[ESP + 0x20]                ; 0045d797
    CALL dword ptr [EAX + 0x24]         ; 0045d79b
    MOV ECX,0x6                         ; 0045d79e
    LEA ESI,[ESP + 0x8]                 ; 0045d7a3
    ADD ESP,0x4                         ; 0045d7a7
    MOVSD.REP ES:EDI,ESI                ; 0045d7aa
    FLD float ptr [ESP + 0x1c]          ; 0045d7ac
    FLD float ptr [ESP + 0x20]          ; 0045d7b0
    LEA ESI,[ESP + 0x1c]                ; 0045d7b4
    FLD float ptr [ESP + 0x24]          ; 0045d7b8
    LEA EDI,[ESP + 0xdc]                ; 0045d7bc
    FXCH ST2                            ; 0045d7c3
    FADD float ptr [ESI + 0xc]          ; 0045d7c5
    FXCH                                ; 0045d7c8
    FADD float ptr [ESI + 0x10]         ; 0045d7ca
    FXCH ST2                            ; 0045d7cd
    FADD float ptr [ESI + 0x14]         ; 0045d7cf
    FXCH                                ; 0045d7d2
    FSTP float ptr [ESP + 0xe8]         ; 0045d7d4
    FXCH                                ; 0045d7db
    FSTP float ptr [ESP + 0xec]         ; 0045d7dd
    LEA ESI,[ESP + 0xe8]                ; 0045d7e4
    FSTP float ptr [ESP + 0xf0]         ; 0045d7eb
    MOVSD ES:EDI,ESI                    ; 0045d7f2
    MOVSD ES:EDI,ESI                    ; 0045d7f3
    MOVSD ES:EDI,ESI                    ; 0045d7f4
    FLD float ptr [0x005d080f]          ; 0045d7f5 | DAT_005d080f
    FLD float ptr [ESP + 0xdc]          ; 0045d7fb
    FMUL ST1                            ; 0045d802
    FLD float ptr [ESP + 0xe0]          ; 0045d804
    FMUL ST2                            ; 0045d80b
    LEA EAX,[ESP + 0x70]                ; 0045d80d
    FLD float ptr [ESP + 0xe4]          ; 0045d811
    FMULP ST3                           ; 0045d818
    PUSH EAX                            ; 0045d81a
    LEA EDI,[ESP + 0x74]                ; 0045d81b
    LEA ESI,[ESP + 0xb0]                ; 0045d81f
    FXCH                                ; 0045d826
    FSTP float ptr [ESP + 0xb0]         ; 0045d828
    FSTP float ptr [ESP + 0xb4]         ; 0045d82f
    FSTP float ptr [ESP + 0xb8]         ; 0045d836
    MOVSD ES:EDI,ESI                    ; 0045d83d
    MOVSD ES:EDI,ESI                    ; 0045d83e
    MOVSD ES:EDI,ESI                    ; 0045d83f
    PUSH EBX                            ; 0045d840
    LEA ESI,[ESP + 0x3c]                ; 0045d841
    LEA EDI,[ESP + 0x120]               ; 0045d845
    CALL core_actor.cpp_FUN_00408d70    ; 0045d84c
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x3c]                ; 0045d851
    ADD ESP,0x8                         ; 0045d855
    MOVSD ES:EDI,ESI                    ; 0045d858
    MOVSD ES:EDI,ESI                    ; 0045d859
    MOVSD ES:EDI,ESI                    ; 0045d85a
    FLD float ptr [ESP + 0x118]         ; 0045d85b
    FLD float ptr [ESP + 0x11c]         ; 0045d862
    FLD float ptr [ESP + 0x120]         ; 0045d869
    LEA EDI,[ESP + 0x58]                ; 0045d870
    LEA ESI,[ESP + 0x64]                ; 0045d874
    FXCH ST2                            ; 0045d878
    FSUB float ptr [ESP + 0x88]         ; 0045d87a
    FXCH                                ; 0045d881
    FSUB float ptr [ESP + 0x8c]         ; 0045d883
    FXCH ST2                            ; 0045d88a
    FSUB float ptr [ESP + 0x90]         ; 0045d88c
    FXCH                                ; 0045d893
    FSTP float ptr [ESP + 0x64]         ; 0045d895
    FXCH                                ; 0045d899
    FSTP float ptr [ESP + 0x68]         ; 0045d89b
    FSTP float ptr [ESP + 0x6c]         ; 0045d89f
    MOVSD ES:EDI,ESI                    ; 0045d8a3
    MOVSD ES:EDI,ESI                    ; 0045d8a4
    MOVSD ES:EDI,ESI                    ; 0045d8a5
    FLD float ptr [ESP + 0x5c]          ; 0045d8a6
    FABS                                ; 0045d8aa
    FCOMP double ptr [0x005d0817]       ; 0045d8ac | DAT_005d0817
    FNSTSW AX                           ; 0045d8b2
    SAHF                                ; 0045d8b4
    JA 0x0045d702                       ; 0045d8b5
        ;   XREF to: 0045d702 (CONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x60]          ; 0045d8bb
    FMUL ST0                            ; 0045d8bf
    FLD float ptr [ESP + 0x58]          ; 0045d8c1
    FMUL ST0                            ; 0045d8c5
    FADDP                               ; 0045d8c7
    FSQRT                               ; 0045d8c9
    FST float ptr [ESP]                 ; 0045d8cb
    FCOMP double ptr [0x005d081f]       ; 0045d8ce | DAT_005d081f
    FNSTSW AX                           ; 0045d8d4
    SAHF                                ; 0045d8d6
    JA 0x0045d702                       ; 0045d8d7
        ;   XREF to: 0045d702 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x20]      ; 0045d8dd
    FLD float ptr [ESP]                 ; 0045d8e0
    FCOMP float ptr [EAX]               ; 0045d8e3
    FNSTSW AX                           ; 0045d8e5
    SAHF                                ; 0045d8e7
    JBE 0x0045db1d                      ; 0045d8e8
        ;   XREF to: 0045db1d (CONDITIONAL_JUMP)  ; LAB_0045db1d
    XOR ESI,ESI                         ; 0045d8ee
    MOV EAX,ESI                         ; 0045d8f0
    MOV ESP,EBP                         ; 0045d8f2
    POP EBP                             ; 0045d8f4
    POP EDI                             ; 0045d8f5
    POP ESI                             ; 0045d8f6
    POP EBX                             ; 0045d8f7
    RET                                 ; 0045d8f8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d8f9
        ;   Label: caseD_3
    CMP dword ptr [EAX + 0x2698],0x0    ; 0045d8fc
    JNZ 0x0045d702                      ; 0045d903
        ;   XREF to: 0045d702 (CONDITIONAL_JUMP)  ; default
    TEST EBX,EBX                        ; 0045d909
    JNZ 0x0045d965                      ; 0045d90b
        ;   XREF to: 0045d965 (CONDITIONAL_JUMP)  ; LAB_0045d965
    MOV EDI,0x40400000                  ; 0045d90d
        ;   Label: LAB_0045d90d
    XOR ESI,ESI                         ; 0045d912
    MOV EAX,0x40000000                  ; 0045d914
    MOV dword ptr [ESP + 0xd0],ESI      ; 0045d919
    MOV dword ptr [ESP + 0xd8],EAX      ; 0045d920
    LEA ESI,[ESP + 0xd0]                ; 0045d927
    LEA EAX,[ESP + 0xa0]                ; 0045d92e
    MOV dword ptr [ESP + 0xd4],EDI      ; 0045d935
    CMP EAX,ESI                         ; 0045d93c
    JZ 0x0045d760                       ; 0045d93e
        ;   XREF to: 0045d760 (CONDITIONAL_JUMP)  ; LAB_0045d760
    MOV ESI,0x40000000                  ; 0045d944
    MOV dword ptr [ESP + 0xa4],EDI      ; 0045d949
    XOR EDX,EDX                         ; 0045d950
    MOV dword ptr [ESP + 0xa8],ESI      ; 0045d952
    MOV dword ptr [ESP + 0xa0],EDX      ; 0045d959
    JMP 0x0045d760                      ; 0045d960
        ;   XREF to: 0045d760 (UNCONDITIONAL_JUMP)  ; LAB_0045d760
    MOV ECX,dword ptr [EBP + 0x14]      ; 0045d965
        ;   Label: LAB_0045d965
    PUSH ECX                            ; 0045d968
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045d969
    PUSH EBX                            ; 0045d96f
    CALL dword ptr [EAX + 0x8c]         ; 0045d970
    ADD ESP,0x8                         ; 0045d976
    CMP EAX,0x4                         ; 0045d979
    SETZ AL                             ; 0045d97c
    AND EAX,0xff                        ; 0045d97f
    JZ 0x0045d90d                       ; 0045d984
        ;   XREF to: 0045d90d (CONDITIONAL_JUMP)  ; LAB_0045d90d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d986
    ADD EAX,0x20                        ; 0045d989
    PUSH EAX                            ; 0045d98c
    PUSH EBX                            ; 0045d98d
    LEA ESI,[ESP + 0xcc]                ; 0045d98e
    LEA EDI,[ESP + 0x108]               ; 0045d995
    CALL core_actor.cpp_FUN_00408de0    ; 0045d99c
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xcc]                ; 0045d9a1
    ADD ESP,0x8                         ; 0045d9a8
    MOVSD ES:EDI,ESI                    ; 0045d9ab
    MOVSD ES:EDI,ESI                    ; 0045d9ac
    MOVSD ES:EDI,ESI                    ; 0045d9ad
    FLD float ptr [ESP + 0x100]         ; 0045d9ae
    FABS                                ; 0045d9b5
    FLD1                                ; 0045d9b7
    FCOMPP                              ; 0045d9b9
    FNSTSW AX                           ; 0045d9bb
    SAHF                                ; 0045d9bd
    JC 0x0045d702                       ; 0045d9be
        ;   XREF to: 0045d702 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x100]               ; 0045d9c4
    PUSH EAX                            ; 0045d9cb
    LEA ESI,[ESP + 0xbc]                ; 0045d9cc
    LEA EDI,[ESP + 0x44]                ; 0045d9d3
    CALL core_vecdir.cpp_FUN_005838f0   ; 0045d9d7
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0xbc]                ; 0045d9dc
    ADD ESP,0x4                         ; 0045d9e3
    MOVSD ES:EDI,ESI                    ; 0045d9e6
    MOVSD ES:EDI,ESI                    ; 0045d9e7
    MOVSD ES:EDI,ESI                    ; 0045d9e8
    FLD float ptr [ESP + 0x44]          ; 0045d9e9
    FABS                                ; 0045d9ed
    FCOMP double ptr [0x005d0807]       ; 0045d9ef | DAT_005d0807
    FNSTSW AX                           ; 0045d9f5
    SAHF                                ; 0045d9f7
    JBE 0x0045d90d                      ; 0045d9f8
        ;   XREF to: 0045d90d (CONDITIONAL_JUMP)  ; LAB_0045d90d
    XOR ESI,ESI                         ; 0045d9fe
    MOV EAX,ESI                         ; 0045da00
    MOV ESP,EBP                         ; 0045da02
    POP EBP                             ; 0045da04
    POP EDI                             ; 0045da05
    POP ESI                             ; 0045da06
    POP EBX                             ; 0045da07
    RET                                 ; 0045da08
    ADD EAX,0x20                        ; 0045da09
        ;   Label: LAB_0045da09
    PUSH EAX                            ; 0045da0c
    PUSH EBX                            ; 0045da0d
    LEA ESI,[ESP + 0x84]                ; 0045da0e
    LEA EDI,[ESP + 0x114]               ; 0045da15
    CALL core_actor.cpp_FUN_00408de0    ; 0045da1c
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x84]                ; 0045da21
    ADD ESP,0x8                         ; 0045da28
    MOVSD ES:EDI,ESI                    ; 0045da2b
    MOVSD ES:EDI,ESI                    ; 0045da2c
    MOVSD ES:EDI,ESI                    ; 0045da2d
    FLD float ptr [ESP + 0x110]         ; 0045da2e
    FMUL ST0                            ; 0045da35
    FLD float ptr [ESP + 0x10c]         ; 0045da37
    FMUL ST0                            ; 0045da3e
    FADDP                               ; 0045da40
    FLD float ptr [ESP + 0x114]         ; 0045da42
    FMUL ST0                            ; 0045da49
    FADDP                               ; 0045da4b
    FSQRT                               ; 0045da4d
    FLDZ                                ; 0045da4f
    FXCH                                ; 0045da51
    FSTP float ptr [ESP + 0x124]        ; 0045da53
    FCOMP float ptr [ESP + 0x124]       ; 0045da5a
    FNSTSW AX                           ; 0045da61
    SAHF                                ; 0045da63
    JNC 0x0045db04                      ; 0045da64
        ;   XREF to: 0045db04 (CONDITIONAL_JUMP)  ; LAB_0045db04
    FLD1                                ; 0045da6a
    FLD float ptr [ESP + 0x10c]         ; 0045da6c
    FXCH                                ; 0045da73
    FDIV float ptr [ESP + 0x124]        ; 0045da75
    FXCH                                ; 0045da7c
    FMUL ST1                            ; 0045da7e
    FLD float ptr [ESP + 0x110]         ; 0045da80
    FMUL ST2                            ; 0045da87
    FLD float ptr [ESP + 0x114]         ; 0045da89
    FMULP ST3                           ; 0045da90
    FXCH                                ; 0045da92
    FSTP float ptr [ESP + 0x10c]        ; 0045da94
    FSTP float ptr [ESP + 0x110]        ; 0045da9b
    FSTP float ptr [ESP + 0x114]        ; 0045daa2
    FLD float ptr [ESP + 0x114]         ; 0045daa9
        ;   Label: LAB_0045daa9
    FLDZ                                ; 0045dab0
    FCOMPP                              ; 0045dab2
    FNSTSW AX                           ; 0045dab4
    SAHF                                ; 0045dab6
    JC 0x0045d702                       ; 0045dab7
        ;   XREF to: 0045d702 (CONDITIONAL_JUMP)  ; default
    MOV EDX,0x40400000                  ; 0045dabd
    MOV ECX,0x40000000                  ; 0045dac2
    XOR EAX,EAX                         ; 0045dac7
    LEA ESI,[ESP + 0xa0]                ; 0045dac9
    MOV dword ptr [ESP + 0x4c],EAX      ; 0045dad0
    MOV dword ptr [ESP + 0x50],EDX      ; 0045dad4
    LEA EAX,[ESP + 0x4c]                ; 0045dad8
    MOV dword ptr [ESP + 0x54],ECX      ; 0045dadc
    CMP ESI,EAX                         ; 0045dae0
    JZ 0x0045d760                       ; 0045dae2
        ;   XREF to: 0045d760 (CONDITIONAL_JUMP)  ; LAB_0045d760
    MOV dword ptr [ESP + 0xa4],EDX      ; 0045dae8
    XOR ESI,ESI                         ; 0045daef
    MOV dword ptr [ESP + 0xa8],ECX      ; 0045daf1
    MOV dword ptr [ESP + 0xa0],ESI      ; 0045daf8
    JMP 0x0045d760                      ; 0045daff
        ;   XREF to: 0045d760 (UNCONDITIONAL_JUMP)  ; LAB_0045d760
    XOR ECX,ECX                         ; 0045db04
        ;   Label: LAB_0045db04
    MOV dword ptr [ESP + 0x110],ECX     ; 0045db06
    MOV dword ptr [ESP + 0x10c],ECX     ; 0045db0d
    MOV dword ptr [ESP + 0x114],ECX     ; 0045db14
    JMP 0x0045daa9                      ; 0045db1b
        ;   XREF to: 0045daa9 (UNCONDITIONAL_JUMP)  ; LAB_0045daa9
    MOV EBX,dword ptr [EBP + 0x20]      ; 0045db1d
        ;   Label: LAB_0045db1d
    MOV EAX,dword ptr [ESP]             ; 0045db20
    MOV ESI,0x1                         ; 0045db23
    MOV dword ptr [EBX],EAX             ; 0045db28
    MOV EAX,ESI                         ; 0045db2a
    MOV ESP,EBP                         ; 0045db2c
    POP EBP                             ; 0045db2e
    POP EDI                             ; 0045db2f
    POP ESI                             ; 0045db30
    POP EBX                             ; 0045db31
    RET                                 ; 0045db32


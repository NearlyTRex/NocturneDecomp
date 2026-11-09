; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_dirmat_cpp_FUN_0045f840(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[10]:
;   core_box.cpp_CBox_processPhysics_FUN_0041e130 at 0041e739
;   core_bugs.cpp_FUN_00426ec0 at 0042768e
;   core_cloth.cpp_FUN_00441500 at 0044152c
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_00463460 at 00463490
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00465060 at 004652a9
;   core_dlight.cpp_FUN_0046498e at 004649d0
;   core_fire.cpp_FUN_004af340 at 004af3b1
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f3a4
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560 at 00483578
;   unkafter_minecar.cpp_FUN_00511240 at 0051124f
;
; Referenced Globals:
;   undefined4 DAT_005d8a90
;   undefined4 DAT_005d8a98
;   undefined4 DAT_005d8aa0
;   undefined4 DAT_005d8aa8
;   undefined4 DAT_005d8ab0
;   undefined4 DAT_005d8ab8
;   undefined4 DAT_005d8abc
;
; Called Functions:
;   crt_math.c_acos_FUN_005c1d04
;   crt_math.c_asin_FUN_005c1cd6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f840
        ;   Label: core_dirmat.cpp_FUN_0045f840
    PUSH EDI                            ; 0045f841
    PUSH EBP                            ; 0045f842
    MOV EBP,ESP                         ; 0045f843
    SUB ESP,0x90                        ; 0045f845
    AND ESP,0xfffffff8                  ; 0045f84b
    MOV ECX,dword ptr [EBP + 0x10]      ; 0045f84e
    MOV EDX,ESI                         ; 0045f851
    FLD float ptr [ECX + 0x14]          ; 0045f853
    FCHS                                ; 0045f856
    FST double ptr [ESP + 0x68]         ; 0045f858
    FCOMP double ptr [0x005d8a90]       ; 0045f85c | DAT_005d8a90
    FNSTSW AX                           ; 0045f862
    SAHF                                ; 0045f864
    JBE 0x0045f95e                      ; 0045f865
        ;   XREF to: 0045f95e (CONDITIONAL_JUMP)  ; LAB_0045f95e
    FLD1                                ; 0045f86b
    FCOMP double ptr [ESP + 0x68]       ; 0045f86d
    FNSTSW AX                           ; 0045f871
    SAHF                                ; 0045f873
    JA 0x0045f96b                       ; 0045f874
        ;   XREF to: 0045f96b (CONDITIONAL_JUMP)  ; LAB_0045f96b
    MOV dword ptr [ESP + 0x7c],0x3fc90fdb ; 0045f87a
    FLD float ptr [ECX]                 ; 0045f882
        ;   Label: LAB_0045f882
    FLD float ptr [ECX + 0x18]          ; 0045f884
    FCHS                                ; 0045f887
    FSTP double ptr [ESP + 0x60]        ; 0045f889
    MOV EAX,dword ptr [ESP + 0x60]      ; 0045f88d
    FSTP double ptr [ESP + 0x30]        ; 0045f891
    MOV dword ptr [ESP + 0x18],EAX      ; 0045f895
    MOV EAX,dword ptr [ESP + 0x64]      ; 0045f899
    XOR EDI,EDI                         ; 0045f89d
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045f89f
    MOV EAX,dword ptr [ESP + 0x30]      ; 0045f8a3
    FLD double ptr [ESP + 0x60]         ; 0045f8a7
    MOV dword ptr [ESP + 0x50],EAX      ; 0045f8ab
    MOV EAX,dword ptr [ESP + 0x34]      ; 0045f8af
    MOV dword ptr [ESP + 0x84],EDI      ; 0045f8b3
    MOV dword ptr [ESP + 0x54],EAX      ; 0045f8ba
    FCOMP double ptr [0x005d8a98]       ; 0045f8be | DAT_005d8a98
    FNSTSW AX                           ; 0045f8c4
    SAHF                                ; 0045f8c6
    JNC 0x0045fb45                      ; 0045f8c7
        ;   XREF to: 0045fb45 (CONDITIONAL_JUMP)  ; LAB_0045fb45
    FLD double ptr [ESP + 0x60]         ; 0045f8cd
    FCOMP double ptr [0x005d8aa0]       ; 0045f8d1 | DAT_005d8aa0
    FNSTSW AX                           ; 0045f8d7
    SAHF                                ; 0045f8d9
    JBE 0x0045fb45                      ; 0045f8da
        ;   XREF to: 0045fb45 (CONDITIONAL_JUMP)  ; LAB_0045fb45
    FLD double ptr [ESP + 0x60]         ; 0045f8e0
    CALL crt_math.c_asin_FUN_005c1cd6   ; 0045f8e4
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005c1cd6()
    FLDZ                                ; 0045f8e9
    FXCH                                ; 0045f8eb
    FSTP float ptr [ESP + 0x74]         ; 0045f8ed
    FCOMP double ptr [ESP + 0x30]       ; 0045f8f1
    FNSTSW AX                           ; 0045f8f5
    SAHF                                ; 0045f8f7
    JBE 0x0045f908                      ; 0045f8f8
        ;   XREF to: 0045f908 (CONDITIONAL_JUMP)  ; LAB_0045f908
    FLD float ptr [ESP + 0x74]          ; 0045f8fa
    FSUBR double ptr [0x005d8aa8]       ; 0045f8fe | DAT_005d8aa8
    FSTP float ptr [ESP + 0x74]         ; 0045f904
    FLD float ptr [ESP + 0x74]          ; 0045f908
        ;   Label: LAB_0045f908
    FCOMP double ptr [0x005d8ab0]       ; 0045f90c | DAT_005d8ab0
    FNSTSW AX                           ; 0045f912
    SAHF                                ; 0045f914
    JNC 0x0045f925                      ; 0045f915
        ;   XREF to: 0045f925 (CONDITIONAL_JUMP)  ; LAB_0045f925
    FLD float ptr [ESP + 0x74]          ; 0045f917
    FADD float ptr [0x005d8ab8]         ; 0045f91b | DAT_005d8ab8
    FSTP float ptr [ESP + 0x74]         ; 0045f921
    FLD float ptr [ESP + 0x74]          ; 0045f925
        ;   Label: LAB_0045f925
    FCOMP double ptr [0x005d8aa8]       ; 0045f929 | DAT_005d8aa8
    FNSTSW AX                           ; 0045f92f
    SAHF                                ; 0045f931
    JBE 0x0045f942                      ; 0045f932
        ;   XREF to: 0045f942 (CONDITIONAL_JUMP)  ; LAB_0045f942
    FLD float ptr [ESP + 0x74]          ; 0045f934
    FADD float ptr [0x005d8abc]         ; 0045f938 | DAT_005d8abc
    FSTP float ptr [ESP + 0x74]         ; 0045f93e
    MOV EAX,dword ptr [ESP + 0x74]      ; 0045f942
        ;   Label: LAB_0045f942
    MOV dword ptr [ESP + 0x80],EAX      ; 0045f946
    LEA ESI,[ESP + 0x7c]                ; 0045f94d
    MOV EDI,EDX                         ; 0045f951
    MOVSD ES:EDI,ESI                    ; 0045f953
    MOVSD ES:EDI,ESI                    ; 0045f954
    MOVSD ES:EDI,ESI                    ; 0045f955
    MOV EAX,EDX                         ; 0045f956
    MOV ESP,EBP                         ; 0045f958
    POP EBP                             ; 0045f95a
    POP EDI                             ; 0045f95b
    POP EBX                             ; 0045f95c
    RET                                 ; 0045f95d
    MOV dword ptr [ESP + 0x7c],0xbfc90fdb ; 0045f95e
        ;   Label: LAB_0045f95e
    JMP 0x0045f882                      ; 0045f966
        ;   XREF to: 0045f882 (UNCONDITIONAL_JUMP)  ; LAB_0045f882
    FLD double ptr [ESP + 0x68]         ; 0045f96b
        ;   Label: LAB_0045f96b
    FLD ST0                             ; 0045f96f
    CALL crt_math.c_asin_FUN_005c1cd6   ; 0045f971
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005c1cd6()
    FLD ST1                             ; 0045f976
    FMULP ST2                           ; 0045f978
    FLD1                                ; 0045f97a
    FSUBRP ST2,ST0                      ; 0045f97c
    FXCH                                ; 0045f97e
    FSQRT                               ; 0045f980
    FLDZ                                ; 0045f982
    FXCH ST2                            ; 0045f984
    FSTP float ptr [ESP + 0x7c]         ; 0045f986
    FSTP double ptr [ESP + 0x58]        ; 0045f98a
    FCOMP double ptr [ESP + 0x58]       ; 0045f98e
    FNSTSW AX                           ; 0045f992
    SAHF                                ; 0045f994
    JNC 0x0045f882                      ; 0045f995
        ;   XREF to: 0045f882 (CONDITIONAL_JUMP)  ; LAB_0045f882
    FLD float ptr [ECX + 0x20]          ; 0045f99b
    FLD1                                ; 0045f99e
    FDIV double ptr [ESP + 0x58]        ; 0045f9a0
    FLD float ptr [ECX + 0x8]           ; 0045f9a4
    FMUL ST1                            ; 0045f9a7
    FXCH ST2                            ; 0045f9a9
    FMULP                               ; 0045f9ab
    FXCH                                ; 0045f9ad
    FSTP double ptr [ESP + 0x8]         ; 0045f9af
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045f9b3
    MOV dword ptr [ESP + 0x10],EAX      ; 0045f9b7
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045f9bb
    FSTP double ptr [ESP + 0x40]        ; 0045f9bf
    MOV dword ptr [ESP + 0x14],EAX      ; 0045f9c3
    MOV EAX,dword ptr [ESP + 0x40]      ; 0045f9c7
    MOV dword ptr [ESP + 0x38],EAX      ; 0045f9cb
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045f9cf
    FLD double ptr [ESP + 0x8]          ; 0045f9d3
    MOV dword ptr [ESP + 0x3c],EAX      ; 0045f9d7
    FCOMP double ptr [0x005d8a98]       ; 0045f9db | DAT_005d8a98
    FNSTSW AX                           ; 0045f9e1
    SAHF                                ; 0045f9e3
    JNC 0x0045fb97                      ; 0045f9e4
        ;   XREF to: 0045fb97 (CONDITIONAL_JUMP)  ; LAB_0045fb97
    FLD double ptr [ESP + 0x8]          ; 0045f9ea
    FCOMP double ptr [0x005d8aa0]       ; 0045f9ee | DAT_005d8aa0
    FNSTSW AX                           ; 0045f9f4
    SAHF                                ; 0045f9f6
    JBE 0x0045fb97                      ; 0045f9f7
        ;   XREF to: 0045fb97 (CONDITIONAL_JUMP)  ; LAB_0045fb97
    FLD double ptr [ESP + 0x8]          ; 0045f9fd
    CALL crt_math.c_asin_FUN_005c1cd6   ; 0045fa01
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005c1cd6()
    FLDZ                                ; 0045fa06
    FXCH                                ; 0045fa08
    FSTP float ptr [ESP + 0x78]         ; 0045fa0a
    FCOMP double ptr [ESP + 0x40]       ; 0045fa0e
    FNSTSW AX                           ; 0045fa12
    SAHF                                ; 0045fa14
    JBE 0x0045fa25                      ; 0045fa15
        ;   XREF to: 0045fa25 (CONDITIONAL_JUMP)  ; LAB_0045fa25
    FLD float ptr [ESP + 0x78]          ; 0045fa17
    FSUBR double ptr [0x005d8aa8]       ; 0045fa1b | DAT_005d8aa8
    FSTP float ptr [ESP + 0x78]         ; 0045fa21
    FLD float ptr [ESP + 0x78]          ; 0045fa25
        ;   Label: LAB_0045fa25
    FCOMP double ptr [0x005d8ab0]       ; 0045fa29 | DAT_005d8ab0
    FNSTSW AX                           ; 0045fa2f
    SAHF                                ; 0045fa31
    JNC 0x0045fa42                      ; 0045fa32
        ;   XREF to: 0045fa42 (CONDITIONAL_JUMP)  ; LAB_0045fa42
    FLD float ptr [ESP + 0x78]          ; 0045fa34
    FADD float ptr [0x005d8ab8]         ; 0045fa38 | DAT_005d8ab8
    FSTP float ptr [ESP + 0x78]         ; 0045fa3e
    FLD float ptr [ESP + 0x78]          ; 0045fa42
        ;   Label: LAB_0045fa42
    FCOMP double ptr [0x005d8aa8]       ; 0045fa46 | DAT_005d8aa8
    FNSTSW AX                           ; 0045fa4c
    SAHF                                ; 0045fa4e
    JBE 0x0045fa5f                      ; 0045fa4f
        ;   XREF to: 0045fa5f (CONDITIONAL_JUMP)  ; LAB_0045fa5f
    FLD float ptr [ESP + 0x78]          ; 0045fa51
    FADD float ptr [0x005d8abc]         ; 0045fa55 | DAT_005d8abc
    FSTP float ptr [ESP + 0x78]         ; 0045fa5b
    FLD float ptr [ECX + 0x10]          ; 0045fa5f
        ;   Label: LAB_0045fa5f
    FLD1                                ; 0045fa62
    FDIV double ptr [ESP + 0x58]        ; 0045fa64
    FXCH                                ; 0045fa68
    FMUL ST1                            ; 0045fa6a
    FLD float ptr [ECX + 0xc]           ; 0045fa6c
    MOV EAX,dword ptr [ESP + 0x78]      ; 0045fa6f
    FMULP ST2                           ; 0045fa73
    MOV dword ptr [ESP + 0x80],EAX      ; 0045fa75
    FXCH                                ; 0045fa7c
    FSTP double ptr [ESP]               ; 0045fa7e
    MOV EAX,dword ptr [ESP]             ; 0045fa81
    MOV dword ptr [ESP + 0x20],EAX      ; 0045fa84
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045fa88
    FSTP double ptr [ESP + 0x28]        ; 0045fa8c
    MOV dword ptr [ESP + 0x24],EAX      ; 0045fa90
    MOV EAX,dword ptr [ESP + 0x28]      ; 0045fa94
    MOV dword ptr [ESP + 0x48],EAX      ; 0045fa98
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0045fa9c
    FLD double ptr [ESP]                ; 0045faa0
    MOV dword ptr [ESP + 0x4c],EAX      ; 0045faa3
    FCOMP double ptr [0x005d8a98]       ; 0045faa7 | DAT_005d8a98
    FNSTSW AX                           ; 0045faad
    SAHF                                ; 0045faaf
    JNC 0x0045fbe9                      ; 0045fab0
        ;   XREF to: 0045fbe9 (CONDITIONAL_JUMP)  ; LAB_0045fbe9
    FLD double ptr [ESP]                ; 0045fab6
    FCOMP double ptr [0x005d8aa0]       ; 0045fab9 | DAT_005d8aa0
    FNSTSW AX                           ; 0045fabf
    SAHF                                ; 0045fac1
    JBE 0x0045fbe9                      ; 0045fac2
        ;   XREF to: 0045fbe9 (CONDITIONAL_JUMP)  ; LAB_0045fbe9
    FLD double ptr [ESP]                ; 0045fac8
    CALL crt_math.c_asin_FUN_005c1cd6   ; 0045facb
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005c1cd6()
    FLDZ                                ; 0045fad0
    FXCH                                ; 0045fad2
    FSTP float ptr [ESP + 0x70]         ; 0045fad4
    FCOMP double ptr [ESP + 0x28]       ; 0045fad8
    FNSTSW AX                           ; 0045fadc
    SAHF                                ; 0045fade
    JBE 0x0045faef                      ; 0045fadf
        ;   XREF to: 0045faef (CONDITIONAL_JUMP)  ; LAB_0045faef
    FLD float ptr [ESP + 0x70]          ; 0045fae1
    FSUBR double ptr [0x005d8aa8]       ; 0045fae5 | DAT_005d8aa8
    FSTP float ptr [ESP + 0x70]         ; 0045faeb
    FLD float ptr [ESP + 0x70]          ; 0045faef
        ;   Label: LAB_0045faef
    FCOMP double ptr [0x005d8ab0]       ; 0045faf3 | DAT_005d8ab0
    FNSTSW AX                           ; 0045faf9
    SAHF                                ; 0045fafb
    JNC 0x0045fb0c                      ; 0045fafc
        ;   XREF to: 0045fb0c (CONDITIONAL_JUMP)  ; LAB_0045fb0c
    FLD float ptr [ESP + 0x70]          ; 0045fafe
    FADD float ptr [0x005d8ab8]         ; 0045fb02 | DAT_005d8ab8
    FSTP float ptr [ESP + 0x70]         ; 0045fb08
    FLD float ptr [ESP + 0x70]          ; 0045fb0c
        ;   Label: LAB_0045fb0c
    FCOMP double ptr [0x005d8aa8]       ; 0045fb10 | DAT_005d8aa8
    FNSTSW AX                           ; 0045fb16
    SAHF                                ; 0045fb18
    JBE 0x0045fb29                      ; 0045fb19
        ;   XREF to: 0045fb29 (CONDITIONAL_JUMP)  ; LAB_0045fb29
    FLD float ptr [ESP + 0x70]          ; 0045fb1b
    FADD float ptr [0x005d8abc]         ; 0045fb1f | DAT_005d8abc
    FSTP float ptr [ESP + 0x70]         ; 0045fb25
    MOV EAX,dword ptr [ESP + 0x70]      ; 0045fb29
        ;   Label: LAB_0045fb29
    MOV dword ptr [ESP + 0x84],EAX      ; 0045fb2d
    LEA ESI,[ESP + 0x7c]                ; 0045fb34
    MOV EDI,EDX                         ; 0045fb38
    MOVSD ES:EDI,ESI                    ; 0045fb3a
    MOVSD ES:EDI,ESI                    ; 0045fb3b
    MOVSD ES:EDI,ESI                    ; 0045fb3c
    MOV EAX,EDX                         ; 0045fb3d
    MOV ESP,EBP                         ; 0045fb3f
    POP EBP                             ; 0045fb41
    POP EDI                             ; 0045fb42
    POP EBX                             ; 0045fb43
    RET                                 ; 0045fb44
    FLD double ptr [ESP + 0x50]         ; 0045fb45
        ;   Label: LAB_0045fb45
    FCOMP double ptr [0x005d8a90]       ; 0045fb49 | DAT_005d8a90
    FNSTSW AX                           ; 0045fb4f
    SAHF                                ; 0045fb51
    JA 0x0045fb75                       ; 0045fb52
        ;   XREF to: 0045fb75 (CONDITIONAL_JUMP)  ; LAB_0045fb75
    MOV dword ptr [ESP + 0x74],0x40490fdb ; 0045fb54
    FLDZ                                ; 0045fb5c
        ;   Label: LAB_0045fb5c
    FCOMP double ptr [ESP + 0x18]       ; 0045fb5e
    FNSTSW AX                           ; 0045fb62
    SAHF                                ; 0045fb64
    JBE 0x0045f908                      ; 0045fb65
        ;   XREF to: 0045f908 (CONDITIONAL_JUMP)  ; LAB_0045f908
    XOR byte ptr [ESP + 0x77],0x80      ; 0045fb6b
    JMP 0x0045f908                      ; 0045fb70
        ;   XREF to: 0045f908 (UNCONDITIONAL_JUMP)  ; LAB_0045f908
    FLD1                                ; 0045fb75
        ;   Label: LAB_0045fb75
    FCOMP double ptr [ESP + 0x50]       ; 0045fb77
    FNSTSW AX                           ; 0045fb7b
    SAHF                                ; 0045fb7d
    JA 0x0045fb88                       ; 0045fb7e
        ;   XREF to: 0045fb88 (CONDITIONAL_JUMP)  ; LAB_0045fb88
    XOR EAX,EAX                         ; 0045fb80
    MOV dword ptr [ESP + 0x74],EAX      ; 0045fb82
    JMP 0x0045fb5c                      ; 0045fb86
        ;   XREF to: 0045fb5c (UNCONDITIONAL_JUMP)  ; LAB_0045fb5c
    FLD double ptr [ESP + 0x50]         ; 0045fb88
        ;   Label: LAB_0045fb88
    CALL crt_math.c_acos_FUN_005c1d04   ; 0045fb8c
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FSTP float ptr [ESP + 0x74]         ; 0045fb91
    JMP 0x0045fb5c                      ; 0045fb95
        ;   XREF to: 0045fb5c (UNCONDITIONAL_JUMP)  ; LAB_0045fb5c
    FLD double ptr [ESP + 0x38]         ; 0045fb97
        ;   Label: LAB_0045fb97
    FCOMP double ptr [0x005d8a90]       ; 0045fb9b | DAT_005d8a90
    FNSTSW AX                           ; 0045fba1
    SAHF                                ; 0045fba3
    JA 0x0045fbc7                       ; 0045fba4
        ;   XREF to: 0045fbc7 (CONDITIONAL_JUMP)  ; LAB_0045fbc7
    MOV dword ptr [ESP + 0x78],0x40490fdb ; 0045fba6
    FLDZ                                ; 0045fbae
        ;   Label: LAB_0045fbae
    FCOMP double ptr [ESP + 0x10]       ; 0045fbb0
    FNSTSW AX                           ; 0045fbb4
    SAHF                                ; 0045fbb6
    JBE 0x0045fa25                      ; 0045fbb7
        ;   XREF to: 0045fa25 (CONDITIONAL_JUMP)  ; LAB_0045fa25
    XOR byte ptr [ESP + 0x7b],0x80      ; 0045fbbd
    JMP 0x0045fa25                      ; 0045fbc2
        ;   XREF to: 0045fa25 (UNCONDITIONAL_JUMP)  ; LAB_0045fa25
    FLD1                                ; 0045fbc7
        ;   Label: LAB_0045fbc7
    FCOMP double ptr [ESP + 0x38]       ; 0045fbc9
    FNSTSW AX                           ; 0045fbcd
    SAHF                                ; 0045fbcf
    JA 0x0045fbda                       ; 0045fbd0
        ;   XREF to: 0045fbda (CONDITIONAL_JUMP)  ; LAB_0045fbda
    XOR EBX,EBX                         ; 0045fbd2
    MOV dword ptr [ESP + 0x78],EBX      ; 0045fbd4
    JMP 0x0045fbae                      ; 0045fbd8
        ;   XREF to: 0045fbae (UNCONDITIONAL_JUMP)  ; LAB_0045fbae
    FLD double ptr [ESP + 0x38]         ; 0045fbda
        ;   Label: LAB_0045fbda
    CALL crt_math.c_acos_FUN_005c1d04   ; 0045fbde
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FSTP float ptr [ESP + 0x78]         ; 0045fbe3
    JMP 0x0045fbae                      ; 0045fbe7
        ;   XREF to: 0045fbae (UNCONDITIONAL_JUMP)  ; LAB_0045fbae
    FLD double ptr [ESP + 0x48]         ; 0045fbe9
        ;   Label: LAB_0045fbe9
    FCOMP double ptr [0x005d8a90]       ; 0045fbed | DAT_005d8a90
    FNSTSW AX                           ; 0045fbf3
    SAHF                                ; 0045fbf5
    JA 0x0045fc19                       ; 0045fbf6
        ;   XREF to: 0045fc19 (CONDITIONAL_JUMP)  ; LAB_0045fc19
    MOV dword ptr [ESP + 0x70],0x40490fdb ; 0045fbf8
    FLDZ                                ; 0045fc00
        ;   Label: LAB_0045fc00
    FCOMP double ptr [ESP + 0x20]       ; 0045fc02
    FNSTSW AX                           ; 0045fc06
    SAHF                                ; 0045fc08
    JBE 0x0045faef                      ; 0045fc09
        ;   XREF to: 0045faef (CONDITIONAL_JUMP)  ; LAB_0045faef
    XOR byte ptr [ESP + 0x73],0x80      ; 0045fc0f
    JMP 0x0045faef                      ; 0045fc14
        ;   XREF to: 0045faef (UNCONDITIONAL_JUMP)  ; LAB_0045faef
    FLD1                                ; 0045fc19
        ;   Label: LAB_0045fc19
    FCOMP double ptr [ESP + 0x48]       ; 0045fc1b
    FNSTSW AX                           ; 0045fc1f
    SAHF                                ; 0045fc21
    JA 0x0045fc2c                       ; 0045fc22
        ;   XREF to: 0045fc2c (CONDITIONAL_JUMP)  ; LAB_0045fc2c
    XOR EDI,EDI                         ; 0045fc24
    MOV dword ptr [ESP + 0x70],EDI      ; 0045fc26
    JMP 0x0045fc00                      ; 0045fc2a
        ;   XREF to: 0045fc00 (UNCONDITIONAL_JUMP)  ; LAB_0045fc00
    FLD double ptr [ESP + 0x48]         ; 0045fc2c
        ;   Label: LAB_0045fc2c
    CALL crt_math.c_acos_FUN_005c1d04   ; 0045fc30
        ;   XREF to: 005c1d04 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005c1d04()
    FSTP float ptr [ESP + 0x70]         ; 0045fc35
    JMP 0x0045fc00                      ; 0045fc39
        ;   XREF to: 0045fc00 (UNCONDITIONAL_JUMP)  ; LAB_0045fc00


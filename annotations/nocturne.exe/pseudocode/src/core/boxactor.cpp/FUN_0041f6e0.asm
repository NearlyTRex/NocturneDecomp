; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_FUN_0041f6e0(CLightActor *this_ptr)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_setup_FUN_0041f3a0 at 0041f3a6
;
; Referenced Globals:
;   TerminatedCString s_flashlit_kfm_005799b8
;   TerminatedCString s_lantern_kfm_005799c5
;   TerminatedCString s_lantern_d_raw_005799d1
;   float FLOAT_005799e1 = 0.5
;   double DOUBLE_005799e5 = 0.100000000000000
;   undefined4 DAT_007647fc
;   undefined4 DAT_0076483c
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f6e0
        ;   Label: core_boxactor.cpp_FUN_0041f6e0
    PUSH ESI                            ; 0041f6e1
    PUSH EDI                            ; 0041f6e2
    PUSH EBP                            ; 0041f6e3
    MOV EBP,ESP                         ; 0041f6e4
    SUB ESP,0xbc                        ; 0041f6e6
    AND ESP,0xfffffff8                  ; 0041f6ec
    MOV EDI,dword ptr [EBP + 0x14]      ; 0041f6ef
    MOV EAX,dword ptr [EDI + 0x664]     ; 0041f6f2
    CMP EAX,0x1                         ; 0041f6f8
    JC 0x0041f721                       ; 0041f6fb
        ;   XREF to: 0041f721 (CONDITIONAL_JUMP)  ; LAB_0041f721
    LEA EBX,[EDI + 0x668]               ; 0041f6fd
    MOV dword ptr [ESP + 0xb8],EBX      ; 0041f703
    LEA EBX,[EDI + 0x3620]              ; 0041f70a
    LEA ESI,[EDI + 0x150]               ; 0041f710
    JBE 0x0041f728                      ; 0041f716
        ;   XREF to: 0041f728 (CONDITIONAL_JUMP)  ; LAB_0041f728
    CMP EAX,0x2                         ; 0041f718
    JZ 0x0041f856                       ; 0041f71b
        ;   XREF to: 0041f856 (CONDITIONAL_JUMP)  ; LAB_0041f856
    MOV ESP,EBP                         ; 0041f721
        ;   Label: LAB_0041f721
    POP EBP                             ; 0041f723
    POP EDI                             ; 0041f724
    POP ESI                             ; 0041f725
    POP EBX                             ; 0041f726
    RET                                 ; 0041f727
    PUSH 0x5799b8                       ; 0041f728 | = "flashlit.kfm"
        ;   Label: LAB_0041f728
    PUSH ESI                            ; 0041f72d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0041f72e
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0041f733
    PUSH ESI                            ; 0041f736
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0041f737
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041f73c
    LEA EAX,[ESP + 0x40]                ; 0041f73f
    PUSH EAX                            ; 0041f743
    MOV ESI,dword ptr [EDI + 0x14c]     ; 0041f744
    PUSH EDI                            ; 0041f74a
    CALL dword ptr [ESI + 0x14]         ; 0041f74b
    ADD ESP,0x8                         ; 0041f74e
    FLD float ptr [ESP + 0x40]          ; 0041f751
    FADD float ptr [ESP + 0x4c]         ; 0041f755
    FST float ptr [ESP + 0xac]          ; 0041f759
    FLD float ptr [0x005799e1]          ; 0041f760 | FLOAT_005799e1
    FXCH                                ; 0041f766
    FMUL ST1                            ; 0041f768
    FLD float ptr [ESP + 0x48]          ; 0041f76a
    FLD float ptr [ESP + 0x44]          ; 0041f76e
    FADD float ptr [ESP + 0x50]         ; 0041f772
    FXCH                                ; 0041f776
    FADD float ptr [ESP + 0x54]         ; 0041f778
    FXCH                                ; 0041f77c
    FST float ptr [ESP + 0xb0]          ; 0041f77e
    FMUL ST3                            ; 0041f785
    FXCH                                ; 0041f787
    FST float ptr [ESP + 0xb4]          ; 0041f789
    FMUL ST3                            ; 0041f790
    FXCH ST2                            ; 0041f792
    FSTP float ptr [ESP + 0x70]         ; 0041f794
    FSTP float ptr [ESP + 0x74]         ; 0041f798
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041f79c
    FSTP float ptr [ESP + 0x78]         ; 0041f7a0
    MOV dword ptr [EDI + 0x3614],EAX    ; 0041f7a4
    FLD float ptr [ESP + 0x40]          ; 0041f7aa
    FADD float ptr [ESP + 0x4c]         ; 0041f7ae
    FST float ptr [ESP + 0x58]          ; 0041f7b2
    FMUL ST1                            ; 0041f7b6
    FLD float ptr [ESP + 0x48]          ; 0041f7b8
    FLD float ptr [ESP + 0x44]          ; 0041f7bc
    FADD float ptr [ESP + 0x50]         ; 0041f7c0
    FXCH                                ; 0041f7c4
    FADD float ptr [ESP + 0x54]         ; 0041f7c6
    FXCH                                ; 0041f7ca
    FST float ptr [ESP + 0x5c]          ; 0041f7cc
    FMUL ST3                            ; 0041f7d0
    FXCH                                ; 0041f7d2
    FST float ptr [ESP + 0x60]          ; 0041f7d4
    FMULP ST3                           ; 0041f7d8
    FXCH                                ; 0041f7da
    FSTP float ptr [ESP + 0xa0]         ; 0041f7dc
    FSTP float ptr [ESP + 0xa4]         ; 0041f7e3
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0041f7ea
    FSTP float ptr [ESP + 0xa8]         ; 0041f7f1
    MOV dword ptr [EDI + 0x3618],EAX    ; 0041f7f8
    FLD float ptr [ESP + 0x54]          ; 0041f7fe
    FADD double ptr [0x005799e5]        ; 0041f802 | DOUBLE_005799e5
    FSTP float ptr [EDI + 0x361c]       ; 0041f808
    MOV dword ptr [EBX + 0x8],0x0       ; 0041f80e
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0041f815
    MOV EDX,dword ptr [EBX + 0x8]       ; 0041f81c
    MOV dword ptr [EBX + 0x4],EDX       ; 0041f81f
    MOV EDX,dword ptr [EBX + 0x4]       ; 0041f822
    MOV dword ptr [EBX],EDX             ; 0041f825
    MOV dword ptr [EDI + 0x231c],0x0    ; 0041f827
    MOV dword ptr [EAX + 0x138],0x42600000 ; 0041f831
    MOV dword ptr [EDI + 0x768],0x42000000 ; 0041f83b
    MOV dword ptr [EDI + 0x30c],0x3     ; 0041f845
    MOV ESP,EBP                         ; 0041f84f
    POP EBP                             ; 0041f851
    POP EDI                             ; 0041f852
    POP ESI                             ; 0041f853
    POP EBX                             ; 0041f854
    RET                                 ; 0041f855
    PUSH 0x5799c5                       ; 0041f856 | = "lantern.kfm"
        ;   Label: LAB_0041f856
    PUSH ESI                            ; 0041f85b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0041f85c
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0041f861
    PUSH ESI                            ; 0041f864
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0041f865
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041f86a
    LEA ESI,[ESP + 0x28]                ; 0041f86d
    PUSH ESI                            ; 0041f871
    MOV EAX,dword ptr [EDI + 0x14c]     ; 0041f872
    PUSH EDI                            ; 0041f878
    CALL dword ptr [EAX + 0x14]         ; 0041f879
    ADD ESP,0x8                         ; 0041f87c
    FLD float ptr [ESP + 0x28]          ; 0041f87f
    FADD float ptr [ESP + 0x34]         ; 0041f883
    FST float ptr [ESP + 0x88]          ; 0041f887
    FLD float ptr [0x005799e1]          ; 0041f88e | FLOAT_005799e1
    FXCH                                ; 0041f894
    FMUL ST1                            ; 0041f896
    FLD float ptr [ESP + 0x30]          ; 0041f898
    FLD float ptr [ESP + 0x2c]          ; 0041f89c
    FADD float ptr [ESP + 0x38]         ; 0041f8a0
    FXCH                                ; 0041f8a4
    FADD float ptr [ESP + 0x3c]         ; 0041f8a6
    FXCH                                ; 0041f8aa
    FST float ptr [ESP + 0x8c]          ; 0041f8ac
    FMUL ST3                            ; 0041f8b3
    FXCH                                ; 0041f8b5
    FST float ptr [ESP + 0x90]          ; 0041f8b7
    FMUL ST3                            ; 0041f8be
    FXCH ST2                            ; 0041f8c0
    FSTP float ptr [ESP + 0x94]         ; 0041f8c2
    FSTP float ptr [ESP + 0x98]         ; 0041f8c9
    MOV EAX,dword ptr [ESP + 0x94]      ; 0041f8d0
    FSTP float ptr [ESP + 0x9c]         ; 0041f8d7
    MOV dword ptr [EDI + 0x3614],EAX    ; 0041f8de
    FLD float ptr [ESP + 0x28]          ; 0041f8e4
    FADD float ptr [ESP + 0x34]         ; 0041f8e8
    FST float ptr [ESP + 0x64]          ; 0041f8ec
    FMUL ST1                            ; 0041f8f0
    FLD float ptr [ESP + 0x30]          ; 0041f8f2
    FLD float ptr [ESP + 0x2c]          ; 0041f8f6
    FADD float ptr [ESP + 0x38]         ; 0041f8fa
    FXCH                                ; 0041f8fe
    FADD float ptr [ESP + 0x3c]         ; 0041f900
    FXCH                                ; 0041f904
    FST float ptr [ESP + 0x68]          ; 0041f906
    FMUL ST3                            ; 0041f90a
    FXCH                                ; 0041f90c
    FST float ptr [ESP + 0x6c]          ; 0041f90e
    FMULP ST3                           ; 0041f912
    FXCH                                ; 0041f914
    FSTP float ptr [ESP + 0x7c]         ; 0041f916
    FSTP float ptr [ESP + 0x80]         ; 0041f91a
    MOV EAX,dword ptr [ESP + 0x80]      ; 0041f921
    FSTP float ptr [ESP + 0x84]         ; 0041f928
    MOV dword ptr [EDI + 0x3618],EAX    ; 0041f92f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041f935
    MOV dword ptr [EDI + 0x361c],EAX    ; 0041f939
    MOV dword ptr [EBX + 0x8],0x0       ; 0041f93f
    MOV EAX,dword ptr [EBX + 0x8]       ; 0041f946
    MOV dword ptr [EBX + 0x4],EAX       ; 0041f949
    MOV EAX,dword ptr [EBX + 0x4]       ; 0041f94c
    MOV dword ptr [EBX],EAX             ; 0041f94f
    MOV dword ptr [EDI + 0x3620],0x3e860a92 ; 0041f951
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0041f95b
    MOV dword ptr [EDI + 0x231c],0x0    ; 0041f962
    MOV dword ptr [EAX + 0x138],0x42600000 ; 0041f96c
    MOV dword ptr [EDI + 0x768],0x42000000 ; 0041f976
    MOV EDX,dword ptr [0x007647fc]      ; 0041f980 | DAT_007647fc
    MOV dword ptr [EDI + 0x30c],0x3     ; 0041f986
    TEST EDX,EDX                        ; 0041f990
    JNZ 0x0041f9cd                      ; 0041f992
        ;   XREF to: 0041f9cd (CONDITIONAL_JUMP)  ; LAB_0041f9cd
    MOV ESI,0x76483c                    ; 0041f994 | DAT_0076483c
    XOR EBX,EBX                         ; 0041f999
    PUSH EBX                            ; 0041f99b
        ;   Label: LAB_0041f99b
    PUSH 0x5799d1                       ; 0041f99c | = "lantern%d.raw"
    LEA EAX,[ESP + 0x8]                 ; 0041f9a1
    PUSH EAX                            ; 0041f9a5
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0041f9a6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0041f9ab
    MOV EAX,ESP                         ; 0041f9ae
    PUSH EAX                            ; 0041f9b0
    PUSH ESI                            ; 0041f9b1 | DAT_0076483c
    INC EBX                             ; 0041f9b2
    CALL core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90 ; 0041f9b3
        ;   XREF to: 0044bf90 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_load_FUN_0044bf90(CDemonFilter * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0041f9b8
    ADD ESI,0x4c                        ; 0041f9bb
    CMP EBX,0x8                         ; 0041f9be
    JL 0x0041f99b                       ; 0041f9c1
        ;   XREF to: 0041f99b (CONDITIONAL_JUMP)  ; LAB_0041f99b
    MOV dword ptr [0x007647fc],0x1      ; 0041f9c3 | DAT_007647fc
    PUSH 0x0                            ; 0041f9cd
        ;   Label: LAB_0041f9cd
    PUSH 0x0                            ; 0041f9cf
    PUSH 0x0                            ; 0041f9d1
    PUSH 0x76483c                       ; 0041f9d3 | DAT_0076483c
    ADD EDI,0x668                       ; 0041f9d8
    PUSH EDI                            ; 0041f9de
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0 ; 0041f9df
        ;   XREF to: 004501c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 0041f9e4
    MOV ESP,EBP                         ; 0041f9e7
    POP EBP                             ; 0041f9e9
    POP EDI                             ; 0041f9ea
    POP ESI                             ; 0041f9eb
    POP EBX                             ; 0041f9ec
    RET                                 ; 0041f9ed


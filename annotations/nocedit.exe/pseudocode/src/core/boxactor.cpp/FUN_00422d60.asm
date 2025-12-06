; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boxactor.cpp_FUN_00422d60()
;
; Local Variables:
; undefined1       Stack[-0xa8]:1  local_a8
; undefined1       Stack[-0x90]:1  local_90
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_boxactor.cpp_CLightActor_FUN_00423380 at 004233e9
;   core_boxactor.cpp_FUN_00422a20 at 00422a26
;
; Referenced Globals:
;   TerminatedCString s_flashlit_kfm_00616955
;   TerminatedCString s_lantern_kfm_00616962
;   TerminatedCString s_lantern_d_raw_0061696e
;   float FLOAT_0061697f = 0.5
;   double DOUBLE_00616987 = 0.100000000000000
;   undefined4 DAT_008229ac
;   CDemonFilter[8] CDemonFilter_ARRAY_008229ec
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422d60
        ;   Label: core_boxactor.cpp_FUN_00422d60
    PUSH ESI                            ; 00422d61
    PUSH EDI                            ; 00422d62
    PUSH EBP                            ; 00422d63
    MOV EBP,ESP                         ; 00422d64
    SUB ESP,0xbc                        ; 00422d66
    AND ESP,0xfffffff8                  ; 00422d6c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00422d6f
    MOV EAX,dword ptr [EDI + 0x66c]     ; 00422d72
    CMP EAX,0x1                         ; 00422d78
    JC 0x00422da1                       ; 00422d7b | LAB_00422da1
        ;   XREF to: 00422da1 (CONDITIONAL_JUMP)
    LEA EBX,[EDI + 0x670]               ; 00422d7d
    MOV dword ptr [ESP + 0xb8],EBX      ; 00422d83
    LEA EBX,[EDI + 0x3628]              ; 00422d8a
    LEA ESI,[EDI + 0x158]               ; 00422d90
    JBE 0x00422da8                      ; 00422d96 | LAB_00422da8
        ;   XREF to: 00422da8 (CONDITIONAL_JUMP)
    CMP EAX,0x2                         ; 00422d98
    JZ 0x00422ed3                       ; 00422d9b | LAB_00422ed3
        ;   XREF to: 00422ed3 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00422da1
        ;   Label: LAB_00422da1
    POP EBP                             ; 00422da3
    POP EDI                             ; 00422da4
    POP ESI                             ; 00422da5
    POP EBX                             ; 00422da6
    RET                                 ; 00422da7
    PUSH 0x616955                       ; 00422da8 | = "flashlit.kfm" | s_flashlit_kfm_00616955 = flashlit.kfm
        ;   Label: LAB_00422da8
    PUSH ESI                            ; 00422dad
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00422dae | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00422db3
    PUSH ESI                            ; 00422db6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00422db7 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00422dbc
    LEA EAX,[ESP + 0x40]                ; 00422dbf
    PUSH EAX                            ; 00422dc3
    MOV ESI,dword ptr [EDI + 0x154]     ; 00422dc4
    PUSH EDI                            ; 00422dca
    CALL dword ptr [ESI + 0x14]         ; 00422dcb
    ADD ESP,0x8                         ; 00422dce
    FLD float ptr [ESP + 0x40]          ; 00422dd1
    FADD float ptr [ESP + 0x4c]         ; 00422dd5
    FST float ptr [ESP + 0xac]          ; 00422dd9
    FLD float ptr [0x0061697f]          ; 00422de0 | float FLOAT_0061697f
    FXCH                                ; 00422de6
    FMUL ST1                            ; 00422de8
    FLD float ptr [ESP + 0x48]          ; 00422dea
    FLD float ptr [ESP + 0x44]          ; 00422dee
    FADD float ptr [ESP + 0x50]         ; 00422df2
    FXCH                                ; 00422df6
    FADD float ptr [ESP + 0x54]         ; 00422df8
    FXCH                                ; 00422dfc
    FST float ptr [ESP + 0xb0]          ; 00422dfe
    FMUL ST3                            ; 00422e05
    FXCH                                ; 00422e07
    FST float ptr [ESP + 0xb4]          ; 00422e09
    FMUL ST3                            ; 00422e10
    FXCH ST2                            ; 00422e12
    FSTP float ptr [ESP + 0x70]         ; 00422e14
    FSTP float ptr [ESP + 0x74]         ; 00422e18
    MOV EAX,dword ptr [ESP + 0x70]      ; 00422e1c
    FSTP float ptr [ESP + 0x78]         ; 00422e20
    MOV dword ptr [EDI + 0x361c],EAX    ; 00422e24
    FLD float ptr [ESP + 0x40]          ; 00422e2a
    FADD float ptr [ESP + 0x4c]         ; 00422e2e
    FST float ptr [ESP + 0x58]          ; 00422e32
    FMUL ST1                            ; 00422e36
    FLD float ptr [ESP + 0x48]          ; 00422e38
    FLD float ptr [ESP + 0x44]          ; 00422e3c
    FADD float ptr [ESP + 0x50]         ; 00422e40
    FXCH                                ; 00422e44
    FADD float ptr [ESP + 0x54]         ; 00422e46
    FXCH                                ; 00422e4a
    FST float ptr [ESP + 0x5c]          ; 00422e4c
    FMUL ST3                            ; 00422e50
    FXCH                                ; 00422e52
    FST float ptr [ESP + 0x60]          ; 00422e54
    FMULP ST3                           ; 00422e58
    FXCH                                ; 00422e5a
    FSTP float ptr [ESP + 0xa0]         ; 00422e5c
    FSTP float ptr [ESP + 0xa4]         ; 00422e63
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00422e6a
    FSTP float ptr [ESP + 0xa8]         ; 00422e71
    MOV dword ptr [EDI + 0x3620],EAX    ; 00422e78
    FLD float ptr [ESP + 0x54]          ; 00422e7e
    FADD double ptr [0x00616987]        ; 00422e82 | double DOUBLE_00616987
    FSTP float ptr [EDI + 0x3624]       ; 00422e88
    MOV dword ptr [EBX + 0x8],0x0       ; 00422e8e
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00422e95
    MOV EDX,dword ptr [EBX + 0x8]       ; 00422e9c
    MOV dword ptr [EBX + 0x4],EDX       ; 00422e9f
    MOV EDX,dword ptr [EBX + 0x4]       ; 00422ea2
    MOV dword ptr [EBX],EDX             ; 00422ea5
    MOV dword ptr [EDI + 0x2324],0x0    ; 00422ea7
    MOV dword ptr [EAX + 0x38],0x42600000 ; 00422eb1
    MOV dword ptr [EDI + 0x7b0],0x42000000 ; 00422eb8
    MOV dword ptr [EDI + 0x314],0x3     ; 00422ec2
    MOV ESP,EBP                         ; 00422ecc
    POP EBP                             ; 00422ece
    POP EDI                             ; 00422ecf
    POP ESI                             ; 00422ed0
    POP EBX                             ; 00422ed1
    RET                                 ; 00422ed2
    PUSH 0x616962                       ; 00422ed3 | = "lantern.kfm" | s_lantern_kfm_00616962 = lantern.kfm
        ;   Label: LAB_00422ed3
    PUSH ESI                            ; 00422ed8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00422ed9 | void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00422ede
    PUSH ESI                            ; 00422ee1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00422ee2 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00422ee7
    LEA ESI,[ESP + 0x28]                ; 00422eea
    PUSH ESI                            ; 00422eee
    MOV EAX,dword ptr [EDI + 0x154]     ; 00422eef
    PUSH EDI                            ; 00422ef5
    CALL dword ptr [EAX + 0x14]         ; 00422ef6
    ADD ESP,0x8                         ; 00422ef9
    FLD float ptr [ESP + 0x28]          ; 00422efc
    FADD float ptr [ESP + 0x34]         ; 00422f00
    FST float ptr [ESP + 0x88]          ; 00422f04
    FLD float ptr [0x0061697f]          ; 00422f0b | float FLOAT_0061697f
    FXCH                                ; 00422f11
    FMUL ST1                            ; 00422f13
    FLD float ptr [ESP + 0x30]          ; 00422f15
    FLD float ptr [ESP + 0x2c]          ; 00422f19
    FADD float ptr [ESP + 0x38]         ; 00422f1d
    FXCH                                ; 00422f21
    FADD float ptr [ESP + 0x3c]         ; 00422f23
    FXCH                                ; 00422f27
    FST float ptr [ESP + 0x8c]          ; 00422f29
    FMUL ST3                            ; 00422f30
    FXCH                                ; 00422f32
    FST float ptr [ESP + 0x90]          ; 00422f34
    FMUL ST3                            ; 00422f3b
    FXCH ST2                            ; 00422f3d
    FSTP float ptr [ESP + 0x94]         ; 00422f3f
    FSTP float ptr [ESP + 0x98]         ; 00422f46
    MOV EAX,dword ptr [ESP + 0x94]      ; 00422f4d
    FSTP float ptr [ESP + 0x9c]         ; 00422f54
    MOV dword ptr [EDI + 0x361c],EAX    ; 00422f5b
    FLD float ptr [ESP + 0x28]          ; 00422f61
    FADD float ptr [ESP + 0x34]         ; 00422f65
    FST float ptr [ESP + 0x64]          ; 00422f69
    FMUL ST1                            ; 00422f6d
    FLD float ptr [ESP + 0x30]          ; 00422f6f
    FLD float ptr [ESP + 0x2c]          ; 00422f73
    FADD float ptr [ESP + 0x38]         ; 00422f77
    FXCH                                ; 00422f7b
    FADD float ptr [ESP + 0x3c]         ; 00422f7d
    FXCH                                ; 00422f81
    FST float ptr [ESP + 0x68]          ; 00422f83
    FMUL ST3                            ; 00422f87
    FXCH                                ; 00422f89
    FST float ptr [ESP + 0x6c]          ; 00422f8b
    FMULP ST3                           ; 00422f8f
    FXCH                                ; 00422f91
    FSTP float ptr [ESP + 0x7c]         ; 00422f93
    FSTP float ptr [ESP + 0x80]         ; 00422f97
    MOV EAX,dword ptr [ESP + 0x80]      ; 00422f9e
    FSTP float ptr [ESP + 0x84]         ; 00422fa5
    MOV dword ptr [EDI + 0x3620],EAX    ; 00422fac
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00422fb2
    MOV dword ptr [EDI + 0x3624],EAX    ; 00422fb6
    MOV dword ptr [EBX + 0x8],0x0       ; 00422fbc
    MOV EAX,dword ptr [EBX + 0x8]       ; 00422fc3
    MOV dword ptr [EBX + 0x4],EAX       ; 00422fc6
    MOV EAX,dword ptr [EBX + 0x4]       ; 00422fc9
    MOV dword ptr [EBX],EAX             ; 00422fcc
    MOV dword ptr [EDI + 0x3628],0x3e860a92 ; 00422fce
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00422fd8
    MOV dword ptr [EDI + 0x2324],0x0    ; 00422fdf
    MOV dword ptr [EAX + 0x38],0x42600000 ; 00422fe9
    MOV dword ptr [EDI + 0x7b0],0x42000000 ; 00422ff0
    MOV EDX,dword ptr [0x008229ac]      ; 00422ffa | undefined4 DAT_008229ac
    MOV dword ptr [EDI + 0x314],0x3     ; 00423000
    TEST EDX,EDX                        ; 0042300a
    JNZ 0x00423047                      ; 0042300c | LAB_00423047
        ;   XREF to: 00423047 (CONDITIONAL_JUMP)
    MOV ESI,0x8229ec                    ; 0042300e | CDemonFilter[8] CDemonFilter_ARRAY_008229ec
    XOR EBX,EBX                         ; 00423013
    PUSH EBX                            ; 00423015
        ;   Label: LAB_00423015
    PUSH 0x61696e                       ; 00423016 | = "lantern%d.raw" | s_lantern_d_raw_0061696e = lantern%d.raw
    LEA EAX,[ESP + 0x8]                 ; 0042301b
    PUSH EAX                            ; 0042301f
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00423020 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00423025
    MOV EAX,ESP                         ; 00423028
    PUSH EAX                            ; 0042302a
    PUSH ESI                            ; 0042302b | CDemonFilter[8] CDemonFilter_ARRAY_008229ec
    INC EBX                             ; 0042302c
    CALL core_dfilter.cpp_CDemonFilter_load_FUN_004702f0 ; 0042302d | void core_dfilter.cpp_CDemonFilter_load_FUN_004702f0(CDemonFilter * this_ptr, char * filename)
        ;   XREF to: 004702f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00423032
    ADD ESI,0x4c                        ; 00423035
    CMP EBX,0x8                         ; 00423038
    JL 0x00423015                       ; 0042303b | LAB_00423015
        ;   XREF to: 00423015 (CONDITIONAL_JUMP)
    MOV dword ptr [0x008229ac],0x1      ; 0042303d | undefined4 DAT_008229ac
    PUSH 0x0                            ; 00423047
        ;   Label: LAB_00423047
    PUSH 0x0                            ; 00423049
    PUSH 0x0                            ; 0042304b
    PUSH 0x8229ec                       ; 0042304d | CDemonFilter[8] CDemonFilter_ARRAY_008229ec
    ADD EDI,0x670                       ; 00423052
    PUSH EDI                            ; 00423058
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770 ; 00423059 | void core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
        ;   XREF to: 00474770 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0042305e
    MOV ESP,EBP                         ; 00423061
    POP EBP                             ; 00423063
    POP EDI                             ; 00423064
    POP ESI                             ; 00423065
    POP EBX                             ; 00423066
    RET                                 ; 00423067


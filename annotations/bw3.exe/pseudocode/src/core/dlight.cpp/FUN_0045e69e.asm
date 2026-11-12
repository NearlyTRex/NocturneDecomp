; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dlight_cpp_FUN_0045e69e(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005bb50c
;   undefined4 DAT_005bb514
;   undefined4 DAT_005bb518
;   undefined4 DAT_005bb51c
;   undefined4 DAT_005bb524
;   undefined4 DAT_005bb52c
;   undefined4 DAT_005bb534
;   undefined4 DAT_005bb53c
;   undefined4 DAT_005de4f0
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b9b0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0045e69e
        ;   Label: core_dlight.cpp_FUN_0045e69e
    PUSH EBX                            ; 0045e6a0
    PUSH ESI                            ; 0045e6a1
    PUSH EDI                            ; 0045e6a2
    PUSH EBP                            ; 0045e6a3
    MOV EBP,ESP                         ; 0045e6a4
    SUB ESP,0xdc                        ; 0045e6a6
    AND ESP,0xfffffff8                  ; 0045e6ac
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045e6af
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 0045e6b2
    JNZ 0x0045e6c2                      ; 0045e6b9
        ;   XREF to: 0045e6c2 (CONDITIONAL_JUMP)  ; LAB_0045e6c2
    MOV ESP,EBP                         ; 0045e6bb
    POP EBP                             ; 0045e6bd
    POP EDI                             ; 0045e6be
    POP ESI                             ; 0045e6bf
    POP EBX                             ; 0045e6c0
    RET                                 ; 0045e6c1
    ADD EAX,0x4                         ; 0045e6c2
        ;   Label: LAB_0045e6c2
    PUSH EAX                            ; 0045e6c5
    MOV ECX,dword ptr [0x005f2afc]      ; 0045e6c6 | DAT_005f2afc
    PUSH ECX                            ; 0045e6cc
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0045e6cd
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0045e6d2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045e6d5
    ADD EAX,0x10                        ; 0045e6d8
    PUSH EAX                            ; 0045e6db
    LEA ESI,[ESP + 0x40]                ; 0045e6dc
    CALL core_dirmat.cpp_FUN_0045b9b0   ; 0045e6e0
        ;   XREF to: 0045b9b0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b9b0()
    ADD ESP,0x4                         ; 0045e6e5
    PUSH 0x0                            ; 0045e6e8
    LEA EAX,[ESP + 0x4c]                ; 0045e6ea
    LEA EDI,[ESP + 0x4c]                ; 0045e6ee
    PUSH EAX                            ; 0045e6f2
    MOV EBX,dword ptr [0x005f2afc]      ; 0045e6f3 | DAT_005f2afc
    LEA ESI,[ESP + 0x44]                ; 0045e6f9
    PUSH EBX                            ; 0045e6fd
    MOVSD ES:EDI,ESI                    ; 0045e6fe
    MOVSD ES:EDI,ESI                    ; 0045e6ff
    MOVSD ES:EDI,ESI                    ; 0045e700
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0045e701
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0045e706
    PUSH 0x5f2828                       ; 0045e709
    MOV ESI,dword ptr [0x005f2afc]      ; 0045e70e | DAT_005f2afc
    PUSH ESI                            ; 0045e714
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0045e715
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0045e71a
    PUSH 0x1                            ; 0045e71d
    MOV EDI,dword ptr [0x005f2afc]      ; 0045e71f | DAT_005f2afc
    PUSH EDI                            ; 0045e725
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0045e726
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    MOV EAX,0x1                         ; 0045e72b
    ADD ESP,0x8                         ; 0045e730
    MOV dword ptr [ESP + 0x4],EAX       ; 0045e733
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045e737
        ;   Label: LAB_0045e737
    FLD float ptr [EAX + 0x38]          ; 0045e73a
    FDIVR double ptr [0x005bb53c]       ; 0045e73d | DAT_005bb53c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045e743
    MOV dword ptr [ESP + 0xd4],EAX      ; 0045e747
    FILD dword ptr [ESP + 0xd4]         ; 0045e74e
    FMULP                               ; 0045e755
    FMUL double ptr [0x005bb50c]        ; 0045e757 | DAT_005bb50c
    FST float ptr [ESP]                 ; 0045e75d
    FLD1                                ; 0045e760
    FPATAN                              ; 0045e762
    FCOS                                ; 0045e764
    XOR EDI,EDI                         ; 0045e766
    FSTP float ptr [ESP + 0xa8]         ; 0045e768
    MOV dword ptr [ESP + 0xd4],EDI      ; 0045e76f
        ;   Label: LAB_0045e76f
    FLD float ptr [0x005bb514]          ; 0045e776 | DAT_005bb514
    FILD dword ptr [ESP + 0xd4]         ; 0045e77c
    FMUL ST1                            ; 0045e783
    FLD float ptr [0x005bb518]          ; 0045e785 | DAT_005bb518
    FXCH                                ; 0045e78b
    FMUL ST1                            ; 0045e78d
    LEA EAX,[EDI + 0x1]                 ; 0045e78f
    FLD double ptr [0x005bb51c]         ; 0045e792 | DAT_005bb51c
    FXCH                                ; 0045e798
    FMUL ST1                            ; 0045e79a
    MOV dword ptr [ESP + 0xd4],EAX      ; 0045e79c
    FLD ST0                             ; 0045e7a3
    FSIN                                ; 0045e7a5
    FILD dword ptr [ESP + 0xd4]         ; 0045e7a7
    FMULP ST5                           ; 0045e7ae
    FXCH ST4                            ; 0045e7b0
    FMULP ST3                           ; 0045e7b2
    FXCH ST2                            ; 0045e7b4
    FMULP                               ; 0045e7b6
    FLD ST0                             ; 0045e7b8
    FSIN                                ; 0045e7ba
    FXCH ST2                            ; 0045e7bc
    FCOS                                ; 0045e7be
    FXCH                                ; 0045e7c0
    FCOS                                ; 0045e7c2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045e7c4
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 0045e7c7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045e7cd
    SAR EDX,0x1f                        ; 0045e7d0
    MOV EAX,dword ptr [EAX + 0x1cc0]    ; 0045e7d3
    SUB EAX,EDX                         ; 0045e7d9
    SAR EAX,0x1                         ; 0045e7db
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045e7dd
    MOV dword ptr [ESP + 0xd4],EAX      ; 0045e7e0
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 0045e7e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045e7ed
    SAR EDX,0x1f                        ; 0045e7f0
    MOV EAX,dword ptr [EAX + 0x1cc4]    ; 0045e7f3
    SUB EAX,EDX                         ; 0045e7f9
    SAR EAX,0x1                         ; 0045e7fb
    FLD float ptr [ESP]                 ; 0045e7fd
    FXCH ST2                            ; 0045e800
    FMUL ST2                            ; 0045e802
    MOV dword ptr [ESP + 0xd8],EAX      ; 0045e804
    FSTP float ptr [ESP + 0xb8]         ; 0045e80b
    FILD dword ptr [ESP + 0xd8]         ; 0045e812
    FLD ST0                             ; 0045e819
    FMUL float ptr [ESP + 0xb8]         ; 0045e81b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045e822
    FSUBP                               ; 0045e825
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 0045e827
    CALL crt_math.c_round_FUN_005a3120  ; 0045e82d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x9c]        ; 0045e832
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0045e839
    IMUL EAX,ECX                        ; 0045e840
    FXCH ST3                            ; 0045e843
    FMUL ST1                            ; 0045e845
    FSTP float ptr [ESP + 0xb4]         ; 0045e847
    FILD dword ptr [ESP + 0xd4]         ; 0045e84e
    FLD ST0                             ; 0045e855
    FMUL float ptr [ESP + 0xb4]         ; 0045e857
    FXCH ST3                            ; 0045e85e
    FMUL ST2                            ; 0045e860
    FXCH ST3                            ; 0045e862
    FADDP                               ; 0045e864
    FXCH ST3                            ; 0045e866
    FMULP                               ; 0045e868
    FXCH ST2                            ; 0045e86a
    CALL crt_math.c_round_FUN_005a3120  ; 0045e86c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0xa0]        ; 0045e871
    ADD EAX,dword ptr [ESP + 0xa0]      ; 0045e878
    MOV EDX,dword ptr [EDX + 0x2f94]    ; 0045e87f
    ADD EAX,EAX                         ; 0045e885
    ADD EDX,EAX                         ; 0045e887
    XOR EAX,EAX                         ; 0045e889
    MOV AX,word ptr [EDX]               ; 0045e88b
    MOV dword ptr [ESP + 0xd8],EAX      ; 0045e88e
    FILD dword ptr [ESP + 0xd8]         ; 0045e895
    FMUL double ptr [0x005bb524]        ; 0045e89c | DAT_005bb524
    XOR ESI,ESI                         ; 0045e8a2
    FXCH                                ; 0045e8a4
    FSTP float ptr [ESP + 0xac]         ; 0045e8a6
    FSTP float ptr [ESP + 0xc8]         ; 0045e8ad
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0045e8b4
    FSTP float ptr [ESP + 0xb0]         ; 0045e8bb
    MOV dword ptr [ESP + 0xc4],EAX      ; 0045e8c2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045e8c9
        ;   Label: LAB_0045e8c9
    MOV EAX,dword ptr [EAX + 0x140]     ; 0045e8cc
    FLD float ptr [ESP + 0xa8]          ; 0045e8d2
    MOV dword ptr [ESP + 0xa4],EAX      ; 0045e8d9
    MOV dword ptr [ESP + 0xd8],ESI      ; 0045e8e0
    FMUL float ptr [ESP + 0xa4]         ; 0045e8e7
    FILD dword ptr [ESP + 0xd8]         ; 0045e8ee
    FMUL ST1                            ; 0045e8f5
    FLD float ptr [0x005bb52c]          ; 0045e8f7 | DAT_005bb52c
    FXCH                                ; 0045e8fd
    FMUL ST1                            ; 0045e8ff
    FLD float ptr [ESP + 0xa4]          ; 0045e901
    FXCH                                ; 0045e908
    FSTP float ptr [ESP + 0xd0]         ; 0045e90a
    FSUB float ptr [ESP + 0xd0]         ; 0045e911
    FLD1                                ; 0045e918
    FDIV float ptr [ESP + 0xa4]         ; 0045e91a
    LEA EAX,[ESI + 0x1]                 ; 0045e921
    MOV dword ptr [ESP + 0xd8],EAX      ; 0045e924
    FILD dword ptr [ESP + 0xd8]         ; 0045e92b
    FMULP ST4                           ; 0045e932
    FXCH ST3                            ; 0045e934
    FMULP ST2                           ; 0045e936
    FLD float ptr [ESP + 0xa4]          ; 0045e938
    FXCH ST2                            ; 0045e93f
    FSTP float ptr [ESP + 0xcc]         ; 0045e941
    FXCH                                ; 0045e948
    FSUB float ptr [ESP + 0xcc]         ; 0045e94a
    FXCH                                ; 0045e951
    FMUL ST2                            ; 0045e953
    FXCH                                ; 0045e955
    FMULP ST2                           ; 0045e957
    FLD double ptr [0x005bb534]         ; 0045e959 | DAT_005bb534
    FXCH                                ; 0045e95f
    FMUL ST1                            ; 0045e961
    FXCH ST2                            ; 0045e963
    FMULP                               ; 0045e965
    FLD float ptr [ESP + 0xd0]          ; 0045e967
    FXCH ST2                            ; 0045e96e
    CALL crt_math.c_round_FUN_005a3120  ; 0045e970
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 0045e975
    CALL crt_math.c_round_FUN_005a3120  ; 0045e977
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 0045e97c
    FISTP dword ptr [ESP + 0xc0]        ; 0045e97e
    FISTP dword ptr [ESP + 0xbc]        ; 0045e985
    FCOMP float ptr [ESP + 0xc8]        ; 0045e98c
    FNSTSW AX                           ; 0045e993
    SAHF                                ; 0045e995
    JNC 0x0045ed34                      ; 0045e996
        ;   XREF to: 0045ed34 (CONDITIONAL_JUMP)  ; LAB_0045ed34
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0045e99c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0045e9a3
        ;   Label: LAB_0045e9a3
    FLD float ptr [ESP + 0x5c]          ; 0045e9a7
    FMUL float ptr [ESP + 0xb4]         ; 0045e9ab
    FLD float ptr [ESP + 0x5c]          ; 0045e9b2
    FMUL float ptr [ESP + 0xb8]         ; 0045e9b6
    LEA EBX,[ESP + 0x30]                ; 0045e9bd
    LEA EAX,[ESP + 0x54]                ; 0045e9c1
    MOV EDX,dword ptr [0x005f2afc]      ; 0045e9c5 | DAT_005f2afc
    FXCH                                ; 0045e9cb
    FSTP float ptr [ESP + 0x54]         ; 0045e9cd
    FSTP float ptr [ESP + 0x58]         ; 0045e9d1
    FLD float ptr [EAX]                 ; 0045e9d5
    FMUL float ptr [0x005de4f0]         ; 0045e9d7 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045e9dd
    FLD float ptr [EAX + 0x4]           ; 0045e9df
    FMUL float ptr [0x005de4f0]         ; 0045e9e2 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045e9e8
    FLD float ptr [EAX + 0x8]           ; 0045e9eb
    FMUL float ptr [0x005de4f0]         ; 0045e9ee | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045e9f4
    LEA EAX,[ESP + 0x30]                ; 0045e9f7
    PUSH EAX                            ; 0045e9fb
    MOV EAX,dword ptr [EDX]             ; 0045e9fc
    PUSH EAX                            ; 0045e9fe
    CALL engine_special.cpp_FUN_005632a3 ; 0045e9ff
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0045ea04
    FLD float ptr [ESP + 0xd0]          ; 0045ea07
    FCOMP float ptr [ESP + 0xc4]        ; 0045ea0e
    FNSTSW AX                           ; 0045ea15
    SAHF                                ; 0045ea17
    JNC 0x0045ed40                      ; 0045ea18
        ;   XREF to: 0045ed40 (CONDITIONAL_JUMP)  ; LAB_0045ed40
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0045ea1e
    MOV dword ptr [ESP + 0x5c],EAX      ; 0045ea25
        ;   Label: LAB_0045ea25
    FLD float ptr [ESP + 0x5c]          ; 0045ea29
    FMUL float ptr [ESP + 0xac]         ; 0045ea2d
    FLD float ptr [ESP + 0x5c]          ; 0045ea34
    FMUL float ptr [ESP + 0xb0]         ; 0045ea38
    LEA EBX,[ESP + 0x60]                ; 0045ea3f
    LEA EAX,[ESP + 0x54]                ; 0045ea43
    MOV EDX,dword ptr [0x005f2afc]      ; 0045ea47 | DAT_005f2afc
    FXCH                                ; 0045ea4d
    FSTP float ptr [ESP + 0x54]         ; 0045ea4f
    FSTP float ptr [ESP + 0x58]         ; 0045ea53
    FLD float ptr [EAX]                 ; 0045ea57
    FMUL float ptr [0x005de4f0]         ; 0045ea59 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045ea5f
    FLD float ptr [EAX + 0x4]           ; 0045ea61
    FMUL float ptr [0x005de4f0]         ; 0045ea64 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045ea6a
    FLD float ptr [EAX + 0x8]           ; 0045ea6d
    FMUL float ptr [0x005de4f0]         ; 0045ea70 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045ea76
    LEA EAX,[ESP + 0x60]                ; 0045ea79
    PUSH EAX                            ; 0045ea7d
    MOV EAX,dword ptr [EDX]             ; 0045ea7e
    ADD EAX,0x30                        ; 0045ea80
    PUSH EAX                            ; 0045ea83
    CALL engine_special.cpp_FUN_005632a3 ; 0045ea84
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0045ea89
    FLD float ptr [ESP + 0xcc]          ; 0045ea8c
    FCOMP float ptr [ESP + 0xc4]        ; 0045ea93
    FNSTSW AX                           ; 0045ea9a
    SAHF                                ; 0045ea9c
    JNC 0x0045ed4c                      ; 0045ea9d
        ;   XREF to: 0045ed4c (CONDITIONAL_JUMP)  ; LAB_0045ed4c
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0045eaa3
    MOV dword ptr [ESP + 0x5c],EAX      ; 0045eaaa
        ;   Label: LAB_0045eaaa
    FLD float ptr [ESP + 0x5c]          ; 0045eaae
    FMUL float ptr [ESP + 0xac]         ; 0045eab2
    FLD float ptr [ESP + 0x5c]          ; 0045eab9
    FMUL float ptr [ESP + 0xb0]         ; 0045eabd
    LEA EBX,[ESP + 0x6c]                ; 0045eac4
    LEA EAX,[ESP + 0x54]                ; 0045eac8
    MOV EDX,dword ptr [0x005f2afc]      ; 0045eacc | DAT_005f2afc
    FXCH                                ; 0045ead2
    FSTP float ptr [ESP + 0x54]         ; 0045ead4
    FSTP float ptr [ESP + 0x58]         ; 0045ead8
    FLD float ptr [EAX]                 ; 0045eadc
    FMUL float ptr [0x005de4f0]         ; 0045eade | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045eae4
    FLD float ptr [EAX + 0x4]           ; 0045eae6
    FMUL float ptr [0x005de4f0]         ; 0045eae9 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045eaef
    FLD float ptr [EAX + 0x8]           ; 0045eaf2
    FMUL float ptr [0x005de4f0]         ; 0045eaf5 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045eafb
    LEA EAX,[ESP + 0x6c]                ; 0045eafe
    PUSH EAX                            ; 0045eb02
    MOV EAX,dword ptr [EDX]             ; 0045eb03
    ADD EAX,0x60                        ; 0045eb05
    PUSH EAX                            ; 0045eb08
    CALL engine_special.cpp_FUN_005632a3 ; 0045eb09
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0045eb0e
    FLD float ptr [ESP + 0xcc]          ; 0045eb11
    FCOMP float ptr [ESP + 0xc8]        ; 0045eb18
    FNSTSW AX                           ; 0045eb1f
    SAHF                                ; 0045eb21
    JNC 0x0045ed58                      ; 0045eb22
        ;   XREF to: 0045ed58 (CONDITIONAL_JUMP)  ; LAB_0045ed58
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0045eb28
    MOV dword ptr [ESP + 0x5c],EAX      ; 0045eb2f
        ;   Label: LAB_0045eb2f
    FLD float ptr [ESP + 0x5c]          ; 0045eb33
    FMUL float ptr [ESP + 0xb4]         ; 0045eb37
    FLD float ptr [ESP + 0x5c]          ; 0045eb3e
    FMUL float ptr [ESP + 0xb8]         ; 0045eb42
    LEA EBX,[ESP + 0x78]                ; 0045eb49
    LEA EAX,[ESP + 0x54]                ; 0045eb4d
    MOV EDX,dword ptr [0x005f2afc]      ; 0045eb51 | DAT_005f2afc
    FXCH                                ; 0045eb57
    FSTP float ptr [ESP + 0x54]         ; 0045eb59
    FSTP float ptr [ESP + 0x58]         ; 0045eb5d
    FLD float ptr [EAX]                 ; 0045eb61
    FMUL float ptr [0x005de4f0]         ; 0045eb63 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045eb69
    FLD float ptr [EAX + 0x4]           ; 0045eb6b
    FMUL float ptr [0x005de4f0]         ; 0045eb6e | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045eb74
    FLD float ptr [EAX + 0x8]           ; 0045eb77
    FMUL float ptr [0x005de4f0]         ; 0045eb7a | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045eb80
    LEA EAX,[ESP + 0x78]                ; 0045eb83
    PUSH EAX                            ; 0045eb87
    MOV EAX,dword ptr [EDX]             ; 0045eb88
    ADD EAX,0x90                        ; 0045eb8a
    PUSH EAX                            ; 0045eb8f
    CALL engine_special.cpp_FUN_005632a3 ; 0045eb90
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x005f2afc]      ; 0045eb95 | DAT_005f2afc
    ADD ESP,0x8                         ; 0045eb9b
    MOV EBX,dword ptr [EDX]             ; 0045eb9e
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0045eba0
    MOV dword ptr [EBX + 0x2c],EAX      ; 0045eba7
    MOV EAX,dword ptr [EDX]             ; 0045ebaa
    MOV dword ptr [EAX + 0x28],0xffff   ; 0045ebac
    MOV EAX,dword ptr [EDX]             ; 0045ebb3
    MOV dword ptr [EAX + 0x24],0xffff   ; 0045ebb5
    MOV EAX,dword ptr [EDX]             ; 0045ebbc
    MOV dword ptr [EAX + 0x20],0xffff   ; 0045ebbe
    MOV EAX,dword ptr [EDX]             ; 0045ebc5
    MOV dword ptr [EAX + 0x18],0xf80000 ; 0045ebc7
    MOV EAX,dword ptr [EDX]             ; 0045ebce
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 0045ebd0
    MOV EBX,dword ptr [EDX]             ; 0045ebd7
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0045ebd9
    MOV dword ptr [EBX + 0x5c],EAX      ; 0045ebe0
    MOV EAX,dword ptr [EDX]             ; 0045ebe3
    MOV dword ptr [EAX + 0x58],0xffff   ; 0045ebe5
    MOV EAX,dword ptr [EDX]             ; 0045ebec
    MOV dword ptr [EAX + 0x54],0xffff   ; 0045ebee
    MOV EAX,dword ptr [EDX]             ; 0045ebf5
    MOV dword ptr [EAX + 0x50],0xffff   ; 0045ebf7
    MOV EAX,dword ptr [EDX]             ; 0045ebfe
    MOV dword ptr [EAX + 0x48],0x80000  ; 0045ec00
    MOV EAX,dword ptr [EDX]             ; 0045ec07
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 0045ec09
    MOV EBX,dword ptr [EDX]             ; 0045ec10
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0045ec12
    MOV dword ptr [EBX + 0x8c],EAX      ; 0045ec19
    MOV EAX,dword ptr [EDX]             ; 0045ec1f
    MOV dword ptr [EAX + 0x88],0xffff   ; 0045ec21
    MOV EAX,dword ptr [EDX]             ; 0045ec2b
    MOV dword ptr [EAX + 0x84],0xffff   ; 0045ec2d
    MOV EAX,dword ptr [EDX]             ; 0045ec37
    MOV dword ptr [EAX + 0x80],0xffff   ; 0045ec39
    MOV EAX,dword ptr [EDX]             ; 0045ec43
    MOV dword ptr [EAX + 0x78],0x80000  ; 0045ec45
    MOV EAX,dword ptr [EDX]             ; 0045ec4c
    MOV dword ptr [EAX + 0x7c],0x80000  ; 0045ec4e
    MOV EBX,dword ptr [EDX]             ; 0045ec55
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0045ec57
    MOV dword ptr [EBX + 0xbc],EAX      ; 0045ec5e
    MOV EAX,dword ptr [EDX]             ; 0045ec64
    MOV dword ptr [EAX + 0xb8],0xffff   ; 0045ec66
    MOV EAX,dword ptr [EDX]             ; 0045ec70
    MOV dword ptr [EAX + 0xb4],0xffff   ; 0045ec72
    MOV EAX,dword ptr [EDX]             ; 0045ec7c
    MOV dword ptr [EAX + 0xb0],0xffff   ; 0045ec7e
    MOV EAX,dword ptr [EDX]             ; 0045ec88
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 0045ec8a
    INC ESI                             ; 0045ec94
    MOV EAX,dword ptr [EDX]             ; 0045ec95
    XOR ECX,ECX                         ; 0045ec97
    MOV EBX,0x3                         ; 0045ec99
    MOV dword ptr [EAX + 0xac],0x80000  ; 0045ec9e
    MOV EAX,0x4                         ; 0045eca8
    MOV dword ptr [ESP + 0x1c],ECX      ; 0045ecad
    MOV dword ptr [ESP + 0x18],ECX      ; 0045ecb1
    MOV dword ptr [ESP + 0xc],EAX       ; 0045ecb5
    MOV EAX,0x1                         ; 0045ecb9
    MOV dword ptr [ESP + 0x14],ECX      ; 0045ecbe
    MOV dword ptr [ESP + 0x24],EAX      ; 0045ecc2
    LEA EAX,[ESP + 0x8]                 ; 0045ecc6
    MOV dword ptr [ESP + 0x10],ECX      ; 0045ecca
    PUSH EAX                            ; 0045ecce
    MOV dword ptr [ESP + 0x24],ECX      ; 0045eccf
    MOV ECX,0x2                         ; 0045ecd3
    PUSH EDX                            ; 0045ecd8
    MOV dword ptr [ESP + 0x34],EBX      ; 0045ecd9
    MOV dword ptr [ESP + 0x30],ECX      ; 0045ecdd
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 0045ece1
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0045ece6
    CMP ESI,0x4                         ; 0045ece9
    JL 0x0045e8c9                       ; 0045ecec
        ;   XREF to: 0045e8c9 (CONDITIONAL_JUMP)  ; LAB_0045e8c9
    INC EDI                             ; 0045ecf2
    CMP EDI,0x10                        ; 0045ecf3
    JL 0x0045e76f                       ; 0045ecf6
        ;   XREF to: 0045e76f (CONDITIONAL_JUMP)  ; LAB_0045e76f
    MOV ESI,dword ptr [ESP + 0x4]       ; 0045ecfc
    INC ESI                             ; 0045ed00
    MOV dword ptr [ESP + 0x4],ESI       ; 0045ed01
    CMP ESI,0x10                        ; 0045ed05
    JL 0x0045e737                       ; 0045ed08
        ;   XREF to: 0045e737 (CONDITIONAL_JUMP)  ; LAB_0045e737
    MOV EAX,[0x005f2afc]                ; 0045ed0e | DAT_005f2afc
    PUSH EAX                            ; 0045ed13
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 0045ed14
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0045ed19
    PUSH 0x0                            ; 0045ed1c
    MOV EDX,dword ptr [0x005f2afc]      ; 0045ed1e | DAT_005f2afc
    PUSH EDX                            ; 0045ed24
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0045ed25
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0045ed2a
    MOV ESP,EBP                         ; 0045ed2d
    POP EBP                             ; 0045ed2f
    POP EDI                             ; 0045ed30
    POP ESI                             ; 0045ed31
    POP EBX                             ; 0045ed32
    RET                                 ; 0045ed33
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0045ed34
        ;   Label: LAB_0045ed34
    JMP 0x0045e9a3                      ; 0045ed3b
        ;   XREF to: 0045e9a3 (UNCONDITIONAL_JUMP)  ; LAB_0045e9a3
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0045ed40
        ;   Label: LAB_0045ed40
    JMP 0x0045ea25                      ; 0045ed47
        ;   XREF to: 0045ea25 (UNCONDITIONAL_JUMP)  ; LAB_0045ea25
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0045ed4c
        ;   Label: LAB_0045ed4c
    JMP 0x0045eaaa                      ; 0045ed53
        ;   XREF to: 0045eaaa (UNCONDITIONAL_JUMP)  ; LAB_0045eaaa
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0045ed58
        ;   Label: LAB_0045ed58
    JMP 0x0045eb2f                      ; 0045ed5f
        ;   XREF to: 0045eb2f (UNCONDITIONAL_JUMP)  ; LAB_0045eb2f


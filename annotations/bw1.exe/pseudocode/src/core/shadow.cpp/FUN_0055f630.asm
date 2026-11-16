; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0055f630(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00605170
;   undefined4 DAT_006051a4
;   undefined4 DAT_006051a8
;   undefined4 DAT_00612560
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_special.cpp_transformAndProjectPoint_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055f630
        ;   Label: core_shadow.cpp_FUN_0055f630
    PUSH ESI                            ; 0055f631
    PUSH EDI                            ; 0055f632
    PUSH EBP                            ; 0055f633
    SUB ESP,0x134                       ; 0055f634
    MOV EBP,dword ptr [ESP + 0x14c]     ; 0055f63a
    FLD float ptr [EBP]                 ; 0055f641
    FLD float ptr [EBP + 0x4]           ; 0055f644
    LEA EDI,[ESP + 0x10c]               ; 0055f647
    MOV EAX,[0x006051a4]                ; 0055f64e | DAT_006051a4
    LEA ESI,[ESP + 0xf4]                ; 0055f653
    MOV dword ptr [ESP + 0x130],EAX     ; 0055f65a
    MOV EAX,[0x006051a8]                ; 0055f661 | DAT_006051a8
    FXCH                                ; 0055f666
    FADD float ptr [ESP + 0x130]        ; 0055f668
    MOV dword ptr [ESP + 0x128],EAX     ; 0055f66f
    FSTP float ptr [ESP + 0xf4]         ; 0055f676
    MOV EAX,dword ptr [EBP + 0x8]       ; 0055f67d
    FADD float ptr [ESP + 0x128]        ; 0055f680
    MOV dword ptr [ESP + 0xfc],EAX      ; 0055f687
    FSTP float ptr [ESP + 0xf8]         ; 0055f68e
    MOVSD ES:EDI,ESI                    ; 0055f695
    MOVSD ES:EDI,ESI                    ; 0055f696
    MOVSD ES:EDI,ESI                    ; 0055f697
    MOV EAX,dword ptr [ESP + 0x148]     ; 0055f698
    FLD float ptr [ESP + 0x10c]         ; 0055f69f
    FMUL float ptr [EAX + 0x27b8]       ; 0055f6a6
    FLD float ptr [ESP + 0x110]         ; 0055f6ac
    FMUL float ptr [EAX + 0x27b8]       ; 0055f6b3
    FLD float ptr [ESP + 0x114]         ; 0055f6b9
    FMUL float ptr [EAX + 0x27b8]       ; 0055f6c0
    LEA EDX,[ESP + 0x4c]                ; 0055f6c6
    LEA EDI,[ESP + 0x7c]                ; 0055f6ca
    LEA ESI,[ESP + 0x70]                ; 0055f6ce
    FXCH ST2                            ; 0055f6d2
    FSTP float ptr [ESP + 0x70]         ; 0055f6d4
    FSTP float ptr [ESP + 0x74]         ; 0055f6d8
    FSTP float ptr [ESP + 0x78]         ; 0055f6dc
    LEA EAX,[ESP + 0x7c]                ; 0055f6e0
    MOVSD ES:EDI,ESI                    ; 0055f6e4
    MOVSD ES:EDI,ESI                    ; 0055f6e5
    MOVSD ES:EDI,ESI                    ; 0055f6e6
    CMP EDX,EAX                         ; 0055f6e7
    JZ 0x0055f709                       ; 0055f6e9
        ;   XREF to: 0055f709 (CONDITIONAL_JUMP)  ; LAB_0055f709
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0055f6eb
    MOV dword ptr [ESP + 0x4c],EAX      ; 0055f6ef
    MOV EAX,dword ptr [ESP + 0x80]      ; 0055f6f3
    MOV dword ptr [ESP + 0x50],EAX      ; 0055f6fa
    MOV EAX,dword ptr [ESP + 0x84]      ; 0055f6fe
    MOV dword ptr [ESP + 0x54],EAX      ; 0055f705
    LEA EBX,[ESP + 0x34]                ; 0055f709
        ;   Label: LAB_0055f709
    LEA EAX,[ESP + 0x4c]                ; 0055f70d
    MOV EDX,dword ptr [0x00612560]      ; 0055f711 | DAT_00612560
    FLD float ptr [EAX]                 ; 0055f717
    FMUL float ptr [0x00605170]         ; 0055f719 | DAT_00605170
    FISTP dword ptr [EBX]               ; 0055f71f
    FLD float ptr [EAX + 0x4]           ; 0055f721
    FMUL float ptr [0x00605170]         ; 0055f724 | DAT_00605170
    FISTP dword ptr [EBX + 0x4]         ; 0055f72a
    FLD float ptr [EAX + 0x8]           ; 0055f72d
    FMUL float ptr [0x00605170]         ; 0055f730 | DAT_00605170
    FISTP dword ptr [EBX + 0x8]         ; 0055f736
    LEA EAX,[ESP + 0x34]                ; 0055f739
    PUSH EAX                            ; 0055f73d
    MOV EAX,dword ptr [EDX]             ; 0055f73e
    PUSH EAX                            ; 0055f740
    LEA EDI,[ESP + 0x48]                ; 0055f741
    LEA ESI,[ESP + 0x30]                ; 0055f745
    CALL engine_special.cpp_transformAndProjectPoint_FUN_00580173 ; 0055f749
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x006051a4]          ; 0055f74e | DAT_006051a4
    FLD float ptr [EBP]                 ; 0055f754
    FLD float ptr [EBP + 0x4]           ; 0055f757
    MOV EAX,[0x006051a8]                ; 0055f75a | DAT_006051a8
    ADD ESP,0x8                         ; 0055f75f
    FXCH ST2                            ; 0055f762
    FCHS                                ; 0055f764
    MOV dword ptr [ESP + 0x12c],EAX     ; 0055f766
    FADDP                               ; 0055f76d
    MOV EAX,dword ptr [EBP + 0x8]       ; 0055f76f
    FSTP float ptr [ESP + 0x28]         ; 0055f772
    FADD float ptr [ESP + 0x12c]        ; 0055f776
    MOV dword ptr [ESP + 0x30],EAX      ; 0055f77d
    FSTP float ptr [ESP + 0x2c]         ; 0055f781
    MOVSD ES:EDI,ESI                    ; 0055f785
    MOVSD ES:EDI,ESI                    ; 0055f786
    MOVSD ES:EDI,ESI                    ; 0055f787
    MOV EAX,dword ptr [ESP + 0x148]     ; 0055f788
    FLD float ptr [ESP + 0x40]          ; 0055f78f
    FMUL float ptr [EAX + 0x27b8]       ; 0055f793
    FLD float ptr [ESP + 0x44]          ; 0055f799
    FMUL float ptr [EAX + 0x27b8]       ; 0055f79d
    FLD float ptr [ESP + 0x48]          ; 0055f7a3
    FMUL float ptr [EAX + 0x27b8]       ; 0055f7a7
    LEA EDX,[ESP + 0x4c]                ; 0055f7ad
    LEA EDI,[ESP + 0xa0]                ; 0055f7b1
    LEA ESI,[ESP + 0xb8]                ; 0055f7b8
    FXCH ST2                            ; 0055f7bf
    FSTP float ptr [ESP + 0xb8]         ; 0055f7c1
    FSTP float ptr [ESP + 0xbc]         ; 0055f7c8
    FSTP float ptr [ESP + 0xc0]         ; 0055f7cf
    LEA EAX,[ESP + 0xa0]                ; 0055f7d6
    MOVSD ES:EDI,ESI                    ; 0055f7dd
    MOVSD ES:EDI,ESI                    ; 0055f7de
    MOVSD ES:EDI,ESI                    ; 0055f7df
    CMP EDX,EAX                         ; 0055f7e0
    JZ 0x0055f805                       ; 0055f7e2
        ;   XREF to: 0055f805 (CONDITIONAL_JUMP)  ; LAB_0055f805
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0055f7e4
    MOV dword ptr [ESP + 0x4c],EAX      ; 0055f7eb
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0055f7ef
    MOV dword ptr [ESP + 0x50],EAX      ; 0055f7f6
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0055f7fa
    MOV dword ptr [ESP + 0x54],EAX      ; 0055f801
    LEA EBX,[ESP + 0x118]               ; 0055f805
        ;   Label: LAB_0055f805
    LEA EAX,[ESP + 0x4c]                ; 0055f80c
    MOV EDX,dword ptr [0x00612560]      ; 0055f810 | DAT_00612560
    FLD float ptr [EAX]                 ; 0055f816
    FMUL float ptr [0x00605170]         ; 0055f818 | DAT_00605170
    FISTP dword ptr [EBX]               ; 0055f81e
    FLD float ptr [EAX + 0x4]           ; 0055f820
    FMUL float ptr [0x00605170]         ; 0055f823 | DAT_00605170
    FISTP dword ptr [EBX + 0x4]         ; 0055f829
    FLD float ptr [EAX + 0x8]           ; 0055f82c
    FMUL float ptr [0x00605170]         ; 0055f82f | DAT_00605170
    FISTP dword ptr [EBX + 0x8]         ; 0055f835
    LEA EAX,[ESP + 0x118]               ; 0055f838
    PUSH EAX                            ; 0055f83f
    MOV EAX,dword ptr [EDX]             ; 0055f840
    ADD EAX,0x30                        ; 0055f842
    PUSH EAX                            ; 0055f845
    LEA EDI,[ESP + 0xcc]                ; 0055f846
    LEA ESI,[ESP + 0x9c]                ; 0055f84d
    CALL engine_special.cpp_transformAndProjectPoint_FUN_00580173 ; 0055f854
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x006051a8]          ; 0055f859 | DAT_006051a8
    FLD float ptr [0x006051a4]          ; 0055f85f | DAT_006051a4
    FLD float ptr [EBP + 0x4]           ; 0055f865
    ADD ESP,0x8                         ; 0055f868
    FXCH ST2                            ; 0055f86b
    FCHS                                ; 0055f86d
    MOV EAX,dword ptr [EBP + 0x8]       ; 0055f86f
    FXCH                                ; 0055f872
    FCHS                                ; 0055f874
    MOV dword ptr [ESP + 0x9c],EAX      ; 0055f876
    FADD float ptr [EBP]                ; 0055f87d
    FXCH ST2                            ; 0055f880
    FADDP                               ; 0055f882
    FXCH                                ; 0055f884
    FSTP float ptr [ESP + 0x94]         ; 0055f886
    FSTP float ptr [ESP + 0x98]         ; 0055f88d
    MOVSD ES:EDI,ESI                    ; 0055f894
    MOVSD ES:EDI,ESI                    ; 0055f895
    MOVSD ES:EDI,ESI                    ; 0055f896
    MOV EAX,dword ptr [ESP + 0x148]     ; 0055f897
    FLD float ptr [ESP + 0xc4]          ; 0055f89e
    FMUL float ptr [EAX + 0x27b8]       ; 0055f8a5
    FLD float ptr [ESP + 0xc8]          ; 0055f8ab
    FMUL float ptr [EAX + 0x27b8]       ; 0055f8b2
    FLD float ptr [ESP + 0xcc]          ; 0055f8b8
    FMUL float ptr [EAX + 0x27b8]       ; 0055f8bf
    LEA EDX,[ESP + 0x4c]                ; 0055f8c5
    LEA EDI,[ESP + 0xe8]                ; 0055f8c9
    LEA ESI,[ESP + 0xdc]                ; 0055f8d0
    FXCH ST2                            ; 0055f8d7
    FSTP float ptr [ESP + 0xdc]         ; 0055f8d9
    FSTP float ptr [ESP + 0xe0]         ; 0055f8e0
    FSTP float ptr [ESP + 0xe4]         ; 0055f8e7
    LEA EAX,[ESP + 0xe8]                ; 0055f8ee
    MOVSD ES:EDI,ESI                    ; 0055f8f5
    MOVSD ES:EDI,ESI                    ; 0055f8f6
    MOVSD ES:EDI,ESI                    ; 0055f8f7
    CMP EDX,EAX                         ; 0055f8f8
    JZ 0x0055f91d                       ; 0055f8fa
        ;   XREF to: 0055f91d (CONDITIONAL_JUMP)  ; LAB_0055f91d
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0055f8fc
    MOV dword ptr [ESP + 0x4c],EAX      ; 0055f903
    MOV EAX,dword ptr [ESP + 0xec]      ; 0055f907
    MOV dword ptr [ESP + 0x50],EAX      ; 0055f90e
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0055f912
    MOV dword ptr [ESP + 0x54],EAX      ; 0055f919
    LEA EBX,[ESP + 0x58]                ; 0055f91d
        ;   Label: LAB_0055f91d
    LEA EAX,[ESP + 0x4c]                ; 0055f921
    MOV EDX,dword ptr [0x00612560]      ; 0055f925 | DAT_00612560
    FLD float ptr [EAX]                 ; 0055f92b
    FMUL float ptr [0x00605170]         ; 0055f92d | DAT_00605170
    FISTP dword ptr [EBX]               ; 0055f933
    FLD float ptr [EAX + 0x4]           ; 0055f935
    FMUL float ptr [0x00605170]         ; 0055f938 | DAT_00605170
    FISTP dword ptr [EBX + 0x4]         ; 0055f93e
    FLD float ptr [EAX + 0x8]           ; 0055f941
    FMUL float ptr [0x00605170]         ; 0055f944 | DAT_00605170
    FISTP dword ptr [EBX + 0x8]         ; 0055f94a
    LEA EAX,[ESP + 0x58]                ; 0055f94d
    PUSH EAX                            ; 0055f951
    MOV EAX,dword ptr [EDX]             ; 0055f952
    ADD EAX,0x60                        ; 0055f954
    PUSH EAX                            ; 0055f957
    LEA EDI,[ESP + 0x90]                ; 0055f958
    LEA ESI,[ESP + 0x6c]                ; 0055f95f
    CALL engine_special.cpp_transformAndProjectPoint_FUN_00580173 ; 0055f963
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [0x006051a8]          ; 0055f968 | DAT_006051a8
    FLD float ptr [0x006051a4]          ; 0055f96e | DAT_006051a4
    FLD float ptr [EBP + 0x4]           ; 0055f974
    ADD ESP,0x8                         ; 0055f977
    MOV EAX,dword ptr [EBP + 0x8]       ; 0055f97a
    FXCH ST2                            ; 0055f97d
    FCHS                                ; 0055f97f
    MOV dword ptr [ESP + 0x6c],EAX      ; 0055f981
    FXCH                                ; 0055f985
    FADD float ptr [EBP]                ; 0055f987
    FXCH ST2                            ; 0055f98a
    FADDP                               ; 0055f98c
    FXCH                                ; 0055f98e
    FSTP float ptr [ESP + 0x64]         ; 0055f990
    FSTP float ptr [ESP + 0x68]         ; 0055f994
    MOVSD ES:EDI,ESI                    ; 0055f998
    MOVSD ES:EDI,ESI                    ; 0055f999
    MOVSD ES:EDI,ESI                    ; 0055f99a
    MOV EAX,dword ptr [ESP + 0x148]     ; 0055f99b
    FLD float ptr [ESP + 0x88]          ; 0055f9a2
    FMUL float ptr [EAX + 0x27b8]       ; 0055f9a9
    FLD float ptr [ESP + 0x8c]          ; 0055f9af
    FMUL float ptr [EAX + 0x27b8]       ; 0055f9b6
    FLD float ptr [ESP + 0x90]          ; 0055f9bc
    FMUL float ptr [EAX + 0x27b8]       ; 0055f9c3
    LEA EBX,[ESP + 0x4c]                ; 0055f9c9
    LEA EDI,[ESP + 0x100]               ; 0055f9cd
    LEA ESI,[ESP + 0xd0]                ; 0055f9d4
    FXCH ST2                            ; 0055f9db
    FSTP float ptr [ESP + 0xd0]         ; 0055f9dd
    FSTP float ptr [ESP + 0xd4]         ; 0055f9e4
    FSTP float ptr [ESP + 0xd8]         ; 0055f9eb
    LEA EAX,[ESP + 0x100]               ; 0055f9f2
    MOVSD ES:EDI,ESI                    ; 0055f9f9
    MOVSD ES:EDI,ESI                    ; 0055f9fa
    MOVSD ES:EDI,ESI                    ; 0055f9fb
    CMP EBX,EAX                         ; 0055f9fc
    JZ 0x0055fa21                       ; 0055f9fe
        ;   XREF to: 0055fa21 (CONDITIONAL_JUMP)  ; LAB_0055fa21
    MOV EAX,dword ptr [ESP + 0x100]     ; 0055fa00
    MOV dword ptr [ESP + 0x4c],EAX      ; 0055fa07
    MOV EAX,dword ptr [ESP + 0x104]     ; 0055fa0b
    MOV dword ptr [ESP + 0x50],EAX      ; 0055fa12
    MOV EAX,dword ptr [ESP + 0x108]     ; 0055fa16
    MOV dword ptr [ESP + 0x54],EAX      ; 0055fa1d
    LEA EBX,[ESP + 0xac]                ; 0055fa21
        ;   Label: LAB_0055fa21
    LEA EAX,[ESP + 0x4c]                ; 0055fa28
    MOV EBP,dword ptr [0x00612560]      ; 0055fa2c | DAT_00612560
    FLD float ptr [EAX]                 ; 0055fa32
    FMUL float ptr [0x00605170]         ; 0055fa34 | DAT_00605170
    FISTP dword ptr [EBX]               ; 0055fa3a
    FLD float ptr [EAX + 0x4]           ; 0055fa3c
    FMUL float ptr [0x00605170]         ; 0055fa3f | DAT_00605170
    FISTP dword ptr [EBX + 0x4]         ; 0055fa45
    FLD float ptr [EAX + 0x8]           ; 0055fa48
    FMUL float ptr [0x00605170]         ; 0055fa4b | DAT_00605170
    FISTP dword ptr [EBX + 0x8]         ; 0055fa51
    LEA EAX,[ESP + 0xac]                ; 0055fa54
    PUSH EAX                            ; 0055fa5b
    MOV EAX,dword ptr [EBP]             ; 0055fa5c
    ADD EAX,0x90                        ; 0055fa5f
    PUSH EAX                            ; 0055fa64
    CALL engine_special.cpp_transformAndProjectPoint_FUN_00580173 ; 0055fa65
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 0055fa6a | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 0055fa6f
    MOV dword ptr [EDX + 0x20],0xffff   ; 0055fa71
    MOV EBX,dword ptr [EAX]             ; 0055fa78
    MOV dword ptr [EBX + 0x24],0x0      ; 0055fa7a
    MOV EBX,dword ptr [EAX]             ; 0055fa81
    MOV dword ptr [EBX + 0x28],0x0      ; 0055fa83
    MOV EDX,dword ptr [EAX]             ; 0055fa8a
    MOV dword ptr [EDX + 0x50],0xffff   ; 0055fa8c
    MOV EDX,dword ptr [EAX]             ; 0055fa93
    MOV dword ptr [EDX + 0x54],0x0      ; 0055fa95
    MOV EBX,dword ptr [EAX]             ; 0055fa9c
    MOV dword ptr [EBX + 0x58],0x0      ; 0055fa9e
    MOV EBX,dword ptr [EAX]             ; 0055faa5
    MOV dword ptr [EBX + 0x80],0xffff   ; 0055faa7
    MOV EBX,dword ptr [EAX]             ; 0055fab1
    MOV dword ptr [EBX + 0x84],0x0      ; 0055fab3
    MOV EBX,dword ptr [EAX]             ; 0055fabd
    MOV dword ptr [EBX + 0x88],0x0      ; 0055fabf
    MOV EBX,dword ptr [EAX]             ; 0055fac9
    MOV dword ptr [EBX + 0xb0],0xffff   ; 0055facb
    MOV EDX,dword ptr [EAX]             ; 0055fad5
    MOV dword ptr [EDX + 0xb4],0x0      ; 0055fad7
    MOV EBX,dword ptr [EAX]             ; 0055fae1
    MOV dword ptr [EBX + 0xb8],0x0      ; 0055fae3
    MOV EBX,dword ptr [EAX]             ; 0055faed
    MOV dword ptr [EBX + 0x2c],0x4000   ; 0055faef
    MOV EBX,dword ptr [EAX]             ; 0055faf6
    MOV dword ptr [EBX + 0x5c],0x4000   ; 0055faf8
    MOV EBX,dword ptr [EAX]             ; 0055faff
    MOV dword ptr [EBX + 0x8c],0x4000   ; 0055fb01
    MOV EDX,dword ptr [EAX]             ; 0055fb0b
    MOV dword ptr [EDX + 0xbc],0x4000   ; 0055fb0d
    MOV EBX,dword ptr [EAX]             ; 0055fb17
    MOV dword ptr [EBX + 0x18],0x80000  ; 0055fb19
    MOV EDX,dword ptr [EAX]             ; 0055fb20
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 0055fb22
    MOV EBX,dword ptr [EAX]             ; 0055fb29
    ADD ESP,0x8                         ; 0055fb2b
    MOV dword ptr [EBX + 0x48],0xf80000 ; 0055fb2e
    MOV EBX,dword ptr [EAX]             ; 0055fb35
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 0055fb37
    MOV EBX,dword ptr [EAX]             ; 0055fb3e
    MOV dword ptr [EBX + 0x78],0xf80000 ; 0055fb40
    MOV EBX,dword ptr [EAX]             ; 0055fb47
    MOV dword ptr [EBX + 0x7c],0x80000  ; 0055fb49
    MOV EBX,dword ptr [EAX]             ; 0055fb50
    MOV EDX,0x4                         ; 0055fb52
    MOV dword ptr [EBX + 0xa8],0x80000  ; 0055fb57
    PUSH 0x6231a8                       ; 0055fb61
    MOV EBX,dword ptr [EAX]             ; 0055fb66
    XOR ECX,ECX                         ; 0055fb68
    PUSH EAX                            ; 0055fb6a
    MOV dword ptr [EBX + 0xac],0x80000  ; 0055fb6b
    MOV EBX,0x3                         ; 0055fb75
    MOV dword ptr [ESP + 0xc],EDX       ; 0055fb7a
    MOV dword ptr [ESP + 0x1c],ECX      ; 0055fb7e
    MOV dword ptr [ESP + 0x18],ECX      ; 0055fb82
    MOV dword ptr [ESP + 0x14],ECX      ; 0055fb86
    MOV dword ptr [ESP + 0x10],ECX      ; 0055fb8a
    MOV dword ptr [ESP + 0x20],ECX      ; 0055fb8e
    MOV EDX,0x1                         ; 0055fb92
    MOV ECX,0x2                         ; 0055fb97
    MOV dword ptr [ESP + 0x2c],EBX      ; 0055fb9c
    MOV dword ptr [ESP + 0x24],EDX      ; 0055fba0
    MOV dword ptr [ESP + 0x28],ECX      ; 0055fba4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 0055fba8
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0055fbad
    PUSH 0x1                            ; 0055fbb0
    MOV ESI,dword ptr [0x00612560]      ; 0055fbb2 | DAT_00612560
    PUSH ESI                            ; 0055fbb8
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 0055fbb9
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0055fbbe
    MOV EAX,ESP                         ; 0055fbc1
    PUSH EAX                            ; 0055fbc3
    MOV EDI,dword ptr [0x00612560]      ; 0055fbc4 | DAT_00612560
    PUSH EDI                            ; 0055fbca
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 0055fbcb
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0055fbd0
    XOR EBP,EBP                         ; 0055fbd3
    PUSH EBP                            ; 0055fbd5
    MOV EBP,dword ptr [0x00612560]      ; 0055fbd6 | DAT_00612560
    PUSH EBP                            ; 0055fbdc
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 0055fbdd
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0055fbe2
    ADD ESP,0x134                       ; 0055fbe5
    POP EBP                             ; 0055fbeb
    POP EDI                             ; 0055fbec
    POP ESI                             ; 0055fbed
    POP EBX                             ; 0055fbee
    RET                                 ; 0055fbef


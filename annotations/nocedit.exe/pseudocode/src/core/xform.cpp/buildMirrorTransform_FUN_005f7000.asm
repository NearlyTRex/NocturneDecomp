; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_xform_cpp_buildMirrorTransform_FUN_005f7000(CVector3f *axis_vector,float distance,CMatrix3x4f *matrix_out)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   axis_vector
; float            Stack[0x8]:4   distance
; Local Variables:
; CMatrix3x4f      Stack[-0x1a4]:48  local_1a4
; CMatrix3x4f      Stack[-0x174]:48  local_174
; CMatrix3x4f      Stack[-0x144]:48  local_144
; CMatrix3x4f      Stack[-0x114]:48  local_114
; CMatrix3x4f      Stack[-0xe4]:48  local_e4
; CMatrix3x4f      Stack[-0xb4]:48  local_b4
; CMatrix3x4f      Stack[-0x84]:48  local_84
; CMatrix3x4f      Stack[-0x54]:48  local_54
; CVector3f        Stack[-0x24]:12  local_24
; CVector3f        Stack[-0x18]:12  local_18
; float            Stack[-0xc]:4  local_c
;
; Called Functions:
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
;   core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0
;   core_xform.cpp_inverse_FUN_005f6210
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f7000
        ;   Label: core_xform.cpp_buildMirrorTransform_FUN_005f7000
    PUSH EDI                            ; 005f7001
    SUB ESP,0x19c                       ; 005f7002
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 005f7008
    MOV EBX,ESI                         ; 005f700f
    FLD float ptr [EAX + 0x4]           ; 005f7011
    FMUL ST0                            ; 005f7014
    FLD float ptr [EAX]                 ; 005f7016
    FMUL ST0                            ; 005f7018
    FADDP                               ; 005f701a
    FLD float ptr [EAX + 0x8]           ; 005f701c
    FMUL ST0                            ; 005f701f
    FADDP                               ; 005f7021
    FDIVR float ptr [ESP + 0x1ac]       ; 005f7023
    FLD float ptr [EAX]                 ; 005f702a
    FXCH                                ; 005f702c
    FSTP float ptr [ESP + 0x198]        ; 005f702e
    FMUL float ptr [ESP + 0x198]        ; 005f7035
    FSTP float ptr [ESP + 0x180]        ; 005f703c
    FLD float ptr [EAX + 0x4]           ; 005f7043
    FMUL float ptr [ESP + 0x198]        ; 005f7046
    PUSH EAX                            ; 005f704d
    FSTP float ptr [ESP + 0x188]        ; 005f704e
    FLD float ptr [EAX + 0x8]           ; 005f7055
    LEA EAX,[ESP + 0x190]               ; 005f7058
    FMUL float ptr [ESP + 0x19c]        ; 005f705f
    PUSH EAX                            ; 005f7066
    FSTP float ptr [ESP + 0x190]        ; 005f7067
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005f706e
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005f7073
    PUSH EAX                            ; 005f7076
    LEA EAX,[ESP + 0x184]               ; 005f7077
    PUSH EAX                            ; 005f707e
    LEA EAX,[ESP + 0x128]               ; 005f707f
    PUSH EAX                            ; 005f7086
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 005f7087
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005f708c
    LEA EAX,[ESP + 0x120]               ; 005f708f
    PUSH EAX                            ; 005f7096
    LEA ESI,[ESP + 0x154]               ; 005f7097
    LEA EDI,[ESP + 0xf4]                ; 005f709e
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 005f70a5
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    JMP 0x03fc2707                      ; 005f70aa
        ;   XREF to: 03fc2707 (UNCONDITIONAL_JUMP)  ; LAB_03fc2707
    PUSH 0x0                            ; 005f70c3
        ;   Label: LAB_005f70c3
    LEA ESI,[ESP + 0x8]                 ; 005f70c5
    LEA EDI,[ESP + 0x98]                ; 005f70c9
    CALL core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0 ; 005f70d0
        ;   XREF to: 005f6fa0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_buildZFlipMatrix_FUN_005f6fa0(float z_offset, CMatrix3x4f * matrix_out)
    JMP 0x03fc2771                      ; 005f70d5
        ;   XREF to: 03fc2771 (UNCONDITIONAL_JUMP)  ; LAB_03fc2771
    PUSH EAX                            ; 005f70f2
        ;   Label: LAB_005f70f2
    LEA ESI,[ESP + 0x3c]                ; 005f70f3
    LEA EDI,[ESP + 0xcc]                ; 005f70f7
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005f70fe
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc27df                      ; 005f7103
        ;   XREF to: 03fc27df (UNCONDITIONAL_JUMP)  ; LAB_03fc27df
    PUSH EAX                            ; 005f7118
        ;   Label: LAB_005f7118
    LEA ESI,[ESP + 0x68]                ; 005f7119
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005f711d
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV EDI,EBX                         ; 005f7122
    JMP 0x03fc2845                      ; 005f7124
        ;   XREF to: 03fc2845 (UNCONDITIONAL_JUMP)  ; LAB_03fc2845
    MOV EAX,EBX                         ; 005f7132
        ;   Label: LAB_005f7132
    ADD ESP,0x19c                       ; 005f7134
    POP EDI                             ; 005f713a
    POP EBX                             ; 005f713b
    RET                                 ; 005f713c
    MOV ECX,0xc                         ; 03fc2707
        ;   Label: LAB_03fc2707
    ADD ESP,0x4                         ; 03fc270c
    LEA EAX,[ESP + 0xf0]                ; 03fc270f
    LEA ESI,[ESP + 0x150]               ; 03fc2716
    PUSH EAX                            ; 03fc271d
    MOV ECX,dword ptr [ESI]             ; 03fc271e
    MOV dword ptr [EDI],ECX             ; 03fc2720
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc2722
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc2725
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc2728
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc272b
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc272e
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc2731
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc2734
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc2737
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc273a
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc273d
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc2740
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc2743
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc2746
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc2749
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc274c
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc274f
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc2752
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc2755
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc2758
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc275b
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc275e
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc2761
    ADD ESI,0x30                        ; 03fc2764
    ADD EDI,0x30                        ; 03fc2767
    XOR ECX,ECX                         ; 03fc276a
    JMP 0x005f70c3                      ; 03fc276c
        ;   XREF to: 005f70c3 (UNCONDITIONAL_JUMP)  ; LAB_005f70c3
    MOV ECX,0xc                         ; 03fc2771
        ;   Label: LAB_03fc2771
    ADD ESP,0x4                         ; 03fc2776
    LEA EAX,[ESP + 0x94]                ; 03fc2779
    LEA ESI,[ESP + 0x4]                 ; 03fc2780
    PUSH EAX                            ; 03fc2784
    LEA EAX,[ESP + 0x128]               ; 03fc2785
    MOV ECX,dword ptr [ESI]             ; 03fc278c
    MOV dword ptr [EDI],ECX             ; 03fc278e
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc2790
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc2793
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc2796
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc2799
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc279c
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc279f
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc27a2
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc27a5
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc27a8
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc27ab
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc27ae
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc27b1
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc27b4
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc27b7
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc27ba
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc27bd
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc27c0
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc27c3
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc27c6
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc27c9
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc27cc
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc27cf
    ADD ESI,0x30                        ; 03fc27d2
    ADD EDI,0x30                        ; 03fc27d5
    XOR ECX,ECX                         ; 03fc27d8
    JMP 0x005f70f2                      ; 03fc27da
        ;   XREF to: 005f70f2 (UNCONDITIONAL_JUMP)  ; LAB_005f70f2
    MOV ECX,0xc                         ; 03fc27df
        ;   Label: LAB_03fc27df
    LEA ESI,[ESP + 0x3c]                ; 03fc27e4
    ADD ESP,0x8                         ; 03fc27e8
    LEA EAX,[ESP + 0xc4]                ; 03fc27eb
    MOV ECX,dword ptr [ESI]             ; 03fc27f2
    MOV dword ptr [EDI],ECX             ; 03fc27f4
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc27f6
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc27f9
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc27fc
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc27ff
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc2802
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc2805
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc2808
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc280b
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc280e
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc2811
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc2814
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc2817
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc281a
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc281d
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc2820
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc2823
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc2826
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc2829
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc282c
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc282f
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc2832
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc2835
    ADD ESI,0x30                        ; 03fc2838
    ADD EDI,0x30                        ; 03fc283b
    XOR ECX,ECX                         ; 03fc283e
    JMP 0x005f7118                      ; 03fc2840
        ;   XREF to: 005f7118 (UNCONDITIONAL_JUMP)  ; LAB_005f7118
    MOV ECX,0xc                         ; 03fc2845
        ;   Label: LAB_03fc2845
    LEA ESI,[ESP + 0x68]                ; 03fc284a
    ADD ESP,0x8                         ; 03fc284e
    MOV ECX,dword ptr [ESI]             ; 03fc2851
    MOV dword ptr [EDI],ECX             ; 03fc2853
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc2855
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc2858
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc285b
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc285e
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc2861
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc2864
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc2867
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc286a
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc286d
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc2870
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc2873
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc2876
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc2879
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc287c
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc287f
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc2882
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc2885
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc2888
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc288b
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc288e
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc2891
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc2894
    ADD ESI,0x30                        ; 03fc2897
    ADD EDI,0x30                        ; 03fc289a
    XOR ECX,ECX                         ; 03fc289d
    JMP 0x005f7132                      ; 03fc289f
        ;   XREF to: 005f7132 (UNCONDITIONAL_JUMP)  ; LAB_005f7132


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_0045f5a0(CVector3f *position,CVector3f *rotation,float fov,float falloff)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position
; CVector3f *      Stack[0x8]:4   rotation
; float            Stack[0xc]:4   fov
; float            Stack[0x10]:4   falloff
; Local Variables:
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   core_demnfolk.cpp_CDemnfolk_renderTransparent_FUN_00458200 at 00458389
;   core_litecone.cpp_CLightCone_renderTransparent_FUN_004e40d0 at 004e415a
;   core_zombie.cpp_CZombie_renderTransparent_FUN_0058beb0 at 0058c039
;
; Referenced Globals:
;   undefined4 DAT_005bb58c
;   undefined4 DAT_005bb594
;   undefined4 DAT_005bb598
;   undefined4 DAT_005bb59c
;   undefined4 DAT_005bb5a4
;   undefined4 DAT_005bb5ac
;   undefined4 DAT_005de4f0
;   undefined4 DAT_005f2828
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f5a0
        ;   Label: core_dlight.cpp_renderConeLightGeometry_FUN_0045f5a0
    PUSH ESI                            ; 0045f5a1
    PUSH EDI                            ; 0045f5a2
    PUSH EBP                            ; 0045f5a3
    MOV EBP,ESP                         ; 0045f5a4
    SUB ESP,0xac                        ; 0045f5a6
    AND ESP,0xfffffff8                  ; 0045f5ac
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045f5af
    MOV dword ptr [ESP + 0x4],EAX       ; 0045f5b2
    MOV EDX,dword ptr [0x005f2afc]      ; 0045f5b6 | DAT_005f2afc
    PUSH EDX                            ; 0045f5bc | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0045f5bd
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0045f5c2
    TEST EAX,EAX                        ; 0045f5c5
    JZ 0x0045f5d0                       ; 0045f5c7
        ;   XREF to: 0045f5d0 (CONDITIONAL_JUMP)  ; LAB_0045f5d0
    MOV ESP,EBP                         ; 0045f5c9
    POP EBP                             ; 0045f5cb
    POP EDI                             ; 0045f5cc
    POP ESI                             ; 0045f5cd
    POP EBX                             ; 0045f5ce
    RET                                 ; 0045f5cf
    MOV ECX,dword ptr [EBP + 0x14]      ; 0045f5d0
        ;   Label: LAB_0045f5d0
    PUSH ECX                            ; 0045f5d3
    MOV EBX,dword ptr [0x005f2afc]      ; 0045f5d4 | DAT_005f2afc
    PUSH EBX                            ; 0045f5da | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0045f5db
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0045f5e0
    PUSH 0x0                            ; 0045f5e3
    MOV ESI,dword ptr [EBP + 0x18]      ; 0045f5e5
    PUSH ESI                            ; 0045f5e8
    MOV EDI,dword ptr [0x005f2afc]      ; 0045f5e9 | DAT_005f2afc
    PUSH EDI                            ; 0045f5ef | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0045f5f0
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0045f5f5
    PUSH 0x5f2828                       ; 0045f5f8 | DAT_005f2828
    MOV EAX,[0x005f2afc]                ; 0045f5fd | DAT_005f2afc
    PUSH EAX                            ; 0045f602 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0045f603
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0045f608
    PUSH 0x1                            ; 0045f60b
    MOV EDX,dword ptr [0x005f2afc]      ; 0045f60d | DAT_005f2afc
    PUSH EDX                            ; 0045f613 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0045f614
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0045f619
    FLD1                                ; 0045f61c
    FDIV float ptr [EBP + 0x20]         ; 0045f61e
    MOV EDI,0x1                         ; 0045f621
    FSTP float ptr [ESP + 0x90]         ; 0045f626
    FLD float ptr [ESP + 0x4]           ; 0045f62d
        ;   Label: LAB_0045f62d
    FDIVR double ptr [0x005bb5ac]       ; 0045f631 | DAT_005bb5ac
    MOV dword ptr [ESP + 0xa8],EDI      ; 0045f637
    FILD dword ptr [ESP + 0xa8]         ; 0045f63e
    FMULP                               ; 0045f645
    FMUL double ptr [0x005bb58c]        ; 0045f647 | DAT_005bb58c
    FST float ptr [ESP]                 ; 0045f64d
    FLD1                                ; 0045f650
    FPATAN                              ; 0045f652
    FCOS                                ; 0045f654
    FMUL float ptr [EBP + 0x20]         ; 0045f656
    XOR EAX,EAX                         ; 0045f659
    FSTP float ptr [ESP + 0xa4]         ; 0045f65b
    MOV dword ptr [ESP + 0xa8],EAX      ; 0045f662
        ;   Label: LAB_0045f662
    FLD float ptr [0x005bb594]          ; 0045f669 | DAT_005bb594
    FILD dword ptr [ESP + 0xa8]         ; 0045f66f
    FMUL ST1                            ; 0045f676
    FLD float ptr [0x005bb598]          ; 0045f678 | DAT_005bb598
    FXCH                                ; 0045f67e
    FMUL ST1                            ; 0045f680
    FLD double ptr [0x005bb59c]         ; 0045f682 | DAT_005bb59c
    FXCH                                ; 0045f688
    FMUL ST1                            ; 0045f68a
    LEA ESI,[EAX + 0x1]                 ; 0045f68c
    FLD ST0                             ; 0045f68f
    FSIN                                ; 0045f691
    MOV dword ptr [ESP + 0xa8],ESI      ; 0045f693
    FILD dword ptr [ESP + 0xa8]         ; 0045f69a
    FMULP ST5                           ; 0045f6a1
    FXCH ST4                            ; 0045f6a3
    FMULP ST3                           ; 0045f6a5
    FXCH ST2                            ; 0045f6a7
    FMULP                               ; 0045f6a9
    FLD ST0                             ; 0045f6ab
    FSIN                                ; 0045f6ad
    FXCH ST2                            ; 0045f6af
    FCOS                                ; 0045f6b1
    FXCH                                ; 0045f6b3
    FCOS                                ; 0045f6b5
    FLD float ptr [ESP]                 ; 0045f6b7
    FXCH ST4                            ; 0045f6ba
    FMUL ST4                            ; 0045f6bc
    FXCH ST2                            ; 0045f6be
    FMUL ST4                            ; 0045f6c0
    FXCH ST3                            ; 0045f6c2
    FMUL ST4                            ; 0045f6c4
    FXCH                                ; 0045f6c6
    FMULP ST4                           ; 0045f6c8
    FXCH                                ; 0045f6ca
    FSTP float ptr [ESP + 0x94]         ; 0045f6cc
    FXCH                                ; 0045f6d3
    FSTP float ptr [ESP + 0x98]         ; 0045f6d5
    FSTP float ptr [ESP + 0x9c]         ; 0045f6dc
    FSTP float ptr [ESP + 0xa0]         ; 0045f6e3
    FLDZ                                ; 0045f6ea
    FLD float ptr [EBP + 0x20]          ; 0045f6ec
    FLD ST0                             ; 0045f6ef
    FSUB float ptr [ESP + 0xa4]         ; 0045f6f1
    FXCH ST2                            ; 0045f6f8
    FMUL float ptr [ESP + 0xa4]         ; 0045f6fa
    FXCH ST2                            ; 0045f701
    FLD float ptr [ESP + 0x90]          ; 0045f703
    FXCH                                ; 0045f70a
    FMUL ST1                            ; 0045f70c
    FXCH ST3                            ; 0045f70e
    FST float ptr [ESP + 0x80]          ; 0045f710
    FMUL float ptr [ESP + 0x94]         ; 0045f717
    FLD float ptr [ESP + 0x80]          ; 0045f71e
    FXCH ST3                            ; 0045f725
    FSUB float ptr [ESP + 0x80]         ; 0045f727
    FXCH ST3                            ; 0045f72e
    FMUL float ptr [ESP + 0x98]         ; 0045f730
    FXCH ST3                            ; 0045f737
    FMULP ST2                           ; 0045f739
    FXCH ST3                            ; 0045f73b
    FLD double ptr [0x005bb5a4]         ; 0045f73d | DAT_005bb5a4
    FXCH                                ; 0045f743
    FMUL ST1                            ; 0045f745
    FXCH ST2                            ; 0045f747
    FMULP                               ; 0045f749
    LEA EBX,[ESP + 0x3c]                ; 0045f74b
    MOV EAX,dword ptr [ESP + 0x80]      ; 0045f74f
    MOV EDX,dword ptr [0x005f2afc]      ; 0045f756 | DAT_005f2afc
    MOV dword ptr [ESP + 0x38],EAX      ; 0045f75c
    FXCH ST3                            ; 0045f760
    FSTP float ptr [ESP + 0x30]         ; 0045f762
    FXCH                                ; 0045f766
    FSTP float ptr [ESP + 0x34]         ; 0045f768
    LEA EAX,[ESP + 0x30]                ; 0045f76c
    CALL crt_math.c_round_FUN_005a3120  ; 0045f770
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x8c]        ; 0045f775
    CALL crt_math.c_round_FUN_005a3120  ; 0045f77c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x88]        ; 0045f781
    FLD float ptr [EAX]                 ; 0045f788
    FMUL float ptr [0x005de4f0]         ; 0045f78a | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045f790
    FLD float ptr [EAX + 0x4]           ; 0045f792
    FMUL float ptr [0x005de4f0]         ; 0045f795 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045f79b
    FLD float ptr [EAX + 0x8]           ; 0045f79e
    FMUL float ptr [0x005de4f0]         ; 0045f7a1 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045f7a7
    LEA EAX,[ESP + 0x3c]                ; 0045f7aa
    PUSH EAX                            ; 0045f7ae
    MOV EAX,dword ptr [EDX]             ; 0045f7af
    PUSH EAX                            ; 0045f7b1
    CALL engine_special.cpp_FUN_005632a3 ; 0045f7b2
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0045f7b7
    FLD float ptr [ESP + 0x80]          ; 0045f7ba
    FMUL float ptr [ESP + 0x9c]         ; 0045f7c1
    FLD float ptr [ESP + 0x80]          ; 0045f7c8
    FMUL float ptr [ESP + 0xa0]         ; 0045f7cf
    LEA EBX,[ESP + 0x48]                ; 0045f7d6
    MOV EAX,dword ptr [ESP + 0x80]      ; 0045f7da
    MOV EDX,dword ptr [0x005f2afc]      ; 0045f7e1 | DAT_005f2afc
    MOV dword ptr [ESP + 0x38],EAX      ; 0045f7e7
    FXCH                                ; 0045f7eb
    FSTP float ptr [ESP + 0x30]         ; 0045f7ed
    LEA EAX,[ESP + 0x30]                ; 0045f7f1
    FSTP float ptr [ESP + 0x34]         ; 0045f7f5
    FLD float ptr [EAX]                 ; 0045f7f9
    FMUL float ptr [0x005de4f0]         ; 0045f7fb | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045f801
    FLD float ptr [EAX + 0x4]           ; 0045f803
    FMUL float ptr [0x005de4f0]         ; 0045f806 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045f80c
    FLD float ptr [EAX + 0x8]           ; 0045f80f
    FMUL float ptr [0x005de4f0]         ; 0045f812 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045f818
    LEA EAX,[ESP + 0x48]                ; 0045f81b
    PUSH EAX                            ; 0045f81f
    MOV EAX,dword ptr [EDX]             ; 0045f820 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0045f822
    PUSH EAX                            ; 0045f825
    CALL engine_special.cpp_FUN_005632a3 ; 0045f826
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0045f82b
    FLD float ptr [ESP + 0xa4]          ; 0045f82e
    FMUL float ptr [ESP + 0x9c]         ; 0045f835
    FLD float ptr [ESP + 0xa4]          ; 0045f83c
    FMUL float ptr [ESP + 0xa0]         ; 0045f843
    LEA EBX,[ESP + 0x54]                ; 0045f84a
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0045f84e
    MOV EDX,dword ptr [0x005f2afc]      ; 0045f855 | DAT_005f2afc
    MOV dword ptr [ESP + 0x38],EAX      ; 0045f85b
    FXCH                                ; 0045f85f
    FSTP float ptr [ESP + 0x30]         ; 0045f861
    LEA EAX,[ESP + 0x30]                ; 0045f865
    FSTP float ptr [ESP + 0x34]         ; 0045f869
    FLD float ptr [EAX]                 ; 0045f86d
    FMUL float ptr [0x005de4f0]         ; 0045f86f | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045f875
    FLD float ptr [EAX + 0x4]           ; 0045f877
    FMUL float ptr [0x005de4f0]         ; 0045f87a | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045f880
    FLD float ptr [EAX + 0x8]           ; 0045f883
    FMUL float ptr [0x005de4f0]         ; 0045f886 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045f88c
    LEA EAX,[ESP + 0x54]                ; 0045f88f
    PUSH EAX                            ; 0045f893
    MOV EAX,dword ptr [EDX]             ; 0045f894 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0045f896
    PUSH EAX                            ; 0045f899
    CALL engine_special.cpp_FUN_005632a3 ; 0045f89a
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0045f89f
    FLD float ptr [ESP + 0xa4]          ; 0045f8a2
    FMUL float ptr [ESP + 0x94]         ; 0045f8a9
    FLD float ptr [ESP + 0xa4]          ; 0045f8b0
    FMUL float ptr [ESP + 0x98]         ; 0045f8b7
    LEA EBX,[ESP + 0x60]                ; 0045f8be
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0045f8c2
    MOV EDX,dword ptr [0x005f2afc]      ; 0045f8c9 | DAT_005f2afc
    MOV dword ptr [ESP + 0x38],EAX      ; 0045f8cf
    FXCH                                ; 0045f8d3
    FSTP float ptr [ESP + 0x30]         ; 0045f8d5
    LEA EAX,[ESP + 0x30]                ; 0045f8d9
    FSTP float ptr [ESP + 0x34]         ; 0045f8dd
    FLD float ptr [EAX]                 ; 0045f8e1
    FMUL float ptr [0x005de4f0]         ; 0045f8e3 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045f8e9
    FLD float ptr [EAX + 0x4]           ; 0045f8eb
    FMUL float ptr [0x005de4f0]         ; 0045f8ee | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045f8f4
    FLD float ptr [EAX + 0x8]           ; 0045f8f7
    FMUL float ptr [0x005de4f0]         ; 0045f8fa | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045f900
    LEA EAX,[ESP + 0x60]                ; 0045f903
    PUSH EAX                            ; 0045f907
    MOV EAX,dword ptr [EDX]             ; 0045f908 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 0045f90a
    PUSH EAX                            ; 0045f90f
    CALL engine_special.cpp_FUN_005632a3 ; 0045f910
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0045f915
    MOV EDX,dword ptr [0x005f2afc]      ; 0045f918 | DAT_005f2afc
    MOV EBX,dword ptr [EDX]             ; 0045f91e | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x88]      ; 0045f920
    MOV dword ptr [EBX + 0x2c],EAX      ; 0045f927
    MOV EAX,dword ptr [EDX]             ; 0045f92a | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x28],0xffff   ; 0045f92c
    MOV EAX,dword ptr [EDX]             ; 0045f933 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x24],0xffff   ; 0045f935
    MOV EAX,dword ptr [EDX]             ; 0045f93c | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x20],0xffff   ; 0045f93e
    MOV EAX,dword ptr [EDX]             ; 0045f945 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x18],0xf80000 ; 0045f947
    MOV EAX,dword ptr [EDX]             ; 0045f94e | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 0045f950
    MOV EBX,dword ptr [EDX]             ; 0045f957 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x88]      ; 0045f959
    MOV dword ptr [EBX + 0x5c],EAX      ; 0045f960
    MOV EAX,dword ptr [EDX]             ; 0045f963 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x58],0xffff   ; 0045f965
    MOV EAX,dword ptr [EDX]             ; 0045f96c | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x54],0xffff   ; 0045f96e
    MOV EAX,dword ptr [EDX]             ; 0045f975 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x50],0xffff   ; 0045f977
    MOV EAX,dword ptr [EDX]             ; 0045f97e | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x48],0x80000  ; 0045f980
    MOV EAX,dword ptr [EDX]             ; 0045f987 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 0045f989
    MOV EBX,dword ptr [EDX]             ; 0045f990 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0045f992
    MOV dword ptr [EBX + 0x8c],EAX      ; 0045f999
    MOV EAX,dword ptr [EDX]             ; 0045f99f | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x88],0xffff   ; 0045f9a1
    MOV EAX,dword ptr [EDX]             ; 0045f9ab | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x84],0xffff   ; 0045f9ad
    MOV EAX,dword ptr [EDX]             ; 0045f9b7 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x80],0xffff   ; 0045f9b9
    MOV EAX,dword ptr [EDX]             ; 0045f9c3 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x78],0x80000  ; 0045f9c5
    MOV EAX,dword ptr [EDX]             ; 0045f9cc | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x7c],0x80000  ; 0045f9ce
    MOV EBX,dword ptr [EDX]             ; 0045f9d5 | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0045f9d7
    MOV dword ptr [EBX + 0xbc],EAX      ; 0045f9de
    MOV EAX,dword ptr [EDX]             ; 0045f9e4 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0xb8],0xffff   ; 0045f9e6
    MOV EAX,dword ptr [EDX]             ; 0045f9f0 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0xb4],0xffff   ; 0045f9f2
    MOV EAX,dword ptr [EDX]             ; 0045f9fc | DAT_01bdd7e4
    MOV dword ptr [EAX + 0xb0],0xffff   ; 0045f9fe
    MOV EAX,dword ptr [EDX]             ; 0045fa08 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 0045fa0a
    MOV EAX,dword ptr [EDX]             ; 0045fa14 | DAT_01bdd7e4
    MOV ECX,0x4                         ; 0045fa16
    XOR EBX,EBX                         ; 0045fa1b
    MOV dword ptr [EAX + 0xac],0x80000  ; 0045fa1d
    MOV EAX,0x3                         ; 0045fa27
    MOV dword ptr [ESP + 0xc],ECX       ; 0045fa2c
    MOV dword ptr [ESP + 0x1c],EBX      ; 0045fa30
    MOV dword ptr [ESP + 0x18],EBX      ; 0045fa34
    MOV dword ptr [ESP + 0x14],EBX      ; 0045fa38
    MOV dword ptr [ESP + 0x10],EBX      ; 0045fa3c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0045fa40
    LEA EAX,[ESP + 0x8]                 ; 0045fa44
    MOV dword ptr [ESP + 0x20],EBX      ; 0045fa48
    PUSH EAX                            ; 0045fa4c
    MOV ECX,0x1                         ; 0045fa4d
    MOV EBX,0x2                         ; 0045fa52
    PUSH EDX                            ; 0045fa57 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x2c],ECX      ; 0045fa58
    MOV dword ptr [ESP + 0x30],EBX      ; 0045fa5c
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 0045fa60
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0045fa65
    MOV EAX,ESI                         ; 0045fa68
    CMP ESI,0x8                         ; 0045fa6a
    JL 0x0045f662                       ; 0045fa6d
        ;   XREF to: 0045f662 (CONDITIONAL_JUMP)  ; LAB_0045f662
    INC EDI                             ; 0045fa73
    CMP EDI,0x8                         ; 0045fa74
    JL 0x0045f62d                       ; 0045fa77
        ;   XREF to: 0045f62d (CONDITIONAL_JUMP)  ; LAB_0045f62d
    MOV EDX,dword ptr [0x005f2afc]      ; 0045fa7d | DAT_005f2afc
    PUSH EDX                            ; 0045fa83 | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 0045fa84
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0045fa89
    PUSH 0x0                            ; 0045fa8c
    MOV ECX,dword ptr [0x005f2afc]      ; 0045fa8e | DAT_005f2afc
    PUSH ECX                            ; 0045fa94 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0045fa95
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0045fa9a
    MOV ESP,EBP                         ; 0045fa9d
    POP EBP                             ; 0045fa9f
    POP EDI                             ; 0045faa0
    POP ESI                             ; 0045faa1
    POP EBX                             ; 0045faa2
    RET                                 ; 0045faa3


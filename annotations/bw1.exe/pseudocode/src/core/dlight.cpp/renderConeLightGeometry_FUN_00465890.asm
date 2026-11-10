; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_00465890(CVector3f *position,CVector3f *rotation,float fov,float falloff)
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
; XREF[4]:
;   core_demnfolk.cpp_CDemnfolk_renderTransparent_FUN_0045c020 at 0045c1a9
;   core_litecone.cpp_CLightCone_renderTransparent_FUN_00502e80 at 00502f0a
;   core_vehicle.cpp_CVehicle_renderOpaque_FUN_005a8670 at 005a8908
;   core_zombie.cpp_CZombie_renderTransparent_FUN_005be020 at 005be1a9
;
; Referenced Globals:
;   undefined4 DAT_005d9274
;   undefined4 DAT_005d927c
;   undefined4 DAT_005d9280
;   undefined4 DAT_005d9284
;   undefined4 DAT_005d928c
;   undefined4 DAT_005d9294
;   undefined4 DAT_005febd0
;   undefined4 DAT_006122a8
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_matrix.c_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465890
        ;   Label: core_dlight.cpp_renderConeLightGeometry_FUN_00465890
    PUSH ESI                            ; 00465891
    PUSH EDI                            ; 00465892
    PUSH EBP                            ; 00465893
    MOV EBP,ESP                         ; 00465894
    SUB ESP,0xac                        ; 00465896
    AND ESP,0xfffffff8                  ; 0046589c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046589f
    MOV dword ptr [ESP + 0x4],EAX       ; 004658a2
    MOV EDX,dword ptr [0x00612560]      ; 004658a6 | DAT_00612560
    PUSH EDX                            ; 004658ac | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 004658ad
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004658b2
    TEST EAX,EAX                        ; 004658b5
    JZ 0x004658c0                       ; 004658b7
        ;   XREF to: 004658c0 (CONDITIONAL_JUMP)  ; LAB_004658c0
    MOV ESP,EBP                         ; 004658b9
    POP EBP                             ; 004658bb
    POP EDI                             ; 004658bc
    POP ESI                             ; 004658bd
    POP EBX                             ; 004658be
    RET                                 ; 004658bf
    MOV ECX,dword ptr [EBP + 0x14]      ; 004658c0
        ;   Label: LAB_004658c0
    PUSH ECX                            ; 004658c3
    MOV EBX,dword ptr [0x00612560]      ; 004658c4 | DAT_00612560
    PUSH EBX                            ; 004658ca | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004658cb
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004658d0
    PUSH 0x0                            ; 004658d3
    MOV ESI,dword ptr [EBP + 0x18]      ; 004658d5
    PUSH ESI                            ; 004658d8
    MOV EDI,dword ptr [0x00612560]      ; 004658d9 | DAT_00612560
    PUSH EDI                            ; 004658df | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004658e0
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004658e5
    PUSH 0x6122a8                       ; 004658e8 | DAT_006122a8
    MOV EAX,[0x00612560]                ; 004658ed | DAT_00612560
    PUSH EAX                            ; 004658f2 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004658f3
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004658f8
    PUSH 0x1                            ; 004658fb
    MOV EDX,dword ptr [0x00612560]      ; 004658fd | DAT_00612560
    PUSH EDX                            ; 00465903 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 00465904
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00465909
    FLD1                                ; 0046590c
    FDIV float ptr [EBP + 0x20]         ; 0046590e
    MOV EDI,0x1                         ; 00465911
    FSTP float ptr [ESP + 0x90]         ; 00465916
    FLD float ptr [ESP + 0x4]           ; 0046591d
        ;   Label: LAB_0046591d
    FDIVR double ptr [0x005d9294]       ; 00465921 | DAT_005d9294
    MOV dword ptr [ESP + 0xa8],EDI      ; 00465927
    FILD dword ptr [ESP + 0xa8]         ; 0046592e
    FMULP                               ; 00465935
    FMUL double ptr [0x005d9274]        ; 00465937 | DAT_005d9274
    FST float ptr [ESP]                 ; 0046593d
    FLD1                                ; 00465940
    FPATAN                              ; 00465942
    FCOS                                ; 00465944
    FMUL float ptr [EBP + 0x20]         ; 00465946
    XOR EAX,EAX                         ; 00465949
    FSTP float ptr [ESP + 0xa4]         ; 0046594b
    MOV dword ptr [ESP + 0xa8],EAX      ; 00465952
        ;   Label: LAB_00465952
    FLD float ptr [0x005d927c]          ; 00465959 | DAT_005d927c
    FILD dword ptr [ESP + 0xa8]         ; 0046595f
    FMUL ST1                            ; 00465966
    FLD float ptr [0x005d9280]          ; 00465968 | DAT_005d9280
    FXCH                                ; 0046596e
    FMUL ST1                            ; 00465970
    FLD double ptr [0x005d9284]         ; 00465972 | DAT_005d9284
    FXCH                                ; 00465978
    FMUL ST1                            ; 0046597a
    LEA ESI,[EAX + 0x1]                 ; 0046597c
    FLD ST0                             ; 0046597f
    FSIN                                ; 00465981
    MOV dword ptr [ESP + 0xa8],ESI      ; 00465983
    FILD dword ptr [ESP + 0xa8]         ; 0046598a
    FMULP ST5                           ; 00465991
    FXCH ST4                            ; 00465993
    FMULP ST3                           ; 00465995
    FXCH ST2                            ; 00465997
    FMULP                               ; 00465999
    FLD ST0                             ; 0046599b
    FSIN                                ; 0046599d
    FXCH ST2                            ; 0046599f
    FCOS                                ; 004659a1
    FXCH                                ; 004659a3
    FCOS                                ; 004659a5
    FLD float ptr [ESP]                 ; 004659a7
    FXCH ST4                            ; 004659aa
    FMUL ST4                            ; 004659ac
    FXCH ST2                            ; 004659ae
    FMUL ST4                            ; 004659b0
    FXCH ST3                            ; 004659b2
    FMUL ST4                            ; 004659b4
    FXCH                                ; 004659b6
    FMULP ST4                           ; 004659b8
    FXCH                                ; 004659ba
    FSTP float ptr [ESP + 0x94]         ; 004659bc
    FXCH                                ; 004659c3
    FSTP float ptr [ESP + 0x98]         ; 004659c5
    FSTP float ptr [ESP + 0x9c]         ; 004659cc
    FSTP float ptr [ESP + 0xa0]         ; 004659d3
    FLDZ                                ; 004659da
    FLD float ptr [EBP + 0x20]          ; 004659dc
    FLD ST0                             ; 004659df
    FSUB float ptr [ESP + 0xa4]         ; 004659e1
    FXCH ST2                            ; 004659e8
    FMUL float ptr [ESP + 0xa4]         ; 004659ea
    FXCH ST2                            ; 004659f1
    FLD float ptr [ESP + 0x90]          ; 004659f3
    FXCH                                ; 004659fa
    FMUL ST1                            ; 004659fc
    FXCH ST3                            ; 004659fe
    FST float ptr [ESP + 0x80]          ; 00465a00
    FMUL float ptr [ESP + 0x94]         ; 00465a07
    FLD float ptr [ESP + 0x80]          ; 00465a0e
    FXCH ST3                            ; 00465a15
    FSUB float ptr [ESP + 0x80]         ; 00465a17
    FXCH ST3                            ; 00465a1e
    FMUL float ptr [ESP + 0x98]         ; 00465a20
    FXCH ST3                            ; 00465a27
    FMULP ST2                           ; 00465a29
    FXCH ST3                            ; 00465a2b
    FLD double ptr [0x005d928c]         ; 00465a2d | DAT_005d928c
    FXCH                                ; 00465a33
    FMUL ST1                            ; 00465a35
    FXCH ST2                            ; 00465a37
    FMULP                               ; 00465a39
    LEA EBX,[ESP + 0x3c]                ; 00465a3b
    MOV EAX,dword ptr [ESP + 0x80]      ; 00465a3f
    MOV EDX,dword ptr [0x00612560]      ; 00465a46 | DAT_00612560
    MOV dword ptr [ESP + 0x38],EAX      ; 00465a4c
    FXCH ST3                            ; 00465a50
    FSTP float ptr [ESP + 0x30]         ; 00465a52
    FXCH                                ; 00465a56
    FSTP float ptr [ESP + 0x34]         ; 00465a58
    LEA EAX,[ESP + 0x30]                ; 00465a5c
    CALL crt_math.c_round_FUN_005c03a0  ; 00465a60
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8c]        ; 00465a65
    CALL crt_math.c_round_FUN_005c03a0  ; 00465a6c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x88]        ; 00465a71
    FLD float ptr [EAX]                 ; 00465a78
    FMUL float ptr [0x005febd0]         ; 00465a7a | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00465a80
    FLD float ptr [EAX + 0x4]           ; 00465a82
    FMUL float ptr [0x005febd0]         ; 00465a85 | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00465a8b
    FLD float ptr [EAX + 0x8]           ; 00465a8e
    FMUL float ptr [0x005febd0]         ; 00465a91 | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00465a97
    LEA EAX,[ESP + 0x3c]                ; 00465a9a
    PUSH EAX                            ; 00465a9e
    MOV EAX,dword ptr [EDX]             ; 00465a9f
    PUSH EAX                            ; 00465aa1
    CALL engine_special.cpp_FUN_00580173 ; 00465aa2
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00465aa7
    FLD float ptr [ESP + 0x80]          ; 00465aaa
    FMUL float ptr [ESP + 0x9c]         ; 00465ab1
    FLD float ptr [ESP + 0x80]          ; 00465ab8
    FMUL float ptr [ESP + 0xa0]         ; 00465abf
    LEA EBX,[ESP + 0x48]                ; 00465ac6
    MOV EAX,dword ptr [ESP + 0x80]      ; 00465aca
    MOV EDX,dword ptr [0x00612560]      ; 00465ad1 | DAT_00612560
    MOV dword ptr [ESP + 0x38],EAX      ; 00465ad7
    FXCH                                ; 00465adb
    FSTP float ptr [ESP + 0x30]         ; 00465add
    LEA EAX,[ESP + 0x30]                ; 00465ae1
    FSTP float ptr [ESP + 0x34]         ; 00465ae5
    FLD float ptr [EAX]                 ; 00465ae9
    FMUL float ptr [0x005febd0]         ; 00465aeb | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00465af1
    FLD float ptr [EAX + 0x4]           ; 00465af3
    FMUL float ptr [0x005febd0]         ; 00465af6 | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00465afc
    FLD float ptr [EAX + 0x8]           ; 00465aff
    FMUL float ptr [0x005febd0]         ; 00465b02 | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00465b08
    LEA EAX,[ESP + 0x48]                ; 00465b0b
    PUSH EAX                            ; 00465b0f
    MOV EAX,dword ptr [EDX]             ; 00465b10 | DAT_01bc120c
    ADD EAX,0x30                        ; 00465b12
    PUSH EAX                            ; 00465b15
    CALL engine_special.cpp_FUN_00580173 ; 00465b16
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00465b1b
    FLD float ptr [ESP + 0xa4]          ; 00465b1e
    FMUL float ptr [ESP + 0x9c]         ; 00465b25
    FLD float ptr [ESP + 0xa4]          ; 00465b2c
    FMUL float ptr [ESP + 0xa0]         ; 00465b33
    LEA EBX,[ESP + 0x54]                ; 00465b3a
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00465b3e
    MOV EDX,dword ptr [0x00612560]      ; 00465b45 | DAT_00612560
    MOV dword ptr [ESP + 0x38],EAX      ; 00465b4b
    FXCH                                ; 00465b4f
    FSTP float ptr [ESP + 0x30]         ; 00465b51
    LEA EAX,[ESP + 0x30]                ; 00465b55
    FSTP float ptr [ESP + 0x34]         ; 00465b59
    FLD float ptr [EAX]                 ; 00465b5d
    FMUL float ptr [0x005febd0]         ; 00465b5f | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00465b65
    FLD float ptr [EAX + 0x4]           ; 00465b67
    FMUL float ptr [0x005febd0]         ; 00465b6a | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00465b70
    FLD float ptr [EAX + 0x8]           ; 00465b73
    FMUL float ptr [0x005febd0]         ; 00465b76 | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00465b7c
    LEA EAX,[ESP + 0x54]                ; 00465b7f
    PUSH EAX                            ; 00465b83
    MOV EAX,dword ptr [EDX]             ; 00465b84 | DAT_01bc120c
    ADD EAX,0x60                        ; 00465b86
    PUSH EAX                            ; 00465b89
    CALL engine_special.cpp_FUN_00580173 ; 00465b8a
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00465b8f
    FLD float ptr [ESP + 0xa4]          ; 00465b92
    FMUL float ptr [ESP + 0x94]         ; 00465b99
    FLD float ptr [ESP + 0xa4]          ; 00465ba0
    FMUL float ptr [ESP + 0x98]         ; 00465ba7
    LEA EBX,[ESP + 0x60]                ; 00465bae
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00465bb2
    MOV EDX,dword ptr [0x00612560]      ; 00465bb9 | DAT_00612560
    MOV dword ptr [ESP + 0x38],EAX      ; 00465bbf
    FXCH                                ; 00465bc3
    FSTP float ptr [ESP + 0x30]         ; 00465bc5
    LEA EAX,[ESP + 0x30]                ; 00465bc9
    FSTP float ptr [ESP + 0x34]         ; 00465bcd
    FLD float ptr [EAX]                 ; 00465bd1
    FMUL float ptr [0x005febd0]         ; 00465bd3 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00465bd9
    FLD float ptr [EAX + 0x4]           ; 00465bdb
    FMUL float ptr [0x005febd0]         ; 00465bde | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00465be4
    FLD float ptr [EAX + 0x8]           ; 00465be7
    FMUL float ptr [0x005febd0]         ; 00465bea | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00465bf0
    LEA EAX,[ESP + 0x60]                ; 00465bf3
    PUSH EAX                            ; 00465bf7
    MOV EAX,dword ptr [EDX]             ; 00465bf8 | DAT_01bc120c
    ADD EAX,0x90                        ; 00465bfa
    PUSH EAX                            ; 00465bff
    CALL engine_special.cpp_FUN_00580173 ; 00465c00
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00465c05
    MOV EDX,dword ptr [0x00612560]      ; 00465c08 | DAT_00612560
    MOV EBX,dword ptr [EDX]             ; 00465c0e | DAT_01bc120c
    MOV EAX,dword ptr [ESP + 0x88]      ; 00465c10
    MOV dword ptr [EBX + 0x2c],EAX      ; 00465c17
    MOV EAX,dword ptr [EDX]             ; 00465c1a | DAT_01bc120c
    MOV dword ptr [EAX + 0x28],0xffff   ; 00465c1c
    MOV EAX,dword ptr [EDX]             ; 00465c23 | DAT_01bc120c
    MOV dword ptr [EAX + 0x24],0xffff   ; 00465c25
    MOV EAX,dword ptr [EDX]             ; 00465c2c | DAT_01bc120c
    MOV dword ptr [EAX + 0x20],0xffff   ; 00465c2e
    MOV EAX,dword ptr [EDX]             ; 00465c35 | DAT_01bc120c
    MOV dword ptr [EAX + 0x18],0xf80000 ; 00465c37
    MOV EAX,dword ptr [EDX]             ; 00465c3e | DAT_01bc120c
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 00465c40
    MOV EBX,dword ptr [EDX]             ; 00465c47 | DAT_01bc120c
    MOV EAX,dword ptr [ESP + 0x88]      ; 00465c49
    MOV dword ptr [EBX + 0x5c],EAX      ; 00465c50
    MOV EAX,dword ptr [EDX]             ; 00465c53 | DAT_01bc120c
    MOV dword ptr [EAX + 0x58],0xffff   ; 00465c55
    MOV EAX,dword ptr [EDX]             ; 00465c5c | DAT_01bc120c
    MOV dword ptr [EAX + 0x54],0xffff   ; 00465c5e
    MOV EAX,dword ptr [EDX]             ; 00465c65 | DAT_01bc120c
    MOV dword ptr [EAX + 0x50],0xffff   ; 00465c67
    MOV EAX,dword ptr [EDX]             ; 00465c6e | DAT_01bc120c
    MOV dword ptr [EAX + 0x48],0x80000  ; 00465c70
    MOV EAX,dword ptr [EDX]             ; 00465c77 | DAT_01bc120c
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 00465c79
    MOV EBX,dword ptr [EDX]             ; 00465c80 | DAT_01bc120c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00465c82
    MOV dword ptr [EBX + 0x8c],EAX      ; 00465c89
    MOV EAX,dword ptr [EDX]             ; 00465c8f | DAT_01bc120c
    MOV dword ptr [EAX + 0x88],0xffff   ; 00465c91
    MOV EAX,dword ptr [EDX]             ; 00465c9b | DAT_01bc120c
    MOV dword ptr [EAX + 0x84],0xffff   ; 00465c9d
    MOV EAX,dword ptr [EDX]             ; 00465ca7 | DAT_01bc120c
    MOV dword ptr [EAX + 0x80],0xffff   ; 00465ca9
    MOV EAX,dword ptr [EDX]             ; 00465cb3 | DAT_01bc120c
    MOV dword ptr [EAX + 0x78],0x80000  ; 00465cb5
    MOV EAX,dword ptr [EDX]             ; 00465cbc | DAT_01bc120c
    MOV dword ptr [EAX + 0x7c],0x80000  ; 00465cbe
    MOV EBX,dword ptr [EDX]             ; 00465cc5 | DAT_01bc120c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00465cc7
    MOV dword ptr [EBX + 0xbc],EAX      ; 00465cce
    MOV EAX,dword ptr [EDX]             ; 00465cd4 | DAT_01bc120c
    MOV dword ptr [EAX + 0xb8],0xffff   ; 00465cd6
    MOV EAX,dword ptr [EDX]             ; 00465ce0 | DAT_01bc120c
    MOV dword ptr [EAX + 0xb4],0xffff   ; 00465ce2
    MOV EAX,dword ptr [EDX]             ; 00465cec | DAT_01bc120c
    MOV dword ptr [EAX + 0xb0],0xffff   ; 00465cee
    MOV EAX,dword ptr [EDX]             ; 00465cf8 | DAT_01bc120c
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 00465cfa
    MOV EAX,dword ptr [EDX]             ; 00465d04 | DAT_01bc120c
    MOV ECX,0x4                         ; 00465d06
    XOR EBX,EBX                         ; 00465d0b
    MOV dword ptr [EAX + 0xac],0x80000  ; 00465d0d
    MOV EAX,0x3                         ; 00465d17
    MOV dword ptr [ESP + 0xc],ECX       ; 00465d1c
    MOV dword ptr [ESP + 0x1c],EBX      ; 00465d20
    MOV dword ptr [ESP + 0x18],EBX      ; 00465d24
    MOV dword ptr [ESP + 0x14],EBX      ; 00465d28
    MOV dword ptr [ESP + 0x10],EBX      ; 00465d2c
    MOV dword ptr [ESP + 0x2c],EAX      ; 00465d30
    LEA EAX,[ESP + 0x8]                 ; 00465d34
    MOV dword ptr [ESP + 0x20],EBX      ; 00465d38
    PUSH EAX                            ; 00465d3c
    MOV ECX,0x1                         ; 00465d3d
    MOV EBX,0x2                         ; 00465d42
    PUSH EDX                            ; 00465d47 | DAT_01bc120c
    MOV dword ptr [ESP + 0x2c],ECX      ; 00465d48
    MOV dword ptr [ESP + 0x30],EBX      ; 00465d4c
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 00465d50
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00465d55
    MOV EAX,ESI                         ; 00465d58
    CMP ESI,0x8                         ; 00465d5a
    JL 0x00465952                       ; 00465d5d
        ;   XREF to: 00465952 (CONDITIONAL_JUMP)  ; LAB_00465952
    INC EDI                             ; 00465d63
    CMP EDI,0x8                         ; 00465d64
    JL 0x0046591d                       ; 00465d67
        ;   XREF to: 0046591d (CONDITIONAL_JUMP)  ; LAB_0046591d
    MOV EDX,dword ptr [0x00612560]      ; 00465d6d | DAT_00612560
    PUSH EDX                            ; 00465d73 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 00465d74
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 00465d79
    PUSH 0x0                            ; 00465d7c
    MOV ECX,dword ptr [0x00612560]      ; 00465d7e | DAT_00612560
    PUSH ECX                            ; 00465d84 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 00465d85
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00465d8a
    MOV ESP,EBP                         ; 00465d8d
    POP EBP                             ; 00465d8f
    POP EDI                             ; 00465d90
    POP ESI                             ; 00465d91
    POP EBX                             ; 00465d92
    RET                                 ; 00465d93


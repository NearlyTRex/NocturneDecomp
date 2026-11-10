; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0049c8e0(CVector3f *param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004a1ad0 at 004a1d83
;
; Referenced Globals:
;   undefined4 DAT_005c0690
;   undefined4 DAT_005c0698
;   undefined4 DAT_005c06a0
;   undefined4 DAT_005c06a8
;   undefined4 DAT_005c06b0
;   undefined4 DAT_005c06b8
;   undefined4 DAT_005df8e4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fcb14
;   undefined4 DAT_005fd084
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_matrix.c_FUN_0046d250
;   engine_matrix.c_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0049c8e0
        ;   Label: core_fire.cpp_FUN_0049c8e0
    SUB ESP,0x90                        ; 0049c8e1
    MOV EBP,dword ptr [ESP + 0x98]      ; 0049c8e7
    TEST dword ptr [EBP + 0xc],0x7fffffff ; 0049c8ee
    JZ 0x0049cc81                       ; 0049c8f5
        ;   XREF to: 0049cc81 (CONDITIONAL_JUMP)  ; LAB_0049cc81
    PUSH EDI                            ; 0049c8fb
    PUSH ESI                            ; 0049c8fc
    PUSH EBX                            ; 0049c8fd
    FLD float ptr [EBP + 0xc]           ; 0049c8fe
    FLD1                                ; 0049c901
    FSUBRP                              ; 0049c903
    FMUL double ptr [0x005c0690]        ; 0049c905 | DAT_005c0690
    CALL crt_math.c_round_FUN_005a3120  ; 0049c90b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x8c]        ; 0049c910
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0049c917
    LEA EAX,[EBX*0x4 + 0x0]             ; 0049c91e
    SUB EAX,EBX                         ; 0049c925
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0049c927
    SHL EAX,0x4                         ; 0049c92a
    CMP ECX,0x3                         ; 0049c92d
    JZ 0x0049cc89                       ; 0049c930
        ;   XREF to: 0049cc89 (CONDITIONAL_JUMP)  ; LAB_0049cc89
    ADD EAX,0x5fcb14                    ; 0049c936 | DAT_005fcb14
    PUSH EAX                            ; 0049c93b
    MOV EBX,dword ptr [0x005f2afc]      ; 0049c93c | DAT_005f2afc
    PUSH EBX                            ; 0049c942 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0049c943
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_0049c943
    ADD ESP,0x8                         ; 0049c948
    PUSH EBP                            ; 0049c94b
    MOV EDI,dword ptr [0x005f2afc]      ; 0049c94c | DAT_005f2afc
    PUSH EDI                            ; 0049c952 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0049c953
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049c958
    MOV EAX,[0x005f2afc]                ; 0049c95b | DAT_005f2afc
    PUSH EAX                            ; 0049c960 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x74]                ; 0049c961
    CALL engine_matrix.c_FUN_0046d250   ; 0049c965
        ;   XREF to: 0046d250 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d250()
    ADD ESP,0x4                         ; 0049c96a
    PUSH 0x0                            ; 0049c96d
    LEA EAX,[ESP + 0x38]                ; 0049c96f
    LEA EDI,[ESP + 0x38]                ; 0049c973
    PUSH EAX                            ; 0049c977
    MOV EDX,dword ptr [0x005f2afc]      ; 0049c978 | DAT_005f2afc
    LEA ESI,[ESP + 0x78]                ; 0049c97e
    PUSH EDX                            ; 0049c982 | DAT_01bdd7e4
    MOVSD ES:EDI,ESI                    ; 0049c983
    MOVSD ES:EDI,ESI                    ; 0049c984
    MOVSD ES:EDI,ESI                    ; 0049c985
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0049c986
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    FLD float ptr [EBP + 0x10]          ; 0049c98b
    FMUL double ptr [0x005c06a8]        ; 0049c98e | DAT_005c06a8
    FLD float ptr [EBP + 0x10]          ; 0049c994
    FCHS                                ; 0049c997
    FMUL float ptr [0x005c0698]         ; 0049c999 | DAT_005c0698
    FXCH                                ; 0049c99f
    FLD double ptr [0x005c06a0]         ; 0049c9a1 | DAT_005c06a0
    FXCH                                ; 0049c9a7
    FMUL ST1                            ; 0049c9a9
    FXCH ST2                            ; 0049c9ab
    FMULP                               ; 0049c9ad
    ADD ESP,0xc                         ; 0049c9af
    MOV ECX,dword ptr [EBP + 0x18]      ; 0049c9b2
    FXCH                                ; 0049c9b5
    CALL crt_math.c_round_FUN_005a3120  ; 0049c9b7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 0049c9bc
    CALL crt_math.c_round_FUN_005a3120  ; 0049c9be
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 0049c9c3
    FISTP dword ptr [ESP + 0x90]        ; 0049c9c5
    FISTP dword ptr [ESP + 0x94]        ; 0049c9cc
    TEST ECX,ECX                        ; 0049c9d3
    JZ 0x0049c9f7                       ; 0049c9d5
        ;   XREF to: 0049c9f7 (CONDITIONAL_JUMP)  ; LAB_0049c9f7
    MOV ESI,dword ptr [ESP + 0x90]      ; 0049c9d7
    MOV EBX,dword ptr [ESP + 0x94]      ; 0049c9de
    NEG ESI                             ; 0049c9e5
    NEG EBX                             ; 0049c9e7
    MOV dword ptr [ESP + 0x90],ESI      ; 0049c9e9
    MOV dword ptr [ESP + 0x94],EBX      ; 0049c9f0
    MOV EAX,dword ptr [ESP + 0x94]      ; 0049c9f7
        ;   Label: LAB_0049c9f7
    MOV dword ptr [ESP + 0x98],EAX      ; 0049c9fe
    FILD dword ptr [ESP + 0x98]         ; 0049ca05
    FSTP float ptr [ESP + 0x88]         ; 0049ca0c
    MOV EAX,dword ptr [ESP + 0x88]      ; 0049ca13
    MOV dword ptr [ESP + 0x7c],EAX      ; 0049ca1a
    FLD float ptr [EBP + 0x10]          ; 0049ca1e
    FMUL float ptr [0x005c06b0]         ; 0049ca21 | DAT_005c06b0
    FMUL double ptr [0x005c06a0]        ; 0049ca27 | DAT_005c06a0
    LEA EBX,[ESP + 0x40]                ; 0049ca2d
    MOV ESI,dword ptr [0x005f2afc]      ; 0049ca31 | DAT_005f2afc
    XOR EDI,EDI                         ; 0049ca37
    LEA EAX,[ESP + 0x7c]                ; 0049ca39
    MOV dword ptr [ESP + 0x84],EDI      ; 0049ca3d
    FSTP float ptr [ESP + 0x80]         ; 0049ca44
    FLD float ptr [EAX]                 ; 0049ca4b
    FMUL float ptr [0x005df8e4]         ; 0049ca4d | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049ca53
    FLD float ptr [EAX + 0x4]           ; 0049ca55
    FMUL float ptr [0x005df8e4]         ; 0049ca58 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049ca5e
    FLD float ptr [EAX + 0x8]           ; 0049ca61
    FMUL float ptr [0x005df8e4]         ; 0049ca64 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049ca6a
    LEA EAX,[ESP + 0x40]                ; 0049ca6d
    PUSH EAX                            ; 0049ca71
    MOV EAX,dword ptr [ESI]             ; 0049ca72 | DAT_01bdd7e4
    PUSH EAX                            ; 0049ca74
    CALL engine_special.cpp_FUN_005632a3 ; 0049ca75
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049ca7a
    MOV EAX,dword ptr [ESP + 0x90]      ; 0049ca7d
    LEA EBX,[ESP + 0x64]                ; 0049ca84
    MOV dword ptr [ESP + 0x98],EAX      ; 0049ca88
    MOV ESI,dword ptr [0x005f2afc]      ; 0049ca8f | DAT_005f2afc
    FILD dword ptr [ESP + 0x98]         ; 0049ca95
    LEA EAX,[ESP + 0x7c]                ; 0049ca9c
    FSTP float ptr [ESP + 0x7c]         ; 0049caa0
    FLD float ptr [EAX]                 ; 0049caa4
    FMUL float ptr [0x005df8e4]         ; 0049caa6 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049caac
    FLD float ptr [EAX + 0x4]           ; 0049caae
    FMUL float ptr [0x005df8e4]         ; 0049cab1 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049cab7
    FLD float ptr [EAX + 0x8]           ; 0049caba
    FMUL float ptr [0x005df8e4]         ; 0049cabd | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049cac3
    LEA EAX,[ESP + 0x64]                ; 0049cac6
    PUSH EAX                            ; 0049caca
    MOV EAX,dword ptr [ESI]             ; 0049cacb | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0049cacd
    PUSH EAX                            ; 0049cad0
    CALL engine_special.cpp_FUN_005632a3 ; 0049cad1
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x10]          ; 0049cad6
    FCHS                                ; 0049cad9
    FMUL double ptr [0x005c06b8]        ; 0049cadb | DAT_005c06b8
    FMUL double ptr [0x005c06a0]        ; 0049cae1 | DAT_005c06a0
    LEA EBX,[ESP + 0x60]                ; 0049cae7
    LEA EAX,[ESP + 0x84]                ; 0049caeb
    ADD ESP,0x8                         ; 0049caf2
    MOV ESI,dword ptr [0x005f2afc]      ; 0049caf5 | DAT_005f2afc
    FSTP float ptr [ESP + 0x80]         ; 0049cafb
    FLD float ptr [EAX]                 ; 0049cb02
    FMUL float ptr [0x005df8e4]         ; 0049cb04 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049cb0a
    FLD float ptr [EAX + 0x4]           ; 0049cb0c
    FMUL float ptr [0x005df8e4]         ; 0049cb0f | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049cb15
    FLD float ptr [EAX + 0x8]           ; 0049cb18
    FMUL float ptr [0x005df8e4]         ; 0049cb1b | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049cb21
    LEA EAX,[ESP + 0x58]                ; 0049cb24
    PUSH EAX                            ; 0049cb28
    MOV EAX,dword ptr [ESI]             ; 0049cb29 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0049cb2b
    PUSH EAX                            ; 0049cb2e
    CALL engine_special.cpp_FUN_005632a3 ; 0049cb2f
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049cb34
    MOV EAX,dword ptr [ESP + 0x88]      ; 0049cb37
    LEA EBX,[ESP + 0x4c]                ; 0049cb3e
    MOV dword ptr [ESP + 0x7c],EAX      ; 0049cb42
    LEA EAX,[ESP + 0x7c]                ; 0049cb46
    MOV ESI,dword ptr [0x005f2afc]      ; 0049cb4a | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049cb50
    FMUL float ptr [0x005df8e4]         ; 0049cb52 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049cb58
    FLD float ptr [EAX + 0x4]           ; 0049cb5a
    FMUL float ptr [0x005df8e4]         ; 0049cb5d | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049cb63
    FLD float ptr [EAX + 0x8]           ; 0049cb66
    FMUL float ptr [0x005df8e4]         ; 0049cb69 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049cb6f
    LEA EAX,[ESP + 0x4c]                ; 0049cb72
    PUSH EAX                            ; 0049cb76
    MOV EAX,dword ptr [ESI]             ; 0049cb77 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 0049cb79
    PUSH EAX                            ; 0049cb7e
    CALL engine_special.cpp_FUN_005632a3 ; 0049cb7f
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049cb84
    MOV EAX,[0x005f2afc]                ; 0049cb87 | DAT_005f2afc
    MOV EBX,dword ptr [EAX]             ; 0049cb8c | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x18],0x20000  ; 0049cb8e
    MOV EBX,dword ptr [EAX]             ; 0049cb95 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x1c],0x20000  ; 0049cb97
    MOV EBX,dword ptr [EAX]             ; 0049cb9e | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x48],0xfe0000 ; 0049cba0
    MOV EBX,dword ptr [EAX]             ; 0049cba7 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x4c],0x20000  ; 0049cba9
    MOV EBX,dword ptr [EAX]             ; 0049cbb0 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x78],0xfe0000 ; 0049cbb2
    MOV EBX,dword ptr [EAX]             ; 0049cbb9 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x7c],0xfe0000 ; 0049cbbb
    MOV EBX,dword ptr [EAX]             ; 0049cbc2 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xa8],0x20000  ; 0049cbc4
    MOV EBX,dword ptr [EAX]             ; 0049cbce | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xac],0xfe0000 ; 0049cbd0
    MOV EBX,dword ptr [EAX]             ; 0049cbda | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x2c],0x8000   ; 0049cbdc
    MOV EBX,dword ptr [EAX]             ; 0049cbe3 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x5c],0x8000   ; 0049cbe5
    MOV EBX,dword ptr [EAX]             ; 0049cbec | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x8c],0x8000   ; 0049cbee
    MOV EBX,dword ptr [EAX]             ; 0049cbf8 | DAT_01bdd7e4
    MOV EBP,0x4                         ; 0049cbfa
    MOV EDX,0x2                         ; 0049cbff
    MOV dword ptr [EBX + 0xbc],0x8000   ; 0049cc04
    MOV ECX,0x3                         ; 0049cc0e
    MOV dword ptr [ESP + 0x10],EBP      ; 0049cc13
    MOV dword ptr [ESP + 0x20],EDI      ; 0049cc17
    MOV dword ptr [ESP + 0x1c],EDI      ; 0049cc1b
    MOV dword ptr [ESP + 0x18],EDI      ; 0049cc1f
    MOV EBP,0x1                         ; 0049cc23
    MOV dword ptr [ESP + 0x14],EDI      ; 0049cc28
    PUSH EBP                            ; 0049cc2c
    MOV dword ptr [ESP + 0x28],EDI      ; 0049cc2d
    MOV dword ptr [ESP + 0x30],EDX      ; 0049cc31
    PUSH EAX                            ; 0049cc35 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x38],ECX      ; 0049cc36
    MOV dword ptr [ESP + 0x30],EBP      ; 0049cc3a
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0049cc3e
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049cc43
    PUSH 0x123                          ; 0049cc46
    LEA EAX,[ESP + 0x10]                ; 0049cc4b
    PUSH EAX                            ; 0049cc4f
    MOV EBX,dword ptr [0x005f2afc]      ; 0049cc50 | DAT_005f2afc
    PUSH EBX                            ; 0049cc56 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 0049cc57
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 0049cc5c
    PUSH EDI                            ; 0049cc5f
    MOV ESI,dword ptr [0x005f2afc]      ; 0049cc60 | DAT_005f2afc
    PUSH ESI                            ; 0049cc66 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0049cc67
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049cc6c
    MOV EDI,dword ptr [0x005f2afc]      ; 0049cc6f | DAT_005f2afc
    PUSH EDI                            ; 0049cc75 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0049cc76
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0049cc7b
    POP EBX                             ; 0049cc7e
    POP ESI                             ; 0049cc7f
    POP EDI                             ; 0049cc80
    ADD ESP,0x90                        ; 0049cc81
        ;   Label: LAB_0049cc81
    POP EBP                             ; 0049cc87
    RET                                 ; 0049cc88
    ADD EAX,0x5fd084                    ; 0049cc89 | DAT_005fd084
        ;   Label: LAB_0049cc89
    PUSH EAX                            ; 0049cc8e
    MOV ESI,dword ptr [0x005f2afc]      ; 0049cc8f | DAT_005f2afc
    PUSH ESI                            ; 0049cc95 | DAT_01bdd7e4
    JMP 0x0049c943                      ; 0049cc96
        ;   XREF to: 0049c943 (UNCONDITIONAL_JUMP)  ; LAB_0049c943


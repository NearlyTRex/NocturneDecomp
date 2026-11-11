; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFirefly_render_FUN_004adaf0(CFirefly *this_ptr)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_004adae0 = 004adb70
;   undefined4 DAT_005df20c
;   undefined4 DAT_005fff94
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c44c
;   undefined4 DAT_0061c464
;   undefined4 DAT_0061c47c
;   undefined4 DAT_0061c494
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629040
;   undefined4 DAT_00629064
;   undefined4 DAT_00629068
;   undefined4 DAT_0062906c
;   ... and 13 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_matrix.c_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;   engine_special.cpp_FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004adaf0
        ;   Label: core_fire.cpp_CFirefly_render_FUN_004adaf0
    PUSH ESI                            ; 004adaf1
    PUSH EDI                            ; 004adaf2
    PUSH EBP                            ; 004adaf3
    MOV EBP,ESP                         ; 004adaf4
    SUB ESP,0xe8                        ; 004adaf6
    AND ESP,0xfffffff8                  ; 004adafc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004adaff
    LEA EBX,[ESP + 0xbc]                ; 004adb02
    MOV EAX,dword ptr [EAX + 0x50]      ; 004adb09
    MOV ESI,dword ptr [0x00612560]      ; 004adb0c | DAT_00612560
    MOV dword ptr [ESP + 0xd8],EAX      ; 004adb12
    MOV EAX,dword ptr [EBP + 0x14]      ; 004adb19
    MOV ESI,dword ptr [ESI]             ; 004adb1c | DAT_01bc120c
    FLD float ptr [EAX]                 ; 004adb1e
    FMUL float ptr [0x005fff94]         ; 004adb20 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004adb26
    FLD float ptr [EAX + 0x4]           ; 004adb28
    FMUL float ptr [0x005fff94]         ; 004adb2b | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004adb31
    FLD float ptr [EAX + 0x8]           ; 004adb34
    FMUL float ptr [0x005fff94]         ; 004adb37 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004adb3d
    LEA EAX,[ESP + 0xbc]                ; 004adb40
    PUSH EAX                            ; 004adb47
    PUSH ESI                            ; 004adb48
    CALL engine_special.cpp_FUN_0058043c ; 004adb49
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004adb4e
    PUSH ESI                            ; 004adb51
    MOV EDX,dword ptr [0x00612560]      ; 004adb52 | DAT_00612560
    PUSH EDX                            ; 004adb58 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0 ; 004adb59
        ;   XREF to: 00484fd0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004adb5e
    TEST EAX,EAX                        ; 004adb61
    JNZ 0x004ae0b3                      ; 004adb63
        ;   XREF to: 004ae0b3 (CONDITIONAL_JUMP)  ; LAB_004ae0b3
    MOV ESP,EBP                         ; 004adb69
        ;   Label: LAB_004adb69
    POP EBP                             ; 004adb6b
    POP EDI                             ; 004adb6c
    POP ESI                             ; 004adb6d
    POP EBX                             ; 004adb6e
    RET                                 ; 004adb6f
    PUSH 0x61c44c                       ; 004adb70 | DAT_0061c44c
        ;   Label: caseD_0
    MOV EAX,[0x00612560]                ; 004adb75 | DAT_00612560
    PUSH EAX                            ; 004adb7a | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004adb7b
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_004adb7b
    ADD ESP,0x8                         ; 004adb80
    PUSH 0x0                            ; 004adb83
        ;   Label: default
    MOV ECX,dword ptr [EBP + 0x14]      ; 004adb85
    MOV EAX,[0x007c6120]                ; 004adb88 | DAT_007c6120
    PUSH ECX                            ; 004adb8d
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004adb8e
    PUSH EAX                            ; 004adb91
    CALL dword ptr [EDX + 0x4]          ; 004adb92
    MOV EDX,0xffff                      ; 004adb95
    ADD ESP,0xc                         ; 004adb9a
    MOV EBX,dword ptr [0x01c51cac]      ; 004adb9d | DAT_01c51cac
    MOV EAX,dword ptr [EBP + 0x14]      ; 004adba3
    SUB EDX,EBX                         ; 004adba6
    MOV EAX,dword ptr [EAX + 0x40]      ; 004adba8
    MOV ESI,0xffff                      ; 004adbab
    IMUL EDX                            ; 004adbb0
    SHRD EAX,EDX,0x10                   ; 004adbb2
    PUSH 0x1                            ; 004adbb6
    MOV [0x00629040],EAX                ; 004adbb8 | DAT_00629040
    MOV dword ptr [0x00629034],ESI      ; 004adbbd | DAT_00629034
    MOV dword ptr [0x00629038],ESI      ; 004adbc3 | DAT_00629038
    MOV dword ptr [0x0062903c],ESI      ; 004adbc9 | DAT_0062903c
    MOV dword ptr [0x00629064],ESI      ; 004adbcf | DAT_00629064
    MOV dword ptr [0x00629068],ESI      ; 004adbd5 | DAT_00629068
    MOV dword ptr [0x0062906c],ESI      ; 004adbdb | DAT_0062906c
    MOV dword ptr [0x00629094],ESI      ; 004adbe1 | DAT_00629094
    MOV dword ptr [0x00629098],ESI      ; 004adbe7 | DAT_00629098
    MOV dword ptr [0x0062909c],ESI      ; 004adbed | DAT_0062909c
    MOV dword ptr [0x006290c4],ESI      ; 004adbf3 | DAT_006290c4
    MOV dword ptr [0x006290c8],ESI      ; 004adbf9 | DAT_006290c8
    MOV dword ptr [0x006290cc],ESI      ; 004adbff | DAT_006290cc
    MOV ESI,dword ptr [0x00612560]      ; 004adc05 | DAT_00612560
    MOV [0x00629070],EAX                ; 004adc0b | DAT_00629070
    PUSH ESI                            ; 004adc10 | DAT_01bc120c
    MOV [0x006290a0],EAX                ; 004adc11 | DAT_006290a0
    MOV [0x006290d0],EAX                ; 004adc16 | DAT_006290d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004adc1b
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004adc20
    PUSH 0x1c57090                      ; 004adc23
    MOV EDI,dword ptr [0x00612560]      ; 004adc28 | DAT_00612560
    PUSH EDI                            ; 004adc2e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 004adc2f
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004adc34
    PUSH 0x0                            ; 004adc37
    MOV EAX,[0x00612560]                ; 004adc39 | DAT_00612560
    PUSH EAX                            ; 004adc3e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004adc3f
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004adc44
    MOV EDX,dword ptr [0x00612560]      ; 004adc47 | DAT_00612560
    PUSH EDX                            ; 004adc4d | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004adc4e
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004adc53
    LEA EDI,[ESP + 0xa4]                ; 004adc56
    MOV ESI,dword ptr [EBP + 0x14]      ; 004adc5d
    MOV EBX,0x3ccccccd                  ; 004adc60
    MOVSD ES:EDI,ESI                    ; 004adc65
    MOVSD ES:EDI,ESI                    ; 004adc66
    MOVSD ES:EDI,ESI                    ; 004adc67
    MOV ECX,0x3f800000                  ; 004adc68
    MOV ESI,dword ptr [EBP + 0x14]      ; 004adc6d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004adc70
    LEA EDI,[ESP + 0x20]                ; 004adc73
    LEA ESI,[ESI + 0xc]                 ; 004adc77
    MOV dword ptr [ESP],ECX             ; 004adc7a
    MOV dword ptr [ESP + 0x4],EBX       ; 004adc7d
    MOVSD ES:EDI,ESI                    ; 004adc81
    MOVSD ES:EDI,ESI                    ; 004adc82
    MOVSD ES:EDI,ESI                    ; 004adc83
    ADD EAX,0x18                        ; 004adc84
    XOR ESI,ESI                         ; 004adc87
    MOV dword ptr [ESP + 0xe4],EAX      ; 004adc89
    MOV dword ptr [ESP + 0xe0],ESI      ; 004adc90
    FLD float ptr [ESP + 0x4]           ; 004adc97
        ;   Label: LAB_004adc97
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004adc9b
    FLD ST0                             ; 004adca2
    FLD double ptr [0x005df20c]         ; 004adca4 | DAT_005df20c
    FXCH                                ; 004adcaa
    FMUL ST1                            ; 004adcac
    FLD float ptr [EAX]                 ; 004adcae
    FXCH                                ; 004adcb0
    FSTP ST3                            ; 004adcb2
    FXCH ST2                            ; 004adcb4
    FSTP float ptr [ESP + 0x4]          ; 004adcb6
    FXCH                                ; 004adcba
    FMUL float ptr [ESP + 0x4]          ; 004adcbc
    FLD float ptr [EAX + 0x4]           ; 004adcc0
    FMUL float ptr [ESP + 0x4]          ; 004adcc3
    FLD float ptr [EAX + 0x8]           ; 004adcc7
    FMUL float ptr [ESP + 0x4]          ; 004adcca
    FLD float ptr [ESP]                 ; 004adcce
    FLD float ptr [ESP + 0x20]          ; 004adcd1
    LEA EDI,[ESP + 0x8]                 ; 004adcd5
    LEA ESI,[ESP + 0xb0]                ; 004adcd9
    FXCH ST4                            ; 004adce0
    FSTP float ptr [ESP + 0xb0]         ; 004adce2
    FXCH ST2                            ; 004adce9
    FSTP float ptr [ESP + 0xb4]         ; 004adceb
    FSTP float ptr [ESP + 0xb8]         ; 004adcf2
    MOVSD ES:EDI,ESI                    ; 004adcf9
    MOVSD ES:EDI,ESI                    ; 004adcfa
    MOVSD ES:EDI,ESI                    ; 004adcfb
    FLD ST0                             ; 004adcfc
    FXCH ST2                            ; 004adcfe
    FSUB float ptr [ESP + 0x8]          ; 004add00
    FXCH ST2                            ; 004add04
    FMULP ST3                           ; 004add06
    FXCH                                ; 004add08
    FST float ptr [ESP + 0x20]          ; 004add0a
    FMUL float ptr [ESP + 0x4]          ; 004add0e
    FLD float ptr [ESP + 0x28]          ; 004add12
    FLD float ptr [ESP + 0x24]          ; 004add16
    FSUB float ptr [ESP + 0xc]          ; 004add1a
    FXCH                                ; 004add1e
    FSUB float ptr [ESP + 0x10]         ; 004add20
    FXCH                                ; 004add24
    FST float ptr [ESP + 0x24]          ; 004add26
    FMUL float ptr [ESP + 0x4]          ; 004add2a
    FXCH                                ; 004add2e
    FST float ptr [ESP + 0x28]          ; 004add30
    FMUL float ptr [ESP + 0x4]          ; 004add34
    FLD float ptr [ESP + 0xa4]          ; 004add38
    FLD float ptr [ESP + 0xa8]          ; 004add3f
    LEA EAX,[ESP + 0xa4]                ; 004add46
    FXCH ST6                            ; 004add4d
    FSTP ST5                            ; 004add4f
    FLD float ptr [ESP + 0xac]          ; 004add51
    PUSH EAX                            ; 004add58
    LEA EDI,[ESP + 0x30]                ; 004add59
    LEA ESI,[ESP + 0x90]                ; 004add5d
    FXCH ST4                            ; 004add64
    FSTP float ptr [ESP + 0x90]         ; 004add66
    FXCH ST2                            ; 004add6d
    FSTP float ptr [ESP + 0x94]         ; 004add6f
    FSTP float ptr [ESP + 0x98]         ; 004add76
    MOVSD ES:EDI,ESI                    ; 004add7d
    MOVSD ES:EDI,ESI                    ; 004add7e
    MOVSD ES:EDI,ESI                    ; 004add7f
    FXCH ST2                            ; 004add80
    FSTP float ptr [ESP + 0x4]          ; 004add82
    MOV EDI,dword ptr [0x00612560]      ; 004add86 | DAT_00612560
    FXCH                                ; 004add8c
    FSUB float ptr [ESP + 0x30]         ; 004add8e
    FXCH ST2                            ; 004add92
    FSUB float ptr [ESP + 0x34]         ; 004add94
    FXCH                                ; 004add98
    FSUB float ptr [ESP + 0x38]         ; 004add9a
    FXCH ST2                            ; 004add9e
    FSTP float ptr [ESP + 0xa8]         ; 004adda0
    FSTP float ptr [ESP + 0xac]         ; 004adda7
    PUSH EDI                            ; 004addae | DAT_01bc120c
    FSTP float ptr [ESP + 0xb4]         ; 004addaf
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004addb6
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004addbb
    PUSH 0x0                            ; 004addbe
    PUSH 0x1c57078                      ; 004addc0 | DAT_01c57078
    MOV EAX,[0x00612560]                ; 004addc5 | DAT_00612560
    PUSH EAX                            ; 004addca | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 ; 004addcb
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004addd0
    FLD float ptr [ESP + 0xd8]          ; 004addd3
    FCHS                                ; 004addda
    FMUL float ptr [ESP]                ; 004adddc
    LEA EBX,[ESP + 0x38]                ; 004adddf
    XOR EDX,EDX                         ; 004adde3
    FSTP float ptr [ESP + 0x80]         ; 004adde5
    MOV EAX,dword ptr [ESP + 0x80]      ; 004addec
    MOV dword ptr [ESP + 0x88],EDX      ; 004addf3
    MOV dword ptr [ESP + 0xdc],EAX      ; 004addfa
    MOV dword ptr [ESP + 0x84],EAX      ; 004ade01
    LEA EAX,[ESP + 0x80]                ; 004ade08
    MOV EDX,dword ptr [0x00612560]      ; 004ade0f | DAT_00612560
    FLD float ptr [EAX]                 ; 004ade15
    FMUL float ptr [0x005fff94]         ; 004ade17 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ade1d
    FLD float ptr [EAX + 0x4]           ; 004ade1f
    FMUL float ptr [0x005fff94]         ; 004ade22 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ade28
    FLD float ptr [EAX + 0x8]           ; 004ade2b
    FMUL float ptr [0x005fff94]         ; 004ade2e | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ade34
    LEA EAX,[ESP + 0x38]                ; 004ade37
    PUSH EAX                            ; 004ade3b
    MOV EAX,dword ptr [EDX]             ; 004ade3c | DAT_01bc120c
    PUSH EAX                            ; 004ade3e
    CALL engine_special.cpp_FUN_00580173 ; 004ade3f
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ade44
    FLD float ptr [ESP + 0xd8]          ; 004ade47
    FMUL float ptr [ESP]                ; 004ade4e
    LEA EBX,[ESP + 0x5c]                ; 004ade51
    FSTP float ptr [ESP + 0xd4]         ; 004ade55
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004ade5c
    MOV EDX,dword ptr [0x00612560]      ; 004ade63 | DAT_00612560
    MOV dword ptr [ESP + 0x80],EAX      ; 004ade69
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004ade70
    XOR ECX,ECX                         ; 004ade77
    MOV dword ptr [ESP + 0x84],EAX      ; 004ade79
    LEA EAX,[ESP + 0x80]                ; 004ade80
    MOV dword ptr [ESP + 0x88],ECX      ; 004ade87
    FLD float ptr [EAX]                 ; 004ade8e
    FMUL float ptr [0x005fff94]         ; 004ade90 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ade96
    FLD float ptr [EAX + 0x4]           ; 004ade98
    FMUL float ptr [0x005fff94]         ; 004ade9b | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004adea1
    FLD float ptr [EAX + 0x8]           ; 004adea4
    FMUL float ptr [0x005fff94]         ; 004adea7 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004adead
    LEA EAX,[ESP + 0x5c]                ; 004adeb0
    PUSH EAX                            ; 004adeb4
    MOV EAX,dword ptr [EDX]             ; 004adeb5 | DAT_01bc120c
    ADD EAX,0x30                        ; 004adeb7
    PUSH EAX                            ; 004adeba
    CALL engine_special.cpp_FUN_00580173 ; 004adebb
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004adec0
    XOR EBX,EBX                         ; 004adec3
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004adec5
    MOV dword ptr [ESP + 0x88],EBX      ; 004adecc
    LEA EBX,[ESP + 0x14]                ; 004aded3
    MOV dword ptr [ESP + 0x80],EAX      ; 004aded7
    MOV dword ptr [ESP + 0x84],EAX      ; 004adede
    LEA EAX,[ESP + 0x80]                ; 004adee5
    MOV EDX,dword ptr [0x00612560]      ; 004adeec | DAT_00612560
    FLD float ptr [EAX]                 ; 004adef2
    FMUL float ptr [0x005fff94]         ; 004adef4 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004adefa
    FLD float ptr [EAX + 0x4]           ; 004adefc
    FMUL float ptr [0x005fff94]         ; 004adeff | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004adf05
    FLD float ptr [EAX + 0x8]           ; 004adf08
    FMUL float ptr [0x005fff94]         ; 004adf0b | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004adf11
    LEA EAX,[ESP + 0x14]                ; 004adf14
    PUSH EAX                            ; 004adf18
    MOV EAX,dword ptr [EDX]             ; 004adf19 | DAT_01bc120c
    ADD EAX,0x60                        ; 004adf1b
    PUSH EAX                            ; 004adf1e
    CALL engine_special.cpp_FUN_00580173 ; 004adf1f
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004adf24
    XOR ESI,ESI                         ; 004adf27
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004adf29
    MOV EDX,dword ptr [0x00612560]      ; 004adf30 | DAT_00612560
    MOV dword ptr [ESP + 0x80],EAX      ; 004adf36
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004adf3d
    MOV dword ptr [ESP + 0x88],ESI      ; 004adf44
    MOV dword ptr [ESP + 0x84],EAX      ; 004adf4b
    LEA EBX,[ESP + 0x74]                ; 004adf52
    LEA EAX,[ESP + 0x80]                ; 004adf56
    FLD float ptr [EAX]                 ; 004adf5d
    FMUL float ptr [0x005fff94]         ; 004adf5f | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004adf65
    FLD float ptr [EAX + 0x4]           ; 004adf67
    FMUL float ptr [0x005fff94]         ; 004adf6a | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004adf70
    FLD float ptr [EAX + 0x8]           ; 004adf73
    FMUL float ptr [0x005fff94]         ; 004adf76 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004adf7c
    LEA EAX,[ESP + 0x74]                ; 004adf7f
    PUSH EAX                            ; 004adf83
    MOV EAX,dword ptr [EDX]             ; 004adf84 | DAT_01bc120c
    ADD EAX,0x90                        ; 004adf86
    PUSH EAX                            ; 004adf8b
    CALL engine_special.cpp_FUN_00580173 ; 004adf8c
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004adf91
    PUSH ESI                            ; 004adf94
    MOV EDI,dword ptr [EBP + 0x14]      ; 004adf95
    MOV EAX,[0x007c6120]                ; 004adf98 | DAT_007c6120
    PUSH EDI                            ; 004adf9d
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004adf9e
    PUSH EAX                            ; 004adfa1
    CALL dword ptr [EDX + 0x4]          ; 004adfa2
    MOV EDX,0xffff                      ; 004adfa5
    MOV ECX,dword ptr [0x01c51cac]      ; 004adfaa | DAT_01c51cac
    ADD ESP,0xc                         ; 004adfb0
    MOV EAX,dword ptr [EDI + 0x40]      ; 004adfb3
    SUB EDX,ECX                         ; 004adfb6
    MOV EBX,0xffff                      ; 004adfb8
    IMUL EDX                            ; 004adfbd
    SHRD EAX,EDX,0x10                   ; 004adfbf
    PUSH 0x1                            ; 004adfc3
    MOV [0x00629040],EAX                ; 004adfc5 | DAT_00629040
    MOV dword ptr [0x00629034],EBX      ; 004adfca | DAT_00629034
    MOV dword ptr [0x00629038],EBX      ; 004adfd0 | DAT_00629038
    MOV dword ptr [0x0062903c],EBX      ; 004adfd6 | DAT_0062903c
    MOV dword ptr [0x00629064],EBX      ; 004adfdc | DAT_00629064
    MOV dword ptr [0x00629068],EBX      ; 004adfe2 | DAT_00629068
    MOV dword ptr [0x0062906c],EBX      ; 004adfe8 | DAT_0062906c
    MOV dword ptr [0x00629094],EBX      ; 004adfee | DAT_00629094
    MOV dword ptr [0x00629098],EBX      ; 004adff4 | DAT_00629098
    MOV dword ptr [0x0062909c],EBX      ; 004adffa | DAT_0062909c
    MOV dword ptr [0x006290c4],EBX      ; 004ae000 | DAT_006290c4
    MOV dword ptr [0x006290c8],EBX      ; 004ae006 | DAT_006290c8
    MOV dword ptr [0x006290cc],EBX      ; 004ae00c | DAT_006290cc
    MOV EBX,dword ptr [0x00612560]      ; 004ae012 | DAT_00612560
    MOV [0x00629070],EAX                ; 004ae018 | DAT_00629070
    PUSH EBX                            ; 004ae01d | DAT_01bc120c
    MOV [0x006290a0],EAX                ; 004ae01e | DAT_006290a0
    MOV [0x006290d0],EAX                ; 004ae023 | DAT_006290d0
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004ae028
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004ae02d
    PUSH 0x1c57090                      ; 004ae030
    MOV ESI,dword ptr [0x00612560]      ; 004ae035 | DAT_00612560
    PUSH ESI                            ; 004ae03b | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 004ae03c
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004ae041
    PUSH 0x0                            ; 004ae044
    MOV EDI,dword ptr [0x00612560]      ; 004ae046 | DAT_00612560
    PUSH EDI                            ; 004ae04c | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004ae04d
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004ae052
    MOV EAX,[0x00612560]                ; 004ae055 | DAT_00612560
    PUSH EAX                            ; 004ae05a | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004ae05b
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004ae060
    MOV EDX,dword ptr [ESP + 0xe0]      ; 004ae063
    INC EDX                             ; 004ae06a
    MOV dword ptr [ESP + 0xe0],EDX      ; 004ae06b
    CMP EDX,0x3                         ; 004ae072
    JGE 0x004adb69                      ; 004ae075
        ;   XREF to: 004adb69 (CONDITIONAL_JUMP)  ; LAB_004adb69
    JMP 0x004adc97                      ; 004ae07b
        ;   XREF to: 004adc97 (UNCONDITIONAL_JUMP)  ; LAB_004adc97
    PUSH 0x61c464                       ; 004ae080 | DAT_0061c464
        ;   Label: caseD_1
    MOV EDI,dword ptr [0x00612560]      ; 004ae085 | DAT_00612560
    PUSH EDI                            ; 004ae08b | DAT_01bc120c
    JMP 0x004adb7b                      ; 004ae08c
        ;   XREF to: 004adb7b (UNCONDITIONAL_JUMP)  ; LAB_004adb7b
    PUSH 0x61c47c                       ; 004ae091 | DAT_0061c47c
        ;   Label: caseD_2
    MOV ESI,dword ptr [0x00612560]      ; 004ae096 | DAT_00612560
    PUSH ESI                            ; 004ae09c | DAT_01bc120c
    JMP 0x004adb7b                      ; 004ae09d
        ;   XREF to: 004adb7b (UNCONDITIONAL_JUMP)  ; LAB_004adb7b
    PUSH 0x61c494                       ; 004ae0a2 | DAT_0061c494
        ;   Label: caseD_3
    MOV EBX,dword ptr [0x00612560]      ; 004ae0a7 | DAT_00612560
    PUSH EBX                            ; 004ae0ad | DAT_01bc120c
    JMP 0x004adb7b                      ; 004ae0ae
        ;   XREF to: 004adb7b (UNCONDITIONAL_JUMP)  ; LAB_004adb7b
    MOV ECX,dword ptr [EBP + 0x14]      ; 004ae0b3
        ;   Label: LAB_004ae0b3
    PUSH ECX                            ; 004ae0b6
    MOV EBX,dword ptr [0x00612560]      ; 004ae0b7 | DAT_00612560
    PUSH EBX                            ; 004ae0bd | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004ae0be
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004ae0c3
    PUSH 0x0                            ; 004ae0c6
    PUSH 0x1c57078                      ; 004ae0c8 | DAT_01c57078
    MOV ESI,dword ptr [0x00612560]      ; 004ae0cd | DAT_00612560
    PUSH ESI                            ; 004ae0d3 | DAT_01bc120c
    XOR EDI,EDI                         ; 004ae0d4
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 ; 004ae0d6
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004ae0db
    LEA EBX,[ESP + 0x50]                ; 004ae0de
    FLD float ptr [ESP + 0xd8]          ; 004ae0e2
    FCHS                                ; 004ae0e9
    FSTP float ptr [ESP + 0x80]         ; 004ae0eb
    MOV EAX,dword ptr [ESP + 0x80]      ; 004ae0f2
    MOV EDX,dword ptr [0x00612560]      ; 004ae0f9 | DAT_00612560
    MOV dword ptr [ESP + 0xd4],EAX      ; 004ae0ff
    MOV dword ptr [ESP + 0x84],EAX      ; 004ae106
    LEA EAX,[ESP + 0x80]                ; 004ae10d
    MOV dword ptr [ESP + 0x88],EDI      ; 004ae114
    FLD float ptr [EAX]                 ; 004ae11b
    FMUL float ptr [0x005fff94]         ; 004ae11d | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ae123
    FLD float ptr [EAX + 0x4]           ; 004ae125
    FMUL float ptr [0x005fff94]         ; 004ae128 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ae12e
    FLD float ptr [EAX + 0x8]           ; 004ae131
    FMUL float ptr [0x005fff94]         ; 004ae134 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ae13a
    LEA EAX,[ESP + 0x50]                ; 004ae13d
    PUSH EAX                            ; 004ae141
    MOV EAX,dword ptr [EDX]             ; 004ae142 | DAT_01bc120c
    PUSH EAX                            ; 004ae144
    CALL engine_special.cpp_FUN_00580173 ; 004ae145
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ae14a
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004ae14d
    LEA EBX,[ESP + 0x44]                ; 004ae154
    MOV dword ptr [ESP + 0x80],EAX      ; 004ae158
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004ae15f
    MOV EDX,dword ptr [0x00612560]      ; 004ae166 | DAT_00612560
    MOV dword ptr [ESP + 0x84],EAX      ; 004ae16c
    LEA EAX,[ESP + 0x80]                ; 004ae173
    MOV dword ptr [ESP + 0x88],EDI      ; 004ae17a
    FLD float ptr [EAX]                 ; 004ae181
    FMUL float ptr [0x005fff94]         ; 004ae183 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ae189
    FLD float ptr [EAX + 0x4]           ; 004ae18b
    FMUL float ptr [0x005fff94]         ; 004ae18e | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ae194
    FLD float ptr [EAX + 0x8]           ; 004ae197
    FMUL float ptr [0x005fff94]         ; 004ae19a | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ae1a0
    LEA EAX,[ESP + 0x44]                ; 004ae1a3
    PUSH EAX                            ; 004ae1a7
    MOV EAX,dword ptr [EDX]             ; 004ae1a8 | DAT_01bc120c
    ADD EAX,0x30                        ; 004ae1aa
    PUSH EAX                            ; 004ae1ad
    CALL engine_special.cpp_FUN_00580173 ; 004ae1ae
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ae1b3
    LEA EBX,[ESP + 0x68]                ; 004ae1b6
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004ae1ba
    MOV EDX,dword ptr [0x00612560]      ; 004ae1c1 | DAT_00612560
    MOV dword ptr [ESP + 0x80],EAX      ; 004ae1c7
    MOV dword ptr [ESP + 0x84],EAX      ; 004ae1ce
    LEA EAX,[ESP + 0x80]                ; 004ae1d5
    MOV dword ptr [ESP + 0x88],EDI      ; 004ae1dc
    FLD float ptr [EAX]                 ; 004ae1e3
    FMUL float ptr [0x005fff94]         ; 004ae1e5 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ae1eb
    FLD float ptr [EAX + 0x4]           ; 004ae1ed
    FMUL float ptr [0x005fff94]         ; 004ae1f0 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ae1f6
    FLD float ptr [EAX + 0x8]           ; 004ae1f9
    FMUL float ptr [0x005fff94]         ; 004ae1fc | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ae202
    LEA EAX,[ESP + 0x68]                ; 004ae205
    PUSH EAX                            ; 004ae209
    MOV EAX,dword ptr [EDX]             ; 004ae20a | DAT_01bc120c
    ADD EAX,0x60                        ; 004ae20c
    PUSH EAX                            ; 004ae20f
    CALL engine_special.cpp_FUN_00580173 ; 004ae210
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ae215
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004ae218
    LEA EBX,[ESP + 0x98]                ; 004ae21f
    MOV dword ptr [ESP + 0x80],EAX      ; 004ae226
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004ae22d
    MOV EDX,dword ptr [0x00612560]      ; 004ae234 | DAT_00612560
    MOV dword ptr [ESP + 0x84],EAX      ; 004ae23a
    LEA EAX,[ESP + 0x80]                ; 004ae241
    MOV dword ptr [ESP + 0x88],EDI      ; 004ae248
    FLD float ptr [EAX]                 ; 004ae24f
    FMUL float ptr [0x005fff94]         ; 004ae251 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004ae257
    FLD float ptr [EAX + 0x4]           ; 004ae259
    FMUL float ptr [0x005fff94]         ; 004ae25c | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004ae262
    FLD float ptr [EAX + 0x8]           ; 004ae265
    FMUL float ptr [0x005fff94]         ; 004ae268 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004ae26e
    LEA EAX,[ESP + 0x98]                ; 004ae271
    PUSH EAX                            ; 004ae278
    MOV EAX,dword ptr [EDX]             ; 004ae279 | DAT_01bc120c
    ADD EAX,0x90                        ; 004ae27b
    PUSH EAX                            ; 004ae280
    CALL engine_special.cpp_FUN_00580173 ; 004ae281
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ae286
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ae289
    MOV EAX,dword ptr [EAX + 0x54]      ; 004ae28c
    CMP EAX,0x3                         ; 004ae28f
    JA 0x004adb83                       ; 004ae292
        ;   XREF to: 004adb83 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4adae0]  ; 004ae298 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD


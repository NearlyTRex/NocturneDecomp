; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_FUN_004ccbe0(CVector3f *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005c4631
;   undefined4 DAT_005c4639
;   undefined4 DAT_005c4641
;   undefined4 DAT_005e0e18
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fed34
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b05c
;   undefined4 DAT_0060b060
;   undefined4 DAT_0060b064
;   ... and 12 more
;
; Called Functions:
;   core_gore.cpp_FUN_004cc970
;   core_set.cpp_CDemonSet_computeLighting_FUN_00538400
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_matrix.c_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;   engine_special.cpp_FUN_0056356c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccbe0
        ;   Label: core_gore.cpp_FUN_004ccbe0
    PUSH ESI                            ; 004ccbe1
    PUSH EDI                            ; 004ccbe2
    PUSH EBP                            ; 004ccbe3
    MOV EBP,ESP                         ; 004ccbe4
    SUB ESP,0x108                       ; 004ccbe6
    AND ESP,0xfffffff8                  ; 004ccbec
    MOV ESI,dword ptr [0x005f2afc]      ; 004ccbef | DAT_005f2afc
    LEA EBX,[ESP + 0xac]                ; 004ccbf5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ccbfc
    MOV ESI,dword ptr [ESI]             ; 004ccbff | DAT_01bdd7e4
    FLD float ptr [EAX]                 ; 004ccc01
    FMUL float ptr [0x005e0e18]         ; 004ccc03 | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004ccc09
    FLD float ptr [EAX + 0x4]           ; 004ccc0b
    FMUL float ptr [0x005e0e18]         ; 004ccc0e | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004ccc14
    FLD float ptr [EAX + 0x8]           ; 004ccc17
    FMUL float ptr [0x005e0e18]         ; 004ccc1a | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004ccc20
    LEA EAX,[ESP + 0xac]                ; 004ccc23
    PUSH EAX                            ; 004ccc2a
    PUSH ESI                            ; 004ccc2b
    CALL engine_special.cpp_FUN_0056356c ; 004ccc2c
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0056356c(SProjectedVertex * output, CVector3i * input)
    MOV AH,byte ptr [ESI + 0x13]        ; 004ccc31
    ADD ESP,0x8                         ; 004ccc34
    TEST AH,0x80                        ; 004ccc37
    JZ 0x004ccc43                       ; 004ccc3a
        ;   XREF to: 004ccc43 (CONDITIONAL_JUMP)  ; LAB_004ccc43
    MOV ESP,EBP                         ; 004ccc3c
        ;   Label: LAB_004ccc3c
    POP EBP                             ; 004ccc3e
    POP EDI                             ; 004ccc3f
    POP ESI                             ; 004ccc40
    POP EBX                             ; 004ccc41
    RET                                 ; 004ccc42
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ccc43
        ;   Label: LAB_004ccc43
    PUSH EDX                            ; 004ccc46
    MOV ECX,dword ptr [0x005f2afc]      ; 004ccc47 | DAT_005f2afc
    PUSH ECX                            ; 004ccc4d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004ccc4e
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004ccc53
    PUSH 0x0                            ; 004ccc56
    PUSH 0x1d22e70                      ; 004ccc58 | DAT_01d22e70
    MOV EBX,dword ptr [0x005f2afc]      ; 004ccc5d | DAT_005f2afc
    PUSH EBX                            ; 004ccc63 | DAT_01bdd7e4
    MOV ESI,0xbdcccccd                  ; 004ccc64
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 004ccc69
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    LEA EBX,[ESP + 0x7c]                ; 004ccc6e
    MOV EDX,dword ptr [0x005f2afc]      ; 004ccc72 | DAT_005f2afc
    ADD ESP,0xc                         ; 004ccc78
    XOR EAX,EAX                         ; 004ccc7b
    MOV dword ptr [ESP + 0xb8],ESI      ; 004ccc7d
    MOV dword ptr [ESP + 0xc0],EAX      ; 004ccc84
    LEA EAX,[ESP + 0xb8]                ; 004ccc8b
    MOV dword ptr [ESP + 0xbc],ESI      ; 004ccc92
    FLD float ptr [EAX]                 ; 004ccc99
    FMUL float ptr [0x005e0e18]         ; 004ccc9b | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004ccca1
    FLD float ptr [EAX + 0x4]           ; 004ccca3
    FMUL float ptr [0x005e0e18]         ; 004ccca6 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cccac
    FLD float ptr [EAX + 0x8]           ; 004cccaf
    FMUL float ptr [0x005e0e18]         ; 004cccb2 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cccb8
    LEA EAX,[ESP + 0x70]                ; 004cccbb
    PUSH EAX                            ; 004cccbf
    MOV EAX,dword ptr [EDX]             ; 004cccc0 | DAT_01bdd7e4
    PUSH EAX                            ; 004cccc2
    CALL engine_special.cpp_FUN_005632a3 ; 004cccc3
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3dcccccd                  ; 004cccc8
    LEA EAX,[ESP + 0xc0]                ; 004ccccd
    ADD ESP,0x8                         ; 004cccd4
    XOR EBX,EBX                         ; 004cccd7
    MOV dword ptr [ESP + 0xb8],EDX      ; 004cccd9
    MOV dword ptr [ESP + 0xbc],ESI      ; 004ccce0
    MOV dword ptr [ESP + 0xc0],EBX      ; 004ccce7
    LEA EBX,[ESP + 0x7c]                ; 004cccee
    MOV EDX,dword ptr [0x005f2afc]      ; 004cccf2 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004cccf8
    FMUL float ptr [0x005e0e18]         ; 004cccfa | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004ccd00
    FLD float ptr [EAX + 0x4]           ; 004ccd02
    FMUL float ptr [0x005e0e18]         ; 004ccd05 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004ccd0b
    FLD float ptr [EAX + 0x8]           ; 004ccd0e
    FMUL float ptr [0x005e0e18]         ; 004ccd11 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004ccd17
    LEA EAX,[ESP + 0x7c]                ; 004ccd1a
    PUSH EAX                            ; 004ccd1e
    MOV EAX,dword ptr [EDX]             ; 004ccd1f | DAT_01bdd7e4
    ADD EAX,0x30                        ; 004ccd21
    PUSH EAX                            ; 004ccd24
    MOV ESI,0x3dcccccd                  ; 004ccd25
    CALL engine_special.cpp_FUN_005632a3 ; 004ccd2a
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x24]                ; 004ccd2f
    MOV EDX,dword ptr [0x005f2afc]      ; 004ccd33 | DAT_005f2afc
    ADD ESP,0x8                         ; 004ccd39
    XOR EAX,EAX                         ; 004ccd3c
    MOV dword ptr [ESP + 0xb8],ESI      ; 004ccd3e
    MOV dword ptr [ESP + 0xc0],EAX      ; 004ccd45
    LEA EAX,[ESP + 0xb8]                ; 004ccd4c
    MOV dword ptr [ESP + 0xbc],ESI      ; 004ccd53
    FLD float ptr [EAX]                 ; 004ccd5a
    FMUL float ptr [0x005e0e18]         ; 004ccd5c | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004ccd62
    FLD float ptr [EAX + 0x4]           ; 004ccd64
    FMUL float ptr [0x005e0e18]         ; 004ccd67 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004ccd6d
    FLD float ptr [EAX + 0x8]           ; 004ccd70
    FMUL float ptr [0x005e0e18]         ; 004ccd73 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004ccd79
    LEA EAX,[ESP + 0x1c]                ; 004ccd7c
    PUSH EAX                            ; 004ccd80
    MOV EAX,dword ptr [EDX]             ; 004ccd81 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 004ccd83
    PUSH EAX                            ; 004ccd86
    CALL engine_special.cpp_FUN_005632a3 ; 004ccd87
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0xbdcccccd                  ; 004ccd8c
    LEA EAX,[ESP + 0xc0]                ; 004ccd91
    ADD ESP,0x8                         ; 004ccd98
    XOR EBX,EBX                         ; 004ccd9b
    MOV dword ptr [ESP + 0xb8],EDX      ; 004ccd9d
    MOV dword ptr [ESP + 0xbc],ESI      ; 004ccda4
    MOV dword ptr [ESP + 0xc0],EBX      ; 004ccdab
    LEA EBX,[ESP + 0xd0]                ; 004ccdb2
    MOV EDX,dword ptr [0x005f2afc]      ; 004ccdb9 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004ccdbf
    FMUL float ptr [0x005e0e18]         ; 004ccdc1 | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004ccdc7
    FLD float ptr [EAX + 0x4]           ; 004ccdc9
    FMUL float ptr [0x005e0e18]         ; 004ccdcc | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004ccdd2
    FLD float ptr [EAX + 0x8]           ; 004ccdd5
    FMUL float ptr [0x005e0e18]         ; 004ccdd8 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004ccdde
    LEA EAX,[ESP + 0xd0]                ; 004ccde1
    PUSH EAX                            ; 004ccde8
    MOV EAX,dword ptr [EDX]             ; 004ccde9 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 004ccdeb
    PUSH EAX                            ; 004ccdf0
    CALL engine_special.cpp_FUN_005632a3 ; 004ccdf1
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004ccdf6
    PUSH 0x5fed34                       ; 004ccdf9 | DAT_005fed34
    MOV ESI,dword ptr [0x005f2afc]      ; 004ccdfe | DAT_005f2afc
    PUSH ESI                            ; 004cce04 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 004cce05
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004cce0a
    MOV EDX,dword ptr [EBP + 0x14]      ; 004cce0d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cce10
    LEA EBX,[ESP + 0x10]                ; 004cce13
    MOV EDX,dword ptr [EDX + 0x44]      ; 004cce17
    MOV EAX,dword ptr [EAX + 0x44]      ; 004cce1a
    SAR EDX,0x2                         ; 004cce1d
    AND EAX,0x3                         ; 004cce20
    AND EDX,0x3                         ; 004cce23
    SHL EAX,0x16                        ; 004cce26
    SHL EDX,0x16                        ; 004cce29
    ADD EAX,0x80000                     ; 004cce2c
    ADD EDX,0x80000                     ; 004cce31
    MOV [0x0060b02c],EAX                ; 004cce37 | DAT_0060b02c
    MOV dword ptr [0x0060b030],EDX      ; 004cce3c | DAT_0060b030
    LEA ECX,[EAX + 0x300000]            ; 004cce42
    MOV dword ptr [0x0060b060],EDX      ; 004cce48 | DAT_0060b060
    MOV dword ptr [0x0060b05c],ECX      ; 004cce4e | DAT_0060b05c
    MOV dword ptr [0x0060b08c],ECX      ; 004cce54 | DAT_0060b08c
    ADD EDX,0x300000                    ; 004cce5a
    MOV [0x0060b0bc],EAX                ; 004cce60 | DAT_0060b0bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cce65
    MOV dword ptr [0x0060b090],EDX      ; 004cce68 | DAT_0060b090
    MOV dword ptr [0x0060b0c0],EDX      ; 004cce6e | DAT_0060b0c0
    FLD float ptr [EAX]                 ; 004cce74
    FMUL float ptr [0x005e0e18]         ; 004cce76 | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cce7c
    FLD float ptr [EAX + 0x4]           ; 004cce7e
    FMUL float ptr [0x005e0e18]         ; 004cce81 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cce87
    FLD float ptr [EAX + 0x8]           ; 004cce8a
    FMUL float ptr [0x005e0e18]         ; 004cce8d | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cce93
    PUSH 0x4                            ; 004cce96
    PUSH 0x0                            ; 004cce98
    PUSH 0x1d22e7c                      ; 004cce9a | DAT_01d22e7c
    LEA EAX,[ESP + 0x1c]                ; 004cce9f
    PUSH EAX                            ; 004ccea3
    MOV EDI,dword ptr [0x00603b28]      ; 004ccea4 | g_CDemonSetPtr
    PUSH EDI                            ; 004cceaa | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00538400 ; 004cceab
        ;   XREF to: 00538400 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00538400(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004cceb0
    LEA EAX,[ESP + 0xec]                ; 004cceb3
    PUSH EAX                            ; 004cceba
    LEA EAX,[ESP + 0xf8]                ; 004ccebb
    PUSH EAX                            ; 004ccec2
    LEA EAX,[ESP + 0xf8]                ; 004ccec3
    PUSH EAX                            ; 004cceca
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ccecb
    MOV EDX,dword ptr [EAX + 0x40]      ; 004ccece
    PUSH EDX                            ; 004cced1
    CALL core_gore.cpp_FUN_004cc970     ; 004cced2
        ;   XREF to: 004cc970 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004cc970()
    ADD ESP,0x10                        ; 004cced7
    XOR ECX,ECX                         ; 004cceda
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004ccedc
        ;   Label: LAB_004ccedc
    MOV EDX,dword ptr [ECX + 0x60b034]  ; 004ccee3 | DAT_0060b034 | DAT_0060b064
    IMUL EDX                            ; 004ccee9
    SHRD EAX,EDX,0x10                   ; 004cceeb
    MOV EDX,dword ptr [ECX + 0x60b038]  ; 004cceef | DAT_0060b038 | DAT_0060b068
    MOV dword ptr [ECX + 0x60b034],EAX  ; 004ccef5 | DAT_0060b034 | DAT_0060b064
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004ccefb
    IMUL EDX                            ; 004ccf02
    SHRD EAX,EDX,0x10                   ; 004ccf04
    MOV EDX,dword ptr [ECX + 0x60b03c]  ; 004ccf08 | DAT_0060b03c | DAT_0060b06c
    MOV dword ptr [ECX + 0x60b038],EAX  ; 004ccf0e | DAT_0060b038 | DAT_0060b068
    MOV EAX,dword ptr [ESP + 0xec]      ; 004ccf14
    ADD ECX,0x30                        ; 004ccf1b
    IMUL EDX                            ; 004ccf1e
    SHRD EAX,EDX,0x10                   ; 004ccf20
    MOV dword ptr [ECX + 0x60b00c],EAX  ; 004ccf24 | DAT_0060b03c | DAT_0060b06c
    CMP ECX,0xc0                        ; 004ccf2a
    JNZ 0x004ccedc                      ; 004ccf30
        ;   XREF to: 004ccedc (CONDITIONAL_JUMP)  ; LAB_004ccedc
    PUSH 0x0                            ; 004ccf32
    MOV ECX,dword ptr [EBP + 0x14]      ; 004ccf34
    MOV EAX,[0x007e2a54]                ; 004ccf37 | DAT_007e2a54
    PUSH ECX                            ; 004ccf3c
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004ccf3d
    PUSH EAX                            ; 004ccf40
    CALL dword ptr [EDX + 0x4]          ; 004ccf41
    MOV EAX,0xffff                      ; 004ccf44
    MOV EBX,dword ptr [0x01c6e24c]      ; 004ccf49 | DAT_01c6e24c
    ADD ESP,0xc                         ; 004ccf4f
    SUB EAX,EBX                         ; 004ccf52
    PUSH EAX                            ; 004ccf54
    MOV ESI,dword ptr [0x005f2afc]      ; 004ccf55 | DAT_005f2afc
    PUSH ESI                            ; 004ccf5b | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 004ccf5c
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004ccf61
    PUSH 0x1d22e48                      ; 004ccf64
    MOV EDI,dword ptr [0x005f2afc]      ; 004ccf69 | DAT_005f2afc
    PUSH EDI                            ; 004ccf6f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730 ; 004ccf70
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004ccf75
    MOV EAX,[0x005f2afc]                ; 004ccf78 | DAT_005f2afc
    PUSH EAX                            ; 004ccf7d | DAT_01bdd7e4
    XOR EBX,EBX                         ; 004ccf7e
    LEA EDI,[ESP + 0x8c]                ; 004ccf80
    CALL engine_matrix.c_pop_FUN_0046d080 ; 004ccf87
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    MOV EDX,0x3f800000                  ; 004ccf8c
    ADD ESP,0x4                         ; 004ccf91
    MOV ECX,0x3ccccccd                  ; 004ccf94
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ccf99
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ccf9c
    MOV dword ptr [ESP + 0x8],EDX       ; 004ccf9f
    MOVSD ES:EDI,ESI                    ; 004ccfa3
    MOVSD ES:EDI,ESI                    ; 004ccfa4
    MOVSD ES:EDI,ESI                    ; 004ccfa5
    MOV dword ptr [ESP + 0xc],ECX       ; 004ccfa6
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ccfaa
    ADD EAX,0x18                        ; 004ccfad
    LEA EDI,[ESP + 0xc4]                ; 004ccfb0
    LEA ESI,[ESI + 0xc]                 ; 004ccfb7
    MOV dword ptr [ESP + 0x100],EBX     ; 004ccfba
    MOV dword ptr [ESP + 0x104],EAX     ; 004ccfc1
    MOVSD ES:EDI,ESI                    ; 004ccfc8
    MOVSD ES:EDI,ESI                    ; 004ccfc9
    MOVSD ES:EDI,ESI                    ; 004ccfca
    FLD float ptr [ESP + 0xc]           ; 004ccfcb
        ;   Label: LAB_004ccfcb
    MOV EAX,dword ptr [ESP + 0x104]     ; 004ccfcf
    FLD ST0                             ; 004ccfd6
    FLD double ptr [0x005c4631]         ; 004ccfd8 | DAT_005c4631
    FXCH                                ; 004ccfde
    FMUL ST1                            ; 004ccfe0
    FLD float ptr [EAX]                 ; 004ccfe2
    FXCH                                ; 004ccfe4
    FSTP ST3                            ; 004ccfe6
    FXCH ST2                            ; 004ccfe8
    FSTP float ptr [ESP + 0xc]          ; 004ccfea
    FXCH                                ; 004ccfee
    FMUL float ptr [ESP + 0xc]          ; 004ccff0
    FLD float ptr [EAX + 0x4]           ; 004ccff4
    FMUL float ptr [ESP + 0xc]          ; 004ccff7
    FLD float ptr [EAX + 0x8]           ; 004ccffb
    FMUL float ptr [ESP + 0xc]          ; 004ccffe
    FLD float ptr [ESP + 0x8]           ; 004cd002
    FLD float ptr [ESP + 0xc4]          ; 004cd006
    LEA EDI,[ESP + 0x34]                ; 004cd00d
    LEA ESI,[ESP + 0x58]                ; 004cd011
    FXCH ST4                            ; 004cd015
    FSTP float ptr [ESP + 0x58]         ; 004cd017
    FXCH ST2                            ; 004cd01b
    FSTP float ptr [ESP + 0x5c]         ; 004cd01d
    FSTP float ptr [ESP + 0x60]         ; 004cd021
    MOVSD ES:EDI,ESI                    ; 004cd025
    MOVSD ES:EDI,ESI                    ; 004cd026
    MOVSD ES:EDI,ESI                    ; 004cd027
    FLD ST0                             ; 004cd028
    FXCH ST2                            ; 004cd02a
    FSUB float ptr [ESP + 0x34]         ; 004cd02c
    FXCH ST2                            ; 004cd030
    FMULP ST3                           ; 004cd032
    FXCH                                ; 004cd034
    FST float ptr [ESP + 0xc4]          ; 004cd036
    FMUL float ptr [ESP + 0xc]          ; 004cd03d
    FLD float ptr [ESP + 0xcc]          ; 004cd041
    FLD float ptr [ESP + 0xc8]          ; 004cd048
    FSUB float ptr [ESP + 0x38]         ; 004cd04f
    FXCH                                ; 004cd053
    FSUB float ptr [ESP + 0x3c]         ; 004cd055
    FXCH                                ; 004cd059
    FST float ptr [ESP + 0xc8]          ; 004cd05b
    FMUL float ptr [ESP + 0xc]          ; 004cd062
    FXCH                                ; 004cd066
    FST float ptr [ESP + 0xcc]          ; 004cd068
    FMUL float ptr [ESP + 0xc]          ; 004cd06f
    FLD float ptr [ESP + 0x88]          ; 004cd073
    FLD float ptr [ESP + 0x8c]          ; 004cd07a
    LEA EAX,[ESP + 0x88]                ; 004cd081
    FXCH ST6                            ; 004cd088
    FSTP ST5                            ; 004cd08a
    FLD float ptr [ESP + 0x90]          ; 004cd08c
    PUSH EAX                            ; 004cd093
    LEA EDI,[ESP + 0x50]                ; 004cd094
    LEA ESI,[ESP + 0x68]                ; 004cd098
    FXCH ST4                            ; 004cd09c
    FSTP float ptr [ESP + 0x68]         ; 004cd09e
    FXCH ST2                            ; 004cd0a2
    FSTP float ptr [ESP + 0x6c]         ; 004cd0a4
    FSTP float ptr [ESP + 0x70]         ; 004cd0a8
    MOVSD ES:EDI,ESI                    ; 004cd0ac
    MOVSD ES:EDI,ESI                    ; 004cd0ad
    MOVSD ES:EDI,ESI                    ; 004cd0ae
    FXCH ST2                            ; 004cd0af
    FSTP float ptr [ESP + 0xc]          ; 004cd0b1
    MOV ESI,dword ptr [0x005f2afc]      ; 004cd0b5 | DAT_005f2afc
    FXCH                                ; 004cd0bb
    FSUB float ptr [ESP + 0x50]         ; 004cd0bd
    FXCH ST2                            ; 004cd0c1
    FSUB float ptr [ESP + 0x54]         ; 004cd0c3
    FXCH                                ; 004cd0c7
    FSUB float ptr [ESP + 0x58]         ; 004cd0c9
    FXCH ST2                            ; 004cd0cd
    FSTP float ptr [ESP + 0x8c]         ; 004cd0cf
    FSTP float ptr [ESP + 0x90]         ; 004cd0d6
    PUSH ESI                            ; 004cd0dd | DAT_01bdd7e4
    FSTP float ptr [ESP + 0x98]         ; 004cd0de
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004cd0e5
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004cd0ea
    PUSH 0x0                            ; 004cd0ed
    PUSH 0x1d22e70                      ; 004cd0ef | DAT_01d22e70
    MOV EDI,dword ptr [0x005f2afc]      ; 004cd0f4 | DAT_005f2afc
    PUSH EDI                            ; 004cd0fa | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 ; 004cd0fb
        ;   XREF to: 0046cee0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004cd100
    FLD float ptr [ESP + 0x8]           ; 004cd103
    FST double ptr [ESP]                ; 004cd107
    FMUL double ptr [0x005c4639]        ; 004cd10a | DAT_005c4639
    FSTP float ptr [ESP + 0xb8]         ; 004cd110
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004cd117
    MOV dword ptr [ESP + 0xfc],EAX      ; 004cd11e
    MOV dword ptr [ESP + 0xbc],EAX      ; 004cd125
    XOR EAX,EAX                         ; 004cd12c
    MOV EDX,dword ptr [0x005f2afc]      ; 004cd12e | DAT_005f2afc
    MOV dword ptr [ESP + 0xc0],EAX      ; 004cd134
    LEA EBX,[ESP + 0x28]                ; 004cd13b
    LEA EAX,[ESP + 0xb8]                ; 004cd13f
    FLD float ptr [EAX]                 ; 004cd146
    FMUL float ptr [0x005e0e18]         ; 004cd148 | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cd14e
    FLD float ptr [EAX + 0x4]           ; 004cd150
    FMUL float ptr [0x005e0e18]         ; 004cd153 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cd159
    FLD float ptr [EAX + 0x8]           ; 004cd15c
    FMUL float ptr [0x005e0e18]         ; 004cd15f | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cd165
    LEA EAX,[ESP + 0x28]                ; 004cd168
    PUSH EAX                            ; 004cd16c
    MOV EAX,dword ptr [EDX]             ; 004cd16d | DAT_01bdd7e4
    PUSH EAX                            ; 004cd16f
    CALL engine_special.cpp_FUN_005632a3 ; 004cd170
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004cd175
    FLD double ptr [ESP]                ; 004cd178
    FMUL double ptr [0x005c4641]        ; 004cd17b | DAT_005c4641
    LEA EBX,[ESP + 0xa0]                ; 004cd181
    FSTP float ptr [ESP + 0xf8]         ; 004cd188
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004cd18f
    XOR EDX,EDX                         ; 004cd196
    MOV dword ptr [ESP + 0xb8],EAX      ; 004cd198
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004cd19f
    MOV dword ptr [ESP + 0xc0],EDX      ; 004cd1a6
    MOV dword ptr [ESP + 0xbc],EAX      ; 004cd1ad
    LEA EAX,[ESP + 0xb8]                ; 004cd1b4
    MOV EDX,dword ptr [0x005f2afc]      ; 004cd1bb | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004cd1c1
    FMUL float ptr [0x005e0e18]         ; 004cd1c3 | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cd1c9
    FLD float ptr [EAX + 0x4]           ; 004cd1cb
    FMUL float ptr [0x005e0e18]         ; 004cd1ce | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cd1d4
    FLD float ptr [EAX + 0x8]           ; 004cd1d7
    FMUL float ptr [0x005e0e18]         ; 004cd1da | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cd1e0
    LEA EAX,[ESP + 0xa0]                ; 004cd1e3
    PUSH EAX                            ; 004cd1ea
    MOV EAX,dword ptr [EDX]             ; 004cd1eb | DAT_01bdd7e4
    ADD EAX,0x30                        ; 004cd1ed
    PUSH EAX                            ; 004cd1f0
    CALL engine_special.cpp_FUN_005632a3 ; 004cd1f1
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x9c]                ; 004cd1f6
    ADD ESP,0x8                         ; 004cd1fd
    MOV EDX,dword ptr [0x005f2afc]      ; 004cd200 | DAT_005f2afc
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004cd206
    XOR ECX,ECX                         ; 004cd20d
    MOV dword ptr [ESP + 0xb8],EAX      ; 004cd20f
    MOV dword ptr [ESP + 0xbc],EAX      ; 004cd216
    LEA EAX,[ESP + 0xb8]                ; 004cd21d
    MOV dword ptr [ESP + 0xc0],ECX      ; 004cd224
    FLD float ptr [EAX]                 ; 004cd22b
    FMUL float ptr [0x005e0e18]         ; 004cd22d | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cd233
    FLD float ptr [EAX + 0x4]           ; 004cd235
    FMUL float ptr [0x005e0e18]         ; 004cd238 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cd23e
    FLD float ptr [EAX + 0x8]           ; 004cd241
    FMUL float ptr [0x005e0e18]         ; 004cd244 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cd24a
    LEA EAX,[ESP + 0x94]                ; 004cd24d
    PUSH EAX                            ; 004cd254
    MOV EAX,dword ptr [EDX]             ; 004cd255 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 004cd257
    PUSH EAX                            ; 004cd25a
    CALL engine_special.cpp_FUN_005632a3 ; 004cd25b
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004cd260
    XOR EBX,EBX                         ; 004cd263
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004cd265
    MOV dword ptr [ESP + 0xc0],EBX      ; 004cd26c
    MOV dword ptr [ESP + 0xb8],EAX      ; 004cd273
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004cd27a
    LEA EBX,[ESP + 0x40]                ; 004cd281
    MOV dword ptr [ESP + 0xbc],EAX      ; 004cd285
    LEA EAX,[ESP + 0xb8]                ; 004cd28c
    MOV EDX,dword ptr [0x005f2afc]      ; 004cd293 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004cd299
    FMUL float ptr [0x005e0e18]         ; 004cd29b | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cd2a1
    FLD float ptr [EAX + 0x4]           ; 004cd2a3
    FMUL float ptr [0x005e0e18]         ; 004cd2a6 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cd2ac
    FLD float ptr [EAX + 0x8]           ; 004cd2af
    FMUL float ptr [0x005e0e18]         ; 004cd2b2 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cd2b8
    LEA EAX,[ESP + 0x40]                ; 004cd2bb
    PUSH EAX                            ; 004cd2bf
    MOV EAX,dword ptr [EDX]             ; 004cd2c0 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 004cd2c2
    PUSH EAX                            ; 004cd2c7
    CALL engine_special.cpp_FUN_005632a3 ; 004cd2c8
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004cd2cd
    LEA EBX,[ESP + 0x10]                ; 004cd2d0
    LEA EAX,[ESP + 0x88]                ; 004cd2d4
    FLD float ptr [EAX]                 ; 004cd2db
    FMUL float ptr [0x005e0e18]         ; 004cd2dd | DAT_005e0e18
    FISTP dword ptr [EBX]               ; 004cd2e3
    FLD float ptr [EAX + 0x4]           ; 004cd2e5
    FMUL float ptr [0x005e0e18]         ; 004cd2e8 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x4]         ; 004cd2ee
    FLD float ptr [EAX + 0x8]           ; 004cd2f1
    FMUL float ptr [0x005e0e18]         ; 004cd2f4 | DAT_005e0e18
    FISTP dword ptr [EBX + 0x8]         ; 004cd2fa
    PUSH 0x4                            ; 004cd2fd
    PUSH 0x0                            ; 004cd2ff
    PUSH 0x1d22e7c                      ; 004cd301 | DAT_01d22e7c
    LEA EAX,[ESP + 0x1c]                ; 004cd306
    PUSH EAX                            ; 004cd30a
    MOV ESI,dword ptr [0x00603b28]      ; 004cd30b | g_CDemonSetPtr
    PUSH ESI                            ; 004cd311 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00538400 ; 004cd312
        ;   XREF to: 00538400 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00538400(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004cd317
    XOR ECX,ECX                         ; 004cd31a
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004cd31c
        ;   Label: LAB_004cd31c
    MOV EDX,dword ptr [ECX + 0x60b034]  ; 004cd323 | DAT_0060b034 | DAT_0060b064
    IMUL EDX                            ; 004cd329
    SHRD EAX,EDX,0x10                   ; 004cd32b
    MOV EDX,dword ptr [ECX + 0x60b038]  ; 004cd32f | DAT_0060b038 | DAT_0060b068
    MOV dword ptr [ECX + 0x60b034],EAX  ; 004cd335 | DAT_0060b034 | DAT_0060b064
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004cd33b
    IMUL EDX                            ; 004cd342
    SHRD EAX,EDX,0x10                   ; 004cd344
    MOV EDX,dword ptr [ECX + 0x60b03c]  ; 004cd348 | DAT_0060b03c | DAT_0060b06c
    MOV dword ptr [ECX + 0x60b038],EAX  ; 004cd34e | DAT_0060b038 | DAT_0060b068
    MOV EAX,dword ptr [ESP + 0xec]      ; 004cd354
    ADD ECX,0x30                        ; 004cd35b
    IMUL EDX                            ; 004cd35e
    SHRD EAX,EDX,0x10                   ; 004cd360
    MOV dword ptr [ECX + 0x60b00c],EAX  ; 004cd364 | DAT_0060b03c | DAT_0060b06c
    CMP ECX,0xc0                        ; 004cd36a
    JNZ 0x004cd31c                      ; 004cd370
        ;   XREF to: 004cd31c (CONDITIONAL_JUMP)  ; LAB_004cd31c
    PUSH 0x0                            ; 004cd372
    MOV EDI,dword ptr [EBP + 0x14]      ; 004cd374
    MOV EAX,[0x007e2a54]                ; 004cd377 | DAT_007e2a54
    PUSH EDI                            ; 004cd37c
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004cd37d
    PUSH EAX                            ; 004cd380
    CALL dword ptr [EDX + 0x4]          ; 004cd381
    MOV EAX,0xffff                      ; 004cd384
    MOV EDX,dword ptr [0x01c6e24c]      ; 004cd389 | DAT_01c6e24c
    ADD ESP,0xc                         ; 004cd38f
    SUB EAX,EDX                         ; 004cd392
    PUSH EAX                            ; 004cd394
    MOV ECX,dword ptr [0x005f2afc]      ; 004cd395 | DAT_005f2afc
    PUSH ECX                            ; 004cd39b | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 004cd39c
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004cd3a1
    PUSH 0x1d22e48                      ; 004cd3a4
    MOV EBX,dword ptr [0x005f2afc]      ; 004cd3a9 | DAT_005f2afc
    PUSH EBX                            ; 004cd3af | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730 ; 004cd3b0
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004cd3b5
    MOV ESI,dword ptr [0x005f2afc]      ; 004cd3b8 | DAT_005f2afc
    PUSH ESI                            ; 004cd3be | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 004cd3bf
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 004cd3c4
    MOV EDI,dword ptr [ESP + 0x100]     ; 004cd3c7
    INC EDI                             ; 004cd3ce
    MOV dword ptr [ESP + 0x100],EDI     ; 004cd3cf
    CMP EDI,0x3                         ; 004cd3d6
    JGE 0x004ccc3c                      ; 004cd3d9
        ;   XREF to: 004ccc3c (CONDITIONAL_JUMP)  ; LAB_004ccc3c
    JMP 0x004ccfcb                      ; 004cd3df
        ;   XREF to: 004ccfcb (UNCONDITIONAL_JUMP)  ; LAB_004ccfcb


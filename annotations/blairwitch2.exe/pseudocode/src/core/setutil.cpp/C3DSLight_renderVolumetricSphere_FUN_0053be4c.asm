; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_0053be4c(C3DSLight *this_ptr)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005e64d1
;   undefined4 DAT_005e64d9
;   undefined4 DAT_005e64dd
;   undefined4 DAT_005e64e1
;   undefined4 DAT_005e64e9
;   undefined4 DAT_005e64f1
;   undefined4 DAT_005e64f9
;   undefined4 DAT_005fb3c0
;   undefined4 DAT_0060b280
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0053be4c
        ;   Label: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_0053be4c
    PUSH EBP                            ; 0053be50
    SUB ESP,0x74                        ; 0053be51
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0053be54
    TEST dword ptr [EBP + 0x11d4],0x7fffffff ; 0053be58
    JNZ 0x0053be69                      ; 0053be62
        ;   XREF to: 0053be69 (CONDITIONAL_JUMP)  ; LAB_0053be69
    ADD ESP,0x74                        ; 0053be64
    POP EBP                             ; 0053be67
    RET                                 ; 0053be68
    PUSH EDI                            ; 0053be69
        ;   Label: LAB_0053be69
    PUSH ESI                            ; 0053be6a
    PUSH EBX                            ; 0053be6b
    LEA EAX,[EBP + 0x104]               ; 0053be6c
    PUSH EAX                            ; 0053be72
    MOV ECX,dword ptr [0x0060b280]      ; 0053be73 | DAT_0060b280
    PUSH ECX                            ; 0053be79
    XOR EBX,EBX                         ; 0053be7a
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0053be7c
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0053be81
    MOV dword ptr [ESP + 0x78],EBX      ; 0053be84
    MOV dword ptr [ESP + 0x6c],EBX      ; 0053be88
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0053be8c
        ;   Label: LAB_0053be8c
    MOV EDI,0xfffffffc                  ; 0053be90
    SUB ESI,0xc0                        ; 0053be95
    MOV EAX,dword ptr [ESP + 0x78]      ; 0053be9b
        ;   Label: LAB_0053be9b
    MOV dword ptr [ESP + 0x7c],EAX      ; 0053be9f
    FILD dword ptr [ESP + 0x7c]         ; 0053bea3
    FMUL float ptr [0x005e64d9]         ; 0053bea7 | DAT_005e64d9
    FMUL float ptr [0x005e64dd]         ; 0053bead | DAT_005e64dd
    FMUL double ptr [0x005e64e1]        ; 0053beb3 | DAT_005e64e1
    FLD ST0                             ; 0053beb9
    FSIN                                ; 0053bebb
    FXCH                                ; 0053bebd
    FCOS                                ; 0053bebf
    MOV dword ptr [ESP + 0x7c],EDI      ; 0053bec1
    FILD dword ptr [ESP + 0x7c]         ; 0053bec5
    FMUL float ptr [0x005e64e9]         ; 0053bec9 | DAT_005e64e9
    FLD float ptr [EBP + 0x11d4]        ; 0053becf
    FMUL double ptr [0x005e64d1]        ; 0053bed5 | DAT_005e64d1
    FXCH                                ; 0053bedb
    FMUL float ptr [0x005e64dd]         ; 0053bedd | DAT_005e64dd
    FXCH ST3                            ; 0053bee3
    FMUL ST1                            ; 0053bee5
    FXCH ST3                            ; 0053bee7
    FMUL double ptr [0x005e64f1]        ; 0053bee9 | DAT_005e64f1
    FLD ST0                             ; 0053beef
    FCOS                                ; 0053bef1
    FXCH                                ; 0053bef3
    FSIN                                ; 0053bef5
    FXCH ST3                            ; 0053bef7
    FMUL ST2                            ; 0053bef9
    FMUL ST1                            ; 0053befb
    FXCH ST4                            ; 0053befd
    FMULP                               ; 0053beff
    FXCH ST2                            ; 0053bf01
    FMULP                               ; 0053bf03
    LEA EBX,[ESP + 0x34]                ; 0053bf05
    MOV EDX,dword ptr [0x0060b280]      ; 0053bf09 | DAT_0060b280
    FXCH ST2                            ; 0053bf0f
    FSTP float ptr [ESP + 0x48]         ; 0053bf11
    LEA EAX,[ESP + 0x40]                ; 0053bf15
    FSTP float ptr [ESP + 0x40]         ; 0053bf19
    FSTP float ptr [ESP + 0x44]         ; 0053bf1d
    FLD float ptr [EAX]                 ; 0053bf21
    FMUL float ptr [0x005fb3c0]         ; 0053bf23 | DAT_005fb3c0
    FISTP dword ptr [EBX]               ; 0053bf29
    FLD float ptr [EAX + 0x4]           ; 0053bf2b
    FMUL float ptr [0x005fb3c0]         ; 0053bf2e | DAT_005fb3c0
    FISTP dword ptr [EBX + 0x4]         ; 0053bf34
    FLD float ptr [EAX + 0x8]           ; 0053bf37
    FMUL float ptr [0x005fb3c0]         ; 0053bf3a | DAT_005fb3c0
    FISTP dword ptr [EBX + 0x8]         ; 0053bf40
    LEA EAX,[ESP + 0x34]                ; 0053bf43
    PUSH EAX                            ; 0053bf47
    MOV EAX,dword ptr [EDX]             ; 0053bf48
    ADD EAX,ESI                         ; 0053bf4a
    PUSH EAX                            ; 0053bf4c
    CALL engine_special.cpp_FUN_0055d723 ; 0053bf4d
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x0060b280]      ; 0053bf52 | DAT_0060b280
    MOV EAX,dword ptr [EDX]             ; 0053bf58
    MOV dword ptr [ESI + EAX*0x1 + 0x18],0x800000 ; 0053bf5a
    MOV EAX,dword ptr [EDX]             ; 0053bf62
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0x800000 ; 0053bf64
    FLD float ptr [EBP + 0x11c4]        ; 0053bf6c
    FMUL float ptr [0x005e64f9]         ; 0053bf72 | DAT_005e64f9
    ADD ESP,0x8                         ; 0053bf78
    MOV EBX,dword ptr [EDX]             ; 0053bf7b
    CALL crt_math.c_round_FUN_005b7ff0  ; 0053bf7d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x7c]        ; 0053bf82
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0053bf86
    MOV dword ptr [ESI + EBX*0x1 + 0x20],EAX ; 0053bf8a
    FLD float ptr [EBP + 0x11c8]        ; 0053bf8e
    MOV EAX,dword ptr [EDX]             ; 0053bf94
    FMUL float ptr [0x005e64f9]         ; 0053bf96 | DAT_005e64f9
    LEA EBX,[EAX + ESI*0x1]             ; 0053bf9c
    CALL crt_math.c_round_FUN_005b7ff0  ; 0053bf9f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x7c]        ; 0053bfa4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0053bfa8
    MOV dword ptr [EBX + 0x24],EAX      ; 0053bfac
    FLD float ptr [EBP + 0x11cc]        ; 0053bfaf
    FMUL float ptr [0x005e64f9]         ; 0053bfb5 | DAT_005e64f9
    ADD ESI,0x30                        ; 0053bfbb
    MOV EBX,dword ptr [EDX]             ; 0053bfbe
    CALL crt_math.c_round_FUN_005b7ff0  ; 0053bfc0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x7c]        ; 0053bfc5
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0053bfc9
    INC EDI                             ; 0053bfcd
    MOV dword ptr [ESI + EBX*0x1 + -0x8],EAX ; 0053bfce
    CMP EDI,0x4                         ; 0053bfd2
    JLE 0x0053be9b                      ; 0053bfd5
        ;   XREF to: 0053be9b (CONDITIONAL_JUMP)  ; LAB_0053be9b
    MOV EAX,dword ptr [ESP + 0x78]      ; 0053bfdb
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0053bfdf
    INC EAX                             ; 0053bfe3
    ADD EDI,0x1e0                       ; 0053bfe4
    MOV dword ptr [ESP + 0x78],EAX      ; 0053bfea
    MOV dword ptr [ESP + 0x6c],EDI      ; 0053bfee
    CMP EAX,0x10                        ; 0053bff2
    JLE 0x0053be8c                      ; 0053bff5
        ;   XREF to: 0053be8c (CONDITIONAL_JUMP)  ; LAB_0053be8c
    PUSH 0x61bb54                       ; 0053bffb
    PUSH EDX                            ; 0053c000
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0053c001
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0053c006
    PUSH 0x4000                         ; 0053c009
    MOV EBX,dword ptr [0x0060b280]      ; 0053c00e | DAT_0060b280
    PUSH EBX                            ; 0053c014
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0053c015
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0053c01a
    PUSH 0x0                            ; 0053c01d
    MOV ESI,dword ptr [0x0060b280]      ; 0053c01f | DAT_0060b280
    PUSH ESI                            ; 0053c025
    MOV EDI,0x4                         ; 0053c026
    XOR EBP,EBP                         ; 0053c02b
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0053c02d
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0053c032
    MOV ESI,0xa                         ; 0053c035
    MOV EBX,dword ptr [0x0060b280]      ; 0053c03a | DAT_0060b280
    PUSH 0x1                            ; 0053c040
    MOV dword ptr [ESP + 0x14],EDI      ; 0053c042
    MOV dword ptr [ESP + 0x24],EBP      ; 0053c046
    MOV dword ptr [ESP + 0x20],EBP      ; 0053c04a
    PUSH EBX                            ; 0053c04e
    MOV dword ptr [ESP + 0x20],EBP      ; 0053c04f
    MOV dword ptr [ESP + 0x1c],EBP      ; 0053c053
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 0053c057
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0053c05c
    MOV dword ptr [ESP + 0x70],ESI      ; 0053c05f
    MOV dword ptr [ESP + 0x74],EBP      ; 0053c063
    MOV EDI,dword ptr [ESP + 0x74]      ; 0053c067
        ;   Label: LAB_0053c067
    MOV EBX,dword ptr [ESP + 0x70]      ; 0053c06b
    MOV ESI,0xfffffffc                  ; 0053c06f
    LEA EAX,[EDI + ESI*0x1]             ; 0053c074
        ;   Label: LAB_0053c074
    LEA EDX,[EBX + ESI*0x1]             ; 0053c077
    INC ESI                             ; 0053c07a
    MOV dword ptr [ESP + 0x24],EAX      ; 0053c07b
    MOV dword ptr [ESP + 0x28],EDX      ; 0053c07f
    LEA EBP,[EBX + ESI*0x1]             ; 0053c083
    LEA EAX,[ESP + 0xc]                 ; 0053c086
    MOV dword ptr [ESP + 0x2c],EBP      ; 0053c08a
    PUSH EAX                            ; 0053c08e
    MOV EBP,dword ptr [0x0060b280]      ; 0053c08f | DAT_0060b280
    LEA ECX,[EDI + ESI*0x1]             ; 0053c095
    PUSH EBP                            ; 0053c098
    MOV dword ptr [ESP + 0x38],ECX      ; 0053c099
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50 ; 0053c09d
        ;   XREF to: 0046ab50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0053c0a2
    CMP ESI,0x4                         ; 0053c0a5
    JL 0x0053c074                       ; 0053c0a8
        ;   XREF to: 0053c074 (CONDITIONAL_JUMP)  ; LAB_0053c074
    MOV EDX,dword ptr [ESP + 0x74]      ; 0053c0aa
    MOV EAX,dword ptr [ESP + 0x70]      ; 0053c0ae
    ADD EDX,0xa                         ; 0053c0b2
    ADD EAX,0xa                         ; 0053c0b5
    MOV dword ptr [ESP + 0x74],EDX      ; 0053c0b8
    MOV dword ptr [ESP + 0x70],EAX      ; 0053c0bc
    CMP EDX,0xa0                        ; 0053c0c0
    JNZ 0x0053c067                      ; 0053c0c6
        ;   XREF to: 0053c067 (CONDITIONAL_JUMP)  ; LAB_0053c067
    PUSH 0x0                            ; 0053c0c8
    MOV EBX,dword ptr [0x0060b280]      ; 0053c0ca | DAT_0060b280
    PUSH EBX                            ; 0053c0d0
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 0053c0d1
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0053c0d6
    POP EBX                             ; 0053c0d9
    POP ESI                             ; 0053c0da
    POP EDI                             ; 0053c0db
    ADD ESP,0x74                        ; 0053c0dc
    POP EBP                             ; 0053c0df
    RET                                 ; 0053c0e0


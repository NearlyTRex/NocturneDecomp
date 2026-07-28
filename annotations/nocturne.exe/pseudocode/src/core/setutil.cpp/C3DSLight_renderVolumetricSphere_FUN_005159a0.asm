; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_005159a0(void)
;
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 DAT_00590ff9
;   undefined4 DAT_00591001
;   undefined4 DAT_00591009
;   undefined4 DAT_00591011
;   undefined4 DAT_00591019
;   undefined4 DAT_00591021
;   undefined4 DAT_00591029
;   undefined4 DAT_005a1ab0
;   undefined4 DAT_005ae704
;   undefined4 DAT_005be924
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005159a0
        ;   Label: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_005159a0
    SUB ESP,0x74                        ; 005159a1
    MOV EBP,dword ptr [ESP + 0x7c]      ; 005159a4
    TEST dword ptr [EBP + 0x11d4],0x7fffffff ; 005159a8
    JNZ 0x005159b9                      ; 005159b2
        ;   XREF to: 005159b9 (CONDITIONAL_JUMP)  ; LAB_005159b9
    ADD ESP,0x74                        ; 005159b4
    POP EBP                             ; 005159b7
    RET                                 ; 005159b8
    PUSH EDI                            ; 005159b9
        ;   Label: LAB_005159b9
    PUSH ESI                            ; 005159ba
    PUSH EBX                            ; 005159bb
    LEA EAX,[EBP + 0x104]               ; 005159bc
    PUSH EAX                            ; 005159c2
    MOV ECX,dword ptr [0x005ae704]      ; 005159c3 | DAT_005ae704
    PUSH ECX                            ; 005159c9 | DAT_01b4d738
    XOR EBX,EBX                         ; 005159ca
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 005159cc
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005159d1
    MOV dword ptr [ESP + 0x78],EBX      ; 005159d4
    MOV dword ptr [ESP + 0x6c],EBX      ; 005159d8
    MOV ESI,dword ptr [ESP + 0x6c]      ; 005159dc
        ;   Label: LAB_005159dc
    MOV EDI,0xfffffffc                  ; 005159e0
    SUB ESI,0xc0                        ; 005159e5
    MOV EAX,dword ptr [ESP + 0x78]      ; 005159eb
        ;   Label: LAB_005159eb
    MOV dword ptr [ESP + 0x7c],EAX      ; 005159ef
    FILD dword ptr [ESP + 0x7c]         ; 005159f3
    FMUL float ptr [0x00591001]         ; 005159f7 | DAT_00591001
    FMUL double ptr [0x00591009]        ; 005159fd | DAT_00591009
    FMUL double ptr [0x00591011]        ; 00515a03 | DAT_00591011
    FLD ST0                             ; 00515a09
    FSIN                                ; 00515a0b
    FXCH                                ; 00515a0d
    FCOS                                ; 00515a0f
    MOV dword ptr [ESP + 0x7c],EDI      ; 00515a11
    FILD dword ptr [ESP + 0x7c]         ; 00515a15
    FMUL float ptr [0x00591019]         ; 00515a19 | DAT_00591019
    FLD float ptr [EBP + 0x11d4]        ; 00515a1f
    FMUL double ptr [0x00590ff9]        ; 00515a25 | DAT_00590ff9
    FXCH                                ; 00515a2b
    FMUL double ptr [0x00591009]        ; 00515a2d | DAT_00591009
    FXCH ST3                            ; 00515a33
    FMUL ST1                            ; 00515a35
    FXCH ST3                            ; 00515a37
    FMUL double ptr [0x00591021]        ; 00515a39 | DAT_00591021
    FLD ST0                             ; 00515a3f
    FCOS                                ; 00515a41
    FXCH                                ; 00515a43
    FSIN                                ; 00515a45
    FXCH ST3                            ; 00515a47
    FMUL ST2                            ; 00515a49
    FMUL ST1                            ; 00515a4b
    FXCH ST4                            ; 00515a4d
    FMULP                               ; 00515a4f
    FXCH ST2                            ; 00515a51
    FMULP                               ; 00515a53
    LEA EBX,[ESP + 0x34]                ; 00515a55
    MOV EDX,dword ptr [0x005ae704]      ; 00515a59 | DAT_005ae704
    FXCH ST2                            ; 00515a5f
    FSTP float ptr [ESP + 0x48]         ; 00515a61
    LEA EAX,[ESP + 0x40]                ; 00515a65
    FSTP float ptr [ESP + 0x40]         ; 00515a69
    FSTP float ptr [ESP + 0x44]         ; 00515a6d
    FLD float ptr [EAX]                 ; 00515a71
    FMUL float ptr [0x005a1ab0]         ; 00515a73 | DAT_005a1ab0
    FISTP dword ptr [EBX]               ; 00515a79
    FLD float ptr [EAX + 0x4]           ; 00515a7b
    FMUL float ptr [0x005a1ab0]         ; 00515a7e | DAT_005a1ab0
    FISTP dword ptr [EBX + 0x4]         ; 00515a84
    FLD float ptr [EAX + 0x8]           ; 00515a87
    FMUL float ptr [0x005a1ab0]         ; 00515a8a | DAT_005a1ab0
    FISTP dword ptr [EBX + 0x8]         ; 00515a90
    LEA EAX,[ESP + 0x34]                ; 00515a93
    PUSH EAX                            ; 00515a97
    MOV EAX,dword ptr [EDX]             ; 00515a98 | DAT_01b4d738
    ADD EAX,ESI                         ; 00515a9a
    PUSH EAX                            ; 00515a9c
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00515a9d
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x005ae704]      ; 00515aa2 | DAT_005ae704
    MOV EAX,dword ptr [EDX]             ; 00515aa8 | DAT_01b4d738
    MOV dword ptr [ESI + EAX*0x1 + 0x18],0x800000 ; 00515aaa
    MOV EAX,dword ptr [EDX]             ; 00515ab2 | DAT_01b4d738
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0x800000 ; 00515ab4
    FLD float ptr [EBP + 0x11c4]        ; 00515abc
    FMUL float ptr [0x00591029]         ; 00515ac2 | DAT_00591029
    ADD ESP,0x8                         ; 00515ac8
    MOV EBX,dword ptr [EDX]             ; 00515acb | DAT_01b4d738
    CALL crt_math.c_round_FUN_00563a30  ; 00515acd
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x7c]        ; 00515ad2
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00515ad6
    MOV dword ptr [ESI + EBX*0x1 + 0x20],EAX ; 00515ada
    FLD float ptr [EBP + 0x11c8]        ; 00515ade
    MOV EAX,dword ptr [EDX]             ; 00515ae4 | DAT_01b4d738
    FMUL float ptr [0x00591029]         ; 00515ae6 | DAT_00591029
    LEA EBX,[EAX + ESI*0x1]             ; 00515aec
    CALL crt_math.c_round_FUN_00563a30  ; 00515aef
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x7c]        ; 00515af4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00515af8
    MOV dword ptr [EBX + 0x24],EAX      ; 00515afc
    FLD float ptr [EBP + 0x11cc]        ; 00515aff
    FMUL float ptr [0x00591029]         ; 00515b05 | DAT_00591029
    ADD ESI,0x30                        ; 00515b0b
    MOV EBX,dword ptr [EDX]             ; 00515b0e | DAT_01b4d738
    CALL crt_math.c_round_FUN_00563a30  ; 00515b10
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x7c]        ; 00515b15
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00515b19
    INC EDI                             ; 00515b1d
    MOV dword ptr [ESI + EBX*0x1 + -0x8],EAX ; 00515b1e
    CMP EDI,0x4                         ; 00515b22
    JLE 0x005159eb                      ; 00515b25
        ;   XREF to: 005159eb (CONDITIONAL_JUMP)  ; LAB_005159eb
    MOV EAX,dword ptr [ESP + 0x78]      ; 00515b2b
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00515b2f
    INC EAX                             ; 00515b33
    ADD EDI,0x1e0                       ; 00515b34
    MOV dword ptr [ESP + 0x78],EAX      ; 00515b3a
    MOV dword ptr [ESP + 0x6c],EDI      ; 00515b3e
    CMP EAX,0x10                        ; 00515b42
    JLE 0x005159dc                      ; 00515b45
        ;   XREF to: 005159dc (CONDITIONAL_JUMP)  ; LAB_005159dc
    PUSH 0x5be924                       ; 00515b4b | DAT_005be924
    PUSH EDX                            ; 00515b50 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00515b51
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00515b56
    PUSH 0x4000                         ; 00515b59
    MOV EBX,dword ptr [0x005ae704]      ; 00515b5e | DAT_005ae704
    PUSH EBX                            ; 00515b64 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00515b65
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00515b6a
    PUSH 0x0                            ; 00515b6d
    MOV ESI,dword ptr [0x005ae704]      ; 00515b6f | DAT_005ae704
    PUSH ESI                            ; 00515b75 | DAT_01b4d738
    MOV EDI,0x4                         ; 00515b76
    XOR EBP,EBP                         ; 00515b7b
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00515b7d
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00515b82
    MOV ESI,0xa                         ; 00515b85
    MOV EBX,dword ptr [0x005ae704]      ; 00515b8a | DAT_005ae704
    PUSH 0x1                            ; 00515b90
    MOV dword ptr [ESP + 0x14],EDI      ; 00515b92
    MOV dword ptr [ESP + 0x24],EBP      ; 00515b96
    MOV dword ptr [ESP + 0x20],EBP      ; 00515b9a
    PUSH EBX                            ; 00515b9e | DAT_01b4d738
    MOV dword ptr [ESP + 0x20],EBP      ; 00515b9f
    MOV dword ptr [ESP + 0x1c],EBP      ; 00515ba3
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 00515ba7
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00515bac
    MOV dword ptr [ESP + 0x70],ESI      ; 00515baf
    MOV dword ptr [ESP + 0x74],EBP      ; 00515bb3
    MOV EDI,dword ptr [ESP + 0x74]      ; 00515bb7
        ;   Label: LAB_00515bb7
    MOV EBX,dword ptr [ESP + 0x70]      ; 00515bbb
    MOV ESI,0xfffffffc                  ; 00515bbf
    LEA EAX,[EDI + ESI*0x1]             ; 00515bc4
        ;   Label: LAB_00515bc4
    LEA EDX,[EBX + ESI*0x1]             ; 00515bc7
    INC ESI                             ; 00515bca
    MOV dword ptr [ESP + 0x24],EAX      ; 00515bcb
    MOV dword ptr [ESP + 0x28],EDX      ; 00515bcf
    LEA EBP,[EBX + ESI*0x1]             ; 00515bd3
    LEA EAX,[ESP + 0xc]                 ; 00515bd6
    MOV dword ptr [ESP + 0x2c],EBP      ; 00515bda
    PUSH EAX                            ; 00515bde
    MOV EBP,dword ptr [0x005ae704]      ; 00515bdf | DAT_005ae704
    LEA ECX,[EDI + ESI*0x1]             ; 00515be5
    PUSH EBP                            ; 00515be8 | DAT_01b4d738
    MOV dword ptr [ESP + 0x38],ECX      ; 00515be9
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 00515bed
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00515bf2
    CMP ESI,0x4                         ; 00515bf5
    JL 0x00515bc4                       ; 00515bf8
        ;   XREF to: 00515bc4 (CONDITIONAL_JUMP)  ; LAB_00515bc4
    MOV EDX,dword ptr [ESP + 0x74]      ; 00515bfa
    MOV EAX,dword ptr [ESP + 0x70]      ; 00515bfe
    ADD EDX,0xa                         ; 00515c02
    ADD EAX,0xa                         ; 00515c05
    MOV dword ptr [ESP + 0x74],EDX      ; 00515c08
    MOV dword ptr [ESP + 0x70],EAX      ; 00515c0c
    CMP EDX,0xa0                        ; 00515c10
    JNZ 0x00515bb7                      ; 00515c16
        ;   XREF to: 00515bb7 (CONDITIONAL_JUMP)  ; LAB_00515bb7
    PUSH 0x0                            ; 00515c18
    MOV EBX,dword ptr [0x005ae704]      ; 00515c1a | DAT_005ae704
    PUSH EBX                            ; 00515c20 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 00515c21
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00515c26
    POP EBX                             ; 00515c29
    POP ESI                             ; 00515c2a
    POP EDI                             ; 00515c2b
    ADD ESP,0x74                        ; 00515c2c
    POP EBP                             ; 00515c2f
    RET                                 ; 00515c30


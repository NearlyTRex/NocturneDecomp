; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50(C3DSLight * this_ptr)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   double DOUBLE_00649aab = 0.25
;   float FLOAT_00649ab3 = 0.0625
;   double DOUBLE_00649abb = 3.14159265350000
;   double DOUBLE_00649ac3 = 2
;   float FLOAT_00649acb = 0.25
;   double DOUBLE_00649ad3 = 0.5
;   float FLOAT_00649adb = 255
;   float FLOAT_00662a40 = 256
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   SMRGLTextureBasic SMRGLTextureBasic_006817fc
;   undefined4 DAT_00800000
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00587b50
        ;   Label: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50
    SUB ESP,0x74                        ; 00587b51
    MOV EBP,dword ptr [ESP + 0x7c]      ; 00587b54
    TEST dword ptr [EBP + 0x11d4],0x7fffffff ; 00587b58
    JNZ 0x00587b69                      ; 00587b62 | LAB_00587b69
        ;   XREF to: 00587b69 (CONDITIONAL_JUMP)
    ADD ESP,0x74                        ; 00587b64
    POP EBP                             ; 00587b67
    RET                                 ; 00587b68
    PUSH EDI                            ; 00587b69
        ;   Label: LAB_00587b69
    PUSH ESI                            ; 00587b6a
    PUSH EBX                            ; 00587b6b
    LEA EAX,[EBP + 0x104]               ; 00587b6c
    PUSH EAX                            ; 00587b72
    MOV ECX,dword ptr [0x006703ec]      ; 00587b73 | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 00587b79 | CDemonRenderer g_CDemonRendererInstance
    XOR EBX,EBX                         ; 00587b7a
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00587b7c | void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00587b81
    MOV dword ptr [ESP + 0x78],EBX      ; 00587b84
    MOV dword ptr [ESP + 0x6c],EBX      ; 00587b88
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00587b8c
        ;   Label: LAB_00587b8c
    MOV EDI,0xfffffffc                  ; 00587b90
    SUB ESI,0xc0                        ; 00587b95
    MOV EAX,dword ptr [ESP + 0x78]      ; 00587b9b
        ;   Label: LAB_00587b9b
    MOV dword ptr [ESP + 0x7c],EAX      ; 00587b9f
    FILD dword ptr [ESP + 0x7c]         ; 00587ba3
    FMUL float ptr [0x00649ab3]         ; 00587ba7 | float FLOAT_00649ab3
    FMUL double ptr [0x00649abb]        ; 00587bad | double DOUBLE_00649abb
    FMUL double ptr [0x00649ac3]        ; 00587bb3 | double DOUBLE_00649ac3
    FLD ST0                             ; 00587bb9
    FSIN                                ; 00587bbb
    FXCH                                ; 00587bbd
    FCOS                                ; 00587bbf
    MOV dword ptr [ESP + 0x7c],EDI      ; 00587bc1
    FILD dword ptr [ESP + 0x7c]         ; 00587bc5
    FMUL float ptr [0x00649acb]         ; 00587bc9 | float FLOAT_00649acb
    FLD float ptr [EBP + 0x11d4]        ; 00587bcf
    FMUL double ptr [0x00649aab]        ; 00587bd5 | double DOUBLE_00649aab
    FXCH                                ; 00587bdb
    FMUL double ptr [0x00649abb]        ; 00587bdd | double DOUBLE_00649abb
    FXCH ST3                            ; 00587be3
    FMUL ST1                            ; 00587be5
    FXCH ST3                            ; 00587be7
    FMUL double ptr [0x00649ad3]        ; 00587be9 | double DOUBLE_00649ad3
    FLD ST0                             ; 00587bef
    FCOS                                ; 00587bf1
    FXCH                                ; 00587bf3
    FSIN                                ; 00587bf5
    FXCH ST3                            ; 00587bf7
    FMUL ST2                            ; 00587bf9
    FMUL ST1                            ; 00587bfb
    FXCH ST4                            ; 00587bfd
    FMULP                               ; 00587bff
    FXCH ST2                            ; 00587c01
    FMULP                               ; 00587c03
    LEA EBX,[ESP + 0x34]                ; 00587c05
    MOV EDX,dword ptr [0x006703ec]      ; 00587c09 | CDemonRenderer * g_CDemonRendererPtr
    FXCH ST2                            ; 00587c0f
    FSTP float ptr [ESP + 0x48]         ; 00587c11
    LEA EAX,[ESP + 0x40]                ; 00587c15
    FSTP float ptr [ESP + 0x40]         ; 00587c19
    FSTP float ptr [ESP + 0x44]         ; 00587c1d
    FLD float ptr [EAX]                 ; 00587c21
    FMUL float ptr [0x00662a40]         ; 00587c23 | float FLOAT_00662a40
    FISTP dword ptr [EBX]               ; 00587c29
    FLD float ptr [EAX + 0x4]           ; 00587c2b
    FMUL float ptr [0x00662a40]         ; 00587c2e | float FLOAT_00662a40
    FISTP dword ptr [EBX + 0x4]         ; 00587c34
    FLD float ptr [EAX + 0x8]           ; 00587c37
    FMUL float ptr [0x00662a40]         ; 00587c3a | float FLOAT_00662a40
    FISTP dword ptr [EBX + 0x8]         ; 00587c40
    LEA EAX,[ESP + 0x34]                ; 00587c43
    PUSH EAX                            ; 00587c47
    MOV EAX,dword ptr [EDX]             ; 00587c48 | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,ESI                         ; 00587c4a
    PUSH EAX                            ; 00587c4c
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00587c4d | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x006703ec]      ; 00587c52 | CDemonRenderer * g_CDemonRendererPtr
    MOV EAX,dword ptr [EDX]             ; 00587c58 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESI + EAX*0x1 + 0x18],0x800000 ; 00587c5a | DAT_00800000
    MOV EAX,dword ptr [EDX]             ; 00587c62 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0x800000 ; 00587c64 | DAT_00800000
    FLD float ptr [EBP + 0x11c4]        ; 00587c6c
    FMUL float ptr [0x00649adb]         ; 00587c72 | float FLOAT_00649adb
    ADD ESP,0x8                         ; 00587c78
    MOV EBX,dword ptr [EDX]             ; 00587c7b | CDemonRenderer g_CDemonRendererInstance
    CALL crt_math.c_round_FUN_005fe6b0  ; 00587c7d | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x7c]        ; 00587c82
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00587c86
    MOV dword ptr [ESI + EBX*0x1 + 0x20],EAX ; 00587c8a
    FLD float ptr [EBP + 0x11c8]        ; 00587c8e
    MOV EAX,dword ptr [EDX]             ; 00587c94 | CDemonRenderer g_CDemonRendererInstance
    FMUL float ptr [0x00649adb]         ; 00587c96 | float FLOAT_00649adb
    LEA EBX,[EAX + ESI*0x1]             ; 00587c9c
    CALL crt_math.c_round_FUN_005fe6b0  ; 00587c9f | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x7c]        ; 00587ca4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00587ca8
    MOV dword ptr [EBX + 0x24],EAX      ; 00587cac
    FLD float ptr [EBP + 0x11cc]        ; 00587caf
    FMUL float ptr [0x00649adb]         ; 00587cb5 | float FLOAT_00649adb
    ADD ESI,0x30                        ; 00587cbb
    MOV EBX,dword ptr [EDX]             ; 00587cbe | CDemonRenderer g_CDemonRendererInstance
    CALL crt_math.c_round_FUN_005fe6b0  ; 00587cc0 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x7c]        ; 00587cc5
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00587cc9
    INC EDI                             ; 00587ccd
    MOV dword ptr [ESI + EBX*0x1 + -0x8],EAX ; 00587cce
    CMP EDI,0x4                         ; 00587cd2
    JLE 0x00587b9b                      ; 00587cd5 | LAB_00587b9b
        ;   XREF to: 00587b9b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x78]      ; 00587cdb
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00587cdf
    INC EAX                             ; 00587ce3
    ADD EDI,0x1e0                       ; 00587ce4
    MOV dword ptr [ESP + 0x78],EAX      ; 00587cea
    MOV dword ptr [ESP + 0x6c],EDI      ; 00587cee
    CMP EAX,0x10                        ; 00587cf2
    JLE 0x00587b8c                      ; 00587cf5 | LAB_00587b8c
        ;   XREF to: 00587b8c (CONDITIONAL_JUMP)
    PUSH 0x6817fc                       ; 00587cfb | SMRGLTextureBasic SMRGLTextureBasic_006817fc
    PUSH EDX                            ; 00587d00 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00587d01 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00587d06
    PUSH 0x4000                         ; 00587d09
    MOV EBX,dword ptr [0x006703ec]      ; 00587d0e | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 00587d14 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 00587d15 | void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00587d1a
    PUSH 0x0                            ; 00587d1d
    MOV ESI,dword ptr [0x006703ec]      ; 00587d1f | CDemonRenderer * g_CDemonRendererPtr
    PUSH ESI                            ; 00587d25 | CDemonRenderer g_CDemonRendererInstance
    MOV EDI,0x4                         ; 00587d26
    XOR EBP,EBP                         ; 00587d2b
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 00587d2d | void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00587d32
    MOV ESI,0xa                         ; 00587d35
    MOV EBX,dword ptr [0x006703ec]      ; 00587d3a | CDemonRenderer * g_CDemonRendererPtr
    PUSH 0x1                            ; 00587d40
    MOV dword ptr [ESP + 0x14],EDI      ; 00587d42
    MOV dword ptr [ESP + 0x24],EBP      ; 00587d46
    MOV dword ptr [ESP + 0x20],EBP      ; 00587d4a
    PUSH EBX                            ; 00587d4e | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x20],EBP      ; 00587d4f
    MOV dword ptr [ESP + 0x1c],EBP      ; 00587d53
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 00587d57 | void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00587d5c
    MOV dword ptr [ESP + 0x70],ESI      ; 00587d5f
    MOV dword ptr [ESP + 0x74],EBP      ; 00587d63
    MOV EDI,dword ptr [ESP + 0x74]      ; 00587d67
        ;   Label: LAB_00587d67
    MOV EBX,dword ptr [ESP + 0x70]      ; 00587d6b
    MOV ESI,0xfffffffc                  ; 00587d6f
    LEA EAX,[EDI + ESI*0x1]             ; 00587d74
        ;   Label: LAB_00587d74
    LEA EDX,[EBX + ESI*0x1]             ; 00587d77
    INC ESI                             ; 00587d7a
    MOV dword ptr [ESP + 0x24],EAX      ; 00587d7b
    MOV dword ptr [ESP + 0x28],EDX      ; 00587d7f
    LEA EBP,[EBX + ESI*0x1]             ; 00587d83
    LEA EAX,[ESP + 0xc]                 ; 00587d86
    MOV dword ptr [ESP + 0x2c],EBP      ; 00587d8a
    PUSH EAX                            ; 00587d8e
    MOV EBP,dword ptr [0x006703ec]      ; 00587d8f | CDemonRenderer * g_CDemonRendererPtr
    LEA ECX,[EDI + ESI*0x1]             ; 00587d95
    PUSH EBP                            ; 00587d98 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x38],ECX      ; 00587d99
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 00587d9d | void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00587da2
    CMP ESI,0x4                         ; 00587da5
    JL 0x00587d74                       ; 00587da8 | LAB_00587d74
        ;   XREF to: 00587d74 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x74]      ; 00587daa
    MOV EAX,dword ptr [ESP + 0x70]      ; 00587dae
    ADD EDX,0xa                         ; 00587db2
    ADD EAX,0xa                         ; 00587db5
    MOV dword ptr [ESP + 0x74],EDX      ; 00587db8
    MOV dword ptr [ESP + 0x70],EAX      ; 00587dbc
    CMP EDX,0xa0                        ; 00587dc0
    JNZ 0x00587d67                      ; 00587dc6 | LAB_00587d67
        ;   XREF to: 00587d67 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 00587dc8
    MOV EBX,dword ptr [0x006703ec]      ; 00587dca | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 00587dd0 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 00587dd1 | void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00587dd6
    POP EBX                             ; 00587dd9
    POP ESI                             ; 00587dda
    POP EDI                             ; 00587ddb
    ADD ESP,0x74                        ; 00587ddc
    POP EBP                             ; 00587ddf
    RET                                 ; 00587de0


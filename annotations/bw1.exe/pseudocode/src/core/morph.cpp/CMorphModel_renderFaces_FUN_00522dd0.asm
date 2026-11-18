; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_renderFaces_FUN_00522dd0(CMorphModel *this_ptr,float morph_t)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   morph_t
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_morph.cpp_CMorphModel_render_FUN_00522b50 at 00522b80
;
; Referenced Globals:
;   double g_DOUBLE_005ea8da = 65535
;   float g_FLOAT_005ea8e2 = 2
;   CDemonRenderer* g_CDemonRenderer_PTR_00612560 = 01bc120c
;   CDemonRenderer g_CDemonRenderer_01bc120c
;   int g_PerspectiveReciprocal
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522dd0
        ;   Label: core_morph.cpp_CMorphModel_renderFaces_FUN_00522dd0
    PUSH ESI                            ; 00522dd1
    PUSH EDI                            ; 00522dd2
    PUSH EBP                            ; 00522dd3
    SUB ESP,0xc                         ; 00522dd4
    MOV EDI,dword ptr [ESP + 0x20]      ; 00522dd7
    PUSH 0x0                            ; 00522ddb
    MOV EDX,dword ptr [0x00612560]      ; 00522ddd | g_CDemonRenderer_PTR_00612560
    PUSH EDX                            ; 00522de3 | g_CDemonRenderer_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40 ; 00522de4
        ;   XREF to: 00484a40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 00522de9
    PUSH 0x1                            ; 00522dec
    MOV ECX,dword ptr [0x00612560]      ; 00522dee | g_CDemonRenderer_PTR_00612560
    PUSH ECX                            ; 00522df4 | g_CDemonRenderer_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 00522df5
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00522dfa
    FLD float ptr [ESP + 0x24]          ; 00522dfd
    FLD ST0                             ; 00522e01
    FMUL double ptr [0x005ea8da]        ; 00522e03 | g_DOUBLE_005ea8da
    MOV EAX,0xffff                      ; 00522e09
    FLD float ptr [0x005ea8e2]          ; 00522e0e | g_FLOAT_005ea8e2
    FSUBRP ST2,ST0                      ; 00522e14
    MOV EBX,dword ptr [0x01c51cac]      ; 00522e16 | g_PerspectiveReciprocal
    FMULP                               ; 00522e1c
    SUB EAX,EBX                         ; 00522e1e
    CALL crt_math.c_round_FUN_005c03a0  ; 00522e20
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005c03a0(double value)
    FISTP dword ptr [ESP]               ; 00522e25
    MOV EDX,dword ptr [ESP]             ; 00522e28
    IMUL EDX                            ; 00522e2b
    SHRD EAX,EDX,0x10                   ; 00522e2d
    PUSH EAX                            ; 00522e31
    MOV ESI,dword ptr [0x00612560]      ; 00522e32 | g_CDemonRenderer_PTR_00612560
    PUSH ESI                            ; 00522e38 | g_CDemonRenderer_01bc120c
    MOV EBP,0xffffffff                  ; 00522e39
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 00522e3e
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00522e43
    MOV EAX,dword ptr [EDI + 0x5c]      ; 00522e46
    MOV dword ptr [ESP + 0x8],EBP       ; 00522e49
    XOR EBP,EBP                         ; 00522e4d
    TEST EAX,EAX                        ; 00522e4f
    JLE 0x00522ea8                      ; 00522e51
        ;   XREF to: 00522ea8 (CONDITIONAL_JUMP)  ; LAB_00522ea8
    LEA EAX,[EDI + 0x68]                ; 00522e53
    XOR EBX,EBX                         ; 00522e56
    MOV dword ptr [ESP + 0x4],EAX       ; 00522e58
    MOV EAX,dword ptr [EDI + 0x60]      ; 00522e5c
        ;   Label: LAB_00522e5c
    MOV ESI,dword ptr [EBX + EAX*0x1]   ; 00522e5f
    CMP ESI,dword ptr [ESP + 0x8]       ; 00522e62
    JZ 0x00522e83                       ; 00522e66
        ;   XREF to: 00522e83 (CONDITIONAL_JUMP)  ; LAB_00522e83
    IMUL EAX,ESI,0x48                   ; 00522e68
    ADD EAX,dword ptr [ESP + 0x4]       ; 00522e6b
    PUSH EAX                            ; 00522e6f
    MOV ECX,dword ptr [0x00612560]      ; 00522e70 | g_CDemonRenderer_PTR_00612560
    PUSH ECX                            ; 00522e76 | g_CDemonRenderer_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 00522e77
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00522e7c
    MOV dword ptr [ESP + 0x8],ESI       ; 00522e7f
    MOV ESI,dword ptr [EDI + 0x60]      ; 00522e83
        ;   Label: LAB_00522e83
    PUSH 0x267                          ; 00522e86
    ADD ESI,EBX                         ; 00522e8b
    PUSH ESI                            ; 00522e8d
    MOV EDX,dword ptr [0x00612560]      ; 00522e8e | g_CDemonRenderer_PTR_00612560
    PUSH EDX                            ; 00522e94 | g_CDemonRenderer_01bc120c
    INC EBP                             ; 00522e95
    ADD EBX,0x3c                        ; 00522e96
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210 ; 00522e99
        ;   XREF to: 00482210 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    MOV ECX,dword ptr [EDI + 0x5c]      ; 00522e9e
    ADD ESP,0xc                         ; 00522ea1
    CMP EBP,ECX                         ; 00522ea4
    JL 0x00522e5c                       ; 00522ea6
        ;   XREF to: 00522e5c (CONDITIONAL_JUMP)  ; LAB_00522e5c
    MOV EBX,dword ptr [0x00612560]      ; 00522ea8 | g_CDemonRenderer_PTR_00612560
        ;   Label: LAB_00522ea8
    PUSH EBX                            ; 00522eae | g_CDemonRenderer_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00 ; 00522eaf
        ;   XREF to: 00484e00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00522eb4
    PUSH 0x0                            ; 00522eb7
    MOV ESI,dword ptr [0x00612560]      ; 00522eb9 | g_CDemonRenderer_PTR_00612560
    PUSH ESI                            ; 00522ebf | g_CDemonRenderer_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 00522ec0
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00522ec5
    PUSH 0x1                            ; 00522ec8
    MOV EDI,dword ptr [0x00612560]      ; 00522eca | g_CDemonRenderer_PTR_00612560
    PUSH EDI                            ; 00522ed0 | g_CDemonRenderer_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 00522ed1
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00522ed6
    ADD ESP,0xc                         ; 00522ed9
    POP EBP                             ; 00522edc
    POP EDI                             ; 00522edd
    POP ESI                             ; 00522ede
    POP EBX                             ; 00522edf
    RET                                 ; 00522ee0


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_morph.cpp_FUN_0052b160(void)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_morph.cpp_CMorphModel_FUN_0052af30 at 0052af60
;
; Referenced Globals:
;   double DOUBLE_0063a437 = 65535
;   float FLOAT_0063a43f = 2
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   float g_PerspectiveReciprocal
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
;   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b160
        ;   Label: core_morph.cpp_FUN_0052b160
    PUSH ESI                            ; 0052b161
    PUSH EDI                            ; 0052b162
    PUSH EBP                            ; 0052b163
    SUB ESP,0xc                         ; 0052b164
    MOV EDI,dword ptr [ESP + 0x20]      ; 0052b167
    PUSH 0x0                            ; 0052b16b
    MOV EDX,dword ptr [0x006703ec]      ; 0052b16d | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 0052b173 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0 ; 0052b174 | void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(CDemonRenderer * this_ptr, int enable_advanced_mode)
        ;   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052b179
    PUSH 0x1                            ; 0052b17c
    MOV ECX,dword ptr [0x006703ec]      ; 0052b17e | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 0052b184 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0052b185 | void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052b18a
    FLD float ptr [ESP + 0x24]          ; 0052b18d
    FLD ST0                             ; 0052b191
    FMUL double ptr [0x0063a437]        ; 0052b193 | double DOUBLE_0063a437
    MOV EAX,0xffff                      ; 0052b199
    FLD float ptr [0x0063a43f]          ; 0052b19e | float FLOAT_0063a43f
    FSUBRP ST2,ST0                      ; 0052b1a4
    MOV EBX,dword ptr [0x02d051f4]      ; 0052b1a6 | float g_PerspectiveReciprocal
    FMULP                               ; 0052b1ac
    SUB EAX,EBX                         ; 0052b1ae
    CALL crt_math.c_round_FUN_005fe6b0  ; 0052b1b0 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP]               ; 0052b1b5
    MOV EDX,dword ptr [ESP]             ; 0052b1b8
    IMUL EDX                            ; 0052b1bb
    SHRD EAX,EDX,0x10                   ; 0052b1bd
    PUSH EAX                            ; 0052b1c1
    MOV ESI,dword ptr [0x006703ec]      ; 0052b1c2 | CDemonRenderer * g_CDemonRendererPtr
    PUSH ESI                            ; 0052b1c8 | CDemonRenderer g_CDemonRendererInstance
    MOV EBP,0xffffffff                  ; 0052b1c9
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0052b1ce | void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052b1d3
    MOV EAX,dword ptr [EDI + 0x5c]      ; 0052b1d6
    MOV dword ptr [ESP + 0x8],EBP       ; 0052b1d9
    XOR EBP,EBP                         ; 0052b1dd
    TEST EAX,EAX                        ; 0052b1df
    JLE 0x0052b238                      ; 0052b1e1 | LAB_0052b238
        ;   XREF to: 0052b238 (CONDITIONAL_JUMP)
    LEA EAX,[EDI + 0x68]                ; 0052b1e3
    XOR EBX,EBX                         ; 0052b1e6
    MOV dword ptr [ESP + 0x4],EAX       ; 0052b1e8
    MOV EAX,dword ptr [EDI + 0x60]      ; 0052b1ec
        ;   Label: LAB_0052b1ec
    MOV ESI,dword ptr [EBX + EAX*0x1]   ; 0052b1ef
    CMP ESI,dword ptr [ESP + 0x8]       ; 0052b1f2
    JZ 0x0052b213                       ; 0052b1f6 | LAB_0052b213
        ;   XREF to: 0052b213 (CONDITIONAL_JUMP)
    IMUL EAX,ESI,0x48                   ; 0052b1f8
    ADD EAX,dword ptr [ESP + 0x4]       ; 0052b1fb
    PUSH EAX                            ; 0052b1ff
    MOV ECX,dword ptr [0x006703ec]      ; 0052b200 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 0052b206 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0052b207 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052b20c
    MOV dword ptr [ESP + 0x8],ESI       ; 0052b20f
    MOV ESI,dword ptr [EDI + 0x60]      ; 0052b213
        ;   Label: LAB_0052b213
    PUSH 0x267                          ; 0052b216
    ADD ESI,EBX                         ; 0052b21b
    PUSH ESI                            ; 0052b21d
    MOV EDX,dword ptr [0x006703ec]      ; 0052b21e | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 0052b224 | CDemonRenderer g_CDemonRendererInstance
    INC EBP                             ; 0052b225
    ADD EBX,0x3c                        ; 0052b226
    CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0 ; 0052b229 | void engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info, int render_flags)
        ;   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EDI + 0x5c]      ; 0052b22e
    ADD ESP,0xc                         ; 0052b231
    CMP EBP,ECX                         ; 0052b234
    JL 0x0052b1ec                       ; 0052b236 | LAB_0052b1ec
        ;   XREF to: 0052b1ec (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x006703ec]      ; 0052b238 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_0052b238
    PUSH EBX                            ; 0052b23e | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 ; 0052b23f | void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(CDemonRenderer * this_ptr)
        ;   XREF to: 0048da80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052b244
    PUSH 0x0                            ; 0052b247
    MOV ESI,dword ptr [0x006703ec]      ; 0052b249 | CDemonRenderer * g_CDemonRendererPtr
    PUSH ESI                            ; 0052b24f | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0052b250 | void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052b255
    PUSH 0x1                            ; 0052b258
    MOV EDI,dword ptr [0x006703ec]      ; 0052b25a | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 0052b260 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0 ; 0052b261 | void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(CDemonRenderer * this_ptr, int enabled)
        ;   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052b266
    ADD ESP,0xc                         ; 0052b269
    POP EBP                             ; 0052b26c
    POP EDI                             ; 0052b26d
    POP ESI                             ; 0052b26e
    POP EBX                             ; 0052b26f
    RET                                 ; 0052b270


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00414a60(CBodyPart *this_ptr,int render_flags)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00414d40 at 00414e06
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_00414bd0 at 00414c6e
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00414e90 at 00414ef9
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
;   engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046d880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414a60
        ;   Label: core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60
    PUSH ESI                            ; 00414a61
    PUSH EDI                            ; 00414a62
    PUSH EBP                            ; 00414a63
    SUB ESP,0xc                         ; 00414a64
    MOV ESI,dword ptr [ESP + 0x20]      ; 00414a67
    MOV EDX,dword ptr [ESI + 0x178]     ; 00414a6b
    PUSH EDX                            ; 00414a71
    MOV ECX,dword ptr [ESI + 0x174]     ; 00414a72
    PUSH ECX                            ; 00414a78
    MOV EBX,dword ptr [0x00603b28]      ; 00414a79 | g_CDemonSetPtr
    PUSH EBX                            ; 00414a7f | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0 ; 00414a80
        ;   XREF to: 00538ad0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    ADD ESP,0xc                         ; 00414a85
    MOV EDI,dword ptr [ESI + 0x17c]     ; 00414a88
    PUSH EDI                            ; 00414a8e
    PUSH 0x3                            ; 00414a8f
    MOV EBP,dword ptr [ESI + 0x178]     ; 00414a91
    PUSH EBP                            ; 00414a97
    MOV EAX,dword ptr [ESI + 0x184]     ; 00414a98
    PUSH EAX                            ; 00414a9e
    MOV EDX,dword ptr [ESI + 0x180]     ; 00414a9f
    PUSH EDX                            ; 00414aa5
    MOV ECX,dword ptr [ESI + 0x174]     ; 00414aa6
    PUSH ECX                            ; 00414aac
    MOV EBX,dword ptr [0x00603b28]      ; 00414aad | g_CDemonSetPtr
    PUSH EBX                            ; 00414ab3 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0 ; 00414ab4
        ;   XREF to: 00538dd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    MOV EDI,dword ptr [ESI + 0x18c]     ; 00414ab9
    ADD ESP,0x1c                        ; 00414abf
    CMP EDI,0x1                         ; 00414ac2
    JZ 0x00414ada                       ; 00414ac5
        ;   XREF to: 00414ada (CONDITIONAL_JUMP)  ; LAB_00414ada
    MOV EBP,dword ptr [0x005f2afc]      ; 00414ac7 | DAT_005f2afc
    PUSH EBP                            ; 00414acd | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 00414ace
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00414ad3
    TEST EAX,EAX                        ; 00414ad6
    JZ 0x00414b3e                       ; 00414ad8
        ;   XREF to: 00414b3e (CONDITIONAL_JUMP)  ; LAB_00414b3e
    MOV ECX,dword ptr [0x005f2afc]      ; 00414ada | DAT_005f2afc
        ;   Label: LAB_00414ada
    PUSH ECX                            ; 00414ae0 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 00414ae1
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00414ae6
    TEST EAX,EAX                        ; 00414ae9
    JNZ 0x00414b03                      ; 00414aeb
        ;   XREF to: 00414b03 (CONDITIONAL_JUMP)  ; LAB_00414b03
    LEA EAX,[ESI + 0x190]               ; 00414aed
    PUSH EAX                            ; 00414af3
    MOV EBX,dword ptr [0x005f2afc]      ; 00414af4 | DAT_005f2afc
    PUSH EBX                            ; 00414afa | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 00414afb
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00414b00
    MOV EDI,dword ptr [ESP + 0x24]      ; 00414b03
        ;   Label: LAB_00414b03
    PUSH EDI                            ; 00414b07
    MOV EBP,dword ptr [ESI + 0x180]     ; 00414b08
    PUSH EBP                            ; 00414b0e
    MOV EAX,dword ptr [ESI + 0x184]     ; 00414b0f
    PUSH EAX                            ; 00414b15
    MOV EDX,dword ptr [0x005f2afc]      ; 00414b16 | DAT_005f2afc
    PUSH EDX                            ; 00414b1c | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046d880 ; 00414b1d
        ;   XREF to: 0046d880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046d880(CDemonRenderer * this_ptr, SMRGLPrimitiveTriangle * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 00414b22
    PUSH 0x1                            ; 00414b25
        ;   Label: LAB_00414b25
    MOV EBX,dword ptr [0x005f2afc]      ; 00414b27 | DAT_005f2afc
    PUSH EBX                            ; 00414b2d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 00414b2e
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00414b33
    ADD ESP,0xc                         ; 00414b36
    POP EBP                             ; 00414b39
    POP EDI                             ; 00414b3a
    POP ESI                             ; 00414b3b
    POP EBX                             ; 00414b3c
    RET                                 ; 00414b3d
    MOV EAX,0xffffffff                  ; 00414b3e
        ;   Label: LAB_00414b3e
    MOV EDX,dword ptr [ESI + 0x180]     ; 00414b43
    XOR EBP,EBP                         ; 00414b49
    MOV dword ptr [ESP + 0x4],EAX       ; 00414b4b
    TEST EDX,EDX                        ; 00414b4f
    JLE 0x00414b25                      ; 00414b51
        ;   XREF to: 00414b25 (CONDITIONAL_JUMP)  ; LAB_00414b25
    LEA EAX,[ESI + 0x190]               ; 00414b53
    MOV dword ptr [ESP + 0x8],EBP       ; 00414b59
    XOR EDI,EDI                         ; 00414b5d
    MOV dword ptr [ESP],EAX             ; 00414b5f
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414b62
        ;   Label: LAB_00414b62
    MOV EAX,dword ptr [ESI + 0x188]     ; 00414b66
    ADD EAX,EBX                         ; 00414b6c
    MOV EBX,dword ptr [EAX]             ; 00414b6e
    CMP EBX,dword ptr [ESP + 0x4]       ; 00414b70
    JZ 0x00414b90                       ; 00414b74
        ;   XREF to: 00414b90 (CONDITIONAL_JUMP)  ; LAB_00414b90
    IMUL EAX,EBX,0x18                   ; 00414b76
    ADD EAX,dword ptr [ESP]             ; 00414b79
    PUSH EAX                            ; 00414b7c
    MOV ECX,dword ptr [0x005f2afc]      ; 00414b7d | DAT_005f2afc
    PUSH ECX                            ; 00414b83 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 00414b84
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00414b89
    MOV dword ptr [ESP + 0x4],EBX       ; 00414b8c
    MOV ECX,dword ptr [ESP + 0x24]      ; 00414b90
        ;   Label: LAB_00414b90
    MOV EBX,dword ptr [ESI + 0x184]     ; 00414b94
    PUSH ECX                            ; 00414b9a
    ADD EBX,EDI                         ; 00414b9b
    PUSH EBX                            ; 00414b9d
    MOV EBX,dword ptr [0x005f2afc]      ; 00414b9e | DAT_005f2afc
    PUSH EBX                            ; 00414ba4 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0 ; 00414ba5
        ;   XREF to: 0046b8f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 00414baa
    INC EBP                             ; 00414bad
    MOV EAX,dword ptr [ESP + 0x8]       ; 00414bae
    ADD EDI,0x3c                        ; 00414bb2
    ADD EAX,0x4                         ; 00414bb5
    MOV EDX,dword ptr [ESI + 0x180]     ; 00414bb8
    MOV dword ptr [ESP + 0x8],EAX       ; 00414bbe
    CMP EBP,EDX                         ; 00414bc2
    JGE 0x00414b25                      ; 00414bc4
        ;   XREF to: 00414b25 (CONDITIONAL_JUMP)  ; LAB_00414b25
    JMP 0x00414b62                      ; 00414bca
        ;   XREF to: 00414b62 (UNCONDITIONAL_JUMP)  ; LAB_00414b62


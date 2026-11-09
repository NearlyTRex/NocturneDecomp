; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00418e50(CBodyPart *this_ptr,int render_flags)
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
;   core_bodypart.cpp_FUN_00418fc0 at 0041905e
;   core_bodypart.cpp_FUN_00419130 at 004191f6
;   core_bodypart.cpp_FUN_00419280 at 004192e9
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00553440
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
;   engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418e50
        ;   Label: core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00418e50
    PUSH ESI                            ; 00418e51
    PUSH EDI                            ; 00418e52
    PUSH EBP                            ; 00418e53
    SUB ESP,0xc                         ; 00418e54
    MOV ESI,dword ptr [ESP + 0x20]      ; 00418e57
    MOV EDX,dword ptr [ESI + 0x178]     ; 00418e5b
    PUSH EDX                            ; 00418e61
    MOV ECX,dword ptr [ESI + 0x174]     ; 00418e62
    PUSH ECX                            ; 00418e68
    MOV EBX,dword ptr [0x00622c18]      ; 00418e69 | g_CDemonSetPtr
    PUSH EBX                            ; 00418e6f | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140 ; 00418e70
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    ADD ESP,0xc                         ; 00418e75
    MOV EDI,dword ptr [ESI + 0x17c]     ; 00418e78
    PUSH EDI                            ; 00418e7e
    PUSH 0x3                            ; 00418e7f
    MOV EBP,dword ptr [ESI + 0x178]     ; 00418e81
    PUSH EBP                            ; 00418e87
    MOV EAX,dword ptr [ESI + 0x184]     ; 00418e88
    PUSH EAX                            ; 00418e8e
    MOV EDX,dword ptr [ESI + 0x180]     ; 00418e8f
    PUSH EDX                            ; 00418e95
    MOV ECX,dword ptr [ESI + 0x174]     ; 00418e96
    PUSH ECX                            ; 00418e9c
    MOV EBX,dword ptr [0x00622c18]      ; 00418e9d | g_CDemonSetPtr
    PUSH EBX                            ; 00418ea3 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00553440 ; 00418ea4
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00553440(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    MOV EDI,dword ptr [ESI + 0x18c]     ; 00418ea9
    ADD ESP,0x1c                        ; 00418eaf
    CMP EDI,0x1                         ; 00418eb2
    JZ 0x00418eca                       ; 00418eb5
        ;   XREF to: 00418eca (CONDITIONAL_JUMP)  ; LAB_00418eca
    MOV EBP,dword ptr [0x00612560]      ; 00418eb7 | DAT_00612560
    PUSH EBP                            ; 00418ebd | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00418ebe
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00418ec3
    TEST EAX,EAX                        ; 00418ec6
    JZ 0x00418f2e                       ; 00418ec8
        ;   XREF to: 00418f2e (CONDITIONAL_JUMP)  ; LAB_00418f2e
    MOV ECX,dword ptr [0x00612560]      ; 00418eca | DAT_00612560
        ;   Label: LAB_00418eca
    PUSH ECX                            ; 00418ed0 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00418ed1
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00418ed6
    TEST EAX,EAX                        ; 00418ed9
    JNZ 0x00418ef3                      ; 00418edb
        ;   XREF to: 00418ef3 (CONDITIONAL_JUMP)  ; LAB_00418ef3
    LEA EAX,[ESI + 0x190]               ; 00418edd
    PUSH EAX                            ; 00418ee3
    MOV EBX,dword ptr [0x00612560]      ; 00418ee4 | DAT_00612560
    PUSH EBX                            ; 00418eea | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 00418eeb
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00418ef0
    MOV EDI,dword ptr [ESP + 0x24]      ; 00418ef3
        ;   Label: LAB_00418ef3
    PUSH EDI                            ; 00418ef7
    MOV EBP,dword ptr [ESI + 0x180]     ; 00418ef8
    PUSH EBP                            ; 00418efe
    MOV EAX,dword ptr [ESI + 0x184]     ; 00418eff
    PUSH EAX                            ; 00418f05
    MOV EDX,dword ptr [0x00612560]      ; 00418f06 | DAT_00612560
    PUSH EDX                            ; 00418f0c | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0 ; 00418f0d
        ;   XREF to: 004841a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0(CDemonRenderer * this_ptr, SMRGLPrimitiveTriangle * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 00418f12
    PUSH 0x1                            ; 00418f15
        ;   Label: LAB_00418f15
    MOV EBX,dword ptr [0x00612560]      ; 00418f17 | DAT_00612560
    PUSH EBX                            ; 00418f1d | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 00418f1e
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00418f23
    ADD ESP,0xc                         ; 00418f26
    POP EBP                             ; 00418f29
    POP EDI                             ; 00418f2a
    POP ESI                             ; 00418f2b
    POP EBX                             ; 00418f2c
    RET                                 ; 00418f2d
    MOV EAX,0xffffffff                  ; 00418f2e
        ;   Label: LAB_00418f2e
    MOV EDX,dword ptr [ESI + 0x180]     ; 00418f33
    XOR EBP,EBP                         ; 00418f39
    MOV dword ptr [ESP + 0x4],EAX       ; 00418f3b
    TEST EDX,EDX                        ; 00418f3f
    JLE 0x00418f15                      ; 00418f41
        ;   XREF to: 00418f15 (CONDITIONAL_JUMP)  ; LAB_00418f15
    LEA EAX,[ESI + 0x190]               ; 00418f43
    MOV dword ptr [ESP + 0x8],EBP       ; 00418f49
    XOR EDI,EDI                         ; 00418f4d
    MOV dword ptr [ESP],EAX             ; 00418f4f
    MOV EBX,dword ptr [ESP + 0x8]       ; 00418f52
        ;   Label: LAB_00418f52
    MOV EAX,dword ptr [ESI + 0x188]     ; 00418f56
    ADD EAX,EBX                         ; 00418f5c
    MOV EBX,dword ptr [EAX]             ; 00418f5e
    CMP EBX,dword ptr [ESP + 0x4]       ; 00418f60
    JZ 0x00418f80                       ; 00418f64
        ;   XREF to: 00418f80 (CONDITIONAL_JUMP)  ; LAB_00418f80
    IMUL EAX,EBX,0x18                   ; 00418f66
    ADD EAX,dword ptr [ESP]             ; 00418f69
    PUSH EAX                            ; 00418f6c
    MOV ECX,dword ptr [0x00612560]      ; 00418f6d | DAT_00612560
    PUSH ECX                            ; 00418f73 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 00418f74
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00418f79
    MOV dword ptr [ESP + 0x4],EBX       ; 00418f7c
    MOV ECX,dword ptr [ESP + 0x24]      ; 00418f80
        ;   Label: LAB_00418f80
    MOV EBX,dword ptr [ESI + 0x184]     ; 00418f84
    PUSH ECX                            ; 00418f8a
    ADD EBX,EDI                         ; 00418f8b
    PUSH EBX                            ; 00418f8d
    MOV EBX,dword ptr [0x00612560]      ; 00418f8e | DAT_00612560
    PUSH EBX                            ; 00418f94 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210 ; 00418f95
        ;   XREF to: 00482210 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 00418f9a
    INC EBP                             ; 00418f9d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00418f9e
    ADD EDI,0x3c                        ; 00418fa2
    ADD EAX,0x4                         ; 00418fa5
    MOV EDX,dword ptr [ESI + 0x180]     ; 00418fa8
    MOV dword ptr [ESP + 0x8],EAX       ; 00418fae
    CMP EBP,EDX                         ; 00418fb2
    JGE 0x00418f15                      ; 00418fb4
        ;   XREF to: 00418f15 (CONDITIONAL_JUMP)  ; LAB_00418f15
    JMP 0x00418f52                      ; 00418fba
        ;   XREF to: 00418f52 (UNCONDITIONAL_JUMP)  ; LAB_00418f52


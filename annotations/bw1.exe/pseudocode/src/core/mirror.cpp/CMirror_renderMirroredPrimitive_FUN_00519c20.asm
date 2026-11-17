; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_00519c20(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_005553e0 at 0055541d
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_00612560 = 01bc120c
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d2c8d8.base.base.count
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d2c8d8.base.surface_normal.A
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d2c8d8.base.surface_normal.B
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d2c8d8.base.surface_normal.C
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d2c8d8.base.surface_normal.D
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d2c8d8.vertices[0]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d2c8d8.vertices[1]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d2c8d8.vertices[2]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01d2c8d8.vertices[3]
;
; Called Functions:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00519960
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00519c20
        ;   Label: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_00519c20
    MOV EDX,dword ptr [EAX + 0x4]       ; 00519c24
    MOV dword ptr [0x01d2c8dc],EDX      ; 00519c27 | g_SMRGLPrimitiveQuadIndex_01d2c8d8.base.base.count
    MOV EDX,dword ptr [EAX + 0x8]       ; 00519c2d
    MOV dword ptr [0x01d2c8e0],EDX      ; 00519c30 | g_SMRGLPrimitiveQuadIndex_01d2c8d8.base.surface_normal.A
    MOV EDX,dword ptr [EAX + 0xc]       ; 00519c36
    MOV dword ptr [0x01d2c8e4],EDX      ; 00519c39 | g_SMRGLPrimitiveQuadIndex_01d2c8d8.base.surface_normal.B
    MOV EDX,dword ptr [EAX + 0x10]      ; 00519c3f
    MOV dword ptr [0x01d2c8e8],EDX      ; 00519c42 | g_SMRGLPrimitiveQuadIndex_01d2c8d8.base.surface_normal.C
    MOV EDX,dword ptr [EAX + 0x14]      ; 00519c48
    MOV dword ptr [0x01d2c8ec],EDX      ; 00519c4b | g_SMRGLPrimitiveQuadIndex_01d2c8d8.base.surface_normal.D
    MOV EDX,dword ptr [EAX + 0x18]      ; 00519c51
    MOV dword ptr [0x01d2c8f0],EDX      ; 00519c54 | g_SMRGLPrimitiveQuadIndex_01d2c8d8.vertices[0]
    MOV EDX,dword ptr [EAX + 0x24]      ; 00519c5a
    MOV dword ptr [0x01d2c8f4],EDX      ; 00519c5d | g_SMRGLPrimitiveQuadIndex_01d2c8d8.vertices[1]
    MOV EDX,dword ptr [EAX + 0x30]      ; 00519c63
    PUSH 0x1d2c8d8                      ; 00519c66
    MOV dword ptr [0x01d2c8f8],EDX      ; 00519c6b | g_SMRGLPrimitiveQuadIndex_01d2c8d8.vertices[2]
    MOV EDX,dword ptr [ESP + 0x8]       ; 00519c71
    MOV EAX,dword ptr [EAX + 0x3c]      ; 00519c75
    PUSH EDX                            ; 00519c78
    MOV [0x01d2c8fc],EAX                ; 00519c79 | g_SMRGLPrimitiveQuadIndex_01d2c8d8.vertices[3]
    CALL core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00519960 ; 00519c7e
        ;   XREF to: 00519960 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00519960(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 00519c83
    TEST EAX,EAX                        ; 00519c86
    JNZ 0x00519c8b                      ; 00519c88
        ;   XREF to: 00519c8b (CONDITIONAL_JUMP)  ; LAB_00519c8b
    RET                                 ; 00519c8a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00519c8b
        ;   Label: LAB_00519c8b
    ADD EAX,0xe8                        ; 00519c8f
    PUSH EAX                            ; 00519c94
    MOV ECX,dword ptr [0x00612560]      ; 00519c95 | g_CDemonRenderer_PTR_00612560
    PUSH ECX                            ; 00519c9b
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 ; 00519c9c
        ;   XREF to: 00481b80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00519ca1
    RET                                 ; 00519ca4


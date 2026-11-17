; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004d7760(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0050dfe0 at 0050e01d
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonRenderer g_CDemonRenderer_01b4d738
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cc9428.base.base.count
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cc9428.base.surface_normal.A
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cc9428.base.surface_normal.B
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cc9428.base.surface_normal.C
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cc9428.base.surface_normal.D
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cc9428.vertices[0]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cc9428.vertices[1]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cc9428.vertices[2]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cc9428.vertices[3]
;
; Called Functions:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004d7760
        ;   Label: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004d7760
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d7764
    MOV dword ptr [0x01cc942c],EDX      ; 004d7767 | g_SMRGLPrimitiveQuadIndex_01cc9428.base.base.count
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d776d
    MOV dword ptr [0x01cc9430],EDX      ; 004d7770 | g_SMRGLPrimitiveQuadIndex_01cc9428.base.surface_normal.A
    MOV EDX,dword ptr [EAX + 0xc]       ; 004d7776
    MOV dword ptr [0x01cc9434],EDX      ; 004d7779 | g_SMRGLPrimitiveQuadIndex_01cc9428.base.surface_normal.B
    MOV EDX,dword ptr [EAX + 0x10]      ; 004d777f
    MOV dword ptr [0x01cc9438],EDX      ; 004d7782 | g_SMRGLPrimitiveQuadIndex_01cc9428.base.surface_normal.C
    MOV EDX,dword ptr [EAX + 0x14]      ; 004d7788
    MOV dword ptr [0x01cc943c],EDX      ; 004d778b | g_SMRGLPrimitiveQuadIndex_01cc9428.base.surface_normal.D
    MOV EDX,dword ptr [EAX + 0x18]      ; 004d7791
    MOV dword ptr [0x01cc9440],EDX      ; 004d7794 | g_SMRGLPrimitiveQuadIndex_01cc9428.vertices[0]
    MOV EDX,dword ptr [EAX + 0x24]      ; 004d779a
    MOV dword ptr [0x01cc9444],EDX      ; 004d779d | g_SMRGLPrimitiveQuadIndex_01cc9428.vertices[1]
    MOV EDX,dword ptr [EAX + 0x30]      ; 004d77a3
    PUSH 0x1cc9428                      ; 004d77a6
    MOV dword ptr [0x01cc9448],EDX      ; 004d77ab | g_SMRGLPrimitiveQuadIndex_01cc9428.vertices[2]
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d77b1
    MOV EAX,dword ptr [EAX + 0x3c]      ; 004d77b5
    PUSH EDX                            ; 004d77b8
    MOV [0x01cc944c],EAX                ; 004d77b9 | g_SMRGLPrimitiveQuadIndex_01cc9428.vertices[3]
    CALL core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0 ; 004d77be
        ;   XREF to: 004d74a0 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004d74a0(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004d77c3
    TEST EAX,EAX                        ; 004d77c6
    JNZ 0x004d77cb                      ; 004d77c8
        ;   XREF to: 004d77cb (CONDITIONAL_JUMP)  ; LAB_004d77cb
    RET                                 ; 004d77ca
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d77cb
        ;   Label: LAB_004d77cb
    ADD EAX,0xe8                        ; 004d77cf
    PUSH EAX                            ; 004d77d4
    MOV ECX,dword ptr [0x005ae704]      ; 004d77d5 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004d77db | g_CDemonRenderer_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60 ; 004d77dc
        ;   XREF to: 0045ee60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004d77e1
    RET                                 ; 004d77e4


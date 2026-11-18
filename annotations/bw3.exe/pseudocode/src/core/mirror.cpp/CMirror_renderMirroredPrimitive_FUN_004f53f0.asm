; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0(CMirror *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0053ad70 at 0053adad
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005f2afc = 01bdd7e4
;   undefined4 g_MirrorTempPrimitive.base.base.count
;   undefined4 g_MirrorTempPrimitive.base.surface_normal.A
;   undefined4 g_MirrorTempPrimitive.base.surface_normal.B
;   undefined4 g_MirrorTempPrimitive.base.surface_normal.C
;   undefined4 g_MirrorTempPrimitive.base.surface_normal.D
;   undefined4 g_MirrorTempPrimitive.vertices[0]
;   undefined4 g_MirrorTempPrimitive.vertices[1]
;   undefined4 g_MirrorTempPrimitive.vertices[2]
;   undefined4 g_MirrorTempPrimitive.vertices[3]
;
; Called Functions:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004f5130
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004f53f0
        ;   Label: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004f53f0
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f53f4
    MOV dword ptr [0x01d8105c],EDX      ; 004f53f7 | g_MirrorTempPrimitive.base.base.count
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f53fd
    MOV dword ptr [0x01d81060],EDX      ; 004f5400 | g_MirrorTempPrimitive.base.surface_normal.A
    MOV EDX,dword ptr [EAX + 0xc]       ; 004f5406
    MOV dword ptr [0x01d81064],EDX      ; 004f5409 | g_MirrorTempPrimitive.base.surface_normal.B
    MOV EDX,dword ptr [EAX + 0x10]      ; 004f540f
    MOV dword ptr [0x01d81068],EDX      ; 004f5412 | g_MirrorTempPrimitive.base.surface_normal.C
    MOV EDX,dword ptr [EAX + 0x14]      ; 004f5418
    MOV dword ptr [0x01d8106c],EDX      ; 004f541b | g_MirrorTempPrimitive.base.surface_normal.D
    MOV EDX,dword ptr [EAX + 0x18]      ; 004f5421
    MOV dword ptr [0x01d81070],EDX      ; 004f5424 | g_MirrorTempPrimitive.vertices[0]
    MOV EDX,dword ptr [EAX + 0x24]      ; 004f542a
    MOV dword ptr [0x01d81074],EDX      ; 004f542d | g_MirrorTempPrimitive.vertices[1]
    MOV EDX,dword ptr [EAX + 0x30]      ; 004f5433
    PUSH 0x1d81058                      ; 004f5436
    MOV dword ptr [0x01d81078],EDX      ; 004f543b | g_MirrorTempPrimitive.vertices[2]
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f5441
    MOV EAX,dword ptr [EAX + 0x3c]      ; 004f5445
    PUSH EDX                            ; 004f5448
    MOV [0x01d8107c],EAX                ; 004f5449 | g_MirrorTempPrimitive.vertices[3]
    CALL core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004f5130 ; 004f544e
        ;   XREF to: 004f5130 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_004f5130(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 004f5453
    TEST EAX,EAX                        ; 004f5456
    JNZ 0x004f545b                      ; 004f5458
        ;   XREF to: 004f545b (CONDITIONAL_JUMP)  ; LAB_004f545b
    RET                                 ; 004f545a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f545b
        ;   Label: LAB_004f545b
    ADD EAX,0xe8                        ; 004f545f
    PUSH EAX                            ; 004f5464
    MOV ECX,dword ptr [0x005f2afc]      ; 004f5465 | g_CDemonRenderer_PTR_005f2afc
    PUSH ECX                            ; 004f546b
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 ; 004f546c
        ;   XREF to: 0046b240 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004f5471
    RET                                 ; 004f5474


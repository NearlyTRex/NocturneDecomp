; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_005225e0(CMirror * this_ptr, SMRGLHeaderPrimitive * prim)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   SMRGLHeaderPrimitive g_MirrorTempPrimitive
;   undefined4 g_MirrorTempPrimitive.base.count
;   undefined4 g_MirrorTempPrimitive.surface_normal.A
;   undefined4 g_MirrorTempPrimitive.surface_normal.B
;   undefined4 g_MirrorTempPrimitive.surface_normal.C
;   undefined4 g_MirrorTempPrimitive.surface_normal.D
;   int INT_02f33724
;   int INT_02f33728
;   int INT_02f3372c
;   int INT_02f33730
;
; Called Functions:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310
;   engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005225e0
        ;   Label: core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_005225e0
    MOV EDX,dword ptr [EAX + 0x4]       ; 005225e4
    MOV dword ptr [0x02f33710],EDX      ; 005225e7 | g_MirrorTempPrimitive.base.count
    MOV EDX,dword ptr [EAX + 0x8]       ; 005225ed
    MOV dword ptr [0x02f33714],EDX      ; 005225f0 | g_MirrorTempPrimitive.surface_normal.A
    MOV EDX,dword ptr [EAX + 0xc]       ; 005225f6
    MOV dword ptr [0x02f33718],EDX      ; 005225f9 | g_MirrorTempPrimitive.surface_normal.B
    MOV EDX,dword ptr [EAX + 0x10]      ; 005225ff
    MOV dword ptr [0x02f3371c],EDX      ; 00522602 | g_MirrorTempPrimitive.surface_normal.C
    MOV EDX,dword ptr [EAX + 0x14]      ; 00522608
    MOV dword ptr [0x02f33720],EDX      ; 0052260b | g_MirrorTempPrimitive.surface_normal.D
    MOV EDX,dword ptr [EAX + 0x18]      ; 00522611
    MOV dword ptr [0x02f33724],EDX      ; 00522614 | INT_02f33724
    MOV EDX,dword ptr [EAX + 0x24]      ; 0052261a
    MOV dword ptr [0x02f33728],EDX      ; 0052261d | INT_02f33728
    MOV EDX,dword ptr [EAX + 0x30]      ; 00522623
    PUSH 0x2f3370c                      ; 00522626 | g_MirrorTempPrimitive
    MOV dword ptr [0x02f3372c],EDX      ; 0052262b | INT_02f3372c
    MOV EDX,dword ptr [ESP + 0x8]       ; 00522631
    MOV EAX,dword ptr [EAX + 0x3c]      ; 00522635
    PUSH EDX                            ; 00522638
    MOV [0x02f33730],EAX                ; 00522639 | INT_02f33730
    CALL core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310 ; 0052263e
        ;   XREF to: 00522310 (UNCONDITIONAL_CALL)  ; uint core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310(CMirror * this_ptr, SMRGLHeaderPrimitive * primitive)
    ADD ESP,0x8                         ; 00522643
    TEST EAX,EAX                        ; 00522646
    JNZ 0x0052264b                      ; 00522648
        ;   XREF to: 0052264b (CONDITIONAL_JUMP)  ; LAB_0052264b
    RET                                 ; 0052264a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052264b
        ;   Label: LAB_0052264b
    ADD EAX,0xe8                        ; 0052264f
    PUSH EAX                            ; 00522654
    MOV ECX,dword ptr [0x006703ec]      ; 00522655 | g_CDemonRendererPtr2
    PUSH ECX                            ; 0052265b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820 ; 0052265c
        ;   XREF to: 0048a820 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 00522661
    RET                                 ; 00522664


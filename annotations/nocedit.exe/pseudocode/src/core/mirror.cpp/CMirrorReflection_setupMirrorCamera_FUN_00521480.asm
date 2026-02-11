; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorCamera_FUN_00521480(CMirrorReflection *this_ptr)
;
; Parameters:
; CMirrorReflection * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005214c0 at 00521ee6
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521480
        ;   Label: core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_00521480
    MOV EBX,dword ptr [ESP + 0x8]       ; 00521481
    LEA EAX,[EBX + 0x60]                ; 00521485
    PUSH EAX                            ; 00521488
    MOV EDX,dword ptr [0x006703ec]      ; 00521489 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0052148f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 00521490
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
    ADD ESP,0x8                         ; 00521495
    MOV ECX,dword ptr [0x006703ec]      ; 00521498 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH dword ptr [EBX + 0x6c]         ; 0052149e
    PUSH ECX                            ; 005214a1 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650 ; 005214a2
        ;   XREF to: 0048c650 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 005214a7
    LEA EAX,[EBX + 0x70]                ; 005214aa
    PUSH EAX                            ; 005214ad
    MOV EBX,dword ptr [0x006703ec]      ; 005214ae | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 005214b4 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200 ; 005214b5
        ;   XREF to: 0048c200 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 005214ba
    POP EBX                             ; 005214bd
    RET                                 ; 005214be


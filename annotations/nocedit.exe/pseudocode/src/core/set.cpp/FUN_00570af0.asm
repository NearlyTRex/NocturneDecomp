; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_set.cpp_FUN_00570af0()
;
;
; XREF[5]:
;   core_set.cpp_CDemonSet_FUN_0056be80 at 0056c024
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c540
;   core_set.cpp_CDemonSet_FUN_0056cd60 at 0056cec5
;   core_set.cpp_CDemonSet_FUN_0056cf00 at 0056d051
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a44d
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   CVector3f g_SavedCameraOrigin
;   CVector3f g_SavedCameraRotation
;   float g_SavedProjectionFactor
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
;   engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570af0
        ;   Label: core_set.cpp_FUN_00570af0
    PUSH ESI                            ; 00570af1
    PUSH EDI                            ; 00570af2
    PUSH 0x33469d0                      ; 00570af3 | CVector3f g_SavedCameraOrigin
    MOV EDX,dword ptr [0x006703ec]      ; 00570af8 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 00570afe | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 00570aff | void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00570b04
    MOV ECX,dword ptr [0x006703ec]      ; 00570b07 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH dword ptr [0x033469e8]         ; 00570b0d | float g_SavedProjectionFactor
    PUSH ECX                            ; 00570b13 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650 ; 00570b14 | void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)
        ;   XREF to: 0048c650 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00570b19
    PUSH 0x33469dc                      ; 00570b1c | CVector3f g_SavedCameraRotation
    MOV EBX,dword ptr [0x006703ec]      ; 00570b21 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 00570b27 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0 ; 00570b28 | void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00570b2d
    PUSH 0x0                            ; 00570b30
    MOV ESI,dword ptr [0x006703ec]      ; 00570b32 | CDemonRenderer * g_CDemonRendererPtr
    PUSH ESI                            ; 00570b38 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10 ; 00570b39 | void engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10(CDemonRenderer * this_ptr, int enabled)
        ;   XREF to: 0048ce10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00570b3e
    PUSH 0x0                            ; 00570b41
    MOV EDI,dword ptr [0x006703ec]      ; 00570b43 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 00570b49 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0 ; 00570b4a | void engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0(CDemonRenderer * this_ptr, int alpha_mask)
        ;   XREF to: 0048cdf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00570b4f
    MOV EAX,dword ptr [ESP + 0x10]      ; 00570b52
    MOV dword ptr [EAX + 0x161650],0x0  ; 00570b56
    POP EDI                             ; 00570b60
    POP ESI                             ; 00570b61
    POP EBX                             ; 00570b62
    RET                                 ; 00570b63


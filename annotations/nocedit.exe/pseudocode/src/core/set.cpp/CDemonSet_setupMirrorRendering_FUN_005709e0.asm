; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(CDemonSet *this_ptr,int mirror_index,int enable_flag)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   mirror_index
; int              Stack[0xc]:4   enable_flag
; Local Variables:
; undefined1       Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_set.cpp_CDemonSet_FUN_0056be80 at 0056c007
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c365
;   core_set.cpp_CDemonSet_FUN_0056cd60 at 0056ce92
;   core_set.cpp_CDemonSet_FUN_0056cf00 at 0056d01e
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a42d
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonRenderer g_CDemonRendererInstance
;   CVector3f g_SavedCameraOrigin
;   undefined4 g_SavedCameraOrigin.y
;   undefined4 g_SavedCameraOrigin.z
;   CVector3f g_SavedCameraRotation
;   undefined4 g_SavedCameraRotation.y
;   undefined4 g_SavedCameraRotation.z
;   float g_SavedProjectionFactor
;
; Called Functions:
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005214c0
;   engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870
;   engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
;   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
;   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
;   engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005709e0
        ;   Label: core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
    PUSH ESI                            ; 005709e1
    PUSH EDI                            ; 005709e2
    PUSH EBP                            ; 005709e3
    SUB ESP,0x1c                        ; 005709e4
    MOV ESI,dword ptr [ESP + 0x34]      ; 005709e7
    LEA EAX,[ESP + 0xc]                 ; 005709eb
    PUSH EAX                            ; 005709ef
    MOV EDX,dword ptr [0x006703ec]      ; 005709f0 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 005709f6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780 ; 005709f7
        ;   XREF to: 0048c780 (UNCONDITIONAL_CALL)  ; float * engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer * this_ptr, float * output)
    ADD ESP,0x8                         ; 005709fc
    CMP EAX,0x33469d0                   ; 005709ff | g_SavedCameraOrigin
    JZ 0x00570a20                       ; 00570a04
        ;   XREF to: 00570a20 (CONDITIONAL_JUMP)  ; LAB_00570a20
    FLD float ptr [EAX]                 ; 00570a06
    FLD float ptr [EAX + 0x8]           ; 00570a08
    MOV EDX,dword ptr [EAX + 0x4]       ; 00570a0b
    MOV dword ptr [0x033469d4],EDX      ; 00570a0e | g_SavedCameraOrigin.y
    FSTP float ptr [0x033469d8]         ; 00570a14 | g_SavedCameraOrigin.z
    FSTP float ptr [0x033469d0]         ; 00570a1a | g_SavedCameraOrigin
    MOV EAX,ESP                         ; 00570a20
        ;   Label: LAB_00570a20
    PUSH EAX                            ; 00570a22
    MOV ECX,dword ptr [0x006703ec]      ; 00570a23 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00570a29 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800 ; 00570a2a
        ;   XREF to: 0048c800 (UNCONDITIONAL_CALL)  ; float * engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800(CDemonRenderer * this_ptr, float * output)
    ADD ESP,0x8                         ; 00570a2f
    CMP EAX,0x33469dc                   ; 00570a32 | g_SavedCameraRotation
    JZ 0x00570a53                       ; 00570a37
        ;   XREF to: 00570a53 (CONDITIONAL_JUMP)  ; LAB_00570a53
    FLD float ptr [EAX]                 ; 00570a39
    FLD float ptr [EAX + 0x8]           ; 00570a3b
    MOV EDX,dword ptr [EAX + 0x4]       ; 00570a3e
    MOV dword ptr [0x033469e0],EDX      ; 00570a41 | g_SavedCameraRotation.y
    FSTP float ptr [0x033469e4]         ; 00570a47 | g_SavedCameraRotation.z
    FSTP float ptr [0x033469dc]         ; 00570a4d | g_SavedCameraRotation
    MOV EBX,dword ptr [0x006703ec]      ; 00570a53 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_00570a53
    PUSH EBX                            ; 00570a59 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870 ; 00570a5a
        ;   XREF to: 0048c870 (UNCONDITIONAL_CALL)  ; float engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0048c870(CDemonRenderer * this_ptr)
    MOV dword ptr [ESP + 0x1c],EAX      ; 00570a5f
    LEA EBX,[ESI*0x4 + 0x0]             ; 00570a63
    FLD float ptr [ESP + 0x1c]          ; 00570a6a
    ADD ESP,0x4                         ; 00570a6e
    FSTP float ptr [0x033469e8]         ; 00570a71 | g_SavedProjectionFactor
    MOV EDI,dword ptr [ESP + 0x30]      ; 00570a77
    PUSH dword ptr [0x033469e8]         ; 00570a7b | g_SavedProjectionFactor
    ADD EBX,EDI                         ; 00570a81
    PUSH 0x33469dc                      ; 00570a83 | g_SavedCameraRotation
    MOV EAX,dword ptr [EBX + 0x15acb8]  ; 00570a88
    PUSH 0x33469d0                      ; 00570a8e | g_SavedCameraOrigin
    ADD EAX,0x1ec                       ; 00570a93
    PUSH EAX                            ; 00570a98
    CALL core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005214c0 ; 00570a99
        ;   XREF to: 005214c0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_005214c0(CMirrorReflection * this_ptr)
    ADD ESP,0x10                        ; 00570a9e
    PUSH 0x1                            ; 00570aa1
    MOV EBP,dword ptr [0x006703ec]      ; 00570aa3 | g_CDemonRendererPtr2
    PUSH EBP                            ; 00570aa9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10 ; 00570aaa
        ;   XREF to: 0048ce10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00570aaf
    INC ESI                             ; 00570ab2
    MOV EAX,[0x00823a74]                ; 00570ab3 | g_CurrentSceneCamera
    PUSH ESI                            ; 00570ab8
    MOV EDX,dword ptr [EAX + 0x3c]      ; 00570ab9
    PUSH EAX                            ; 00570abc
    CALL dword ptr [EDX + 0x10]         ; 00570abd
    ADD ESP,0x8                         ; 00570ac0
    PUSH ESI                            ; 00570ac3
    MOV EAX,[0x006703ec]                ; 00570ac4 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 00570ac9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0 ; 00570aca
        ;   XREF to: 0048cdf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0(CDemonRenderer * this_ptr, int alpha_mask)
    MOV EAX,dword ptr [EBX + 0x15acb8]  ; 00570acf
    ADD EAX,0x1ec                       ; 00570ad5
    ADD ESP,0x8                         ; 00570ada
    MOV dword ptr [EDI + 0x161650],EAX  ; 00570add
    ADD ESP,0x1c                        ; 00570ae3
    POP EBP                             ; 00570ae6
    POP EDI                             ; 00570ae7
    POP ESI                             ; 00570ae8
    POP EBX                             ; 00570ae9
    RET                                 ; 00570aea


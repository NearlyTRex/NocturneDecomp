; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_004c1a30(CMuzzleFlash *this_ptr)
;
; Parameters:
; CMuzzleFlash *   Stack[0x4]:4   this_ptr
; Local Variables:
; CVector3i        Stack[-0x28]:12  local_28
; CVector3i        Stack[-0x1c]:12  local_1c
; float            Stack[-0x10]:4  local_10
; float            Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c72dd
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1a30
        ;   Label: core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30
    PUSH EBP                            ; 004c1a31
    SUB ESP,0x2c                        ; 004c1a32
    MOV EBX,dword ptr [ESP + 0x38]      ; 004c1a35
    CMP dword ptr [EBX],0x2             ; 004c1a39
    JZ 0x004c1a44                       ; 004c1a3c
        ;   XREF to: 004c1a44 (CONDITIONAL_JUMP)  ; LAB_004c1a44
    ADD ESP,0x2c                        ; 004c1a3e
    POP EBP                             ; 004c1a41
    POP EBX                             ; 004c1a42
    RET                                 ; 004c1a43
    PUSH EDI                            ; 004c1a44
        ;   Label: LAB_004c1a44
    PUSH ESI                            ; 004c1a45
    LEA EAX,[EBX + 0x4]                 ; 004c1a46
    PUSH EAX                            ; 004c1a49
    MOV ECX,dword ptr [0x006703ec]      ; 004c1a4a | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c1a50 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c1a51
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c1a56
    PUSH 0x0                            ; 004c1a59
    LEA EAX,[EBX + 0x10]                ; 004c1a5b
    PUSH EAX                            ; 004c1a5e
    MOV EBX,dword ptr [0x006703ec]      ; 004c1a5f | g_CDemonRendererPtr2 | g_CDemonRendererInstance
    PUSH EBX                            ; 004c1a65 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c1a66
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c1a6b
    PUSH 0x40c90fdb                     ; 004c1a6e
    PUSH 0x0                            ; 004c1a73
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c1a75
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[69]:
;   core_ammo.cpp_CAmmo_renderOpaque_FUN_0040dc80 at 0040dc8b
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040e320 at 0040e32d
;   core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040ef70 at 0040ef8b
;   core_baron.cpp_CBaron_renderTransparent_FUN_004101f0 at 004102e8
;   core_bat.cpp_CBat_renderOpaque_FUN_00410f70 at 00410f7b
;   core_batman.cpp_CBatman_renderOpaque_FUN_00413970 at 004139d8
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_00414e00 at 00414e1d
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419130 at 0041919c
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_00418fc0 at 00419009
;   core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00419280 at 004192c6
;   ... and 59 more
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004087b0
        ;   Label: core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
    ADD EAX,0x20                        ; 004087b4
    PUSH EAX                            ; 004087b7
    MOV EDX,dword ptr [0x00612560]      ; 004087b8 | DAT_00612560
    PUSH EDX                            ; 004087be | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004087bf
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004087c4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004087c7
    PUSH 0x0                            ; 004087cb
    ADD EAX,0x30                        ; 004087cd
    PUSH EAX                            ; 004087d0
    MOV ECX,dword ptr [0x00612560]      ; 004087d1 | DAT_00612560
    PUSH ECX                            ; 004087d7 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004087d8
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004087dd
    RET                                 ; 004087e0


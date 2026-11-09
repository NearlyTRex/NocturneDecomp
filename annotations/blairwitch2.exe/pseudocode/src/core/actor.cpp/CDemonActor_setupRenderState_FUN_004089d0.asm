; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[72]:
;   core_ammo.cpp_FUN_0040e0f0 at 0040e0fb
;   core_ammobox.cpp_FUN_0040e780 at 0040e78d
;   core_backgnd.cpp_FUN_0040f3f0 at 0040f40b
;   core_baron.cpp_FUN_00410670 at 00410768
;   core_bat.cpp_FUN_004113f0 at 004113fb
;   core_batman.cpp_FUN_00413c70 at 00413cd8
;   core_biggs.cpp_FUN_00415120 at 0041513d
;   core_bodypart.cpp_FUN_00415b60 at 00415ba9
;   core_bodypart.cpp_FUN_00415cd0 at 00415d2f
;   core_bodypart.cpp_FUN_00415e10 at 00415e56
;   ... and 62 more
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004089d0
        ;   Label: core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
    ADD EAX,0x20                        ; 004089d4
    PUSH EAX                            ; 004089d7
    MOV EDX,dword ptr [0x0060b280]      ; 004089d8 | DAT_0060b280
    PUSH EDX                            ; 004089de | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 004089df
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004089e4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004089e7
    PUSH 0x0                            ; 004089eb
    ADD EAX,0x30                        ; 004089ed
    PUSH EAX                            ; 004089f0
    MOV ECX,dword ptr [0x0060b280]      ; 004089f1 | DAT_0060b280
    PUSH ECX                            ; 004089f7 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 004089f8
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004089fd
    RET                                 ; 00408a00


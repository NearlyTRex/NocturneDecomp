; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_releaseResources_FUN_00422c10(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_markResourcesInUse_FUN_00408ac0
;   core_motion.cpp_CMotionController_detachMotionList_FUN_00503810
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00422c10
        ;   Label: core_charactr.cpp_CCharacter_releaseResources_FUN_00422c10
    ADD EAX,0x2b4                       ; 00422c14
    PUSH EAX                            ; 00422c19
    CALL core_motion.cpp_CMotionController_detachMotionList_FUN_00503810 ; 00422c1a
        ;   XREF to: 00503810 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_detachMotionList_FUN_00503810(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00422c1f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00422c22
    PUSH EDX                            ; 00422c26
    CALL core_actor.cpp_CDemonActor_markResourcesInUse_FUN_00408ac0 ; 00422c27
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_markResourcesInUse_FUN_00408ac0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00422c2c
    RET                                 ; 00422c2f


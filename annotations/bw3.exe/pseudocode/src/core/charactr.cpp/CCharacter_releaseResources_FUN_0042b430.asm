; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_releaseResources_FUN_0042b430(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_markResourcesInUse_FUN_004088d0
;   core_motion.cpp_CMotionController_detachMotionList_FUN_004fc2c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b430
        ;   Label: core_charactr.cpp_CCharacter_releaseResources_FUN_0042b430
    ADD EAX,0x158                       ; 0042b434
    PUSH EAX                            ; 0042b439
    CALL core_motion.cpp_CMotionController_detachMotionList_FUN_004fc2c0 ; 0042b43a
        ;   XREF to: 004fc2c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_detachMotionList_FUN_004fc2c0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0042b43f
    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b442
    PUSH EDX                            ; 0042b446
    CALL core_actor.cpp_CDemonActor_markResourcesInUse_FUN_004088d0 ; 0042b447
        ;   XREF to: 004088d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_markResourcesInUse_FUN_004088d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042b44c
    RET                                 ; 0042b44f


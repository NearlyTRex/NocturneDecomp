; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_releaseResources_FUN_0042c7d0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_markResourcesInUse_FUN_00408890
;   core_motion.cpp_CMotionController_detachMotionList_FUN_005249b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042c7d0
        ;   Label: core_charactr.cpp_CCharacter_releaseResources_FUN_0042c7d0
    ADD EAX,0x158                       ; 0042c7d4
    PUSH EAX                            ; 0042c7d9
    CALL core_motion.cpp_CMotionController_detachMotionList_FUN_005249b0 ; 0042c7da
        ;   XREF to: 005249b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_detachMotionList_FUN_005249b0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0042c7df
    MOV EDX,dword ptr [ESP + 0x4]       ; 0042c7e2
    PUSH EDX                            ; 0042c7e6
    CALL core_actor.cpp_CDemonActor_markResourcesInUse_FUN_00408890 ; 0042c7e7
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_markResourcesInUse_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042c7ec
    RET                                 ; 0042c7ef


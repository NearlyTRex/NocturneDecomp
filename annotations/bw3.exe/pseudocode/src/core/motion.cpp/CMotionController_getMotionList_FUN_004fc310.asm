; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMotionList * __cdecl core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[37]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a10ba
;   core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_00433880 at 004338d1
;   core_charactr.cpp_CCharacter_canLookAt_FUN_004331a0 at 004331e5
;   core_charactr.cpp_CCharacter_initGesture_FUN_00432090 at 004320ad
;   core_charactr.cpp_CCharacter_setWalkTarget_FUN_00431470 at 004314b0
;   core_charactr.cpp_FUN_004320d0 at 0043212f
;   core_charactr.cpp_FUN_00432220 at 00432243
;   core_darkwolf.cpp_CDarkwolf_setup_FUN_00598800 at 005988fc
;   core_event.cpp_FUN_0048c2e0 at 0049047c
;   core_ghoul.cpp_CGhoul_processDamage_FUN_004c9400 at 004c979c
;   ... and 27 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fc310
        ;   Label: core_motion.cpp_CMotionController_getMotionList_FUN_004fc310
    MOV EAX,dword ptr [EAX]             ; 004fc314
    RET                                 ; 004fc316


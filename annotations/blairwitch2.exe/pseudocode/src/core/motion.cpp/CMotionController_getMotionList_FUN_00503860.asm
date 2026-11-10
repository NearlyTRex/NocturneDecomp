; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMotionList * __cdecl core_motion_cpp_CMotionController_getMotionList_FUN_00503860(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[29]:
;   core_charactr.cpp_CCharacter_advanceGesture_FUN_00429320 at 00429348
;   core_charactr.cpp_CCharacter_applyGesture_FUN_004291f0 at 00429252
;   core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a3d0 at 0042a41a
;   core_charactr.cpp_CCharacter_canLookAt_FUN_00429ce0 at 00429d25
;   core_charactr.cpp_CCharacter_initGesture_FUN_004291b0 at 004291cd
;   core_charactr.cpp_CCharacter_setWalkTarget_FUN_004285f0 at 00428630
;   core_doc.cpp_CDoc_setup_FUN_00450620 at 0045080b
;   core_event.cpp_FUN_00489670 at 0048d2d8
;   core_gabriela.cpp_CGabriella_setup_FUN_004ad3e0 at 004ad5ab
;   core_ghoul.cpp_CGhoul_processDamage_FUN_004c40f0 at 004c448c
;   ... and 19 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00503860
        ;   Label: core_motion.cpp_CMotionController_getMotionList_FUN_00503860
    MOV EAX,dword ptr [EAX]             ; 00503864
    RET                                 ; 00503866


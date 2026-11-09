; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_clearTweenState_FUN_005039e0(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_motion.cpp_CMotionController_advance_FUN_005030c0 at 00503259
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_00503470 at 005034ca
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_00503980 at 005039ad
;   core_motion.cpp_CMotionController_reset_FUN_005035f0 at 00503611
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005039e0
        ;   Label: core_motion.cpp_CMotionController_clearTweenState_FUN_005039e0
    MOV dword ptr [EAX + 0x14],0xbf800000 ; 005039e4
    MOV dword ptr [EAX + 0xc],0x0       ; 005039eb
    RET                                 ; 005039f2


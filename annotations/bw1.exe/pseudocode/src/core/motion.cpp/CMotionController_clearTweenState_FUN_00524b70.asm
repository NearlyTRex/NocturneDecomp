; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_clearTweenState_FUN_00524b70(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_motion.cpp_CMotionController_advance_FUN_00524270 at 00524409
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_00524620 at 0052467a
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_00524b10 at 00524b3d
;   core_motion.cpp_CMotionController_reset_FUN_00524790 at 005247b1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00524b70
        ;   Label: core_motion.cpp_CMotionController_clearTweenState_FUN_00524b70
    MOV dword ptr [EAX + 0x14],0xbf800000 ; 00524b74
    MOV dword ptr [EAX + 0xc],0x0       ; 00524b7b
    RET                                 ; 00524b82


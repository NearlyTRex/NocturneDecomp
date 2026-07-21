; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_clearTweenState_FUN_004e19f0(int param_1)
;
;
; XREF[4]:
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0 at 004e132a
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_004e1500 at 004e1565
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_004e1990 at 004e19bd
;   core_motion.cpp_CMotionController_reset_FUN_004e1680 at 004e16a1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e19f0
        ;   Label: core_motion.cpp_CMotionController_clearTweenState_FUN_004e19f0
    MOV dword ptr [EAX + 0x14],0xbf800000 ; 004e19f4
    MOV dword ptr [EAX + 0xc],0x0       ; 004e19fb
    RET                                 ; 004e1a02


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_clearTweenState_FUN_004fc480(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_motion.cpp_CMotionController_advance_FUN_004fbb70 at 004fbd09
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_004fbf20 at 004fbf7a
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 at 004fc44d
;   core_motion.cpp_CMotionController_reset_FUN_004fc090 at 004fc0b1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fc480
        ;   Label: core_motion.cpp_CMotionController_clearTweenState_FUN_004fc480
    MOV dword ptr [EAX + 0x14],0xbf800000 ; 004fc484
    MOV dword ptr [EAX + 0xc],0x0       ; 004fc48b
    RET                                 ; 004fc492


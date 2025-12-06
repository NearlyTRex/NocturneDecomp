; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40(CMotionController * this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_motion.cpp_CMotionController_advance_FUN_0052d610 at 0052d77a
;   core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950 at 0052d9b5
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0 at 0052de0d
;   core_motion.cpp_CMotionController_reset_FUN_0052dad0 at 0052daf1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052de40
        ;   Label: core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40
    MOV dword ptr [EAX + 0x14],0xbf800000 ; 0052de44
    MOV dword ptr [EAX + 0xc],0x0       ; 0052de4b
    RET                                 ; 0052de52


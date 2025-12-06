; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[33]:
;   core_actor.cpp_CActorProperty_FUN_0040ea50 at 0040ec35
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040fa5d
;   core_charactr.cpp_CCharacter_FUN_0042c920 at 0042c99c
;   core_charactr.cpp_CCharacter_FUN_0042d390 at 0042d3ad
;   core_charactr.cpp_CCharacter_FUN_0042d4d0 at 0042d4f0
;   core_charactr.cpp_CCharacter_FUN_0042de50 at 0042de95
;   core_charactr.cpp_CCharacter_FUN_0042e670 at 0042e6ba
;   core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0 at 0042d404
;   core_event.cpp_CEventList_FUN_004aacc0 at 004acfa6
;   core_gabriela.cpp_FUN_004d2c40 at 004d2e47
;   ... and 23 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052dce0
        ;   Label: core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
    MOV EAX,dword ptr [EAX]             ; 0052dce4
    RET                                 ; 0052dce6


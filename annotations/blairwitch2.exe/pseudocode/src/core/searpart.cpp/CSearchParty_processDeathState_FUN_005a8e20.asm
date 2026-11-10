; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_searpart_cpp_CSearchParty_processDeathState_FUN_005a8e20(CSearchParty *this_ptr,float delta_time)
;
; Parameters:
; CSearchParty *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a8e20
        ;   Label: core_searpart.cpp_CSearchParty_processDeathState_FUN_005a8e20
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a8e22
    PUSH 0x0                            ; 005a8e26
    ADD EAX,0x2b4                       ; 005a8e28
    PUSH EAX                            ; 005a8e2d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a8e2e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a8e33
    RET                                 ; 005a8e36


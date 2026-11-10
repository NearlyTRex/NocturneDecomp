; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_schngeis_cpp_CSchnellGeist_processDeathState_FUN_005a3b10(CSchnellGeist *this_ptr,float delta_time)
;
; Parameters:
; CSchnellGeist *  Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a3b10
        ;   Label: core_schngeis.cpp_CSchnellGeist_processDeathState_FUN_005a3b10
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a3b12
    PUSH 0x7                            ; 005a3b16
    ADD EAX,0x2b4                       ; 005a3b18
    PUSH EAX                            ; 005a3b1d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a3b1e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a3b23
    RET                                 ; 005a3b26


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_belling_cpp_CBelling_processDeathState_FUN_005a90d0(CBelling *this_ptr,float delta_time)
;
; Parameters:
; CBelling *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a90d0
        ;   Label: core_belling.cpp_CBelling_processDeathState_FUN_005a90d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a90d2
    PUSH 0x0                            ; 005a90d6
    ADD EAX,0x2b4                       ; 005a90d8
    PUSH EAX                            ; 005a90dd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a90de
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a90e3
    RET                                 ; 005a90e6


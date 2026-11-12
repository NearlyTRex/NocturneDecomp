; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_villain_cpp_CSteuben_processDeathState_FUN_005a5d10(CSteuben *this_ptr,float delta_time)
;
; Parameters:
; CSteuben *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a5d10
        ;   Label: core_villain.cpp_CSteuben_processDeathState_FUN_005a5d10
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a5d12
    PUSH 0x0                            ; 005a5d16
    ADD EAX,0x2b4                       ; 005a5d18
    PUSH EAX                            ; 005a5d1d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a5d1e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a5d23
    RET                                 ; 005a5d26


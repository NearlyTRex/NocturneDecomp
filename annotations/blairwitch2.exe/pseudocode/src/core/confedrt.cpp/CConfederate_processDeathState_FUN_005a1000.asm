; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_confedrt_cpp_CConfederate_processDeathState_FUN_005a1000(CConfederate *this_ptr,float delta_time)
;
; Parameters:
; CConfederate *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1000
        ;   Label: core_confedrt.cpp_CConfederate_processDeathState_FUN_005a1000
    PUSH 0x1                            ; 005a1004
    PUSH 0x6                            ; 005a1006
    ADD EAX,0x2b4                       ; 005a1008
    PUSH EAX                            ; 005a100d
    MOV dword ptr [EAX + 0x3178],0x0    ; 005a100e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a1018
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a101d
    RET                                 ; 005a1020


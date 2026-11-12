; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weaver_cpp_CRobin_processDeathState_FUN_005a6720(CRobin *this_ptr,float delta_time)
;
; Parameters:
; CRobin *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a6720
        ;   Label: core_weaver.cpp_CRobin_processDeathState_FUN_005a6720
    PUSH 0x1                            ; 005a6724
    PUSH 0x0                            ; 005a6726
    ADD EAX,0x2b4                       ; 005a6728
    PUSH EAX                            ; 005a672d
    MOV dword ptr [EAX + 0x3178],0x0    ; 005a672e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a6738
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a673d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grandma_cpp_CGrandma_processDeathState_FUN_005a7c90(CGrandma *this_ptr,float delta_time)
;
; Parameters:
; CGrandma *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a7c90
        ;   Label: core_grandma.cpp_CGrandma_processDeathState_FUN_005a7c90
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a7c92
    PUSH 0x0                            ; 005a7c96
    ADD EAX,0x2b4                       ; 005a7c98
    PUSH EAX                            ; 005a7c9d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a7c9e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a7ca3
    RET                                 ; 005a7ca6


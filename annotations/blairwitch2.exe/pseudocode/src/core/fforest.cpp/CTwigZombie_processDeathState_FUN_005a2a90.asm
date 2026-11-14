; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fforest_cpp_CTwigZombie_processDeathState_FUN_005a2a90(CTwigZombie *this_ptr,float delta_time)
;
; Parameters:
; CTwigZombie *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a2a90
        ;   Label: core_fforest.cpp_CTwigZombie_processDeathState_FUN_005a2a90
    PUSH 0x1                            ; 005a2a94
    PUSH 0x3                            ; 005a2a96
    ADD EAX,0x2b4                       ; 005a2a98
    PUSH EAX                            ; 005a2a9d
    MOV dword ptr [EAX + 0x3178],0x0    ; 005a2a9e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a2aa8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2aad
    RET                                 ; 005a2ab0


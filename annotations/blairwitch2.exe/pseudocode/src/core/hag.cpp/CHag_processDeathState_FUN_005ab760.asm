; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hag_cpp_CHag_processDeathState_FUN_005ab760(CHag *this_ptr,float delta_time)
;
; Parameters:
; CHag *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ab760
        ;   Label: core_hag.cpp_CHag_processDeathState_FUN_005ab760
    PUSH 0x1                            ; 005ab764
    PUSH 0x6                            ; 005ab766
    ADD EAX,0x2b4                       ; 005ab768
    PUSH EAX                            ; 005ab76d
    MOV dword ptr [EAX + 0x3178],0x0    ; 005ab76e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005ab778
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005ab77d
    RET                                 ; 005ab780


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hand_cpp_CHand_processDeathState_FUN_005aa230(CHand *this_ptr,float delta_time)
;
; Parameters:
; CHand *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005aa230
        ;   Label: core_hand.cpp_CHand_processDeathState_FUN_005aa230
    PUSH 0x1                            ; 005aa234
    PUSH 0x0                            ; 005aa236
    ADD EAX,0x2b4                       ; 005aa238
    PUSH EAX                            ; 005aa23d
    MOV dword ptr [EAX + 0x3178],0x0    ; 005aa23e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005aa248
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005aa24d
    RET                                 ; 005aa250


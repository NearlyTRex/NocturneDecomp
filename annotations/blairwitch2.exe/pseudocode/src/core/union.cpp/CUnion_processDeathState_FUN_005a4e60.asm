; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_union_cpp_CUnion_processDeathState_FUN_005a4e60(CUnion *this_ptr,float delta_time)
;
; Parameters:
; CUnion *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a4e60
        ;   Label: core_union.cpp_CUnion_processDeathState_FUN_005a4e60
    PUSH 0x1                            ; 005a4e64
    PUSH 0x6                            ; 005a4e66
    ADD EAX,0x2b4                       ; 005a4e68
    PUSH EAX                            ; 005a4e6d
    MOV dword ptr [EAX + 0x3178],0x0    ; 005a4e6e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a4e78
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a4e7d
    RET                                 ; 005a4e80


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_reset_FUN_005035f0(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_motion.cpp_CMotionController_ctor_FUN_00503020 at 00503037
;
; Called Functions:
;   core_motion.cpp_CMotionController_clearTweenState_FUN_005039e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005035f0
        ;   Label: core_motion.cpp_CMotionController_reset_FUN_005035f0
    MOV dword ptr [EAX + 0x4],0x0       ; 005035f4
    MOV dword ptr [EAX + 0x8],0x0       ; 005035fb
    MOV dword ptr [EAX + 0x2c],0x0      ; 00503602
    PUSH EAX                            ; 00503609
    MOV dword ptr [EAX + 0x28],0xffffffff ; 0050360a
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_005039e0 ; 00503611
        ;   XREF to: 005039e0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_clearTweenState_FUN_005039e0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00503616
    RET                                 ; 00503619


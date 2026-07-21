; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_reset_FUN_004e1680(int param_1)
;
;
; XREF[1]:
;   core_motion.cpp_CMotionController_ctor_FUN_004e1120 at 004e1137
;
; Called Functions:
;   core_motion.cpp_CMotionController_clearTweenState_FUN_004e19f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e1680
        ;   Label: core_motion.cpp_CMotionController_reset_FUN_004e1680
    MOV dword ptr [EAX + 0x4],0x0       ; 004e1684
    MOV dword ptr [EAX + 0x8],0x0       ; 004e168b
    MOV dword ptr [EAX + 0x2c],0x0      ; 004e1692
    PUSH EAX                            ; 004e1699
    MOV dword ptr [EAX + 0x28],0xffffffff ; 004e169a
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_004e19f0 ; 004e16a1
        ;   XREF to: 004e19f0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_clearTweenState_FUN_004e19f0()
    ADD ESP,0x4                         ; 004e16a6
    RET                                 ; 004e16a9


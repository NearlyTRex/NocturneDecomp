; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_reset_FUN_004fc090(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_motion.cpp_CMotionController_ctor_FUN_004fbad0 at 004fbae7
;
; Called Functions:
;   core_motion.cpp_CMotionController_clearTweenState_FUN_004fc480
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fc090
        ;   Label: core_motion.cpp_CMotionController_reset_FUN_004fc090
    MOV dword ptr [EAX + 0x4],0x0       ; 004fc094
    MOV dword ptr [EAX + 0x8],0x0       ; 004fc09b
    MOV dword ptr [EAX + 0x2c],0x0      ; 004fc0a2
    PUSH EAX                            ; 004fc0a9
    MOV dword ptr [EAX + 0x28],0xffffffff ; 004fc0aa
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_004fc480 ; 004fc0b1
        ;   XREF to: 004fc480 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_clearTweenState_FUN_004fc480(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004fc0b6
    RET                                 ; 004fc0b9


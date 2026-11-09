; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_reset_FUN_00524790(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_motion.cpp_CMotionController_ctor_FUN_005241d0 at 005241e7
;
; Called Functions:
;   core_motion.cpp_CMotionController_clearTweenState_FUN_00524b70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00524790
        ;   Label: core_motion.cpp_CMotionController_reset_FUN_00524790
    MOV dword ptr [EAX + 0x4],0x0       ; 00524794
    MOV dword ptr [EAX + 0x8],0x0       ; 0052479b
    MOV dword ptr [EAX + 0x2c],0x0      ; 005247a2
    PUSH EAX                            ; 005247a9
    MOV dword ptr [EAX + 0x28],0xffffffff ; 005247aa
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_00524b70 ; 005247b1
        ;   XREF to: 00524b70 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_clearTweenState_FUN_00524b70(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005247b6
    RET                                 ; 005247b9


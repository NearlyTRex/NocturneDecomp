; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_reset_FUN_0052dad0(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_motion.cpp_CMotionController_ctor_FUN_0052d570 at 0052d587
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00596ae9
;
; Called Functions:
;   core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052dad0
        ;   Label: core_motion.cpp_CMotionController_reset_FUN_0052dad0
    MOV dword ptr [EAX + 0x4],0x0       ; 0052dad4
    MOV dword ptr [EAX + 0x8],0x0       ; 0052dadb
    MOV dword ptr [EAX + 0x2c],0x0      ; 0052dae2
    PUSH EAX                            ; 0052dae9
    MOV dword ptr [EAX + 0x28],0xffffffff ; 0052daea
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40 ; 0052daf1
        ;   XREF to: 0052de40 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0052daf6
    RET                                 ; 0052daf9


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMotionController * core_motion.cpp_CMotionController_ctor_FUN_0052d570(CMotionController * this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 at 0059ddc5
;
; Referenced Globals:
;   CMotionController_vtable g_CMotionControllerVTable
;
; Called Functions:
;   core_motion.cpp_CMotionController_reset_FUN_0052dad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d570
        ;   Label: core_motion.cpp_CMotionController_ctor_FUN_0052d570
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052d571
    MOV dword ptr [EBX + 0x50],0x661bc4 ; 0052d575 | CMotionController_vtable g_CMotionControllerVTable
    MOV byte ptr [EBX + 0x30],0x0       ; 0052d57c
    PUSH EBX                            ; 0052d580
    MOV dword ptr [EBX],0x0             ; 0052d581
    CALL core_motion.cpp_CMotionController_reset_FUN_0052dad0 ; 0052d587 | void core_motion.cpp_CMotionController_reset_FUN_0052dad0(CMotionController * this_ptr)
        ;   XREF to: 0052dad0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052d58c
    MOV EAX,EBX                         ; 0052d58f
    POP EBX                             ; 0052d591
    RET                                 ; 0052d592


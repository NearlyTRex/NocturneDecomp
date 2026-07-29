; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_004e1120(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660 at 0051b665
;
; Referenced Globals:
;   CMotionController_vtable g_CMotionControllerVTable
;
; Called Functions:
;   core_motion.cpp_CMotionController_reset_FUN_004e1680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1120
        ;   Label: core_motion.cpp_CMotionController_ctor_FUN_004e1120
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e1121
    MOV dword ptr [EBX + 0x50],0x5a0d24 ; 004e1125 | g_CMotionControllerVTable
    MOV byte ptr [EBX + 0x30],0x0       ; 004e112c
    PUSH EBX                            ; 004e1130
    MOV dword ptr [EBX],0x0             ; 004e1131
    CALL core_motion.cpp_CMotionController_reset_FUN_004e1680 ; 004e1137
        ;   XREF to: 004e1680 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_reset_FUN_004e1680(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004e113c
    MOV EAX,EBX                         ; 004e113f
    POP EBX                             ; 004e1141
    RET                                 ; 004e1142


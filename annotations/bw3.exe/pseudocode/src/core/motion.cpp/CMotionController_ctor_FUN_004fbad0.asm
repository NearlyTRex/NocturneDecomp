; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMotionController * __cdecl core_motion_cpp_CMotionController_ctor_FUN_004fbad0(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0054bf00 at 0054bf05
;
; Referenced Globals:
;   void* PTR_core_motion.cpp_CMotionController_dtor_FUN_004fbb00_005e2c84 = 004fbb00
;
; Called Functions:
;   core_motion.cpp_CMotionController_reset_FUN_004fc090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbad0
        ;   Label: core_motion.cpp_CMotionController_ctor_FUN_004fbad0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fbad1
    MOV dword ptr [EBX + 0x50],0x5e2c84 ; 004fbad5 | PTR_core_motion.cpp_CMotionController_dtor_FUN_004fbb00_005e2c84
    MOV byte ptr [EBX + 0x30],0x0       ; 004fbadc
    PUSH EBX                            ; 004fbae0
    MOV dword ptr [EBX],0x0             ; 004fbae1
    CALL core_motion.cpp_CMotionController_reset_FUN_004fc090 ; 004fbae7
        ;   XREF to: 004fc090 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_reset_FUN_004fc090(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004fbaec
    MOV EAX,EBX                         ; 004fbaef
    POP EBX                             ; 004fbaf1
    RET                                 ; 004fbaf2


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_004fc320(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a111f
;   core_charactr.cpp_CCharacter_getDeathState_FUN_00431000 at 00431011
;   core_motion.cpp_FUN_004fcdc0 at 004fcefc
;   core_npc.cpp_CNPC_process_FUN_00509120 at 00509489
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fc320
        ;   Label: core_motion.cpp_CMotionController_getCurrentStateName_FUN_004fc320
    PUSH EDX                            ; 004fc324
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004fc325
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004fc32a
    ADD EAX,EAX                         ; 004fc32d
    MOV EDX,EAX                         ; 004fc32f
    SHL EAX,0x4                         ; 004fc331
    ADD ESP,0x4                         ; 004fc334
    SUB EAX,EDX                         ; 004fc337
    MOV EDX,dword ptr [ESP + 0x4]       ; 004fc339
    MOV EDX,dword ptr [EDX]             ; 004fc33d
    ADD EDX,0x4                         ; 004fc33f
    ADD EAX,EDX                         ; 004fc342
    RET                                 ; 004fc344


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_motion_cpp_CMotionController_getCurrentStateName_FUN_0052dcf0(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_getDeathState_FUN_0042c580 at 0042c5c1
;   core_motion.cpp_CMotionController_render_FUN_0052e700 at 0052e824
;   core_msnedit.cpp_drawMotionBar_FUN_00536e20 at 00536f16
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0052dcf0
        ;   Label: core_motion.cpp_CMotionController_getCurrentStateName_FUN_0052dcf0
    PUSH EDX                            ; 0052dcf4
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0052dcf5
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0052dcfa
    ADD EAX,EAX                         ; 0052dcfd
    MOV EDX,EAX                         ; 0052dcff
    SHL EAX,0x4                         ; 0052dd01
    ADD ESP,0x4                         ; 0052dd04
    SUB EAX,EDX                         ; 0052dd07
    MOV EDX,dword ptr [ESP + 0x4]       ; 0052dd09
    MOV EDX,dword ptr [EDX]             ; 0052dd0d
    ADD EDX,0x4                         ; 0052dd0f
    ADD EAX,EDX                         ; 0052dd12
    RET                                 ; 0052dd14


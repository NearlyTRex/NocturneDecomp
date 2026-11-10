; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_basicene_cpp_CBasicEnemy_processAnimationState_FUN_0059ebe0(CBasicEnemy *this_ptr,float delta_time)
;
; Parameters:
; CBasicEnemy *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059ebe0
        ;   Label: core_basicene.cpp_CBasicEnemy_processAnimationState_FUN_0059ebe0
    MOV EDX,dword ptr [EAX + 0x11390]   ; 0059ebe4
    TEST EDX,EDX                        ; 0059ebea
    JGE 0x0059ebef                      ; 0059ebec
        ;   XREF to: 0059ebef (CONDITIONAL_JUMP)  ; LAB_0059ebef
    RET                                 ; 0059ebee
    PUSH 0x1                            ; 0059ebef
        ;   Label: LAB_0059ebef
    PUSH EDX                            ; 0059ebf1
    ADD EAX,0x2b4                       ; 0059ebf2
    PUSH EAX                            ; 0059ebf7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0059ebf8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059ebfd
    RET                                 ; 0059ec00


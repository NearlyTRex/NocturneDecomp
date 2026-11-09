; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_kedward_cpp_FUN_005919a0(int param_1)
;
;
; XREF[1]:
;   core_kedward.cpp_FUN_00590010 at 00590b79
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005919a0
        ;   Label: core_kedward.cpp_FUN_005919a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005919a1
    MOV EDX,dword ptr [EAX + 0xd084]    ; 005919a5
    LEA EBX,[EAX + 0x158]               ; 005919ab
    TEST EDX,EDX                        ; 005919b1
    JNZ 0x005919d4                      ; 005919b3
        ;   XREF to: 005919d4 (CONDITIONAL_JUMP)  ; LAB_005919d4
    PUSH 0x64                           ; 005919b5
    PUSH EDX                            ; 005919b7
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 005919b8
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005919bd
    CMP EAX,0x55                        ; 005919c0
    JGE 0x005919d4                      ; 005919c3
        ;   XREF to: 005919d4 (CONDITIONAL_JUMP)  ; LAB_005919d4
    PUSH 0x1                            ; 005919c5
    PUSH 0x1                            ; 005919c7
    PUSH EBX                            ; 005919c9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005919ca
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005919cf
    POP EBX                             ; 005919d2
    RET                                 ; 005919d3
    PUSH 0x1                            ; 005919d4
        ;   Label: LAB_005919d4
    PUSH 0x2                            ; 005919d6
    PUSH EBX                            ; 005919d8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005919d9
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005919de
    POP EBX                             ; 005919e1
    RET                                 ; 005919e2


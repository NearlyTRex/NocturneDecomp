; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_00526f50(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_stand_005cd9ee
;
; Called Functions:
;   core_hero.cpp_FUN_004d4410
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526f50
        ;   Label: core_stranger.cpp_FUN_00526f50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00526f51
    PUSH EBX                            ; 00526f55
    ADD EBX,0x158                       ; 00526f56
    CALL core_hero.cpp_FUN_004d4410     ; 00526f5c
        ;   XREF to: 004d4410 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d4410()
    MOV dword ptr [EBX + 0x20ac8],0x0   ; 00526f61
    ADD ESP,0x4                         ; 00526f6b
    MOV dword ptr [EBX + 0x20acc],0x0   ; 00526f6e
    PUSH 0x0                            ; 00526f78
    MOV dword ptr [EBX + 0x20a0c],0x0   ; 00526f7a
    PUSH 0x5cd9ee                       ; 00526f84 | = "stand"
    MOV dword ptr [EBX + 0x2da8],0x0    ; 00526f89
    PUSH EBX                            ; 00526f93
    MOV dword ptr [EBX + 0x2dac],0x0    ; 00526f94
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0 ; 00526f9e
        ;   XREF to: 004fc3f0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 00526fa3
    PUSH 0x1                            ; 00526fa6
    PUSH 0x0                            ; 00526fa8
    PUSH EBX                            ; 00526faa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00526fab
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00526fb0
    POP EBX                             ; 00526fb3
    RET                                 ; 00526fb4


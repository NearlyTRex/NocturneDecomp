; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_stranger_cpp_CStranger_FUN_005c6750(void)
;
;
; Referenced Globals:
;   TerminatedCString s_stand_00653fa1
;
; Called Functions:
;   core_hero.cpp_CHero_FUN_004f3b20
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6750
        ;   Label: core_stranger.cpp_CStranger_FUN_005c6750
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c6751
    PUSH EBX                            ; 005c6755
    ADD EBX,0x158                       ; 005c6756
    CALL core_hero.cpp_CHero_FUN_004f3b20 ; 005c675c
        ;   XREF to: 004f3b20 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3b20(CHero * this_ptr)
    MOV dword ptr [EBX + 0x1fad0],0x0   ; 005c6761
    ADD ESP,0x4                         ; 005c676b
    MOV dword ptr [EBX + 0x1fad4],0x0   ; 005c676e
    PUSH 0x0                            ; 005c6778
    MOV dword ptr [EBX + 0x1fae0],0x0   ; 005c677a
    PUSH 0x653fa1                       ; 005c6784 | = "stand"
    MOV dword ptr [EBX + 0x2934],0x0    ; 005c6789
    PUSH EBX                            ; 005c6793
    MOV dword ptr [EBX + 0x2938],0x0    ; 005c6794
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 ; 005c679e
        ;   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 005c67a3
    PUSH 0x1                            ; 005c67a6
    PUSH 0x0                            ; 005c67a8
    PUSH EBX                            ; 005c67aa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c67ab
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005c67b0
    POP EBX                             ; 005c67b3
    RET                                 ; 005c67b4


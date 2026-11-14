; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_reset_FUN_0056f090(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_stand_005ebf72
;
; Called Functions:
;   core_hero.cpp_CHero_reset_FUN_004d02e0
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f090
        ;   Label: core_stranger.cpp_CStranger_reset_FUN_0056f090
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056f091
    PUSH EBX                            ; 0056f095
    ADD EBX,0x2b4                       ; 0056f096
    CALL core_hero.cpp_CHero_reset_FUN_004d02e0 ; 0056f09c
        ;   XREF to: 004d02e0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_reset_FUN_004d02e0(CHero * this_ptr)
    MOV dword ptr [EBX + 0x253e0],0x0   ; 0056f0a1
    ADD ESP,0x4                         ; 0056f0ab
    MOV dword ptr [EBX + 0x253e4],0x0   ; 0056f0ae
    PUSH 0x0                            ; 0056f0b8
    MOV dword ptr [EBX + 0x253f0],0x0   ; 0056f0ba
    PUSH 0x5ebf72                       ; 0056f0c4 | = "stand"
    MOV dword ptr [EBX + 0x2a50],0x0    ; 0056f0c9
    PUSH EBX                            ; 0056f0d3
    MOV dword ptr [EBX + 0x2a54],0x0    ; 0056f0d4
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950 ; 0056f0de
        ;   XREF to: 00503950 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 0056f0e3
    PUSH 0x1                            ; 0056f0e6
    PUSH 0x0                            ; 0056f0e8
    PUSH EBX                            ; 0056f0ea
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056f0eb
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056f0f0
    POP EBX                             ; 0056f0f3
    RET                                 ; 0056f0f4


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_reset_FUN_00591ce0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_stand_005f71e6
;
; Called Functions:
;   core_hero.cpp_CHero_reset_FUN_004ec570
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591ce0
        ;   Label: core_stranger.cpp_CStranger_reset_FUN_00591ce0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00591ce1
    PUSH EBX                            ; 00591ce5
    ADD EBX,0x158                       ; 00591ce6
    CALL core_hero.cpp_CHero_reset_FUN_004ec570 ; 00591cec
        ;   XREF to: 004ec570 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_reset_FUN_004ec570(CHero * this_ptr)
    MOV dword ptr [EBX + 0x1fea8],0x0   ; 00591cf1
    ADD ESP,0x4                         ; 00591cfb
    MOV dword ptr [EBX + 0x1feac],0x0   ; 00591cfe
    PUSH 0x0                            ; 00591d08
    MOV dword ptr [EBX + 0x1fe04],0x0   ; 00591d0a
    PUSH 0x5f71e6                       ; 00591d14 | = "stand"
    MOV dword ptr [EBX + 0x2b40],0x0    ; 00591d19
    PUSH EBX                            ; 00591d23
    MOV dword ptr [EBX + 0x2b44],0x0    ; 00591d24
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0 ; 00591d2e
        ;   XREF to: 00524ae0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00524ae0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 00591d33
    PUSH 0x1                            ; 00591d36
    PUSH 0x0                            ; 00591d38
    PUSH EBX                            ; 00591d3a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00591d3b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00591d40
    POP EBX                             ; 00591d43
    RET                                 ; 00591d44


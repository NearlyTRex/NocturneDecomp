; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_icepick_cpp_CIcePick_startThrowAttack_FUN_004baa00(int param_1)
;
;
; XREF[1]:
;   core_icepick.cpp_FUN_004b9fe0 at 004ba4ba
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004baa00
        ;   Label: core_icepick.cpp_CIcePick_startThrowAttack_FUN_004baa00
    CMP dword ptr [EAX + 0x1fa5c],0x0   ; 004baa04
    JNZ 0x004baa10                      ; 004baa0b
        ;   XREF to: 004baa10 (CONDITIONAL_JUMP)  ; LAB_004baa10
    XOR EAX,EAX                         ; 004baa0d
    RET                                 ; 004baa0f
    PUSH 0x1                            ; 004baa10
        ;   Label: LAB_004baa10
    PUSH 0x16                           ; 004baa12
    ADD EAX,0x150                       ; 004baa14
    PUSH EAX                            ; 004baa19
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004baa1a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004baa1f
    ADD ESP,0xc                         ; 004baa24
    RET                                 ; 004baa27


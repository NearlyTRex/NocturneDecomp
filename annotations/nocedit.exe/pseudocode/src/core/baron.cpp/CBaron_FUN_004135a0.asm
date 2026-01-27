; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_baron.cpp_CBaron_FUN_004135a0(CBaron * this_ptr, int param_2)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; XREF[2]:
;   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90 at 00413f11
;   core_baron.cpp_CBaron_FUN_004135e0 at 00413694
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004135a0
        ;   Label: core_baron.cpp_CBaron_FUN_004135a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004135a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004135a5
    MOV EDX,dword ptr [EBX + 0x1fcac]   ; 004135a9
    CMP EAX,EDX                         ; 004135af
    JNZ 0x004135b7                      ; 004135b1
        ;   XREF to: 004135b7 (CONDITIONAL_JUMP)  ; LAB_004135b7
    TEST EDX,EDX                        ; 004135b3
    JNZ 0x004135b9                      ; 004135b5
        ;   XREF to: 004135b9 (CONDITIONAL_JUMP)  ; LAB_004135b9
    POP EBX                             ; 004135b7
        ;   Label: LAB_004135b7
    RET                                 ; 004135b8
    PUSH 0x1                            ; 004135b9
        ;   Label: LAB_004135b9
    PUSH 0x7                            ; 004135bb
    LEA EAX,[EBX + 0x158]               ; 004135bd
    PUSH EAX                            ; 004135c3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004135c4
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004135c9
    MOV dword ptr [EBX + 0x1fcac],0x0   ; 004135cc
    POP EBX                             ; 004135d6
    RET                                 ; 004135d7


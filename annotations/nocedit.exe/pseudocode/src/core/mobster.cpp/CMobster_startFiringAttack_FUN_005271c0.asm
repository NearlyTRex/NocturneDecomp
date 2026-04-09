; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_startFiringAttack_FUN_005271c0(CMobster *this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mobster.cpp_CMobster_process_FUN_00525840 at 00525ef2
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005271c0
        ;   Label: core_mobster.cpp_CMobster_startFiringAttack_FUN_005271c0
    SUB ESP,0x4                         ; 005271c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005271c4
    FLD float ptr [EBX + 0xbf90]        ; 005271c8
    FLDZ                                ; 005271ce
    FCOMPP                              ; 005271d0
    FNSTSW AX                           ; 005271d2
    SAHF                                ; 005271d4
    JNC 0x005271dc                      ; 005271d5
        ;   XREF to: 005271dc (CONDITIONAL_JUMP)  ; LAB_005271dc
    ADD ESP,0x4                         ; 005271d7
    POP EBX                             ; 005271da
    RET                                 ; 005271db
    PUSH 0x3f800000                     ; 005271dc
        ;   Label: LAB_005271dc
    PUSH 0x3f000000                     ; 005271e1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005271e6
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 005271eb
    MOV EDX,dword ptr [EBX + 0x24b4]    ; 005271ef
    FLD float ptr [ESP + 0x8]           ; 005271f5
    LEA EAX,[EBX + 0x158]               ; 005271f9
    FSTP float ptr [EBX + 0xbf90]       ; 005271ff
    ADD ESP,0x8                         ; 00527205
    TEST EDX,EDX                        ; 00527208
    JZ 0x0052721e                       ; 0052720a
        ;   XREF to: 0052721e (CONDITIONAL_JUMP)  ; LAB_0052721e
    PUSH 0x1                            ; 0052720c
    PUSH 0x6                            ; 0052720e
    PUSH EAX                            ; 00527210
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00527211
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00527216
    ADD ESP,0x4                         ; 00527219
    POP EBX                             ; 0052721c
    RET                                 ; 0052721d
    PUSH 0x1                            ; 0052721e
        ;   Label: LAB_0052721e
    PUSH 0x2                            ; 00527220
    PUSH EAX                            ; 00527222
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00527223
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00527228
    ADD ESP,0x4                         ; 0052722b
    POP EBX                             ; 0052722e
    RET                                 ; 0052722f


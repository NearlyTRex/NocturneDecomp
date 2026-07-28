; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_startFiringAttack_FUN_004dc110(CMobster *this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_mobster.cpp_FUN_004da790 at 004dae42
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc110
        ;   Label: core_mobster.cpp_CMobster_startFiringAttack_FUN_004dc110
    SUB ESP,0x4                         ; 004dc111
    MOV EBX,dword ptr [ESP + 0xc]       ; 004dc114
    FLD float ptr [EBX + 0xbdf8]        ; 004dc118
    FLDZ                                ; 004dc11e
    FCOMPP                              ; 004dc120
    FNSTSW AX                           ; 004dc122
    SAHF                                ; 004dc124
    JNC 0x004dc12c                      ; 004dc125
        ;   XREF to: 004dc12c (CONDITIONAL_JUMP)  ; LAB_004dc12c
    ADD ESP,0x4                         ; 004dc127
    POP EBX                             ; 004dc12a
    RET                                 ; 004dc12b
    PUSH 0x3f800000                     ; 004dc12c
        ;   Label: LAB_004dc12c
    PUSH 0x3f000000                     ; 004dc131
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004dc136
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 004dc13b
    MOV EDX,dword ptr [EBX + 0x24ac]    ; 004dc13f
    FLD float ptr [ESP + 0x8]           ; 004dc145
    LEA EAX,[EBX + 0x150]               ; 004dc149
    FSTP float ptr [EBX + 0xbdf8]       ; 004dc14f
    ADD ESP,0x8                         ; 004dc155
    TEST EDX,EDX                        ; 004dc158
    JZ 0x004dc16e                       ; 004dc15a
        ;   XREF to: 004dc16e (CONDITIONAL_JUMP)  ; LAB_004dc16e
    PUSH 0x1                            ; 004dc15c
    PUSH 0x6                            ; 004dc15e
    PUSH EAX                            ; 004dc160
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004dc161
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004dc166
    ADD ESP,0x4                         ; 004dc169
    POP EBX                             ; 004dc16c
    RET                                 ; 004dc16d
    PUSH 0x1                            ; 004dc16e
        ;   Label: LAB_004dc16e
    PUSH 0x2                            ; 004dc170
    PUSH EAX                            ; 004dc172
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004dc173
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004dc178
    ADD ESP,0x4                         ; 004dc17b
    POP EBX                             ; 004dc17e
    RET                                 ; 004dc17f


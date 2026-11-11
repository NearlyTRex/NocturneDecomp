; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombprie_cpp_CZombiePriest_startFiringAttack_FUN_0058f4a0(CZombiePriest *this_ptr)
;
; Parameters:
; CZombiePriest *  Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_zombiepriest.cpp_FUN_0058d960 at 0058e25d
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058f4a0
        ;   Label: core_zombprie.cpp_CZombiePriest_startFiringAttack_FUN_0058f4a0
    SUB ESP,0x4                         ; 0058f4a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0058f4a4
    FLD float ptr [EBX + 0xd110]        ; 0058f4a8
    FLDZ                                ; 0058f4ae
    FCOMPP                              ; 0058f4b0
    FNSTSW AX                           ; 0058f4b2
    SAHF                                ; 0058f4b4
    JNC 0x0058f4bc                      ; 0058f4b5
        ;   XREF to: 0058f4bc (CONDITIONAL_JUMP)  ; LAB_0058f4bc
    ADD ESP,0x4                         ; 0058f4b7
    POP EBX                             ; 0058f4ba
    RET                                 ; 0058f4bb
    PUSH 0x3f800000                     ; 0058f4bc
        ;   Label: LAB_0058f4bc
    PUSH 0x3f000000                     ; 0058f4c1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0058f4c6
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0058f4cb
    MOV EDX,dword ptr [EBX + 0x25b0]    ; 0058f4cf
    FLD float ptr [ESP + 0x8]           ; 0058f4d5
    LEA EAX,[EBX + 0x158]               ; 0058f4d9
    FSTP float ptr [EBX + 0xd110]       ; 0058f4df
    ADD ESP,0x8                         ; 0058f4e5
    TEST EDX,EDX                        ; 0058f4e8
    JZ 0x0058f4fe                       ; 0058f4ea
        ;   XREF to: 0058f4fe (CONDITIONAL_JUMP)  ; LAB_0058f4fe
    PUSH 0x1                            ; 0058f4ec
    PUSH 0x6                            ; 0058f4ee
    PUSH EAX                            ; 0058f4f0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058f4f1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058f4f6
    ADD ESP,0x4                         ; 0058f4f9
    POP EBX                             ; 0058f4fc
    RET                                 ; 0058f4fd
    PUSH 0x1                            ; 0058f4fe
        ;   Label: LAB_0058f4fe
    PUSH 0x2                            ; 0058f500
    PUSH EAX                            ; 0058f502
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058f503
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058f508
    ADD ESP,0x4                         ; 0058f50b
    POP EBX                             ; 0058f50e
    RET                                 ; 0058f50f


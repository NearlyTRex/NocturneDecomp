; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_startFiringAttack_FUN_0051eac0(CMobster *this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_mobster.cpp_CMobster_process_FUN_0051ce40 at 0051d57a
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051eac0
        ;   Label: core_mobster.cpp_CMobster_startFiringAttack_FUN_0051eac0
    SUB ESP,0x4                         ; 0051eac1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051eac4
    FLD float ptr [EBX + 0xc33c]        ; 0051eac8
    FLDZ                                ; 0051eace
    FCOMPP                              ; 0051ead0
    FNSTSW AX                           ; 0051ead2
    SAHF                                ; 0051ead4
    JNC 0x0051eadc                      ; 0051ead5
        ;   XREF to: 0051eadc (CONDITIONAL_JUMP)  ; LAB_0051eadc
    ADD ESP,0x4                         ; 0051ead7
    POP EBX                             ; 0051eada
    RET                                 ; 0051eadb
    PUSH 0x3f800000                     ; 0051eadc
        ;   Label: LAB_0051eadc
    PUSH 0x3f000000                     ; 0051eae1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0051eae6
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0051eaeb
    MOV EDX,dword ptr [EBX + 0x25b0]    ; 0051eaef
    FLD float ptr [ESP + 0x8]           ; 0051eaf5
    LEA EAX,[EBX + 0x158]               ; 0051eaf9
    FSTP float ptr [EBX + 0xc33c]       ; 0051eaff
    ADD ESP,0x8                         ; 0051eb05
    TEST EDX,EDX                        ; 0051eb08
    JZ 0x0051eb1e                       ; 0051eb0a
        ;   XREF to: 0051eb1e (CONDITIONAL_JUMP)  ; LAB_0051eb1e
    PUSH 0x1                            ; 0051eb0c
    PUSH 0x6                            ; 0051eb0e
    PUSH EAX                            ; 0051eb10
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051eb11
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051eb16
    ADD ESP,0x4                         ; 0051eb19
    POP EBX                             ; 0051eb1c
    RET                                 ; 0051eb1d
    PUSH 0x1                            ; 0051eb1e
        ;   Label: LAB_0051eb1e
    PUSH 0x2                            ; 0051eb20
    PUSH EAX                            ; 0051eb22
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051eb23
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051eb28
    ADD ESP,0x4                         ; 0051eb2b
    POP EBX                             ; 0051eb2e
    RET                                 ; 0051eb2f


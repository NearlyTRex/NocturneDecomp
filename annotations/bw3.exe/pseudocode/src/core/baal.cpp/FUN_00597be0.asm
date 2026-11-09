; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baal_cpp_FUN_00597be0(int param_1,int param_2)
;
;
; XREF[2]:
;   core_baal.cpp_FUN_005968a0 at 00596b07
;   core_baal.cpp_FUN_00597af0 at 00597b50
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597be0
        ;   Label: core_baal.cpp_FUN_00597be0
    PUSH ESI                            ; 00597be1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00597be2
    FLD float ptr [ESI + 0xd080]        ; 00597be6
    FLDZ                                ; 00597bec
    LEA EBX,[ESI + 0x158]               ; 00597bee
    FCOMPP                              ; 00597bf4
    FNSTSW AX                           ; 00597bf6
    SAHF                                ; 00597bf8
    JC 0x00597c34                       ; 00597bf9
        ;   XREF to: 00597c34 (CONDITIONAL_JUMP)  ; LAB_00597c34
    PUSH 0x64                           ; 00597bfb
    PUSH 0x0                            ; 00597bfd
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00597bff
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00597c04
    CMP EAX,0x32                        ; 00597c07
    JL 0x00597c44                       ; 00597c0a
        ;   XREF to: 00597c44 (CONDITIONAL_JUMP)  ; LAB_00597c44
    JL 0x00597c54                       ; 00597c0c
        ;   XREF to: 00597c54 (CONDITIONAL_JUMP)  ; LAB_00597c54
    CMP EAX,0x5f                        ; 00597c0e
    JGE 0x00597c54                      ; 00597c11
        ;   XREF to: 00597c54 (CONDITIONAL_JUMP)  ; LAB_00597c54
    CMP dword ptr [ESP + 0x10],0x0      ; 00597c13
    JZ 0x00597c44                       ; 00597c18
        ;   XREF to: 00597c44 (CONDITIONAL_JUMP)  ; LAB_00597c44
    PUSH 0x1                            ; 00597c1a
    PUSH 0x0                            ; 00597c1c
    PUSH EBX                            ; 00597c1e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00597c1f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00597c24
    MOV dword ptr [ESI + 0xd080],0x0    ; 00597c27
    POP ESI                             ; 00597c31
    POP EBX                             ; 00597c32
    RET                                 ; 00597c33
    PUSH 0x1                            ; 00597c34
        ;   Label: LAB_00597c34
    PUSH 0x0                            ; 00597c36
    PUSH EBX                            ; 00597c38
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00597c39
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00597c3e
    POP ESI                             ; 00597c41
    POP EBX                             ; 00597c42
    RET                                 ; 00597c43
    PUSH 0x1                            ; 00597c44
        ;   Label: LAB_00597c44
    PUSH 0x1                            ; 00597c46
    PUSH EBX                            ; 00597c48
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00597c49
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00597c4e
    POP ESI                             ; 00597c51
    POP EBX                             ; 00597c52
    RET                                 ; 00597c53
    PUSH 0x1                            ; 00597c54
        ;   Label: LAB_00597c54
    PUSH 0x2                            ; 00597c56
    ADD ESI,0x158                       ; 00597c58
    PUSH ESI                            ; 00597c5e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00597c5f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00597c64
    POP ESI                             ; 00597c67
    POP EBX                             ; 00597c68
    RET                                 ; 00597c69


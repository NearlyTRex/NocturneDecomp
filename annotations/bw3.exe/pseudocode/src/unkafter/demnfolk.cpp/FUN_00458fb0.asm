; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_demnfolk_cpp_FUN_00458fb0(int param_1)
;
;
; XREF[2]:
;   core_demnfolk.cpp_FUN_00455080 at 0045604a
;   core_demnfolk.cpp_FUN_00457740 at 00457bec
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00458fb0
        ;   Label: unkafter_demnfolk.cpp_FUN_00458fb0
    MOV ESI,dword ptr [ESP + 0x8]       ; 00458fb1
    MOV EDX,dword ptr [ESI + 0xd0e0]    ; 00458fb5
    TEST EDX,EDX                        ; 00458fbb
    JNZ 0x00459007                      ; 00458fbd
        ;   XREF to: 00459007 (CONDITIONAL_JUMP)  ; LAB_00459007
    PUSH EBX                            ; 00458fbf
    CMP dword ptr [ESI + 0xd0dc],0x0    ; 00458fc0
    JNZ 0x0045901c                      ; 00458fc7
        ;   XREF to: 0045901c (CONDITIONAL_JUMP)  ; LAB_0045901c
    PUSH 0x5                            ; 00458fc9
    PUSH EDX                            ; 00458fcb
        ;   Label: LAB_00458fcb
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00458fcc
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00458fd1
    LEA EBX,[EAX + 0x4]                 ; 00458fd4
    CMP EBX,0x8                         ; 00458fd7
    JNZ 0x00459020                      ; 00458fda
        ;   XREF to: 00459020 (CONDITIONAL_JUMP)  ; LAB_00459020
    PUSH 0x5                            ; 00458fdc
        ;   Label: LAB_00458fdc
    PUSH 0x0                            ; 00458fde
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00458fe0
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00458fe5
    CMP EAX,0x1                         ; 00458fe8
    JZ 0x00458ff2                       ; 00458feb
        ;   XREF to: 00458ff2 (CONDITIONAL_JUMP)  ; LAB_00458ff2
    MOV EBX,0x4                         ; 00458fed
    PUSH 0x1                            ; 00458ff2
        ;   Label: LAB_00458ff2
    PUSH EBX                            ; 00458ff4
    ADD ESI,0x158                       ; 00458ff5
    PUSH ESI                            ; 00458ffb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00458ffc
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00459001
    POP EBX                             ; 00459004
    POP ESI                             ; 00459005
    RET                                 ; 00459006
    PUSH 0x1                            ; 00459007
        ;   Label: LAB_00459007
    PUSH 0x4                            ; 00459009
    ADD ESI,0x158                       ; 0045900b
    PUSH ESI                            ; 00459011
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00459012
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00459017
    POP ESI                             ; 0045901a
    RET                                 ; 0045901b
    PUSH 0x1                            ; 0045901c
        ;   Label: LAB_0045901c
    JMP 0x00458fcb                      ; 0045901e
        ;   XREF to: 00458fcb (UNCONDITIONAL_JUMP)  ; LAB_00458fcb
    CMP EBX,0x9                         ; 00459020
        ;   Label: LAB_00459020
    JZ 0x00458fdc                       ; 00459023
        ;   XREF to: 00458fdc (CONDITIONAL_JUMP)  ; LAB_00458fdc
    JMP 0x00458ff2                      ; 00459025
        ;   XREF to: 00458ff2 (UNCONDITIONAL_JUMP)  ; LAB_00458ff2


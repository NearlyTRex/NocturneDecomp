; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_prye_cpp_FUN_00520da0(int param_1)
;
;
; XREF[1]:
;   core_prye.cpp_FUN_0051b550 at 0051b685
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520da0
        ;   Label: core_prye.cpp_FUN_00520da0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00520da1
    MOV EDX,dword ptr [EBX + 0x20c24]   ; 00520da5
    CMP EDX,dword ptr [EBX + 0x2628]    ; 00520dab
    JNZ 0x00520dbd                      ; 00520db1
        ;   XREF to: 00520dbd (CONDITIONAL_JUMP)  ; LAB_00520dbd
    MOV dword ptr [EBX + 0x20c24],0x0   ; 00520db3
    PUSH 0x0                            ; 00520dbd
        ;   Label: LAB_00520dbd
    PUSH 0x1                            ; 00520dbf
    MOV EAX,dword ptr [EBX + 0x154]     ; 00520dc1
    PUSH EBX                            ; 00520dc7
    CALL dword ptr [EAX + 0x128]        ; 00520dc8
    ADD ESP,0xc                         ; 00520dce
    PUSH 0x1                            ; 00520dd1
    PUSH 0x0                            ; 00520dd3
    ADD EBX,0x158                       ; 00520dd5
    PUSH EBX                            ; 00520ddb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00520ddc
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00520de1
    POP EBX                             ; 00520de4
    RET                                 ; 00520de5


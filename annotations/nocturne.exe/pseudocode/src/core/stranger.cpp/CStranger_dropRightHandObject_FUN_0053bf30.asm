; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_CStranger_dropRightHandObject_FUN_0053bf30(int param_1)
;
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processMotionEvents_FUN_00537cd0 at 00537dc0
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053bf30
        ;   Label: core_stranger.cpp_CStranger_dropRightHandObject_FUN_0053bf30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053bf31
    MOV EAX,dword ptr [EBX + 0x24f0]    ; 0053bf35
    MOV EDX,dword ptr [EBX + 0x1fa94]   ; 0053bf3b
    MOV dword ptr [EBX + 0x1faa8],0x40800000 ; 0053bf41
    CMP EAX,EDX                         ; 0053bf4b
    JNZ 0x0053bf59                      ; 0053bf4d
        ;   XREF to: 0053bf59 (CONDITIONAL_JUMP)  ; LAB_0053bf59
    MOV dword ptr [EBX + 0x1fa94],0x0   ; 0053bf4f
    PUSH 0x0                            ; 0053bf59
        ;   Label: LAB_0053bf59
    PUSH 0x1                            ; 0053bf5b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0053bf5d
    PUSH EBX                            ; 0053bf63
    CALL dword ptr [EAX + 0x120]        ; 0053bf64
    ADD ESP,0xc                         ; 0053bf6a
    PUSH 0x1                            ; 0053bf6d
    PUSH 0x0                            ; 0053bf6f
    ADD EBX,0x150                       ; 0053bf71
    PUSH EBX                            ; 0053bf77
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0053bf78
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0053bf7d
    POP EBX                             ; 0053bf80
    RET                                 ; 0053bf81


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_0056a1e0(int param_1)
;
;
; XREF[1]:
;   core_stranger.cpp_FUN_005656f0 at 00565824
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a1e0
        ;   Label: core_stranger.cpp_FUN_0056a1e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056a1e1
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0056a1e5
    MOV EDX,dword ptr [EBX + 0x25698]   ; 0056a1eb
    MOV dword ptr [EBX + 0x256ac],0x40800000 ; 0056a1f1
    CMP EAX,EDX                         ; 0056a1fb
    JNZ 0x0056a209                      ; 0056a1fd
        ;   XREF to: 0056a209 (CONDITIONAL_JUMP)  ; LAB_0056a209
    MOV dword ptr [EBX + 0x25698],0x0   ; 0056a1ff
    PUSH 0x0                            ; 0056a209
        ;   Label: LAB_0056a209
    PUSH 0x1                            ; 0056a20b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056a20d
    PUSH EBX                            ; 0056a213
    CALL dword ptr [EAX + 0x130]        ; 0056a214
    ADD ESP,0xc                         ; 0056a21a
    PUSH 0x1                            ; 0056a21d
    PUSH 0x0                            ; 0056a21f
    ADD EBX,0x2b4                       ; 0056a221
    PUSH EBX                            ; 0056a227
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056a228
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056a22d
    POP EBX                             ; 0056a230
    RET                                 ; 0056a231


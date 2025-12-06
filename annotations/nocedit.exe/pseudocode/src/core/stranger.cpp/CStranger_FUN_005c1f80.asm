; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_CStranger_FUN_005c1f80()
;
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005bdd20 at 005bde10
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1f80
        ;   Label: core_stranger.cpp_CStranger_FUN_005c1f80
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c1f81
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 005c1f85
    MOV EDX,dword ptr [EBX + 0x1fc2c]   ; 005c1f8b
    MOV dword ptr [EBX + 0x1fc40],0x40800000 ; 005c1f91
    CMP EAX,EDX                         ; 005c1f9b
    JNZ 0x005c1fa9                      ; 005c1f9d | LAB_005c1fa9
        ;   XREF to: 005c1fa9 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x1fc2c],0x0   ; 005c1f9f
    PUSH 0x0                            ; 005c1fa9
        ;   Label: LAB_005c1fa9
    PUSH 0x1                            ; 005c1fab
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c1fad
    PUSH EBX                            ; 005c1fb3
    CALL dword ptr [EAX + 0x13c]        ; 005c1fb4
    ADD ESP,0xc                         ; 005c1fba
    PUSH 0x1                            ; 005c1fbd
    PUSH 0x0                            ; 005c1fbf
    ADD EBX,0x158                       ; 005c1fc1
    PUSH EBX                            ; 005c1fc7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c1fc8 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005c1fcd
    POP EBX                             ; 005c1fd0
    RET                                 ; 005c1fd1


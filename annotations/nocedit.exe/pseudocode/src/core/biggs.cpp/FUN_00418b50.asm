; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_biggs_cpp_FUN_00418b50(void)
;
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_enemy.cpp_FUN_004a9f10
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418b50
        ;   Label: core_biggs.cpp_FUN_00418b50
    PUSH ESI                            ; 00418b51
    PUSH EDI                            ; 00418b52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00418b53
    MOV EAX,dword ptr [ESP + 0x14]      ; 00418b57
    FLD float ptr [EAX + 0x4]           ; 00418b5b
    FSUBR float ptr [EBX + 0x243c]      ; 00418b5e
    LEA EDI,[EBX + 0x158]               ; 00418b64
    FST float ptr [EBX + 0x243c]        ; 00418b6a
    FLDZ                                ; 00418b70
    FCOMPP                              ; 00418b72
    FNSTSW AX                           ; 00418b74
    SAHF                                ; 00418b76
    JNC 0x00418bc6                      ; 00418b77
        ;   XREF to: 00418bc6 (CONDITIONAL_JUMP)  ; LAB_00418bc6
    PUSH 0x2                            ; 00418b79
    PUSH 0x0                            ; 00418b7b
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 00418b7d
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 00418b82
    MOV ESI,EAX                         ; 00418b85
    TEST EAX,EAX                        ; 00418b87
    JNZ 0x00418b98                      ; 00418b89
        ;   XREF to: 00418b98 (CONDITIONAL_JUMP)  ; LAB_00418b98
    PUSH 0x1                            ; 00418b8b
    PUSH 0x4                            ; 00418b8d
    PUSH EDI                            ; 00418b8f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00418b90
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00418b95
    CMP ESI,0x1                         ; 00418b98
        ;   Label: LAB_00418b98
    JNZ 0x00418baf                      ; 00418b9b
        ;   XREF to: 00418baf (CONDITIONAL_JUMP)  ; LAB_00418baf
    PUSH ESI                            ; 00418b9d
    PUSH 0x5                            ; 00418b9e
    LEA EAX,[EBX + 0x158]               ; 00418ba0
    PUSH EAX                            ; 00418ba6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00418ba7
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00418bac
    CMP ESI,0x2                         ; 00418baf
        ;   Label: LAB_00418baf
    JZ 0x00418bdf                       ; 00418bb2
        ;   XREF to: 00418bdf (CONDITIONAL_JUMP)  ; LAB_00418bdf
    MOV EDX,dword ptr [ESP + 0x14]      ; 00418bb4
        ;   Label: LAB_00418bb4
    PUSH EDX                            ; 00418bb8
    PUSH EBX                            ; 00418bb9
    CALL core_enemy.cpp_FUN_004a9f10    ; 00418bba
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a9f10()
    ADD ESP,0x8                         ; 00418bbf
    POP EDI                             ; 00418bc2
    POP ESI                             ; 00418bc3
    POP EBX                             ; 00418bc4
    RET                                 ; 00418bc5
    PUSH 0x1                            ; 00418bc6
        ;   Label: LAB_00418bc6
    PUSH 0x7                            ; 00418bc8
    PUSH EDI                            ; 00418bca
    MOV dword ptr [EBX + 0x243c],0x0    ; 00418bcb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00418bd5
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00418bda
    JMP 0x00418bb4                      ; 00418bdd
        ;   XREF to: 00418bb4 (UNCONDITIONAL_JUMP)  ; LAB_00418bb4
    PUSH 0x1                            ; 00418bdf
        ;   Label: LAB_00418bdf
    PUSH 0x6                            ; 00418be1
    LEA EAX,[EBX + 0x158]               ; 00418be3
    PUSH EAX                            ; 00418be9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00418bea
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00418bef
    MOV EDX,dword ptr [ESP + 0x14]      ; 00418bf2
    PUSH EDX                            ; 00418bf6
    PUSH EBX                            ; 00418bf7
    CALL core_enemy.cpp_FUN_004a9f10    ; 00418bf8
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a9f10()
    ADD ESP,0x8                         ; 00418bfd
    POP EDI                             ; 00418c00
    POP ESI                             ; 00418c01
    POP EBX                             ; 00418c02
    RET                                 ; 00418c03


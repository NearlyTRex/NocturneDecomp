; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_spike.cpp_FUN_005b8e90()
;
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00652ecc
;   TerminatedCString s_Type_00652ef7
;   TerminatedCString s_State_00652f24
;   TerminatedCString s_Are_we_active_00652f2a
;   TerminatedCString s_Extend_distance_00652f38
;   TerminatedCString s_Start_cond_00652f48
;   TerminatedCString s_Stop_cond_00652f53
;   TerminatedCString s_Extend_cond_00652f5d
;   TerminatedCString s_Retract_cond_00652f69
;   TerminatedCString s_Extend_time_00652f76
;   TerminatedCString s_Retract_time_00652f82
;   TerminatedCString s_Extend_sound_00652f8f
;   TerminatedCString s_Retract_sound_00652f9c
;   TerminatedCString s_Period_00652faa
;   TerminatedCString s_Param_00652fb1
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_FUN_0040e640
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8e90
        ;   Label: core_spike.cpp_FUN_005b8e90
    PUSH ESI                            ; 005b8e91
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b8e92
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b8e96
    PUSH ESI                            ; 005b8e9a
    PUSH EBX                            ; 005b8e9b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 005b8e9c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005b8ea1
    PUSH 0x0                            ; 005b8ea4
    LEA EAX,[EBX + 0x158]               ; 005b8ea6
    PUSH EAX                            ; 005b8eac
    PUSH 0x652ecc                       ; 005b8ead | = "Model file (.kfm)"
    PUSH ESI                            ; 005b8eb2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 005b8eb3
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 005b8eb8
    LEA EAX,[EBX + 0x2d4]               ; 005b8ebb
    PUSH EAX                            ; 005b8ec1
    PUSH 0x684120                       ; 005b8ec2 | PTR_s_Periodic_00684120
    PUSH 0x3                            ; 005b8ec7
    PUSH 0x652ef7                       ; 005b8ec9 | = "Type"
    PUSH ESI                            ; 005b8ece
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 005b8ecf
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
    ADD ESP,0x14                        ; 005b8ed4
    LEA EAX,[EBX + 0x2d8]               ; 005b8ed7
    PUSH EAX                            ; 005b8edd
    PUSH 0x684138                       ; 005b8ede | PTR_s_Retracted_00684138
    PUSH 0x4                            ; 005b8ee3
    PUSH 0x652f24                       ; 005b8ee5 | = "State"
    PUSH ESI                            ; 005b8eea
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 005b8eeb
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
    ADD ESP,0x14                        ; 005b8ef0
    PUSH 0x0                            ; 005b8ef3
    LEA EAX,[EBX + 0x2dc]               ; 005b8ef5
    PUSH EAX                            ; 005b8efb
    PUSH 0x652f2a                       ; 005b8efc | = "Are we active"
    PUSH ESI                            ; 005b8f01
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0 ; 005b8f02
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1e0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 005b8f07
    PUSH 0x0                            ; 005b8f0a
    LEA EAX,[EBX + 0x2ec]               ; 005b8f0c
    PUSH EAX                            ; 005b8f12
    PUSH 0x652f38                       ; 005b8f13 | = "Extend distance"
    PUSH ESI                            ; 005b8f18
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 005b8f19
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 005b8f1e
    ADD ESP,0x10                        ; 005b8f24
    CMP EDX,0x2                         ; 005b8f27
    JZ 0x005b8ffa                       ; 005b8f2a
        ;   XREF to: 005b8ffa (CONDITIONAL_JUMP)  ; LAB_005b8ffa
    LEA EAX,[EBX + 0x2f0]               ; 005b8f30
    PUSH EAX                            ; 005b8f36
    PUSH 0x652f48                       ; 005b8f37 | = "Start cond"
    PUSH ESI                            ; 005b8f3c
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 005b8f3d
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 005b8f42
    LEA EAX,[EBX + 0x354]               ; 005b8f45
    PUSH EAX                            ; 005b8f4b
    PUSH 0x652f53                       ; 005b8f4c | = "Stop cond"
    PUSH ESI                            ; 005b8f51
        ;   Label: LAB_005b8f51
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 005b8f52
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 005b8f57
    PUSH 0x0                            ; 005b8f5a
    LEA EAX,[EBX + 0x480]               ; 005b8f5c
    PUSH EAX                            ; 005b8f62
    PUSH 0x652f76                       ; 005b8f63 | = "Extend time"
    PUSH ESI                            ; 005b8f68
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 005b8f69
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 005b8f6e
    PUSH 0x0                            ; 005b8f71
    LEA EAX,[EBX + 0x484]               ; 005b8f73
    PUSH EAX                            ; 005b8f79
    PUSH 0x652f82                       ; 005b8f7a | = "Retract time"
    PUSH ESI                            ; 005b8f7f
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 005b8f80
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 005b8f85
    LEA EAX,[EBX + 0x48c]               ; 005b8f88
    PUSH EAX                            ; 005b8f8e
    PUSH 0x652f8f                       ; 005b8f8f | = "Extend sound"
    PUSH ESI                            ; 005b8f94
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 005b8f95
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 005b8f9a
    LEA EAX,[EBX + 0x4f0]               ; 005b8f9d
    PUSH EAX                            ; 005b8fa3
    PUSH 0x652f9c                       ; 005b8fa4 | = "Retract sound"
    PUSH ESI                            ; 005b8fa9
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 005b8faa
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 005b8faf
    PUSH 0x0                            ; 005b8fb2
    LEA EAX,[EBX + 0x554]               ; 005b8fb4
    PUSH EAX                            ; 005b8fba
    PUSH 0x652faa                       ; 005b8fbb | = "Period"
    PUSH ESI                            ; 005b8fc0
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 005b8fc1
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 005b8fc6
    PUSH 0x0                            ; 005b8fc9
    LEA EAX,[EBX + 0x55c]               ; 005b8fcb
    PUSH EAX                            ; 005b8fd1
    PUSH 0x652fb1                       ; 005b8fd2 | = "Param"
    PUSH ESI                            ; 005b8fd7
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 005b8fd8
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 005b8fdd
    PUSH 0x0                            ; 005b8fe0
    ADD EBX,0x558                       ; 005b8fe2
    PUSH EBX                            ; 005b8fe8
    PUSH 0x652fb7                       ; 005b8fe9 | = "DamageStrength"
    PUSH ESI                            ; 005b8fee
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 005b8fef
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 005b8ff4
    POP ESI                             ; 005b8ff7
    POP EBX                             ; 005b8ff8
    RET                                 ; 005b8ff9
    LEA EAX,[EBX + 0x3b8]               ; 005b8ffa
        ;   Label: LAB_005b8ffa
    PUSH EAX                            ; 005b9000
    PUSH 0x652f5d                       ; 005b9001 | = "Extend cond"
    PUSH ESI                            ; 005b9006
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 005b9007
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 005b900c
    LEA EAX,[EBX + 0x41c]               ; 005b900f
    PUSH EAX                            ; 005b9015
    PUSH 0x652f69                       ; 005b9016 | = "Retract cond"
    JMP 0x005b8f51                      ; 005b901b
        ;   XREF to: 005b8f51 (UNCONDITIONAL_JUMP)  ; LAB_005b8f51


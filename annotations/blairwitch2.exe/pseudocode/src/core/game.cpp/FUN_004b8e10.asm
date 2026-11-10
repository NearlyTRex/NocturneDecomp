; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b8e10(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b90d0 at 004b9d3b
;
; Referenced Globals:
;   undefined4 s_CMeleeAxe_005d79f1+2
;   undefined1 DAT_005d79fd
;   undefined1 DAT_005d79fe
;   undefined1 DAT_005d79ff
;   undefined1 DAT_005d7a00
;   TerminatedCString s_CBoxActor_005d7a01
;   TerminatedCString s_Lantern_005d7a0b
;   TerminatedCString s_Lantern_kfm_005d7a13
;   TerminatedCString s_core_game_cpp_005d7a1f
;   TerminatedCString s_giveHeroWeapon_This_is_n_005d7a30
;   undefined4 DAT_00618170
;   undefined4 g_CBoxActorClassInfo.name_hash
;   undefined4 DAT_01cedef4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_createActorByName_FUN_0040c5a0
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_inv.cpp_FUN_004dadb0
;   core_main.c_FUN_004e4500
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8e10
        ;   Label: core_game.cpp_FUN_004b8e10
    PUSH ESI                            ; 004b8e11
    PUSH EDI                            ; 004b8e12
    PUSH EBP                            ; 004b8e13
    SUB ESP,0x4                         ; 004b8e14
    MOV EDX,dword ptr [ESP + 0x18]      ; 004b8e17
    PUSH EDX                            ; 004b8e1b
    CALL core_actor.cpp_createActorByName_FUN_0040c5a0 ; 004b8e1c
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c5a0()
    ADD ESP,0x4                         ; 004b8e21
    PUSH 0x5d79f3                       ; 004b8e24 | s_CMeleeAxe_005d79f1+2
    PUSH EAX                            ; 004b8e29
    MOV EDI,EAX                         ; 004b8e2a
    MOV EBP,EAX                         ; 004b8e2c
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004b8e2e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004b8e33
    TEST EAX,EAX                        ; 004b8e36
    JZ 0x004b8ef1                       ; 004b8e38
        ;   XREF to: 004b8ef1 (CONDITIONAL_JUMP)  ; LAB_004b8ef1
    MOV ESI,0x5d79fd                    ; 004b8e3e | DAT_005d79fd
    PUSH EDI                            ; 004b8e43
    MOV AL,byte ptr [ESI]               ; 004b8e44 | DAT_005d79fd | DAT_005d79ff
        ;   Label: LAB_004b8e44
    MOV byte ptr [EDI],AL               ; 004b8e46
    CMP AL,0x0                          ; 004b8e48
    JZ 0x004b8e5c                       ; 004b8e4a
        ;   XREF to: 004b8e5c (CONDITIONAL_JUMP)  ; LAB_004b8e5c
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8e4c | DAT_005d79fe | DAT_005d7a00
    ADD ESI,0x2                         ; 004b8e4f
    MOV byte ptr [EDI + 0x1],AL         ; 004b8e52
    ADD EDI,0x2                         ; 004b8e55
    CMP AL,0x0                          ; 004b8e58
    JNZ 0x004b8e44                      ; 004b8e5a
        ;   XREF to: 004b8e44 (CONDITIONAL_JUMP)  ; LAB_004b8e44
    POP EDI                             ; 004b8e5c
        ;   Label: LAB_004b8e5c
    PUSH EBP                            ; 004b8e5d
        ;   Label: LAB_004b8e5d
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004b8e5e
    CALL dword ptr [EAX + 0x8]          ; 004b8e64
    ADD ESP,0x4                         ; 004b8e67
    MOV EAX,[0x02661f38]                ; 004b8e6a | g_CWeaponClassInfo.name_hash
    PUSH EAX                            ; 004b8e6f
    PUSH EBP                            ; 004b8e70
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004b8e71
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004b8e76
    MOV EBX,EAX                         ; 004b8e79
    TEST EAX,EAX                        ; 004b8e7b
    JNZ 0x004b8ea2                      ; 004b8e7d
        ;   XREF to: 004b8ea2 (CONDITIONAL_JUMP)  ; LAB_004b8ea2
    MOV EDX,0x5d7a1f                    ; 004b8e7f | = "..\\core\\game.cpp"
    MOV ECX,0xb63                       ; 004b8e84
    PUSH 0x5d7a30                       ; 004b8e89 | = "giveHeroWeapon - This is not a weapon"
    MOV dword ptr [0x01d046a0],EDX      ; 004b8e8e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004b8e94 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004b8e9a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004b8e9f
    MOV dword ptr [EBX + 0x6c4],0x1f4   ; 004b8ea2
        ;   Label: LAB_004b8ea2
    MOV EBX,dword ptr [0x01cedef4]      ; 004b8eac | DAT_01cedef4
    MOV ESI,dword ptr [EBX*0x4 + 0x1cedee4] ; 004b8eb2
    PUSH ESI                            ; 004b8eb9
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004b8eba
    PUSH EBP                            ; 004b8ec0
    CALL dword ptr [EAX + 0x90]         ; 004b8ec1
    ADD ESP,0x8                         ; 004b8ec7
    PUSH 0x0                            ; 004b8eca
    MOV EAX,[0x01cedef4]                ; 004b8ecc | DAT_01cedef4
    PUSH 0x1                            ; 004b8ed1
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b8ed3
    PUSH EBP                            ; 004b8eda
    ADD EAX,0x2437c                     ; 004b8edb
        ;   Label: LAB_004b8edb
    PUSH EAX                            ; 004b8ee0
    CALL core_inv.cpp_FUN_004dadb0      ; 004b8ee1
        ;   XREF to: 004dadb0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dadb0()
    ADD ESP,0x10                        ; 004b8ee6
    ADD ESP,0x4                         ; 004b8ee9
    POP EBP                             ; 004b8eec
    POP EDI                             ; 004b8eed
    POP ESI                             ; 004b8eee
    POP EBX                             ; 004b8eef
    RET                                 ; 004b8ef0
    PUSH 0x5d7a01                       ; 004b8ef1 | = "CBoxActor"
        ;   Label: LAB_004b8ef1
    PUSH EDI                            ; 004b8ef6
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004b8ef7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004b8efc
    TEST EAX,EAX                        ; 004b8eff
    JZ 0x004b8fb0                       ; 004b8f01
        ;   XREF to: 004b8fb0 (CONDITIONAL_JUMP)  ; LAB_004b8fb0
    MOV EBX,dword ptr [0x007bc9e8]      ; 004b8f07 | g_CBoxActorClassInfo.name_hash
    PUSH EBX                            ; 004b8f0d
    PUSH EDI                            ; 004b8f0e
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004b8f0f
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004b8f14
    MOV EBX,EAX                         ; 004b8f17
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004b8f19
    MOV dword ptr [ESP],EAX             ; 004b8f1d
    TEST ESI,ESI                        ; 004b8f20
    JZ 0x004b8e5d                       ; 004b8f22
        ;   XREF to: 004b8e5d (CONDITIONAL_JUMP)  ; LAB_004b8e5d
    MOV EDI,EAX                         ; 004b8f28
    PUSH EDI                            ; 004b8f2a
    MOV AL,byte ptr [ESI]               ; 004b8f2b
        ;   Label: LAB_004b8f2b
    MOV byte ptr [EDI],AL               ; 004b8f2d
    CMP AL,0x0                          ; 004b8f2f
    JZ 0x004b8f43                       ; 004b8f31
        ;   XREF to: 004b8f43 (CONDITIONAL_JUMP)  ; LAB_004b8f43
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8f33
    ADD ESI,0x2                         ; 004b8f36
    MOV byte ptr [EDI + 0x1],AL         ; 004b8f39
    ADD EDI,0x2                         ; 004b8f3c
    CMP AL,0x0                          ; 004b8f3f
    JNZ 0x004b8f2b                      ; 004b8f41
        ;   XREF to: 004b8f2b (CONDITIONAL_JUMP)  ; LAB_004b8f2b
    POP EDI                             ; 004b8f43
        ;   Label: LAB_004b8f43
    PUSH EBX                            ; 004b8f44
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004b8f45
    CALL dword ptr [EAX + 0x8]          ; 004b8f4b
    ADD ESP,0x4                         ; 004b8f4e
    PUSH 0x5d7a0b                       ; 004b8f51 | = "Lantern"
    MOV EDI,dword ptr [ESP + 0x20]      ; 004b8f56
    PUSH EDI                            ; 004b8f5a
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004b8f5b
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b8f60
    TEST EAX,EAX                        ; 004b8f63
    JNZ 0x004b8f7b                      ; 004b8f65
        ;   XREF to: 004b8f7b (CONDITIONAL_JUMP)  ; LAB_004b8f7b
    PUSH 0x5d7a13                       ; 004b8f67 | = "Lantern.kfm"
    ADD EBX,0x2b4                       ; 004b8f6c
    PUSH EBX                            ; 004b8f72
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 004b8f73
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004b8f78
    MOV EAX,dword ptr [ESP]             ; 004b8f7b
        ;   Label: LAB_004b8f7b
    ADD EAX,0x2b4                       ; 004b8f7e
    PUSH EAX                            ; 004b8f83
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 004b8f84
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004b8f89
    PUSH 0x0                            ; 004b8f8c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b8f8e
    PUSH 0x1                            ; 004b8f92
    MOV dword ptr [EAX + 0x470],0x2     ; 004b8f94
    PUSH EAX                            ; 004b8f9e
    MOV EAX,[0x01cedef4]                ; 004b8f9f | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b8fa4
    JMP 0x004b8edb                      ; 004b8fab
        ;   XREF to: 004b8edb (UNCONDITIONAL_JUMP)  ; LAB_004b8edb
    PUSH EDI                            ; 004b8fb0
        ;   Label: LAB_004b8fb0
    MOV ECX,dword ptr [0x00618170]      ; 004b8fb1 | DAT_00618170
    PUSH ECX                            ; 004b8fb7
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0 ; 004b8fb8
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004fcda0(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004b8fbd
    JMP 0x004b8e5d                      ; 004b8fc0
        ;   XREF to: 004b8e5d (UNCONDITIONAL_JUMP)  ; LAB_004b8e5d


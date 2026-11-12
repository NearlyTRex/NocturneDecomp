; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_hero_cpp_FUN_004d4be0(int param_1)
;
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_createOneHero_FUN_004f7710 at 004f7853
;
; Referenced Globals:
;   TerminatedCString s_core_hero_cpp_005c50f1
;   TerminatedCString s_CHeroPlaceholder_createH_005c5102
;   undefined4 DAT_00600530
;   undefined4 g_CHeroClassInfo.name_hash
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_main.c_FUN_004e4330
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4be0
        ;   Label: core_hero.cpp_FUN_004d4be0
    PUSH ESI                            ; 004d4be1
    PUSH EBP                            ; 004d4be2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004d4be3
    MOV EDX,dword ptr [0x01d5ba70]      ; 004d4be7 | g_CHeroClassInfo.name_hash
    PUSH EDX                            ; 004d4bed
    LEA EAX,[ESI + 0x15c]               ; 004d4bee
    PUSH EAX                            ; 004d4bf4
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 004d4bf5
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c4f0(char * class_name)
    ADD ESP,0x4                         ; 004d4bfa
    PUSH EAX                            ; 004d4bfd
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d4bfe
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d4c03
    MOV EBX,EAX                         ; 004d4c06
    TEST EAX,EAX                        ; 004d4c08
    JNZ 0x004d4c31                      ; 004d4c0a
        ;   XREF to: 004d4c31 (CONDITIONAL_JUMP)  ; LAB_004d4c31
    PUSH EDI                            ; 004d4c0c
    MOV ECX,0x5c50f1                    ; 004d4c0d | = "..\\core\\hero.cpp"
    MOV EDI,0x75c                       ; 004d4c12
    PUSH 0x5c5102                       ; 004d4c17 | = "CHeroPlaceholder::createHero - failed."
    MOV dword ptr [0x01d71de0],ECX      ; 004d4c1c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004d4c22 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004d4c28
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004d4c2d
    POP EDI                             ; 004d4c30
    PUSH EBX                            ; 004d4c31
        ;   Label: LAB_004d4c31
    MOV EBP,dword ptr [0x00600530]      ; 004d4c32 | DAT_00600530
    PUSH EBP                            ; 004d4c38
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530 ; 004d4c39
        ;   XREF to: 004f7530 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530(CDemonMission * this_ptr, CDemonActor * actor)
    LEA EAX,[ESI + 0x20]                ; 004d4c3e
    LEA EDX,[EBX + 0x20]                ; 004d4c41
    MOV ECX,dword ptr [EAX]             ; 004d4c44
    MOV dword ptr [EDX],ECX             ; 004d4c46
    MOV ECX,dword ptr [EAX + 0x4]       ; 004d4c48
    MOV dword ptr [EDX + 0x4],ECX       ; 004d4c4b
    MOV ECX,dword ptr [EAX + 0x8]       ; 004d4c4e
    MOV dword ptr [EDX + 0x8],ECX       ; 004d4c51
    MOV EAX,dword ptr [EAX + 0xc]       ; 004d4c54
    MOV dword ptr [EDX + 0xc],EAX       ; 004d4c57
    LEA EDX,[EBX + 0x30]                ; 004d4c5a
    LEA EAX,[ESI + 0x30]                ; 004d4c5d
    ADD ESP,0x8                         ; 004d4c60
    CMP EDX,EAX                         ; 004d4c63
    JZ 0x004d4c77                       ; 004d4c65
        ;   XREF to: 004d4c77 (CONDITIONAL_JUMP)  ; LAB_004d4c77
    MOV ECX,dword ptr [EAX]             ; 004d4c67
    MOV dword ptr [EDX],ECX             ; 004d4c69
    MOV ECX,dword ptr [EAX + 0x4]       ; 004d4c6b
    MOV dword ptr [EDX + 0x4],ECX       ; 004d4c6e
    MOV ECX,dword ptr [EAX + 0x8]       ; 004d4c71
    MOV dword ptr [EDX + 0x8],ECX       ; 004d4c74
    PUSH EBX                            ; 004d4c77
        ;   Label: LAB_004d4c77
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 004d4c78
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d4c7d
    MOV EAX,EBX                         ; 004d4c80
    POP EBP                             ; 004d4c82
    POP ESI                             ; 004d4c83
    POP EBX                             ; 004d4c84
    RET                                 ; 004d4c85


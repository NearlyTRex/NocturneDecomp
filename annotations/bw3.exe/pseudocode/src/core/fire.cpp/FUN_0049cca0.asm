; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0049cca0(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
;
; XREF[1]:
;   core_fire.cpp_FUN_0049d090 at 0049d4ce
;
; Referenced Globals:
;   TerminatedCString s_CBugs_005c06c0
;   undefined4 DAT_00600530
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CBugsClassInfo.name_hash
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 DAT_01d5ba14
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_createActorByName_FUN_0040c4f0
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049cca0
        ;   Label: core_fire.cpp_FUN_0049cca0
    PUSH ESI                            ; 0049cca1
    PUSH EDI                            ; 0049cca2
    PUSH EBP                            ; 0049cca3
    MOV EBP,ESP                         ; 0049cca4
    SUB ESP,0x48                        ; 0049cca6
    AND ESP,0xfffffff8                  ; 0049cca9
    MOV EDI,dword ptr [EBP + 0x14]      ; 0049ccac
    PUSH 0x5c06c0                       ; 0049ccaf | = "CBugs"
    CALL core_actor.cpp_createActorByName_FUN_0040c4f0 ; 0049ccb4
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_createActorByName_FUN_0040c4f0(char * class_name)
    ADD ESP,0x4                         ; 0049ccb9
    PUSH EAX                            ; 0049ccbc
    MOV EDX,dword ptr [0x00600530]      ; 0049ccbd | DAT_00600530
    MOV EBX,EAX                         ; 0049ccc3
    PUSH EDX                            ; 0049ccc5
    MOV dword ptr [ESP + 0x2c],EAX      ; 0049ccc6
    LEA ESI,[EBX + 0x20]                ; 0049ccca
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530 ; 0049cccd
        ;   XREF to: 004f7530 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530(CDemonMission * this_ptr, CDemonActor * actor)
    FLD float ptr [EDI]                 ; 0049ccd2
    MOV EAX,[0x01d5ba14]                ; 0049ccd4 | DAT_01d5ba14
    ADD ESP,0x8                         ; 0049ccd9
    FSTP float ptr [ESI]                ; 0049ccdc
    MOV EDX,dword ptr [EDI + 0x4]       ; 0049ccde
    MOV dword ptr [ESI + 0x4],EDX       ; 0049cce1
    MOV EDX,dword ptr [EDI + 0x8]       ; 0049cce4
    MOV dword ptr [ESI + 0x8],EDX       ; 0049cce7
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0049ccea
    PUSH 0x0                            ; 0049ccf1
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0049ccf3
    PUSH 0x3f000000                     ; 0049ccf6
    MOV dword ptr [EBX + 0x2c],EAX      ; 0049ccfb
    PUSH EBX                            ; 0049ccfe
    MOV EAX,dword ptr [EBX + 0x154]     ; 0049ccff
    CALL dword ptr [EAX + 0x40]         ; 0049cd05
    MOV dword ptr [ESP + 0x50],EAX      ; 0049cd08
    FLD float ptr [ESP + 0x50]          ; 0049cd0c
    ADD ESP,0xc                         ; 0049cd10
    MOV EAX,dword ptr [EBX + 0x154]     ; 0049cd13
    PUSH EBX                            ; 0049cd19
    FSTP float ptr [EBX + 0x24]         ; 0049cd1a
    CALL dword ptr [EAX]                ; 0049cd1d
    ADD ESP,0x4                         ; 0049cd1f
    PUSH EBX                            ; 0049cd22
    MOV ECX,dword ptr [0x00600530]      ; 0049cd23 | DAT_00600530
    PUSH ECX                            ; 0049cd29
    MOV EBX,0x41a00000                  ; 0049cd2a
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930 ; 0049cd2f
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0049cd34
    XOR EDI,EDI                         ; 0049cd37
    MOV dword ptr [ESP + 0x2c],EBX      ; 0049cd39
    MOV dword ptr [ESP + 0x28],EDI      ; 0049cd3d
    MOV dword ptr [ESP + 0x3c],EDI      ; 0049cd41
    MOV dword ptr [ESP + 0x38],ESI      ; 0049cd45
    MOV dword ptr [ESP + 0x34],EDI      ; 0049cd49
        ;   Label: LAB_0049cd49
    MOV EAX,[0x00603b28]                ; 0049cd4d | g_CDemonSetPtr | g_CDemonSetInstance
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0049cd52
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0049cd56 | g_CDemonSetInstance.actor_count
    JL 0x0049cd71                       ; 0049cd5c
        ;   XREF to: 0049cd71 (CONDITIONAL_JUMP)  ; LAB_0049cd71
    MOV EBX,dword ptr [ESP + 0x28]      ; 0049cd5e
    TEST EBX,EBX                        ; 0049cd62
    JNZ 0x0049ce7c                      ; 0049cd64
        ;   XREF to: 0049ce7c (CONDITIONAL_JUMP)  ; LAB_0049ce7c
    MOV ESP,EBP                         ; 0049cd6a
    POP EBP                             ; 0049cd6c
    POP EDI                             ; 0049cd6d
    POP ESI                             ; 0049cd6e
    POP EBX                             ; 0049cd6f
    RET                                 ; 0049cd70
    MOV EDI,dword ptr [ESP + 0x34]      ; 0049cd71
        ;   Label: LAB_0049cd71
    MOV ESI,dword ptr [0x007e2cec]      ; 0049cd75 | g_CCharacterClassInfo.name_hash
    ADD EAX,EDI                         ; 0049cd7b
    PUSH ESI                            ; 0049cd7d
    MOV EDX,dword ptr [EAX + 0x14d168]  ; 0049cd7e | g_CDemonSetInstance.actors[0]
    PUSH EDX                            ; 0049cd84
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0049cd85
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0049cd8a
    MOV EBX,EAX                         ; 0049cd8d
    MOV dword ptr [ESP + 0x40],EAX      ; 0049cd8f
    TEST EAX,EAX                        ; 0049cd93
    JZ 0x0049ce4e                       ; 0049cd95
        ;   XREF to: 0049ce4e (CONDITIONAL_JUMP)  ; LAB_0049ce4e
    PUSH EBX                            ; 0049cd9b
    MOV EAX,dword ptr [EAX + 0x154]     ; 0049cd9c
    CALL dword ptr [EAX + 0x10c]        ; 0049cda2
    ADD ESP,0x4                         ; 0049cda8
    TEST EAX,EAX                        ; 0049cdab
    JNZ 0x0049ce4e                      ; 0049cdad
        ;   XREF to: 0049ce4e (CONDITIONAL_JUMP)  ; LAB_0049ce4e
    MOV ECX,dword ptr [0x01c5bc48]      ; 0049cdb3 | g_CEnemyClassInfo.name_hash
    PUSH ECX                            ; 0049cdb9
    PUSH EBX                            ; 0049cdba
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0049cdbb
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0049cdc0
    TEST EAX,EAX                        ; 0049cdc3
    JZ 0x0049ce4e                       ; 0049cdc5
        ;   XREF to: 0049ce4e (CONDITIONAL_JUMP)  ; LAB_0049ce4e
    MOV ESI,dword ptr [0x007e2a14]      ; 0049cdcb | g_CBugsClassInfo.name_hash
    PUSH ESI                            ; 0049cdd1
    PUSH EBX                            ; 0049cdd2
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0049cdd3
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0049cdd8
    TEST EAX,EAX                        ; 0049cddb
    JNZ 0x0049ce4e                      ; 0049cddd
        ;   XREF to: 0049ce4e (CONDITIONAL_JUMP)  ; LAB_0049ce4e
    MOV EAX,dword ptr [ESP + 0x38]      ; 0049cddf
    MOV EDI,ESP                         ; 0049cde3
    LEA ESI,[ESP + 0xc]                 ; 0049cde5
    FLD float ptr [EAX + 0x4]           ; 0049cde9
    FLD float ptr [EAX + 0x8]           ; 0049cdec
    FLD float ptr [EAX]                 ; 0049cdef
    LEA EAX,[ESP + 0x18]                ; 0049cdf1
    FSUB float ptr [EBX + 0x20]         ; 0049cdf5
    FXCH ST2                            ; 0049cdf8
    FSUB float ptr [EBX + 0x24]         ; 0049cdfa
    FXCH                                ; 0049cdfd
    FSUB float ptr [EBX + 0x28]         ; 0049cdff
    FXCH ST2                            ; 0049ce02
    FSTP float ptr [ESP + 0xc]          ; 0049ce04
    FSTP float ptr [ESP + 0x10]         ; 0049ce08
    FSTP float ptr [ESP + 0x14]         ; 0049ce0c
    MOV EBX,ESP                         ; 0049ce10
    MOVSD ES:EDI,ESI                    ; 0049ce12
    MOVSD ES:EDI,ESI                    ; 0049ce13
    MOVSD ES:EDI,ESI                    ; 0049ce14
    CMP EAX,EBX                         ; 0049ce15
    JNZ 0x0049ce63                      ; 0049ce17
        ;   XREF to: 0049ce63 (CONDITIONAL_JUMP)  ; LAB_0049ce63
    FLD float ptr [ESP + 0x1c]          ; 0049ce19
        ;   Label: LAB_0049ce19
    FMUL ST0                            ; 0049ce1d
    FLD float ptr [ESP + 0x18]          ; 0049ce1f
    FMUL ST0                            ; 0049ce23
    FADDP                               ; 0049ce25
    FLD float ptr [ESP + 0x20]          ; 0049ce27
    FMUL ST0                            ; 0049ce2b
    FADDP                               ; 0049ce2d
    FSQRT                               ; 0049ce2f
    FST float ptr [ESP + 0x30]          ; 0049ce31
    FCOMP float ptr [ESP + 0x2c]        ; 0049ce35
    FNSTSW AX                           ; 0049ce39
    SAHF                                ; 0049ce3b
    JNC 0x0049ce4e                      ; 0049ce3c
        ;   XREF to: 0049ce4e (CONDITIONAL_JUMP)  ; LAB_0049ce4e
    MOV EAX,dword ptr [ESP + 0x40]      ; 0049ce3e
    MOV dword ptr [ESP + 0x28],EAX      ; 0049ce42
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049ce46
    MOV dword ptr [ESP + 0x2c],EAX      ; 0049ce4a
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0049ce4e
        ;   Label: LAB_0049ce4e
    MOV EDI,dword ptr [ESP + 0x34]      ; 0049ce52
    INC EAX                             ; 0049ce56
    ADD EDI,0x4                         ; 0049ce57
    MOV dword ptr [ESP + 0x3c],EAX      ; 0049ce5a
    JMP 0x0049cd49                      ; 0049ce5e
        ;   XREF to: 0049cd49 (UNCONDITIONAL_JUMP)  ; LAB_0049cd49
    MOV EAX,dword ptr [ESP]             ; 0049ce63
        ;   Label: LAB_0049ce63
    MOV dword ptr [ESP + 0x18],EAX      ; 0049ce66
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049ce6a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049ce6e
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049ce72
    MOV dword ptr [ESP + 0x20],EAX      ; 0049ce76
    JMP 0x0049ce19                      ; 0049ce7a
        ;   XREF to: 0049ce19 (UNCONDITIONAL_JUMP)  ; LAB_0049ce19
    MOV EAX,EBX                         ; 0049ce7c
        ;   Label: LAB_0049ce7c
    MOV EBX,dword ptr [ESP + 0x24]      ; 0049ce7e
    MOV dword ptr [EBX + 0xcde4],EAX    ; 0049ce82
    MOV ESP,EBP                         ; 0049ce88
    POP EBP                             ; 0049ce8a
    POP EDI                             ; 0049ce8b
    POP ESI                             ; 0049ce8c
    POP EBX                             ; 0049ce8d
    RET                                 ; 0049ce8e


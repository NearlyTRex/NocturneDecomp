; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tvbat_cpp_CTVBat_archive_FUN_0054b310(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_homePos_00596ee5
;   TerminatedCString s_modelName_00596eed
;   TerminatedCString s_speed_00596ef7
;   TerminatedCString s_maxDistance_00596efd
;   TerminatedCString s_maxHeight_00596f09
;   TerminatedCString s_rotSpeed_00596f13
;   TerminatedCString s_moveSpeed_00596f1c
;   TerminatedCString s_followOrders_00596f26
;   TerminatedCString s_state_00596f33
;   TerminatedCString s_periodicSoundTimerMin_00596f39
;   TerminatedCString s_periodicSoundTimerMax_00596f4f
;   int INT_005c1174 = 0x5
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b310
        ;   Label: core_tvbat.cpp_CTVBat_archive_FUN_0054b310
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054b311
    CMP dword ptr [0x005c1174],0x3      ; 0054b315 | INT_005c1174
    JL 0x0054b3fe                       ; 0054b31c
        ;   XREF to: 0054b3fe (CONDITIONAL_JUMP)  ; LAB_0054b3fe
    PUSH EBX                            ; 0054b322
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 0054b323
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004796c0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0054b328
        ;   Label: LAB_0054b328
    PUSH 0x596ee5                       ; 0054b32b | = "homePos"
    LEA EAX,[EBX + 0xbeac]              ; 0054b330
    PUSH EAX                            ; 0054b336
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 0054b337
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040c450(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054b33c
    PUSH 0x596eed                       ; 0054b33f | = "modelName"
    LEA EAX,[EBX + 0xbd28]              ; 0054b344
    PUSH EAX                            ; 0054b34a
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 0054b34b
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance * model_ptr, char * property_name)
    MOV ECX,dword ptr [0x005c1174]      ; 0054b350 | INT_005c1174
    ADD ESP,0x8                         ; 0054b356
    CMP ECX,0x2                         ; 0054b359
    JL 0x0054b3d6                       ; 0054b35c
        ;   XREF to: 0054b3d6 (CONDITIONAL_JUMP)  ; LAB_0054b3d6
    PUSH 0x596ef7                       ; 0054b35e | = "speed"
    LEA EAX,[EBX + 0xbea4]              ; 0054b363
    PUSH EAX                            ; 0054b369
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054b36a
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054b36f
    PUSH 0x596efd                       ; 0054b372 | = "maxDistance"
    LEA EAX,[EBX + 0xbeb8]              ; 0054b377
    PUSH EAX                            ; 0054b37d
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054b37e
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054b383
    PUSH 0x596f09                       ; 0054b386 | = "maxHeight"
    LEA EAX,[EBX + 0xbebc]              ; 0054b38b
    PUSH EAX                            ; 0054b391
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054b392
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054b397
    PUSH 0x596f13                       ; 0054b39a | = "rotSpeed"
    LEA EAX,[EBX + 0xbec0]              ; 0054b39f
    PUSH EAX                            ; 0054b3a5
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054b3a6
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054b3ab
    PUSH 0x596f1c                       ; 0054b3ae | = "moveSpeed"
    LEA EAX,[EBX + 0xbec4]              ; 0054b3b3
    PUSH EAX                            ; 0054b3b9
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054b3ba
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054b3bf
    PUSH 0x596f26                       ; 0054b3c2 | = "followOrders"
    LEA EAX,[EBX + 0xbecc]              ; 0054b3c7
    PUSH EAX                            ; 0054b3cd
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0054b3ce
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054b3d3
    CMP dword ptr [0x005c1174],0x4      ; 0054b3d6 | INT_005c1174
        ;   Label: LAB_0054b3d6
    JL 0x0054b409                       ; 0054b3dd
        ;   XREF to: 0054b409 (CONDITIONAL_JUMP)  ; LAB_0054b409
    PUSH 0x596f33                       ; 0054b3df | = "state"
    LEA EAX,[EBX + 0xbee0]              ; 0054b3e4
    PUSH EAX                            ; 0054b3ea
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0054b3eb
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054b3f0
    CMP dword ptr [0x005c1174],0x5      ; 0054b3f3 | INT_005c1174
    JGE 0x0054b41e                      ; 0054b3fa
        ;   XREF to: 0054b41e (CONDITIONAL_JUMP)  ; LAB_0054b41e
    POP EBX                             ; 0054b3fc
    RET                                 ; 0054b3fd
    PUSH EBX                            ; 0054b3fe
        ;   Label: LAB_0054b3fe
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 0054b3ff
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    JMP 0x0054b328                      ; 0054b404
        ;   XREF to: 0054b328 (UNCONDITIONAL_JUMP)  ; LAB_0054b328
    MOV dword ptr [EBX + 0xbee0],0x0    ; 0054b409
        ;   Label: LAB_0054b409
    CMP dword ptr [0x005c1174],0x5      ; 0054b413 | INT_005c1174
    JGE 0x0054b41e                      ; 0054b41a
        ;   XREF to: 0054b41e (CONDITIONAL_JUMP)  ; LAB_0054b41e
    POP EBX                             ; 0054b41c
    RET                                 ; 0054b41d
    PUSH 0x0                            ; 0054b41e
        ;   Label: LAB_0054b41e
    LEA EAX,[EBX + 0xbee4]              ; 0054b420
    PUSH EAX                            ; 0054b426
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0054b427
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0054b42c
    PUSH 0x596f39                       ; 0054b42f | = "periodicSoundTimerMin"
    LEA EAX,[EBX + 0xbf48]              ; 0054b434
    PUSH EAX                            ; 0054b43a
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054b43b
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054b440
    PUSH 0x596f4f                       ; 0054b443 | = "periodicSoundTimerMax"
    ADD EBX,0xbf4c                      ; 0054b448
    PUSH EBX                            ; 0054b44e
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054b44f
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0054b454
    POP EBX                             ; 0054b457
    RET                                 ; 0054b458


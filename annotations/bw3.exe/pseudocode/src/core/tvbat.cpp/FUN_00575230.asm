; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tvbat_cpp_FUN_00575230(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 s_homePos_005d6f2e+1
;   TerminatedCString s_modelName_005d6f37
;   TerminatedCString s_speed_005d6f41
;   TerminatedCString s_maxDistance_005d6f47
;   TerminatedCString s_maxHeight_005d6f53
;   TerminatedCString s_rotSpeed_005d6f5d
;   TerminatedCString s_moveSpeed_005d6f66
;   TerminatedCString s_followOrders_005d6f70
;   TerminatedCString s_state_005d6f7d
;   TerminatedCString s_periodicSoundTimerMin_005d6f83
;   TerminatedCString s_periodicSoundTimerMax_005d6f99
;   int g_CTVBatClassVersion = 0x5
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;   core_enemy.cpp_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575230
        ;   Label: core_tvbat.cpp_FUN_00575230
    MOV EBX,dword ptr [ESP + 0x8]       ; 00575231
    CMP dword ptr [0x00606ae4],0x3      ; 00575235 | g_CTVBatClassVersion
    JL 0x0057531e                       ; 0057523c
        ;   XREF to: 0057531e (CONDITIONAL_JUMP)  ; LAB_0057531e
    PUSH EBX                            ; 00575242
    CALL core_enemy.cpp_FUN_00489120    ; 00575243
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489120()
    ADD ESP,0x4                         ; 00575248
        ;   Label: LAB_00575248
    PUSH 0x5d6f2f                       ; 0057524b | s_homePos_005d6f2e+1
    LEA EAX,[EBX + 0xd1dc]              ; 00575250
    PUSH EAX                            ; 00575256
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 00575257
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 0057525c
    PUSH 0x5d6f37                       ; 0057525f | = "modelName"
    LEA EAX,[EBX + 0xd058]              ; 00575264
    PUSH EAX                            ; 0057526a
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 0057526b
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0()
    MOV ECX,dword ptr [0x00606ae4]      ; 00575270 | g_CTVBatClassVersion
    ADD ESP,0x8                         ; 00575276
    CMP ECX,0x2                         ; 00575279
    JL 0x005752f6                       ; 0057527c
        ;   XREF to: 005752f6 (CONDITIONAL_JUMP)  ; LAB_005752f6
    PUSH 0x5d6f41                       ; 0057527e | = "speed"
    LEA EAX,[EBX + 0xd1d4]              ; 00575283
    PUSH EAX                            ; 00575289
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0057528a
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0057528f
    PUSH 0x5d6f47                       ; 00575292 | = "maxDistance"
    LEA EAX,[EBX + 0xd1e8]              ; 00575297
    PUSH EAX                            ; 0057529d
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0057529e
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 005752a3
    PUSH 0x5d6f53                       ; 005752a6 | = "maxHeight"
    LEA EAX,[EBX + 0xd1ec]              ; 005752ab
    PUSH EAX                            ; 005752b1
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 005752b2
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 005752b7
    PUSH 0x5d6f5d                       ; 005752ba | = "rotSpeed"
    LEA EAX,[EBX + 0xd1f0]              ; 005752bf
    PUSH EAX                            ; 005752c5
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 005752c6
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 005752cb
    PUSH 0x5d6f66                       ; 005752ce | = "moveSpeed"
    LEA EAX,[EBX + 0xd1f4]              ; 005752d3
    PUSH EAX                            ; 005752d9
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 005752da
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 005752df
    PUSH 0x5d6f70                       ; 005752e2 | = "followOrders"
    LEA EAX,[EBX + 0xd1fc]              ; 005752e7
    PUSH EAX                            ; 005752ed
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 005752ee
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005752f3
    CMP dword ptr [0x00606ae4],0x4      ; 005752f6 | g_CTVBatClassVersion
        ;   Label: LAB_005752f6
    JL 0x00575329                       ; 005752fd
        ;   XREF to: 00575329 (CONDITIONAL_JUMP)  ; LAB_00575329
    PUSH 0x5d6f7d                       ; 005752ff | = "state"
    LEA EAX,[EBX + 0xd210]              ; 00575304
    PUSH EAX                            ; 0057530a
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0057530b
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00575310
    CMP dword ptr [0x00606ae4],0x5      ; 00575313 | g_CTVBatClassVersion
    JGE 0x0057533e                      ; 0057531a
        ;   XREF to: 0057533e (CONDITIONAL_JUMP)  ; LAB_0057533e
    POP EBX                             ; 0057531c
    RET                                 ; 0057531d
    PUSH EBX                            ; 0057531e
        ;   Label: LAB_0057531e
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 0057531f
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    JMP 0x00575248                      ; 00575324
        ;   XREF to: 00575248 (UNCONDITIONAL_JUMP)  ; LAB_00575248
    MOV dword ptr [EBX + 0xd210],0x0    ; 00575329
        ;   Label: LAB_00575329
    CMP dword ptr [0x00606ae4],0x5      ; 00575333 | g_CTVBatClassVersion
    JGE 0x0057533e                      ; 0057533a
        ;   XREF to: 0057533e (CONDITIONAL_JUMP)  ; LAB_0057533e
    POP EBX                             ; 0057533c
    RET                                 ; 0057533d
    PUSH 0x0                            ; 0057533e
        ;   Label: LAB_0057533e
    LEA EAX,[EBX + 0xd214]              ; 00575340
    PUSH EAX                            ; 00575346
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00575347
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0057534c
    PUSH 0x5d6f83                       ; 0057534f | = "periodicSoundTimerMin"
    LEA EAX,[EBX + 0xd278]              ; 00575354
    PUSH EAX                            ; 0057535a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0057535b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00575360
    PUSH 0x5d6f99                       ; 00575363 | = "periodicSoundTimerMax"
    ADD EBX,0xd27c                      ; 00575368
    PUSH EBX                            ; 0057536e
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0057536f
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00575374
    POP EBX                             ; 00575377
    RET                                 ; 00575378


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_flamecan.cpp_CFlameCan_load_FUN_004cb620()
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_0062a2f0
;   TerminatedCString s_onFire_0062a2fa
;   TerminatedCString s_timeToExplode_0062a301
;   TerminatedCString s_onFireCondition_0062a30f
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb620
        ;   Label: core_flamecan.cpp_CFlameCan_load_FUN_004cb620
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cb621
    PUSH EBX                            ; 004cb625
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 004cb626 | void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cb62b
    PUSH 0x62a2f0                       ; 004cb62e | = "modelName" | s_modelName_0062a2f0 = modelName
    LEA EAX,[EBX + 0x158]               ; 004cb633
    PUSH EAX                            ; 004cb639
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 004cb63a | void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004cb63f
    PUSH 0x62a2fa                       ; 004cb642 | = "onFire" | s_onFire_0062a2fa = onFire
    LEA EAX,[EBX + 0x2d4]               ; 004cb647
    PUSH EAX                            ; 004cb64d
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004cb64e | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004cb653
    PUSH 0x62a301                       ; 004cb656 | = "timeToExplode" | s_timeToExplode_0062a301 = timeToExplode
    LEA EAX,[EBX + 0x2d8]               ; 004cb65b
    PUSH EAX                            ; 004cb661
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 004cb662 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004cb667
    PUSH 0x62a30f                       ; 004cb66a | = "onFireCondition" | s_onFireCondition_0062a30f = onFireCondition
    ADD EBX,0x2dc                       ; 004cb66f
    PUSH EBX                            ; 004cb675
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 004cb676 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004cb67b
    POP EBX                             ; 004cb67e
    RET                                 ; 004cb67f


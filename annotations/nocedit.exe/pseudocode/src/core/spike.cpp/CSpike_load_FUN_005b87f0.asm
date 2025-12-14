; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_spike.cpp_CSpike_load_FUN_005b87f0()
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_00652e08
;   TerminatedCString s_spikeType_00652e12
;   TerminatedCString s_spikeState_00652e1c
;   TerminatedCString s_areWeActive_00652e27
;   TerminatedCString s_extendDistance_00652e33
;   TerminatedCString s_startEvent_00652e42
;   TerminatedCString s_stopEvent_00652e4d
;   TerminatedCString s_extendEvent_00652e57
;   TerminatedCString s_retractEvent_00652e63
;   TerminatedCString s_extendTime_00652e70
;   TerminatedCString s_retractTime_00652e7b
;   TerminatedCString s_extendSound_00652e87
;   TerminatedCString s_retractSound_00652e93
;   TerminatedCString s_period_00652ea0
;   TerminatedCString s_damageStrength_00652ea7
;   ... and 1 more
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

    PUSH EBX                            ; 005b87f0
        ;   Label: core_spike.cpp_CSpike_load_FUN_005b87f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b87f1
    PUSH EBX                            ; 005b87f5
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 005b87f6
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005b87fb
    PUSH 0x652e08                       ; 005b87fe | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 005b8803
    PUSH EAX                            ; 005b8809
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 005b880a
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005b880f
    PUSH 0x652e12                       ; 005b8812 | = "spikeType"
    LEA EAX,[EBX + 0x2d4]               ; 005b8817
    PUSH EAX                            ; 005b881d
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005b881e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005b8823
    PUSH 0x652e1c                       ; 005b8826 | = "spikeState"
    LEA EAX,[EBX + 0x2d8]               ; 005b882b
    PUSH EAX                            ; 005b8831
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005b8832
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005b8837
    PUSH 0x652e27                       ; 005b883a | = "areWeActive"
    LEA EAX,[EBX + 0x2dc]               ; 005b883f
    PUSH EAX                            ; 005b8845
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005b8846
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005b884b
    PUSH 0x652e33                       ; 005b884e | = "extendDistance"
    LEA EAX,[EBX + 0x2ec]               ; 005b8853
    PUSH EAX                            ; 005b8859
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005b885a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005b885f
    PUSH 0x652e42                       ; 005b8862 | = "startEvent"
    LEA EAX,[EBX + 0x2f0]               ; 005b8867
    PUSH EAX                            ; 005b886d
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005b886e
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005b8873
    PUSH 0x652e4d                       ; 005b8876 | = "stopEvent"
    LEA EAX,[EBX + 0x354]               ; 005b887b
    PUSH EAX                            ; 005b8881
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005b8882
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005b8887
    PUSH 0x652e57                       ; 005b888a | = "extendEvent"
    LEA EAX,[EBX + 0x3b8]               ; 005b888f
    PUSH EAX                            ; 005b8895
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005b8896
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005b889b
    PUSH 0x652e63                       ; 005b889e | = "retractEvent"
    LEA EAX,[EBX + 0x41c]               ; 005b88a3
    PUSH EAX                            ; 005b88a9
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005b88aa
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005b88af
    PUSH 0x652e70                       ; 005b88b2 | = "extendTime"
    LEA EAX,[EBX + 0x480]               ; 005b88b7
    PUSH EAX                            ; 005b88bd
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005b88be
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005b88c3
    PUSH 0x652e7b                       ; 005b88c6 | = "retractTime"
    LEA EAX,[EBX + 0x484]               ; 005b88cb
    PUSH EAX                            ; 005b88d1
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005b88d2
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005b88d7
    PUSH 0x652e87                       ; 005b88da | = "extendSound"
    LEA EAX,[EBX + 0x48c]               ; 005b88df
    PUSH EAX                            ; 005b88e5
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005b88e6
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005b88eb
    PUSH 0x652e93                       ; 005b88ee | = "retractSound"
    LEA EAX,[EBX + 0x4f0]               ; 005b88f3
    PUSH EAX                            ; 005b88f9
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005b88fa
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005b88ff
    PUSH 0x652ea0                       ; 005b8902 | = "period"
    LEA EAX,[EBX + 0x554]               ; 005b8907
    PUSH EAX                            ; 005b890d
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005b890e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005b8913
    PUSH 0x652ea7                       ; 005b8916 | = "damageStrength"
    LEA EAX,[EBX + 0x558]               ; 005b891b
    PUSH EAX                            ; 005b8921
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005b8922
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005b8927
    PUSH 0x652eb6                       ; 005b892a | = "param"
    ADD EBX,0x55c                       ; 005b892f
    PUSH EBX                            ; 005b8935
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005b8936
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005b893b
    POP EBX                             ; 005b893e
    RET                                 ; 005b893f


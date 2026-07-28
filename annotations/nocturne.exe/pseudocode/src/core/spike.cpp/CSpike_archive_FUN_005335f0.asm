; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spike_cpp_CSpike_archive_FUN_005335f0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_0059503a
;   TerminatedCString s_spikeType_00595044
;   TerminatedCString s_spikeState_0059504e
;   TerminatedCString s_areWeActive_00595059
;   TerminatedCString s_extendDistance_00595065
;   TerminatedCString s_startEvent_00595074
;   TerminatedCString s_stopEvent_0059507f
;   TerminatedCString s_extendEvent_00595089
;   TerminatedCString s_retractEvent_00595095
;   TerminatedCString s_extendTime_005950a2
;   TerminatedCString s_retractTime_005950ad
;   TerminatedCString s_extendSound_005950b9
;   TerminatedCString s_retractSound_005950c5
;   TerminatedCString s_period_005950d2
;   TerminatedCString s_damageStrength_005950d9
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005335f0
        ;   Label: core_spike.cpp_CSpike_archive_FUN_005335f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005335f1
    PUSH EBX                            ; 005335f5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 005335f6
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005335fb
    PUSH 0x59503a                       ; 005335fe | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 00533603
    PUSH EAX                            ; 00533609
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 0053360a
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0053360f
    PUSH 0x595044                       ; 00533612 | = "spikeType"
    LEA EAX,[EBX + 0x2cc]               ; 00533617
    PUSH EAX                            ; 0053361d
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0053361e
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00533623
    PUSH 0x59504e                       ; 00533626 | = "spikeState"
    LEA EAX,[EBX + 0x2d0]               ; 0053362b
    PUSH EAX                            ; 00533631
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00533632
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00533637
    PUSH 0x595059                       ; 0053363a | = "areWeActive"
    LEA EAX,[EBX + 0x2d4]               ; 0053363f
    PUSH EAX                            ; 00533645
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00533646
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0053364b
    PUSH 0x595065                       ; 0053364e | = "extendDistance"
    LEA EAX,[EBX + 0x2e4]               ; 00533653
    PUSH EAX                            ; 00533659
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0053365a
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0053365f
    PUSH 0x595074                       ; 00533662 | = "startEvent"
    LEA EAX,[EBX + 0x2e8]               ; 00533667
    PUSH EAX                            ; 0053366d
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0053366e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00533673
    PUSH 0x59507f                       ; 00533676 | = "stopEvent"
    LEA EAX,[EBX + 0x34c]               ; 0053367b
    PUSH EAX                            ; 00533681
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00533682
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00533687
    PUSH 0x595089                       ; 0053368a | = "extendEvent"
    LEA EAX,[EBX + 0x3b0]               ; 0053368f
    PUSH EAX                            ; 00533695
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00533696
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0053369b
    PUSH 0x595095                       ; 0053369e | = "retractEvent"
    LEA EAX,[EBX + 0x414]               ; 005336a3
    PUSH EAX                            ; 005336a9
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 005336aa
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005336af
    PUSH 0x5950a2                       ; 005336b2 | = "extendTime"
    LEA EAX,[EBX + 0x478]               ; 005336b7
    PUSH EAX                            ; 005336bd
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 005336be
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005336c3
    PUSH 0x5950ad                       ; 005336c6 | = "retractTime"
    LEA EAX,[EBX + 0x47c]               ; 005336cb
    PUSH EAX                            ; 005336d1
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 005336d2
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005336d7
    PUSH 0x5950b9                       ; 005336da | = "extendSound"
    LEA EAX,[EBX + 0x484]               ; 005336df
    PUSH EAX                            ; 005336e5
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 005336e6
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005336eb
    PUSH 0x5950c5                       ; 005336ee | = "retractSound"
    LEA EAX,[EBX + 0x4e8]               ; 005336f3
    PUSH EAX                            ; 005336f9
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 005336fa
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005336ff
    PUSH 0x5950d2                       ; 00533702 | = "period"
    LEA EAX,[EBX + 0x54c]               ; 00533707
    PUSH EAX                            ; 0053370d
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0053370e
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00533713
    PUSH 0x5950d9                       ; 00533716 | = "damageStrength"
    LEA EAX,[EBX + 0x550]               ; 0053371b
    PUSH EAX                            ; 00533721
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00533722
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00533727
    PUSH 0x5950e8                       ; 0053372a | = "param"
    ADD EBX,0x554                       ; 0053372f
    PUSH EBX                            ; 00533735
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00533736
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0053373b
    POP EBX                             ; 0053373e
    RET                                 ; 0053373f


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_battery_cpp_CBattery_load_FUN_00418000(void)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_006159ec
;   TerminatedCString s_rechargeTime_006159f6
;   TerminatedCString s_dischargeTime_00615a03
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418000
        ;   Label: core_battery.cpp_CBattery_load_FUN_00418000
    MOV EBX,dword ptr [ESP + 0x8]       ; 00418001
    PUSH EBX                            ; 00418005
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 00418006
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041800b
    PUSH 0x6159ec                       ; 0041800e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00418013
    PUSH EAX                            ; 00418019
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 0041801a
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041801f
    PUSH 0x6159f6                       ; 00418022 | = "rechargeTime"
    LEA EAX,[EBX + 0x2d8]               ; 00418027
    PUSH EAX                            ; 0041802d
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0041802e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00418033
    PUSH 0x615a03                       ; 00418036 | = "dischargeTime"
    ADD EBX,0x2dc                       ; 0041803b
    PUSH EBX                            ; 00418041
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00418042
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00418047
    POP EBX                             ; 0041804a
    RET                                 ; 0041804b


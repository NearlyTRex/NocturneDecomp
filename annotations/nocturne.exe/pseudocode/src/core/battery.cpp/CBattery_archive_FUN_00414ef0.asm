; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_battery_cpp_CBattery_archive_FUN_00414ef0(int param_1)
;
;
; Referenced Globals:
;   string s_modelName_00578d73
;   string s_rechargeTime_00578d7d
;   string s_dischargeTime_00578d8a
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414ef0
        ;   Label: core_battery.cpp_CBattery_archive_FUN_00414ef0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414ef1
    PUSH EBX                            ; 00414ef5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 00414ef6
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 00414efb
    PUSH 0x578d73                       ; 00414efe | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 00414f03
    PUSH EAX                            ; 00414f09
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 00414f0a
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00()
    ADD ESP,0x8                         ; 00414f0f
    PUSH 0x578d7d                       ; 00414f12 | = "rechargeTime"
    LEA EAX,[EBX + 0x2d0]               ; 00414f17
    PUSH EAX                            ; 00414f1d
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00414f1e
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 00414f23
    PUSH 0x578d8a                       ; 00414f26 | = "dischargeTime"
    ADD EBX,0x2d4                       ; 00414f2b
    PUSH EBX                            ; 00414f31
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 00414f32
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 00414f37
    POP EBX                             ; 00414f3a
    RET                                 ; 00414f3b


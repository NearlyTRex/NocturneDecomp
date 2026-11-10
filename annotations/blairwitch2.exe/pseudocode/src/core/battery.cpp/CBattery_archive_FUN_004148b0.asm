; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_CBattery_archive_FUN_004148b0(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005cbc32
;   TerminatedCString s_rechargeTime_005cbc3c
;   TerminatedCString s_dischargeTime_005cbc49
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004148b0
        ;   Label: core_battery.cpp_CBattery_archive_FUN_004148b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004148b1
    PUSH EBX                            ; 004148b5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 004148b6
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004148bb
    PUSH 0x5cbc32                       ; 004148be | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 004148c3
    PUSH EAX                            ; 004148c9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 004148ca
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    ADD ESP,0x8                         ; 004148cf
    PUSH 0x5cbc3c                       ; 004148d2 | = "rechargeTime"
    LEA EAX,[EBX + 0x434]               ; 004148d7
    PUSH EAX                            ; 004148dd
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004148de
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004148e3
    PUSH 0x5cbc49                       ; 004148e6 | = "dischargeTime"
    ADD EBX,0x438                       ; 004148eb
    PUSH EBX                            ; 004148f1
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004148f2
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004148f7
    POP EBX                             ; 004148fa
    RET                                 ; 004148fb


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_battery_cpp_CBattery_archive_FUN_004145a0(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d3bad
;   TerminatedCString s_rechargeTime_005d3bb7
;   TerminatedCString s_dischargeTime_005d3bc4
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004145a0
        ;   Label: core_battery.cpp_CBattery_archive_FUN_004145a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004145a1
    PUSH EBX                            ; 004145a5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 004145a6
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004145ab
    PUSH 0x5d3bad                       ; 004145ae | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 004145b3
    PUSH EAX                            ; 004145b9
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770 ; 004145ba
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b770(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004145bf
    PUSH 0x5d3bb7                       ; 004145c2 | = "rechargeTime"
    LEA EAX,[EBX + 0x2d8]               ; 004145c7
    PUSH EAX                            ; 004145cd
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004145ce
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004145d3
    PUSH 0x5d3bc4                       ; 004145d6 | = "dischargeTime"
    ADD EBX,0x2dc                       ; 004145db
    PUSH EBX                            ; 004145e1
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004145e2
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004145e7
    POP EBX                             ; 004145ea
    RET                                 ; 004145eb


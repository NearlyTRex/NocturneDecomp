; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBattery * core_battery.cpp_CBattery_ctor_FUN_00417e90(CBattery * this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_battery.cpp_factoryFunc_FUN_00417e50 at 00417e6a
;
; Referenced Globals:
;   TerminatedCString s_question_kfm_006159d9
;   CDemonActor_vtable g_CBatteryVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417e90
        ;   Label: core_battery.cpp_CBattery_ctor_FUN_00417e90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00417e91
    PUSH EBX                            ; 00417e95
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 00417e96
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00417e9b
    ADD EAX,0x158                       ; 00417e9e
    PUSH EAX                            ; 00417ea3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 00417ea4
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00417ea9
    LEA EBX,[EAX + 0xfffffea8]          ; 00417eac
    PUSH 0x6159d9                       ; 00417eb2 | = "question.kfm"
    LEA EAX,[EBX + 0x158]               ; 00417eb7
    PUSH EAX                            ; 00417ebd
    MOV dword ptr [EBX + 0x154],0x65a934 ; 00417ebe | g_CBatteryVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00417ec8
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00417ecd
    MOV dword ptr [EBX + 0x2d8],0x41f00000 ; 00417ed0
    MOV EAX,EBX                         ; 00417eda
    MOV dword ptr [EBX + 0x2dc],0x41f00000 ; 00417edc
    POP EBX                             ; 00417ee6
    RET                                 ; 00417ee7


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBattery * __cdecl core_battery_cpp_CBattery_ctor_FUN_00414d80(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_battery.cpp_factoryFuncBattery_FUN_00414d50 at 00414d63
;
; Referenced Globals:
;   TerminatedCString s_question_kfm_00578d60
;   CDemonActor_vtable g_CBatteryVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414d80
        ;   Label: core_battery.cpp_CBattery_ctor_FUN_00414d80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414d81
    PUSH EBX                            ; 00414d85
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 00414d86
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00414d8b
    ADD EAX,0x150                       ; 00414d8e
    PUSH EAX                            ; 00414d93
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00414d94
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00414d99
    LEA EBX,[EAX + 0xfffffeb0]          ; 00414d9c
    PUSH 0x578d60                       ; 00414da2 | = "question.kfm"
    LEA EAX,[EBX + 0x150]               ; 00414da7
    PUSH EAX                            ; 00414dad
    MOV dword ptr [EBX + 0x14c],0x59a2f4 ; 00414dae | g_CBatteryVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00414db8
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00414dbd
    MOV dword ptr [EBX + 0x2d0],0x41f00000 ; 00414dc0
    MOV EAX,EBX                         ; 00414dca
    MOV dword ptr [EBX + 0x2d4],0x41f00000 ; 00414dcc
    POP EBX                             ; 00414dd6
    RET                                 ; 00414dd7


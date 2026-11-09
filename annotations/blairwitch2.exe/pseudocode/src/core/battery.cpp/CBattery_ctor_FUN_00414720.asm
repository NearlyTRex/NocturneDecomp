; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBattery * __cdecl core_battery_cpp_CBattery_ctor_FUN_00414720(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_battery.cpp_factoryFuncBattery_FUN_004146f0 at 00414703
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414720
        ;   Label: core_battery.cpp_CBattery_ctor_FUN_00414720
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414721
    PUSH EBX                            ; 00414725
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 00414726
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041472b
    ADD EAX,0x2b4                       ; 0041472e
    PUSH EAX                            ; 00414733
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 00414734
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00414739
    LEA EBX,[EAX + 0xfffffd4c]          ; 0041473c
    PUSH 0x5cbc1f                       ; 00414742
    LEA EAX,[EBX + 0x2b4]               ; 00414747
    PUSH EAX                            ; 0041474d
    MOV dword ptr [EBX + 0x2b0],0x5f3244 ; 0041474e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00414758
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0041475d
    MOV dword ptr [EBX + 0x434],0x41f00000 ; 00414760
    MOV EAX,EBX                         ; 0041476a
    MOV dword ptr [EBX + 0x438],0x41f00000 ; 0041476c
    POP EBX                             ; 00414776
    RET                                 ; 00414777


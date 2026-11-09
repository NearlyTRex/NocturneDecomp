; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBattery * __cdecl core_battery_cpp_CBattery_ctor_FUN_0040f4a0(CBattery *this_ptr)
;
; Parameters:
; CBattery *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_battery.cpp_factoryFuncBattery_FUN_0040f470 at 0040f483
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f4a0
        ;   Label: core_battery.cpp_CBattery_ctor_FUN_0040f4a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f4a1
    PUSH EBX                            ; 0040f4a5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 0040f4a6
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040f4ab
    ADD EAX,0x158                       ; 0040f4ae
    PUSH EAX                            ; 0040f4b3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 0040f4b4
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040f4b9
    LEA EBX,[EAX + 0xfffffea8]          ; 0040f4bc
    PUSH 0x5b62df                       ; 0040f4c2
    LEA EAX,[EBX + 0x158]               ; 0040f4c7
    PUSH EAX                            ; 0040f4cd
    MOV dword ptr [EBX + 0x154],0x5db8b4 ; 0040f4ce
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0040f4d8
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0040f4dd
    MOV dword ptr [EBX + 0x2d8],0x41f00000 ; 0040f4e0
    MOV EAX,EBX                         ; 0040f4ea
    MOV dword ptr [EBX + 0x2dc],0x41f00000 ; 0040f4ec
    POP EBX                             ; 0040f4f6
    RET                                 ; 0040f4f7


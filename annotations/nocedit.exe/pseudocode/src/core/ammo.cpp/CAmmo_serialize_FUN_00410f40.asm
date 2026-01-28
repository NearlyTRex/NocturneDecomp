; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ammo_cpp_CAmmo_serialize_FUN_00410f40(CAmmo *this_ptr)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_00614944
;   TerminatedCString s_weaponClassName_0061494e
;   TerminatedCString s_ammoCount_0061495e
;   TerminatedCString s_ammoType_00614968
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410f40
        ;   Label: core_ammo.cpp_CAmmo_serialize_FUN_00410f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410f41
    PUSH EBX                            ; 00410f45
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 00410f46
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00410f4b
    PUSH 0x614944                       ; 00410f4e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 00410f53
    PUSH EAX                            ; 00410f59
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 00410f5a
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00410f5f
    PUSH 0x61494e                       ; 00410f62 | = "weaponClassName"
    LEA EAX,[EBX + 0x2d4]               ; 00410f67
    PUSH EAX                            ; 00410f6d
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00410f6e
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00410f73
    PUSH 0x61495e                       ; 00410f76 | = "ammoCount"
    LEA EAX,[EBX + 0x314]               ; 00410f7b
    PUSH EAX                            ; 00410f81
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00410f82
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00410f87
    PUSH 0x614968                       ; 00410f8a | = "ammoType"
    ADD EBX,0x318                       ; 00410f8f
    PUSH EBX                            ; 00410f95
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00410f96
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00410f9b
    POP EBX                             ; 00410f9e
    RET                                 ; 00410f9f


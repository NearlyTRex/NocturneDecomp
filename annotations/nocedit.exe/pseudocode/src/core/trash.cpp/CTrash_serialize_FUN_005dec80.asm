; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_trash_cpp_CTrash_serialize_FUN_005dec80(CTrash *this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_0065558c
;   TerminatedCString s_homePos_00655596
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeVector_FUN_0040b340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dec80
        ;   Label: core_trash.cpp_CTrash_serialize_FUN_005dec80
    MOV EBX,dword ptr [ESP + 0x8]       ; 005dec81
    PUSH EBX                            ; 005dec85
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 005dec86
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005dec8b
    PUSH 0x65558c                       ; 005dec8e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 005dec93
    PUSH EAX                            ; 005dec99
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 005dec9a
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005dec9f
    PUSH 0x655596                       ; 005deca2 | = "homePos"
    LEA EAX,[EBX + 0x2d4]               ; 005deca7
    PUSH EAX                            ; 005decad
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 005decae
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 005decb3
    POP EBX                             ; 005decb6
    RET                                 ; 005decb7


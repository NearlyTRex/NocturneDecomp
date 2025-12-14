; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_simbox.cpp_CSimBox_FUN_005891b0(CSimBox * this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_00649c22
;   TerminatedCString s_weight_00649c2c
;   TerminatedCString s_initialVelocity_00649c33
;   TerminatedCString s_initRotVel_00649c43
;   TerminatedCString s_triggerEvent_00649c4e
;   TerminatedCString s_type_00649c5b
;   int g_CSimBoxClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005891b0
        ;   Label: core_simbox.cpp_CSimBox_FUN_005891b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005891b1
    PUSH EBX                            ; 005891b5
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 005891b6
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005891bb
    PUSH 0x649c22                       ; 005891be | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 005891c3
    PUSH EAX                            ; 005891c9
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 005891ca
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005891cf
    PUSH 0x649c2c                       ; 005891d2 | = "weight"
    LEA EAX,[EBX + 0x2d8]               ; 005891d7
    PUSH EAX                            ; 005891dd
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005891de
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x0068183c]      ; 005891e3 | g_CSimBoxClassVersion
    ADD ESP,0x8                         ; 005891e9
    CMP EDX,0x2                         ; 005891ec
    JGE 0x005891fc                      ; 005891ef
        ;   XREF to: 005891fc (CONDITIONAL_JUMP)  ; LAB_005891fc
    CMP dword ptr [0x0068183c],0x3      ; 005891f1 | g_CSimBoxClassVersion
    JGE 0x00589243                      ; 005891f8
        ;   XREF to: 00589243 (CONDITIONAL_JUMP)  ; LAB_00589243
    POP EBX                             ; 005891fa
    RET                                 ; 005891fb
    PUSH 0x649c33                       ; 005891fc | = "initialVelocity"
        ;   Label: LAB_005891fc
    LEA EAX,[EBX + 0x340]               ; 00589201
    PUSH EAX                            ; 00589207
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 00589208
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0058920d
    PUSH 0x649c43                       ; 00589210 | = "initRotVel"
    LEA EAX,[EBX + 0x34c]               ; 00589215
    PUSH EAX                            ; 0058921b
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 0058921c
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00589221
    PUSH 0x649c4e                       ; 00589224 | = "triggerEvent"
    LEA EAX,[EBX + 0x2dc]               ; 00589229
    PUSH EAX                            ; 0058922f
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00589230
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00589235
    CMP dword ptr [0x0068183c],0x3      ; 00589238 | g_CSimBoxClassVersion
    JGE 0x00589243                      ; 0058923f
        ;   XREF to: 00589243 (CONDITIONAL_JUMP)  ; LAB_00589243
    POP EBX                             ; 00589241
    RET                                 ; 00589242
    PUSH 0x649c5b                       ; 00589243 | = "type"
        ;   Label: LAB_00589243
    ADD EBX,0x2d4                       ; 00589248
    PUSH EBX                            ; 0058924e
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0058924f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00589254
    POP EBX                             ; 00589257
    RET                                 ; 00589258


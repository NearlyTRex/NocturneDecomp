; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_anvil.cpp_CAnvil_serialize_FUN_00411f50(CAnvil * this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_00614d3b
;   TerminatedCString s_dropCondition_00614d45
;   TerminatedCString s_dropHeight_00614d53
;   TerminatedCString s_triggered_00614d5e
;   TerminatedCString s_yvel_00614d68
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411f50
        ;   Label: core_anvil.cpp_CAnvil_serialize_FUN_00411f50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411f51
    PUSH EBX                            ; 00411f55
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 00411f56 | void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00411f5b
    PUSH 0x614d3b                       ; 00411f5e | = "modelName" | s_modelName_00614d3b = modelName
    LEA EAX,[EBX + 0x158]               ; 00411f63
    PUSH EAX                            ; 00411f69
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 00411f6a | void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411f6f
    PUSH 0x614d45                       ; 00411f72 | = "dropCondition" | s_dropCondition_00614d45 = dropCondition
    LEA EAX,[EBX + 0x2d4]               ; 00411f77
    PUSH EAX                            ; 00411f7d
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00411f7e | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411f83
    PUSH 0x614d53                       ; 00411f86 | = "dropHeight" | s_dropHeight_00614d53 = dropHeight
    LEA EAX,[EBX + 0x338]               ; 00411f8b
    PUSH EAX                            ; 00411f91
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00411f92 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411f97
    PUSH 0x614d5e                       ; 00411f9a | = "triggered" | s_triggered_00614d5e = triggered
    LEA EAX,[EBX + 0x33c]               ; 00411f9f
    PUSH EAX                            ; 00411fa5
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00411fa6 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411fab
    PUSH 0x614d68                       ; 00411fae | = "yvel" | s_yvel_00614d68 = yvel
    ADD EBX,0x340                       ; 00411fb3
    PUSH EBX                            ; 00411fb9
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00411fba | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00411fbf
    POP EBX                             ; 00411fc2
    RET                                 ; 00411fc3


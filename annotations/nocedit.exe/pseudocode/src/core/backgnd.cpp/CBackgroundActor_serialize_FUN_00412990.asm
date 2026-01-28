; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_backgnd_cpp_CBackgroundActor_serialize_FUN_00412990(CBackgroundActor *this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_00614e5e
;   TerminatedCString s_collideWithMe_00614e68
;   TerminatedCString s_groundType_00614e76
;   int g_CBackgroundActorClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412990
        ;   Label: core_backgnd.cpp_CBackgroundActor_serialize_FUN_00412990
    MOV EBX,dword ptr [ESP + 0x8]       ; 00412991
    PUSH EBX                            ; 00412995
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 00412996
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041299b
    PUSH 0x614e5e                       ; 0041299e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 004129a3
    PUSH EAX                            ; 004129a9
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 004129aa
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004129af
    PUSH 0x614e68                       ; 004129b2 | = "collideWithMe"
    LEA EAX,[EBX + 0x2d4]               ; 004129b7
    PUSH EAX                            ; 004129bd
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004129be
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x0066e440]      ; 004129c3 | g_CBackgroundActorClassVersion
    ADD ESP,0x8                         ; 004129c9
    CMP EDX,0x2                         ; 004129cc
    JGE 0x004129d3                      ; 004129cf
        ;   XREF to: 004129d3 (CONDITIONAL_JUMP)  ; LAB_004129d3
    POP EBX                             ; 004129d1
    RET                                 ; 004129d2
    PUSH 0x614e76                       ; 004129d3 | = "groundType"
        ;   Label: LAB_004129d3
    ADD EBX,0x2d8                       ; 004129d8
    PUSH EBX                            ; 004129de
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004129df
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004129e4
    POP EBX                             ; 004129e7
    RET                                 ; 004129e8


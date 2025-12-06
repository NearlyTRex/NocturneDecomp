; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_teleport.cpp_CTeleport_serialize_FUN_005dab30(CTeleport * this_ptr)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializeVector_FUN_0040b340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dab30
        ;   Label: core_teleport.cpp_CTeleport_serialize_FUN_005dab30
    MOV EBX,dword ptr [ESP + 0x8]       ; 005dab31
    PUSH EBX                            ; 005dab35
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 005dab36 | void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005dab3b
    PUSH 0x0                            ; 005dab3e
    LEA EAX,[EBX + 0x158]               ; 005dab40
    PUSH EAX                            ; 005dab46
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 005dab47 | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005dab4c
    PUSH 0x0                            ; 005dab4f
    LEA EAX,[EBX + 0x164]               ; 005dab51
    PUSH EAX                            ; 005dab57
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005dab58 | void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005dab5d
    POP EBX                             ; 005dab60
    RET                                 ; 005dab61


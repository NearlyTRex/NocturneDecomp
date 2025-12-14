; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_trap.cpp_CTrap_serialize_FUN_005de9c0(CTrap * this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_0065553f
;   TerminatedCString s_wolfInTrap_00655549
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005de9c0
        ;   Label: core_trap.cpp_CTrap_serialize_FUN_005de9c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005de9c1
    PUSH EBX                            ; 005de9c5
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 005de9c6
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005de9cb
    PUSH 0x65553f                       ; 005de9ce | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 005de9d3
    PUSH EAX                            ; 005de9d9
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 005de9da
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005de9df
    PUSH 0x655549                       ; 005de9e2 | = "wolfInTrap"
    LEA EAX,[EBX + 0x2d8]               ; 005de9e7
    PUSH EAX                            ; 005de9ed
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005de9ee
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005de9f3
    POP EBX                             ; 005de9f6
    RET                                 ; 005de9f7


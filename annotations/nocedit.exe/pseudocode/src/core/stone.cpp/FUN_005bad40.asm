; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_stone_cpp_FUN_005bad40(void)
;
;
; Referenced Globals:
;   TerminatedCString s_destActor_0065315a
;
; Called Functions:
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_boxactor.cpp_CBoxActor_serialize_FUN_00422060
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005bad40
        ;   Label: core_stone.cpp_FUN_005bad40
    PUSH EDX                            ; 005bad44
    CALL core_boxactor.cpp_CBoxActor_serialize_FUN_00422060 ; 005bad45
        ;   XREF to: 00422060 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_serialize_FUN_00422060(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 005bad4a
    MOV EAX,dword ptr [ESP + 0x4]       ; 005bad4d
    PUSH 0x65315a                       ; 005bad51 | = "destActor"
    ADD EAX,0x66c                       ; 005bad56
    PUSH EAX                            ; 005bad5b
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005bad5c
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005bad61
    RET                                 ; 005bad64


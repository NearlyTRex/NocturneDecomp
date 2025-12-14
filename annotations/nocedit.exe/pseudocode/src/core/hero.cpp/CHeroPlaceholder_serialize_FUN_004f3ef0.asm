; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_hero.cpp_CHeroPlaceholder_serialize_FUN_004f3ef0(CHeroPlaceholder * this_ptr)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_index_0062edb2
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f3ef0
        ;   Label: core_hero.cpp_CHeroPlaceholder_serialize_FUN_004f3ef0
    PUSH EDX                            ; 004f3ef4
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 004f3ef5
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004f3efa
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3efd
    PUSH 0x62edb2                       ; 004f3f01 | = "index"
    ADD EAX,0x158                       ; 004f3f06
    PUSH EAX                            ; 004f3f0b
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 004f3f0c
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f3f11
    RET                                 ; 004f3f14


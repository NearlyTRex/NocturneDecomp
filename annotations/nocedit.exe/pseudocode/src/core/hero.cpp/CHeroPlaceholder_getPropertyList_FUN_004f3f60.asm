; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hero_cpp_CHeroPlaceholder_getPropertyList_FUN_004f3f60(CHeroPlaceholder *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_index_0062edbe
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addIntRange_FUN_0040e220
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3f60
        ;   Label: core_hero.cpp_CHeroPlaceholder_getPropertyList_FUN_004f3f60
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f3f61
    PUSH EDX                            ; 004f3f65
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f3f66
    PUSH ECX                            ; 004f3f6a
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 004f3f6b
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004f3f70
    PUSH 0x0                            ; 004f3f73
    PUSH 0x3                            ; 004f3f75
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f3f77
    PUSH 0x0                            ; 004f3f7b
    ADD EAX,0x158                       ; 004f3f7d
    PUSH EAX                            ; 004f3f82
    PUSH 0x62edbe                       ; 004f3f83 | = "index"
    MOV EBX,dword ptr [ESP + 0x20]      ; 004f3f88
    PUSH EBX                            ; 004f3f8c
    CALL core_actor.cpp_CActorPropertyList_addIntRange_FUN_0040e220 ; 004f3f8d
        ;   XREF to: 0040e220 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addIntRange_FUN_0040e220(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, int min_value, ...)
    ADD ESP,0x18                        ; 004f3f92
    POP EBX                             ; 004f3f95
    RET                                 ; 004f3f96


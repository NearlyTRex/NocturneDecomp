; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_teleport_cpp_CTeleport_getPropertyList_FUN_005daba0(CTeleport *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_CTeleportDest_00654ceb
;   TerminatedCString s_Destination_00654cf9
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005daba0
        ;   Label: core_teleport.cpp_CTeleport_getPropertyList_FUN_005daba0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005daba1
    PUSH EDX                            ; 005daba5
    MOV ECX,dword ptr [ESP + 0xc]       ; 005daba6
    PUSH ECX                            ; 005dabaa
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 005dabab
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005dabb0
    PUSH 0x0                            ; 005dabb3
    PUSH 0x654ceb                       ; 005dabb5 | = "CTeleportDest"
    MOV EAX,dword ptr [ESP + 0x10]      ; 005dabba
    PUSH 0x0                            ; 005dabbe
    ADD EAX,0x164                       ; 005dabc0
    PUSH EAX                            ; 005dabc5
    PUSH 0x654cf9                       ; 005dabc6 | = "Destination"
    MOV EBX,dword ptr [ESP + 0x20]      ; 005dabcb
    PUSH EBX                            ; 005dabcf
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005dabd0
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 005dabd5
    POP EBX                             ; 005dabd8
    RET                                 ; 005dabd9


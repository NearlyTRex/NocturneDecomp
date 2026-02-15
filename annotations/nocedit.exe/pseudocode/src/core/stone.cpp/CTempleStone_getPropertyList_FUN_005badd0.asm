; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stone_cpp_CTempleStone_getPropertyList_FUN_005badd0(CTempleStone *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CTempleStone *   Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_CActorDestination_0065316a
;   TerminatedCString s_Our_destination_0065317c
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
;   core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005badd0
        ;   Label: core_stone.cpp_CTempleStone_getPropertyList_FUN_005badd0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005badd1
    PUSH EDX                            ; 005badd5
    MOV ECX,dword ptr [ESP + 0xc]       ; 005badd6
    PUSH ECX                            ; 005badda
    CALL core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0 ; 005baddb
        ;   XREF to: 004226e0 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_getPropertyList_FUN_004226e0(CBoxActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005bade0
    PUSH 0x0                            ; 005bade3
    PUSH 0x65316a                       ; 005bade5 | = "CActorDestination"
    MOV EAX,dword ptr [ESP + 0x10]      ; 005badea
    PUSH 0x1                            ; 005badee
    ADD EAX,0x66c                       ; 005badf0
    PUSH EAX                            ; 005badf5
    PUSH 0x65317c                       ; 005badf6 | = "Our destination"
    MOV EBX,dword ptr [ESP + 0x20]      ; 005badfb
    PUSH EBX                            ; 005badff
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005bae00
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 005bae05
    POP EBX                             ; 005bae08
    RET                                 ; 005bae09


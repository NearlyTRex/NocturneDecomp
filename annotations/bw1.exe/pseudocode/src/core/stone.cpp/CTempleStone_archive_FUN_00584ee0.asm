; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stone_cpp_CTempleStone_archive_FUN_00584ee0(CTempleStone *this_ptr)
;
; Parameters:
; CTempleStone *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_destActor_005f6389
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_boxactor.cpp_CBoxActor_archive_FUN_00422760
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00584ee0
        ;   Label: core_stone.cpp_CTempleStone_archive_FUN_00584ee0
    PUSH EDX                            ; 00584ee4
    CALL core_boxactor.cpp_CBoxActor_archive_FUN_00422760 ; 00584ee5
        ;   XREF to: 00422760 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_archive_FUN_00422760(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 00584eea
    MOV EAX,dword ptr [ESP + 0x4]       ; 00584eed
    PUSH 0x5f6389                       ; 00584ef1 | = "destActor"
    ADD EAX,0x678                       ; 00584ef6
    PUSH EAX                            ; 00584efb
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 00584efc
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00584f01
    RET                                 ; 00584f04


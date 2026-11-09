; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_actor_cpp_FUN_00408870(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[13]:
;   core_actor.cpp_CDemonActor_load_FUN_0040b110 at 0040b122
;   core_actor.cpp_CDemonActor_save_FUN_0040aff0 at 0040b005
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b2d0 at 0040b33e
;   core_charactr.cpp_FUN_0042b0e0 at 0042b2cf
;   core_enemy.cpp_FUN_0048a12e at 0048a140
;   core_event.cpp_CEventList_setActorVariable_FUN_00494e70 at 00494ea4
;   core_event.cpp_resolveActorByName_FUN_0048b950 at 0048ba53
;   core_inv.cpp_CInventory_saveItems_FUN_004dc700 at 004dc71c
;   core_inv.cpp_FUN_004da880 at 004db52c
;   core_inv.cpp_FUN_004dbd7e at 004dbe0e
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00408870
        ;   Label: core_actor.cpp_FUN_00408870
    PUSH EDX                            ; 00408874
    MOV EAX,dword ptr [EDX + 0x154]     ; 00408875
    CALL dword ptr [EAX + 0xcc]         ; 0040887b
    ADD ESP,0x4                         ; 00408881
    RET                                 ; 00408884


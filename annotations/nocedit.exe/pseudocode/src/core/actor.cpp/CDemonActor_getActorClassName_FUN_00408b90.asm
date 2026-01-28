; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[17]:
;   core_actor.cpp_CDemonActor_load_FUN_0040b050 at 0040b062
;   core_actor.cpp_CDemonActor_save_FUN_0040af30 at 0040af45
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 at 0040b27e
;   core_enemy.cpp_FUN_004aa0f0 at 004aa100
;   core_event.cpp_CEventList_setActorVariable_FUN_004b09a0 at 004b09d4
;   core_event.cpp_FUN_004aa400 at 004aa503
;   core_inv.cpp_CInventory_addItem_FUN_004fd600 at 004fe780
;   core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900 at 004fe97a
;   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10 at 004feda8
;   core_inv.cpp_CInventory_saveItems_FUN_004ff3b0 at 004ff3cc
;   ... and 7 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00408b90
        ;   Label: core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
    PUSH EDX                            ; 00408b94
    MOV EAX,dword ptr [EDX + 0x154]     ; 00408b95
    CALL dword ptr [EAX + 0xc4]         ; 00408b9b
    ADD ESP,0x4                         ; 00408ba1
    RET                                 ; 00408ba4


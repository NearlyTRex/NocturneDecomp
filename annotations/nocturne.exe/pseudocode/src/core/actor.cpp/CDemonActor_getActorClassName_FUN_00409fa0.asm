; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(int param_1)
;
;
; XREF[13]:
;   FUN_004d8720 at 004d891e
;   core_actor.cpp_CDemonActor_load_FUN_0040c160 at 0040c172
;   core_actor.cpp_CDemonActor_save_FUN_0040c040 at 0040c055
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 at 0040c38e
;   core_charactr.cpp_CCharacter_setup_FUN_00424260 at 0042446a
;   core_event.cpp_CEventList_setActorVariable_FUN_00480950 at 00480984
;   core_event.cpp_resolveActorByName_FUN_0047a390 at 0047a493
;   core_inv.cpp_CInventory_addItem_FUN_004bf360 at 004c0177
;   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004c0a50 at 004c0ade
;   core_inv.cpp_CInventory_saveItems_FUN_004c1140 at 004c115c
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00409fa0
        ;   Label: core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
    PUSH EDX                            ; 00409fa4
    MOV EAX,dword ptr [EDX + 0x14c]     ; 00409fa5
    CALL dword ptr [EAX + 0xc4]         ; 00409fab
    ADD ESP,0x4                         ; 00409fb1
    RET                                 ; 00409fb4


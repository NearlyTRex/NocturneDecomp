; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_actor_cpp_FUN_00408830(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[15]:
;   core_actor.cpp_CDemonActor_load_FUN_0040aed0 at 0040aee2
;   core_actor.cpp_CDemonActor_save_FUN_0040adb0 at 0040adc5
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 at 0040b0fe
;   core_charactr.cpp_FUN_0042c510 at 0042c75d
;   core_enemy.cpp_FUN_004a111e at 004a1130
;   core_event.cpp_CEventList_setActorVariable_FUN_004a9ff0 at 004aa024
;   core_event.cpp_resolveActorByName_FUN_004a1370 at 004a1473
;   core_inv.cpp_CInventory_saveItems_FUN_004f9750 at 004f976c
;   core_inv.cpp_FUN_004f7690 at 004f865c
;   core_inv.cpp_FUN_004f8b70 at 004f8be0
;   ... and 5 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00408830
        ;   Label: core_actor.cpp_FUN_00408830
    PUSH EDX                            ; 00408834
    MOV EAX,dword ptr [EDX + 0x154]     ; 00408835
    CALL dword ptr [EAX + 0xcc]         ; 0040883b
    ADD ESP,0x4                         ; 00408841
    RET                                 ; 00408844


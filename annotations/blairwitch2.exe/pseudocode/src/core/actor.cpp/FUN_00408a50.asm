; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_00408a50(int param_1)
;
;
; XREF[15]:
;   core_actor.cpp_CDemonActor_load_FUN_0040b1c0 at 0040b1d2
;   core_actor.cpp_CDemonActor_save_FUN_0040b0a0 at 0040b0b5
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 at 0040b3ee
;   core_charactr.cpp_CCharacter_setup_FUN_00422930 at 00422b98
;   core_enemy.cpp_FUN_00488aae at 00488ac0
;   core_event.cpp_CEventList_setActorVariable_FUN_00491680 at 004916b4
;   core_event.cpp_resolveActorByName_FUN_00488d00 at 00488e03
;   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004dbc60 at 004dbd00
;   core_inv.cpp_CInventory_saveItems_FUN_004dc460 at 004dc47c
;   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020 at 004dd07e
;   ... and 5 more
;
; Referenced Globals:
;   TerminatedCString s_s_getClassName_005ca494
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408a50
        ;   Label: core_actor.cpp_FUN_00408a50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408a51
    PUSH EBX                            ; 00408a55
    PUSH 0x5ca494                       ; 00408a56 | = "%s::getClassName()\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 00408a5b | g_CConsolePtr
    PUSH EDX                            ; 00408a61 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 00408a62
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 00408a67
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00408a6a
    PUSH EBX                            ; 00408a70
    CALL dword ptr [EAX + 0xd4]         ; 00408a71
    ADD ESP,0x4                         ; 00408a77
    POP EBX                             ; 00408a7a
    RET                                 ; 00408a7b


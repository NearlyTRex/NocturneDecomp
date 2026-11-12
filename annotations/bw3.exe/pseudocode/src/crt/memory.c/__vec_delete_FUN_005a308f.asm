; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl crt_memory_c___vec_delete_FUN_005a308f(int param_1,undefined4 param_2)
;
;
; XREF[167]:
;   cockpit_pkbitmap.cpp_FUN_00510670 at 0051067e
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770 at 004087a7
;   core_ammo.cpp_CAmmoBullet_dtor_FUN_0040e420 at 0040e44c
;   core_ammo.cpp_CAmmoManaLarge_dtor_FUN_0040e470 at 0040e49c
;   core_ammo.cpp_CAmmoMana_dtor_FUN_0040e4c0 at 0040e4ec
;   core_ammo.cpp_CAmmo_dtor_FUN_0040e510 at 0040e53c
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_0040ea10 at 0040ea3c
;   core_armour.cpp_CFlame_dtor_FUN_00410320 at 0041034c
;   core_asgaya.cpp_CAsgaya_dtor_FUN_005a1b50 at 005a1bd3
;   core_baal.cpp_CBaal_dtor_FUN_00597d00 at 00597d63
;   ... and 157 more
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a308f
        ;   Label: crt_memory.c___vec_delete_FUN_005a308f
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a3090
    TEST EAX,EAX                        ; 005a3094
    JNZ 0x005a309e                      ; 005a3096
        ;   XREF to: 005a309e (CONDITIONAL_JUMP)  ; LAB_005a309e
    XOR EBX,EBX                         ; 005a3098
    MOV EAX,EBX                         ; 005a309a
    POP EBX                             ; 005a309c
    RET                                 ; 005a309d
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a309e
        ;   Label: LAB_005a309e
    LEA EBX,[EAX + -0x4]                ; 005a30a2
    PUSH EDX                            ; 005a30a5
    MOV ECX,dword ptr [EBX]             ; 005a30a6
    PUSH ECX                            ; 005a30a8
    PUSH EAX                            ; 005a30a9
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 005a30aa
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005a3de6()
    ADD ESP,0xc                         ; 005a30af
    MOV EAX,EBX                         ; 005a30b2
    POP EBX                             ; 005a30b4
    RET                                 ; 005a30b5


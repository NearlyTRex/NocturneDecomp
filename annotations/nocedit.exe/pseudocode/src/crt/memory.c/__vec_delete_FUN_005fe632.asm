; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl crt_memory_c___vec_delete_FUN_005fe632(void *object_ptr,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   object_ptr
; WatcomTypeInfo * Stack[0x8]:4   type_info
;
; XREF[142]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60 at 0054bd85
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30 at 00408a5c
;   core_ammo.cpp_CAmmo_dtor_FUN_004114e0 at 0041150c
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_00411c20 at 00411c4c
;   core_anvil.cpp_CAnvil_dtor_FUN_004120e0 at 0041210c
;   core_armour.cpp_CArmour_dtor_FUN_00412500 at 00412597
;   core_armour.cpp_CEnemy_dtor_FUN_004125c0 at 00412657
;   core_armour.cpp_CFlame_dtor_FUN_00412690 at 004126bc
;   core_backgnd.cpp_CBackgroundActor_dtor_FUN_00412ad0 at 00412afc
;   core_baron.cpp_CBaronWeapon_dtor_FUN_004140b0 at 004140dc
;   ... and 132 more
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fe632
        ;   Label: crt_memory.c___vec_delete_FUN_005fe632
    MOV EAX,dword ptr [ESP + 0x8]       ; 005fe633
    TEST EAX,EAX                        ; 005fe637
    JNZ 0x005fe641                      ; 005fe639
        ;   XREF to: 005fe641 (CONDITIONAL_JUMP)  ; LAB_005fe641
    XOR EBX,EBX                         ; 005fe63b
    MOV EAX,EBX                         ; 005fe63d
    POP EBX                             ; 005fe63f
    RET                                 ; 005fe640
    MOV EDX,dword ptr [ESP + 0xc]       ; 005fe641
        ;   Label: LAB_005fe641
    LEA EBX,[EAX + -0x4]                ; 005fe645
    PUSH EDX                            ; 005fe648
    MOV ECX,dword ptr [EBX]             ; 005fe649
    PUSH ECX                            ; 005fe64b
    PUSH EAX                            ; 005fe64c
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 005fe64d
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c___arrfini_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005fe652
    MOV EAX,EBX                         ; 005fe655
    POP EBX                             ; 005fe657
    RET                                 ; 005fe658


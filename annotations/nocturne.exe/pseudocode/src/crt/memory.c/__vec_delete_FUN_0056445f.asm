; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c___vec_delete_FUN_0056445f(void *object_ptr,WatcomTypeInfo *type_info)
;
; Parameters:
; void *           Stack[0x4]:4   object_ptr
; WatcomTypeInfo * Stack[0x8]:4   type_info
;
; XREF[137]:
;   cockpit_pkbitmap.cpp_FUN_004f5320 at 004f532e
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 at 00409ed7
;   core_ammo.cpp_CAmmo_dtor_FUN_0040ef90 at 0040efbc
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_0040f4b0 at 0040f4dc
;   core_anvil.cpp_CAnvil_dtor_FUN_0040f8b0 at 0040f8dc
;   core_armour.cpp_CArmour_dtor_FUN_0040fc30 at 0040fcc7
;   core_armour.cpp_CEnemy_dtor_FUN_0040fcf0 at 0040fd87
;   core_armour.cpp_CFlame_dtor_FUN_0040fdc0 at 0040fdec
;   core_backgnd.cpp_CBackgroundActor_dtor_FUN_004100f0 at 0041011c
;   core_baron.cpp_CBaronWeapon_dtor_FUN_00411610 at 0041163c
;   ... and 127 more
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056445f
        ;   Label: crt_memory.c___vec_delete_FUN_0056445f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00564460
    TEST EAX,EAX                        ; 00564464
    JNZ 0x0056446e                      ; 00564466
        ;   XREF to: 0056446e (CONDITIONAL_JUMP)  ; LAB_0056446e
    XOR EBX,EBX                         ; 00564468
    MOV EAX,EBX                         ; 0056446a
    POP EBX                             ; 0056446c
    RET                                 ; 0056446d
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056446e
        ;   Label: LAB_0056446e
    LEA EBX,[EAX + -0x4]                ; 00564472
    PUSH EDX                            ; 00564475
    MOV ECX,dword ptr [EBX]             ; 00564476
    PUSH ECX                            ; 00564478
    PUSH EAX                            ; 00564479
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0056447a
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0056447f
    MOV EAX,EBX                         ; 00564482
    POP EBX                             ; 00564484
    RET                                 ; 00564485


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl crt_memory_c___vec_delete_FUN_005c030f(int param_1,undefined4 param_2)
;
;
; XREF[159]:
;   cockpit_pkbitmap.cpp_FUN_00538990 at 0053899e
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730 at 00408767
;   core_ammo.cpp_CAmmo_dtor_FUN_0040e000 at 0040e02c
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_0040e520 at 0040e54c
;   core_anvil.cpp_CAnvil_dtor_FUN_0040e930 at 0040e95c
;   core_armour.cpp_CArmour_dtor_FUN_0040ecc0 at 0040ed23
;   core_armour.cpp_CEnemy_dtor_FUN_0040ed50 at 0040edb3
;   core_armour.cpp_CFlame_dtor_FUN_0040ede0 at 0040ee0c
;   core_backgnd.cpp_CBackgroundActor_dtor_FUN_0040f130 at 0040f15c
;   core_baron.cpp_CBaronWeapon_dtor_FUN_00410730 at 0041075c
;   ... and 149 more
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c030f
        ;   Label: crt_memory.c___vec_delete_FUN_005c030f
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c0310
    TEST EAX,EAX                        ; 005c0314
    JNZ 0x005c031e                      ; 005c0316
        ;   XREF to: 005c031e (CONDITIONAL_JUMP)  ; LAB_005c031e
    XOR EBX,EBX                         ; 005c0318
    MOV EAX,EBX                         ; 005c031a
    POP EBX                             ; 005c031c
    RET                                 ; 005c031d
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c031e
        ;   Label: LAB_005c031e
    LEA EBX,[EAX + -0x4]                ; 005c0322
    PUSH EDX                            ; 005c0325
    MOV ECX,dword ptr [EBX]             ; 005c0326
    PUSH ECX                            ; 005c0328
    PUSH EAX                            ; 005c0329
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 005c032a
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005c1066()
    ADD ESP,0xc                         ; 005c032f
    MOV EAX,EBX                         ; 005c0332
    POP EBX                             ; 005c0334
    RET                                 ; 005c0335


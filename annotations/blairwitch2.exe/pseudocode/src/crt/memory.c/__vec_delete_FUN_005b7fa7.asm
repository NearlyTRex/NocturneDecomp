; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl crt_memory_c___vec_delete_FUN_005b7fa7(int param_1,undefined4 param_2)
;
;
; XREF[172]:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930 at 00408987
;   core_ammo.cpp_CAmmo_dtor_FUN_0040de50 at 0040de86
;   core_ammobox.cpp_CAmmoBox_dtor_FUN_0040e980 at 0040e9ac
;   core_anvil.cpp_CAnvil_dtor_FUN_0040ed90 at 0040edbc
;   core_armour.cpp_CArmour_dtor_FUN_0040f120 at 0040f193
;   core_armour.cpp_CEnemy_dtor_FUN_0040f1c0 at 0040f233
;   core_armour.cpp_CFlame_dtor_FUN_0040f260 at 0040f28c
;   core_backgnd.cpp_CBackgroundActor_dtor_FUN_0040f5b0 at 0040f5dc
;   core_baron.cpp_CBaronWeapon_dtor_FUN_00410bb0 at 00410bdc
;   core_baron.cpp_CBaron_dtor_FUN_00410c00 at 00410c2c
;   ... and 162 more
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7fa7
        ;   Label: crt_memory.c___vec_delete_FUN_005b7fa7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b7fa8
    TEST EAX,EAX                        ; 005b7fac
    JNZ 0x005b7fb6                      ; 005b7fae
        ;   XREF to: 005b7fb6 (CONDITIONAL_JUMP)  ; LAB_005b7fb6
    XOR EBX,EBX                         ; 005b7fb0
    MOV EAX,EBX                         ; 005b7fb2
    POP EBX                             ; 005b7fb4
    RET                                 ; 005b7fb5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b7fb6
        ;   Label: LAB_005b7fb6
    LEA EBX,[EAX + -0x4]                ; 005b7fba
    PUSH EDX                            ; 005b7fbd
    MOV ECX,dword ptr [EBX]             ; 005b7fbe
    PUSH ECX                            ; 005b7fc0
    PUSH EAX                            ; 005b7fc1
    CALL crt_memory.c___arrfini_FUN_005b854f ; 005b7fc2
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 005b7fc7
    MOV EAX,EBX                         ; 005b7fca
    POP EBX                             ; 005b7fcc
    RET                                 ; 005b7fcd


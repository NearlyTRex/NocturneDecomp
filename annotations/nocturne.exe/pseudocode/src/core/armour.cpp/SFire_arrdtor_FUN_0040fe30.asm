; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_armour_cpp_SFire_arrdtor_FUN_0040fe30(undefined4 param_1)
;
;
; XREF[37]:
;   core_armour.cpp_CEnemy_dtor_FUN_0040fcf0 at 0040fd19
;   core_armour.cpp_FUN_0040fc30 at 0040fc59
;   core_batcreat.cpp_FUN_004132c0 at 004132e9
;   core_batman.cpp_FUN_00414c60 at 00414c89
;   core_beast.cpp_FUN_00415250 at 00415279
;   core_biggs.cpp_FUN_00415a30 at 00415a69
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041a400 at 0041a439
;   core_bride.cpp_FUN_00420f20 at 00420f49
;   core_bugs.cpp_FUN_00423d90 at 00423dc9
;   core_charactr.cpp_CCharacter_dtor_FUN_0042b5d0 at 0042b5f9
;   ... and 27 more
;
; Referenced Globals:
;   WatcomTypeInfo g_SFireTypeInfo_00599960
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x599960                       ; 0040fe30 | g_SFireTypeInfo_00599960
        ;   Label: core_armour.cpp_SFire_arrdtor_FUN_0040fe30
    PUSH 0x32                           ; 0040fe35
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040fe37
    PUSH EDX                            ; 0040fe3b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0040fe3c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0040fe41
    RET                                 ; 0040fe44


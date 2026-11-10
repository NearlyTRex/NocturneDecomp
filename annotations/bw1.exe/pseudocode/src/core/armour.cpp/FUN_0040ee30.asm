; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_armour_cpp_FUN_0040ee30(undefined4 param_1)
;
;
; XREF[47]:
;   core_armour.cpp_CArmour_dtor_FUN_0040ecc0 at 0040ecd5
;   core_armour.cpp_CEnemy_dtor_FUN_0040ed50 at 0040ed65
;   core_batcreat.cpp_CBatCreature_dtor_FUN_00412690 at 004126a5
;   core_batman.cpp_CBatman_dtor_FUN_00414320 at 00414335
;   core_beast.cpp_CBeast_dtor_FUN_00414900 at 00414915
;   core_biggs.cpp_CBiggs_dtor_FUN_004150f0 at 00415115
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041d850 at 0041d865
;   core_bride.cpp_CBride_dtor_FUN_00424e90 at 00424ea5
;   core_bugs.cpp_CBugs_dtor_FUN_00428180 at 00428195
;   core_carved.cpp_CCarved_dtor_FUN_0042bf50 at 0042bf65
;   ... and 37 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fb960                       ; 0040ee30 | g_CFlameTypeInfo
        ;   Label: core_armour.cpp_FUN_0040ee30
    PUSH 0x32                           ; 0040ee35
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040ee37
    PUSH EDX                            ; 0040ee3b
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 0040ee3c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005c1066()
    ADD ESP,0xc                         ; 0040ee41
    RET                                 ; 0040ee44


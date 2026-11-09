; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_armour_cpp_FUN_0040f2b0(undefined4 param_1)
;
;
; XREF[56]:
;   core_armour.cpp_CArmour_dtor_FUN_0040f120 at 0040f135
;   core_armour.cpp_CEnemy_dtor_FUN_0040f1c0 at 0040f1d5
;   core_basicnpc.cpp_CBasicNPC_dtor_FUN_005a4980 at 005a4995
;   core_batcreat.cpp_CBatCreature_dtor_FUN_00412a20 at 00412a35
;   core_batman.cpp_CBatman_dtor_FUN_00414620 at 00414635
;   core_beast.cpp_CBeast_dtor_FUN_00414c10 at 00414c25
;   core_belling.cpp_CBelling_dtor_FUN_005a9130 at 005a9145
;   core_biggs.cpp_CBiggs_dtor_FUN_00415410 at 00415435
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041a3d0 at 0041a3e5
;   core_bride.cpp_CBride_dtor_FUN_0041ee50 at 0041ee65
;   ... and 46 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CFlameTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f2820                       ; 0040f2b0 | g_CFlameTypeInfo
        ;   Label: unkafter_armour.cpp_FUN_0040f2b0
    PUSH 0x32                           ; 0040f2b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040f2b7
    PUSH EDX                            ; 0040f2bb
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0040f2bc
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 0040f2c1
    RET                                 ; 0040f2c4


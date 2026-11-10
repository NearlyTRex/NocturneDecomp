; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_motion_cpp_FUN_005035c0(int *param_1)
;
;
; XREF[152]:
;   core_armour.cpp_CArmour_process_FUN_0040ef00 at 0040ef82
;   core_baron.cpp_CBaronWeapon_isReadyToFire_FUN_004109d0 at 00410a13
;   core_baron.cpp_CBaron_process_FUN_0040f950 at 0040fea7
;   core_baron.cpp_CBaron_renderTransparent_FUN_00410670 at 0041069c
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00412760 at 0041291a
;   core_batcreat.cpp_CBatCreature_process_FUN_00411a10 at 00411aaa
;   core_batman.cpp_CBatman_processDamage_FUN_00414290 at 0041444a
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 00412fd7
;   core_biggs.cpp_CBiggs_process_FUN_00414e50 at 00414ec6
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 00418af9
;   ... and 142 more
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 005035c0
        ;   Label: core_motion.cpp_FUN_005035c0
    MOV EDX,dword ptr [ECX + 0x4]       ; 005035c4
    LEA EAX,[EDX*0x8 + 0x0]             ; 005035c7
    ADD EAX,EDX                         ; 005035ce
    SHL EAX,0x2                         ; 005035d0
    SUB EAX,EDX                         ; 005035d3
    MOV EDX,dword ptr [ECX]             ; 005035d5
    SHL EAX,0x3                         ; 005035d7
    ADD EDX,0x1c28                      ; 005035da
    ADD EAX,EDX                         ; 005035e0
    RET                                 ; 005035e2


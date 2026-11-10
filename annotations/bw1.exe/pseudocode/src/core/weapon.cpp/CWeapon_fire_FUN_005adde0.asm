; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_weapon_cpp_CWeapon_fire_FUN_005adde0(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_crossbow.cpp_CCrossbow_fire_FUN_00449a50 at 00449ab1
;   core_dynamite.cpp_CDynamite_fire_FUN_00492590 at 00492596
;   core_elephant.cpp_CElephantGun_fire_FUN_0049e1a0 at 0049e204
;   core_gun.cpp_CGun_fire_FUN_004e8630 at 004e868e
;   core_lightgun.cpp_CLightGun_fire_FUN_00500310 at 00500323
;   core_lightpis.cpp_CLightPis_fire_FUN_00501a70 at 00501a83
;   core_rifle.cpp_CRifle_fire_FUN_00540080 at 005400de
;   core_shotgun.cpp_CShotgun_fire_FUN_00561760 at 005617c4
;   core_tommygun.cpp_CTommyGun_fire_FUN_00598420 at 005984b8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005adde0
        ;   Label: core_weapon.cpp_CWeapon_fire_FUN_005adde0
    MOV ECX,dword ptr [EDX + 0x568]     ; 005adde4
    TEST ECX,ECX                        ; 005addea
    JLE 0x005ade00                      ; 005addec
        ;   XREF to: 005ade00 (CONDITIONAL_JUMP)  ; LAB_005ade00
    PUSH EBX                            ; 005addee
    MOV EAX,0x1                         ; 005addef
    MOV EBX,ECX                         ; 005addf4
    SUB EBX,EAX                         ; 005addf6
    MOV dword ptr [EDX + 0x568],EBX     ; 005addf8
    POP EBX                             ; 005addfe
    RET                                 ; 005addff
    XOR EAX,EAX                         ; 005ade00
        ;   Label: LAB_005ade00
    RET                                 ; 005ade02


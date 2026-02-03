; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_weapon_cpp_CWeapon_FUN_005ee6e0(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_crossbow.cpp_CCrossbow_FUN_00448f20 at 00448f5d
;   core_dynamite.cpp_CDynamite_fire_FUN_0049ce70 at 0049ce76
;   core_elephant.cpp_CElephantGun_fire_FUN_004a7160 at 004a719d
;   core_gun.cpp_CGun_FUN_004f0350 at 004f038d
;   core_shotgun.cpp_FUN_00588060 at 0058809a
;   core_tommygun.cpp_FUN_005ddb30 at 005ddba1
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ee6e0
        ;   Label: core_weapon.cpp_CWeapon_FUN_005ee6e0
    MOV ECX,dword ptr [EDX + 0x568]     ; 005ee6e4
    TEST ECX,ECX                        ; 005ee6ea
    JLE 0x005ee330                      ; 005ee6ec
        ;   XREF to: 005ee330 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005ee6f2
    MOV EAX,0x1                         ; 005ee6f3
    MOV EBX,ECX                         ; 005ee6f8
    SUB EBX,EAX                         ; 005ee6fa
    MOV dword ptr [EDX + 0x568],EBX     ; 005ee6fc
    POP EBX                             ; 005ee702
    RET                                 ; 005ee703


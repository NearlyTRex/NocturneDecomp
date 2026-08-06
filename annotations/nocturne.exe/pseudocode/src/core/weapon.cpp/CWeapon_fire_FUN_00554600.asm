; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_weapon_cpp_CWeapon_fire_FUN_00554600(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_crossbow.cpp_CCrossbow_fire_FUN_0043d1c0 at 0043d1fd
;   core_dynamite.cpp_FUN_0046ec80 at 0046ec86
;   core_elephant.cpp_CElephantGun_fire_FUN_00477890 at 004778c7
;   core_gun.cpp_CGun_fire_FUN_004b27c0 at 004b27fd
;   core_shotgun.cpp_CShotgun_fire_FUN_00515ea0 at 00515edd
;   core_tommygun.cpp_CTommyGun_fire_FUN_00545c30 at 00545ca1
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00554600
        ;   Label: core_weapon.cpp_CWeapon_fire_FUN_00554600
    MOV ECX,dword ptr [EDX + 0x560]     ; 00554604
    TEST ECX,ECX                        ; 0055460a
    JLE 0x00554250                      ; 0055460c
        ;   XREF to: 00554250 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00554612
    MOV EAX,0x1                         ; 00554613
    MOV EBX,ECX                         ; 00554618
    SUB EBX,EAX                         ; 0055461a
    MOV dword ptr [EDX + 0x560],EBX     ; 0055461c
    POP EBX                             ; 00554622
    RET                                 ; 00554623


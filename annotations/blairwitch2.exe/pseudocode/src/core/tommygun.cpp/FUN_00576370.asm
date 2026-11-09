; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tommygun_cpp_FUN_00576370(CWeapon *param_1,int param_2)
;
;
; Called Functions:
;   core_weapon.cpp_FUN_0058a200
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576370
        ;   Label: core_tommygun.cpp_FUN_00576370
    MOV EAX,dword ptr [ESP + 0x8]       ; 00576371
    MOV EDX,dword ptr [EAX + 0x6d8]     ; 00576375
    PUSH EDX                            ; 0057637b
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0057637c
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00576381
    MOV ECX,dword ptr [ESP + 0xc]       ; 00576384
    PUSH ECX                            ; 00576388
    MOV EBX,dword ptr [ESP + 0xc]       ; 00576389
    PUSH EBX                            ; 0057638d
    CALL core_weapon.cpp_FUN_0058a200   ; 0057638e
        ;   XREF to: 0058a200 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_FUN_0058a200(CWeapon * this_ptr, int weapon_state)
    ADD ESP,0x8                         ; 00576393
    POP EBX                             ; 00576396
    RET                                 ; 00576397


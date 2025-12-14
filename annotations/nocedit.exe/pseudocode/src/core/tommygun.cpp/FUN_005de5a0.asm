; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_tommygun.cpp_FUN_005de5a0()
;
;
; Called Functions:
;   core_weapon.cpp_CWeapon_FUN_005ee640
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005de5a0
        ;   Label: core_tommygun.cpp_FUN_005de5a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005de5a1
    MOV EDX,dword ptr [EAX + 0x57c]     ; 005de5a5
    PUSH EDX                            ; 005de5ab
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005de5ac
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005de5b1
    MOV ECX,dword ptr [ESP + 0xc]       ; 005de5b4
    PUSH ECX                            ; 005de5b8
    MOV EBX,dword ptr [ESP + 0xc]       ; 005de5b9
    PUSH EBX                            ; 005de5bd
    CALL core_weapon.cpp_CWeapon_FUN_005ee640 ; 005de5be
        ;   XREF to: 005ee640 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_FUN_005ee640(CWeapon * this_ptr)
    ADD ESP,0x8                         ; 005de5c3
    POP EBX                             ; 005de5c6
    RET                                 ; 005de5c7


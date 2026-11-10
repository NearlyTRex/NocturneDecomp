; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_storm_cpp_CStorm_setup_FUN_00568c10(CStorm *this_ptr)
;
; Parameters:
; CStorm *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_006071f0
;
; Called Functions:
;   core_fire.cpp_FUN_004a4340
;   core_weapon.cpp_CWeapon_setup_FUN_0057af40
;   core_weather.cpp_FUN_0057d420
;   sound_sndmain.cpp_FUN_00556230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568c10
        ;   Label: core_storm.cpp_CStorm_setup_FUN_00568c10
    MOV EDX,dword ptr [ESP + 0x8]       ; 00568c11
    PUSH EDX                            ; 00568c15
    CALL core_weapon.cpp_CWeapon_setup_FUN_0057af40 ; 00568c16
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_0057af40(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00568c1b
    PUSH 0x5d5ce7                       ; 00568c1e
    CALL sound_sndmain.cpp_FUN_00556230 ; 00568c23
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00568c28
    PUSH 0x5d5cf5                       ; 00568c2b
    CALL sound_sndmain.cpp_FUN_00556230 ; 00568c30
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00568c35
    PUSH 0x5                            ; 00568c38
    MOV ECX,dword ptr [0x006071f0]      ; 00568c3a | DAT_006071f0
    PUSH ECX                            ; 00568c40
    CALL core_weather.cpp_FUN_0057d420  ; 00568c41
        ;   XREF to: 0057d420 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_FUN_0057d420()
    ADD ESP,0x8                         ; 00568c46
    PUSH 0x3                            ; 00568c49
    MOV EBX,dword ptr [0x005fc5a0]      ; 00568c4b | DAT_005fc5a0
    PUSH EBX                            ; 00568c51
    CALL core_fire.cpp_FUN_004a4340     ; 00568c52
        ;   XREF to: 004a4340 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a4340()
    ADD ESP,0x8                         ; 00568c57
    POP EBX                             ; 00568c5a
    RET                                 ; 00568c5b


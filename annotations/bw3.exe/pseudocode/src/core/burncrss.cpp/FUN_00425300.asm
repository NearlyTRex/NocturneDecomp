; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_burncrss_cpp_FUN_00425300(CWeapon *param_1,int param_2)
;
;
; Called Functions:
;   core_weapon.cpp_CWeapon_setWeaponState_FUN_0057b7f0
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425300
        ;   Label: core_burncrss.cpp_FUN_00425300
    PUSH EDI                            ; 00425301
    MOV EBX,dword ptr [ESP + 0xc]       ; 00425302
    CMP dword ptr [EBX + 0x2d4],0x2     ; 00425306
    JNZ 0x00425345                      ; 0042530d
        ;   XREF to: 00425345 (CONDITIONAL_JUMP)  ; LAB_00425345
    CMP dword ptr [ESP + 0x10],0x1      ; 0042530f
    JNZ 0x00425345                      ; 00425314
        ;   XREF to: 00425345 (CONDITIONAL_JUMP)  ; LAB_00425345
    PUSH ESI                            ; 00425316
    MOV ESI,dword ptr [EBX + 0x5a4]     ; 00425317
    PUSH ESI                            ; 0042531d
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0042531e
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    MOV dword ptr [EBX + 0x5a4],0x0     ; 00425323
    MOV dword ptr [EBX + 0x59c],0x0     ; 0042532d
    ADD ESP,0x4                         ; 00425337
    MOV dword ptr [EBX + 0x5a0],0x0     ; 0042533a
    POP ESI                             ; 00425344
    MOV EDI,dword ptr [ESP + 0x10]      ; 00425345
        ;   Label: LAB_00425345
    PUSH EDI                            ; 00425349
    PUSH EBX                            ; 0042534a
    CALL core_weapon.cpp_CWeapon_setWeaponState_FUN_0057b7f0 ; 0042534b
        ;   XREF to: 0057b7f0 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setWeaponState_FUN_0057b7f0(CWeapon * this_ptr, int weapon_state)
    ADD ESP,0x8                         ; 00425350
    POP EDI                             ; 00425353
    POP EBX                             ; 00425354
    RET                                 ; 00425355


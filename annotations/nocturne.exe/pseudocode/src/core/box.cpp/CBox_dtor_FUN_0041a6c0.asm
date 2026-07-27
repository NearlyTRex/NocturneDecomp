; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_box_cpp_CBox_dtor_FUN_0041a6c0(int param_1)
;
;
; XREF[8]:
;   core_bodypart.cpp_CBodyPart_dtor_FUN_00415e40 at 00415e6c
;   core_boxactor.cpp_FUN_0041fa10 at 0041fa35
;   core_boxactor.cpp_FUN_0041fa90 at 0041faa5
;   core_fire.cpp_CStake_dtor_FUN_0048cc30 at 0048cc3a
;   core_fire.cpp_CToss_dtor_FUN_0048ca90 at 0048ca9c
;   core_simbox.cpp_FUN_005170d0 at 005170e5
;   core_stone.cpp_FUN_00534dc0 at 00534dd5
;   core_weapon.cpp_CWeapon_dtor_FUN_00553ea0 at 00553ebf
;
; Called Functions:
;   core_box.cpp_SScrape_arrdtor_FUN_0041cbe0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041a6c0
        ;   Label: core_box.cpp_CBox_dtor_FUN_0041a6c0
    PUSH 0x0                            ; 0041a6c4
    ADD EAX,0xb4                        ; 0041a6c6
    PUSH EAX                            ; 0041a6cb
    CALL core_box.cpp_SScrape_arrdtor_FUN_0041cbe0 ; 0041a6cc
        ;   XREF to: 0041cbe0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_SScrape_arrdtor_FUN_0041cbe0()
    ADD ESP,0x8                         ; 0041a6d1
    SUB EAX,0xb4                        ; 0041a6d4
    RET                                 ; 0041a6d9


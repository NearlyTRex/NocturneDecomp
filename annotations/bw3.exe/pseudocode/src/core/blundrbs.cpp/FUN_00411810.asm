; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_blundrbs_cpp_FUN_00411810(CWeapon *param_1)
;
;
; Called Functions:
;   core_weapon.cpp_FUN_0057af40
;   sound_sndmain.cpp_FUN_00556230
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00411810
        ;   Label: core_blundrbs.cpp_FUN_00411810
    PUSH EDX                            ; 00411814
    CALL core_weapon.cpp_FUN_0057af40   ; 00411815
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_FUN_0057af40(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0041181a
    PUSH 0x5b6552                       ; 0041181d
    CALL sound_sndmain.cpp_FUN_00556230 ; 00411822
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00411827
    PUSH 0x5b6560                       ; 0041182a
    CALL sound_sndmain.cpp_FUN_00556230 ; 0041182f
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00411834
    PUSH 0x5b656d                       ; 00411837
    CALL sound_sndmain.cpp_FUN_00556230 ; 0041183c
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00411841
    PUSH 0x5b657a                       ; 00411844
    CALL sound_sndmain.cpp_FUN_00556230 ; 00411849
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0041184e
    PUSH 0x5b6587                       ; 00411851
    CALL sound_sndmain.cpp_FUN_00556230 ; 00411856
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0041185b
    PUSH 0x5b6594                       ; 0041185e
    CALL sound_sndmain.cpp_FUN_00556230 ; 00411863
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00411868
    PUSH 0x5b65a1                       ; 0041186b
    CALL sound_sndmain.cpp_FUN_00556230 ; 00411870
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00411875
    PUSH 0x5b65ac                       ; 00411878
    CALL sound_sndmain.cpp_FUN_00556230 ; 0041187d
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 00411882
    RET                                 ; 00411885


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_heal_cpp_FUN_004d1c80(CWeapon *param_1)
;
;
; Called Functions:
;   core_weapon.cpp_FUN_0057af40
;   sound_sndmain.cpp_FUN_00556230
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d1c80
        ;   Label: core_heal.cpp_FUN_004d1c80
    PUSH EDX                            ; 004d1c84
    CALL core_weapon.cpp_FUN_0057af40   ; 004d1c85
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_FUN_0057af40(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004d1c8a
    PUSH 0x5c4a43                       ; 004d1c8d
    CALL sound_sndmain.cpp_FUN_00556230 ; 004d1c92
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 004d1c97
    PUSH 0x5c4a51                       ; 004d1c9a
    CALL sound_sndmain.cpp_FUN_00556230 ; 004d1c9f
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 004d1ca4
    RET                                 ; 004d1ca7


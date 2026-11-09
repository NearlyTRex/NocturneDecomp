; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bindevil_cpp_FUN_0040f900(CWeapon *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_fire.cpp_FUN_004a4340
;   core_weapon.cpp_FUN_0057af40
;   sound_sndmain.cpp_FUN_00556230
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040f900
        ;   Label: core_bindevil.cpp_FUN_0040f900
    PUSH EDX                            ; 0040f904
    CALL core_weapon.cpp_FUN_0057af40   ; 0040f905
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_FUN_0057af40(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0040f90a
    PUSH 0x5b6351                       ; 0040f90d
    CALL sound_sndmain.cpp_FUN_00556230 ; 0040f912
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0040f917
    PUSH 0x5b635f                       ; 0040f91a
    CALL sound_sndmain.cpp_FUN_00556230 ; 0040f91f
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556230()
    ADD ESP,0x4                         ; 0040f924
    PUSH 0x1                            ; 0040f927
    MOV ECX,dword ptr [0x005fc5a0]      ; 0040f929 | DAT_005fc5a0
    PUSH ECX                            ; 0040f92f
    CALL core_fire.cpp_FUN_004a4340     ; 0040f930
        ;   XREF to: 004a4340 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a4340()
    ADD ESP,0x8                         ; 0040f935
    RET                                 ; 0040f938


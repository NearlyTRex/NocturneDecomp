; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baron_cpp_CBaronWeapon_process_FUN_004113d0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530
;   core_weapon.cpp_CWeapon_process_FUN_00554030
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004113d0
        ;   Label: core_baron.cpp_CBaronWeapon_process_FUN_004113d0
    PUSH EDX                            ; 004113d4
    CALL core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530 ; 004113d5
        ;   XREF to: 00411530 (UNCONDITIONAL_CALL)  ; undefined core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530()
    ADD ESP,0x4                         ; 004113da
    MOV ECX,dword ptr [ESP + 0x4]       ; 004113dd
    PUSH dword ptr [ESP + 0x8]          ; 004113e1
    PUSH ECX                            ; 004113e5
    CALL core_weapon.cpp_CWeapon_process_FUN_00554030 ; 004113e6
        ;   XREF to: 00554030 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_process_FUN_00554030()
    ADD ESP,0x8                         ; 004113eb
    RET                                 ; 004113ee


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * crt_unknown_c_debugAllocTracked1_FUN_005b8be2(ulong param_1)
;
;
; XREF[159]:
;   core_ammo.cpp_factoryFuncAmmo_FUN_0040dd80 at 0040dd85
;   core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e670 at 0040e6ba
;   core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040e4e0 at 0040e4e5
;   core_anvil.cpp_factoryFuncAnvil_FUN_0040ea00 at 0040ea05
;   core_armour.cpp_factoryFuncArmour_FUN_0040ee10 at 0040ee15
;   core_backgnd.cpp_factoryFuncBackgroundActor_FUN_0040f300 at 0040f305
;   core_baron.cpp_factoryFuncBaronWeapon_FUN_004108b0 at 004108b5
;   core_baron.cpp_factoryFuncBaron_FUN_0040f660 at 0040f665
;   core_barrier.cpp_factoryFuncBarrier_FUN_00410c80 at 00410c85
;   core_basicnpc.cpp_factoryFuncBasicNPC_FUN_005a4780 at 005a4785
;   ... and 149 more
;
; Referenced Globals:
;   undefined4 DAT_026807c8
;   undefined4 DAT_026807cc
;
; Called Functions:
;   crt_unknown.c_FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8be2
        ;   Label: crt_unknown.c_debugAllocTracked1_FUN_005b8be2
    PUSH ESI                            ; 005b8be3
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b8be4
    TEST EBX,EBX                        ; 005b8be8
    JZ 0x005b8c12                       ; 005b8bea
        ;   XREF to: 005b8c12 (CONDITIONAL_JUMP)  ; LAB_005b8c12
    PUSH EBX                            ; 005b8bec
        ;   Label: LAB_005b8bec
    CALL crt_unknown.c_FUN_005b8580     ; 005b8bed
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005b8bf2
    MOV ESI,EAX                         ; 005b8bf5
    TEST EAX,EAX                        ; 005b8bf7
    JNZ 0x005b8c0d                      ; 005b8bf9
        ;   XREF to: 005b8c0d (CONDITIONAL_JUMP)  ; LAB_005b8c0d
    MOV EAX,[0x026807cc]                ; 005b8bfb | DAT_026807cc
    TEST EAX,EAX                        ; 005b8c00
    JNZ 0x005b8c15                      ; 005b8c02
        ;   XREF to: 005b8c15 (CONDITIONAL_JUMP)  ; LAB_005b8c15
    MOV EAX,[0x026807c8]                ; 005b8c04 | DAT_026807c8
        ;   Label: LAB_005b8c04
    TEST EAX,EAX                        ; 005b8c09
    JNZ 0x005b8c21                      ; 005b8c0b
        ;   XREF to: 005b8c21 (CONDITIONAL_JUMP)  ; LAB_005b8c21
    MOV EAX,ESI                         ; 005b8c0d
        ;   Label: LAB_005b8c0d
    POP ESI                             ; 005b8c0f
    POP EBX                             ; 005b8c10
    RET                                 ; 005b8c11
    INC EBX                             ; 005b8c12
        ;   Label: LAB_005b8c12
    JMP 0x005b8bec                      ; 005b8c13
        ;   XREF to: 005b8bec (UNCONDITIONAL_JUMP)  ; LAB_005b8bec
    PUSH EBX                            ; 005b8c15
        ;   Label: LAB_005b8c15
    CALL EAX                            ; 005b8c16
    ADD ESP,0x4                         ; 005b8c18
    TEST EAX,EAX                        ; 005b8c1b
    JNZ 0x005b8bec                      ; 005b8c1d
        ;   XREF to: 005b8bec (CONDITIONAL_JUMP)  ; LAB_005b8bec
    JMP 0x005b8c04                      ; 005b8c1f
        ;   XREF to: 005b8c04 (UNCONDITIONAL_JUMP)  ; LAB_005b8c04
    CALL EAX                            ; 005b8c21
        ;   Label: LAB_005b8c21
    JMP 0x005b8bec                      ; 005b8c23
        ;   XREF to: 005b8bec (UNCONDITIONAL_JUMP)  ; LAB_005b8bec


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * crt_unknown_c_debugAllocTracked1_FUN_005a3cb2(ulong param_1)
;
;
; XREF[149]:
;   core_ammo.cpp_FUN_0040e0c0 at 0040e0c5
;   core_ammo.cpp_FUN_0040e230 at 0040e235
;   core_ammo.cpp_FUN_0040e3a0 at 0040e3a5
;   core_ammo.cpp_factoryFuncAmmo_FUN_0040de30 at 0040de35
;   core_ammobox.cpp_CAmmoBox_addToInventory_FUN_0040e720 at 0040e768
;   core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040e590 at 0040e595
;   core_asgaya.cpp_factoryFuncAsgaya_FUN_005a09e0 at 005a09e5
;   core_baal.cpp_factoryFuncBaal_FUN_00596630 at 00596635
;   core_barrier.cpp_factoryFuncBarrier_FUN_0040ea90 at 0040ea95
;   core_bat.cpp_factoryFuncBat_FUN_0040edb0 at 0040edb5
;   ... and 139 more
;
; Referenced Globals:
;   undefined4 DAT_02d25908
;   undefined4 DAT_02d2590c
;
; Called Functions:
;   crt_unknown.c_FUN_005a3650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3cb2
        ;   Label: crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
    PUSH ESI                            ; 005a3cb3
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3cb4
    TEST EBX,EBX                        ; 005a3cb8
    JZ 0x005a3ce2                       ; 005a3cba
        ;   XREF to: 005a3ce2 (CONDITIONAL_JUMP)  ; LAB_005a3ce2
    PUSH EBX                            ; 005a3cbc
        ;   Label: LAB_005a3cbc
    CALL crt_unknown.c_FUN_005a3650     ; 005a3cbd
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005a3cc2
    MOV ESI,EAX                         ; 005a3cc5
    TEST EAX,EAX                        ; 005a3cc7
    JNZ 0x005a3cdd                      ; 005a3cc9
        ;   XREF to: 005a3cdd (CONDITIONAL_JUMP)  ; LAB_005a3cdd
    MOV EAX,[0x02d2590c]                ; 005a3ccb | DAT_02d2590c
    TEST EAX,EAX                        ; 005a3cd0
    JNZ 0x005a3ce5                      ; 005a3cd2
        ;   XREF to: 005a3ce5 (CONDITIONAL_JUMP)  ; LAB_005a3ce5
    MOV EAX,[0x02d25908]                ; 005a3cd4 | DAT_02d25908
        ;   Label: LAB_005a3cd4
    TEST EAX,EAX                        ; 005a3cd9
    JNZ 0x005a3cf1                      ; 005a3cdb
        ;   XREF to: 005a3cf1 (CONDITIONAL_JUMP)  ; LAB_005a3cf1
    MOV EAX,ESI                         ; 005a3cdd
        ;   Label: LAB_005a3cdd
    POP ESI                             ; 005a3cdf
    POP EBX                             ; 005a3ce0
    RET                                 ; 005a3ce1
    INC EBX                             ; 005a3ce2
        ;   Label: LAB_005a3ce2
    JMP 0x005a3cbc                      ; 005a3ce3
        ;   XREF to: 005a3cbc (UNCONDITIONAL_JUMP)  ; LAB_005a3cbc
    PUSH EBX                            ; 005a3ce5
        ;   Label: LAB_005a3ce5
    CALL EAX                            ; 005a3ce6
    ADD ESP,0x4                         ; 005a3ce8
    TEST EAX,EAX                        ; 005a3ceb
    JNZ 0x005a3cbc                      ; 005a3ced
        ;   XREF to: 005a3cbc (CONDITIONAL_JUMP)  ; LAB_005a3cbc
    JMP 0x005a3cd4                      ; 005a3cef
        ;   XREF to: 005a3cd4 (UNCONDITIONAL_JUMP)  ; LAB_005a3cd4
    CALL EAX                            ; 005a3cf1
        ;   Label: LAB_005a3cf1
    JMP 0x005a3cbc                      ; 005a3cf3
        ;   XREF to: 005a3cbc (UNCONDITIONAL_JUMP)  ; LAB_005a3cbc


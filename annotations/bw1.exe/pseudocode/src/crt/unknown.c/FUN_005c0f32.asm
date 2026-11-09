; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * crt_unknown_c_FUN_005c0f32(ulong param_1)
;
;
; XREF[146]:
;   core_ammo.cpp_factoryFuncAmmo_FUN_0040db90 at 0040db95
;   core_ammobox.cpp_FUN_0040e210 at 0040e258
;   core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040e080 at 0040e085
;   core_anvil.cpp_factoryFuncAnvil_FUN_0040e5a0 at 0040e5a5
;   core_armour.cpp_factoryFuncArmour_FUN_0040e9b0 at 0040e9b5
;   core_backgnd.cpp_factoryFuncBackgroundActor_FUN_0040ee80 at 0040ee85
;   core_baron.cpp_FUN_00410430 at 00410435
;   core_baron.cpp_factoryFuncBaron_FUN_0040f1e0 at 0040f1e5
;   core_barrier.cpp_factoryFuncBarrier_FUN_00410800 at 00410805
;   core_bat.cpp_factoryFuncBat_FUN_00410b20 at 00410b25
;   ... and 136 more
;
; Referenced Globals:
;   undefined4 DAT_02c9f6b8
;   undefined4 DAT_02c9f6bc
;
; Called Functions:
;   crt_unknown.c_FUN_005c08d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0f32
        ;   Label: crt_unknown.c_FUN_005c0f32
    PUSH ESI                            ; 005c0f33
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c0f34
    TEST EBX,EBX                        ; 005c0f38
    JZ 0x005c0f62                       ; 005c0f3a
        ;   XREF to: 005c0f62 (CONDITIONAL_JUMP)  ; LAB_005c0f62
    PUSH EBX                            ; 005c0f3c
        ;   Label: LAB_005c0f3c
    CALL crt_unknown.c_FUN_005c08d0     ; 005c0f3d
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005c0f42
    MOV ESI,EAX                         ; 005c0f45
    TEST EAX,EAX                        ; 005c0f47
    JNZ 0x005c0f5d                      ; 005c0f49
        ;   XREF to: 005c0f5d (CONDITIONAL_JUMP)  ; LAB_005c0f5d
    MOV EAX,[0x02c9f6bc]                ; 005c0f4b | DAT_02c9f6bc
    TEST EAX,EAX                        ; 005c0f50
    JNZ 0x005c0f65                      ; 005c0f52
        ;   XREF to: 005c0f65 (CONDITIONAL_JUMP)  ; LAB_005c0f65
    MOV EAX,[0x02c9f6b8]                ; 005c0f54 | DAT_02c9f6b8
        ;   Label: LAB_005c0f54
    TEST EAX,EAX                        ; 005c0f59
    JNZ 0x005c0f71                      ; 005c0f5b
        ;   XREF to: 005c0f71 (CONDITIONAL_JUMP)  ; LAB_005c0f71
    MOV EAX,ESI                         ; 005c0f5d
        ;   Label: LAB_005c0f5d
    POP ESI                             ; 005c0f5f
    POP EBX                             ; 005c0f60
    RET                                 ; 005c0f61
    INC EBX                             ; 005c0f62
        ;   Label: LAB_005c0f62
    JMP 0x005c0f3c                      ; 005c0f63
        ;   XREF to: 005c0f3c (UNCONDITIONAL_JUMP)  ; LAB_005c0f3c
    PUSH EBX                            ; 005c0f65
        ;   Label: LAB_005c0f65
    CALL EAX                            ; 005c0f66
    ADD ESP,0x4                         ; 005c0f68
    TEST EAX,EAX                        ; 005c0f6b
    JNZ 0x005c0f3c                      ; 005c0f6d
        ;   XREF to: 005c0f3c (CONDITIONAL_JUMP)  ; LAB_005c0f3c
    JMP 0x005c0f54                      ; 005c0f6f
        ;   XREF to: 005c0f54 (UNCONDITIONAL_JUMP)  ; LAB_005c0f54
    CALL EAX                            ; 005c0f71
        ;   Label: LAB_005c0f71
    JMP 0x005c0f3c                      ; 005c0f73
        ;   XREF to: 005c0f3c (UNCONDITIONAL_JUMP)  ; LAB_005c0f3c


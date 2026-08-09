; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_operator_new_FUN_0056497c(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
;
; XREF[129]:
;   core_ammo.cpp_factoryFuncAmmo_FUN_0040eb40 at 0040eb45
;   core_ammobox.cpp_CAmmoBox_FUN_0040f1a0 at 0040f1e8
;   core_ammobox.cpp_factoryFuncAmmoBox_FUN_0040f010 at 0040f015
;   core_anvil.cpp_factoryFuncAnvil_FUN_0040f530 at 0040f535
;   core_armour.cpp_factoryFuncArmour_FUN_0040f930 at 0040f935
;   core_backgnd.cpp_factoryFuncBackgroundActor_FUN_0040fea0 at 0040fea5
;   core_baron.cpp_factoryFuncBaron_FUN_004101a0 at 004101a5
;   core_baron.cpp_factoryFunc_FUN_00411320 at 00411325
;   core_barrier.cpp_factoryFuncBarrier_FUN_004116e0 at 004116e5
;   core_bat.cpp_factoryFuncBat_FUN_004119e0 at 004119e5
;   ... and 119 more
;
; Referenced Globals:
;   undefined4 DAT_02de5488
;   undefined4 DAT_02de548c
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056497c
        ;   Label: crt_memory.c_operator_new_FUN_0056497c
    PUSH ESI                            ; 0056497d
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056497e
    TEST EBX,EBX                        ; 00564982
    JZ 0x005649ac                       ; 00564984
        ;   XREF to: 005649ac (CONDITIONAL_JUMP)  ; LAB_005649ac
    PUSH EBX                            ; 00564986
        ;   Label: LAB_00564986
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00564987
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0056498c
    MOV ESI,EAX                         ; 0056498f
    TEST EAX,EAX                        ; 00564991
    JNZ 0x005649a7                      ; 00564993
        ;   XREF to: 005649a7 (CONDITIONAL_JUMP)  ; LAB_005649a7
    MOV EAX,[0x02de548c]                ; 00564995 | DAT_02de548c
    TEST EAX,EAX                        ; 0056499a
    JNZ 0x005649af                      ; 0056499c
        ;   XREF to: 005649af (CONDITIONAL_JUMP)  ; LAB_005649af
    MOV EAX,[0x02de5488]                ; 0056499e | DAT_02de5488
        ;   Label: LAB_0056499e
    TEST EAX,EAX                        ; 005649a3
    JNZ 0x005649bb                      ; 005649a5
        ;   XREF to: 005649bb (CONDITIONAL_JUMP)  ; LAB_005649bb
    MOV EAX,ESI                         ; 005649a7
        ;   Label: LAB_005649a7
    POP ESI                             ; 005649a9
    POP EBX                             ; 005649aa
    RET                                 ; 005649ab
    INC EBX                             ; 005649ac
        ;   Label: LAB_005649ac
    JMP 0x00564986                      ; 005649ad
        ;   XREF to: 00564986 (UNCONDITIONAL_JUMP)  ; LAB_00564986
    PUSH EBX                            ; 005649af
        ;   Label: LAB_005649af
    CALL EAX                            ; 005649b0
    ADD ESP,0x4                         ; 005649b2
    TEST EAX,EAX                        ; 005649b5
    JNZ 0x00564986                      ; 005649b7
        ;   XREF to: 00564986 (CONDITIONAL_JUMP)  ; LAB_00564986
    JMP 0x0056499e                      ; 005649b9
        ;   XREF to: 0056499e (UNCONDITIONAL_JUMP)  ; LAB_0056499e
    CALL EAX                            ; 005649bb
        ;   Label: LAB_005649bb
    JMP 0x00564986                      ; 005649bd
        ;   XREF to: 00564986 (UNCONDITIONAL_JUMP)  ; LAB_00564986


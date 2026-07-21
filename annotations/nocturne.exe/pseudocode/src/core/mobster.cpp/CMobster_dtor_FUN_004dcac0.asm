; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_mobster_cpp_CMobster_dtor_FUN_004dcac0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a0a80
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dcac0
        ;   Label: core_mobster.cpp_CMobster_dtor_FUN_004dcac0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004dcac1
    TEST byte ptr [ESP + 0xc],0x4       ; 004dcac5
    JNZ 0x004dcb51                      ; 004dcaca
        ;   XREF to: 004dcb51 (CONDITIONAL_JUMP)  ; LAB_004dcb51
    PUSH 0x0                            ; 004dcad0
    ADD EBX,0x33c4                      ; 004dcad2
    PUSH EBX                            ; 004dcad8
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 004dcad9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CFlame_arrdtor_FUN_0040fe50()
    ADD ESP,0x8                         ; 004dcade
    PUSH 0x0                            ; 004dcae1
    SUB EAX,0x4b0                       ; 004dcae3
    PUSH EAX                            ; 004dcae8
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 004dcae9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_SFire_arrdtor_FUN_0040fe30()
    ADD ESP,0x8                         ; 004dcaee
    PUSH 0x0                            ; 004dcaf1
    SUB EAX,0x20c                       ; 004dcaf3
    PUSH EAX                            ; 004dcaf8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004dcaf9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 004dcafe
    PUSH 0x0                            ; 004dcb01
    SUB EAX,0xb4                        ; 004dcb03
    PUSH EAX                            ; 004dcb08
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004dcb09
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 004dcb0e
    PUSH 0x0                            ; 004dcb11
    SUB EAX,0x1c8                       ; 004dcb13
    PUSH EAX                            ; 004dcb18
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 004dcb19
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_dtor_FUN_00438250()
    ADD ESP,0x8                         ; 004dcb1e
    PUSH 0x0                            ; 004dcb21
    SUB EAX,0x293c                      ; 004dcb23
    PUSH EAX                            ; 004dcb28
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 004dcb29
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0()
    ADD ESP,0x8                         ; 004dcb2e
    PUSH 0x1                            ; 004dcb31
    LEA EBX,[EAX + 0xfffffeb0]          ; 004dcb33
    PUSH EBX                            ; 004dcb39
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004dcb3a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 004dcb3f
    MOV DL,byte ptr [ESP + 0xc]         ; 004dcb42
    MOV EBX,EAX                         ; 004dcb46
    TEST DL,0x2                         ; 004dcb48
    JNZ 0x004dcb6c                      ; 004dcb4b
        ;   XREF to: 004dcb6c (CONDITIONAL_JUMP)  ; LAB_004dcb6c
    MOV EAX,EBX                         ; 004dcb4d
    POP EBX                             ; 004dcb4f
    RET                                 ; 004dcb50
    PUSH 0x5a0a80                       ; 004dcb51 | DAT_005a0a80
        ;   Label: LAB_004dcb51
    PUSH EBX                            ; 004dcb56
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004dcb57
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004dcb5c
    PUSH EAX                            ; 004dcb5f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004dcb60
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004dcb65
    MOV EAX,EBX                         ; 004dcb68
    POP EBX                             ; 004dcb6a
    RET                                 ; 004dcb6b
    PUSH EAX                            ; 004dcb6c
        ;   Label: LAB_004dcb6c
    CALL FUN_00564494                   ; 004dcb6d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004dcb72
    MOV EAX,EBX                         ; 004dcb75
    POP EBX                             ; 004dcb77
    RET                                 ; 004dcb78


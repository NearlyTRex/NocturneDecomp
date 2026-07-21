; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004aba30(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059e370
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

    PUSH EBX                            ; 004aba30
        ;   Label: FUN_004aba30
    MOV EBX,dword ptr [ESP + 0x8]       ; 004aba31
    TEST byte ptr [ESP + 0xc],0x4       ; 004aba35
    JNZ 0x004abac1                      ; 004aba3a
        ;   XREF to: 004abac1 (CONDITIONAL_JUMP)  ; LAB_004abac1
    PUSH 0x0                            ; 004aba40
    ADD EBX,0x33c4                      ; 004aba42
    PUSH EBX                            ; 004aba48
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 004aba49
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CFlame_arrdtor_FUN_0040fe50()
    ADD ESP,0x8                         ; 004aba4e
    PUSH 0x0                            ; 004aba51
    SUB EAX,0x4b0                       ; 004aba53
    PUSH EAX                            ; 004aba58
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 004aba59
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_SFire_arrdtor_FUN_0040fe30()
    ADD ESP,0x8                         ; 004aba5e
    PUSH 0x0                            ; 004aba61
    SUB EAX,0x20c                       ; 004aba63
    PUSH EAX                            ; 004aba68
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004aba69
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 004aba6e
    PUSH 0x0                            ; 004aba71
    SUB EAX,0xb4                        ; 004aba73
    PUSH EAX                            ; 004aba78
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004aba79
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 004aba7e
    PUSH 0x0                            ; 004aba81
    SUB EAX,0x1c8                       ; 004aba83
    PUSH EAX                            ; 004aba88
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 004aba89
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_dtor_FUN_00438250()
    ADD ESP,0x8                         ; 004aba8e
    PUSH 0x0                            ; 004aba91
    SUB EAX,0x293c                      ; 004aba93
    PUSH EAX                            ; 004aba98
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 004aba99
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0()
    ADD ESP,0x8                         ; 004aba9e
    PUSH 0x1                            ; 004abaa1
    LEA EBX,[EAX + 0xfffffeb0]          ; 004abaa3
    PUSH EBX                            ; 004abaa9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004abaaa
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 004abaaf
    MOV DL,byte ptr [ESP + 0xc]         ; 004abab2
    MOV EBX,EAX                         ; 004abab6
    TEST DL,0x2                         ; 004abab8
    JNZ 0x004abadc                      ; 004ababb
        ;   XREF to: 004abadc (CONDITIONAL_JUMP)  ; LAB_004abadc
    MOV EAX,EBX                         ; 004ababd
    POP EBX                             ; 004ababf
    RET                                 ; 004abac0
    PUSH 0x59e370                       ; 004abac1 | DAT_0059e370
        ;   Label: LAB_004abac1
    PUSH EBX                            ; 004abac6
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004abac7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004abacc
    PUSH EAX                            ; 004abacf
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004abad0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004abad5
    MOV EAX,EBX                         ; 004abad8
    POP EBX                             ; 004abada
    RET                                 ; 004abadb
    PUSH EAX                            ; 004abadc
        ;   Label: LAB_004abadc
    CALL FUN_00564494                   ; 004abadd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004abae2
    MOV EAX,EBX                         ; 004abae5
    POP EBX                             ; 004abae7
    RET                                 ; 004abae8


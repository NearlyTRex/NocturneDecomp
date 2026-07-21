; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ef5c0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_core_passngr.cpp_CPassenger_setup_FUN_004ef6d0_005a1074 = 004ef6d0
;   undefined4 DAT_005a11b0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_morph.cpp_CMorph_dtor_FUN_004e0070
;   core_path.cpp_CPathMap_dtor_FUN_004efdd0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef5c0
        ;   Label: FUN_004ef5c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ef5c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004ef5c5
    JNZ 0x004ef69b                      ; 004ef5ca
        ;   XREF to: 004ef69b (CONDITIONAL_JUMP)  ; LAB_004ef69b
    MOV EDX,dword ptr [EBX + 0x1f678]   ; 004ef5d0
    MOV dword ptr [EBX + 0x14c],0x5a1074 ; 004ef5d6 | PTR_core_passngr.cpp_CPassenger_setup_FUN_004ef6d0_005a1074
    TEST EDX,EDX                        ; 004ef5e0
    JZ 0x004ef5fa                       ; 004ef5e2
        ;   XREF to: 004ef5fa (CONDITIONAL_JUMP)  ; LAB_004ef5fa
    MOV EAX,EDX                         ; 004ef5e4
    JZ 0x004ef5fa                       ; 004ef5e6
        ;   XREF to: 004ef5fa (CONDITIONAL_JUMP)  ; LAB_004ef5fa
    PUSH 0x2                            ; 004ef5e8
    MOV EDX,dword ptr [EDX + 0x14c]     ; 004ef5ea
    PUSH EAX                            ; 004ef5f0
    CALL dword ptr [EDX + 0xc8]         ; 004ef5f1
    ADD ESP,0x8                         ; 004ef5f7
    PUSH 0x0                            ; 004ef5fa
        ;   Label: LAB_004ef5fa
    ADD EBX,0x1f67c                     ; 004ef5fc
    PUSH EBX                            ; 004ef602
    CALL core_morph.cpp_CMorph_dtor_FUN_004e0070 ; 004ef603
        ;   XREF to: 004e0070 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_dtor_FUN_004e0070()
    ADD ESP,0x8                         ; 004ef608
    PUSH 0x0                            ; 004ef60b
    SUB EAX,0x139f0                     ; 004ef60d
    PUSH EAX                            ; 004ef612
    CALL core_path.cpp_CPathMap_dtor_FUN_004efdd0 ; 004ef613
        ;   XREF to: 004efdd0 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_CPathMap_dtor_FUN_004efdd0()
    ADD ESP,0x8                         ; 004ef618
    PUSH 0x0                            ; 004ef61b
    SUB EAX,0x88c8                      ; 004ef61d
    PUSH EAX                            ; 004ef622
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 004ef623
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CFlame_arrdtor_FUN_0040fe50()
    ADD ESP,0x8                         ; 004ef628
    PUSH 0x0                            ; 004ef62b
    SUB EAX,0x4b0                       ; 004ef62d
    PUSH EAX                            ; 004ef632
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 004ef633
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_SFire_arrdtor_FUN_0040fe30()
    ADD ESP,0x8                         ; 004ef638
    PUSH 0x0                            ; 004ef63b
    SUB EAX,0x20c                       ; 004ef63d
    PUSH EAX                            ; 004ef642
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004ef643
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 004ef648
    PUSH 0x0                            ; 004ef64b
    SUB EAX,0xb4                        ; 004ef64d
    PUSH EAX                            ; 004ef652
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004ef653
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10()
    ADD ESP,0x8                         ; 004ef658
    PUSH 0x0                            ; 004ef65b
    SUB EAX,0x1c8                       ; 004ef65d
    PUSH EAX                            ; 004ef662
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 004ef663
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_dtor_FUN_00438250()
    ADD ESP,0x8                         ; 004ef668
    PUSH 0x0                            ; 004ef66b
    SUB EAX,0x293c                      ; 004ef66d
    PUSH EAX                            ; 004ef672
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 004ef673
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0()
    ADD ESP,0x8                         ; 004ef678
    PUSH 0x1                            ; 004ef67b
    LEA EBX,[EAX + 0xfffffeb0]          ; 004ef67d
    PUSH EBX                            ; 004ef683
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004ef684
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_dtor_FUN_00409ea0()
    ADD ESP,0x8                         ; 004ef689
    MOV DL,byte ptr [ESP + 0xc]         ; 004ef68c
    MOV EBX,EAX                         ; 004ef690
    TEST DL,0x2                         ; 004ef692
    JNZ 0x004ef6b6                      ; 004ef695
        ;   XREF to: 004ef6b6 (CONDITIONAL_JUMP)  ; LAB_004ef6b6
    MOV EAX,EBX                         ; 004ef697
    POP EBX                             ; 004ef699
    RET                                 ; 004ef69a
    PUSH 0x5a11b0                       ; 004ef69b | DAT_005a11b0
        ;   Label: LAB_004ef69b
    PUSH EBX                            ; 004ef6a0
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004ef6a1
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_0056445f()
    ADD ESP,0x8                         ; 004ef6a6
    PUSH EAX                            ; 004ef6a9
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004ef6aa
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004ef6af
    MOV EAX,EBX                         ; 004ef6b2
    POP EBX                             ; 004ef6b4
    RET                                 ; 004ef6b5
    PUSH EAX                            ; 004ef6b6
        ;   Label: LAB_004ef6b6
    CALL FUN_00564494                   ; 004ef6b7
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004ef6bc
    MOV EAX,EBX                         ; 004ef6bf
    POP EBX                             ; 004ef6c1
    RET                                 ; 004ef6c2


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004d2620(int param_1)
;
;
; XREF[1]:
;   core_prye.cpp_CPrye_dtor_FUN_00527300 at 0052730f
;
; Referenced Globals:
;   void* PTR_core_hero.cpp_CHero_setup_FUN_004d26b0_005e1534 = 004d26b0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_armour.cpp_FUN_00410370
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_inv.cpp_CInventory_dtor_FUN_004da420
;   core_path.cpp_CPathMap_dtor_FUN_0050ad40
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2620
        ;   Label: core_hero.cpp_FUN_004d2620
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d2621
    MOV dword ptr [EDX + 0x154],0x5e1534 ; 004d2625 | PTR_core_hero.cpp_CHero_setup_FUN_004d26b0_005e1534
    XOR EAX,EAX                         ; 004d262f
    CMP EDX,dword ptr [EAX + 0x1d5ba04] ; 004d2631
        ;   Label: LAB_004d2631
    JZ 0x004d26a5                       ; 004d2637
        ;   XREF to: 004d26a5 (CONDITIONAL_JUMP)  ; LAB_004d26a5
    ADD EAX,0x4                         ; 004d2639
        ;   Label: LAB_004d2639
    CMP EAX,0x10                        ; 004d263c
    JNZ 0x004d2631                      ; 004d263f
        ;   XREF to: 004d2631 (CONDITIONAL_JUMP)  ; LAB_004d2631
    PUSH 0x0                            ; 004d2641
    ADD EDX,0x206e8                     ; 004d2643
    PUSH EDX                            ; 004d2649
    CALL core_inv.cpp_CInventory_dtor_FUN_004da420 ; 004d264a
        ;   XREF to: 004da420 (UNCONDITIONAL_CALL)  ; CInventory * core_inv.cpp_CInventory_dtor_FUN_004da420(CInventory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d264f
    PUSH 0x0                            ; 004d2652
    SUB EAX,0x138e0                     ; 004d2654
    PUSH EAX                            ; 004d2659
    CALL core_path.cpp_CPathMap_dtor_FUN_0050ad40 ; 004d265a
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_0050ad40(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d265f
    PUSH 0x0                            ; 004d2662
    SUB EAX,0x95ac                      ; 004d2664
    PUSH EAX                            ; 004d2669
    CALL core_armour.cpp_FUN_00410370   ; 004d266a
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 004d266f
    PUSH 0x0                            ; 004d2672
    SUB EAX,0x954                       ; 004d2674
    PUSH EAX                            ; 004d2679
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 004d267a
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d267f
    PUSH 0x0                            ; 004d2682
    SUB EAX,0x2db0                      ; 004d2684
    PUSH EAX                            ; 004d2689
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 004d268a
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d268f
    PUSH 0x1                            ; 004d2692
    LEA EDX,[EAX + 0xfffffea8]          ; 004d2694
    PUSH EDX                            ; 004d269a
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004d269b
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d26a0
    POP EBX                             ; 004d26a3
    RET                                 ; 004d26a4
    XOR EBX,EBX                         ; 004d26a5
        ;   Label: LAB_004d26a5
    MOV dword ptr [EAX + 0x1d5ba04],EBX ; 004d26a7
    JMP 0x004d2639                      ; 004d26ad
        ;   XREF to: 004d2639 (UNCONDITIONAL_JUMP)  ; LAB_004d2639


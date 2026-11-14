; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004ea980(int param_1)
;
;
; XREF[10]:
;   core_baron.cpp_CBaron_dtor_FUN_00410780 at 0041078f
;   core_colonel.cpp_CColonel_dtor_FUN_00445320 at 0044532f
;   core_doc.cpp_CDoc_dtor_FUN_00476700 at 0047670f
;   core_gabriela.cpp_CGabriella_dtor_FUN_004cb760 at 004cb786
;   core_haystack.cpp_CHaystack_dtor_FUN_004ea280 at 004ea28f
;   core_icepick.cpp_CIcePick_dtor_FUN_004f2740 at 004f274f
;   core_moloch.cpp_CMoloch_dtor_FUN_005203b0 at 005203f0
;   core_scat.cpp_CScat_dtor_FUN_00543070 at 0054307f
;   core_stranger.cpp_CStranger_dtor_FUN_00591e60 at 00591e6f
;   core_svetlana.cpp_CSvetlana_dtor_FUN_00594680 at 005946b6
;
; Referenced Globals:
;   void* PTR_core_hero.cpp_CHero_setup_FUN_004eaa10_00601d34 = 004eaa10
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_armour.cpp_FUN_0040ee30
;   core_cloth.cpp_CClothList_dtor_FUN_00441ca0
;   core_inv.cpp_CInventory_dtor_FUN_004f6f80
;   core_path.cpp_CPathMap_dtor_FUN_00533060
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea980
        ;   Label: core_hero.cpp_FUN_004ea980
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ea981
    MOV dword ptr [EDX + 0x154],0x601d34 ; 004ea985 | PTR_core_hero.cpp_CHero_setup_FUN_004eaa10_00601d34
    XOR EAX,EAX                         ; 004ea98f
    CMP EDX,dword ptr [EAX + 0x1d06aa4] ; 004ea991
        ;   Label: LAB_004ea991
    JZ 0x004eaa05                       ; 004ea997
        ;   XREF to: 004eaa05 (CONDITIONAL_JUMP)  ; LAB_004eaa05
    ADD EAX,0x4                         ; 004ea999
        ;   Label: LAB_004ea999
    CMP EAX,0x10                        ; 004ea99c
    JNZ 0x004ea991                      ; 004ea99f
        ;   XREF to: 004ea991 (CONDITIONAL_JUMP)  ; LAB_004ea991
    PUSH 0x0                            ; 004ea9a1
    ADD EDX,0x1fae8                     ; 004ea9a3
    PUSH EDX                            ; 004ea9a9
    CALL core_inv.cpp_CInventory_dtor_FUN_004f6f80 ; 004ea9aa
        ;   XREF to: 004f6f80 (UNCONDITIONAL_CALL)  ; CInventory * core_inv.cpp_CInventory_dtor_FUN_004f6f80(CInventory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ea9af
    PUSH 0x0                            ; 004ea9b2
    SUB EAX,0x138e0                     ; 004ea9b4
    PUSH EAX                            ; 004ea9b9
    CALL core_path.cpp_CPathMap_dtor_FUN_00533060 ; 004ea9ba
        ;   XREF to: 00533060 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_00533060(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ea9bf
    PUSH 0x0                            ; 004ea9c2
    SUB EAX,0x8c2c                      ; 004ea9c4
    PUSH EAX                            ; 004ea9c9
    CALL core_armour.cpp_FUN_0040ee30   ; 004ea9ca
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 004ea9cf
    PUSH 0x0                            ; 004ea9d2
    SUB EAX,0x93c                       ; 004ea9d4
    PUSH EAX                            ; 004ea9d9
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 004ea9da
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ea9df
    PUSH 0x0                            ; 004ea9e2
    SUB EAX,0x2b48                      ; 004ea9e4
    PUSH EAX                            ; 004ea9e9
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 004ea9ea
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ea9ef
    PUSH 0x1                            ; 004ea9f2
    LEA EDX,[EAX + 0xfffffea8]          ; 004ea9f4
    PUSH EDX                            ; 004ea9fa
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004ea9fb
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004eaa00
    POP EBX                             ; 004eaa03
    RET                                 ; 004eaa04
    XOR EBX,EBX                         ; 004eaa05
        ;   Label: LAB_004eaa05
    MOV dword ptr [EAX + 0x1d06aa4],EBX ; 004eaa07
    JMP 0x004ea999                      ; 004eaa0d
        ;   XREF to: 004ea999 (UNCONDITIONAL_JUMP)  ; LAB_004ea999


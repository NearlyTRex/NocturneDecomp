; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_necklace_cpp_FUN_005ade00(CKeyFramedModel *param_1)
;
;
; XREF[7]:
;   core_cloth.cpp_CClothList_load_FUN_005b14a0 at 005b1530
;   core_cloth.cpp_CClothList_remove_FUN_005b1640 at 005b1690
;   core_cloth.cpp_CClothList_reset_FUN_005b1550 at 005b156e
;   core_gabriela.cpp_CGabriella_dtor_FUN_004b2840 at 004b2855
;   core_mimic.cpp_CMimic_dtor_FUN_004f0400 at 004f0459
;   core_svetlana.cpp_CSvetlana_dtor_FUN_00571a30 at 00571a45
;   core_vampboss.cpp_CVampireBoss_dtor_FUN_005837e0 at 00583809
;
; Called Functions:
;   core_cloth.cpp_FUN_005ade80
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_0044dcb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ade00
        ;   Label: core_necklace.cpp_FUN_005ade00
    PUSH EDX                            ; 005ade04
    CALL core_cloth.cpp_FUN_005ade80    ; 005ade05
        ;   XREF to: 005ade80 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_005ade80()
    ADD ESP,0x4                         ; 005ade0a
    PUSH 0x1                            ; 005ade0d
    MOV ECX,dword ptr [ESP + 0x8]       ; 005ade0f
    PUSH ECX                            ; 005ade13
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_0044dcb0 ; 005ade14
        ;   XREF to: 0044dcb0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_0044dcb0(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005ade19
    RET                                 ; 005ade1c


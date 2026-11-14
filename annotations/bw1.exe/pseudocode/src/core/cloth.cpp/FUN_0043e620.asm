; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_0043e620(CCloth *param_1)
;
;
; XREF[7]:
;   core_cloth.cpp_CClothList_load_FUN_00441cc0 at 00441d50
;   core_cloth.cpp_CClothList_reset_FUN_00441d70 at 00441d8e
;   core_cloth.cpp_FUN_00441e60 at 00441eb0
;   core_gabriela.cpp_CGabriella_dtor_FUN_004cb760 at 004cb775
;   core_mimic.cpp_CMimic_dtor_FUN_0050f1b0 at 0050f209
;   core_svetlana.cpp_CSvetlana_dtor_FUN_00594680 at 00594695
;   core_vampboss.cpp_CVampireBoss_dtor_FUN_005a7420 at 005a7449
;
; Called Functions:
;   core_cloth.cpp_CCloth_free_FUN_0043e6a0
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00466880
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043e620
        ;   Label: core_cloth.cpp_FUN_0043e620
    PUSH EDX                            ; 0043e624
    CALL core_cloth.cpp_CCloth_free_FUN_0043e6a0 ; 0043e625
        ;   XREF to: 0043e6a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_free_FUN_0043e6a0(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0043e62a
    PUSH 0x1                            ; 0043e62d
    MOV ECX,dword ptr [ESP + 0x8]       ; 0043e62f
    PUSH ECX                            ; 0043e633
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00466880 ; 0043e634
        ;   XREF to: 00466880 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00466880(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043e639
    RET                                 ; 0043e63c


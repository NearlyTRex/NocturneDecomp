; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCloth * __cdecl core_cloth_cpp_CCloth_dtor_FUN_00438c00(CCloth *this_ptr,uint flags)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[8]:
;   core_cloth.cpp_CClothList_load_FUN_0043bfa0 at 0043c059
;   core_cloth.cpp_CClothList_remove_FUN_0043c170 at 0043c1d7
;   core_cloth.cpp_CClothList_reset_FUN_0043c070 at 0043c0a4
;   core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 at 004be214
;   core_gabriela.cpp_CGabriella_dtor_FUN_004d7660 at 004d7675
;   core_mimic.cpp_CMimic_dtor_FUN_0051f2c0 at 0051f32f
;   core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50 at 005d9f65
;   core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700 at 005e7729
;
; Called Functions:
;   core_cloth.cpp_CCloth_free_FUN_00438cb0
;   core_cloth.cpp_SClothBone_arrdtor_FUN_0043e4a0
;   core_cloth.cpp_SClothVertex_arrdtor_FUN_0043e480
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438c00
        ;   Label: core_cloth.cpp_CCloth_dtor_FUN_00438c00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438c01
    PUSH EBX                            ; 00438c05
    CALL core_cloth.cpp_CCloth_free_FUN_00438cb0 ; 00438c06
        ;   XREF to: 00438cb0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_free_FUN_00438cb0(CCloth * this_ptr)
    ADD ESP,0x4                         ; 00438c0b
    PUSH 0x0                            ; 00438c0e
    ADD EBX,0x3ce90                     ; 00438c10
    PUSH EBX                            ; 00438c16
    CALL core_cloth.cpp_SClothBone_arrdtor_FUN_0043e4a0 ; 00438c17
        ;   XREF to: 0043e4a0 (UNCONDITIONAL_CALL)  ; SClothBone * core_cloth.cpp_SClothBone_arrdtor_FUN_0043e4a0(SClothBone * objs, uint flags)
    ADD ESP,0x8                         ; 00438c1c
    PUSH 0x0                            ; 00438c1f
    SUB EAX,0x377b8                     ; 00438c21
    PUSH EAX                            ; 00438c26
    CALL core_cloth.cpp_SClothVertex_arrdtor_FUN_0043e480 ; 00438c27
        ;   XREF to: 0043e480 (UNCONDITIONAL_CALL)  ; SClothVertex * core_cloth.cpp_SClothVertex_arrdtor_FUN_0043e480(SClothVertex * objs, uint flags)
    ADD ESP,0x8                         ; 00438c2c
    PUSH 0x1                            ; 00438c2f
    LEA EBX,[EAX + 0xffffa928]          ; 00438c31
    PUSH EBX                            ; 00438c37
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90 ; 00438c38
        ;   XREF to: 00476d90 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00438c3d
    POP EBX                             ; 00438c40
    RET                                 ; 00438c41


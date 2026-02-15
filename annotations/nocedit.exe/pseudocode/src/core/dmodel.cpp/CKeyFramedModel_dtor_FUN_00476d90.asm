; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(CKeyFramedModel *this_ptr,uint flags)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[5]:
;   core_cloth.cpp_CCloth_dtor_FUN_00438c00 at 00438c38
;   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30 at 0047eeda
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 0050781c
;   core_moon.cpp_CMoon_dtor_FUN_00529ab0 at 00529ac4
;   core_setedit.cpp_CDemonSet_FUN_0057d660 at 0057dba7
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476d90
        ;   Label: core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00476d91
    PUSH EBX                            ; 00476d95
    CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690 ; 00476d96
        ;   XREF to: 00477690 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00476d9b
    MOV EAX,EBX                         ; 00476d9e
    POP EBX                             ; 00476da0
    RET                                 ; 00476da1


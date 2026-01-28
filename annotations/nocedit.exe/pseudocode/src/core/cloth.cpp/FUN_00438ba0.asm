; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown int core_cloth_cpp_FUN_00438ba0(void)
;
;
; XREF[6]:
;   core_cloth.cpp_CClothList_load_FUN_0043bfa0 at 0043bffa
;   core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 at 004be204
;   core_gabriela.cpp_CGabriella_ctor_FUN_004d2b20 at 004d2b36
;   core_mimic.cpp_CMimic_ctor_FUN_0051f1d0 at 0051f1e5
;   core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850 at 005d8864
;   core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590 at 005e55c0
;
; Referenced Globals:
;   WatcomTypeInfo g_SClothVertexTypeInfo
;   WatcomTypeInfo g_SClothBoneTypeInfo
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00438ba0
        ;   Label: core_cloth.cpp_FUN_00438ba0
    PUSH EAX                            ; 00438ba4
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0 ; 00438ba5
        ;   XREF to: 00476cf0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00438baa
    PUSH 0x65bb80                       ; 00438bad | g_SClothVertexTypeInfo
    PUSH 0x320                          ; 00438bb2
    ADD EAX,0x56d8                      ; 00438bb7
    PUSH EAX                            ; 00438bbc
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00438bbd
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00438bc2
    PUSH 0x65bba0                       ; 00438bc5 | g_SClothBoneTypeInfo
    PUSH 0x32                           ; 00438bca
    ADD EAX,0x377b8                     ; 00438bcc
    PUSH EAX                            ; 00438bd1
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00438bd2
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    MOV dword ptr [EAX + 0x2fac],0x0    ; 00438bd7
    MOV dword ptr [EAX + -0x4],0x0      ; 00438be1
    ADD ESP,0xc                         ; 00438be8
    MOV dword ptr [EAX + -0xc],0x0      ; 00438beb
    SUB EAX,0x3ce90                     ; 00438bf2
    RET                                 ; 00438bf7


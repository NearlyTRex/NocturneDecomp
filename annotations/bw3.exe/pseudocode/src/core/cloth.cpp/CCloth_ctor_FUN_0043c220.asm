; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCloth * __cdecl core_cloth_cpp_CCloth_ctor_FUN_0043c220(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_cloth.cpp_CClothList_load_FUN_0043f920 at 0043f956
;   core_styler.cpp_CStyler_ctor_FUN_0059d750 at 0059d764
;
; Referenced Globals:
;   WatcomTypeInfo g_SClothVertexTypeInfo
;   WatcomTypeInfo g_SClothBoneTypeInfo
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00460490
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043c220
        ;   Label: core_cloth.cpp_CCloth_ctor_FUN_0043c220
    PUSH EAX                            ; 0043c224
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00460490 ; 0043c225
        ;   XREF to: 00460490 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00460490(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0043c22a
    PUSH 0x5dd3f0                       ; 0043c22d | g_SClothVertexTypeInfo
    PUSH 0x320                          ; 0043c232
    ADD EAX,0x398                       ; 0043c237
    PUSH EAX                            ; 0043c23c
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0043c23d
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0043c242
    PUSH 0x5dd410                       ; 0043c245 | g_SClothBoneTypeInfo
    PUSH 0x32                           ; 0043c24a
    ADD EAX,0x377b8                     ; 0043c24c
    PUSH EAX                            ; 0043c251
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0043c252
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    MOV dword ptr [EAX + 0x2fac],0x0    ; 0043c257
    MOV dword ptr [EAX + -0x4],0x0      ; 0043c261
    ADD ESP,0xc                         ; 0043c268
    MOV dword ptr [EAX + -0x8],0x0      ; 0043c26b
    SUB EAX,0x37b50                     ; 0043c272
    RET                                 ; 0043c277


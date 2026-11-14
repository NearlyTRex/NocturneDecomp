; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCloth * __cdecl core_cloth_cpp_CCloth_ctor_FUN_0043e5c0(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_cloth.cpp_CClothList_load_FUN_00441cc0 at 00441cf6
;   core_gabriela.cpp_CGabriella_ctor_FUN_004c6270 at 004c6286
;   core_mimic.cpp_CMimic_ctor_FUN_0050f0c0 at 0050f0d5
;   core_svetlana.cpp_CSvetlana_ctor_FUN_00592e00 at 00592e14
;   core_vampboss.cpp_CVampireBoss_ctor_FUN_005a5170 at 005a5192
;
; Referenced Globals:
;   WatcomTypeInfo g_SClothVertexTypeInfo
;   WatcomTypeInfo g_SClothBoneTypeInfo
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_004667e0
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043e5c0
        ;   Label: core_cloth.cpp_CCloth_ctor_FUN_0043e5c0
    PUSH EAX                            ; 0043e5c4
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_004667e0 ; 0043e5c5
        ;   XREF to: 004667e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_004667e0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0043e5ca
    PUSH 0x5fd910                       ; 0043e5cd | g_SClothVertexTypeInfo
    PUSH 0x320                          ; 0043e5d2
    ADD EAX,0x398                       ; 0043e5d7
    PUSH EAX                            ; 0043e5dc
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0043e5dd
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0043e5e2
    PUSH 0x5fd930                       ; 0043e5e5 | g_SClothBoneTypeInfo
    PUSH 0x32                           ; 0043e5ea
    ADD EAX,0x377b8                     ; 0043e5ec
    PUSH EAX                            ; 0043e5f1
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0043e5f2
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    MOV dword ptr [EAX + 0x2fac],0x0    ; 0043e5f7
    MOV dword ptr [EAX + -0x4],0x0      ; 0043e601
    ADD ESP,0xc                         ; 0043e608
    MOV dword ptr [EAX + -0xc],0x0      ; 0043e60b
    SUB EAX,0x37b50                     ; 0043e612
    RET                                 ; 0043e617


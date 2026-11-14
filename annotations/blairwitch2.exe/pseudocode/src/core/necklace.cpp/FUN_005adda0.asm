; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_necklace_cpp_FUN_005adda0(CKeyFramedModel *param_1)
;
;
; XREF[5]:
;   core_cloth.cpp_CClothList_load_FUN_005b14a0 at 005b14d6
;   core_gabriela.cpp_CGabriella_ctor_FUN_004ad2c0 at 004ad2d6
;   core_mimic.cpp_CMimic_ctor_FUN_004f0310 at 004f0325
;   core_svetlana.cpp_CSvetlana_ctor_FUN_005701c0 at 005701d4
;   core_vampboss.cpp_CVampireBoss_ctor_FUN_00581530 at 00581552
;
; Referenced Globals:
;   WatcomTypeInfo g_SClothVertexTypeInfo
;   WatcomTypeInfo g_SClothBoneTypeInfo
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005adda0
        ;   Label: core_necklace.cpp_FUN_005adda0
    PUSH EAX                            ; 005adda4
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10 ; 005adda5
        ;   XREF to: 0044dc10 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 005addaa
    PUSH 0x6011e0                       ; 005addad | g_SClothVertexTypeInfo
    PUSH 0x320                          ; 005addb2
    ADD EAX,0x398                       ; 005addb7
    PUSH EAX                            ; 005addbc
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 005addbd
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005addc2
    PUSH 0x601200                       ; 005addc5 | g_SClothBoneTypeInfo
    PUSH 0x32                           ; 005addca
    ADD EAX,0x377b8                     ; 005addcc
    PUSH EAX                            ; 005addd1
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 005addd2
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    MOV dword ptr [EAX + 0x2fac],0x0    ; 005addd7
    MOV dword ptr [EAX + -0x4],0x0      ; 005adde1
    ADD ESP,0xc                         ; 005adde8
    MOV dword ptr [EAX + -0xc],0x0      ; 005addeb
    SUB EAX,0x37b50                     ; 005addf2
    RET                                 ; 005addf7


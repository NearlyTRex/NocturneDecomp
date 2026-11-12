; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPryeMorph * core_pryemorp_cpp_CPryeMorph_dtor_FUN_005274e0(CPryeMorph *this_ptr,uint flags)
;
; Parameters:
; CPryeMorph *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CCharacter_full_vtable g_CPryeMorphVTable
;   WatcomTypeInfo g_CPryeMorphTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_armour.cpp_FUN_00410370
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_morph.cpp_CMorph_dtor_FUN_004fa8c0
;   core_path.cpp_CPathMap_dtor_FUN_0050ad40
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005274e0
        ;   Label: core_pryemorp.cpp_CPryeMorph_dtor_FUN_005274e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005274e1
    TEST byte ptr [ESP + 0xc],0x4       ; 005274e5
    JNZ 0x0052758b                      ; 005274ea
        ;   XREF to: 0052758b (CONDITIONAL_JUMP)  ; LAB_0052758b
    MOV EDX,dword ptr [EBX + 0x20810]   ; 005274f0
    MOV dword ptr [EBX + 0x154],0x5e36e4 ; 005274f6 | g_CPryeMorphVTable
    TEST EDX,EDX                        ; 00527500
    JZ 0x0052751a                       ; 00527502
        ;   XREF to: 0052751a (CONDITIONAL_JUMP)  ; LAB_0052751a
    MOV EAX,EDX                         ; 00527504
    JZ 0x0052751a                       ; 00527506
        ;   XREF to: 0052751a (CONDITIONAL_JUMP)  ; LAB_0052751a
    PUSH 0x2                            ; 00527508
    MOV EDX,dword ptr [EDX + 0x154]     ; 0052750a
    PUSH EAX                            ; 00527510
    CALL dword ptr [EDX + 0xd0]         ; 00527511
    ADD ESP,0x8                         ; 00527517
    PUSH 0x0                            ; 0052751a
        ;   Label: LAB_0052751a
    ADD EBX,0x20814                     ; 0052751c
    PUSH EBX                            ; 00527522
    CALL core_morph.cpp_CMorph_dtor_FUN_004fa8c0 ; 00527523
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_004fa8c0(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00527528
    PUSH 0x0                            ; 0052752b
    SUB EAX,0x13a48                     ; 0052752d
    PUSH EAX                            ; 00527532
    CALL core_path.cpp_CPathMap_dtor_FUN_0050ad40 ; 00527533
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_0050ad40(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00527538
    PUSH 0x0                            ; 0052753b
    SUB EAX,0x9570                      ; 0052753d
    PUSH EAX                            ; 00527542
    CALL core_armour.cpp_FUN_00410370   ; 00527543
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 00527548
    PUSH 0x0                            ; 0052754b
    SUB EAX,0x954                       ; 0052754d
    PUSH EAX                            ; 00527552
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 00527553
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00527558
    PUSH 0x0                            ; 0052755b
    SUB EAX,0x2db0                      ; 0052755d
    PUSH EAX                            ; 00527562
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00527563
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00527568
    PUSH 0x1                            ; 0052756b
    LEA EBX,[EAX + 0xfffffea8]          ; 0052756d
    PUSH EBX                            ; 00527573
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00527574
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00527579
    MOV DL,byte ptr [ESP + 0xc]         ; 0052757c
    MOV EBX,EAX                         ; 00527580
    TEST DL,0x2                         ; 00527582
    JNZ 0x005275a6                      ; 00527585
        ;   XREF to: 005275a6 (CONDITIONAL_JUMP)  ; LAB_005275a6
    MOV EAX,EBX                         ; 00527587
    POP EBX                             ; 00527589
    RET                                 ; 0052758a
    PUSH 0x5e3830                       ; 0052758b | g_CPryeMorphTypeInfo
        ;   Label: LAB_0052758b
    PUSH EBX                            ; 00527590
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00527591
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00527596
    PUSH EAX                            ; 00527599
    CALL crt_unknown.c_FUN_005a30b6     ; 0052759a
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0052759f
    MOV EAX,EBX                         ; 005275a2
    POP EBX                             ; 005275a4
    RET                                 ; 005275a5
    PUSH EAX                            ; 005275a6
        ;   Label: LAB_005275a6
    CALL crt_unknown.c_FUN_005a30c4     ; 005275a7
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 005275ac
    MOV EAX,EBX                         ; 005275af
    POP EBX                             ; 005275b1
    RET                                 ; 005275b2


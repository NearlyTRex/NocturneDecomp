; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpiritBear * core_spirbear_cpp_CSpiritBear_dtor_FUN_0059b540(CSpiritBear *this_ptr,uint flags)
;
; Parameters:
; CSpiritBear *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSpiritBearTypeInfo
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

    PUSH EBX                            ; 0059b540
        ;   Label: core_spirbear.cpp_CSpiritBear_dtor_FUN_0059b540
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059b541
    TEST byte ptr [ESP + 0xc],0x4       ; 0059b545
    JNZ 0x0059b5e1                      ; 0059b54a
        ;   XREF to: 0059b5e1 (CONDITIONAL_JUMP)  ; LAB_0059b5e1
    PUSH 0x0                            ; 0059b550
    ADD EBX,0x34174                     ; 0059b552
    PUSH EBX                            ; 0059b558
    CALL core_morph.cpp_CMorph_dtor_FUN_004fa8c0 ; 0059b559
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_004fa8c0(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059b55e
    PUSH 0x0                            ; 0059b561
    SUB EAX,0x1d0                       ; 0059b563
    PUSH EAX                            ; 0059b568
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 0059b569
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059b56e
    PUSH 0x0                            ; 0059b571
    SUB EAX,0x138dc                     ; 0059b573
    PUSH EAX                            ; 0059b578
    CALL core_path.cpp_CPathMap_dtor_FUN_0050ad40 ; 0059b579
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_0050ad40(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059b57e
    PUSH 0x0                            ; 0059b581
    SUB EAX,0x138fc                     ; 0059b583
    PUSH EAX                            ; 0059b588
    CALL core_path.cpp_CPathMap_dtor_FUN_0050ad40 ; 0059b589
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_0050ad40(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059b58e
    PUSH 0x0                            ; 0059b591
    SUB EAX,0x9570                      ; 0059b593
    PUSH EAX                            ; 0059b598
    CALL core_armour.cpp_FUN_00410370   ; 0059b599
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0059b59e
    PUSH 0x0                            ; 0059b5a1
    SUB EAX,0x954                       ; 0059b5a3
    PUSH EAX                            ; 0059b5a8
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 0059b5a9
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059b5ae
    PUSH 0x0                            ; 0059b5b1
    SUB EAX,0x2db0                      ; 0059b5b3
    PUSH EAX                            ; 0059b5b8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 0059b5b9
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059b5be
    PUSH 0x1                            ; 0059b5c1
    LEA EBX,[EAX + 0xfffffea8]          ; 0059b5c3
    PUSH EBX                            ; 0059b5c9
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0059b5ca
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059b5cf
    MOV DL,byte ptr [ESP + 0xc]         ; 0059b5d2
    MOV EBX,EAX                         ; 0059b5d6
    TEST DL,0x2                         ; 0059b5d8
    JNZ 0x0059b5fc                      ; 0059b5db
        ;   XREF to: 0059b5fc (CONDITIONAL_JUMP)  ; LAB_0059b5fc
    MOV EAX,EBX                         ; 0059b5dd
    POP EBX                             ; 0059b5df
    RET                                 ; 0059b5e0
    PUSH 0x5e8170                       ; 0059b5e1 | g_CSpiritBearTypeInfo
        ;   Label: LAB_0059b5e1
    PUSH EBX                            ; 0059b5e6
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0059b5e7
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0059b5ec
    PUSH EAX                            ; 0059b5ef
    CALL crt_unknown.c_FUN_005a30b6     ; 0059b5f0
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0059b5f5
    MOV EAX,EBX                         ; 0059b5f8
    POP EBX                             ; 0059b5fa
    RET                                 ; 0059b5fb
    PUSH EAX                            ; 0059b5fc
        ;   Label: LAB_0059b5fc
    CALL crt_unknown.c_FUN_005a30c4     ; 0059b5fd
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0059b602
    MOV EAX,EBX                         ; 0059b605
    POP EBX                             ; 0059b607
    RET                                 ; 0059b608


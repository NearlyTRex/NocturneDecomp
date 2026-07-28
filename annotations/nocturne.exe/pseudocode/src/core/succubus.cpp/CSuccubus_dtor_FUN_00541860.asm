; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_succubus_cpp_CSuccubus_dtor_FUN_00541860(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CSuccubusTypeInfo_005a2a30
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_morph.cpp_CMorph_dtor_FUN_004e0070
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541860
        ;   Label: core_succubus.cpp_CSuccubus_dtor_FUN_00541860
    MOV EBX,dword ptr [ESP + 0x8]       ; 00541861
    TEST byte ptr [ESP + 0xc],0x4       ; 00541865
    JNZ 0x00541921                      ; 0054186a
        ;   XREF to: 00541921 (CONDITIONAL_JUMP)  ; LAB_00541921
    PUSH 0x0                            ; 00541870
    ADD EBX,0xe1a4                      ; 00541872
    PUSH EBX                            ; 00541878
    CALL core_morph.cpp_CMorph_dtor_FUN_004e0070 ; 00541879
        ;   XREF to: 004e0070 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_004e0070(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054187e
    PUSH 0x0                            ; 00541881
    SUB EAX,0x1cc                       ; 00541883
    PUSH EAX                            ; 00541888
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 00541889
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054188e
    PUSH 0x0                            ; 00541891
    SUB EAX,0x22b4                      ; 00541893
    PUSH EAX                            ; 00541898
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 00541899
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054189e
    PUSH 0x0                            ; 005418a1
    SUB EAX,0x8960                      ; 005418a3
    PUSH EAX                            ; 005418a8
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 005418a9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_0040fe50(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 005418ae
    PUSH 0x0                            ; 005418b1
    SUB EAX,0x4b0                       ; 005418b3
    PUSH EAX                            ; 005418b8
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 005418b9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_0040fe30(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 005418be
    PUSH 0x0                            ; 005418c1
    SUB EAX,0x20c                       ; 005418c3
    PUSH EAX                            ; 005418c8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 005418c9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 005418ce
    PUSH 0x0                            ; 005418d1
    SUB EAX,0xb4                        ; 005418d3
    PUSH EAX                            ; 005418d8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 005418d9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 005418de
    PUSH 0x0                            ; 005418e1
    SUB EAX,0x1c8                       ; 005418e3
    PUSH EAX                            ; 005418e8
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 005418e9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005418ee
    PUSH 0x0                            ; 005418f1
    SUB EAX,0x293c                      ; 005418f3
    PUSH EAX                            ; 005418f8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 005418f9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005418fe
    PUSH 0x1                            ; 00541901
    LEA EBX,[EAX + 0xfffffeb0]          ; 00541903
    PUSH EBX                            ; 00541909
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0054190a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054190f
    MOV DL,byte ptr [ESP + 0xc]         ; 00541912
    MOV EBX,EAX                         ; 00541916
    TEST DL,0x2                         ; 00541918
    JNZ 0x0054193c                      ; 0054191b
        ;   XREF to: 0054193c (CONDITIONAL_JUMP)  ; LAB_0054193c
    MOV EAX,EBX                         ; 0054191d
    POP EBX                             ; 0054191f
    RET                                 ; 00541920
    PUSH 0x5a2a30                       ; 00541921 | g_CSuccubusTypeInfo_005a2a30
        ;   Label: LAB_00541921
    PUSH EBX                            ; 00541926
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00541927
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0054192c
    PUSH EAX                            ; 0054192f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00541930
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00541935
    MOV EAX,EBX                         ; 00541938
    POP EBX                             ; 0054193a
    RET                                 ; 0054193b
    PUSH EAX                            ; 0054193c
        ;   Label: LAB_0054193c
    CALL crt_unknown.c_FUN_00564494     ; 0054193d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00541942
    MOV EAX,EBX                         ; 00541945
    POP EBX                             ; 00541947
    RET                                 ; 00541948


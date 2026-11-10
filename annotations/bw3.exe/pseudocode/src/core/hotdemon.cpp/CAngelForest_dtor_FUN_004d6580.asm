; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAngelForest * core_hotdemon_cpp_CAngelForest_dtor_FUN_004d6580(CAngelForest *this_ptr,uint flags)
;
; Parameters:
; CAngelForest *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAngelForestTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6580
        ;   Label: core_hotdemon.cpp_CAngelForest_dtor_FUN_004d6580
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d6581
    TEST byte ptr [ESP + 0xc],0x4       ; 004d6585
    JNZ 0x004d65dd                      ; 004d658a
        ;   XREF to: 004d65dd (CONDITIONAL_JUMP)  ; LAB_004d65dd
    PUSH 0x0                            ; 004d658c
    ADD EBX,0x385c                      ; 004d658e
    PUSH EBX                            ; 004d6594
    CALL unkafter_armour.cpp_FUN_00410370 ; 004d6595
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 004d659a
    PUSH 0x0                            ; 004d659d
    SUB EAX,0x954                       ; 004d659f
    PUSH EAX                            ; 004d65a4
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 004d65a5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d65aa
    PUSH 0x0                            ; 004d65ad
    SUB EAX,0x2db0                      ; 004d65af
    PUSH EAX                            ; 004d65b4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 004d65b5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d65ba
    PUSH 0x1                            ; 004d65bd
    LEA EBX,[EAX + 0xfffffea8]          ; 004d65bf
    PUSH EBX                            ; 004d65c5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004d65c6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d65cb
    MOV DL,byte ptr [ESP + 0xc]         ; 004d65ce
    MOV EBX,EAX                         ; 004d65d2
    TEST DL,0x2                         ; 004d65d4
    JNZ 0x004d65f8                      ; 004d65d7
        ;   XREF to: 004d65f8 (CONDITIONAL_JUMP)  ; LAB_004d65f8
    MOV EAX,EBX                         ; 004d65d9
    POP EBX                             ; 004d65db
    RET                                 ; 004d65dc
    PUSH 0x5e1e90                       ; 004d65dd | g_CAngelForestTypeInfo
        ;   Label: LAB_004d65dd
    PUSH EBX                            ; 004d65e2
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004d65e3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 004d65e8
    PUSH EAX                            ; 004d65eb
    CALL crt_unknown.c_FUN_005a30b6     ; 004d65ec
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004d65f1
    MOV EAX,EBX                         ; 004d65f4
    POP EBX                             ; 004d65f6
    RET                                 ; 004d65f7
    PUSH EAX                            ; 004d65f8
        ;   Label: LAB_004d65f8
    CALL crt_unknown.c_FUN_005a30c4     ; 004d65f9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004d65fe
    MOV EAX,EBX                         ; 004d6601
    POP EBX                             ; 004d6603
    RET                                 ; 004d6604


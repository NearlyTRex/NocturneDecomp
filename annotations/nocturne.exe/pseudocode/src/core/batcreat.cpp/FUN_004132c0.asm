; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_batcreat_cpp_FUN_004132c0(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CBatCreatureTypeInfo_0059a110
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004132c0
        ;   Label: core_batcreat.cpp_FUN_004132c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004132c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004132c5
    JNZ 0x00413351                      ; 004132ca
        ;   XREF to: 00413351 (CONDITIONAL_JUMP)  ; LAB_00413351
    PUSH 0x0                            ; 004132d0
    ADD EBX,0x33c4                      ; 004132d2
    PUSH EBX                            ; 004132d8
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 004132d9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_0040fe50(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 004132de
    PUSH 0x0                            ; 004132e1
    SUB EAX,0x4b0                       ; 004132e3
    PUSH EAX                            ; 004132e8
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 004132e9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_0040fe30(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 004132ee
    PUSH 0x0                            ; 004132f1
    SUB EAX,0x20c                       ; 004132f3
    PUSH EAX                            ; 004132f8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 004132f9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 004132fe
    PUSH 0x0                            ; 00413301
    SUB EAX,0xb4                        ; 00413303
    PUSH EAX                            ; 00413308
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00413309
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 0041330e
    PUSH 0x0                            ; 00413311
    SUB EAX,0x1c8                       ; 00413313
    PUSH EAX                            ; 00413318
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 00413319
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041331e
    PUSH 0x0                            ; 00413321
    SUB EAX,0x293c                      ; 00413323
    PUSH EAX                            ; 00413328
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 00413329
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041332e
    PUSH 0x1                            ; 00413331
    LEA EBX,[EAX + 0xfffffeb0]          ; 00413333
    PUSH EBX                            ; 00413339
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0041333a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041333f
    MOV DL,byte ptr [ESP + 0xc]         ; 00413342
    MOV EBX,EAX                         ; 00413346
    TEST DL,0x2                         ; 00413348
    JNZ 0x0041336c                      ; 0041334b
        ;   XREF to: 0041336c (CONDITIONAL_JUMP)  ; LAB_0041336c
    MOV EAX,EBX                         ; 0041334d
    POP EBX                             ; 0041334f
    RET                                 ; 00413350
    PUSH 0x59a110                       ; 00413351 | g_CBatCreatureTypeInfo_0059a110
        ;   Label: LAB_00413351
    PUSH EBX                            ; 00413356
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00413357
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0041335c
    PUSH EAX                            ; 0041335f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00413360
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00413365
    MOV EAX,EBX                         ; 00413368
    POP EBX                             ; 0041336a
    RET                                 ; 0041336b
    PUSH EAX                            ; 0041336c
        ;   Label: LAB_0041336c
    CALL crt_unknown.c_FUN_00564494     ; 0041336d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00413372
    MOV EAX,EBX                         ; 00413375
    POP EBX                             ; 00413377
    RET                                 ; 00413378


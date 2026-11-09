; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNPC * core_hiram_cpp_CNPC_dtor_FUN_004ed400(CNPC *this_ptr,uint flags)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CNPCTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_cloth.cpp_FUN_00441ca0
;   core_path.cpp_CPathMap_dtor_FUN_00533060
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   unkafter_armour.cpp_FUN_0040ee30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed400
        ;   Label: core_hiram.cpp_CNPC_dtor_FUN_004ed400
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ed401
    TEST byte ptr [ESP + 0xc],0x4       ; 004ed405
    JNZ 0x004ed46d                      ; 004ed40a
        ;   XREF to: 004ed46d (CONDITIONAL_JUMP)  ; LAB_004ed46d
    PUSH 0x0                            ; 004ed40c
    ADD EBX,0xc1d0                      ; 004ed40e
    PUSH EBX                            ; 004ed414
    CALL core_path.cpp_CPathMap_dtor_FUN_00533060 ; 004ed415
        ;   XREF to: 00533060 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_00533060(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ed41a
    PUSH 0x0                            ; 004ed41d
    SUB EAX,0x8bf4                      ; 004ed41f
    PUSH EAX                            ; 004ed424
    CALL unkafter_armour.cpp_FUN_0040ee30 ; 004ed425
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 004ed42a
    PUSH 0x0                            ; 004ed42d
    SUB EAX,0x93c                       ; 004ed42f
    PUSH EAX                            ; 004ed434
    CALL core_cloth.cpp_FUN_00441ca0    ; 004ed435
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ed43a
    PUSH 0x0                            ; 004ed43d
    SUB EAX,0x2b48                      ; 004ed43f
    PUSH EAX                            ; 004ed444
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 004ed445
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ed44a
    PUSH 0x1                            ; 004ed44d
    LEA EBX,[EAX + 0xfffffea8]          ; 004ed44f
    PUSH EBX                            ; 004ed455
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004ed456
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ed45b
    MOV DL,byte ptr [ESP + 0xc]         ; 004ed45e
    MOV EBX,EAX                         ; 004ed462
    TEST DL,0x2                         ; 004ed464
    JNZ 0x004ed488                      ; 004ed467
        ;   XREF to: 004ed488 (CONDITIONAL_JUMP)  ; LAB_004ed488
    MOV EAX,EBX                         ; 004ed469
    POP EBX                             ; 004ed46b
    RET                                 ; 004ed46c
    PUSH 0x602130                       ; 004ed46d | g_CNPCTypeInfo
        ;   Label: LAB_004ed46d
    PUSH EBX                            ; 004ed472
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004ed473
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004ed478
    PUSH EAX                            ; 004ed47b
    CALL crt_unknown.c_FUN_005c0336     ; 004ed47c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004ed481
    MOV EAX,EBX                         ; 004ed484
    POP EBX                             ; 004ed486
    RET                                 ; 004ed487
    PUSH EAX                            ; 004ed488
        ;   Label: LAB_004ed488
    CALL crt_unknown.c_FUN_005c0344     ; 004ed489
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004ed48e
    MOV EAX,EBX                         ; 004ed491
    POP EBX                             ; 004ed493
    RET                                 ; 004ed494


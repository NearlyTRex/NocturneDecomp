; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHiram * core_hiram_cpp_CHiram_dtor_FUN_004ed1f0(CHiram *this_ptr,uint flags)
;
; Parameters:
; CHiram *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CCharacter_full_vtable g_CHiramVTable
;   WatcomTypeInfo g_CHiramTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_armour.cpp_FUN_0040ee30
;   core_cloth.cpp_CClothList_dtor_FUN_00441ca0
;   core_path.cpp_CPathMap_dtor_FUN_00533060
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed1f0
        ;   Label: core_hiram.cpp_CHiram_dtor_FUN_004ed1f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ed1f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004ed1f5
    JNZ 0x004ed267                      ; 004ed1fa
        ;   XREF to: 004ed267 (CONDITIONAL_JUMP)  ; LAB_004ed267
    PUSH 0x0                            ; 004ed1fc
    ADD EBX,0xc1d0                      ; 004ed1fe
    PUSH EBX                            ; 004ed204
    MOV dword ptr [EBX + 0xffff3f84],0x601fc4 ; 004ed205 | g_CHiramVTable
    CALL core_path.cpp_CPathMap_dtor_FUN_00533060 ; 004ed20f
        ;   XREF to: 00533060 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_00533060(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ed214
    PUSH 0x0                            ; 004ed217
    SUB EAX,0x8bf4                      ; 004ed219
    PUSH EAX                            ; 004ed21e
    CALL core_armour.cpp_FUN_0040ee30   ; 004ed21f
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 004ed224
    PUSH 0x0                            ; 004ed227
    SUB EAX,0x93c                       ; 004ed229
    PUSH EAX                            ; 004ed22e
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 004ed22f
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ed234
    PUSH 0x0                            ; 004ed237
    SUB EAX,0x2b48                      ; 004ed239
    PUSH EAX                            ; 004ed23e
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 004ed23f
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ed244
    PUSH 0x1                            ; 004ed247
    LEA EBX,[EAX + 0xfffffea8]          ; 004ed249
    PUSH EBX                            ; 004ed24f
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004ed250
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ed255
    MOV DL,byte ptr [ESP + 0xc]         ; 004ed258
    MOV EBX,EAX                         ; 004ed25c
    TEST DL,0x2                         ; 004ed25e
    JNZ 0x004ed282                      ; 004ed261
        ;   XREF to: 004ed282 (CONDITIONAL_JUMP)  ; LAB_004ed282
    MOV EAX,EBX                         ; 004ed263
    POP EBX                             ; 004ed265
    RET                                 ; 004ed266
    PUSH 0x602110                       ; 004ed267 | g_CHiramTypeInfo
        ;   Label: LAB_004ed267
    PUSH EBX                            ; 004ed26c
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004ed26d
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004ed272
    PUSH EAX                            ; 004ed275
    CALL crt_unknown.c_FUN_005c0336     ; 004ed276
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004ed27b
    MOV EAX,EBX                         ; 004ed27e
    POP EBX                             ; 004ed280
    RET                                 ; 004ed281
    PUSH EAX                            ; 004ed282
        ;   Label: LAB_004ed282
    CALL crt_unknown.c_FUN_005c0344     ; 004ed283
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004ed288
    MOV EAX,EBX                         ; 004ed28b
    POP EBX                             ; 004ed28d
    RET                                 ; 004ed28e


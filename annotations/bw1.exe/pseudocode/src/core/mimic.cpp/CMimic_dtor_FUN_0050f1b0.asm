; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMimic * __cdecl core_mimic_cpp_CMimic_dtor_FUN_0050f1b0(CMimic *this_ptr,uint flags)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CEnemy_full_vtable g_CMimicVTable
;   WatcomTypeInfo g_CMimicTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_armour.cpp_FUN_0040ee30
;   core_cloth.cpp_CClothList_dtor_FUN_00441ca0
;   core_cloth.cpp_FUN_0043e620
;   core_morph.cpp_CMorph_dtor_FUN_00522fc0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f1b0
        ;   Label: core_mimic.cpp_CMimic_dtor_FUN_0050f1b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050f1b1
    TEST byte ptr [ESP + 0xc],0x4       ; 0050f1b5
    JNZ 0x0050f261                      ; 0050f1ba
        ;   XREF to: 0050f261 (CONDITIONAL_JUMP)  ; LAB_0050f261
    MOV EAX,dword ptr [EBX + 0x47ac0]   ; 0050f1c0
    MOV dword ptr [EBX + 0x154],0x6039e4 ; 0050f1c6 | g_CMimicVTable
    TEST EAX,EAX                        ; 0050f1d0
    JZ 0x0050f1e6                       ; 0050f1d2
        ;   XREF to: 0050f1e6 (CONDITIONAL_JUMP)  ; LAB_0050f1e6
    PUSH 0x2                            ; 0050f1d4
    MOV EDX,dword ptr [EAX + 0x154]     ; 0050f1d6
    PUSH EAX                            ; 0050f1dc
    CALL dword ptr [EDX + 0xd0]         ; 0050f1dd
    ADD ESP,0x8                         ; 0050f1e3
    PUSH 0x0                            ; 0050f1e6
        ;   Label: LAB_0050f1e6
    ADD EBX,0x46e90                     ; 0050f1e8
    PUSH EBX                            ; 0050f1ee
    MOV dword ptr [EBX + 0xc30],0x0     ; 0050f1ef
    CALL core_morph.cpp_CMorph_dtor_FUN_00522fc0 ; 0050f1f9
        ;   XREF to: 00522fc0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_00522fc0(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050f1fe
    PUSH 0x0                            ; 0050f201
    SUB EAX,0x3ab60                     ; 0050f203
    PUSH EAX                            ; 0050f208
    CALL core_cloth.cpp_FUN_0043e620    ; 0050f209
        ;   XREF to: 0043e620 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043e620()
    ADD ESP,0x8                         ; 0050f20e
    PUSH 0x0                            ; 0050f211
    SUB EAX,0x8d54                      ; 0050f213
    PUSH EAX                            ; 0050f218
    CALL core_armour.cpp_FUN_0040ee30   ; 0050f219
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0050f21e
    PUSH 0x0                            ; 0050f221
    SUB EAX,0x93c                       ; 0050f223
    PUSH EAX                            ; 0050f228
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 0050f229
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050f22e
    PUSH 0x0                            ; 0050f231
    SUB EAX,0x2b48                      ; 0050f233
    PUSH EAX                            ; 0050f238
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 0050f239
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050f23e
    PUSH 0x1                            ; 0050f241
    LEA EBX,[EAX + 0xfffffea8]          ; 0050f243
    PUSH EBX                            ; 0050f249
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0050f24a
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050f24f
    MOV DL,byte ptr [ESP + 0xc]         ; 0050f252
    MOV EBX,EAX                         ; 0050f256
    TEST DL,0x2                         ; 0050f258
    JNZ 0x0050f27c                      ; 0050f25b
        ;   XREF to: 0050f27c (CONDITIONAL_JUMP)  ; LAB_0050f27c
    MOV EAX,EBX                         ; 0050f25d
    POP EBX                             ; 0050f25f
    RET                                 ; 0050f260
    PUSH 0x603b30                       ; 0050f261 | g_CMimicTypeInfo
        ;   Label: LAB_0050f261
    PUSH EBX                            ; 0050f266
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0050f267
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0050f26c
    PUSH EAX                            ; 0050f26f
    CALL crt_unknown.c_FUN_005c0336     ; 0050f270
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0050f275
    MOV EAX,EBX                         ; 0050f278
    POP EBX                             ; 0050f27a
    RET                                 ; 0050f27b
    PUSH EAX                            ; 0050f27c
        ;   Label: LAB_0050f27c
    CALL crt_unknown.c_FUN_005c0344     ; 0050f27d
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0050f282
    MOV EAX,EBX                         ; 0050f285
    POP EBX                             ; 0050f287
    RET                                 ; 0050f288


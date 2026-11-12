; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLarva * core_larva_cpp_CLarva_dtor_FUN_004e13a0(CLarva *this_ptr,uint flags)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLarvaTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_muzzle.cpp_FUN_0059df70
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e13a0
        ;   Label: core_larva.cpp_CLarva_dtor_FUN_004e13a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e13a1
    TEST byte ptr [ESP + 0xc],0x4       ; 004e13a5
    JNZ 0x004e140d                      ; 004e13aa
        ;   XREF to: 004e140d (CONDITIONAL_JUMP)  ; LAB_004e140d
    PUSH 0x0                            ; 004e13ac
    ADD EBX,0x3a20                      ; 004e13ae
    PUSH EBX                            ; 004e13b4
    CALL core_armour.cpp_FUN_0040f2b0   ; 004e13b5
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 004e13ba
    PUSH 0x0                            ; 004e13bd
    SUB EAX,0x9c8                       ; 004e13bf
    PUSH EAX                            ; 004e13c4
    CALL core_muzzle.cpp_FUN_0059df70   ; 004e13c5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 004e13ca
    PUSH 0x0                            ; 004e13cd
    SUB EAX,0x34c                       ; 004e13cf
    PUSH EAX                            ; 004e13d4
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 004e13d5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e13da
    PUSH 0x0                            ; 004e13dd
    SUB EAX,0x2a58                      ; 004e13df
    PUSH EAX                            ; 004e13e4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 004e13e5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e13ea
    PUSH 0x1                            ; 004e13ed
    LEA EBX,[EAX + 0xfffffd4c]          ; 004e13ef
    PUSH EBX                            ; 004e13f5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004e13f6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e13fb
    MOV DL,byte ptr [ESP + 0xc]         ; 004e13fe
    MOV EBX,EAX                         ; 004e1402
    TEST DL,0x2                         ; 004e1404
    JNZ 0x004e1428                      ; 004e1407
        ;   XREF to: 004e1428 (CONDITIONAL_JUMP)  ; LAB_004e1428
    MOV EAX,EBX                         ; 004e1409
    POP EBX                             ; 004e140b
    RET                                 ; 004e140c
    PUSH 0x5f9430                       ; 004e140d | g_CLarvaTypeInfo
        ;   Label: LAB_004e140d
    PUSH EBX                            ; 004e1412
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004e1413
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004e1418
    PUSH EAX                            ; 004e141b
    CALL crt_unknown.c_FUN_005b7fce     ; 004e141c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004e1421
    MOV EAX,EBX                         ; 004e1424
    POP EBX                             ; 004e1426
    RET                                 ; 004e1427
    PUSH EAX                            ; 004e1428
        ;   Label: LAB_004e1428
    CALL crt_unknown.c_FUN_005b7fdc     ; 004e1429
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004e142e
    MOV EAX,EBX                         ; 004e1431
    POP EBX                             ; 004e1433
    RET                                 ; 004e1434


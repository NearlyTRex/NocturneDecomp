; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTVBat * core_tvbat_cpp_CTVBat_dtor_FUN_005a5080(CTVBat *this_ptr,uint flags)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTVBatTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_armour.cpp_FUN_0040ee30
;   core_cloth.cpp_CClothList_dtor_FUN_00441ca0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5080
        ;   Label: core_tvbat.cpp_CTVBat_dtor_FUN_005a5080
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a5081
    TEST byte ptr [ESP + 0xc],0x4       ; 005a5085
    JNZ 0x005a50dd                      ; 005a508a
        ;   XREF to: 005a50dd (CONDITIONAL_JUMP)  ; LAB_005a50dd
    PUSH 0x0                            ; 005a508c
    ADD EBX,0x35dc                      ; 005a508e
    PUSH EBX                            ; 005a5094
    CALL core_armour.cpp_FUN_0040ee30   ; 005a5095
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 005a509a
    PUSH 0x0                            ; 005a509d
    SUB EAX,0x93c                       ; 005a509f
    PUSH EAX                            ; 005a50a4
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 005a50a5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a50aa
    PUSH 0x0                            ; 005a50ad
    SUB EAX,0x2b48                      ; 005a50af
    PUSH EAX                            ; 005a50b4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 005a50b5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a50ba
    PUSH 0x1                            ; 005a50bd
    LEA EBX,[EAX + 0xfffffea8]          ; 005a50bf
    PUSH EBX                            ; 005a50c5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 005a50c6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a50cb
    MOV DL,byte ptr [ESP + 0xc]         ; 005a50ce
    MOV EBX,EAX                         ; 005a50d2
    TEST DL,0x2                         ; 005a50d4
    JNZ 0x005a50f8                      ; 005a50d7
        ;   XREF to: 005a50f8 (CONDITIONAL_JUMP)  ; LAB_005a50f8
    MOV EAX,EBX                         ; 005a50d9
    POP EBX                             ; 005a50db
    RET                                 ; 005a50dc
    PUSH 0x607770                       ; 005a50dd | g_CTVBatTypeInfo
        ;   Label: LAB_005a50dd
    PUSH EBX                            ; 005a50e2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005a50e3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005a50e8
    PUSH EAX                            ; 005a50eb
    CALL crt_unknown.c_FUN_005c0336     ; 005a50ec
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005a50f1
    MOV EAX,EBX                         ; 005a50f4
    POP EBX                             ; 005a50f6
    RET                                 ; 005a50f7
    PUSH EAX                            ; 005a50f8
        ;   Label: LAB_005a50f8
    CALL crt_unknown.c_FUN_005c0344     ; 005a50f9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005a50fe
    MOV EAX,EBX                         ; 005a5101
    POP EBX                             ; 005a5103
    RET                                 ; 005a5104


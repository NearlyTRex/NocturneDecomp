; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrone * core_drone_cpp_CDrone_dtor_FUN_004866c0(CDrone *this_ptr,uint flags)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDroneTypeInfo
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

    PUSH EBX                            ; 004866c0
        ;   Label: core_drone.cpp_CDrone_dtor_FUN_004866c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004866c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004866c5
    JNZ 0x0048671d                      ; 004866ca
        ;   XREF to: 0048671d (CONDITIONAL_JUMP)  ; LAB_0048671d
    PUSH 0x0                            ; 004866cc
    ADD EBX,0x35dc                      ; 004866ce
    PUSH EBX                            ; 004866d4
    CALL core_armour.cpp_FUN_0040ee30   ; 004866d5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 004866da
    PUSH 0x0                            ; 004866dd
    SUB EAX,0x93c                       ; 004866df
    PUSH EAX                            ; 004866e4
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 004866e5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004866ea
    PUSH 0x0                            ; 004866ed
    SUB EAX,0x2b48                      ; 004866ef
    PUSH EAX                            ; 004866f4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 004866f5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004866fa
    PUSH 0x1                            ; 004866fd
    LEA EBX,[EAX + 0xfffffea8]          ; 004866ff
    PUSH EBX                            ; 00486705
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00486706
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048670b
    MOV DL,byte ptr [ESP + 0xc]         ; 0048670e
    MOV EBX,EAX                         ; 00486712
    TEST DL,0x2                         ; 00486714
    JNZ 0x00486738                      ; 00486717
        ;   XREF to: 00486738 (CONDITIONAL_JUMP)  ; LAB_00486738
    MOV EAX,EBX                         ; 00486719
    POP EBX                             ; 0048671b
    RET                                 ; 0048671c
    PUSH 0x5ff5f0                       ; 0048671d | g_CDroneTypeInfo
        ;   Label: LAB_0048671d
    PUSH EBX                            ; 00486722
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00486723
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00486728
    PUSH EAX                            ; 0048672b
    CALL crt_unknown.c_FUN_005c0336     ; 0048672c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00486731
    MOV EAX,EBX                         ; 00486734
    POP EBX                             ; 00486736
    RET                                 ; 00486737
    PUSH EAX                            ; 00486738
        ;   Label: LAB_00486738
    CALL crt_unknown.c_FUN_005c0344     ; 00486739
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0048673e
    MOV EAX,EBX                         ; 00486741
    POP EBX                             ; 00486743
    RET                                 ; 00486744


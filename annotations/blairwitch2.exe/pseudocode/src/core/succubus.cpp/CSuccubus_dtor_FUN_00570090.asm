; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSuccubus * core_succubus_cpp_CSuccubus_dtor_FUN_00570090(CSuccubus *this_ptr,uint flags)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSuccubusTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_morph.cpp_CMorph_dtor_FUN_005b6e80
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   unkaddr_0059d350.cpp_FUN_0059df70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570090
        ;   Label: core_succubus.cpp_CSuccubus_dtor_FUN_00570090
    MOV EBX,dword ptr [ESP + 0x8]       ; 00570091
    TEST byte ptr [ESP + 0xc],0x4       ; 00570095
    JNZ 0x00570131                      ; 0057009a
        ;   XREF to: 00570131 (CONDITIONAL_JUMP)  ; LAB_00570131
    PUSH 0x0                            ; 005700a0
    ADD EBX,0x12f78                     ; 005700a2
    PUSH EBX                            ; 005700a8
    CALL core_morph.cpp_CMorph_dtor_FUN_005b6e80 ; 005700a9
        ;   XREF to: 005b6e80 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_005b6e80(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005700ae
    PUSH 0x0                            ; 005700b1
    SUB EAX,0x1cc                       ; 005700b3
    PUSH EAX                            ; 005700b8
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 005700b9
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005700be
    PUSH 0x0                            ; 005700c1
    SUB EAX,0x22b4                      ; 005700c3
    PUSH EAX                            ; 005700c8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 005700c9
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005700ce
    PUSH 0x0                            ; 005700d1
    SUB EAX,0xd0d8                      ; 005700d3
    PUSH EAX                            ; 005700d8
    CALL core_armour.cpp_FUN_0040f2b0   ; 005700d9
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 005700de
    PUSH 0x0                            ; 005700e1
    SUB EAX,0x9c8                       ; 005700e3
    PUSH EAX                            ; 005700e8
    CALL unkaddr_0059d350.cpp_FUN_0059df70 ; 005700e9
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 005700ee
    PUSH 0x0                            ; 005700f1
    SUB EAX,0x34c                       ; 005700f3
    PUSH EAX                            ; 005700f8
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 005700f9
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005700fe
    PUSH 0x0                            ; 00570101
    SUB EAX,0x2a58                      ; 00570103
    PUSH EAX                            ; 00570108
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 00570109
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057010e
    PUSH 0x1                            ; 00570111
    LEA EBX,[EAX + 0xfffffd4c]          ; 00570113
    PUSH EBX                            ; 00570119
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0057011a
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057011f
    MOV DL,byte ptr [ESP + 0xc]         ; 00570122
    MOV EBX,EAX                         ; 00570126
    TEST DL,0x2                         ; 00570128
    JNZ 0x0057014c                      ; 0057012b
        ;   XREF to: 0057014c (CONDITIONAL_JUMP)  ; LAB_0057014c
    MOV EAX,EBX                         ; 0057012d
    POP EBX                             ; 0057012f
    RET                                 ; 00570130
    PUSH 0x5fc540                       ; 00570131 | g_CSuccubusTypeInfo
        ;   Label: LAB_00570131
    PUSH EBX                            ; 00570136
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00570137
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0057013c
    PUSH EAX                            ; 0057013f
    CALL crt_unknown.c_FUN_005b7fce     ; 00570140
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00570145
    MOV EAX,EBX                         ; 00570148
    POP EBX                             ; 0057014a
    RET                                 ; 0057014b
    PUSH EAX                            ; 0057014c
        ;   Label: LAB_0057014c
    CALL crt_unknown.c_FUN_005b7fdc     ; 0057014d
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00570152
    MOV EAX,EBX                         ; 00570155
    POP EBX                             ; 00570157
    RET                                 ; 00570158


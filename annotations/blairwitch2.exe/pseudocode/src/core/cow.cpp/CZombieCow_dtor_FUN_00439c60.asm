; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieCow * __cdecl core_cow_cpp_CZombieCow_dtor_FUN_00439c60(CZombieCow *this_ptr,uint flags)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CZombieCowTypeInfo
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

    PUSH EBX                            ; 00439c60
        ;   Label: core_cow.cpp_CZombieCow_dtor_FUN_00439c60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00439c61
    TEST byte ptr [ESP + 0xc],0x4       ; 00439c65
    JNZ 0x00439ccd                      ; 00439c6a
        ;   XREF to: 00439ccd (CONDITIONAL_JUMP)  ; LAB_00439ccd
    PUSH 0x0                            ; 00439c6c
    ADD EBX,0x3a20                      ; 00439c6e
    PUSH EBX                            ; 00439c74
    CALL core_armour.cpp_FUN_0040f2b0   ; 00439c75
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 00439c7a
    PUSH 0x0                            ; 00439c7d
    SUB EAX,0x9c8                       ; 00439c7f
    PUSH EAX                            ; 00439c84
    CALL core_muzzle.cpp_FUN_0059df70   ; 00439c85
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 00439c8a
    PUSH 0x0                            ; 00439c8d
    SUB EAX,0x34c                       ; 00439c8f
    PUSH EAX                            ; 00439c94
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 00439c95
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00439c9a
    PUSH 0x0                            ; 00439c9d
    SUB EAX,0x2a58                      ; 00439c9f
    PUSH EAX                            ; 00439ca4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 00439ca5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00439caa
    PUSH 0x1                            ; 00439cad
    LEA EBX,[EAX + 0xfffffd4c]          ; 00439caf
    PUSH EBX                            ; 00439cb5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00439cb6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00439cbb
    MOV DL,byte ptr [ESP + 0xc]         ; 00439cbe
    MOV EBX,EAX                         ; 00439cc2
    TEST DL,0x2                         ; 00439cc4
    JNZ 0x00439ce8                      ; 00439cc7
        ;   XREF to: 00439ce8 (CONDITIONAL_JUMP)  ; LAB_00439ce8
    MOV EAX,EBX                         ; 00439cc9
    POP EBX                             ; 00439ccb
    RET                                 ; 00439ccc
    PUSH 0x5f4b20                       ; 00439ccd | g_CZombieCowTypeInfo
        ;   Label: LAB_00439ccd
    PUSH EBX                            ; 00439cd2
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00439cd3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00439cd8
    PUSH EAX                            ; 00439cdb
    CALL crt_unknown.c_FUN_005b7fce     ; 00439cdc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00439ce1
    MOV EAX,EBX                         ; 00439ce4
    POP EBX                             ; 00439ce6
    RET                                 ; 00439ce7
    PUSH EAX                            ; 00439ce8
        ;   Label: LAB_00439ce8
    CALL crt_unknown.c_FUN_005b7fdc     ; 00439ce9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00439cee
    MOV EAX,EBX                         ; 00439cf1
    POP EBX                             ; 00439cf3
    RET                                 ; 00439cf4


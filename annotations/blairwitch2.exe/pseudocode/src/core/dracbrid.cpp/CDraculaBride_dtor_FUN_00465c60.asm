; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_dtor_FUN_00465c60(CDraculaBride *this_ptr,uint flags)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDraculaBrideTypeInfo
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

    PUSH EBX                            ; 00465c60
        ;   Label: core_dracbrid.cpp_CDraculaBride_dtor_FUN_00465c60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00465c61
    TEST byte ptr [ESP + 0xc],0x4       ; 00465c65
    JNZ 0x00465ccd                      ; 00465c6a
        ;   XREF to: 00465ccd (CONDITIONAL_JUMP)  ; LAB_00465ccd
    PUSH 0x0                            ; 00465c6c
    ADD EBX,0x3a20                      ; 00465c6e
    PUSH EBX                            ; 00465c74
    CALL core_armour.cpp_FUN_0040f2b0   ; 00465c75
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 00465c7a
    PUSH 0x0                            ; 00465c7d
    SUB EAX,0x9c8                       ; 00465c7f
    PUSH EAX                            ; 00465c84
    CALL core_muzzle.cpp_FUN_0059df70   ; 00465c85
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 00465c8a
    PUSH 0x0                            ; 00465c8d
    SUB EAX,0x34c                       ; 00465c8f
    PUSH EAX                            ; 00465c94
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 00465c95
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00465c9a
    PUSH 0x0                            ; 00465c9d
    SUB EAX,0x2a58                      ; 00465c9f
    PUSH EAX                            ; 00465ca4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 00465ca5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00465caa
    PUSH 0x1                            ; 00465cad
    LEA EBX,[EAX + 0xfffffd4c]          ; 00465caf
    PUSH EBX                            ; 00465cb5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00465cb6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00465cbb
    MOV DL,byte ptr [ESP + 0xc]         ; 00465cbe
    MOV EBX,EAX                         ; 00465cc2
    TEST DL,0x2                         ; 00465cc4
    JNZ 0x00465ce8                      ; 00465cc7
        ;   XREF to: 00465ce8 (CONDITIONAL_JUMP)  ; LAB_00465ce8
    MOV EAX,EBX                         ; 00465cc9
    POP EBX                             ; 00465ccb
    RET                                 ; 00465ccc
    PUSH 0x5f57f0                       ; 00465ccd | g_CDraculaBrideTypeInfo
        ;   Label: LAB_00465ccd
    PUSH EBX                            ; 00465cd2
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00465cd3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00465cd8
    PUSH EAX                            ; 00465cdb
    CALL crt_unknown.c_FUN_005b7fce     ; 00465cdc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00465ce1
    MOV EAX,EBX                         ; 00465ce4
    POP EBX                             ; 00465ce6
    RET                                 ; 00465ce7
    PUSH EAX                            ; 00465ce8
        ;   Label: LAB_00465ce8
    CALL crt_unknown.c_FUN_005b7fdc     ; 00465ce9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00465cee
    MOV EAX,EBX                         ; 00465cf1
    POP EBX                             ; 00465cf3
    RET                                 ; 00465cf4


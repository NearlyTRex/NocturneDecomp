; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieCow * __cdecl core_cow_cpp_CZombieCow_dtor_FUN_00445ae0(CZombieCow *this_ptr,uint flags)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CZombieCowTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_armour.cpp_FUN_00410370
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445ae0
        ;   Label: core_cow.cpp_CZombieCow_dtor_FUN_00445ae0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00445ae1
    TEST byte ptr [ESP + 0xc],0x4       ; 00445ae5
    JNZ 0x00445b3d                      ; 00445aea
        ;   XREF to: 00445b3d (CONDITIONAL_JUMP)  ; LAB_00445b3d
    PUSH 0x0                            ; 00445aec
    ADD EBX,0x385c                      ; 00445aee
    PUSH EBX                            ; 00445af4
    CALL core_armour.cpp_FUN_00410370   ; 00445af5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 00445afa
    PUSH 0x0                            ; 00445afd
    SUB EAX,0x954                       ; 00445aff
    PUSH EAX                            ; 00445b04
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 00445b05
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00445b0a
    PUSH 0x0                            ; 00445b0d
    SUB EAX,0x2db0                      ; 00445b0f
    PUSH EAX                            ; 00445b14
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00445b15
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00445b1a
    PUSH 0x1                            ; 00445b1d
    LEA EBX,[EAX + 0xfffffea8]          ; 00445b1f
    PUSH EBX                            ; 00445b25
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00445b26
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00445b2b
    MOV DL,byte ptr [ESP + 0xc]         ; 00445b2e
    MOV EBX,EAX                         ; 00445b32
    TEST DL,0x2                         ; 00445b34
    JNZ 0x00445b58                      ; 00445b37
        ;   XREF to: 00445b58 (CONDITIONAL_JUMP)  ; LAB_00445b58
    MOV EAX,EBX                         ; 00445b39
    POP EBX                             ; 00445b3b
    RET                                 ; 00445b3c
    PUSH 0x5ddd10                       ; 00445b3d | g_CZombieCowTypeInfo
        ;   Label: LAB_00445b3d
    PUSH EBX                            ; 00445b42
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00445b43
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00445b48
    PUSH EAX                            ; 00445b4b
    CALL crt_unknown.c_FUN_005a30b6     ; 00445b4c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00445b51
    MOV EAX,EBX                         ; 00445b54
    POP EBX                             ; 00445b56
    RET                                 ; 00445b57
    PUSH EAX                            ; 00445b58
        ;   Label: LAB_00445b58
    CALL crt_unknown.c_FUN_005a30c4     ; 00445b59
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00445b5e
    MOV EAX,EBX                         ; 00445b61
    POP EBX                             ; 00445b63
    RET                                 ; 00445b64


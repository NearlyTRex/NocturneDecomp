; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNPC * core_npc_cpp_CNPC_dtor_FUN_00509af0(CNPC *this_ptr,uint flags)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CNPCTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_armour.cpp_FUN_00410370
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_path.cpp_CPathMap_dtor_FUN_0050ad40
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509af0
        ;   Label: core_npc.cpp_CNPC_dtor_FUN_00509af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00509af1
    TEST byte ptr [ESP + 0xc],0x4       ; 00509af5
    JNZ 0x00509b5d                      ; 00509afa
        ;   XREF to: 00509b5d (CONDITIONAL_JUMP)  ; LAB_00509b5d
    PUSH 0x0                            ; 00509afc
    ADD EBX,0xcdcc                      ; 00509afe
    PUSH EBX                            ; 00509b04
    CALL core_path.cpp_CPathMap_dtor_FUN_0050ad40 ; 00509b05
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_0050ad40(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00509b0a
    PUSH 0x0                            ; 00509b0d
    SUB EAX,0x9570                      ; 00509b0f
    PUSH EAX                            ; 00509b14
    CALL core_armour.cpp_FUN_00410370   ; 00509b15
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 00509b1a
    PUSH 0x0                            ; 00509b1d
    SUB EAX,0x954                       ; 00509b1f
    PUSH EAX                            ; 00509b24
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 00509b25
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00509b2a
    PUSH 0x0                            ; 00509b2d
    SUB EAX,0x2db0                      ; 00509b2f
    PUSH EAX                            ; 00509b34
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00509b35
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00509b3a
    PUSH 0x1                            ; 00509b3d
    LEA EBX,[EAX + 0xfffffea8]          ; 00509b3f
    PUSH EBX                            ; 00509b45
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00509b46
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00509b4b
    MOV DL,byte ptr [ESP + 0xc]         ; 00509b4e
    MOV EBX,EAX                         ; 00509b52
    TEST DL,0x2                         ; 00509b54
    JNZ 0x00509b78                      ; 00509b57
        ;   XREF to: 00509b78 (CONDITIONAL_JUMP)  ; LAB_00509b78
    MOV EAX,EBX                         ; 00509b59
    POP EBX                             ; 00509b5b
    RET                                 ; 00509b5c
    PUSH 0x5e2f40                       ; 00509b5d | g_CNPCTypeInfo
        ;   Label: LAB_00509b5d
    PUSH EBX                            ; 00509b62
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00509b63
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00509b68
    PUSH EAX                            ; 00509b6b
    CALL crt_unknown.c_FUN_005a30b6     ; 00509b6c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00509b71
    MOV EAX,EBX                         ; 00509b74
    POP EBX                             ; 00509b76
    RET                                 ; 00509b77
    PUSH EAX                            ; 00509b78
        ;   Label: LAB_00509b78
    CALL crt_unknown.c_FUN_005a30c4     ; 00509b79
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00509b7e
    MOV EAX,EBX                         ; 00509b81
    POP EBX                             ; 00509b83
    RET                                 ; 00509b84


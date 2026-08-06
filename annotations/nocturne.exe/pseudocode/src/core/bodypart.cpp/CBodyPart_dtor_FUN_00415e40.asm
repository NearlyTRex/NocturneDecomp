; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_dtor_FUN_00415e40(CBodyPart *this_ptr,uint flags)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CDemonActor_vtable g_CBodyPartVTable
;   WatcomTypeInfo g_CBodyPartTypeInfo_0059a860
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0
;   core_bodypart.cpp_SBodyPartFire_arrdtor_FUN_00418130
;   core_bodypart.cpp_SBodyPartModel_arrdtor_FUN_00418110
;   core_box.cpp_CBox_dtor_FUN_0041a6c0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415e40
        ;   Label: core_bodypart.cpp_CBodyPart_dtor_FUN_00415e40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00415e41
    TEST byte ptr [ESP + 0xc],0x4       ; 00415e45
    JNZ 0x00415eb4                      ; 00415e4a
        ;   XREF to: 00415eb4 (CONDITIONAL_JUMP)  ; LAB_00415eb4
    PUSH 0x0                            ; 00415e4c
    PUSH 0x0                            ; 00415e4e
    PUSH EBX                            ; 00415e50
    MOV dword ptr [EBX + 0x14c],0x59a744 ; 00415e51 | g_CBodyPartVTable
    CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0 ; 00415e5b
        ;   XREF to: 00415ee0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0(CBodyPart * this_ptr, int vertex_count, int tri_count)
    ADD ESP,0xc                         ; 00415e60
    PUSH 0x0                            ; 00415e63
    ADD EBX,0xcb4                       ; 00415e65
    PUSH EBX                            ; 00415e6b
    CALL core_box.cpp_CBox_dtor_FUN_0041a6c0 ; 00415e6c
        ;   XREF to: 0041a6c0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041a6c0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00415e71
    PUSH 0x0                            ; 00415e74
    SUB EAX,0x56c                       ; 00415e76
    PUSH EAX                            ; 00415e7b
    CALL core_bodypart.cpp_SBodyPartFire_arrdtor_FUN_00418130 ; 00415e7c
        ;   XREF to: 00418130 (UNCONDITIONAL_CALL)  ; SBodyPartFire * core_bodypart.cpp_SBodyPartFire_arrdtor_FUN_00418130(SBodyPartFire * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00415e81
    PUSH 0x0                            ; 00415e84
    SUB EAX,0x4c0                       ; 00415e86
    PUSH EAX                            ; 00415e8b
    CALL core_bodypart.cpp_SBodyPartModel_arrdtor_FUN_00418110 ; 00415e8c
        ;   XREF to: 00418110 (UNCONDITIONAL_CALL)  ; SBodyPartModel * core_bodypart.cpp_SBodyPartModel_arrdtor_FUN_00418110(SBodyPartModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00415e91
    PUSH 0x1                            ; 00415e94
    LEA EBX,[EAX + 0xfffffd78]          ; 00415e96
    PUSH EBX                            ; 00415e9c
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00415e9d
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00415ea2
    MOV DL,byte ptr [ESP + 0xc]         ; 00415ea5
    MOV EBX,EAX                         ; 00415ea9
    TEST DL,0x2                         ; 00415eab
    JNZ 0x00415ecf                      ; 00415eae
        ;   XREF to: 00415ecf (CONDITIONAL_JUMP)  ; LAB_00415ecf
    MOV EAX,EBX                         ; 00415eb0
    POP EBX                             ; 00415eb2
    RET                                 ; 00415eb3
    PUSH 0x59a860                       ; 00415eb4 | g_CBodyPartTypeInfo_0059a860
        ;   Label: LAB_00415eb4
    PUSH EBX                            ; 00415eb9
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00415eba
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00415ebf
    PUSH EAX                            ; 00415ec2
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00415ec3
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00415ec8
    MOV EAX,EBX                         ; 00415ecb
    POP EBX                             ; 00415ecd
    RET                                 ; 00415ece
    PUSH EAX                            ; 00415ecf
        ;   Label: LAB_00415ecf
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 00415ed0
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 00415ed5
    MOV EAX,EBX                         ; 00415ed8
    POP EBX                             ; 00415eda
    RET                                 ; 00415edb


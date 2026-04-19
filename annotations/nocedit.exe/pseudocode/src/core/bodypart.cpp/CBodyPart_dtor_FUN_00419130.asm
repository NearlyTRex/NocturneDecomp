; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_dtor_FUN_00419130(CBodyPart *this_ptr,uint flags)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CDemonActor_vtable g_CBodyPartVTable
;   WatcomTypeInfo g_CBodyPartTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
;   core_bodypart.cpp_SBodyPartFire_arrdtor_FUN_0041b6b0
;   core_bodypart.cpp_SBodyPartModel_arrdtor_FUN_0041b690
;   core_box.cpp_CBox_dtor_FUN_0041dd00
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419130
        ;   Label: core_bodypart.cpp_CBodyPart_dtor_FUN_00419130
    MOV EBX,dword ptr [ESP + 0x8]       ; 00419131
    TEST byte ptr [ESP + 0xc],0x4       ; 00419135
    JNZ 0x004191a4                      ; 0041913a
        ;   XREF to: 004191a4 (CONDITIONAL_JUMP)  ; LAB_004191a4
    PUSH 0x0                            ; 0041913c
    PUSH 0x0                            ; 0041913e
    PUSH EBX                            ; 00419140
    MOV dword ptr [EBX + 0x154],0x65add4 ; 00419141 | g_CBodyPartVTable
    CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0 ; 0041914b
        ;   XREF to: 004191d0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0(CBodyPart * this_ptr, int vertex_count, int tri_count)
    ADD ESP,0xc                         ; 00419150
    PUSH 0x0                            ; 00419153
    ADD EBX,0xccc                       ; 00419155
    PUSH EBX                            ; 0041915b
    CALL core_box.cpp_CBox_dtor_FUN_0041dd00 ; 0041915c
        ;   XREF to: 0041dd00 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dd00(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00419161
    PUSH 0x0                            ; 00419164
    SUB EAX,0x57c                       ; 00419166
    PUSH EAX                            ; 0041916b
    CALL core_bodypart.cpp_SBodyPartFire_arrdtor_FUN_0041b6b0 ; 0041916c
        ;   XREF to: 0041b6b0 (UNCONDITIONAL_CALL)  ; SBodyPartFire * core_bodypart.cpp_SBodyPartFire_arrdtor_FUN_0041b6b0(SBodyPartFire * objs, uint flags)
    ADD ESP,0x8                         ; 00419171
    PUSH 0x0                            ; 00419174
    SUB EAX,0x4c0                       ; 00419176
    PUSH EAX                            ; 0041917b
    CALL core_bodypart.cpp_SBodyPartModel_arrdtor_FUN_0041b690 ; 0041917c
        ;   XREF to: 0041b690 (UNCONDITIONAL_CALL)  ; SBodyPartModel * core_bodypart.cpp_SBodyPartModel_arrdtor_FUN_0041b690(SBodyPartModel * objs, uint flags)
    ADD ESP,0x8                         ; 00419181
    PUSH 0x1                            ; 00419184
    LEA EBX,[EAX + 0xfffffd70]          ; 00419186
    PUSH EBX                            ; 0041918c
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30 ; 0041918d
        ;   XREF to: 00408a30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00419192
    MOV DL,byte ptr [ESP + 0xc]         ; 00419195
    MOV EBX,EAX                         ; 00419199
    TEST DL,0x2                         ; 0041919b
    JNZ 0x004191bf                      ; 0041919e
        ;   XREF to: 004191bf (CONDITIONAL_JUMP)  ; LAB_004191bf
    MOV EAX,EBX                         ; 004191a0
    POP EBX                             ; 004191a2
    RET                                 ; 004191a3
    PUSH 0x65af00                       ; 004191a4 | g_CBodyPartTypeInfo
        ;   Label: LAB_004191a4
    PUSH EBX                            ; 004191a9
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 004191aa
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004191af
    PUSH EAX                            ; 004191b2
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 004191b3
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004191b8
    MOV EAX,EBX                         ; 004191bb
    POP EBX                             ; 004191bd
    RET                                 ; 004191be
    PUSH EAX                            ; 004191bf
        ;   Label: LAB_004191bf
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004191c0
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004191c5
    MOV EAX,EBX                         ; 004191c8
    POP EBX                             ; 004191ca
    RET                                 ; 004191cb


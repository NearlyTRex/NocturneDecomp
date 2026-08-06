; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_004c8380(CLightCone *this_ptr,uint flags)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightConeTypeInfo_0059ffb0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8380
        ;   Label: core_litecone.cpp_CLightCone_dtor_FUN_004c8380
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c8381
    TEST byte ptr [ESP + 0xc],0x4       ; 004c8385
    JNZ 0x004c83a6                      ; 004c838a
        ;   XREF to: 004c83a6 (CONDITIONAL_JUMP)  ; LAB_004c83a6
    PUSH 0x1                            ; 004c838c
    PUSH EBX                            ; 004c838e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004c838f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c8394
    MOV DL,byte ptr [ESP + 0xc]         ; 004c8397
    MOV EBX,EAX                         ; 004c839b
    TEST DL,0x2                         ; 004c839d
    JNZ 0x004c83c1                      ; 004c83a0
        ;   XREF to: 004c83c1 (CONDITIONAL_JUMP)  ; LAB_004c83c1
    MOV EAX,EBX                         ; 004c83a2
    POP EBX                             ; 004c83a4
    RET                                 ; 004c83a5
    PUSH 0x59ffb0                       ; 004c83a6 | g_CLightConeTypeInfo_0059ffb0
        ;   Label: LAB_004c83a6
    PUSH EBX                            ; 004c83ab
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004c83ac
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004c83b1
    PUSH EAX                            ; 004c83b4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004c83b5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004c83ba
    MOV EAX,EBX                         ; 004c83bd
    POP EBX                             ; 004c83bf
    RET                                 ; 004c83c0
    PUSH EAX                            ; 004c83c1
        ;   Label: LAB_004c83c1
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 004c83c2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 004c83c7
    MOV EAX,EBX                         ; 004c83ca
    POP EBX                             ; 004c83cc
    RET                                 ; 004c83cd


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLever * __cdecl core_lever_cpp_CLever_dtor_FUN_004c6970(CLever *this_ptr,uint flags)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLeverTypeInfo_0059fd20
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6970
        ;   Label: core_lever.cpp_CLever_dtor_FUN_004c6970
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c6971
    TEST byte ptr [ESP + 0xc],0x4       ; 004c6975
    JNZ 0x004c6996                      ; 004c697a
        ;   XREF to: 004c6996 (CONDITIONAL_JUMP)  ; LAB_004c6996
    PUSH 0x1                            ; 004c697c
    PUSH EBX                            ; 004c697e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 004c697f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c6984
    MOV DL,byte ptr [ESP + 0xc]         ; 004c6987
    MOV EBX,EAX                         ; 004c698b
    TEST DL,0x2                         ; 004c698d
    JNZ 0x004c69b1                      ; 004c6990
        ;   XREF to: 004c69b1 (CONDITIONAL_JUMP)  ; LAB_004c69b1
    MOV EAX,EBX                         ; 004c6992
    POP EBX                             ; 004c6994
    RET                                 ; 004c6995
    PUSH 0x59fd20                       ; 004c6996 | g_CLeverTypeInfo_0059fd20
        ;   Label: LAB_004c6996
    PUSH EBX                            ; 004c699b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004c699c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004c69a1
    PUSH EAX                            ; 004c69a4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004c69a5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004c69aa
    MOV EAX,EBX                         ; 004c69ad
    POP EBX                             ; 004c69af
    RET                                 ; 004c69b0
    PUSH EAX                            ; 004c69b1
        ;   Label: LAB_004c69b1
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 004c69b2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 004c69b7
    MOV EAX,EBX                         ; 004c69ba
    POP EBX                             ; 004c69bc
    RET                                 ; 004c69bd


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_00462890(CDrip *this_ptr,uint flags)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDripTypeInfo_0059c6c0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462890
        ;   Label: core_drip.cpp_CDrip_dtor_FUN_00462890
    MOV EBX,dword ptr [ESP + 0x8]       ; 00462891
    TEST byte ptr [ESP + 0xc],0x4       ; 00462895
    JNZ 0x004628b6                      ; 0046289a
        ;   XREF to: 004628b6 (CONDITIONAL_JUMP)  ; LAB_004628b6
    PUSH 0x1                            ; 0046289c
    PUSH EBX                            ; 0046289e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0046289f
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004628a4
    MOV DL,byte ptr [ESP + 0xc]         ; 004628a7
    MOV EBX,EAX                         ; 004628ab
    TEST DL,0x2                         ; 004628ad
    JNZ 0x004628d1                      ; 004628b0
        ;   XREF to: 004628d1 (CONDITIONAL_JUMP)  ; LAB_004628d1
    MOV EAX,EBX                         ; 004628b2
    POP EBX                             ; 004628b4
    RET                                 ; 004628b5
    PUSH 0x59c6c0                       ; 004628b6 | g_CDripTypeInfo_0059c6c0
        ;   Label: LAB_004628b6
    PUSH EBX                            ; 004628bb
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004628bc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004628c1
    PUSH EAX                            ; 004628c4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004628c5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004628ca
    MOV EAX,EBX                         ; 004628cd
    POP EBX                             ; 004628cf
    RET                                 ; 004628d0
    PUSH EAX                            ; 004628d1
        ;   Label: LAB_004628d1
    CALL crt_unknown.c_FUN_00564494     ; 004628d2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004628d7
    MOV EAX,EBX                         ; 004628da
    POP EBX                             ; 004628dc
    RET                                 ; 004628dd


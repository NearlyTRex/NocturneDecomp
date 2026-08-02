; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAnvil * __cdecl core_anvil_cpp_CAnvil_dtor_FUN_0040f8b0(CAnvil *this_ptr,uint flags)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAnvilTypeInfo_00599770
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f8b0
        ;   Label: core_anvil.cpp_CAnvil_dtor_FUN_0040f8b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f8b1
    TEST byte ptr [ESP + 0xc],0x4       ; 0040f8b5
    JNZ 0x0040f8d6                      ; 0040f8ba
        ;   XREF to: 0040f8d6 (CONDITIONAL_JUMP)  ; LAB_0040f8d6
    PUSH 0x1                            ; 0040f8bc
    PUSH EBX                            ; 0040f8be
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0040f8bf
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040f8c4
    MOV DL,byte ptr [ESP + 0xc]         ; 0040f8c7
    MOV EBX,EAX                         ; 0040f8cb
    TEST DL,0x2                         ; 0040f8cd
    JNZ 0x0040f8f1                      ; 0040f8d0
        ;   XREF to: 0040f8f1 (CONDITIONAL_JUMP)  ; LAB_0040f8f1
    MOV EAX,EBX                         ; 0040f8d2
    POP EBX                             ; 0040f8d4
    RET                                 ; 0040f8d5
    PUSH 0x599770                       ; 0040f8d6 | g_CAnvilTypeInfo_00599770
        ;   Label: LAB_0040f8d6
    PUSH EBX                            ; 0040f8db
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0040f8dc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0040f8e1
    PUSH EAX                            ; 0040f8e4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0040f8e5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0040f8ea
    MOV EAX,EBX                         ; 0040f8ed
    POP EBX                             ; 0040f8ef
    RET                                 ; 0040f8f0
    PUSH EAX                            ; 0040f8f1
        ;   Label: LAB_0040f8f1
    CALL crt_unknown.c_FUN_00564494     ; 0040f8f2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0040f8f7
    MOV EAX,EBX                         ; 0040f8fa
    POP EBX                             ; 0040f8fc
    RET                                 ; 0040f8fd


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * __cdecl core_flies_cpp_CFlies_dtor_FUN_0048fc30(CFlies *this_ptr,uint flags)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CFliesTypeInfo_0059db30
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_flies.cpp_SFly_arrdtor_FUN_0048fce0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fc30
        ;   Label: core_flies.cpp_CFlies_dtor_FUN_0048fc30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048fc31
    TEST byte ptr [ESP + 0xc],0x4       ; 0048fc35
    JNZ 0x0048fc6d                      ; 0048fc3a
        ;   XREF to: 0048fc6d (CONDITIONAL_JUMP)  ; LAB_0048fc6d
    PUSH 0x0                            ; 0048fc3c
    ADD EBX,0x160                       ; 0048fc3e
    PUSH EBX                            ; 0048fc44
    CALL core_flies.cpp_SFly_arrdtor_FUN_0048fce0 ; 0048fc45
        ;   XREF to: 0048fce0 (UNCONDITIONAL_CALL)  ; SFly * core_flies.cpp_SFly_arrdtor_FUN_0048fce0(SFly * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048fc4a
    PUSH 0x1                            ; 0048fc4d
    LEA EBX,[EAX + 0xfffffea0]          ; 0048fc4f
    PUSH EBX                            ; 0048fc55
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 0048fc56
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0048fc5b
    MOV DL,byte ptr [ESP + 0xc]         ; 0048fc5e
    MOV EBX,EAX                         ; 0048fc62
    TEST DL,0x2                         ; 0048fc64
    JNZ 0x0048fc88                      ; 0048fc67
        ;   XREF to: 0048fc88 (CONDITIONAL_JUMP)  ; LAB_0048fc88
    MOV EAX,EBX                         ; 0048fc69
    POP EBX                             ; 0048fc6b
    RET                                 ; 0048fc6c
    PUSH 0x59db30                       ; 0048fc6d | g_CFliesTypeInfo_0059db30
        ;   Label: LAB_0048fc6d
    PUSH EBX                            ; 0048fc72
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 0048fc73
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0048fc78
    PUSH EAX                            ; 0048fc7b
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0048fc7c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 0048fc81
    MOV EAX,EBX                         ; 0048fc84
    POP EBX                             ; 0048fc86
    RET                                 ; 0048fc87
    PUSH EAX                            ; 0048fc88
        ;   Label: LAB_0048fc88
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0048fc89
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0048fc8e
    MOV EAX,EBX                         ; 0048fc91
    POP EBX                             ; 0048fc93
    RET                                 ; 0048fc94


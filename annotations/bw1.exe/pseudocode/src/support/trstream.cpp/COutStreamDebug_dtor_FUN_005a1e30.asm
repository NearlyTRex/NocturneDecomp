; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamDebug * __cdecl support_trstream_cpp_COutStreamDebug_dtor_FUN_005a1e30(COutStreamDebug *this_ptr,uint flags)
;
; Parameters:
; COutStreamDebug * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined1* g_COutStreamDebugVTable = 005a1e30
;   WatcomTypeInfo g_COutStreamDebugTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   support_trstream.cpp_COutStream_dtor_FUN_005a14b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1e30
        ;   Label: support_trstream.cpp_COutStreamDebug_dtor_FUN_005a1e30
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a1e31
    TEST byte ptr [ESP + 0xc],0x4       ; 005a1e35
    JNZ 0x005a1e5c                      ; 005a1e3a
        ;   XREF to: 005a1e5c (CONDITIONAL_JUMP)  ; LAB_005a1e5c
    PUSH 0x1                            ; 005a1e3c
    PUSH EBX                            ; 005a1e3e
    MOV dword ptr [EBX],0x607474        ; 005a1e3f | g_COutStreamDebugVTable
    CALL support_trstream.cpp_COutStream_dtor_FUN_005a14b0 ; 005a1e45
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; COutStream * support_trstream.cpp_COutStream_dtor_FUN_005a14b0(COutStream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005a1e4a
    MOV DL,byte ptr [ESP + 0xc]         ; 005a1e4d
    MOV EBX,EAX                         ; 005a1e51
    TEST DL,0x2                         ; 005a1e53
    JNZ 0x005a1e77                      ; 005a1e56
        ;   XREF to: 005a1e77 (CONDITIONAL_JUMP)  ; LAB_005a1e77
    MOV EAX,EBX                         ; 005a1e58
    POP EBX                             ; 005a1e5a
    RET                                 ; 005a1e5b
    PUSH 0x607490                       ; 005a1e5c | g_COutStreamDebugTypeInfo
        ;   Label: LAB_005a1e5c
    PUSH EBX                            ; 005a1e61
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005a1e62
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005a1e67
    PUSH EAX                            ; 005a1e6a
    CALL crt_unknown.c_FUN_005c0336     ; 005a1e6b
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005a1e70
    MOV EAX,EBX                         ; 005a1e73
    POP EBX                             ; 005a1e75
    RET                                 ; 005a1e76
    PUSH EAX                            ; 005a1e77
        ;   Label: LAB_005a1e77
    CALL crt_unknown.c_FUN_005c0344     ; 005a1e78
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005a1e7d
    MOV EAX,EBX                         ; 005a1e80
    POP EBX                             ; 005a1e82
    RET                                 ; 005a1e83


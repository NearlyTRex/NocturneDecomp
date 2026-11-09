; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamMemory * support_trstream_cpp_COutStreamMemory_dtor_FUN_005a1b60(COutStreamMemory *this_ptr,uint flags)
;
; Parameters:
; COutStreamMemory * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[3]:
;   support_codec.cpp_FUN_00442c80 at 00442cda
;   support_codec.cpp_FUN_00442f00 at 00442f58
;   support_codec.cpp_FUN_00444020 at 004440b5
;
; Referenced Globals:
;   WatcomTypeInfo g_COutStreamMemoryTypeInfo
;   undefined1* g_COutStreamMemoryVTable = 005a1b60
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   support_trstream.cpp_FUN_005a14b0
;   support_trstream.cpp_FUN_005a1d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1b60
        ;   Label: support_trstream.cpp_COutStreamMemory_dtor_FUN_005a1b60
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a1b61
    TEST byte ptr [ESP + 0xc],0x4       ; 005a1b65
    JNZ 0x005a1b95                      ; 005a1b6a
        ;   XREF to: 005a1b95 (CONDITIONAL_JUMP)  ; LAB_005a1b95
    PUSH EBX                            ; 005a1b6c
    MOV dword ptr [EBX],0x607454        ; 005a1b6d | g_COutStreamMemoryVTable
    CALL support_trstream.cpp_FUN_005a1d20 ; 005a1b73
        ;   XREF to: 005a1d20 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a1d20()
    ADD ESP,0x4                         ; 005a1b78
    PUSH 0x1                            ; 005a1b7b
    PUSH EBX                            ; 005a1b7d
    CALL support_trstream.cpp_FUN_005a14b0 ; 005a1b7e
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_005a14b0()
    ADD ESP,0x8                         ; 005a1b83
    MOV DL,byte ptr [ESP + 0xc]         ; 005a1b86
    MOV EBX,EAX                         ; 005a1b8a
    TEST DL,0x2                         ; 005a1b8c
    JNZ 0x005a1bb0                      ; 005a1b8f
        ;   XREF to: 005a1bb0 (CONDITIONAL_JUMP)  ; LAB_005a1bb0
    MOV EAX,EBX                         ; 005a1b91
    POP EBX                             ; 005a1b93
    RET                                 ; 005a1b94
    PUSH 0x5fdac0                       ; 005a1b95 | g_COutStreamMemoryTypeInfo
        ;   Label: LAB_005a1b95
    PUSH EBX                            ; 005a1b9a
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 005a1b9b
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 005a1ba0
    PUSH EAX                            ; 005a1ba3
    CALL crt_unknown.c_FUN_005c0336     ; 005a1ba4
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 005a1ba9
    MOV EAX,EBX                         ; 005a1bac
    POP EBX                             ; 005a1bae
    RET                                 ; 005a1baf
    PUSH EAX                            ; 005a1bb0
        ;   Label: LAB_005a1bb0
    CALL crt_unknown.c_FUN_005c0344     ; 005a1bb1
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 005a1bb6
    MOV EAX,EBX                         ; 005a1bb9
    POP EBX                             ; 005a1bbb
    RET                                 ; 005a1bbc


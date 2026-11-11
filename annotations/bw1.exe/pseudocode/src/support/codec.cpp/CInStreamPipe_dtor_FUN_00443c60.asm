; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CInStreamPipe * support_codec_cpp_CInStreamPipe_dtor_FUN_00443c60(CInStreamPipe *this_ptr,uint flags)
;
; Parameters:
; CInStreamPipe *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   undefined1* g_CInStreamPipeVTable = 00443c60
;   WatcomTypeInfo g_CInStreamPipeTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   support_codec.cpp_CInStreamPipe_close_FUN_00443f00
;   unkaddr_0059f520.cpp_FUN_0059f550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443c60
        ;   Label: support_codec.cpp_CInStreamPipe_dtor_FUN_00443c60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00443c61
    TEST byte ptr [ESP + 0xc],0x4       ; 00443c65
    JNZ 0x00443c95                      ; 00443c6a
        ;   XREF to: 00443c95 (CONDITIONAL_JUMP)  ; LAB_00443c95
    PUSH EBX                            ; 00443c6c
    MOV dword ptr [EBX],0x5fda74        ; 00443c6d | g_CInStreamPipeVTable
    CALL support_codec.cpp_CInStreamPipe_close_FUN_00443f00 ; 00443c73
        ;   XREF to: 00443f00 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CInStreamPipe_close_FUN_00443f00(CInStreamPipe * this_ptr)
    ADD ESP,0x4                         ; 00443c78
    PUSH 0x1                            ; 00443c7b
    PUSH EBX                            ; 00443c7d
    CALL unkaddr_0059f520.cpp_FUN_0059f550 ; 00443c7e
        ;   XREF to: 0059f550 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059f520.cpp_FUN_0059f550()
    ADD ESP,0x8                         ; 00443c83
    MOV DL,byte ptr [ESP + 0xc]         ; 00443c86
    MOV EBX,EAX                         ; 00443c8a
    TEST DL,0x2                         ; 00443c8c
    JNZ 0x00443cb0                      ; 00443c8f
        ;   XREF to: 00443cb0 (CONDITIONAL_JUMP)  ; LAB_00443cb0
    MOV EAX,EBX                         ; 00443c91
    POP EBX                             ; 00443c93
    RET                                 ; 00443c94
    PUSH 0x5fdb00                       ; 00443c95 | g_CInStreamPipeTypeInfo
        ;   Label: LAB_00443c95
    PUSH EBX                            ; 00443c9a
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00443c9b
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 00443ca0
    PUSH EAX                            ; 00443ca3
    CALL crt_unknown.c_FUN_005c0336     ; 00443ca4
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00443ca9
    MOV EAX,EBX                         ; 00443cac
    POP EBX                             ; 00443cae
    RET                                 ; 00443caf
    PUSH EAX                            ; 00443cb0
        ;   Label: LAB_00443cb0
    CALL crt_unknown.c_FUN_005c0344     ; 00443cb1
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00443cb6
    MOV EAX,EBX                         ; 00443cb9
    POP EBX                             ; 00443cbb
    RET                                 ; 00443cbc


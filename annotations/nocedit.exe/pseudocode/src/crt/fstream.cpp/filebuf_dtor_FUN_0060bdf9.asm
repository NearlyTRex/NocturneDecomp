; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack filebuf * __watcallStack crt_fstream_cpp_filebuf_dtor_FUN_0060bdf9(filebuf *this_ptr,uint d1,uint d2,uint d3)
;
; Parameters:
; filebuf *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
;
; XREF[1]:
;   crt_fstream.cpp_fstreambase_dtor_FUN_00606509 at 0060653a
;
; Referenced Globals:
;   filebuf_vtable g_FilebufVTable
;   WatcomTypeInfo g_FilebufTypeInfo
;
; Called Functions:
;   crt_fstream.cpp_filebuf_close_FUN_00608bcc
;   crt_fstream.cpp_filebuf_sync_FUN_0060dc5e
;   crt_iostream.cpp_streambuf_destructor_FUN_0060d64f
;   crt_memory.c_free_FUN_005fe659
;   crt_memory.c_freeSingleInstance_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060bdf9
        ;   Label: crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9
    MOV EBX,dword ptr [ESP + 0x8]       ; 0060bdfa
    TEST byte ptr [ESP + 0xc],0x4       ; 0060bdfe
    JNZ 0x0060be4e                      ; 0060be03
        ;   XREF to: 0060be4e (CONDITIONAL_JUMP)  ; LAB_0060be4e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0060be05
    MOV dword ptr [EBX + 0x28],0x665fcc ; 0060be08 | g_FilebufVTable
    CMP EAX,-0x1                        ; 0060be0f
    JZ 0x0060be34                       ; 0060be12
        ;   XREF to: 0060be34 (CONDITIONAL_JUMP)  ; LAB_0060be34
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060be14
    SUB EAX,dword ptr [EBX + 0x18]      ; 0060be17
    JZ 0x0060be25                       ; 0060be1a
        ;   XREF to: 0060be25 (CONDITIONAL_JUMP)  ; LAB_0060be25
    PUSH EBX                            ; 0060be1c
    CALL crt_fstream.cpp_filebuf_sync_FUN_0060dc5e ; 0060be1d
        ;   XREF to: 0060dc5e (UNCONDITIONAL_CALL)  ; int crt_fstream.cpp_filebuf_sync_FUN_0060dc5e(filebuf * this_ptr)
    ADD ESP,0x4                         ; 0060be22
    TEST byte ptr [EBX + 0x39],0x1      ; 0060be25
        ;   Label: LAB_0060be25
    JNZ 0x0060be34                      ; 0060be29
        ;   XREF to: 0060be34 (CONDITIONAL_JUMP)  ; LAB_0060be34
    PUSH EBX                            ; 0060be2b
    CALL crt_fstream.cpp_filebuf_close_FUN_00608bcc ; 0060be2c
        ;   XREF to: 00608bcc (UNCONDITIONAL_CALL)  ; filebuf * crt_fstream.cpp_filebuf_close_FUN_00608bcc(filebuf * this_ptr)
    ADD ESP,0x4                         ; 0060be31
    PUSH 0x1                            ; 0060be34
        ;   Label: LAB_0060be34
    PUSH EBX                            ; 0060be36
    CALL crt_iostream.cpp_streambuf_destructor_FUN_0060d64f ; 0060be37
        ;   XREF to: 0060d64f (UNCONDITIONAL_CALL)  ; streambuf * crt_iostream.cpp_streambuf_destructor_FUN_0060d64f(streambuf * this_ptr)
    ADD ESP,0x8                         ; 0060be3c
    MOV DH,byte ptr [ESP + 0xc]         ; 0060be3f
    MOV EBX,EAX                         ; 0060be43
    TEST DH,0x2                         ; 0060be45
    JNZ 0x0060be69                      ; 0060be48
        ;   XREF to: 0060be69 (CONDITIONAL_JUMP)  ; LAB_0060be69
    MOV EAX,EBX                         ; 0060be4a
    POP EBX                             ; 0060be4c
    RET                                 ; 0060be4d
    PUSH 0x666020                       ; 0060be4e | g_FilebufTypeInfo
        ;   Label: LAB_0060be4e
    PUSH EBX                            ; 0060be53
    CALL crt_memory.c_freeSingleInstance_FUN_005fe632 ; 0060be54
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0060be59
    PUSH EAX                            ; 0060be5c
    CALL crt_memory.c_free_FUN_005fe659 ; 0060be5d
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0060be62
        ;   Label: LAB_0060be62
    MOV EAX,EBX                         ; 0060be65
    POP EBX                             ; 0060be67
    RET                                 ; 0060be68
    PUSH EAX                            ; 0060be69
        ;   Label: LAB_0060be69
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0060be6a
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    JMP 0x0060be62                      ; 0060be6f
        ;   XREF to: 0060be62 (UNCONDITIONAL_JUMP)  ; LAB_0060be62


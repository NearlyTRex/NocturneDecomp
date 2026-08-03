; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; filebuf * __watcallStack crt_fstream_cpp_filebuf_dtor_FUN_00570449(filebuf *this_ptr,uint flags)
;
; Parameters:
; filebuf *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   crt_fstream.cpp_fstreambase_dtor_FUN_0056b810 at 0056b841
;
; Referenced Globals:
;   filebuf_vtable g_FilebufVTable
;   WatcomTypeInfo g_filebufTypeInfo_005a4b60
;
; Called Functions:
;   crt_fstream.cpp_filebuf_sync_FUN_005723ae
;   crt_iostream.cpp_streambuf_destructor_FUN_00571d9f
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   crt_unknown.c_FUN_0056cd52
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570449
        ;   Label: crt_fstream.cpp_filebuf_dtor_FUN_00570449
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057044a
    TEST byte ptr [ESP + 0xc],0x4       ; 0057044e
    JNZ 0x0057049e                      ; 00570453
        ;   XREF to: 0057049e (CONDITIONAL_JUMP)  ; LAB_0057049e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00570455
    MOV dword ptr [EBX + 0x28],0x5a4b0c ; 00570458 | g_FilebufVTable
    CMP EAX,-0x1                        ; 0057045f
    JZ 0x00570484                       ; 00570462
        ;   XREF to: 00570484 (CONDITIONAL_JUMP)  ; LAB_00570484
    MOV EAX,dword ptr [EBX + 0x20]      ; 00570464
    SUB EAX,dword ptr [EBX + 0x18]      ; 00570467
    JZ 0x00570475                       ; 0057046a
        ;   XREF to: 00570475 (CONDITIONAL_JUMP)  ; LAB_00570475
    PUSH EBX                            ; 0057046c
    CALL crt_fstream.cpp_filebuf_sync_FUN_005723ae ; 0057046d
        ;   XREF to: 005723ae (UNCONDITIONAL_CALL)  ; int crt_fstream.cpp_filebuf_sync_FUN_005723ae(filebuf * this_ptr)
    ADD ESP,0x4                         ; 00570472
    TEST byte ptr [EBX + 0x39],0x1      ; 00570475
        ;   Label: LAB_00570475
    JNZ 0x00570484                      ; 00570479
        ;   XREF to: 00570484 (CONDITIONAL_JUMP)  ; LAB_00570484
    PUSH EBX                            ; 0057047b
    CALL crt_unknown.c_FUN_0056cd52     ; 0057047c
        ;   XREF to: 0056cd52 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056cd52()
    ADD ESP,0x4                         ; 00570481
    PUSH 0x1                            ; 00570484
        ;   Label: LAB_00570484
    PUSH EBX                            ; 00570486
    CALL crt_iostream.cpp_streambuf_destructor_FUN_00571d9f ; 00570487
        ;   XREF to: 00571d9f (UNCONDITIONAL_CALL)  ; streambuf * crt_iostream.cpp_streambuf_destructor_FUN_00571d9f(streambuf * this_ptr)
    ADD ESP,0x8                         ; 0057048c
    MOV DH,byte ptr [ESP + 0xc]         ; 0057048f
    MOV EBX,EAX                         ; 00570493
    TEST DH,0x2                         ; 00570495
    JNZ 0x005704b9                      ; 00570498
        ;   XREF to: 005704b9 (CONDITIONAL_JUMP)  ; LAB_005704b9
    MOV EAX,EBX                         ; 0057049a
    POP EBX                             ; 0057049c
    RET                                 ; 0057049d
    PUSH 0x5a4b60                       ; 0057049e | g_filebufTypeInfo_005a4b60
        ;   Label: LAB_0057049e
    PUSH EBX                            ; 005704a3
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 005704a4
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005704a9
    PUSH EAX                            ; 005704ac
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 005704ad
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 005704b2
        ;   Label: LAB_005704b2
    MOV EAX,EBX                         ; 005704b5
    POP EBX                             ; 005704b7
    RET                                 ; 005704b8
    PUSH EAX                            ; 005704b9
        ;   Label: LAB_005704b9
    CALL crt_unknown.c_FUN_00564494     ; 005704ba
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    JMP 0x005704b2                      ; 005704bf
        ;   XREF to: 005704b2 (UNCONDITIONAL_JUMP)  ; LAB_005704b2


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; BOOL __cdecl crt_stdio_c_prepare_stream_for_write_FUN_0056b35c(_FILE *stream)
;
; Parameters:
; _FILE *          Stack[0x4]:4   stream
;
; XREF[2]:
;   crt_fstream.cpp_ostream_write_FUN_00565a13 at 00565aaa
;   crt_iostream.cpp_ostream_put_FUN_00564ce5 at 00564d6c
;
; Called Functions:
;   crt_stdio.c_get_standard_file_handle_FUN_0056fdf0
;   crt_stdio.c_stream_flush_FUN_0056b3c2
;   crt_unknown.c_FUN_00568890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b35c
        ;   Label: crt_stdio.c_prepare_stream_for_write_FUN_0056b35c
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056b35d
    MOV EAX,dword ptr [EBX]             ; 0056b361
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b363
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 0056b366
    TEST EAX,EAX                        ; 0056b36a
    JNZ 0x0056b38f                      ; 0056b36c
        ;   XREF to: 0056b38f (CONDITIONAL_JUMP)  ; LAB_0056b38f
    MOV EAX,dword ptr [EBX]             ; 0056b36e
        ;   Label: LAB_0056b36e
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b370
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 0056b373
    TEST AH,0x40                        ; 0056b377
    JNZ 0x0056b39a                      ; 0056b37a
        ;   XREF to: 0056b39a (CONDITIONAL_JUMP)  ; LAB_0056b39a
    MOV EAX,dword ptr [EBX]             ; 0056b37c
        ;   Label: LAB_0056b37c
    ADD EBX,dword ptr [EAX + 0x4]       ; 0056b37e
    CMP dword ptr [EBX + 0x10],0x0      ; 0056b381
    SETZ AL                             ; 0056b385
    AND EAX,0xff                        ; 0056b388
    POP EBX                             ; 0056b38d
    RET                                 ; 0056b38e
    PUSH EAX                            ; 0056b38f
        ;   Label: LAB_0056b38f
    CALL crt_stdio.c_stream_flush_FUN_0056b3c2 ; 0056b390
        ;   XREF to: 0056b3c2 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_stream_flush_FUN_0056b3c2(_FILE * stream)
    ADD ESP,0x4                         ; 0056b395
    JMP 0x0056b36e                      ; 0056b398
        ;   XREF to: 0056b36e (UNCONDITIONAL_JUMP)  ; LAB_0056b36e
    PUSH 0x1                            ; 0056b39a
        ;   Label: LAB_0056b39a
    CALL crt_stdio.c_get_standard_file_handle_FUN_0056fdf0 ; 0056b39c
        ;   XREF to: 0056fdf0 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_get_standard_file_handle_FUN_0056fdf0(int fd)
    ADD ESP,0x4                         ; 0056b3a1
    PUSH EAX                            ; 0056b3a4
    CALL crt_unknown.c_FUN_00568890     ; 0056b3a5
        ;   XREF to: 00568890 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568890()
    ADD ESP,0x4                         ; 0056b3aa
    PUSH 0x2                            ; 0056b3ad
    CALL crt_stdio.c_get_standard_file_handle_FUN_0056fdf0 ; 0056b3af
        ;   XREF to: 0056fdf0 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_get_standard_file_handle_FUN_0056fdf0(int fd)
    ADD ESP,0x4                         ; 0056b3b4
    PUSH EAX                            ; 0056b3b7
    CALL crt_unknown.c_FUN_00568890     ; 0056b3b8
        ;   XREF to: 00568890 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00568890()
    ADD ESP,0x4                         ; 0056b3bd
    JMP 0x0056b37c                      ; 0056b3c0
        ;   XREF to: 0056b37c (UNCONDITIONAL_JUMP)  ; LAB_0056b37c


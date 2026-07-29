; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_stdio_c_stream_setup_FUN_0056b227(_FILE *stream,int operation_type)
;
; Parameters:
; _FILE *          Stack[0x4]:4   stream
; int              Stack[0x8]:4   operation_type
;
; XREF[2]:
;   FUN_0056ce57 at 0056ce96
;   crt_iostream.cpp_istream_get_FUN_00564c53 at 00564c7a
;
; Called Functions:
;   crt_stdio.c_reportStreamError_FUN_0056b327
;   crt_stdio.c_stream_flush_FUN_0056b3c2
;   crt_string.c_mbstrncpy_core_FUN_0056fd26
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b227
        ;   Label: crt_stdio.c_stream_setup_FUN_0056b227
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056b228
    MOV EAX,dword ptr [EBX]             ; 0056b22c
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b22e
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 0056b231
    TEST EDX,EDX                        ; 0056b235
    JNZ 0x0056b293                      ; 0056b237
        ;   XREF to: 0056b293 (CONDITIONAL_JUMP)  ; LAB_0056b293
    MOV EAX,dword ptr [EBX]             ; 0056b239
    MOV dword ptr [EBX + 0x4],EDX       ; 0056b23b
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b23e
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 0056b241
    TEST EAX,EAX                        ; 0056b245
    JNZ 0x0056b2a9                      ; 0056b247
        ;   XREF to: 0056b2a9 (CONDITIONAL_JUMP)  ; LAB_0056b2a9
    CMP dword ptr [ESP + 0xc],0x0       ; 0056b249
        ;   Label: LAB_0056b249
    JNZ 0x0056b280                      ; 0056b24e
        ;   XREF to: 0056b280 (CONDITIONAL_JUMP)  ; LAB_0056b280
    MOV EAX,dword ptr [EBX]             ; 0056b250
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b252
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 0056b255
    TEST AL,0x1                         ; 0056b259
    JZ 0x0056b280                       ; 0056b25b
        ;   XREF to: 0056b280 (CONDITIONAL_JUMP)  ; LAB_0056b280
    PUSH EBX                            ; 0056b25d
    CALL crt_string.c_mbstrncpy_core_FUN_0056fd26 ; 0056b25e
        ;   XREF to: 0056fd26 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbstrncpy_core_FUN_0056fd26(char * dest, char * src, int count)
    MOV EAX,dword ptr [EBX]             ; 0056b263
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b265
    ADD EAX,EBX                         ; 0056b268
    MOV EDX,dword ptr [EAX + 0x10]      ; 0056b26a
    ADD ESP,0x4                         ; 0056b26d
    AND EDX,0x4                         ; 0056b270
    JZ 0x0056b280                       ; 0056b273
        ;   XREF to: 0056b280 (CONDITIONAL_JUMP)  ; LAB_0056b280
    PUSH 0x2                            ; 0056b275
    PUSH EAX                            ; 0056b277
    CALL crt_stdio.c_reportStreamError_FUN_0056b327 ; 0056b278
        ;   XREF to: 0056b327 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_0056b327(FileEmbeddedData * embedded_data, uint error_flags)
    ADD ESP,0x8                         ; 0056b27d
    MOV EAX,dword ptr [EBX]             ; 0056b280
        ;   Label: LAB_0056b280
    ADD EBX,dword ptr [EAX + 0x4]       ; 0056b282
    CMP dword ptr [EBX + 0x10],0x0      ; 0056b285
    SETZ AL                             ; 0056b289
    AND EAX,0xff                        ; 0056b28c
    POP EBX                             ; 0056b291
    RET                                 ; 0056b292
    MOV EAX,dword ptr [EBX]             ; 0056b293
        ;   Label: LAB_0056b293
    MOV ECX,dword ptr [EAX + 0x4]       ; 0056b295
    PUSH 0x2                            ; 0056b298
    ADD EBX,ECX                         ; 0056b29a
    PUSH EBX                            ; 0056b29c
    CALL crt_stdio.c_reportStreamError_FUN_0056b327 ; 0056b29d
        ;   XREF to: 0056b327 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_0056b327(FileEmbeddedData * embedded_data, uint error_flags)
    ADD ESP,0x8                         ; 0056b2a2
    XOR EAX,EAX                         ; 0056b2a5
    POP EBX                             ; 0056b2a7
    RET                                 ; 0056b2a8
    PUSH EAX                            ; 0056b2a9
        ;   Label: LAB_0056b2a9
    CALL crt_stdio.c_stream_flush_FUN_0056b3c2 ; 0056b2aa
        ;   XREF to: 0056b3c2 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_stream_flush_FUN_0056b3c2(_FILE * stream)
    ADD ESP,0x4                         ; 0056b2af
    JMP 0x0056b249                      ; 0056b2b2
        ;   XREF to: 0056b249 (UNCONDITIONAL_JUMP)  ; LAB_0056b249


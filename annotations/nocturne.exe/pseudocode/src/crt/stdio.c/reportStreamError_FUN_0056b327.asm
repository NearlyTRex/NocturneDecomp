; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_reportStreamError_FUN_0056b327(FileEmbeddedData *embedded_data,uint error_flags)
;
; Parameters:
; FileEmbeddedData * Stack[0x4]:4   embedded_data
; uint             Stack[0x8]:4   error_flags
; Local Variables:
; undefined        Stack[-0x8]:1  local_8
;
; XREF[12]:
;   crt_fstream.cpp_fstreambase_ctor_FUN_0056b75d at 0056b7ee
;   crt_fstream.cpp_istream_seekg_FUN_00565f14 at 00565f57
;   crt_fstream.cpp_openFile_FUN_00565eb5 at 00565ef1
;   crt_fstream.cpp_ostream_write_FUN_00565a13 at 00565a8c
;   crt_iostream.cpp_ios_clear_FUN_00565e94 at 00565ea9
;   crt_iostream.cpp_ostream_put_FUN_00564ce5 at 00564d4d
;   crt_stdio.c_fflush_FUN_00565e59 at 00565e7e
;   crt_stdio.c_fgetcInternal_FUN_0056b2b4 at 0056b313
;   crt_stdio.c_fgetc_buffered_FUN_00571c60 at 00571caf
;   crt_stdio.c_stream_flush_FUN_0056b3c2 at 0056b3f9
;   ... and 2 more
;
; Called Functions:
;   crt_stdio.c_storeErrorState_FUN_0056fddd
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b327
        ;   Label: crt_stdio.c_reportStreamError_FUN_0056b327
    SUB ESP,0x4                         ; 0056b328
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056b32b
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056b32f
    MOV ECX,dword ptr [EAX + 0x10]      ; 0056b333
    OR ECX,EDX                          ; 0056b336
    MOV EBX,dword ptr [EAX + 0x14]      ; 0056b338
    MOV EDX,ECX                         ; 0056b33b
    MOV dword ptr [EAX + 0x10],ECX      ; 0056b33d
    AND EDX,EBX                         ; 0056b340
    JNZ 0x0056b349                      ; 0056b342
        ;   XREF to: 0056b349 (CONDITIONAL_JUMP)  ; LAB_0056b349
    ADD ESP,0x4                         ; 0056b344
    POP EBX                             ; 0056b347
    RET                                 ; 0056b348
    PUSH EDX                            ; 0056b349
        ;   Label: LAB_0056b349
    LEA EAX,[ESP + 0x4]                 ; 0056b34a
    PUSH EAX                            ; 0056b34e
    CALL crt_stdio.c_storeErrorState_FUN_0056fddd ; 0056b34f
        ;   XREF to: 0056fddd (UNCONDITIONAL_CALL)  ; void crt_stdio.c_storeErrorState_FUN_0056fddd(uint * destination, uint error_state)
    ADD ESP,0x8                         ; 0056b354
    ADD ESP,0x4                         ; 0056b357
    POP EBX                             ; 0056b35a
    RET                                 ; 0056b35b


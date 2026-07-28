; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __watcallStack crt_stdio_c_stream_flush_FUN_0056b3c2(_FILE *stream)
;
; Parameters:
; _FILE *          Stack[0x4]:4   stream
;
; XREF[4]:
;   crt_fstream.cpp_ostream_write_FUN_00565a13 at 00565acb
;   crt_iostream.cpp_ostream_put_FUN_00564ce5 at 00564d88
;   crt_stdio.c_prepare_stream_for_write_FUN_0056b35c at 0056b390
;   crt_stdio.c_stream_setup_FUN_0056b227 at 0056b2aa
;
; Called Functions:
;   crt_stdio.c_reportStreamError_FUN_0056b327
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b3c2
        ;   Label: crt_stdio.c_stream_flush_FUN_0056b3c2
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056b3c3
    MOV EAX,dword ptr [EBX]             ; 0056b3c7
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b3c9
    CMP dword ptr [EBX + EAX*0x1 + 0x10],0x0 ; 0056b3cc
    JZ 0x0056b3d7                       ; 0056b3d1
        ;   XREF to: 0056b3d7 (CONDITIONAL_JUMP)  ; LAB_0056b3d7
    MOV EAX,EBX                         ; 0056b3d3
        ;   Label: LAB_0056b3d3
    POP EBX                             ; 0056b3d5
    RET                                 ; 0056b3d6
    MOV EAX,dword ptr [EBX]             ; 0056b3d7
        ;   Label: LAB_0056b3d7
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b3d9
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0056b3dc
    PUSH EAX                            ; 0056b3e0
    MOV EDX,dword ptr [EAX + 0x28]      ; 0056b3e1
    CALL dword ptr [EDX + 0x20]         ; 0056b3e4
    ADD ESP,0x4                         ; 0056b3e7
    CMP EAX,-0x1                        ; 0056b3ea
    JNZ 0x0056b3d3                      ; 0056b3ed
        ;   XREF to: 0056b3d3 (CONDITIONAL_JUMP)  ; LAB_0056b3d3
    MOV EAX,dword ptr [EBX]             ; 0056b3ef
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b3f1
    PUSH 0x2                            ; 0056b3f4
    ADD EAX,EBX                         ; 0056b3f6
    PUSH EAX                            ; 0056b3f8
    CALL crt_stdio.c_reportStreamError_FUN_0056b327 ; 0056b3f9
        ;   XREF to: 0056b327 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_0056b327(FileEmbeddedData * embedded_data, uint error_flags)
    ADD ESP,0x8                         ; 0056b3fe
    MOV EAX,EBX                         ; 0056b401
    POP EBX                             ; 0056b403
    RET                                 ; 0056b404


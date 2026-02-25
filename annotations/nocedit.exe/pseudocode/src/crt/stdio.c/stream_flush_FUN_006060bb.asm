; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __watcallStack crt_stdio_c_stream_flush_FUN_006060bb(_FILE *stream)
;
; Parameters:
; _FILE *          Stack[0x4]:4   stream
;
; XREF[4]:
;   crt_fstream.cpp_ostream_write_FUN_005ffcb3 at 005ffd6b
;   crt_iostream.cpp_ostream_put_FUN_005ff2d7 at 005ff37a
;   crt_stdio.c_prepare_stream_for_write_FUN_00606055 at 00606089
;   crt_stdio.c_stream_setup_FUN_00605f20 at 00605fa3
;
; Called Functions:
;   crt_stdio.c_reportStreamError_FUN_00606020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006060bb
        ;   Label: crt_stdio.c_stream_flush_FUN_006060bb
    MOV EBX,dword ptr [ESP + 0x8]       ; 006060bc
    MOV EAX,dword ptr [EBX]             ; 006060c0
    MOV EAX,dword ptr [EAX + 0x4]       ; 006060c2
    CMP dword ptr [EBX + EAX*0x1 + 0x10],0x0 ; 006060c5
    JZ 0x006060d0                       ; 006060ca
        ;   XREF to: 006060d0 (CONDITIONAL_JUMP)  ; LAB_006060d0
    MOV EAX,EBX                         ; 006060cc
        ;   Label: LAB_006060cc
    POP EBX                             ; 006060ce
    RET                                 ; 006060cf
    MOV EAX,dword ptr [EBX]             ; 006060d0
        ;   Label: LAB_006060d0
    MOV EAX,dword ptr [EAX + 0x4]       ; 006060d2
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 006060d5
    PUSH EAX                            ; 006060d9
    MOV EDX,dword ptr [EAX + 0x28]      ; 006060da
    CALL dword ptr [EDX + 0x20]         ; 006060dd
    ADD ESP,0x4                         ; 006060e0
    CMP EAX,-0x1                        ; 006060e3
    JNZ 0x006060cc                      ; 006060e6
        ;   XREF to: 006060cc (CONDITIONAL_JUMP)  ; LAB_006060cc
    MOV EAX,dword ptr [EBX]             ; 006060e8
    MOV EAX,dword ptr [EAX + 0x4]       ; 006060ea
    PUSH 0x2                            ; 006060ed
    ADD EAX,EBX                         ; 006060ef
    PUSH EAX                            ; 006060f1
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 006060f2
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
    ADD ESP,0x8                         ; 006060f7
    MOV EAX,EBX                         ; 006060fa
    POP EBX                             ; 006060fc
    RET                                 ; 006060fd


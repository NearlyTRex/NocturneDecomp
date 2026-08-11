; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_stdio_c_stream_setup_FUN_00605f20(_FILE *stream,int operation_type)
;
; Parameters:
; _FILE *          Stack[0x4]:4   stream
; int              Stack[0x8]:4   operation_type
;
; XREF[1]:
;   crt_iostream.cpp_istream_get_FUN_005ff245 at 005ff26c
;
; Called Functions:
;   crt_stdio.c_reportStreamError_FUN_00606020
;   crt_stdio.c_stream_flush_FUN_006060bb
;   crt_string.c_mbstrncpy_core_FUN_0060b6d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00605f20
        ;   Label: crt_stdio.c_stream_setup_FUN_00605f20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00605f21
    MOV EAX,dword ptr [EBX]             ; 00605f25
    MOV EAX,dword ptr [EAX + 0x4]       ; 00605f27
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10] ; 00605f2a
    TEST EDX,EDX                        ; 00605f2e
    JNZ 0x00605f8c                      ; 00605f30
        ;   XREF to: 00605f8c (CONDITIONAL_JUMP)  ; LAB_00605f8c
    MOV EAX,dword ptr [EBX]             ; 00605f32
    MOV dword ptr [EBX + 0x4],EDX       ; 00605f34
    MOV EAX,dword ptr [EAX + 0x4]       ; 00605f37
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 00605f3a
    TEST EAX,EAX                        ; 00605f3e
    JNZ 0x00605fa2                      ; 00605f40
        ;   XREF to: 00605fa2 (CONDITIONAL_JUMP)  ; LAB_00605fa2
    CMP dword ptr [ESP + 0xc],0x0       ; 00605f42
        ;   Label: LAB_00605f42
    JNZ 0x00605f79                      ; 00605f47
        ;   XREF to: 00605f79 (CONDITIONAL_JUMP)  ; LAB_00605f79
    MOV EAX,dword ptr [EBX]             ; 00605f49
    MOV EAX,dword ptr [EAX + 0x4]       ; 00605f4b
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 00605f4e
    TEST AL,0x1                         ; 00605f52
    JZ 0x00605f79                       ; 00605f54
        ;   XREF to: 00605f79 (CONDITIONAL_JUMP)  ; LAB_00605f79
    PUSH EBX                            ; 00605f56
    CALL crt_string.c_mbstrncpy_core_FUN_0060b6d7 ; 00605f57
        ;   XREF to: 0060b6d7 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbstrncpy_core_FUN_0060b6d7(char * dest, char * src, int count)
    MOV EAX,dword ptr [EBX]             ; 00605f5c
    MOV EAX,dword ptr [EAX + 0x4]       ; 00605f5e
    ADD EAX,EBX                         ; 00605f61
    MOV EDX,dword ptr [EAX + 0x10]      ; 00605f63
    ADD ESP,0x4                         ; 00605f66
    AND EDX,0x4                         ; 00605f69
    JZ 0x00605f79                       ; 00605f6c
        ;   XREF to: 00605f79 (CONDITIONAL_JUMP)  ; LAB_00605f79
    PUSH 0x2                            ; 00605f6e
    PUSH EAX                            ; 00605f70
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 00605f71
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
    ADD ESP,0x8                         ; 00605f76
    MOV EAX,dword ptr [EBX]             ; 00605f79
        ;   Label: LAB_00605f79
    ADD EBX,dword ptr [EAX + 0x4]       ; 00605f7b
    CMP dword ptr [EBX + 0x10],0x0      ; 00605f7e
    SETZ AL                             ; 00605f82
    AND EAX,0xff                        ; 00605f85
    POP EBX                             ; 00605f8a
    RET                                 ; 00605f8b
    MOV EAX,dword ptr [EBX]             ; 00605f8c
        ;   Label: LAB_00605f8c
    MOV ECX,dword ptr [EAX + 0x4]       ; 00605f8e
    PUSH 0x2                            ; 00605f91
    ADD EBX,ECX                         ; 00605f93
    PUSH EBX                            ; 00605f95
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 00605f96
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
    ADD ESP,0x8                         ; 00605f9b
    XOR EAX,EAX                         ; 00605f9e
    POP EBX                             ; 00605fa0
    RET                                 ; 00605fa1
    PUSH EAX                            ; 00605fa2
        ;   Label: LAB_00605fa2
    CALL crt_stdio.c_stream_flush_FUN_006060bb ; 00605fa3
        ;   XREF to: 006060bb (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_stream_flush_FUN_006060bb(_FILE * stream)
    ADD ESP,0x4                         ; 00605fa8
    JMP 0x00605f42                      ; 00605fab
        ;   XREF to: 00605f42 (UNCONDITIONAL_JUMP)  ; LAB_00605f42


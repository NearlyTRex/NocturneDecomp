; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_stdio.c_stream_setup_FUN_00605f20(FILE * stream, int operation_type)
;
; Parameters:
; FILE *           Stack[0x4]:4   stream
; int              Stack[0x8]:4   operation_type
;
; XREF[2]:
;   crt_stdio.c_fgetc_outptr_FUN_005ff245 at 005ff26c
;   crt_stdio.c_stream_valid_FUN_00608cd1 at 00608d10
;
; Called Functions:
;   crt_stdio.c_reportStreamError_FUN_00606020
;   crt_stdio.c_stream_flush_FUN_006060bb
;   crt_string.c_mbstrncpy_core_FUN_0060b670
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
    JNZ 0x00605f8c                      ; 00605f30 | LAB_00605f8c
        ;   XREF to: 00605f8c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 00605f32
    MOV dword ptr [EBX + 0x4],EDX       ; 00605f34
    MOV EAX,dword ptr [EAX + 0x4]       ; 00605f37
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 00605f3a
    TEST EAX,EAX                        ; 00605f3e
    JNZ 0x00605fa2                      ; 00605f40 | LAB_00605fa2
        ;   XREF to: 00605fa2 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0xc],0x0       ; 00605f42
        ;   Label: LAB_00605f42
    JNZ 0x00605f79                      ; 00605f47 | LAB_00605f79
        ;   XREF to: 00605f79 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 00605f49
    MOV EAX,dword ptr [EAX + 0x4]       ; 00605f4b
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 00605f4e
    TEST AL,0x1                         ; 00605f52
    JZ 0x00605f79                       ; 00605f54 | LAB_00605f79
        ;   XREF to: 00605f79 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00605f56
    CALL crt_string.c_mbstrncpy_core_FUN_0060b670 ; 00605f57 | char * crt_string.c_mbstrncpy_core_FUN_0060b670(char * dest, char * src, int count)
        ;   XREF to: 0060b6d7 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX]             ; 00605f5c
    MOV EAX,dword ptr [EAX + 0x4]       ; 00605f5e
    ADD EAX,EBX                         ; 00605f61
    MOV EDX,dword ptr [EAX + 0x10]      ; 00605f63
    ADD ESP,0x4                         ; 00605f66
    AND EDX,0x4                         ; 00605f69
    JZ 0x00605f79                       ; 00605f6c | LAB_00605f79
        ;   XREF to: 00605f79 (CONDITIONAL_JUMP)
    PUSH 0x2                            ; 00605f6e
    PUSH EAX                            ; 00605f70
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 00605f71 | void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)
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
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 00605f96 | void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00605f9b
    XOR EAX,EAX                         ; 00605f9e
    POP EBX                             ; 00605fa0
    RET                                 ; 00605fa1
    PUSH EAX                            ; 00605fa2
        ;   Label: LAB_00605fa2
    CALL crt_stdio.c_stream_flush_FUN_006060bb ; 00605fa3 | FILE * crt_stdio.c_stream_flush_FUN_006060bb(FILE * stream)
        ;   XREF to: 006060bb (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00605fa8
    JMP 0x00605f42                      ; 00605fab | LAB_00605f42
        ;   XREF to: 00605f42 (UNCONDITIONAL_JUMP)


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_dumpHeap_FUN_00509b00(void *stream)
;
; Parameters:
; void *           Stack[0x4]:4   stream
;
; Referenced Globals:
;   TerminatedCString s_OK_empty_heap_005e7995
;   TerminatedCString s_OK_end_of_heap_005e79a6
;   TerminatedCString s_ERROR_bad_pointer_to_hea_005e79b8
;   TerminatedCString s_ERROR_bad_start_of_heap_005e79d5
;   TerminatedCString s_ERROR_bad_node_in_heap_005e79f0
;
; Called Functions:
;   crt_heap.c__heapwalk_FUN_005c2ce0
;   support_trstream.cpp_COutStream_printf_FUN_005a14c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509b00
        ;   Label: core_melee.cpp_dumpHeap_FUN_00509b00
    PUSH ESI                            ; 00509b01
    PUSH EDI                            ; 00509b02
    PUSH EBP                            ; 00509b03
    MOV EBP,ESP                         ; 00509b04
    SUB ESP,0x10                        ; 00509b06
    MOV EBX,dword ptr [EBP + 0x14]      ; 00509b09
    XOR EDX,EDX                         ; 00509b0c
    MOV word ptr [EBP + -0xc],DX        ; 00509b0e
    XOR EDX,EDX                         ; 00509b12
    MOV dword ptr [EBP + -0x10],EDX     ; 00509b14
    LEA EAX,[EBP + -0x10]               ; 00509b17
        ;   Label: LAB_00509b17
    PUSH EAX                            ; 00509b1a
    CALL crt_heap.c__heapwalk_FUN_005c2ce0 ; 00509b1b
        ;   XREF to: 005c2ce0 (UNCONDITIONAL_CALL)  ; int crt_heap.c__heapwalk_FUN_005c2ce0(WatcomHeapInfo * heap_info)
    ADD ESP,0x4                         ; 00509b20
    TEST EAX,EAX                        ; 00509b23
    JZ 0x00509b49                       ; 00509b25
        ;   XREF to: 00509b49 (CONDITIONAL_JUMP)  ; LAB_00509b49
    DEC EAX                             ; 00509b27
    CMP EAX,0x4                         ; 00509b28
    JA 0x00509b42                       ; 00509b2b
        ;   XREF to: 00509b42 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x509ae0]  ; 00509b2d | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    PUSH 0x5e7995                       ; 00509b34 | = "OK - empty heap\n"
        ;   Label: caseD_1
    PUSH EBX                            ; 00509b39
    CALL support_trstream.cpp_COutStream_printf_FUN_005a14c0 ; 00509b3a
        ;   XREF to: 005a14c0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_005a14c0(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 00509b3f
    MOV ESP,EBP                         ; 00509b42
        ;   Label: default
    POP EBP                             ; 00509b44
    POP EDI                             ; 00509b45
    POP ESI                             ; 00509b46
    POP EBX                             ; 00509b47
    RET                                 ; 00509b48
    MOV ECX,dword ptr [EBP + -0xa]      ; 00509b49
        ;   Label: LAB_00509b49
    MOV ESI,dword ptr [EBP + -0x6]      ; 00509b4c
    PUSH ECX                            ; 00509b4f
    TEST ESI,ESI                        ; 00509b50
    JZ 0x00509b75                       ; 00509b52
        ;   XREF to: 00509b75 (CONDITIONAL_JUMP)  ; LAB_00509b75
    MOV EAX,0x5e797e                    ; 00509b54
    PUSH EAX                            ; 00509b59
        ;   Label: LAB_00509b59
    XOR EAX,EAX                         ; 00509b5a
    MOV AX,word ptr [EBP + -0xc]        ; 00509b5c
    PUSH EAX                            ; 00509b60
    MOV EDI,dword ptr [EBP + -0x10]     ; 00509b61
    PUSH EDI                            ; 00509b64
    PUSH 0x5e7988                       ; 00509b65
    PUSH EBX                            ; 00509b6a
    CALL support_trstream.cpp_COutStream_printf_FUN_005a14c0 ; 00509b6b
        ;   XREF to: 005a14c0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_005a14c0(COutStream * this_ptr, char * format)
    ADD ESP,0x18                        ; 00509b70
    JMP 0x00509b17                      ; 00509b73
        ;   XREF to: 00509b17 (UNCONDITIONAL_JUMP)  ; LAB_00509b17
    MOV EAX,0x5e7983                    ; 00509b75
        ;   Label: LAB_00509b75
    JMP 0x00509b59                      ; 00509b7a
        ;   XREF to: 00509b59 (UNCONDITIONAL_JUMP)  ; LAB_00509b59
    PUSH 0x5e79a6                       ; 00509b7c | = "OK - end of heap\n"
        ;   Label: caseD_4
    PUSH EBX                            ; 00509b81
    CALL support_trstream.cpp_COutStream_printf_FUN_005a14c0 ; 00509b82
        ;   XREF to: 005a14c0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_005a14c0(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 00509b87
    MOV ESP,EBP                         ; 00509b8a
    POP EBP                             ; 00509b8c
    POP EDI                             ; 00509b8d
    POP ESI                             ; 00509b8e
    POP EBX                             ; 00509b8f
    RET                                 ; 00509b90
    PUSH 0x5e79b8                       ; 00509b91 | = "ERROR - bad pointer to heap\n"
        ;   Label: caseD_5
    PUSH EBX                            ; 00509b96
    CALL support_trstream.cpp_COutStream_printf_FUN_005a14c0 ; 00509b97
        ;   XREF to: 005a14c0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_005a14c0(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 00509b9c
    MOV ESP,EBP                         ; 00509b9f
    POP EBP                             ; 00509ba1
    POP EDI                             ; 00509ba2
    POP ESI                             ; 00509ba3
    POP EBX                             ; 00509ba4
    RET                                 ; 00509ba5
    PUSH 0x5e79d5                       ; 00509ba6 | = "ERROR - bad start of heap\n"
        ;   Label: caseD_2
    PUSH EBX                            ; 00509bab
    CALL support_trstream.cpp_COutStream_printf_FUN_005a14c0 ; 00509bac
        ;   XREF to: 005a14c0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_005a14c0(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 00509bb1
    MOV ESP,EBP                         ; 00509bb4
    POP EBP                             ; 00509bb6
    POP EDI                             ; 00509bb7
    POP ESI                             ; 00509bb8
    POP EBX                             ; 00509bb9
    RET                                 ; 00509bba
    PUSH 0x5e79f0                       ; 00509bbb | = "ERROR - bad node in heap\n"
        ;   Label: caseD_3
    PUSH EBX                            ; 00509bc0
    CALL support_trstream.cpp_COutStream_printf_FUN_005a14c0 ; 00509bc1
        ;   XREF to: 005a14c0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_005a14c0(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 00509bc6
    MOV ESP,EBP                         ; 00509bc9
    POP EBP                             ; 00509bcb
    POP EDI                             ; 00509bcc
    POP ESI                             ; 00509bcd
    POP EBX                             ; 00509bce
    RET                                 ; 00509bcf


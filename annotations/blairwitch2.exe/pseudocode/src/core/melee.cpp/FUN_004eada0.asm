; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_FUN_004eada0(COutStream *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_OK_empty_heap_005dca58
;   TerminatedCString s_OK_end_of_heap_005dca69
;   TerminatedCString s_ERROR_bad_pointer_to_hea_005dca7b
;   TerminatedCString s_ERROR_bad_start_of_heap_005dca98
;   TerminatedCString s_ERROR_bad_node_in_heap_005dcab3
;
; Called Functions:
;   crt_heap.c__heapwalk_FUN_005ba900
;   support_trstream.cpp_COutStream_printf_FUN_0057d870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eada0
        ;   Label: core_melee.cpp_FUN_004eada0
    PUSH ESI                            ; 004eada1
    PUSH EDI                            ; 004eada2
    PUSH EBP                            ; 004eada3
    MOV EBP,ESP                         ; 004eada4
    SUB ESP,0x10                        ; 004eada6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004eada9
    XOR EDX,EDX                         ; 004eadac
    MOV word ptr [EBP + -0xc],DX        ; 004eadae
    XOR EDX,EDX                         ; 004eadb2
    MOV dword ptr [EBP + -0x10],EDX     ; 004eadb4
    LEA EAX,[EBP + -0x10]               ; 004eadb7
        ;   Label: LAB_004eadb7
    PUSH EAX                            ; 004eadba
    CALL crt_heap.c__heapwalk_FUN_005ba900 ; 004eadbb
        ;   XREF to: 005ba900 (UNCONDITIONAL_CALL)  ; int crt_heap.c__heapwalk_FUN_005ba900(WatcomHeapInfo * heap_info)
    ADD ESP,0x4                         ; 004eadc0
    TEST EAX,EAX                        ; 004eadc3
    JZ 0x004eade9                       ; 004eadc5
        ;   XREF to: 004eade9 (CONDITIONAL_JUMP)  ; LAB_004eade9
    DEC EAX                             ; 004eadc7
    CMP EAX,0x4                         ; 004eadc8
    JA 0x004eade2                       ; 004eadcb
        ;   XREF to: 004eade2 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4ead80]  ; 004eadcd | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    PUSH 0x5dca58                       ; 004eadd4 | = "OK - empty heap\n"
        ;   Label: caseD_1
    PUSH EBX                            ; 004eadd9
    CALL support_trstream.cpp_COutStream_printf_FUN_0057d870 ; 004eadda
        ;   XREF to: 0057d870 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_0057d870(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 004eaddf
    MOV ESP,EBP                         ; 004eade2
        ;   Label: default
    POP EBP                             ; 004eade4
    POP EDI                             ; 004eade5
    POP ESI                             ; 004eade6
    POP EBX                             ; 004eade7
    RET                                 ; 004eade8
    MOV ECX,dword ptr [EBP + -0xa]      ; 004eade9
        ;   Label: LAB_004eade9
    MOV ESI,dword ptr [EBP + -0x6]      ; 004eadec
    PUSH ECX                            ; 004eadef
    TEST ESI,ESI                        ; 004eadf0
    JZ 0x004eae15                       ; 004eadf2
        ;   XREF to: 004eae15 (CONDITIONAL_JUMP)  ; LAB_004eae15
    MOV EAX,0x5dca41                    ; 004eadf4
    PUSH EAX                            ; 004eadf9
        ;   Label: LAB_004eadf9
    XOR EAX,EAX                         ; 004eadfa
    MOV AX,word ptr [EBP + -0xc]        ; 004eadfc
    PUSH EAX                            ; 004eae00
    MOV EDI,dword ptr [EBP + -0x10]     ; 004eae01
    PUSH EDI                            ; 004eae04
    PUSH 0x5dca4b                       ; 004eae05
    PUSH EBX                            ; 004eae0a
    CALL support_trstream.cpp_COutStream_printf_FUN_0057d870 ; 004eae0b
        ;   XREF to: 0057d870 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_0057d870(COutStream * this_ptr, char * format)
    ADD ESP,0x18                        ; 004eae10
    JMP 0x004eadb7                      ; 004eae13
        ;   XREF to: 004eadb7 (UNCONDITIONAL_JUMP)  ; LAB_004eadb7
    MOV EAX,0x5dca46                    ; 004eae15
        ;   Label: LAB_004eae15
    JMP 0x004eadf9                      ; 004eae1a
        ;   XREF to: 004eadf9 (UNCONDITIONAL_JUMP)  ; LAB_004eadf9
    PUSH 0x5dca69                       ; 004eae1c | = "OK - end of heap\n"
        ;   Label: caseD_4
    PUSH EBX                            ; 004eae21
    CALL support_trstream.cpp_COutStream_printf_FUN_0057d870 ; 004eae22
        ;   XREF to: 0057d870 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_0057d870(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 004eae27
    MOV ESP,EBP                         ; 004eae2a
    POP EBP                             ; 004eae2c
    POP EDI                             ; 004eae2d
    POP ESI                             ; 004eae2e
    POP EBX                             ; 004eae2f
    RET                                 ; 004eae30
    PUSH 0x5dca7b                       ; 004eae31 | = "ERROR - bad pointer to heap\n"
        ;   Label: caseD_5
    PUSH EBX                            ; 004eae36
    CALL support_trstream.cpp_COutStream_printf_FUN_0057d870 ; 004eae37
        ;   XREF to: 0057d870 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_0057d870(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 004eae3c
    MOV ESP,EBP                         ; 004eae3f
    POP EBP                             ; 004eae41
    POP EDI                             ; 004eae42
    POP ESI                             ; 004eae43
    POP EBX                             ; 004eae44
    RET                                 ; 004eae45
    PUSH 0x5dca98                       ; 004eae46 | = "ERROR - bad start of heap\n"
        ;   Label: caseD_2
    PUSH EBX                            ; 004eae4b
    CALL support_trstream.cpp_COutStream_printf_FUN_0057d870 ; 004eae4c
        ;   XREF to: 0057d870 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_0057d870(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 004eae51
    MOV ESP,EBP                         ; 004eae54
    POP EBP                             ; 004eae56
    POP EDI                             ; 004eae57
    POP ESI                             ; 004eae58
    POP EBX                             ; 004eae59
    RET                                 ; 004eae5a
    PUSH 0x5dcab3                       ; 004eae5b | = "ERROR - bad node in heap\n"
        ;   Label: caseD_3
    PUSH EBX                            ; 004eae60
    CALL support_trstream.cpp_COutStream_printf_FUN_0057d870 ; 004eae61
        ;   XREF to: 0057d870 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_0057d870(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 004eae66
    MOV ESP,EBP                         ; 004eae69
    POP EBP                             ; 004eae6b
    POP EDI                             ; 004eae6c
    POP ESI                             ; 004eae6d
    POP EBX                             ; 004eae6e
    RET                                 ; 004eae6f


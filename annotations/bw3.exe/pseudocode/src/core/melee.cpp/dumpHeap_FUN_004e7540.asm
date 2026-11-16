; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_dumpHeap_FUN_004e7540(void *stream)
;
; Parameters:
; void *           Stack[0x4]:4   stream
;
; Referenced Globals:
;   TerminatedCString s_OK_empty_heap_005c7181
;   TerminatedCString s_OK_end_of_heap_005c7192
;   TerminatedCString s_ERROR_bad_pointer_to_hea_005c71a4
;   TerminatedCString s_ERROR_bad_start_of_heap_005c71c1
;   TerminatedCString s_ERROR_bad_node_in_heap_005c71dc
;
; Called Functions:
;   crt_heap.c__heapwalk_FUN_005a5bd0
;   support_trstream.cpp_COutStream_printf_FUN_005744b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7540
        ;   Label: core_melee.cpp_dumpHeap_FUN_004e7540
    PUSH ESI                            ; 004e7541
    PUSH EDI                            ; 004e7542
    PUSH EBP                            ; 004e7543
    MOV EBP,ESP                         ; 004e7544
    SUB ESP,0x10                        ; 004e7546
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e7549
    XOR EDX,EDX                         ; 004e754c
    MOV word ptr [EBP + -0xc],DX        ; 004e754e
    XOR EDX,EDX                         ; 004e7552
    MOV dword ptr [EBP + -0x10],EDX     ; 004e7554
    LEA EAX,[EBP + -0x10]               ; 004e7557
        ;   Label: LAB_004e7557
    PUSH EAX                            ; 004e755a
    CALL crt_heap.c__heapwalk_FUN_005a5bd0 ; 004e755b
        ;   XREF to: 005a5bd0 (UNCONDITIONAL_CALL)  ; int crt_heap.c__heapwalk_FUN_005a5bd0(WatcomHeapInfo * heap_info)
    ADD ESP,0x4                         ; 004e7560
    TEST EAX,EAX                        ; 004e7563
    JZ 0x004e7589                       ; 004e7565
        ;   XREF to: 004e7589 (CONDITIONAL_JUMP)  ; LAB_004e7589
    DEC EAX                             ; 004e7567
    CMP EAX,0x4                         ; 004e7568
    JA 0x004e7582                       ; 004e756b
        ;   XREF to: 004e7582 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4e7520]  ; 004e756d | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    PUSH 0x5c7181                       ; 004e7574 | = "OK - empty heap\n"
        ;   Label: caseD_1
    PUSH EBX                            ; 004e7579
    CALL support_trstream.cpp_COutStream_printf_FUN_005744b0 ; 004e757a
        ;   XREF to: 005744b0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_005744b0(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e757f
    MOV ESP,EBP                         ; 004e7582
        ;   Label: default
    POP EBP                             ; 004e7584
    POP EDI                             ; 004e7585
    POP ESI                             ; 004e7586
    POP EBX                             ; 004e7587
    RET                                 ; 004e7588
    MOV ECX,dword ptr [EBP + -0xa]      ; 004e7589
        ;   Label: LAB_004e7589
    MOV ESI,dword ptr [EBP + -0x6]      ; 004e758c
    PUSH ECX                            ; 004e758f
    TEST ESI,ESI                        ; 004e7590
    JZ 0x004e75b5                       ; 004e7592
        ;   XREF to: 004e75b5 (CONDITIONAL_JUMP)  ; LAB_004e75b5
    MOV EAX,0x5c716a                    ; 004e7594
    PUSH EAX                            ; 004e7599
        ;   Label: LAB_004e7599
    XOR EAX,EAX                         ; 004e759a
    MOV AX,word ptr [EBP + -0xc]        ; 004e759c
    PUSH EAX                            ; 004e75a0
    MOV EDI,dword ptr [EBP + -0x10]     ; 004e75a1
    PUSH EDI                            ; 004e75a4
    PUSH 0x5c7174                       ; 004e75a5
    PUSH EBX                            ; 004e75aa
    CALL support_trstream.cpp_COutStream_printf_FUN_005744b0 ; 004e75ab
        ;   XREF to: 005744b0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_005744b0(COutStream * this_ptr, char * format)
    ADD ESP,0x18                        ; 004e75b0
    JMP 0x004e7557                      ; 004e75b3
        ;   XREF to: 004e7557 (UNCONDITIONAL_JUMP)  ; LAB_004e7557
    MOV EAX,0x5c716f                    ; 004e75b5
        ;   Label: LAB_004e75b5
    JMP 0x004e7599                      ; 004e75ba
        ;   XREF to: 004e7599 (UNCONDITIONAL_JUMP)  ; LAB_004e7599
    PUSH 0x5c7192                       ; 004e75bc | = "OK - end of heap\n"
        ;   Label: caseD_4
    PUSH EBX                            ; 004e75c1
    CALL support_trstream.cpp_COutStream_printf_FUN_005744b0 ; 004e75c2
        ;   XREF to: 005744b0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_005744b0(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e75c7
    MOV ESP,EBP                         ; 004e75ca
    POP EBP                             ; 004e75cc
    POP EDI                             ; 004e75cd
    POP ESI                             ; 004e75ce
    POP EBX                             ; 004e75cf
    RET                                 ; 004e75d0
    PUSH 0x5c71a4                       ; 004e75d1 | = "ERROR - bad pointer to heap\n"
        ;   Label: caseD_5
    PUSH EBX                            ; 004e75d6
    CALL support_trstream.cpp_COutStream_printf_FUN_005744b0 ; 004e75d7
        ;   XREF to: 005744b0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_005744b0(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e75dc
    MOV ESP,EBP                         ; 004e75df
    POP EBP                             ; 004e75e1
    POP EDI                             ; 004e75e2
    POP ESI                             ; 004e75e3
    POP EBX                             ; 004e75e4
    RET                                 ; 004e75e5
    PUSH 0x5c71c1                       ; 004e75e6 | = "ERROR - bad start of heap\n"
        ;   Label: caseD_2
    PUSH EBX                            ; 004e75eb
    CALL support_trstream.cpp_COutStream_printf_FUN_005744b0 ; 004e75ec
        ;   XREF to: 005744b0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_005744b0(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e75f1
    MOV ESP,EBP                         ; 004e75f4
    POP EBP                             ; 004e75f6
    POP EDI                             ; 004e75f7
    POP ESI                             ; 004e75f8
    POP EBX                             ; 004e75f9
    RET                                 ; 004e75fa
    PUSH 0x5c71dc                       ; 004e75fb | = "ERROR - bad node in heap\n"
        ;   Label: caseD_3
    PUSH EBX                            ; 004e7600
    CALL support_trstream.cpp_COutStream_printf_FUN_005744b0 ; 004e7601
        ;   XREF to: 005744b0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStream_printf_FUN_005744b0(COutStream * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e7606
    MOV ESP,EBP                         ; 004e7609
    POP EBP                             ; 004e760b
    POP EDI                             ; 004e760c
    POP ESI                             ; 004e760d
    POP EBX                             ; 004e760e
    RET                                 ; 004e760f


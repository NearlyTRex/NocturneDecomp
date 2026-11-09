; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_FUN_0055c540(C3DSCamera *this_ptr,_FILE *file_handle)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_set.cpp_FUN_0054d3c0 at 0054dd8d
;
; Referenced Globals:
;   undefined4 DAT_005f1115
;   TerminatedCString s_core_setutil_cpp_005f1119
;   TerminatedCString s_Out_of_memory_for_pvsLis_005f112d
;   undefined4 DAT_005f114c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_realloc_FUN_005c10d0
;   crt_stdio.c_fscanf_FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055c540
        ;   Label: core_setutil.cpp_FUN_0055c540
    PUSH EDI                            ; 0055c541
    PUSH EBP                            ; 0055c542
    MOV EDI,dword ptr [ESP + 0x10]      ; 0055c543
    MOV EBP,dword ptr [ESP + 0x14]      ; 0055c547
    LEA EAX,[EDI + 0x194]               ; 0055c54b
    PUSH EAX                            ; 0055c551
    PUSH 0x5f1115                       ; 0055c552 | DAT_005f1115
    PUSH EBP                            ; 0055c557
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c558
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,dword ptr [EDI + 0x194]     ; 0055c55d
    ADD ESP,0xc                         ; 0055c563
    SHL EAX,0x2                         ; 0055c566
    PUSH EAX                            ; 0055c569
    MOV EDX,dword ptr [EDI + 0x198]     ; 0055c56a
    PUSH EDX                            ; 0055c570
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 0055c571
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0055c576
    MOV ECX,dword ptr [EDI + 0x194]     ; 0055c579
    MOV dword ptr [EDI + 0x198],EAX     ; 0055c57f
    TEST ECX,ECX                        ; 0055c585
    JLE 0x0055c5c2                      ; 0055c587
        ;   XREF to: 0055c5c2 (CONDITIONAL_JUMP)  ; LAB_0055c5c2
    TEST EAX,EAX                        ; 0055c589
    JZ 0x0055c5c6                       ; 0055c58b
        ;   XREF to: 0055c5c6 (CONDITIONAL_JUMP)  ; LAB_0055c5c6
    MOV ECX,dword ptr [EDI + 0x194]     ; 0055c58d
        ;   Label: LAB_0055c58d
    XOR ESI,ESI                         ; 0055c593
    TEST ECX,ECX                        ; 0055c595
    JLE 0x0055c5c2                      ; 0055c597
        ;   XREF to: 0055c5c2 (CONDITIONAL_JUMP)  ; LAB_0055c5c2
    PUSH EBX                            ; 0055c599
    XOR EBX,EBX                         ; 0055c59a
    MOV EAX,dword ptr [EDI + 0x198]     ; 0055c59c
        ;   Label: LAB_0055c59c
    ADD EAX,EBX                         ; 0055c5a2
    PUSH EAX                            ; 0055c5a4
    PUSH 0x5f114c                       ; 0055c5a5 | DAT_005f114c
    PUSH EBP                            ; 0055c5aa
    INC ESI                             ; 0055c5ab
    ADD EBX,0x4                         ; 0055c5ac
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c5af
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,dword ptr [EDI + 0x194]     ; 0055c5b4
    ADD ESP,0xc                         ; 0055c5ba
    CMP ESI,EAX                         ; 0055c5bd
    JL 0x0055c59c                       ; 0055c5bf
        ;   XREF to: 0055c59c (CONDITIONAL_JUMP)  ; LAB_0055c59c
    POP EBX                             ; 0055c5c1
    POP EBP                             ; 0055c5c2
        ;   Label: LAB_0055c5c2
    POP EDI                             ; 0055c5c3
    POP ESI                             ; 0055c5c4
    RET                                 ; 0055c5c5
    PUSH ECX                            ; 0055c5c6
        ;   Label: LAB_0055c5c6
    MOV ESI,0x5f1119                    ; 0055c5c7 | = "..\\core\\setutil.cpp"
    MOV EAX,0xe4                        ; 0055c5cc
    PUSH 0x5f112d                       ; 0055c5d1 | = "Out of memory for pvsList - %d"
    MOV dword ptr [0x01d1d400],ESI      ; 0055c5d6 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0055c5dc | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0055c5e1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0055c5e6
    JMP 0x0055c58d                      ; 0055c5e9
        ;   XREF to: 0055c58d (UNCONDITIONAL_JUMP)  ; LAB_0055c58d


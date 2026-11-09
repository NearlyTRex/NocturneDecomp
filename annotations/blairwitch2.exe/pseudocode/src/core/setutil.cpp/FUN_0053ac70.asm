; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_FUN_0053ac70(C3DSCamera *this_ptr,_FILE *file_handle)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_0052c0e0 at 0052caad
;
; Referenced Globals:
;   undefined4 DAT_005e6145
;   TerminatedCString s_core_setutil_cpp_005e6149
;   TerminatedCString s_Out_of_memory_for_pvsLis_005e615d
;   undefined4 DAT_005e617c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_realloc_FUN_005b8ce0
;   crt_stdio.c_fscanf_FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0053ac70
        ;   Label: core_setutil.cpp_FUN_0053ac70
    PUSH EDI                            ; 0053ac71
    PUSH EBP                            ; 0053ac72
    MOV EDI,dword ptr [ESP + 0x10]      ; 0053ac73
    MOV EBP,dword ptr [ESP + 0x14]      ; 0053ac77
    LEA EAX,[EDI + 0x194]               ; 0053ac7b
    PUSH EAX                            ; 0053ac81
    PUSH 0x5e6145                       ; 0053ac82 | DAT_005e6145
    PUSH EBP                            ; 0053ac87
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053ac88
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    MOV EAX,dword ptr [EDI + 0x194]     ; 0053ac8d
    ADD ESP,0xc                         ; 0053ac93
    SHL EAX,0x2                         ; 0053ac96
    PUSH EAX                            ; 0053ac99
    MOV EDX,dword ptr [EDI + 0x198]     ; 0053ac9a
    PUSH EDX                            ; 0053aca0
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 0053aca1
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0053aca6
    MOV ECX,dword ptr [EDI + 0x194]     ; 0053aca9
    MOV dword ptr [EDI + 0x198],EAX     ; 0053acaf
    TEST ECX,ECX                        ; 0053acb5
    JLE 0x0053acf2                      ; 0053acb7
        ;   XREF to: 0053acf2 (CONDITIONAL_JUMP)  ; LAB_0053acf2
    TEST EAX,EAX                        ; 0053acb9
    JZ 0x0053acf6                       ; 0053acbb
        ;   XREF to: 0053acf6 (CONDITIONAL_JUMP)  ; LAB_0053acf6
    MOV ECX,dword ptr [EDI + 0x194]     ; 0053acbd
        ;   Label: LAB_0053acbd
    XOR ESI,ESI                         ; 0053acc3
    TEST ECX,ECX                        ; 0053acc5
    JLE 0x0053acf2                      ; 0053acc7
        ;   XREF to: 0053acf2 (CONDITIONAL_JUMP)  ; LAB_0053acf2
    PUSH EBX                            ; 0053acc9
    XOR EBX,EBX                         ; 0053acca
    MOV EAX,dword ptr [EDI + 0x198]     ; 0053accc
        ;   Label: LAB_0053accc
    ADD EAX,EBX                         ; 0053acd2
    PUSH EAX                            ; 0053acd4
    PUSH 0x5e617c                       ; 0053acd5 | DAT_005e617c
    PUSH EBP                            ; 0053acda
    INC ESI                             ; 0053acdb
    ADD EBX,0x4                         ; 0053acdc
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053acdf
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005b8100()
    MOV EAX,dword ptr [EDI + 0x194]     ; 0053ace4
    ADD ESP,0xc                         ; 0053acea
    CMP ESI,EAX                         ; 0053aced
    JL 0x0053accc                       ; 0053acef
        ;   XREF to: 0053accc (CONDITIONAL_JUMP)  ; LAB_0053accc
    POP EBX                             ; 0053acf1
    POP EBP                             ; 0053acf2
        ;   Label: LAB_0053acf2
    POP EDI                             ; 0053acf3
    POP ESI                             ; 0053acf4
    RET                                 ; 0053acf5
    PUSH ECX                            ; 0053acf6
        ;   Label: LAB_0053acf6
    MOV ESI,0x5e6149                    ; 0053acf7 | = "..\\core\\setutil.cpp"
    MOV EAX,0xe4                        ; 0053acfc
    PUSH 0x5e615d                       ; 0053ad01 | = "Out of memory for pvsList - %d"
    MOV dword ptr [0x01d046a0],ESI      ; 0053ad06 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0053ad0c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0053ad11
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0053ad16
    JMP 0x0053acbd                      ; 0053ad19
        ;   XREF to: 0053acbd (UNCONDITIONAL_JUMP)  ; LAB_0053acbd


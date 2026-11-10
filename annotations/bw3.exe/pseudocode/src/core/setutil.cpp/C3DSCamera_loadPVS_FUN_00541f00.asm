; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_00541f00(C3DSCamera *this_ptr,_FILE *file_handle)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_set.cpp_FUN_00532b80 at 0053354d
;
; Referenced Globals:
;   undefined4 DAT_005d0dbe
;   TerminatedCString s_core_setutil_cpp_005d0dc2
;   TerminatedCString s_Out_of_memory_for_pvsLis_005d0dd6
;   undefined4 DAT_005d0df5
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_realloc_FUN_005a3e50
;   crt_stdio.c_fscanf_FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00541f00
        ;   Label: core_setutil.cpp_C3DSCamera_loadPVS_FUN_00541f00
    PUSH EDI                            ; 00541f01
    PUSH EBP                            ; 00541f02
    MOV EDI,dword ptr [ESP + 0x10]      ; 00541f03
    MOV EBP,dword ptr [ESP + 0x14]      ; 00541f07
    LEA EAX,[EDI + 0x194]               ; 00541f0b
    PUSH EAX                            ; 00541f11
    PUSH 0x5d0dbe                       ; 00541f12 | DAT_005d0dbe
    PUSH EBP                            ; 00541f17
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00541f18
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EAX,dword ptr [EDI + 0x194]     ; 00541f1d
    ADD ESP,0xc                         ; 00541f23
    SHL EAX,0x2                         ; 00541f26
    PUSH EAX                            ; 00541f29
    MOV EDX,dword ptr [EDI + 0x198]     ; 00541f2a
    PUSH EDX                            ; 00541f30
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 00541f31
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00541f36
    MOV ECX,dword ptr [EDI + 0x194]     ; 00541f39
    MOV dword ptr [EDI + 0x198],EAX     ; 00541f3f
    TEST ECX,ECX                        ; 00541f45
    JLE 0x00541f82                      ; 00541f47
        ;   XREF to: 00541f82 (CONDITIONAL_JUMP)  ; LAB_00541f82
    TEST EAX,EAX                        ; 00541f49
    JZ 0x00541f86                       ; 00541f4b
        ;   XREF to: 00541f86 (CONDITIONAL_JUMP)  ; LAB_00541f86
    MOV ECX,dword ptr [EDI + 0x194]     ; 00541f4d
        ;   Label: LAB_00541f4d
    XOR ESI,ESI                         ; 00541f53
    TEST ECX,ECX                        ; 00541f55
    JLE 0x00541f82                      ; 00541f57
        ;   XREF to: 00541f82 (CONDITIONAL_JUMP)  ; LAB_00541f82
    PUSH EBX                            ; 00541f59
    XOR EBX,EBX                         ; 00541f5a
    MOV EAX,dword ptr [EDI + 0x198]     ; 00541f5c
        ;   Label: LAB_00541f5c
    ADD EAX,EBX                         ; 00541f62
    PUSH EAX                            ; 00541f64
    PUSH 0x5d0df5                       ; 00541f65 | DAT_005d0df5
    PUSH EBP                            ; 00541f6a
    INC ESI                             ; 00541f6b
    ADD EBX,0x4                         ; 00541f6c
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00541f6f
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EAX,dword ptr [EDI + 0x194]     ; 00541f74
    ADD ESP,0xc                         ; 00541f7a
    CMP ESI,EAX                         ; 00541f7d
    JL 0x00541f5c                       ; 00541f7f
        ;   XREF to: 00541f5c (CONDITIONAL_JUMP)  ; LAB_00541f5c
    POP EBX                             ; 00541f81
    POP EBP                             ; 00541f82
        ;   Label: LAB_00541f82
    POP EDI                             ; 00541f83
    POP ESI                             ; 00541f84
    RET                                 ; 00541f85
    PUSH ECX                            ; 00541f86
        ;   Label: LAB_00541f86
    MOV ESI,0x5d0dc2                    ; 00541f87 | = "..\\core\\setutil.cpp"
    MOV EAX,0xe4                        ; 00541f8c
    PUSH 0x5d0dd6                       ; 00541f91 | = "Out of memory for pvsList - %d"
    MOV dword ptr [0x01d71de0],ESI      ; 00541f96 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00541f9c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00541fa1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00541fa6
    JMP 0x00541f4d                      ; 00541fa9
        ;   XREF to: 00541f4d (UNCONDITIONAL_JUMP)  ; LAB_00541f4d


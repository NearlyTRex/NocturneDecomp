; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_005857b0(C3DSCamera *this_ptr,FILE *file_handle)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 00569c73
;
; Referenced Globals:
;   TerminatedCString s_d_00649263
;   TerminatedCString s_core_setutil_cpp_00649267
;   TerminatedCString s_core_setutil_cpp_0064927b
;   TerminatedCString s_Out_of_memory_for_pvsLis_0064928f
;   TerminatedCString s_d_006492ae
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005857b0
        ;   Label: core_setutil.cpp_C3DSCamera_loadPVS_FUN_005857b0
    PUSH EDI                            ; 005857b1
    PUSH EBP                            ; 005857b2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005857b3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005857b7
    LEA EAX,[EDI + 0x194]               ; 005857bb
    PUSH EAX                            ; 005857c1
    PUSH 0x649263                       ; 005857c2 | = "%d\n"
    PUSH EBP                            ; 005857c7
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005857c8
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 005857cd
    PUSH 0xe2                           ; 005857d0
    MOV EAX,dword ptr [EDI + 0x194]     ; 005857d5
    PUSH 0x649267                       ; 005857db | = "..\\core\\setutil.cpp"
    SHL EAX,0x2                         ; 005857e0
    PUSH EAX                            ; 005857e3
    MOV EDX,dword ptr [EDI + 0x198]     ; 005857e4
    PUSH EDX                            ; 005857ea
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 005857eb
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 005857f0
    MOV ECX,dword ptr [EDI + 0x194]     ; 005857f3
    MOV dword ptr [EDI + 0x198],EAX     ; 005857f9
    TEST ECX,ECX                        ; 005857ff
    JLE 0x0058583c                      ; 00585801
        ;   XREF to: 0058583c (CONDITIONAL_JUMP)  ; LAB_0058583c
    TEST EAX,EAX                        ; 00585803
    JZ 0x00585840                       ; 00585805
        ;   XREF to: 00585840 (CONDITIONAL_JUMP)  ; LAB_00585840
    MOV ECX,dword ptr [EDI + 0x194]     ; 00585807
        ;   Label: LAB_00585807
    XOR ESI,ESI                         ; 0058580d
    TEST ECX,ECX                        ; 0058580f
    JLE 0x0058583c                      ; 00585811
        ;   XREF to: 0058583c (CONDITIONAL_JUMP)  ; LAB_0058583c
    PUSH EBX                            ; 00585813
    XOR EBX,EBX                         ; 00585814
    MOV EAX,dword ptr [EDI + 0x198]     ; 00585816
        ;   Label: LAB_00585816
    ADD EAX,EBX                         ; 0058581c
    PUSH EAX                            ; 0058581e
    PUSH 0x6492ae                       ; 0058581f | = "\t%d\n"
    PUSH EBP                            ; 00585824
    INC ESI                             ; 00585825
    ADD EBX,0x4                         ; 00585826
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00585829
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EAX,dword ptr [EDI + 0x194]     ; 0058582e
    ADD ESP,0xc                         ; 00585834
    CMP ESI,EAX                         ; 00585837
    JL 0x00585816                       ; 00585839
        ;   XREF to: 00585816 (CONDITIONAL_JUMP)  ; LAB_00585816
    POP EBX                             ; 0058583b
    POP EBP                             ; 0058583c
        ;   Label: LAB_0058583c
    POP EDI                             ; 0058583d
    POP ESI                             ; 0058583e
    RET                                 ; 0058583f
    PUSH ECX                            ; 00585840
        ;   Label: LAB_00585840
    MOV ESI,0x64927b                    ; 00585841 | = "..\\core\\setutil.cpp"
    MOV EAX,0xe4                        ; 00585846
    PUSH 0x64928f                       ; 0058584b | = "Out of memory for pvsList - %d"
    MOV dword ptr [0x02f0ca48],ESI      ; 00585850 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00585856 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058585b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00585860
    JMP 0x00585807                      ; 00585863
        ;   XREF to: 00585807 (UNCONDITIONAL_JUMP)  ; LAB_00585807


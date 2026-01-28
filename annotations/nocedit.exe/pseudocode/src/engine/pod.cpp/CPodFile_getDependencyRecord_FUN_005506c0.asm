; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack2_esi CPodDependencyRecord * __stack2_esi engine_pod_cpp_CPodFile_getDependencyRecord_FUN_005506c0 (CPodFile *this_ptr,int dependency_index,CPodDependencyRecord *output_record)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   dependency_index
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
;
; XREF[1]:
;   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0 at 00551523
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_006404ff
;   TerminatedCString s_CPodFile_getDependencyRe_00640511
;   TerminatedCString s_engine_pod_cpp_00640552
;   TerminatedCString s_rb_00640564
;   TerminatedCString s_engine_pod_cpp_00640567
;   TerminatedCString s_CPodFile_getDependencyRe_00640579
;   TerminatedCString s_engine_pod_cpp_006405a7
;   TerminatedCString s_CPodFile_getDependencyRe_006405b9
;   TerminatedCString s_engine_pod_cpp_006405ea
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005506c0
        ;   Label: engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0
    PUSH EDI                            ; 005506c1
    PUSH EBP                            ; 005506c2
    SUB ESP,0x108                       ; 005506c3
    MOV EBP,dword ptr [ESP + 0x118]     ; 005506c9
    MOV EBX,ESI                         ; 005506d0
    MOV EDX,dword ptr [ESP + 0x11c]     ; 005506d2
    TEST EDX,EDX                        ; 005506d9
    JL 0x005506e5                       ; 005506db
        ;   XREF to: 005506e5 (CONDITIONAL_JUMP)  ; LAB_005506e5
    CMP EDX,dword ptr [EBP + 0x424]     ; 005506dd
    JL 0x00550708                       ; 005506e3
        ;   XREF to: 00550708 (CONDITIONAL_JUMP)  ; LAB_00550708
    MOV ESI,0x6404ff                    ; 005506e5 | = "..\\engine\\pod.cpp"
        ;   Label: LAB_005506e5
    MOV EDI,0x32e                       ; 005506ea
    PUSH 0x640511                       ; 005506ef | = "CPodFile::getDependencyRecord - inval..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005506f4 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005506fa | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00550700
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00550705
    PUSH 0x332                          ; 00550708
        ;   Label: LAB_00550708
    PUSH 0x640552                       ; 0055070d | = "..\\engine\\pod.cpp"
    PUSH 0x640564                       ; 00550712 | = "rb"
    PUSH 0x0                            ; 00550717
    LEA EDI,[EBP + 0x4]                 ; 00550719
    PUSH EDI                            ; 0055071c
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0055071d
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00550722
    MOV ESI,EAX                         ; 00550725
    TEST EAX,EAX                        ; 00550727
    JNZ 0x0055074e                      ; 00550729
        ;   XREF to: 0055074e (CONDITIONAL_JUMP)  ; LAB_0055074e
    PUSH EDI                            ; 0055072b
    MOV EAX,0x640567                    ; 0055072c | = "..\\engine\\pod.cpp"
    MOV EDX,0x333                       ; 00550731
    PUSH 0x640579                       ; 00550736 | = "CPodFile::getDependencyRecord - can't..."
    MOV [0x02f0ca48],EAX                ; 0055073b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00550740 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00550746
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0055074b
    MOV EDI,dword ptr [ESP + 0x11c]     ; 0055074e
        ;   Label: LAB_0055074e
    MOV EAX,EDI                         ; 00550755
    SHL EAX,0x5                         ; 00550757
    ADD EAX,EDI                         ; 0055075a
    MOV ECX,dword ptr [EBP + 0x428]     ; 0055075c
    SHL EAX,0x3                         ; 00550762
    PUSH 0x0                            ; 00550765
    ADD EAX,ECX                         ; 00550767
    PUSH EAX                            ; 00550769
    PUSH ESI                            ; 0055076a
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 0055076b
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00550770
    PUSH ESI                            ; 00550773
    PUSH 0x1                            ; 00550774
    PUSH 0x108                          ; 00550776
    LEA EAX,[ESP + 0xc]                 ; 0055077b
    PUSH EAX                            ; 0055077f
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00550780
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    MOV AH,byte ptr [ESI + 0xc]         ; 00550785
    ADD ESP,0x10                        ; 00550788
    TEST AH,0x20                        ; 0055078b
    JNZ 0x005507bc                      ; 0055078e
        ;   XREF to: 005507bc (CONDITIONAL_JUMP)  ; LAB_005507bc
    PUSH 0x346                          ; 00550790
        ;   Label: LAB_00550790
    PUSH 0x6405ea                       ; 00550795 | = "..\\engine\\pod.cpp"
    PUSH ESI                            ; 0055079a
    MOV EDI,EBX                         ; 0055079b
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0055079d
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    MOV ECX,0x42                        ; 005507a2
    LEA ESI,[ESP + 0xc]                 ; 005507a7
    ADD ESP,0xc                         ; 005507ab
    MOVSD.REP ES:EDI,ESI                ; 005507ae
    MOV EAX,EBX                         ; 005507b0
    ADD ESP,0x108                       ; 005507b2
    POP EBP                             ; 005507b8
    POP EDI                             ; 005507b9
    POP EBX                             ; 005507ba
    RET                                 ; 005507bb
    ADD EBP,0x4                         ; 005507bc
        ;   Label: LAB_005507bc
    PUSH EBP                            ; 005507bf
    MOV EDI,0x6405a7                    ; 005507c0 | = "..\\engine\\pod.cpp"
    MOV EAX,0x341                       ; 005507c5
    PUSH 0x6405b9                       ; 005507ca | = "CPodFile::getDependencyRecord - error..."
    MOV dword ptr [0x02f0ca48],EDI      ; 005507cf | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005507d5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005507da
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005507df
    JMP 0x00550790                      ; 005507e2
        ;   XREF to: 00550790 (UNCONDITIONAL_JUMP)  ; LAB_00550790


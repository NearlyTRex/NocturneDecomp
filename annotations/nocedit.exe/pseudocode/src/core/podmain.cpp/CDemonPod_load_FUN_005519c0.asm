; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_podmain_cpp_CDemonPod_load_FUN_005519c0(CDemonPod *this_ptr)
;
; Parameters:
; CDemonPod *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x170]:1  local_170
; undefined1       Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_core_podmain_cpp_006408f7
;   TerminatedCString s_rt_0064090b
;   TerminatedCString s_pod_ini_0064090e
;   TerminatedCString s_pod_00640916
;   TerminatedCString s_d_0064091c
;   TerminatedCString s_s_00640920
;   TerminatedCString s_core_podmain_cpp_00640924
;
; Called Functions:
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
;   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
;   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
;   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
;   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
;   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005519c0
        ;   Label: core_podmain.cpp_CDemonPod_load_FUN_005519c0
    PUSH EDI                            ; 005519c1
    SUB ESP,0x168                       ; 005519c2
    MOV EBX,dword ptr [ESP + 0x174]     ; 005519c8
    PUSH 0x2f                           ; 005519cf
    PUSH 0x6408f7                       ; 005519d1 | = "..\\core\\podmain.cpp"
    PUSH 0x64090b                       ; 005519d6 | = "rt"
    PUSH 0x0                            ; 005519db
    PUSH 0x64090e                       ; 005519dd | = "pod.ini"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005519e2
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 005519e7
    MOV EDI,EAX                         ; 005519ea
    TEST EAX,EAX                        ; 005519ec
    JNZ 0x00551a6c                      ; 005519ee
        ;   XREF to: 00551a6c (CONDITIONAL_JUMP)  ; LAB_00551a6c
    MOV EAX,ESP                         ; 005519f4
    PUSH EAX                            ; 005519f6
    CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30 ; 005519f7
        ;   XREF to: 00481c30 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_ctor_FUN_00481c30(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 005519fc
    PUSH 0x640916                       ; 005519ff | = "*.pod"
    LEA EAX,[ESP + 0x4]                 ; 00551a04
    PUSH EAX                            ; 00551a08
    CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 ; 00551a09
        ;   XREF to: 00481c70 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_openSearch_FUN_00481c70(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 00551a0e
    CMP byte ptr [ESP],0x0              ; 00551a11
    JZ 0x00551a40                       ; 00551a15
        ;   XREF to: 00551a40 (CONDITIONAL_JUMP)  ; LAB_00551a40
    MOV EDX,ESP                         ; 00551a17
        ;   Label: LAB_00551a17
    PUSH EDX                            ; 00551a19
    MOV EAX,dword ptr [EBX + 0x194]     ; 00551a1a
    PUSH EBX                            ; 00551a20
    CALL dword ptr [EAX + 0xc]          ; 00551a21
    ADD ESP,0x8                         ; 00551a24
    MOV EAX,ESP                         ; 00551a27
    PUSH EAX                            ; 00551a29
    CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0 ; 00551a2a
        ;   XREF to: 00481cf0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_findNext_FUN_00481cf0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00551a2f
    CMP byte ptr [ESP],0x0              ; 00551a32
    JNZ 0x00551a17                      ; 00551a36
        ;   XREF to: 00551a17 (CONDITIONAL_JUMP)  ; LAB_00551a17
    LEA EAX,[EAX]                       ; 00551a38
    MOV EDX,EDX                         ; 00551a3e
    MOV EAX,ESP                         ; 00551a40
        ;   Label: LAB_00551a40
    PUSH EAX                            ; 00551a42
    CALL engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70 ; 00551a43
        ;   XREF to: 00481d70 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00551a48
    PUSH 0x0                            ; 00551a4b
    LEA EAX,[ESP + 0x4]                 ; 00551a4d
    PUSH EAX                            ; 00551a51
    CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50 ; 00551a52
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00551a57
    PUSH EBX                            ; 00551a5a
    CALL engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0 ; 00551a5b
        ;   XREF to: 005513d0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0(CPod * this_ptr)
    ADD ESP,0x4                         ; 00551a60
    ADD ESP,0x168                       ; 00551a63
    POP EDI                             ; 00551a69
    POP EBX                             ; 00551a6a
    RET                                 ; 00551a6b
    PUSH ESI                            ; 00551a6c
        ;   Label: LAB_00551a6c
    LEA EDX,[ESP + 0x168]               ; 00551a6d
    PUSH EDX                            ; 00551a74
    PUSH 0x64091c                       ; 00551a75 | = "%d\n"
    PUSH EAX                            ; 00551a7a
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00551a7b
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00551a80
    MOV EDX,dword ptr [ESP + 0x168]     ; 00551a83
    XOR ESI,ESI                         ; 00551a8a
    TEST EDX,EDX                        ; 00551a8c
    JLE 0x00551ad0                      ; 00551a8e
        ;   XREF to: 00551ad0 (CONDITIONAL_JUMP)  ; LAB_00551ad0
    LEA EAX,[ESP + 0x118]               ; 00551a90
        ;   Label: LAB_00551a90
    PUSH EAX                            ; 00551a97
    PUSH 0x640920                       ; 00551a98 | = "%s\n"
    PUSH EDI                            ; 00551a9d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00551a9e
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00551aa3
    LEA EAX,[ESP + 0x118]               ; 00551aa6
    PUSH EAX                            ; 00551aad
    MOV EDX,dword ptr [EBX + 0x194]     ; 00551aae
    PUSH EBX                            ; 00551ab4
    CALL dword ptr [EDX + 0xc]          ; 00551ab5
    ADD ESP,0x8                         ; 00551ab8
    INC ESI                             ; 00551abb
    CMP ESI,dword ptr [ESP + 0x168]     ; 00551abc
    JL 0x00551a90                       ; 00551ac3
        ;   XREF to: 00551a90 (CONDITIONAL_JUMP)  ; LAB_00551a90
    LEA EAX,[EAX]                       ; 00551ac5
    LEA EDX,[EDX]                       ; 00551acb
    MOV EBX,EBX                         ; 00551ace
    PUSH 0x43                           ; 00551ad0
        ;   Label: LAB_00551ad0
    PUSH 0x640924                       ; 00551ad2 | = "..\\core\\podmain.cpp"
    PUSH EDI                            ; 00551ad7
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00551ad8
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00551add
    POP ESI                             ; 00551ae0
    PUSH EBX                            ; 00551ae1
    CALL engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0 ; 00551ae2
        ;   XREF to: 005513d0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0(CPod * this_ptr)
    ADD ESP,0x4                         ; 00551ae7
    ADD ESP,0x168                       ; 00551aea
    POP EDI                             ; 00551af0
    POP EBX                             ; 00551af1
    RET                                 ; 00551af2


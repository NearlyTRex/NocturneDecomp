; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLeakChecker * shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0(CLeakChecker * this_ptr, uint d1, uint d2, uint d3, uint d4)
;
; Parameters:
; CLeakChecker *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   d1
; uint             Stack[0xc]:4   d2
; uint             Stack[0x10]:4   d3
; uint             Stack[0x14]:4   d4
;
; Referenced Globals:
;   TerminatedCString s_Files_left_open_006363dd
;   TerminatedCString s_at_006363f3
;   TerminatedCString s_shape_memdbg_cpp_006363f6
;   TerminatedCString s_Files_left_open_but_can__0063640a
;   TerminatedCString s_s_opened_s_line_d_0063642f
;   TerminatedCString s_s_in_s_opened_s_line_d_00636446
;   TerminatedCString s_shape_memdbg_cpp_00636463
;   TerminatedCString s_Files_were_left_open_Che_00636477
;   TerminatedCString s_Memory_leaks_detected_00636497
;   TerminatedCString s_at_006364b3
;   TerminatedCString s_shape_memdbg_cpp_006364b6
;   TerminatedCString s_Memory_leaks_detected_bu_006364ca
;   TerminatedCString s_d_bytes_s_line_d_006364f5
;   TerminatedCString s_shape_memdbg_cpp_0063650b
;   TerminatedCString s_Memory_leaks_detected_Ch_0063651f
;   ... and 15 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_closeTrackedFile_FUN_00601ea0
;   crt_stdio.c_fopen_FUN_00601a7c
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   shape_memdbg.cpp_traceFile_FUN_0050f180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050fbc0
        ;   Label: shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0
    PUSH ESI                            ; 0050fbc1
    PUSH EDI                            ; 0050fbc2
    PUSH EBP                            ; 0050fbc3
    CMP dword ptr [0x02f0ca50],0x0      ; 0050fbc4 | g_RecursiveCallFlag
    JNZ 0x0050fcb1                      ; 0050fbcb
        ;   XREF to: 0050fcb1 (CONDITIONAL_JUMP)  ; LAB_0050fcb1
    CMP dword ptr [0x02f0d934],0x0      ; 0050fbd1 | g_IsDestroyingLeakChecker
    JNZ 0x0050fcb1                      ; 0050fbd8
        ;   XREF to: 0050fcb1 (CONDITIONAL_JUMP)  ; LAB_0050fcb1
    MOV EBX,0x1                         ; 0050fbde
    MOV ESI,dword ptr [0x02f0d948]      ; 0050fbe3 | g_OpenFileCount
    MOV dword ptr [0x02f0d934],EBX      ; 0050fbe9 | g_IsDestroyingLeakChecker
    TEST ESI,ESI                        ; 0050fbef
    JG 0x0050fcba                       ; 0050fbf1
        ;   XREF to: 0050fcba (CONDITIONAL_JUMP)  ; LAB_0050fcba
    CMP dword ptr [0x02f0d938],0x0      ; 0050fbf7 | g_MemoryListHead
        ;   Label: LAB_0050fbf7
    JZ 0x0050fcb1                       ; 0050fbfe
        ;   XREF to: 0050fcb1 (CONDITIONAL_JUMP)  ; LAB_0050fcb1
    PUSH 0x636497                       ; 0050fc04 | = "!!!!!Memory leaks detected:"
    CALL shape_memdbg.cpp_traceFile_FUN_0050f180 ; 0050fc09
        ;   XREF to: 0050f180 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceFile_FUN_0050f180(char * format)
    ADD ESP,0x4                         ; 0050fc0e
    PUSH 0x6364b3                       ; 0050fc11 | = "at"
    PUSH 0x67d1f0                       ; 0050fc16 | = "memdbg.txt"
    CALL crt_stdio.c_fopen_FUN_00601a7c ; 0050fc1b
        ;   XREF to: 00601a7c (UNCONDITIONAL_CALL)  ; FILE * crt_stdio.c_fopen_FUN_00601a7c(char * filename, char * mode)
    ADD ESP,0x8                         ; 0050fc20
    MOV ESI,EAX                         ; 0050fc23
    TEST EAX,EAX                        ; 0050fc25
    JNZ 0x0050fc4c                      ; 0050fc27
        ;   XREF to: 0050fc4c (CONDITIONAL_JUMP)  ; LAB_0050fc4c
    MOV EDI,0x6364b6                    ; 0050fc29 | = "..\\shape\\memdbg.cpp"
    MOV EBP,0x289                       ; 0050fc2e
    PUSH 0x6364ca                       ; 0050fc33 | = "Memory leaks detected, but can't log ..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0050fc38 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0050fc3e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050fc44
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050fc49
    MOV EBX,dword ptr [0x02f0d938]      ; 0050fc4c | g_MemoryListHead
        ;   Label: LAB_0050fc4c
    TEST EBX,EBX                        ; 0050fc52
    JZ 0x0050fc80                       ; 0050fc54
        ;   XREF to: 0050fc80 (CONDITIONAL_JUMP)  ; LAB_0050fc80
    MOV EAX,dword ptr [EBX + 0x20]      ; 0050fc56
        ;   Label: LAB_0050fc56
    PUSH EAX                            ; 0050fc59
    LEA EAX,[EBX + 0xc]                 ; 0050fc5a
    PUSH EAX                            ; 0050fc5d
    MOV EDX,dword ptr [EBX + 0x8]       ; 0050fc5e
    PUSH EDX                            ; 0050fc61
    PUSH 0x6364f5                       ; 0050fc62 | = "%d bytes, %s line %d\n"
    PUSH ESI                            ; 0050fc67
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0050fc68
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV EBX,dword ptr [EBX + 0x4]       ; 0050fc6d
    ADD ESP,0x14                        ; 0050fc70
    TEST EBX,EBX                        ; 0050fc73
    JNZ 0x0050fc56                      ; 0050fc75
        ;   XREF to: 0050fc56 (CONDITIONAL_JUMP)  ; LAB_0050fc56
    LEA EAX,[EAX]                       ; 0050fc77
    LEA EDX,[EDX]                       ; 0050fc7d
    PUSH ESI                            ; 0050fc80
        ;   Label: LAB_0050fc80
    CALL crt_stdio.c_closeTrackedFile_FUN_00601ea0 ; 0050fc81
        ;   XREF to: 00601ea0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_closeTrackedFile_FUN_00601ea0(FILE * file_handle)
    ADD ESP,0x4                         ; 0050fc86
    PUSH 0x67d1f0                       ; 0050fc89 | = "memdbg.txt"
    MOV EBX,0x297                       ; 0050fc8e
    MOV ECX,0x63650b                    ; 0050fc93 | = "..\\shape\\memdbg.cpp"
    PUSH 0x63651f                       ; 0050fc98 | = "Memory leaks detected.  Check %s"
    MOV dword ptr [0x02f0ca4c],EBX      ; 0050fc9d | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 0050fca3 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050fca9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0050fcae
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050fcb1
        ;   Label: LAB_0050fcb1
    POP EBP                             ; 0050fcb5
    POP EDI                             ; 0050fcb6
    POP ESI                             ; 0050fcb7
    POP EBX                             ; 0050fcb8
    RET                                 ; 0050fcb9
    PUSH 0x6363dd                       ; 0050fcba | = "!!!!!Files left open:"
        ;   Label: LAB_0050fcba
    CALL shape_memdbg.cpp_traceFile_FUN_0050f180 ; 0050fcbf
        ;   XREF to: 0050f180 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceFile_FUN_0050f180(char * format)
    ADD ESP,0x4                         ; 0050fcc4
    PUSH 0x6363f3                       ; 0050fcc7 | = "at"
    PUSH 0x67d1f0                       ; 0050fccc | = "memdbg.txt"
    CALL crt_stdio.c_fopen_FUN_00601a7c ; 0050fcd1
        ;   XREF to: 00601a7c (UNCONDITIONAL_CALL)  ; FILE * crt_stdio.c_fopen_FUN_00601a7c(char * filename, char * mode)
    ADD ESP,0x8                         ; 0050fcd6
    MOV EDI,EAX                         ; 0050fcd9
    TEST EAX,EAX                        ; 0050fcdb
    JNZ 0x0050fd01                      ; 0050fcdd
        ;   XREF to: 0050fd01 (CONDITIONAL_JUMP)  ; LAB_0050fd01
    MOV EBP,0x6363f6                    ; 0050fcdf | = "..\\shape\\memdbg.cpp"
    MOV EAX,0x26e                       ; 0050fce4
    PUSH 0x63640a                       ; 0050fce9 | = "Files left open, but can't log them."
    MOV dword ptr [0x02f0ca48],EBP      ; 0050fcee | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0050fcf4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050fcf9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050fcfe
    MOV EDX,dword ptr [0x02f0d948]      ; 0050fd01 | g_OpenFileCount
        ;   Label: LAB_0050fd01
    XOR ESI,ESI                         ; 0050fd07
    TEST EDX,EDX                        ; 0050fd09
    JLE 0x0050fd57                      ; 0050fd0b
        ;   XREF to: 0050fd57 (CONDITIONAL_JUMP)  ; LAB_0050fd57
    MOV EBX,0x2f0d94c                   ; 0050fd0d | g_FileRegistry
    ADD EBX,0x21c                       ; 0050fd12
    IMUL EAX,ESI,0x328                  ; 0050fd18
        ;   Label: LAB_0050fd18
    MOV EDX,0x2f0d94c                   ; 0050fd1e | g_FileRegistry
    MOV CL,byte ptr [EAX + 0x2f0da50]   ; 0050fd23 | g_FileRegistry[0].directory[0] | g_FileRegistry[1].directory[0]
    ADD EDX,EAX                         ; 0050fd29
    TEST CL,CL                          ; 0050fd2b
    JNZ 0x0050fd8d                      ; 0050fd2d
        ;   XREF to: 0050fd8d (CONDITIONAL_JUMP)  ; LAB_0050fd8d
    MOV ECX,dword ptr [EAX + 0x2f0dc6c] ; 0050fd2f | g_FileRegistry[0].line_number | g_FileRegistry[1].line_number
    PUSH ECX                            ; 0050fd35
    PUSH EBX                            ; 0050fd36 | g_FileRegistry[0].source_file[0] | g_FileRegistry[1].source_file[0]
    PUSH EDX                            ; 0050fd37 | g_FileRegistry | g_FileRegistry[1].filename[0]
    PUSH 0x63642f                       ; 0050fd38 | = "%s, opened %s line %d\n"
    PUSH EDI                            ; 0050fd3d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0050fd3e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x14                        ; 0050fd43
    MOV ECX,dword ptr [0x02f0d948]      ; 0050fd46 | g_OpenFileCount
        ;   Label: LAB_0050fd46
    INC ESI                             ; 0050fd4c
    ADD EBX,0x328                       ; 0050fd4d
    CMP ESI,ECX                         ; 0050fd53
    JL 0x0050fd18                       ; 0050fd55
        ;   XREF to: 0050fd18 (CONDITIONAL_JUMP)  ; LAB_0050fd18
    PUSH EDI                            ; 0050fd57
        ;   Label: LAB_0050fd57
    CALL crt_stdio.c_closeTrackedFile_FUN_00601ea0 ; 0050fd58
        ;   XREF to: 00601ea0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_closeTrackedFile_FUN_00601ea0(FILE * file_handle)
    ADD ESP,0x4                         ; 0050fd5d
    PUSH 0x67d1f0                       ; 0050fd60 | = "memdbg.txt"
    MOV EBX,0x636463                    ; 0050fd65 | = "..\\shape\\memdbg.cpp"
    MOV ESI,0x27e                       ; 0050fd6a
    PUSH 0x636477                       ; 0050fd6f | = "Files were left open.  Check %s"
    MOV dword ptr [0x02f0ca48],EBX      ; 0050fd74 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0050fd7a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050fd80
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0050fd85
    JMP 0x0050fbf7                      ; 0050fd88
        ;   XREF to: 0050fbf7 (UNCONDITIONAL_JUMP)  ; LAB_0050fbf7
    MOV EBP,dword ptr [EAX + 0x2f0dc6c] ; 0050fd8d | g_FileRegistry[1].line_number
        ;   Label: LAB_0050fd8d
    PUSH EBP                            ; 0050fd93
    PUSH EBX                            ; 0050fd94 | g_FileRegistry[1].source_file[0]
    PUSH EDX                            ; 0050fd95 | g_FileRegistry[1].filename[0]
    ADD EDX,0x104                       ; 0050fd96
    PUSH EDX                            ; 0050fd9c | g_FileRegistry[1].directory[0]
    PUSH 0x636446                       ; 0050fd9d | = "%s in %s, opened %s line %d\n"
    PUSH EDI                            ; 0050fda2
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0050fda3
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x18                        ; 0050fda8
    JMP 0x0050fd46                      ; 0050fdab
        ;   XREF to: 0050fd46 (UNCONDITIONAL_JUMP)  ; LAB_0050fd46


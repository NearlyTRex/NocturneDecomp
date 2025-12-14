; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_memdbg.cpp_debugMemdump_FUN_0050f6c0(FILE * output_file)
;
; Parameters:
; FILE *           Stack[0x4]:4   output_file
;
; XREF[1]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 00507982
;
; Referenced Globals:
;   TerminatedCString s_anon_00636154
;   TerminatedCString s_memory_usage_summary_00636176
;   TerminatedCString s_anon_0063618c
;   TerminatedCString s_d_bytes_s_line_d_006361ae
;   TerminatedCString s_anon_006361c4
;   TerminatedCString s_Total_d_blocks_d_bytes_006361e6
;   BOOL g_RecursiveCallFlag
;   SMemHead* g_MemoryListHead
;   HANDLE g_FileMutex
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   wincore_winrun.cpp_createMutex_FUN_005f3fe0
;   wincore_winrun.cpp_releaseMutex_FUN_005f4050
;   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f6c0
        ;   Label: shape_memdbg.cpp_debugMemdump_FUN_0050f6c0
    PUSH ESI                            ; 0050f6c1
    PUSH EDI                            ; 0050f6c2
    PUSH EBP                            ; 0050f6c3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0050f6c4
    CMP dword ptr [0x02f0ca50],0x0      ; 0050f6c8 | g_RecursiveCallFlag
    JNZ 0x0050f6f3                      ; 0050f6cf
        ;   XREF to: 0050f6f3 (CONDITIONAL_JUMP)  ; LAB_0050f6f3
    CMP dword ptr [0x02f0d93c],0x0      ; 0050f6d1 | g_FileMutex
    JNZ 0x0050f6e4                      ; 0050f6d8
        ;   XREF to: 0050f6e4 (CONDITIONAL_JUMP)  ; LAB_0050f6e4
    CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0 ; 0050f6da
        ;   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createMutex_FUN_005f3fe0()
    MOV [0x02f0d93c],EAX                ; 0050f6df | g_FileMutex
    MOV EBX,dword ptr [0x02f0d93c]      ; 0050f6e4 | g_FileMutex
        ;   Label: LAB_0050f6e4
    PUSH EBX                            ; 0050f6ea
    CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0 ; 0050f6eb
        ;   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f6f0
    PUSH 0x636154                       ; 0050f6f3 | = "================================\n"
        ;   Label: LAB_0050f6f3
    PUSH EBP                            ; 0050f6f8
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0050f6f9
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 0050f6fe
    PUSH 0x636176                       ; 0050f701 | = "memory usage summary\n"
    PUSH EBP                            ; 0050f706
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0050f707
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 0050f70c
    PUSH 0x63618c                       ; 0050f70f | = "================================\n"
    PUSH EBP                            ; 0050f714
    XOR EDI,EDI                         ; 0050f715
    XOR ESI,ESI                         ; 0050f717
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0050f719
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV EBX,dword ptr [0x02f0d938]      ; 0050f71e | g_MemoryListHead
    ADD ESP,0x8                         ; 0050f724
    TEST EBX,EBX                        ; 0050f727
    JZ 0x0050f760                       ; 0050f729
        ;   XREF to: 0050f760 (CONDITIONAL_JUMP)  ; LAB_0050f760
    MOV EDX,dword ptr [EBX + 0x20]      ; 0050f72b
        ;   Label: LAB_0050f72b
    MOV EAX,dword ptr [EBX + 0x8]       ; 0050f72e
    PUSH EDX                            ; 0050f731
    ADD ESI,EAX                         ; 0050f732
    LEA EAX,[EBX + 0xc]                 ; 0050f734
    PUSH EAX                            ; 0050f737
    MOV ECX,dword ptr [EBX + 0x8]       ; 0050f738
    PUSH ECX                            ; 0050f73b
    PUSH 0x6361ae                       ; 0050f73c | = "%d bytes, %s line %d\n"
    PUSH EBP                            ; 0050f741
    INC EDI                             ; 0050f742
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0050f743
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV EBX,dword ptr [EBX + 0x4]       ; 0050f748
    ADD ESP,0x14                        ; 0050f74b
    TEST EBX,EBX                        ; 0050f74e
    JNZ 0x0050f72b                      ; 0050f750
        ;   XREF to: 0050f72b (CONDITIONAL_JUMP)  ; LAB_0050f72b
    LEA EAX,[EAX]                       ; 0050f752
    LEA EDX,[EDX]                       ; 0050f758
    MOV EAX,EAX                         ; 0050f75e
    PUSH 0x6361c4                       ; 0050f760 | = "--------------------------------\n"
        ;   Label: LAB_0050f760
    PUSH EBP                            ; 0050f765
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0050f766
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 0050f76b
    PUSH ESI                            ; 0050f76e
    PUSH EDI                            ; 0050f76f
    PUSH 0x6361e6                       ; 0050f770 | = "Total %d blocks, %d bytes\n"
    PUSH EBP                            ; 0050f775
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0050f776
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0050f77b
    MOV EBX,dword ptr [0x02f0d93c]      ; 0050f77e | g_FileMutex
    PUSH EBX                            ; 0050f784
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050f785
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f78a
    POP EBP                             ; 0050f78d
    POP EDI                             ; 0050f78e
    POP ESI                             ; 0050f78f
    POP EBX                             ; 0050f790
    RET                                 ; 0050f791


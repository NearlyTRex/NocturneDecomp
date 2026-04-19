; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl cockpit_ckptutil_c_loadRotatedBitmapFile_FUN_00434690(char *filename,char *buffer,int width,int height,int apply_palette,int palette_index)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   apply_palette
; int              Stack[0x18]:4   palette_index
; Local Variables:
; char[80]         Stack[-0x6c]:80  local_6c
; int              Stack[-0x1c]:4  local_1c
; uint             Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_cockpit_ckptutil_c_00617e1e
;   TerminatedCString s_Unable_to_allocate_u_byt_00617e34
;   TerminatedCString s_cockpit_ckptutil_c_00617e6e
;   TerminatedCString s_rb_00617e84
;   TerminatedCString s_art_00617e87
;   TerminatedCString s_Unable_to_open_bitmap_fi_00617e8b
;   TerminatedCString s_cockpit_ckptutil_c_00617eac
;   TerminatedCString s_Unable_to_read_bitmap_fi_00617ec2
;   TerminatedCString s_cockpit_ckptutil_c_00617ee3
;   TerminatedCString s_cockpit_ckptutil_c_00617ef9
;   TerminatedCString s_cockpit_ckptutil_c_00617f0f
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   cockpit_ckptutil.c_applyActPalette_FUN_004319b0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434690
        ;   Label: cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690
    PUSH ESI                            ; 00434691
    PUSH EDI                            ; 00434692
    PUSH EBP                            ; 00434693
    SUB ESP,0x5c                        ; 00434694
    MOV EBP,dword ptr [ESP + 0x7c]      ; 00434697
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043469b
    IMUL EAX,EBP                        ; 0043469f
    MOV EDX,dword ptr [ESP + 0x74]      ; 004346a2
    MOV dword ptr [ESP + 0x50],EAX      ; 004346a6
    TEST EDX,EDX                        ; 004346aa
    JZ 0x004347a5                       ; 004346ac
        ;   XREF to: 004347a5 (CONDITIONAL_JUMP)  ; LAB_004347a5
    PUSH 0x617e84                       ; 004346b2 | = "rb"
        ;   Label: LAB_004346b2
    MOV EDX,dword ptr [ESP + 0x74]      ; 004346b7
    PUSH EDX                            ; 004346bb
    PUSH 0x617e87                       ; 004346bc | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004346c1
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004346c6
    MOV EDI,EAX                         ; 004346c9
    TEST EAX,EAX                        ; 004346cb
    JZ 0x00434805                       ; 004346cd
        ;   XREF to: 00434805 (CONDITIONAL_JUMP)  ; LAB_00434805
    XOR EAX,EAX                         ; 004346d3
        ;   Label: LAB_004346d3
    MOV dword ptr [ESP + 0x54],EAX      ; 004346d5
    TEST EBP,EBP                        ; 004346d9
    JBE 0x00434778                      ; 004346db
        ;   XREF to: 00434778 (CONDITIONAL_JUMP)  ; LAB_00434778
    MOV EDX,dword ptr [ESP + 0x54]      ; 004346e1
        ;   Label: LAB_004346e1
    MOV EAX,EBP                         ; 004346e5
    MOV ESI,dword ptr [ESP + 0x74]      ; 004346e7
    SUB EAX,EDX                         ; 004346eb
    MOV ECX,dword ptr [ESP + 0x78]      ; 004346ed
    DEC EAX                             ; 004346f1
    XOR EBX,EBX                         ; 004346f2
    ADD ESI,EAX                         ; 004346f4
    TEST ECX,ECX                        ; 004346f6
    JBE 0x00434767                      ; 004346f8
        ;   XREF to: 00434767 (CONDITIONAL_JUMP)  ; LAB_00434767
    PUSH EDI                            ; 004346fa
        ;   Label: LAB_004346fa
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004346fb
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00434700
    MOV dword ptr [ESP + 0x58],EAX      ; 00434703
    CMP EAX,-0x1                        ; 00434707
    JNZ 0x00434756                      ; 0043470a
        ;   XREF to: 00434756 (CONDITIONAL_JUMP)  ; LAB_00434756
    MOV EDX,dword ptr [ESP + 0x70]      ; 0043470c
    PUSH EDX                            ; 00434710
    PUSH 0x617ec2                       ; 00434711 | = "Unable to read bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 00434716
    PUSH EAX                            ; 0043471a
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0043471b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00434720
    PUSH 0x7d5                          ; 00434723
    PUSH 0x617ee3                       ; 00434728 | = "..\\cockpit\\ckptutil.c"
    PUSH EDI                            ; 0043472d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0043472e
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    MOV EAX,0x7d6                       ; 00434733
    ADD ESP,0xc                         ; 00434738
    MOV [0x02f0ca4c],EAX                ; 0043473b | g_CurrentLineNumber
    MOV EAX,ESP                         ; 00434740
    MOV ECX,0x617ef9                    ; 00434742 | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 00434747
    MOV dword ptr [0x02f0ca48],ECX      ; 00434748 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043474e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00434753
    MOV AL,byte ptr [ESP + 0x58]        ; 00434756
        ;   Label: LAB_00434756
    INC EBX                             ; 0043475a
    MOV byte ptr [ESI],AL               ; 0043475b
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043475d
    ADD ESI,EBP                         ; 00434761
    CMP EBX,EAX                         ; 00434763
    JC 0x004346fa                       ; 00434765
        ;   XREF to: 004346fa (CONDITIONAL_JUMP)  ; LAB_004346fa
    MOV EDX,dword ptr [ESP + 0x54]      ; 00434767
        ;   Label: LAB_00434767
    INC EDX                             ; 0043476b
    MOV dword ptr [ESP + 0x54],EDX      ; 0043476c
    CMP EBP,EDX                         ; 00434770
    JA 0x004346e1                       ; 00434772
        ;   XREF to: 004346e1 (CONDITIONAL_JUMP)  ; LAB_004346e1
    PUSH 0x7de                          ; 00434778
        ;   Label: LAB_00434778
    PUSH 0x617f0f                       ; 0043477d | = "..\\cockpit\\ckptutil.c"
    PUSH EDI                            ; 00434782
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00434783
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00434788
    CMP dword ptr [ESP + 0x80],0x0      ; 0043478b
    JNZ 0x00434842                      ; 00434793
        ;   XREF to: 00434842 (CONDITIONAL_JUMP)  ; LAB_00434842
    MOV EAX,dword ptr [ESP + 0x74]      ; 00434799
    ADD ESP,0x5c                        ; 0043479d
    POP EBP                             ; 004347a0
    POP EDI                             ; 004347a1
    POP ESI                             ; 004347a2
    POP EBX                             ; 004347a3
    RET                                 ; 004347a4
    PUSH 0x7bd                          ; 004347a5
        ;   Label: LAB_004347a5
    PUSH 0x617e1e                       ; 004347aa | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 004347af
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004347b0
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004347b5
    MOV dword ptr [ESP + 0x74],EAX      ; 004347b8
    TEST EAX,EAX                        ; 004347bc
    JNZ 0x004346b2                      ; 004347be
        ;   XREF to: 004346b2 (CONDITIONAL_JUMP)  ; LAB_004346b2
    MOV EBX,dword ptr [ESP + 0x70]      ; 004347c4
    PUSH EBX                            ; 004347c8
    MOV ESI,dword ptr [ESP + 0x54]      ; 004347c9
    PUSH ESI                            ; 004347cd
    PUSH 0x617e34                       ; 004347ce | = "Unable to allocate %u bytes for rotat..."
    LEA EAX,[ESP + 0xc]                 ; 004347d3
    PUSH EAX                            ; 004347d7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004347d8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x7c0                       ; 004347dd
    ADD ESP,0x10                        ; 004347e2
    MOV [0x02f0ca4c],EAX                ; 004347e5 | g_CurrentLineNumber
    MOV EAX,ESP                         ; 004347ea
    MOV EDI,0x617e6e                    ; 004347ec | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 004347f1
    MOV dword ptr [0x02f0ca48],EDI      ; 004347f2 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004347f8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004347fd
    JMP 0x004346b2                      ; 00434800
        ;   XREF to: 004346b2 (UNCONDITIONAL_JUMP)  ; LAB_004346b2
    MOV ECX,dword ptr [ESP + 0x70]      ; 00434805
        ;   Label: LAB_00434805
    PUSH ECX                            ; 00434809
    PUSH 0x617e8b                       ; 0043480a | = "Unable to open bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 0043480f
    PUSH EAX                            ; 00434813
    MOV EBX,0x617eac                    ; 00434814 | = "..\\cockpit\\ckptutil.c"
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00434819
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0043481e
    MOV EAX,ESP                         ; 00434821
    MOV ESI,0x7c9                       ; 00434823
    PUSH EAX                            ; 00434828
    MOV dword ptr [0x02f0ca48],EBX      ; 00434829 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0043482f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00434835
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043483a
    JMP 0x004346d3                      ; 0043483d
        ;   XREF to: 004346d3 (UNCONDITIONAL_JUMP)  ; LAB_004346d3
    MOV ESI,dword ptr [ESP + 0x84]      ; 00434842
        ;   Label: LAB_00434842
    PUSH ESI                            ; 00434849
    MOV EDI,dword ptr [ESP + 0x54]      ; 0043484a
    PUSH EDI                            ; 0043484e
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0043484f
    PUSH EBP                            ; 00434853
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00434854
    PUSH EAX                            ; 00434858
    CALL cockpit_ckptutil.c_applyActPalette_FUN_004319b0 ; 00434859
        ;   XREF to: 004319b0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_applyActPalette_FUN_004319b0(char * filename, void * bitmap_buffer, int bitmap_size, int palette_index)
    ADD ESP,0x10                        ; 0043485e
    MOV EAX,dword ptr [ESP + 0x74]      ; 00434861
    ADD ESP,0x5c                        ; 00434865
    POP EBP                             ; 00434868
    POP EDI                             ; 00434869
    POP ESI                             ; 0043486a
    POP EBX                             ; 0043486b
    RET                                 ; 0043486c


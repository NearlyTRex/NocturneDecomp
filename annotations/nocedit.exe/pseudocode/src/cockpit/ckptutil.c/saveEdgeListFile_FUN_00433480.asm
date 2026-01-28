; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_ckptutil_c_saveEdgeListFile_FUN_00433480 (char *filename,SEdgeList *edge_lists,int edge_list_count)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; SEdgeList *      Stack[0x8]:4   edge_lists
; int              Stack[0xc]:4   edge_list_count
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_cockpit_ckptutil_c_00617d1a
;   TerminatedCString s_Edge_list_array_is_empty_00617d30
;   TerminatedCString s_wt_00617d4a
;   TerminatedCString s_art_00617d4d
;   TerminatedCString s_Could_not_create_output__00617d51
;   TerminatedCString s_cockpit_ckptutil_c_00617d74
;   TerminatedCString s_d_00617d8a
;   TerminatedCString s_d_00617d8e
;   TerminatedCString s_s_3d_3d_3d_3d_d_00617d92
;   TerminatedCString s_cockpit_ckptutil_c_00617da6
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433480
        ;   Label: cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480
    PUSH ESI                            ; 00433481
    PUSH EDI                            ; 00433482
    PUSH EBP                            ; 00433483
    SUB ESP,0x5c                        ; 00433484
    MOV ESI,dword ptr [ESP + 0x70]      ; 00433487
    MOV EBX,dword ptr [ESP + 0x78]      ; 0043348b
    CMP dword ptr [ESP + 0x74],0x0      ; 0043348f
    JZ 0x00433584                       ; 00433494
        ;   XREF to: 00433584 (CONDITIONAL_JUMP)  ; LAB_00433584
    PUSH 0x617d4a                       ; 0043349a | = "wt"
        ;   Label: LAB_0043349a
    PUSH ESI                            ; 0043349f
    PUSH 0x617d4d                       ; 004334a0 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004334a5
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004334aa
    MOV EDI,EAX                         ; 004334ad
    TEST EAX,EAX                        ; 004334af
    JNZ 0x004334e6                      ; 004334b1
        ;   XREF to: 004334e6 (CONDITIONAL_JUMP)  ; LAB_004334e6
    PUSH ESI                            ; 004334b3
    PUSH 0x617d51                       ; 004334b4 | = "Could not create output file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 004334b9
    PUSH EAX                            ; 004334bd
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004334be
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x507                       ; 004334c3
    ADD ESP,0xc                         ; 004334c8
    MOV [0x02f0ca4c],EAX                ; 004334cb | g_CurrentLineNumber
    MOV EAX,ESP                         ; 004334d0
    MOV EBP,0x617d74                    ; 004334d2 | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 004334d7
    MOV dword ptr [0x02f0ca48],EBP      ; 004334d8 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004334de
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004334e3
    PUSH EBX                            ; 004334e6
        ;   Label: LAB_004334e6
    PUSH 0x617d8a                       ; 004334e7 | = "%d\n"
    PUSH EDI                            ; 004334ec
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004334ed
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 004334f2
    TEST EBX,EBX                        ; 004334f5
    JLE 0x004335ce                      ; 004334f7
        ;   XREF to: 004335ce (CONDITIONAL_JUMP)  ; LAB_004335ce
    MOV EAX,dword ptr [ESP + 0x74]      ; 004334fd
    SHL EBX,0x3                         ; 00433501
    XOR ESI,ESI                         ; 00433504
    MOV dword ptr [ESP + 0x54],EAX      ; 00433506
    MOV dword ptr [ESP + 0x50],EBX      ; 0043350a
    MOV dword ptr [ESP + 0x58],ESI      ; 0043350e
    MOV EAX,dword ptr [ESP + 0x54]      ; 00433512
        ;   Label: LAB_00433512
    MOV EBP,dword ptr [EAX + 0x4]       ; 00433516
    PUSH EBP                            ; 00433519
    PUSH 0x617d8e                       ; 0043351a | = "%d\n"
    PUSH EDI                            ; 0043351f
    XOR EBX,EBX                         ; 00433520
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00433522
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00433527
    XOR ESI,ESI                         ; 0043352a
    MOV EBP,dword ptr [ESP + 0x58]      ; 0043352c
    MOV EAX,dword ptr [ESP + 0x74]      ; 00433530
        ;   Label: LAB_00433530
    ADD EAX,EBP                         ; 00433534
    CMP EBX,dword ptr [EAX + 0x4]       ; 00433536
    JGE 0x004335ac                      ; 00433539
        ;   XREF to: 004335ac (CONDITIONAL_JUMP)  ; LAB_004335ac
    MOV EAX,dword ptr [EAX]             ; 0043353b
    MOV DX,word ptr [ESI + EAX*0x1 + 0x6] ; 0043353d
    MOV ECX,EDX                         ; 00433542
    SHR CX,0xf                          ; 00433544
    ADD EDX,EDX                         ; 00433548
    AND ECX,0xffff                      ; 0043354a
    SAR DX,0x1                          ; 00433550
    PUSH ECX                            ; 00433553
    MOVSX ECX,DX                        ; 00433554
    MOV DX,word ptr [ESI + EAX*0x1 + 0x4] ; 00433557
    PUSH ECX                            ; 0043355c
    MOVSX ECX,DX                        ; 0043355d
    MOV DX,word ptr [ESI + EAX*0x1 + 0x2] ; 00433560
    PUSH ECX                            ; 00433565
    MOVSX ECX,DX                        ; 00433566
    MOV AX,word ptr [ESI + EAX*0x1]     ; 00433569
    PUSH ECX                            ; 0043356d
    CWDE                                ; 0043356e
    PUSH EAX                            ; 0043356f
    PUSH 0x617d92                       ; 00433570 | = "%3d %3d %3d %3d %d\n"
    PUSH EDI                            ; 00433575
    ADD ESI,0x8                         ; 00433576
    INC EBX                             ; 00433579
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0043357a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x1c                        ; 0043357f
    JMP 0x00433530                      ; 00433582
        ;   XREF to: 00433530 (UNCONDITIONAL_JUMP)  ; LAB_00433530
    MOV ECX,0x617d1a                    ; 00433584 | = "..\\cockpit\\ckptutil.c"
        ;   Label: LAB_00433584
    MOV EDI,0x500                       ; 00433589
    PUSH 0x617d30                       ; 0043358e | = "Edge list array is empty!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00433593 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00433599 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043359f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004335a4
    JMP 0x0043349a                      ; 004335a7
        ;   XREF to: 0043349a (UNCONDITIONAL_JUMP)  ; LAB_0043349a
    MOV EDX,dword ptr [ESP + 0x58]      ; 004335ac
        ;   Label: LAB_004335ac
    MOV ECX,dword ptr [ESP + 0x54]      ; 004335b0
    MOV EBX,dword ptr [ESP + 0x50]      ; 004335b4
    ADD EDX,0x8                         ; 004335b8
    ADD ECX,0x8                         ; 004335bb
    MOV dword ptr [ESP + 0x58],EDX      ; 004335be
    MOV dword ptr [ESP + 0x54],ECX      ; 004335c2
    CMP EDX,EBX                         ; 004335c6
    JL 0x00433512                       ; 004335c8
        ;   XREF to: 00433512 (CONDITIONAL_JUMP)  ; LAB_00433512
    PUSH 0x522                          ; 004335ce
        ;   Label: LAB_004335ce
    PUSH 0x617da6                       ; 004335d3 | = "..\\cockpit\\ckptutil.c"
    PUSH EDI                            ; 004335d8
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004335d9
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004335de
    ADD ESP,0x5c                        ; 004335e1
    POP EBP                             ; 004335e4
    POP EDI                             ; 004335e5
    POP ESI                             ; 004335e6
    POP EBX                             ; 004335e7
    RET                                 ; 004335e8


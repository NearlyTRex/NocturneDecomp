; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_texlist.cpp_CTextureList_save_FUN_005dc0d0(CTextureList * this_ptr, char * filename)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined1       Stack[-0x111]:1  local_111
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_core_texlist_cpp_00654f54
;   TerminatedCString s_CTextureList_save_No_ext_00654f68
;   TerminatedCString s_tex_00654f90
;   undefined4 s_tex_00654f91
;   undefined4 s_ex_00654f92
;   undefined4 s_x_00654f93
;   TerminatedCString s_wt_00654f95
;   TerminatedCString s_data_00654f98
;   TerminatedCString s_core_texlist_cpp_00654f9d
;   TerminatedCString s_CTextureList_save_Bad_fi_00654fb1
;   TerminatedCString s_d_00654fd4
;   TerminatedCString s_s_d_00654fd8
;   TerminatedCString s_core_texlist_cpp_00654fdf
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dc0d0
        ;   Label: core_texlist.cpp_CTextureList_save_FUN_005dc0d0
    PUSH ESI                            ; 005dc0d1
    PUSH EDI                            ; 005dc0d2
    PUSH EBP                            ; 005dc0d3
    SUB ESP,0x104                       ; 005dc0d4
    MOV EBP,dword ptr [ESP + 0x118]     ; 005dc0da
    MOV ESI,dword ptr [ESP + 0x11c]     ; 005dc0e1
    MOV EDI,ESP                         ; 005dc0e8
    MOV DL,0x2e                         ; 005dc0ea
    PUSH EDI                            ; 005dc0ec
    MOV AL,byte ptr [ESI]               ; 005dc0ed
        ;   Label: LAB_005dc0ed
    MOV byte ptr [EDI],AL               ; 005dc0ef
    CMP AL,0x0                          ; 005dc0f1
    JZ 0x005dc105                       ; 005dc0f3 | LAB_005dc105
        ;   XREF to: 005dc105 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005dc0f5
    ADD ESI,0x2                         ; 005dc0f8
    MOV byte ptr [EDI + 0x1],AL         ; 005dc0fb
    ADD EDI,0x2                         ; 005dc0fe
    CMP AL,0x0                          ; 005dc101
    JNZ 0x005dc0ed                      ; 005dc103 | LAB_005dc0ed
        ;   XREF to: 005dc0ed (CONDITIONAL_JUMP)
    POP EDI                             ; 005dc105
        ;   Label: LAB_005dc105
    MOV ESI,ESP                         ; 005dc106
    MOV AL,byte ptr [ESI]               ; 005dc108
        ;   Label: LAB_005dc108
    CMP AL,DL                           ; 005dc10a
    JZ 0x005dc120                       ; 005dc10c | LAB_005dc120
        ;   XREF to: 005dc120 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 005dc10e
    JZ 0x005dc11e                       ; 005dc110 | LAB_005dc11e
        ;   XREF to: 005dc11e (CONDITIONAL_JUMP)
    INC ESI                             ; 005dc112
    MOV AL,byte ptr [ESI]               ; 005dc113
    CMP AL,DL                           ; 005dc115
    JZ 0x005dc120                       ; 005dc117 | LAB_005dc120
        ;   XREF to: 005dc120 (CONDITIONAL_JUMP)
    INC ESI                             ; 005dc119
    CMP AL,0x0                          ; 005dc11a
    JNZ 0x005dc108                      ; 005dc11c | LAB_005dc108
        ;   XREF to: 005dc108 (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 005dc11e
        ;   Label: LAB_005dc11e
    MOV EDI,ESI                         ; 005dc120
        ;   Label: LAB_005dc120
    TEST ESI,ESI                        ; 005dc122
    JZ 0x005dc205                       ; 005dc124 | LAB_005dc205
        ;   XREF to: 005dc205 (CONDITIONAL_JUMP)
    MOV ESI,0x654f90                    ; 005dc12a | = ".tex" | s_tex_00654f90 = .tex
        ;   Label: LAB_005dc12a
    PUSH EDI                            ; 005dc12f
    MOV AL,byte ptr [ESI]               ; 005dc130 | = ".tex" | s_tex_00654f90 = .tex
        ;   Label: LAB_005dc130
    MOV byte ptr [EDI],AL               ; 005dc132
    CMP AL,0x0                          ; 005dc134
    JZ 0x005dc148                       ; 005dc136 | LAB_005dc148
        ;   XREF to: 005dc148 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005dc138 | s_tex_00654f91
    ADD ESI,0x2                         ; 005dc13b
    MOV byte ptr [EDI + 0x1],AL         ; 005dc13e
    ADD EDI,0x2                         ; 005dc141
    CMP AL,0x0                          ; 005dc144
    JNZ 0x005dc130                      ; 005dc146 | LAB_005dc130
        ;   XREF to: 005dc130 (CONDITIONAL_JUMP)
    POP EDI                             ; 005dc148
        ;   Label: LAB_005dc148
    PUSH 0x654f95                       ; 005dc149 | = "wt" | s_wt_00654f95 = wt
    LEA EAX,[ESP + 0x4]                 ; 005dc14e
    PUSH EAX                            ; 005dc152
    PUSH 0x654f98                       ; 005dc153 | = "data" | s_data_00654f98 = data
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 005dc158 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005dc15d
    MOV dword ptr [ESP + 0x100],EAX     ; 005dc160
    TEST EAX,EAX                        ; 005dc167
    JNZ 0x005dc18e                      ; 005dc169 | LAB_005dc18e
        ;   XREF to: 005dc18e (CONDITIONAL_JUMP)
    MOV EBX,0x654f9d                    ; 005dc16b | = "..\\core\\texlist.cpp" | s_core_texlist_cpp_00654f9d = ..\core\texlist.cpp
    MOV ESI,0xb6                        ; 005dc170
    PUSH 0x654fb1                       ; 005dc175 | = "CTextureList::save - Bad filename!" | s_CTextureList_save_Bad_fi_00654fb1 = CTextureList::save - Bad filename!
    MOV dword ptr [0x02f0ca48],EBX      ; 005dc17a | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005dc180 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005dc186 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005dc18b
    MOV EDI,dword ptr [EBP]             ; 005dc18e
        ;   Label: LAB_005dc18e
    PUSH EDI                            ; 005dc191
    PUSH 0x654fd4                       ; 005dc192 | = "%d\n" | s_d_00654fd4 = %d

    MOV EAX,dword ptr [ESP + 0x108]     ; 005dc197
    PUSH EAX                            ; 005dc19e
    XOR EDI,EDI                         ; 005dc19f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005dc1a1 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBP]             ; 005dc1a6
    ADD ESP,0xc                         ; 005dc1a9
    TEST EDX,EDX                        ; 005dc1ac
    JLE 0x005dc1e0                      ; 005dc1ae | LAB_005dc1e0
        ;   XREF to: 005dc1e0 (CONDITIONAL_JUMP)
    LEA ESI,[EBP + 0xc]                 ; 005dc1b0
    MOV EBX,EBP                         ; 005dc1b3
    MOV ECX,dword ptr [EBX + 0x5dc4]    ; 005dc1b5
        ;   Label: LAB_005dc1b5
    PUSH ECX                            ; 005dc1bb
    PUSH ESI                            ; 005dc1bc
    PUSH 0x654fd8                       ; 005dc1bd | = "%s,%d\n" | s_s_d_00654fd8 = %s,%d

    MOV EAX,dword ptr [ESP + 0x10c]     ; 005dc1c2
    ADD EBX,0x4                         ; 005dc1c9
    PUSH EAX                            ; 005dc1cc
    INC EDI                             ; 005dc1cd
    ADD ESI,0x18                        ; 005dc1ce
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005dc1d1 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBP]             ; 005dc1d6
    ADD ESP,0x10                        ; 005dc1d9
    CMP EDI,EDX                         ; 005dc1dc
    JL 0x005dc1b5                       ; 005dc1de | LAB_005dc1b5
        ;   XREF to: 005dc1b5 (CONDITIONAL_JUMP)
    PUSH 0xc3                           ; 005dc1e0
        ;   Label: LAB_005dc1e0
    PUSH 0x654fdf                       ; 005dc1e5 | = "..\\core\\texlist.cpp" | s_core_texlist_cpp_00654fdf = ..\core\texlist.cpp
    MOV ECX,dword ptr [ESP + 0x108]     ; 005dc1ea
    PUSH ECX                            ; 005dc1f1
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005dc1f2 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005dc1f7
    ADD ESP,0x104                       ; 005dc1fa
    POP EBP                             ; 005dc200
    POP EDI                             ; 005dc201
    POP ESI                             ; 005dc202
    POP EBX                             ; 005dc203
    RET                                 ; 005dc204
    MOV EDX,0x654f54                    ; 005dc205 | = "..\\core\\texlist.cpp" | s_core_texlist_cpp_00654f54 = ..\core\texlist.cpp
        ;   Label: LAB_005dc205
    MOV ECX,0xad                        ; 005dc20a
    PUSH 0x654f68                       ; 005dc20f | = "CTextureList::save - No extension found" | s_CTextureList_save_No_ext_00654f68 = CTextureList::save - No extension found
    MOV dword ptr [0x02f0ca48],EDX      ; 005dc214 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005dc21a | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005dc220 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005dc225
    JMP 0x005dc12a                      ; 005dc228 | LAB_005dc12a
        ;   XREF to: 005dc12a (UNCONDITIONAL_JUMP)


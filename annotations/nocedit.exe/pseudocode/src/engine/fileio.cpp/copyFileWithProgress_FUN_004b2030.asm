; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * engine_fileio.cpp_copyFileWithProgress_FUN_004b2030(FILE * source_file, FILE * dest_file, char * source_filename, char * dest_filename, int file_size_bytes)
;
; Parameters:
; FILE *           Stack[0x4]:4   source_file
; FILE *           Stack[0x8]:4   dest_file
; char *           Stack[0xc]:4   source_filename
; char *           Stack[0x10]:4   dest_filename
; int              Stack[0x14]:4   file_size_bytes
; Local Variables:
; undefined4       Stack[-0x210]:4  local_210
; undefined4       Stack[-0x20c]:4  local_20c
; undefined1       Stack[-0x208]:1  local_208
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b486c
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb93f
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b9cb7
;   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 at 004b3482
;
; Referenced Globals:
;   TerminatedCString s_s_006260e7
;   TerminatedCString s_Copying_s_s_d_bytes_006260eb
;   TerminatedCString s_Error_reading_s_00626107
;   string s_Error_writing_%s_00626118
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;   char[1024] g_FileTransferErrorMessage
;   undefined4 DAT_02d0a591
;   undefined4 DAT_02d0a592
;   undefined4 DAT_02d0a593
;   char[32768] g_FileTransferBuffer
;
; Called Functions:
;   crt_errno.c_errno_FUN_00601450
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fwrite_FUN_005fdc00
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_strerror_FUN_00601470
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2030
        ;   Label: engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
    PUSH ESI                            ; 004b2031
    PUSH EDI                            ; 004b2032
    PUSH EBP                            ; 004b2033
    SUB ESP,0x1f8                       ; 004b2034
    MOV EDI,dword ptr [ESP + 0x21c]     ; 004b203a
    XOR AH,AH                           ; 004b2041
    XOR EBP,EBP                         ; 004b2043
    MOV byte ptr [0x02d0a590],AH        ; 004b2045 | char[1024] g_FileTransferErrorMessage
    CMP EDI,0xc800                      ; 004b204b
    JG 0x004b211b                       ; 004b2051 | LAB_004b211b
        ;   XREF to: 004b211b (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 004b2057
        ;   Label: LAB_004b2057
    TEST EDI,EDI                        ; 004b2059
    JLE 0x004b20ee                      ; 004b205b | LAB_004b20ee
        ;   XREF to: 004b20ee (CONDITIONAL_JUMP)
    MOV EBX,EDI                         ; 004b2061
        ;   Label: LAB_004b2061
    SUB EBX,ESI                         ; 004b2063
    CMP EBX,0x8000                      ; 004b2065
    JLE 0x004b2072                      ; 004b206b | LAB_004b2072
        ;   XREF to: 004b2072 (CONDITIONAL_JUMP)
    MOV EBX,0x8000                      ; 004b206d
    MOV EAX,dword ptr [ESP + 0x20c]     ; 004b2072
        ;   Label: LAB_004b2072
    PUSH EAX                            ; 004b2079
    PUSH EBX                            ; 004b207a
    PUSH 0x1                            ; 004b207b
    PUSH 0x2d0a990                      ; 004b207d | char[32768] g_FileTransferBuffer
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004b2082 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b2087
    CMP EAX,EBX                         ; 004b208a
    JZ 0x004b215a                       ; 004b208c | LAB_004b215a
        ;   XREF to: 004b215a (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x214]     ; 004b2092
    PUSH EDI                            ; 004b2099
    PUSH 0x626107                       ; 004b209a | = "Error reading %s" | s_Error_reading_s_00626107 = Error reading %s
    PUSH 0x2d0a590                      ; 004b209f | char[1024] g_FileTransferErrorMessage
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b20a4 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b20a9
    CALL crt_errno.c_errno_FUN_00601450 ; 004b20ac | undefined crt_errno.c_errno_FUN_00601450()
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EAX]             ; 004b20b1
    PUSH EDX                            ; 004b20b3
    CALL crt_string.c_strerror_FUN_00601470 ; 004b20b4 | char * crt_string.c_strerror_FUN_00601470(int errnum)
        ;   Label: LAB_004b20b4
        ;   XREF to: 00601470 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b20b9
    TEST EAX,EAX                        ; 004b20bc
    JZ 0x004b20ee                       ; 004b20be | LAB_004b20ee
        ;   XREF to: 004b20ee (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004b20c0
    PUSH 0x6260e7                       ; 004b20c1 | = "\n%s" | s_s_006260e7 =
        ; %s
    MOV ESI,0x2d0a590                   ; 004b20c6 | char[1024] g_FileTransferErrorMessage
    XOR DL,DL                           ; 004b20cb
    MOV AL,byte ptr [ESI]               ; 004b20cd | char[1024] g_FileTransferErrorMessage
        ;   Label: LAB_004b20cd
    CMP AL,DL                           ; 004b20cf
    JZ 0x004b20e5                       ; 004b20d1 | LAB_004b20e5
        ;   XREF to: 004b20e5 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 004b20d3
    JZ 0x004b20e3                       ; 004b20d5 | LAB_004b20e3
        ;   XREF to: 004b20e3 (CONDITIONAL_JUMP)
    INC ESI                             ; 004b20d7
    MOV AL,byte ptr [ESI]               ; 004b20d8 | DAT_02d0a591
    CMP AL,DL                           ; 004b20da
    JZ 0x004b20e5                       ; 004b20dc | LAB_004b20e5
        ;   XREF to: 004b20e5 (CONDITIONAL_JUMP)
    INC ESI                             ; 004b20de
    CMP AL,0x0                          ; 004b20df
    JNZ 0x004b20cd                      ; 004b20e1 | LAB_004b20cd
        ;   XREF to: 004b20cd (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 004b20e3
        ;   Label: LAB_004b20e3
    PUSH ESI                            ; 004b20e5 | DAT_02d0a591 | g_FileTransferErrorMessage
        ;   Label: LAB_004b20e5
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b20e6 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b20eb
    TEST EBP,EBP                        ; 004b20ee
        ;   Label: LAB_004b20ee
    JZ 0x004b2101                       ; 004b20f0 | LAB_004b2101
        ;   XREF to: 004b2101 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x00678a60]      ; 004b20f2 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 004b20f8 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 004b20f9 | void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b20fe
    CMP byte ptr [0x02d0a590],0x0       ; 004b2101 | char[1024] g_FileTransferErrorMessage
        ;   Label: LAB_004b2101
    JNZ 0x004b21e7                      ; 004b2108 | LAB_004b21e7
        ;   XREF to: 004b21e7 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004b210e
    ADD ESP,0x1f8                       ; 004b2110
    POP EBP                             ; 004b2116
    POP EDI                             ; 004b2117
    POP ESI                             ; 004b2118
    POP EBX                             ; 004b2119
    RET                                 ; 004b211a
    PUSH EDI                            ; 004b211b
        ;   Label: LAB_004b211b
    MOV EDX,dword ptr [ESP + 0x21c]     ; 004b211c
    PUSH EDX                            ; 004b2123
    MOV ECX,dword ptr [ESP + 0x21c]     ; 004b2124
    PUSH ECX                            ; 004b212b
    PUSH 0x6260eb                       ; 004b212c | = "Copying %s -> %s (%d bytes)" | s_Copying_s_s_d_bytes_006260eb = Copying %s -> %s (%d bytes)
    LEA EAX,[ESP + 0x10]                ; 004b2131
    PUSH EAX                            ; 004b2135
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b2136 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b213b
    MOV EAX,ESP                         ; 004b213e
    PUSH EAX                            ; 004b2140
    MOV EBX,dword ptr [0x00678a60]      ; 004b2141 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 004b2147 | CEditorTools g_CEditorToolsPtr
    MOV EBP,0x1                         ; 004b2148
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 004b214d | void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b2152
    JMP 0x004b2057                      ; 004b2155 | LAB_004b2057
        ;   XREF to: 004b2057 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x210]     ; 004b215a
        ;   Label: LAB_004b215a
    PUSH EDX                            ; 004b2161
    PUSH EBX                            ; 004b2162
    PUSH 0x1                            ; 004b2163
    PUSH 0x2d0a990                      ; 004b2165 | char[32768] g_FileTransferBuffer
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004b216a | SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004b216f
    CMP EAX,EBX                         ; 004b2172
    JNZ 0x004b21c0                      ; 004b2174 | LAB_004b21c0
        ;   XREF to: 004b21c0 (CONDITIONAL_JUMP)
    ADD ESI,EBX                         ; 004b2176
    TEST EBP,EBP                        ; 004b2178
    JZ 0x004b21b3                       ; 004b217a | LAB_004b21b3
        ;   XREF to: 004b21b3 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x1f4],EDI     ; 004b217c
    FILD dword ptr [ESP + 0x1f4]        ; 004b2183
    SUB ESP,0x4                         ; 004b218a
    MOV dword ptr [ESP + 0x1f8],ESI     ; 004b218d
    FSTP float ptr [ESP]                ; 004b2194
    FILD dword ptr [ESP + 0x1f8]        ; 004b2197
    SUB ESP,0x4                         ; 004b219e
    MOV ECX,dword ptr [0x00678a60]      ; 004b21a1 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 004b21a7
    PUSH ECX                            ; 004b21aa | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 004b21ab | void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b21b0
    CMP ESI,EDI                         ; 004b21b3
        ;   Label: LAB_004b21b3
    JL 0x004b2061                       ; 004b21b5 | LAB_004b2061
        ;   XREF to: 004b2061 (CONDITIONAL_JUMP)
    JMP 0x004b20ee                      ; 004b21bb | LAB_004b20ee
        ;   XREF to: 004b20ee (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x218]     ; 004b21c0
        ;   Label: LAB_004b21c0
    PUSH EBX                            ; 004b21c7
    PUSH 0x626118                       ; 004b21c8 | = "Error writing %s" | s_Error_writing_%s_00626118 = Error writing %s
    PUSH 0x2d0a590                      ; 004b21cd | char[1024] g_FileTransferErrorMessage
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b21d2 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004b21d7
    CALL crt_errno.c_errno_FUN_00601450 ; 004b21da | undefined crt_errno.c_errno_FUN_00601450()
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EAX]             ; 004b21df
    PUSH ESI                            ; 004b21e1
    JMP 0x004b20b4                      ; 004b21e2 | LAB_004b20b4
        ;   XREF to: 004b20b4 (UNCONDITIONAL_JUMP)
    MOV EAX,0x2d0a590                   ; 004b21e7 | char[1024] g_FileTransferErrorMessage
        ;   Label: LAB_004b21e7
    ADD ESP,0x1f8                       ; 004b21ec
    POP EBP                             ; 004b21f2
    POP EDI                             ; 004b21f3
    POP ESI                             ; 004b21f4
    POP EBX                             ; 004b21f5
    RET                                 ; 004b21f6


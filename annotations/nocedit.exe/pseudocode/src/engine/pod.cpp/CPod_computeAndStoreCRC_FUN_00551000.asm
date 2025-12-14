; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000(CPod * this_ptr, char * pod_filename)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
; Local Variables:
; undefined4       Stack[-0x44c]:4  local_44c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b6a2c
;   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 at 004bd6ea
;
; Referenced Globals:
;   char s_EmptyString_0064015e = \x00
;   TerminatedCString s_engine_pod_cpp_0064015f
;   TerminatedCString s_rb_00640171
;   TerminatedCString s_engine_pod_cpp_00640174
;   TerminatedCString s_Computing_CRC_over_entir_00640788
;   TerminatedCString s_engine_pod_cpp_006407ad
;   TerminatedCString s_Can_t_mount_s_to_check_v_006407bf
;   TerminatedCString s_engine_pod_cpp_006407df
;   TerminatedCString s_Invalid_pod_version_for__006407f1
;   TerminatedCString s_engine_pod_cpp_00640810
;   TerminatedCString s_rb_00640822
;   TerminatedCString s_engine_pod_cpp_00640826
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;   char* g_CurrentFilename
;   ... and 4 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_stdio.c_fwrite_FUN_005fdc00
;   engine_dosio.c_getFileSize_FUN_00481880
;   engine_pod.cpp_CPodFile_cleanup_FUN_00550090
;   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
;   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
;   engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551000
        ;   Label: engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000
    PUSH ESI                            ; 00551001
    PUSH EDI                            ; 00551002
    PUSH EBP                            ; 00551003
    SUB ESP,0x43c                       ; 00551004
    MOV EDX,dword ptr [ESP + 0x454]     ; 0055100a
    PUSH EDX                            ; 00551011
    PUSH 0x640788                       ; 00551012 | = "Computing CRC over entire pod: %s..."
    MOV ECX,dword ptr [0x00678a60]      ; 00551017 | g_CEditorToolsPtr
    PUSH ECX                            ; 0055101d | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0055101e
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 00551023
    MOV EAX,ESP                         ; 00551026
    PUSH EAX                            ; 00551028
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 00551029
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 0055102e
    MOV EBX,dword ptr [ESP + 0x454]     ; 00551031
    PUSH EBX                            ; 00551038
    LEA EAX,[ESP + 0x4]                 ; 00551039
    PUSH EAX                            ; 0055103d
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 0055103e
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 00551043
    TEST EAX,EAX                        ; 00551046
    JNZ 0x0055106e                      ; 00551048
        ;   XREF to: 0055106e (CONDITIONAL_JUMP)  ; LAB_0055106e
    PUSH EBX                            ; 0055104a
    MOV ESI,0x6407ad                    ; 0055104b | = "..\\engine\\pod.cpp"
    MOV EDI,0x49d                       ; 00551050
    PUSH 0x6407bf                       ; 00551055 | = "Can't mount %s to check version"
    MOV dword ptr [0x02f0ca48],ESI      ; 0055105a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00551060 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00551066
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0055106b
    MOV EAX,ESP                         ; 0055106e
        ;   Label: LAB_0055106e
    PUSH EAX                            ; 00551070
    MOV EBX,dword ptr [ESP + 0x4]       ; 00551071
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_00550090 ; 00551075
        ;   XREF to: 00550090 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_00550090(CPodFile * this_ptr)
    MOV EAX,0xffffffff                  ; 0055107a
    ADD ESP,0x4                         ; 0055107f
    MOV dword ptr [ESP + 0x434],EAX     ; 00551082
    CMP EBX,0x1                         ; 00551089
    JNZ 0x0055122c                      ; 0055108c
        ;   XREF to: 0055122c (CONDITIONAL_JUMP)  ; LAB_0055122c
    MOV dword ptr [ESP + 0x434],0x54    ; 00551092
    MOV EBP,dword ptr [ESP + 0x454]     ; 0055109d
        ;   Label: LAB_0055109d
    PUSH EBP                            ; 005510a4
    PUSH 0x64015e                       ; 005510a5 | s_EmptyString_0064015e
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005510aa
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 005510af
    PUSH 0xf2                           ; 005510b2
    PUSH 0x64015f                       ; 005510b7 | = "..\\engine\\pod.cpp"
    PUSH 0x640171                       ; 005510bc | = "rb"
    PUSH 0x0                            ; 005510c1
    MOV EBX,EAX                         ; 005510c3
    MOV EDX,dword ptr [ESP + 0x444]     ; 005510c5
    PUSH EBP                            ; 005510cc
    SUB EBX,EDX                         ; 005510cd
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005510cf
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 005510d4
    PUSH 0x0                            ; 005510d7
    MOV ESI,dword ptr [ESP + 0x438]     ; 005510d9
    PUSH ESI                            ; 005510e0
    MOV EDI,EBX                         ; 005510e1
    MOV EBP,EAX                         ; 005510e3
    PUSH EAX                            ; 005510e5
    MOV dword ptr [ESP + 0x43c],EAX     ; 005510e6
    MOV ESI,0xffffffff                  ; 005510ed
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 005510f2
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 005510f7
    CMP EBX,0x10000                     ; 005510fa
    JL 0x00551148                       ; 00551100
        ;   XREF to: 00551148 (CONDITIONAL_JUMP)  ; LAB_00551148
    PUSH EBP                            ; 00551102
        ;   Label: LAB_00551102
    PUSH 0x1                            ; 00551103
    PUSH 0x10000                        ; 00551105
    PUSH 0x30d5090                      ; 0055110a | g_FileIOBuffer
    MOV EBX,0x30d5090                   ; 0055110f | g_FileIOBuffer
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00551114
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00551119
    MOV EAX,ESI                         ; 0055111c
    XOR ESI,ESI                         ; 0055111e
    XOR EDX,EDX                         ; 00551120
        ;   Label: LAB_00551120
    MOV DL,byte ptr [EBX]               ; 00551122 | g_FileIOBuffer | DAT_030d5091
    PUSH EDX                            ; 00551124
    PUSH EAX                            ; 00551125
    INC EBX                             ; 00551126 | DAT_030d5091 | DAT_030d5092
    INC ESI                             ; 00551127
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0 ; 00551128
        ;   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 0055112d
    CMP ESI,0x10000                     ; 00551130
    JC 0x00551120                       ; 00551136
        ;   XREF to: 00551120 (CONDITIONAL_JUMP)  ; LAB_00551120
    SUB EDI,0x10000                     ; 00551138
    MOV ESI,EAX                         ; 0055113e
    CMP EDI,0x10000                     ; 00551140
    JGE 0x00551102                      ; 00551146
        ;   XREF to: 00551102 (CONDITIONAL_JUMP)  ; LAB_00551102
    PUSH EBP                            ; 00551148
        ;   Label: LAB_00551148
    PUSH 0x1                            ; 00551149
    PUSH EDI                            ; 0055114b
    PUSH 0x30d5090                      ; 0055114c | g_FileIOBuffer
    MOV EBX,0x30d5090                   ; 00551151 | g_FileIOBuffer
    MOV EBP,ESI                         ; 00551156
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00551158
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0055115d
    XOR ESI,ESI                         ; 00551160
    MOV dword ptr [ESP + 0x438],EDI     ; 00551162
    TEST EDI,EDI                        ; 00551169
    JBE 0x00551190                      ; 0055116b
        ;   XREF to: 00551190 (CONDITIONAL_JUMP)  ; LAB_00551190
    MOV EDI,dword ptr [ESP + 0x438]     ; 0055116d
    XOR EAX,EAX                         ; 00551174
        ;   Label: LAB_00551174
    MOV AL,byte ptr [EBX]               ; 00551176 | g_FileIOBuffer | DAT_030d5091
    PUSH EAX                            ; 00551178
    PUSH EBP                            ; 00551179
    INC EBX                             ; 0055117a | DAT_030d5091 | DAT_030d5092
    INC ESI                             ; 0055117b
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0 ; 0055117c
        ;   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 00551181
    MOV EBP,EAX                         ; 00551184
    CMP ESI,EDI                         ; 00551186
    JC 0x00551174                       ; 00551188
        ;   XREF to: 00551174 (CONDITIONAL_JUMP)  ; LAB_00551174
    LEA EAX,[EAX]                       ; 0055118a
    PUSH 0xfb                           ; 00551190
        ;   Label: LAB_00551190
    PUSH 0x640174                       ; 00551195 | = "..\\engine\\pod.cpp"
    MOV EAX,dword ptr [ESP + 0x438]     ; 0055119a
    PUSH EAX                            ; 005511a1
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005511a2
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005511a7
    PUSH 0x4b8                          ; 005511aa
    PUSH 0x640810                       ; 005511af | = "..\\engine\\pod.cpp"
    PUSH 0x640822                       ; 005511b4 | = "rb+"
    PUSH 0x0                            ; 005511b9
    MOV EDX,dword ptr [ESP + 0x464]     ; 005511bb
    PUSH EDX                            ; 005511c2
    MOV dword ptr [ESP + 0x440],EBP     ; 005511c3
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005511ca
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 005511cf
    MOV EBX,EAX                         ; 005511d2
    MOV EAX,dword ptr [ESP + 0x434]     ; 005511d4
    PUSH 0x0                            ; 005511db
    SUB EAX,0x4                         ; 005511dd
    PUSH EAX                            ; 005511e0
    PUSH EBX                            ; 005511e1
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 005511e2
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 005511e7
    PUSH EBX                            ; 005511ea
    PUSH 0x1                            ; 005511eb
    PUSH 0x4                            ; 005511ed
    LEA EAX,[ESP + 0x438]               ; 005511ef
    PUSH EAX                            ; 005511f6
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 005511f7
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 005511fc
    PUSH 0x4bb                          ; 005511ff
    PUSH 0x640826                       ; 00551204 | = "..\\engine\\pod.cpp"
    PUSH EBX                            ; 00551209
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0055120a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0055120f
    PUSH 0x0                            ; 00551212
        ;   Label: LAB_00551212
    LEA EAX,[ESP + 0x4]                 ; 00551214
    PUSH EAX                            ; 00551218
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 00551219
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr)
    ADD ESP,0x8                         ; 0055121e
    ADD ESP,0x43c                       ; 00551221
    POP EBP                             ; 00551227
    POP EDI                             ; 00551228
    POP ESI                             ; 00551229
    POP EBX                             ; 0055122a
    RET                                 ; 0055122b
    CMP EBX,0xc8                        ; 0055122c
        ;   Label: LAB_0055122c
    JNZ 0x00551244                      ; 00551232
        ;   XREF to: 00551244 (CONDITIONAL_JUMP)  ; LAB_00551244
    MOV dword ptr [ESP + 0x434],0x8     ; 00551234
    JMP 0x0055109d                      ; 0055123f
        ;   XREF to: 0055109d (UNCONDITIONAL_JUMP)  ; LAB_0055109d
    CMP EBX,0x64                        ; 00551244
        ;   Label: LAB_00551244
    JZ 0x00551212                       ; 00551247
        ;   XREF to: 00551212 (CONDITIONAL_JUMP)  ; LAB_00551212
    PUSH EBX                            ; 00551249
    MOV EBX,dword ptr [ESP + 0x458]     ; 0055124a
    PUSH EBX                            ; 00551251
    MOV EDX,0x6407df                    ; 00551252 | = "..\\engine\\pod.cpp"
    MOV ECX,0x4ae                       ; 00551257
    PUSH 0x6407f1                       ; 0055125c | = "Invalid pod version for %s: %d"
    MOV dword ptr [0x02f0ca48],EDX      ; 00551261 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00551267 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0055126d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00551272
    JMP 0x0055109d                      ; 00551275
        ;   XREF to: 0055109d (UNCONDITIONAL_JUMP)  ; LAB_0055109d


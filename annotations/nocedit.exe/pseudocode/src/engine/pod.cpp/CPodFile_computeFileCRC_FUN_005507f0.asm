; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint __cdecl engine_pod_cpp_CPodFile_computeFileCRC_FUN_005507f0(CPodFile *this_ptr,int file_index)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   file_index
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b5d5f
;   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 at 005504a9
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_006405fc
;   TerminatedCString s_CPodFile_computeOneFileC_0064060e
;   TerminatedCString s_engine_pod_cpp_0064063a
;   TerminatedCString s_rb_0064064c
;   TerminatedCString s_engine_pod_cpp_0064064f
;   TerminatedCString s_CPodFile_computeOneFileC_00640661
;   TerminatedCString s_engine_pod_cpp_0064068d
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   char[65536] g_FileIOBuffer
;   undefined4 DAT_030d5091
;   undefined4 DAT_030d5092
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005507f0
        ;   Label: engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0
    PUSH ESI                            ; 005507f1
    PUSH EDI                            ; 005507f2
    PUSH EBP                            ; 005507f3
    SUB ESP,0xc                         ; 005507f4
    MOV EBX,dword ptr [ESP + 0x20]      ; 005507f7
    MOV EDI,dword ptr [ESP + 0x24]      ; 005507fb
    TEST EDI,EDI                        ; 005507ff
    JL 0x0055080b                       ; 00550801
        ;   XREF to: 0055080b (CONDITIONAL_JUMP)  ; LAB_0055080b
    CMP EDI,dword ptr [EBX + 0x410]     ; 00550803
    JL 0x0055082e                       ; 00550809
        ;   XREF to: 0055082e (CONDITIONAL_JUMP)  ; LAB_0055082e
    MOV ECX,0x6405fc                    ; 0055080b | = "..\\engine\\pod.cpp"
        ;   Label: LAB_0055080b
    MOV ESI,0x354                       ; 00550810
    PUSH 0x64060e                       ; 00550815 | = "CPodFile::computeOneFileCRC - invalid..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0055081a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00550820 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00550826
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0055082b
    PUSH 0x358                          ; 0055082e
        ;   Label: LAB_0055082e
    PUSH 0x64063a                       ; 00550833 | = "..\\engine\\pod.cpp"
    PUSH 0x64064c                       ; 00550838 | = "rb"
    PUSH 0x0                            ; 0055083d
    LEA ESI,[EBX + 0x4]                 ; 0055083f
    PUSH ESI                            ; 00550842
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00550843
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00550848
    MOV dword ptr [ESP],EAX             ; 0055084b
    TEST EAX,EAX                        ; 0055084e
    JNZ 0x00550875                      ; 00550850
        ;   XREF to: 00550875 (CONDITIONAL_JUMP)  ; LAB_00550875
    PUSH ESI                            ; 00550852
    MOV EBP,0x64064f                    ; 00550853 | = "..\\engine\\pod.cpp"
    MOV EAX,0x359                       ; 00550858
    PUSH 0x640661                       ; 0055085d | = "CPodFile::computeOneFileCRC - can't o..."
    MOV dword ptr [0x02f0ca48],EBP      ; 00550862 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00550868 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0055086d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00550872
    LEA ESI,[EDI*0x4 + 0x0]             ; 00550875
        ;   Label: LAB_00550875
    ADD ESI,EDI                         ; 0055087c
    MOV EAX,dword ptr [EBX + 0x414]     ; 0055087e
    SHL ESI,0x2                         ; 00550884
    PUSH 0x0                            ; 00550887
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x8] ; 00550889
    PUSH EDX                            ; 0055088d
    MOV ECX,dword ptr [ESP + 0x8]       ; 0055088e
    PUSH ECX                            ; 00550892
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 00550893
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
    MOV EAX,dword ptr [EBX + 0x414]     ; 00550898
    ADD ESP,0xc                         ; 0055089e
    ADD ESI,EAX                         ; 005508a1
    MOV EBP,0xffffffff                  ; 005508a3
    MOV EAX,dword ptr [ESP]             ; 005508a8
    MOV EDI,dword ptr [ESI + 0x4]       ; 005508ab
    MOV dword ptr [ESP + 0x8],EAX       ; 005508ae
    CMP EDI,0x10000                     ; 005508b2
    JL 0x00550904                       ; 005508b8
        ;   XREF to: 00550904 (CONDITIONAL_JUMP)  ; LAB_00550904
    MOV EBX,dword ptr [ESP + 0x8]       ; 005508ba
        ;   Label: LAB_005508ba
    PUSH EBX                            ; 005508be
    PUSH 0x1                            ; 005508bf
    PUSH 0x10000                        ; 005508c1
    PUSH 0x30d5090                      ; 005508c6 | g_FileIOBuffer
    MOV ESI,0x30d5090                   ; 005508cb | g_FileIOBuffer
    XOR EBX,EBX                         ; 005508d0
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005508d2
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 005508d7
    MOV EAX,EBP                         ; 005508da
    XOR EDX,EDX                         ; 005508dc
        ;   Label: LAB_005508dc
    MOV DL,byte ptr [ESI]               ; 005508de | g_FileIOBuffer | DAT_030d5091
    PUSH EDX                            ; 005508e0
    PUSH EAX                            ; 005508e1
    INC ESI                             ; 005508e2
    INC EBX                             ; 005508e3
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0 ; 005508e4
        ;   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 005508e9
    CMP EBX,0x10000                     ; 005508ec
    JC 0x005508dc                       ; 005508f2
        ;   XREF to: 005508dc (CONDITIONAL_JUMP)  ; LAB_005508dc
    SUB EDI,0x10000                     ; 005508f4
    MOV EBP,EAX                         ; 005508fa
    CMP EDI,0x10000                     ; 005508fc
    JGE 0x005508ba                      ; 00550902
        ;   XREF to: 005508ba (CONDITIONAL_JUMP)  ; LAB_005508ba
    MOV ESI,dword ptr [ESP + 0x8]       ; 00550904
        ;   Label: LAB_00550904
    PUSH ESI                            ; 00550908
    PUSH 0x1                            ; 00550909
    PUSH EDI                            ; 0055090b
    PUSH 0x30d5090                      ; 0055090c | g_FileIOBuffer
    MOV EBX,0x30d5090                   ; 00550911 | g_FileIOBuffer
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00550916
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 0055091b
    XOR ESI,ESI                         ; 0055091e
    MOV dword ptr [ESP + 0x4],EDI       ; 00550920
    TEST EDI,EDI                        ; 00550924
    JBE 0x00550950                      ; 00550926
        ;   XREF to: 00550950 (CONDITIONAL_JUMP)  ; LAB_00550950
    MOV EDI,dword ptr [ESP + 0x4]       ; 00550928
    XOR EAX,EAX                         ; 0055092c
        ;   Label: LAB_0055092c
    MOV AL,byte ptr [EBX]               ; 0055092e | g_FileIOBuffer | DAT_030d5091
    PUSH EAX                            ; 00550930
    PUSH EBP                            ; 00550931
    INC EBX                             ; 00550932 | DAT_030d5091 | DAT_030d5092
    INC ESI                             ; 00550933
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0 ; 00550934
        ;   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 00550939
    MOV EBP,EAX                         ; 0055093c
    CMP ESI,EDI                         ; 0055093e
    JC 0x0055092c                       ; 00550940
        ;   XREF to: 0055092c (CONDITIONAL_JUMP)  ; LAB_0055092c
    LEA EAX,[EAX]                       ; 00550942
    LEA EDX,[EDX]                       ; 00550948
    MOV EAX,EAX                         ; 0055094e
    PUSH 0x365                          ; 00550950
        ;   Label: LAB_00550950
    PUSH 0x64068d                       ; 00550955 | = "..\\engine\\pod.cpp"
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055095a
    PUSH EAX                            ; 0055095e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0055095f
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00550964
    MOV EAX,EBP                         ; 00550967
    ADD ESP,0xc                         ; 00550969
    POP EBP                             ; 0055096c
    POP EDI                             ; 0055096d
    POP ESI                             ; 0055096e
    POP EBX                             ; 0055096f
    RET                                 ; 00550970


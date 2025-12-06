; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(CFileManager * this_ptr, CStrList * pod_list)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; CStrList *       Stack[0x8]:4   pod_list
; Local Variables:
; undefined1       Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[6]:
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb4ae
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004bae4f
;   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 at 004b713c
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b87e8
;   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 at 004bcf14
;   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 at 004bc375
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_00628cbc
;   TerminatedCString s_rt_00628cd1
;   TerminatedCString s_pod_ini_00628cd4
;   TerminatedCString s_d_00628cdc
;   TerminatedCString s_engine_fileio_cpp_00628ce0
;   TerminatedCString s_Error_parsing_POD_INI_00628cf5
;   TerminatedCString s_s_00628d0b
;   TerminatedCString s_engine_fileio_cpp_00628d0f
;   TerminatedCString s_Error_parsing_POD_INI_00628d24
;   TerminatedCString s_engine_fileio_cpp_00628d3a
;   char[260] g_FilenameBufferTemplate
;   undefined4 DAT_0067a15c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ba4f0
        ;   Label: engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
    SUB ESP,0x108                       ; 004ba4f1
    PUSH 0xe7c                          ; 004ba4f7
    PUSH 0x628cbc                       ; 004ba4fc | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00628cbc = ..\engine\fileio.cpp
    PUSH 0x628cd1                       ; 004ba501 | = "rt" | s_rt_00628cd1 = rt
    PUSH 0x0                            ; 004ba506
    PUSH 0x628cd4                       ; 004ba508 | = "pod.ini" | s_pod_ini_00628cd4 = pod.ini
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004ba50d | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004ba512
    MOV EBP,EAX                         ; 004ba515
    TEST EAX,EAX                        ; 004ba517
    JNZ 0x004ba523                      ; 004ba519 | LAB_004ba523
        ;   XREF to: 004ba523 (CONDITIONAL_JUMP)
    ADD ESP,0x108                       ; 004ba51b
    POP EBP                             ; 004ba521
    RET                                 ; 004ba522
    PUSH EDI                            ; 004ba523
        ;   Label: LAB_004ba523
    PUSH ESI                            ; 004ba524
    PUSH EBX                            ; 004ba525
    LEA EBX,[ESP + 0x110]               ; 004ba526
    PUSH EBX                            ; 004ba52d
    PUSH 0x628cdc                       ; 004ba52e | = "%d\n" | s_d_00628cdc = %d

    MOV EDX,0xffffffff                  ; 004ba533
    PUSH EAX                            ; 004ba538
    MOV dword ptr [ESP + 0x11c],EDX     ; 004ba539
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ba540 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004ba545
    CMP dword ptr [ESP + 0x110],0x0     ; 004ba548
    JL 0x004ba5ed                       ; 004ba550 | LAB_004ba5ed
        ;   XREF to: 004ba5ed (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x110]     ; 004ba556
        ;   Label: LAB_004ba556
    XOR EBX,EBX                         ; 004ba55d
    TEST EDI,EDI                        ; 004ba55f
    JLE 0x004ba5cf                      ; 004ba561 | LAB_004ba5cf
        ;   XREF to: 004ba5cf (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0xc]                 ; 004ba563
        ;   Label: LAB_004ba563
    PUSH EAX                            ; 004ba567
    MOV ECX,0x41                        ; 004ba568
    PUSH 0x628d0b                       ; 004ba56d | = "%s\n" | s_s_00628d0b = %s

    LEA EDI,[ESP + 0x14]                ; 004ba572
    MOV ESI,0x67a158                    ; 004ba576 | char[260] g_FilenameBufferTemplate
    PUSH EBP                            ; 004ba57b
    MOVSD.REP ES:EDI,ESI                ; 004ba57c | char[260] g_FilenameBufferTemplate
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ba57e | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004ba583
    CMP byte ptr [ESP + 0xc],0x0        ; 004ba586
    JNZ 0x004ba5b0                      ; 004ba58b | LAB_004ba5b0
        ;   XREF to: 004ba5b0 (CONDITIONAL_JUMP)
    MOV ECX,0x628d0f                    ; 004ba58d | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00628d0f = ..\engine\fileio.cpp
    MOV ESI,0xe86                       ; 004ba592
    PUSH 0x628d24                       ; 004ba597 | = "Error parsing POD.INI" | s_Error_parsing_POD_INI_00628d24 = Error parsing POD.INI
    MOV dword ptr [0x02f0ca48],ECX      ; 004ba59c | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004ba5a2 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004ba5a8 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004ba5ad
    LEA EAX,[ESP + 0xc]                 ; 004ba5b0
        ;   Label: LAB_004ba5b0
    PUSH EAX                            ; 004ba5b4
    MOV EAX,dword ptr [ESP + 0x124]     ; 004ba5b5
    PUSH EAX                            ; 004ba5bc
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004ba5bd | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004ba5c2
    INC EBX                             ; 004ba5c5
    CMP EBX,dword ptr [ESP + 0x110]     ; 004ba5c6
    JL 0x004ba563                       ; 004ba5cd | LAB_004ba563
        ;   XREF to: 004ba563 (CONDITIONAL_JUMP)
    PUSH 0xe89                          ; 004ba5cf
        ;   Label: LAB_004ba5cf
    PUSH 0x628d3a                       ; 004ba5d4 | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00628d3a = ..\engine\fileio.cpp
    PUSH EBP                            ; 004ba5d9
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004ba5da | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004ba5df
    POP EBX                             ; 004ba5e2
    POP ESI                             ; 004ba5e3
    POP EDI                             ; 004ba5e4
    ADD ESP,0x108                       ; 004ba5e5
    POP EBP                             ; 004ba5eb
    RET                                 ; 004ba5ec
    MOV EBX,0x628ce0                    ; 004ba5ed | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00628ce0 = ..\engine\fileio.cpp
        ;   Label: LAB_004ba5ed
    MOV ESI,0xe81                       ; 004ba5f2
    PUSH 0x628cf5                       ; 004ba5f7 | = "Error parsing POD.INI" | s_Error_parsing_POD_INI_00628cf5 = Error parsing POD.INI
    MOV dword ptr [0x02f0ca48],EBX      ; 004ba5fc | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004ba602 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004ba608 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004ba60d
    JMP 0x004ba556                      ; 004ba610 | LAB_004ba556
        ;   XREF to: 004ba556 (UNCONDITIONAL_JUMP)


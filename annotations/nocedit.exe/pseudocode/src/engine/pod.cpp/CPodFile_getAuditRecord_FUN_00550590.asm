; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590(CPodFile * this_ptr, int record_index, void * output_buffer)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   record_index
; Local Variables:
; undefined1       Stack[-0x144]:1  local_144
;
; XREF[3]:
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b5c3e
;   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 at 004bd40f
;   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 at 004b8068
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_00640411
;   TerminatedCString s_CPodFile_getAuditRecord__00640423
;   TerminatedCString s_engine_pod_cpp_0064045f
;   TerminatedCString s_rb_00640471
;   TerminatedCString s_engine_pod_cpp_00640474
;   TerminatedCString s_CPodFile_getAuditRecord__00640486
;   TerminatedCString s_engine_pod_cpp_006404af
;   TerminatedCString s_CPodFile_getAuditRecord__006404c1
;   TerminatedCString s_engine_pod_cpp_006404ed
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550590
        ;   Label: engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590
    PUSH EDI                            ; 00550591
    PUSH EBP                            ; 00550592
    SUB ESP,0x138                       ; 00550593
    MOV EBP,dword ptr [ESP + 0x148]     ; 00550599
    MOV EBX,ESI                         ; 005505a0
    MOV EDX,dword ptr [ESP + 0x14c]     ; 005505a2
    TEST EDX,EDX                        ; 005505a9
    JL 0x005505b5                       ; 005505ab
        ;   XREF to: 005505b5 (CONDITIONAL_JUMP)  ; LAB_005505b5
    CMP EDX,dword ptr [EBP + 0x41c]     ; 005505ad
    JL 0x005505d8                       ; 005505b3
        ;   XREF to: 005505d8 (CONDITIONAL_JUMP)  ; LAB_005505d8
    MOV ESI,0x640411                    ; 005505b5 | = "..\\engine\\pod.cpp"
        ;   Label: LAB_005505b5
    MOV EDI,0x308                       ; 005505ba
    PUSH 0x640423                       ; 005505bf | = "CPodFile::getAuditRecord - invalid in..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005505c4 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005505ca | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005505d0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005505d5
    PUSH 0x30c                          ; 005505d8
        ;   Label: LAB_005505d8
    PUSH 0x64045f                       ; 005505dd | = "..\\engine\\pod.cpp"
    PUSH 0x640471                       ; 005505e2 | = "rb"
    PUSH 0x0                            ; 005505e7
    LEA EDI,[EBP + 0x4]                 ; 005505e9
    PUSH EDI                            ; 005505ec
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005505ed
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 005505f2
    MOV ESI,EAX                         ; 005505f5
    TEST EAX,EAX                        ; 005505f7
    JNZ 0x0055061e                      ; 005505f9
        ;   XREF to: 0055061e (CONDITIONAL_JUMP)  ; LAB_0055061e
    PUSH EDI                            ; 005505fb
    MOV EAX,0x640474                    ; 005505fc | = "..\\engine\\pod.cpp"
    MOV EDX,0x30d                       ; 00550601
    PUSH 0x640486                       ; 00550606 | = "CPodFile::getAuditRecord - can't open %s"
    MOV [0x02f0ca48],EAX                ; 0055060b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00550610 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00550616
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0055061b
    MOV EDX,dword ptr [ESP + 0x14c]     ; 0055061e
        ;   Label: LAB_0055061e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00550625
    ADD EAX,EDX                         ; 0055062c
    SHL EAX,0x3                         ; 0055062e
    SUB EAX,EDX                         ; 00550631
    MOV ECX,dword ptr [EBP + 0x420]     ; 00550633
    SHL EAX,0x3                         ; 00550639
    PUSH 0x0                            ; 0055063c
    ADD EAX,ECX                         ; 0055063e
    PUSH EAX                            ; 00550640
    PUSH ESI                            ; 00550641
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 00550642
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00550647
    PUSH ESI                            ; 0055064a
    PUSH 0x1                            ; 0055064b
    PUSH 0x138                          ; 0055064d
    LEA EAX,[ESP + 0xc]                 ; 00550652
    PUSH EAX                            ; 00550656
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00550657
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    MOV AH,byte ptr [ESI + 0xc]         ; 0055065c
    ADD ESP,0x10                        ; 0055065f
    TEST AH,0x20                        ; 00550662
    JNZ 0x00550693                      ; 00550665
        ;   XREF to: 00550693 (CONDITIONAL_JUMP)  ; LAB_00550693
    PUSH 0x320                          ; 00550667
        ;   Label: LAB_00550667
    PUSH 0x6404ed                       ; 0055066c | = "..\\engine\\pod.cpp"
    PUSH ESI                            ; 00550671
    MOV EDI,EBX                         ; 00550672
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00550674
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    MOV ECX,0x4e                        ; 00550679
    LEA ESI,[ESP + 0xc]                 ; 0055067e
    ADD ESP,0xc                         ; 00550682
    MOVSD.REP ES:EDI,ESI                ; 00550685
    MOV EAX,EBX                         ; 00550687
    ADD ESP,0x138                       ; 00550689
    POP EBP                             ; 0055068f
    POP EDI                             ; 00550690
    POP EBX                             ; 00550691
    RET                                 ; 00550692
    ADD EBP,0x4                         ; 00550693
        ;   Label: LAB_00550693
    PUSH EBP                            ; 00550696
    MOV EDI,0x6404af                    ; 00550697 | = "..\\engine\\pod.cpp"
    MOV EAX,0x31b                       ; 0055069c
    PUSH 0x6404c1                       ; 005506a1 | = "CPodFile::getAuditRecord - error read..."
    MOV dword ptr [0x02f0ca48],EDI      ; 005506a6 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005506ac | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005506b1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005506b6
    JMP 0x00550667                      ; 005506b9
        ;   XREF to: 00550667 (UNCONDITIONAL_JUMP)  ; LAB_00550667


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_pod_cpp_CPodFile_getAuditRecord_FUN_004f8570(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_0058da77
;   TerminatedCString s_CPodFile_getAuditRecord_0058da89
;   TerminatedCString s_rb_0058dac5
;   TerminatedCString s_engine_pod_cpp_0058dac8
;   TerminatedCString s_CPodFile_getAuditRecord_0058dada
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_fseek_FUN_0056582c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8570
        ;   Label: engine_pod.cpp_CPodFile_getAuditRecord_FUN_004f8570
    PUSH EDI                            ; 004f8571
    PUSH EBP                            ; 004f8572
    SUB ESP,0x138                       ; 004f8573
    MOV EBP,dword ptr [ESP + 0x148]     ; 004f8579
    MOV EBX,ESI                         ; 004f8580
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004f8582
    TEST EDX,EDX                        ; 004f8589
    JL 0x004f8595                       ; 004f858b
        ;   XREF to: 004f8595 (CONDITIONAL_JUMP)  ; LAB_004f8595
    CMP EDX,dword ptr [EBP + 0x214]     ; 004f858d
    JL 0x004f85b8                       ; 004f8593
        ;   XREF to: 004f85b8 (CONDITIONAL_JUMP)  ; LAB_004f85b8
    MOV ESI,0x58da77                    ; 004f8595 | = "..\\engine\\pod.cpp"
        ;   Label: LAB_004f8595
    MOV EDI,0x1f1                       ; 004f859a
    PUSH 0x58da89                       ; 004f859f | = "CPodFile::getAuditRecord - invalid in..."
    MOV dword ptr [0x01cc4800],ESI      ; 004f85a4 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 004f85aa | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004f85b0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004f85b5
    PUSH 0x58dac5                       ; 004f85b8 | = "rb"
        ;   Label: LAB_004f85b8
    LEA EDI,[EBP + 0x4]                 ; 004f85bd
    PUSH EDI                            ; 004f85c0
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004f85c1
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004f85c6
    MOV ESI,EAX                         ; 004f85c9
    TEST EAX,EAX                        ; 004f85cb
    JZ 0x004f8632                       ; 004f85cd
        ;   XREF to: 004f8632 (CONDITIONAL_JUMP)  ; LAB_004f8632
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004f85cf
        ;   Label: LAB_004f85cf
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f85d6
    ADD EAX,EDX                         ; 004f85dd
    SHL EAX,0x3                         ; 004f85df
    SUB EAX,EDX                         ; 004f85e2
    MOV ECX,dword ptr [EBP + 0x218]     ; 004f85e4
    SHL EAX,0x3                         ; 004f85ea
    PUSH 0x0                            ; 004f85ed
    ADD EAX,ECX                         ; 004f85ef
    PUSH EAX                            ; 004f85f1
    PUSH ESI                            ; 004f85f2
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004f85f3
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004f85f8
    PUSH ESI                            ; 004f85fb
    PUSH 0x1                            ; 004f85fc
    PUSH 0x138                          ; 004f85fe
    LEA EAX,[ESP + 0xc]                 ; 004f8603
    PUSH EAX                            ; 004f8607
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f8608
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f860d
    PUSH ESI                            ; 004f8610
    MOV EDI,EBX                         ; 004f8611
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f8613
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    MOV ECX,0x4e                        ; 004f8618
    LEA ESI,[ESP + 0x4]                 ; 004f861d
    ADD ESP,0x4                         ; 004f8621
    MOVSD.REP ES:EDI,ESI                ; 004f8624
    MOV EAX,EBX                         ; 004f8626
    ADD ESP,0x138                       ; 004f8628
    POP EBP                             ; 004f862e
    POP EDI                             ; 004f862f
    POP EBX                             ; 004f8630
    RET                                 ; 004f8631
    PUSH EDI                            ; 004f8632
        ;   Label: LAB_004f8632
    MOV EAX,0x58dac8                    ; 004f8633 | = "..\\engine\\pod.cpp"
    MOV EDX,0x1f6                       ; 004f8638
    PUSH 0x58dada                       ; 004f863d | = "CPodFile::getAuditRecord - can't open %s"
    MOV [0x01cc4800],EAX                ; 004f8642 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDX      ; 004f8647 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004f864d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 004f8652
    JMP 0x004f85cf                      ; 004f8655
        ;   XREF to: 004f85cf (UNCONDITIONAL_JUMP)  ; LAB_004f85cf


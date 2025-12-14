; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dfilter.cpp_CDemonFilter_save_FUN_00470510(CDemonFilter * this_ptr, char * filename)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; Referenced Globals:
;   TerminatedCString s_wb_0061e713
;   TerminatedCString s_art_0061e716
;   TerminatedCString s_core_dfilter_cpp_0061e71a
;   TerminatedCString s_CDemonFilter_save_Bad_fi_0061e72e
;   TerminatedCString s_core_dfilter_cpp_0061e750
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fputc_FUN_006007a0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00470510
        ;   Label: core_dfilter.cpp_CDemonFilter_save_FUN_00470510
    PUSH ESI                            ; 00470511
    PUSH EDI                            ; 00470512
    PUSH EBP                            ; 00470513
    MOV ESI,dword ptr [ESP + 0x14]      ; 00470514
    PUSH 0x61e713                       ; 00470518 | = "wb"
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0047051d
    PUSH EDX                            ; 00470521
    PUSH 0x61e716                       ; 00470522 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00470527
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0047052c
    MOV EDI,EAX                         ; 0047052f
    TEST EAX,EAX                        ; 00470531
    JZ 0x0047055b                       ; 00470533
        ;   XREF to: 0047055b (CONDITIONAL_JUMP)  ; LAB_0047055b
    XOR EBX,EBX                         ; 00470535
        ;   Label: LAB_00470535
    MOV EBP,dword ptr [ESI + 0x4]       ; 00470537
        ;   Label: LAB_00470537
    MOV EAX,dword ptr [ESI]             ; 0047053a
    IMUL EAX,EBP                        ; 0047053c
    CMP EBX,EAX                         ; 0047053f
    JL 0x00470580                       ; 00470541
        ;   XREF to: 00470580 (CONDITIONAL_JUMP)  ; LAB_00470580
    PUSH 0xf5                           ; 00470543
    PUSH 0x61e750                       ; 00470548 | = "..\\core\\dfilter.cpp"
    PUSH EDI                            ; 0047054d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0047054e
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00470553
    POP EBP                             ; 00470556
    POP EDI                             ; 00470557
    POP ESI                             ; 00470558
    POP EBX                             ; 00470559
    RET                                 ; 0047055a
    MOV ECX,0x61e71a                    ; 0047055b | = "..\\core\\dfilter.cpp"
        ;   Label: LAB_0047055b
    MOV EBX,0xeb                        ; 00470560
    PUSH 0x61e72e                       ; 00470565 | = "CDemonFilter::save - Bad filename"
    MOV dword ptr [0x02f0ca48],ECX      ; 0047056a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00470570 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00470576
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0047057b
    JMP 0x00470535                      ; 0047057e
        ;   XREF to: 00470535 (UNCONDITIONAL_JUMP)  ; LAB_00470535
    MOV EAX,dword ptr [ESI + 0x48]      ; 00470580
        ;   Label: LAB_00470580
    PUSH EDI                            ; 00470583
    MOV AL,byte ptr [EBX + EAX*0x1]     ; 00470584
    AND EAX,0xff                        ; 00470587
    SHL EAX,0x2                         ; 0047058c
    PUSH EAX                            ; 0047058f
    INC EBX                             ; 00470590
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00470591
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
    ADD ESP,0x8                         ; 00470596
    JMP 0x00470537                      ; 00470599
        ;   XREF to: 00470537 (UNCONDITIONAL_JUMP)  ; LAB_00470537


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_FUN_00403130(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[1]:
;   engine_2d.c_FUN_00403070 at 004030ef
;
; Referenced Globals:
;   TerminatedCString s_wb_005771c3
;   TerminatedCString s_fog_005771c6
;   TerminatedCString s_engine_2d_c_005771ca
;   TerminatedCString s_Unable_to_write_fog_tab_005771d9
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fwrite_FUN_00563a50
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403130
        ;   Label: engine_2d.c_FUN_00403130
    PUSH 0x5771c3                       ; 00403131 | = "wb"
    MOV EDX,dword ptr [ESP + 0xc]       ; 00403136
    PUSH EDX                            ; 0040313a
    PUSH 0x5771c6                       ; 0040313b | = "fog"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00403140
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00403145
    MOV EBX,EAX                         ; 00403148
    TEST EAX,EAX                        ; 0040314a
    JZ 0x0040316e                       ; 0040314c
        ;   XREF to: 0040316e (CONDITIONAL_JUMP)  ; LAB_0040316e
    PUSH EBX                            ; 0040314e
        ;   Label: LAB_0040314e
    PUSH 0x10                           ; 0040314f
    PUSH 0x100                          ; 00403151
    PUSH 0x1bd1ea0                      ; 00403156
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 0040315b
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_00563a50(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00403160
    PUSH EBX                            ; 00403163
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00403164
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 00403169
    POP EBX                             ; 0040316c
    RET                                 ; 0040316d
    PUSH ESI                            ; 0040316e
        ;   Label: LAB_0040316e
    MOV ECX,0x5771ca                    ; 0040316f | = "..\\engine\\2d.c"
    MOV ESI,0x6b7                       ; 00403174
    PUSH 0x5771d9                       ; 00403179 | = "Unable to write fog tab"
    MOV dword ptr [0x01cc4800],ECX      ; 0040317e | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 00403184 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040318a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0040318f
    POP ESI                             ; 00403192
    JMP 0x0040314e                      ; 00403193
        ;   XREF to: 0040314e (UNCONDITIONAL_JUMP)  ; LAB_0040314e


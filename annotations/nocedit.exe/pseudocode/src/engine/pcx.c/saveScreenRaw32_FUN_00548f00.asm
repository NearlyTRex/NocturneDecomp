; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_pcx_c_saveScreenRaw32_FUN_00548f00(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
; undefined1       Stack[-0x6b]:1  local_6b
; undefined1       Stack[-0x69]:1  local_69
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 at 0054928b
;
; Referenced Globals:
;   TerminatedCString s_engine_pcx_c_0063eb7d
;   TerminatedCString s_saveScreenRaw32_No_ext_f_0063eb8d
;   TerminatedCString s_RAW_0063ebac
;   undefined4 DAT_0063ebad
;   undefined4 DAT_0063ebae
;   undefined4 DAT_0063ebaf
;   TerminatedCString s_engine_pcx_c_0063ebb1
;   TerminatedCString s_wb_0063ebc1
;   TerminatedCString s_engine_pcx_c_0063ebc4
;   TerminatedCString s_saveScreenRaw32_Unable_t_0063ebd4
;   TerminatedCString s_engine_pcx_c_0063ebfc
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   ... and 8 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fputc_FUN_006007a0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548f00
        ;   Label: engine_pcx.c_saveScreenRaw32_FUN_00548f00
    PUSH ESI                            ; 00548f01
    PUSH EDI                            ; 00548f02
    PUSH EBP                            ; 00548f03
    SUB ESP,0x5c                        ; 00548f04
    MOV ESI,dword ptr [ESP + 0x70]      ; 00548f07
    MOV EDI,ESP                         ; 00548f0b
    MOV DL,0x2e                         ; 00548f0d
    PUSH EDI                            ; 00548f0f
    MOV AL,byte ptr [ESI]               ; 00548f10
        ;   Label: LAB_00548f10
    MOV byte ptr [EDI],AL               ; 00548f12
    CMP AL,0x0                          ; 00548f14
    JZ 0x00548f28                       ; 00548f16
        ;   XREF to: 00548f28 (CONDITIONAL_JUMP)  ; LAB_00548f28
    MOV AL,byte ptr [ESI + 0x1]         ; 00548f18
    ADD ESI,0x2                         ; 00548f1b
    MOV byte ptr [EDI + 0x1],AL         ; 00548f1e
    ADD EDI,0x2                         ; 00548f21
    CMP AL,0x0                          ; 00548f24
    JNZ 0x00548f10                      ; 00548f26
        ;   XREF to: 00548f10 (CONDITIONAL_JUMP)  ; LAB_00548f10
    POP EDI                             ; 00548f28
        ;   Label: LAB_00548f28
    MOV ESI,ESP                         ; 00548f29
    MOV AL,byte ptr [ESI]               ; 00548f2b
        ;   Label: LAB_00548f2b
    CMP AL,DL                           ; 00548f2d
    JZ 0x00548f43                       ; 00548f2f
        ;   XREF to: 00548f43 (CONDITIONAL_JUMP)  ; LAB_00548f43
    CMP AL,0x0                          ; 00548f31
    JZ 0x00548f41                       ; 00548f33
        ;   XREF to: 00548f41 (CONDITIONAL_JUMP)  ; LAB_00548f41
    INC ESI                             ; 00548f35
    MOV AL,byte ptr [ESI]               ; 00548f36
    CMP AL,DL                           ; 00548f38
    JZ 0x00548f43                       ; 00548f3a
        ;   XREF to: 00548f43 (CONDITIONAL_JUMP)  ; LAB_00548f43
    INC ESI                             ; 00548f3c
    CMP AL,0x0                          ; 00548f3d
    JNZ 0x00548f2b                      ; 00548f3f
        ;   XREF to: 00548f2b (CONDITIONAL_JUMP)  ; LAB_00548f2b
    SUB ESI,ESI                         ; 00548f41
        ;   Label: LAB_00548f41
    MOV EDI,ESI                         ; 00548f43
        ;   Label: LAB_00548f43
    TEST ESI,ESI                        ; 00548f45
    JZ 0x00549096                       ; 00548f47
        ;   XREF to: 00549096 (CONDITIONAL_JUMP)  ; LAB_00549096
    MOV ESI,0x63ebac                    ; 00548f4d | = ".RAW"
        ;   Label: LAB_00548f4d
    PUSH EDI                            ; 00548f52
    MOV AL,byte ptr [ESI]               ; 00548f53 | = ".RAW" | DAT_0063ebae
        ;   Label: LAB_00548f53
    MOV byte ptr [EDI],AL               ; 00548f55
    CMP AL,0x0                          ; 00548f57
    JZ 0x00548f6b                       ; 00548f59
        ;   XREF to: 00548f6b (CONDITIONAL_JUMP)  ; LAB_00548f6b
    MOV AL,byte ptr [ESI + 0x1]         ; 00548f5b | DAT_0063ebad | DAT_0063ebaf
    ADD ESI,0x2                         ; 00548f5e
    MOV byte ptr [EDI + 0x1],AL         ; 00548f61
    ADD EDI,0x2                         ; 00548f64
    CMP AL,0x0                          ; 00548f67
    JNZ 0x00548f53                      ; 00548f69
        ;   XREF to: 00548f53 (CONDITIONAL_JUMP)  ; LAB_00548f53
    POP EDI                             ; 00548f6b
        ;   Label: LAB_00548f6b
    PUSH 0x9d                           ; 00548f6c
    PUSH 0x63ebb1                       ; 00548f71 | = "..\\engine\\pcx.c"
    PUSH 0x63ebc1                       ; 00548f76 | = "wb"
    PUSH 0x0                            ; 00548f7b
    LEA EAX,[ESP + 0x10]                ; 00548f7d
    PUSH EAX                            ; 00548f81
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00548f82
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00548f87
    MOV EDI,EAX                         ; 00548f8a
    TEST EAX,EAX                        ; 00548f8c
    JNZ 0x00548fb3                      ; 00548f8e
        ;   XREF to: 00548fb3 (CONDITIONAL_JUMP)  ; LAB_00548fb3
    MOV EBX,0x63ebc4                    ; 00548f90 | = "..\\engine\\pcx.c"
    MOV ESI,0x9e                        ; 00548f95
    PUSH 0x63ebd4                       ; 00548f9a | = "saveScreenRaw32 - Unable to open output"
    MOV dword ptr [0x02f0ca48],EBX      ; 00548f9f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00548fa5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00548fab
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00548fb0
    XOR EBP,EBP                         ; 00548fb3
        ;   Label: LAB_00548fb3
    MOV EAX,[0x00679398]                ; 00548fb5 | g_WindowHeight
    MOV dword ptr [ESP + 0x58],EBP      ; 00548fba
    TEST EAX,EAX                        ; 00548fbe
    JLE 0x0054907b                      ; 00548fc0
        ;   XREF to: 0054907b (CONDITIONAL_JUMP)  ; LAB_0054907b
    MOV dword ptr [ESP + 0x54],EBP      ; 00548fc6
    MOV EBX,dword ptr [ESP + 0x54]      ; 00548fca
        ;   Label: LAB_00548fca
    MOV EBP,dword ptr [0x00679394]      ; 00548fce | g_WindowWidth
    XOR ESI,ESI                         ; 00548fd4
    MOV EBX,dword ptr [EBX + 0x2cf6a9c] ; 00548fd6 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    TEST EBP,EBP                        ; 00548fdc
    JLE 0x00549059                      ; 00548fde
        ;   XREF to: 00549059 (CONDITIONAL_JUMP)  ; LAB_00549059
    MOV CL,byte ptr [0x02d01f24]        ; 00548fe0 | g_RedBitPosition
        ;   Label: LAB_00548fe0
    MOV EAX,dword ptr [EBX]             ; 00548fe6
    MOV EDX,dword ptr [0x02d01f28]      ; 00548fe8 | g_RedScaleFactor
    SHR EAX,CL                          ; 00548fee
    IMUL EDX,EAX                        ; 00548ff0
    MOV EBP,dword ptr [EBX]             ; 00548ff3
    MOV CL,byte ptr [0x02d01f30]        ; 00548ff5 | g_GreenBitPosition
    SHR EBP,CL                          ; 00548ffb
    IMUL EBP,dword ptr [0x02d01f34]     ; 00548ffd | g_GreenScaleFactor
    MOV EAX,dword ptr [EBX]             ; 00549004
    MOV CL,byte ptr [0x02d01f3c]        ; 00549006 | g_BlueBitPosition
    SHR EAX,CL                          ; 0054900c
    IMUL EAX,dword ptr [0x02d01f40]     ; 0054900e | g_BlueScaleFactor
    PUSH EDI                            ; 00549015
    AND EDX,0xff                        ; 00549016
    AND EAX,0xff                        ; 0054901c
    PUSH EDX                            ; 00549021
    MOV dword ptr [ESP + 0x58],EAX      ; 00549022
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00549026
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
    ADD ESP,0x8                         ; 0054902b
    PUSH EDI                            ; 0054902e
    AND EBP,0xff                        ; 0054902f
    PUSH EBP                            ; 00549035
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00549036
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
    ADD ESP,0x8                         ; 0054903b
    PUSH EDI                            ; 0054903e
    MOV EBP,dword ptr [ESP + 0x54]      ; 0054903f
    PUSH EBP                            ; 00549043
    ADD EBX,0x4                         ; 00549044
    INC ESI                             ; 00549047
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00549048
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
    MOV EAX,[0x00679394]                ; 0054904d | g_WindowWidth
    ADD ESP,0x8                         ; 00549052
    CMP ESI,EAX                         ; 00549055
    JL 0x00548fe0                       ; 00549057
        ;   XREF to: 00548fe0 (CONDITIONAL_JUMP)  ; LAB_00548fe0
    MOV EDX,dword ptr [ESP + 0x54]      ; 00549059
        ;   Label: LAB_00549059
    MOV ECX,dword ptr [ESP + 0x58]      ; 0054905d
    MOV EBX,dword ptr [0x00679398]      ; 00549061 | g_WindowHeight
    ADD EDX,0x4                         ; 00549067
    INC ECX                             ; 0054906a
    MOV dword ptr [ESP + 0x54],EDX      ; 0054906b
    MOV dword ptr [ESP + 0x58],ECX      ; 0054906f
    CMP ECX,EBX                         ; 00549073
    JL 0x00548fca                       ; 00549075
        ;   XREF to: 00548fca (CONDITIONAL_JUMP)  ; LAB_00548fca
    PUSH 0xb5                           ; 0054907b
        ;   Label: LAB_0054907b
    PUSH 0x63ebfc                       ; 00549080 | = "..\\engine\\pcx.c"
    PUSH EDI                            ; 00549085
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00549086
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0054908b
    ADD ESP,0x5c                        ; 0054908e
    POP EBP                             ; 00549091
    POP EDI                             ; 00549092
    POP ESI                             ; 00549093
    POP EBX                             ; 00549094
    RET                                 ; 00549095
    MOV EDX,0x63eb7d                    ; 00549096 | = "..\\engine\\pcx.c"
        ;   Label: LAB_00549096
    MOV ECX,0x98                        ; 0054909b
    PUSH 0x63eb8d                       ; 005490a0 | = "saveScreenRaw32 - No ext found"
    MOV dword ptr [0x02f0ca48],EDX      ; 005490a5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005490ab | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005490b1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005490b6
    JMP 0x00548f4d                      ; 005490b9
        ;   XREF to: 00548f4d (UNCONDITIONAL_JUMP)  ; LAB_00548f4d


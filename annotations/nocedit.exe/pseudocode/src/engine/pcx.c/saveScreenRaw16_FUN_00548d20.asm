; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_pcx.c_saveScreenRaw16_FUN_00548d20(char * filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x6f]:1  local_6f
; undefined1       Stack[-0x6d]:1  local_6d
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 at 00549280
;
; Referenced Globals:
;   TerminatedCString s_engine_pcx_c_0063eaee
;   TerminatedCString s_saveScreenRaw16_No_ext_f_0063eafe
;   TerminatedCString s_RAW_0063eb1d
;   undefined4 DAT_0063eb1e
;   undefined4 DAT_0063eb1f
;   undefined4 DAT_0063eb20
;   TerminatedCString s_engine_pcx_c_0063eb22
;   TerminatedCString s_wb_0063eb32
;   TerminatedCString s_engine_pcx_c_0063eb35
;   TerminatedCString s_saveScreenRaw16_Unable_t_0063eb45
;   TerminatedCString s_engine_pcx_c_0063eb6d
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

    PUSH EBX                            ; 00548d20
        ;   Label: engine_pcx.c_saveScreenRaw16_FUN_00548d20
    PUSH ESI                            ; 00548d21
    PUSH EDI                            ; 00548d22
    PUSH EBP                            ; 00548d23
    SUB ESP,0x60                        ; 00548d24
    MOV ESI,dword ptr [ESP + 0x74]      ; 00548d27
    MOV EDI,ESP                         ; 00548d2b
    MOV DL,0x2e                         ; 00548d2d
    PUSH EDI                            ; 00548d2f
    MOV AL,byte ptr [ESI]               ; 00548d30
        ;   Label: LAB_00548d30
    MOV byte ptr [EDI],AL               ; 00548d32
    CMP AL,0x0                          ; 00548d34
    JZ 0x00548d48                       ; 00548d36
        ;   XREF to: 00548d48 (CONDITIONAL_JUMP)  ; LAB_00548d48
    MOV AL,byte ptr [ESI + 0x1]         ; 00548d38
    ADD ESI,0x2                         ; 00548d3b
    MOV byte ptr [EDI + 0x1],AL         ; 00548d3e
    ADD EDI,0x2                         ; 00548d41
    CMP AL,0x0                          ; 00548d44
    JNZ 0x00548d30                      ; 00548d46
        ;   XREF to: 00548d30 (CONDITIONAL_JUMP)  ; LAB_00548d30
    POP EDI                             ; 00548d48
        ;   Label: LAB_00548d48
    MOV ESI,ESP                         ; 00548d49
    MOV AL,byte ptr [ESI]               ; 00548d4b
        ;   Label: LAB_00548d4b
    CMP AL,DL                           ; 00548d4d
    JZ 0x00548d63                       ; 00548d4f
        ;   XREF to: 00548d63 (CONDITIONAL_JUMP)  ; LAB_00548d63
    CMP AL,0x0                          ; 00548d51
    JZ 0x00548d61                       ; 00548d53
        ;   XREF to: 00548d61 (CONDITIONAL_JUMP)  ; LAB_00548d61
    INC ESI                             ; 00548d55
    MOV AL,byte ptr [ESI]               ; 00548d56
    CMP AL,DL                           ; 00548d58
    JZ 0x00548d63                       ; 00548d5a
        ;   XREF to: 00548d63 (CONDITIONAL_JUMP)  ; LAB_00548d63
    INC ESI                             ; 00548d5c
    CMP AL,0x0                          ; 00548d5d
    JNZ 0x00548d4b                      ; 00548d5f
        ;   XREF to: 00548d4b (CONDITIONAL_JUMP)  ; LAB_00548d4b
    SUB ESI,ESI                         ; 00548d61
        ;   Label: LAB_00548d61
    MOV EDI,ESI                         ; 00548d63
        ;   Label: LAB_00548d63
    TEST ESI,ESI                        ; 00548d65
    JZ 0x00548eca                       ; 00548d67
        ;   XREF to: 00548eca (CONDITIONAL_JUMP)  ; LAB_00548eca
    MOV ESI,0x63eb1d                    ; 00548d6d | = ".RAW"
        ;   Label: LAB_00548d6d
    PUSH EDI                            ; 00548d72
    MOV AL,byte ptr [ESI]               ; 00548d73 | = ".RAW" | DAT_0063eb1f
        ;   Label: LAB_00548d73
    MOV byte ptr [EDI],AL               ; 00548d75
    CMP AL,0x0                          ; 00548d77
    JZ 0x00548d8b                       ; 00548d79
        ;   XREF to: 00548d8b (CONDITIONAL_JUMP)  ; LAB_00548d8b
    MOV AL,byte ptr [ESI + 0x1]         ; 00548d7b | DAT_0063eb1e | DAT_0063eb20
    ADD ESI,0x2                         ; 00548d7e
    MOV byte ptr [EDI + 0x1],AL         ; 00548d81
    ADD EDI,0x2                         ; 00548d84
    CMP AL,0x0                          ; 00548d87
    JNZ 0x00548d73                      ; 00548d89
        ;   XREF to: 00548d73 (CONDITIONAL_JUMP)  ; LAB_00548d73
    POP EDI                             ; 00548d8b
        ;   Label: LAB_00548d8b
    PUSH 0x6c                           ; 00548d8c
    PUSH 0x63eb22                       ; 00548d8e | = "..\\engine\\pcx.c"
    PUSH 0x63eb32                       ; 00548d93 | = "wb"
    PUSH 0x0                            ; 00548d98
    LEA EAX,[ESP + 0x10]                ; 00548d9a
    PUSH EAX                            ; 00548d9e
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00548d9f
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00548da4
    MOV EDI,EAX                         ; 00548da7
    TEST EAX,EAX                        ; 00548da9
    JNZ 0x00548dd0                      ; 00548dab
        ;   XREF to: 00548dd0 (CONDITIONAL_JUMP)  ; LAB_00548dd0
    MOV EBX,0x63eb35                    ; 00548dad | = "..\\engine\\pcx.c"
    MOV ESI,0x6d                        ; 00548db2
    PUSH 0x63eb45                       ; 00548db7 | = "saveScreenRaw16 - Unable to open output"
    MOV dword ptr [0x02f0ca48],EBX      ; 00548dbc | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00548dc2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00548dc8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00548dcd
    XOR EBP,EBP                         ; 00548dd0
        ;   Label: LAB_00548dd0
    MOV EAX,[0x00679398]                ; 00548dd2 | g_WindowHeight
    MOV dword ptr [ESP + 0x5c],EBP      ; 00548dd7
    TEST EAX,EAX                        ; 00548ddb
    JLE 0x00548eaf                      ; 00548ddd
        ;   XREF to: 00548eaf (CONDITIONAL_JUMP)  ; LAB_00548eaf
    MOV dword ptr [ESP + 0x58],EBP      ; 00548de3
    MOV ESI,dword ptr [ESP + 0x58]      ; 00548de7
        ;   Label: LAB_00548de7
    MOV EBP,dword ptr [0x00679394]      ; 00548deb | g_WindowWidth
    XOR EBX,EBX                         ; 00548df1
    MOV ESI,dword ptr [ESI + 0x2cf6a9c] ; 00548df3 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    TEST EBP,EBP                        ; 00548df9
    JLE 0x00548e8d                      ; 00548dfb
        ;   XREF to: 00548e8d (CONDITIONAL_JUMP)  ; LAB_00548e8d
    XOR EAX,EAX                         ; 00548e01
        ;   Label: LAB_00548e01
    MOV AX,word ptr [ESI]               ; 00548e03
    MOV CL,byte ptr [0x02d01f24]        ; 00548e06 | g_RedBitPosition
    MOV EDX,EAX                         ; 00548e0c
    SHR EDX,CL                          ; 00548e0e
    IMUL EDX,dword ptr [0x02d01f28]     ; 00548e10 | g_RedScaleFactor
    AND EDX,0xff                        ; 00548e17
    MOV CL,byte ptr [0x02d01f30]        ; 00548e1d | g_GreenBitPosition
    MOV dword ptr [ESP + 0x50],EDX      ; 00548e23
    MOV EDX,EAX                         ; 00548e27
    MOV EBP,dword ptr [0x02d01f34]      ; 00548e29 | g_GreenScaleFactor
    SHR EDX,CL                          ; 00548e2f
    IMUL EDX,EBP                        ; 00548e31
    MOV CL,byte ptr [0x02d01f3c]        ; 00548e34 | g_BlueBitPosition
    AND EDX,0xff                        ; 00548e3a
    MOV EBP,EAX                         ; 00548e40
    MOV dword ptr [ESP + 0x54],EDX      ; 00548e42
    SHR EBP,CL                          ; 00548e46
    IMUL EBP,dword ptr [0x02d01f40]     ; 00548e48 | g_BlueScaleFactor
    PUSH EDI                            ; 00548e4f
    MOV ECX,dword ptr [ESP + 0x54]      ; 00548e50
    PUSH ECX                            ; 00548e54
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00548e55
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
    ADD ESP,0x8                         ; 00548e5a
    PUSH EDI                            ; 00548e5d
    MOV EAX,dword ptr [ESP + 0x58]      ; 00548e5e
    PUSH EAX                            ; 00548e62
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00548e63
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
    ADD ESP,0x8                         ; 00548e68
    PUSH EDI                            ; 00548e6b
    AND EBP,0xff                        ; 00548e6c
    PUSH EBP                            ; 00548e72
    ADD ESI,0x2                         ; 00548e73
    INC EBX                             ; 00548e76
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00548e77
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
    MOV EDX,dword ptr [0x00679394]      ; 00548e7c | g_WindowWidth
    ADD ESP,0x8                         ; 00548e82
    CMP EBX,EDX                         ; 00548e85
    JL 0x00548e01                       ; 00548e87
        ;   XREF to: 00548e01 (CONDITIONAL_JUMP)  ; LAB_00548e01
    MOV EDX,dword ptr [ESP + 0x58]      ; 00548e8d
        ;   Label: LAB_00548e8d
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00548e91
    MOV EBX,dword ptr [0x00679398]      ; 00548e95 | g_WindowHeight
    ADD EDX,0x4                         ; 00548e9b
    INC ECX                             ; 00548e9e
    MOV dword ptr [ESP + 0x58],EDX      ; 00548e9f
    MOV dword ptr [ESP + 0x5c],ECX      ; 00548ea3
    CMP ECX,EBX                         ; 00548ea7
    JL 0x00548de7                       ; 00548ea9
        ;   XREF to: 00548de7 (CONDITIONAL_JUMP)  ; LAB_00548de7
    PUSH 0x84                           ; 00548eaf
        ;   Label: LAB_00548eaf
    PUSH 0x63eb6d                       ; 00548eb4 | = "..\\engine\\pcx.c"
    PUSH EDI                            ; 00548eb9
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00548eba
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00548ebf
    ADD ESP,0x60                        ; 00548ec2
    POP EBP                             ; 00548ec5
    POP EDI                             ; 00548ec6
    POP ESI                             ; 00548ec7
    POP EBX                             ; 00548ec8
    RET                                 ; 00548ec9
    MOV EDX,0x63eaee                    ; 00548eca | = "..\\engine\\pcx.c"
        ;   Label: LAB_00548eca
    MOV ECX,0x67                        ; 00548ecf
    PUSH 0x63eafe                       ; 00548ed4 | = "saveScreenRaw16 - No ext found"
    MOV dword ptr [0x02f0ca48],EDX      ; 00548ed9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00548edf | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00548ee5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00548eea
    JMP 0x00548d6d                      ; 00548eed
        ;   XREF to: 00548d6d (UNCONDITIONAL_JUMP)  ; LAB_00548d6d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pcx_c_FUN_004f2990(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined1       Stack[-0x87]:1  local_87
; undefined1       Stack[-0x86]:1  local_86
; undefined1       Stack[-0x85]:1  local_85
; undefined2       Stack[-0x84]:2  local_84
; undefined2       Stack[-0x82]:2  local_82
; undefined2       Stack[-0x80]:2  local_80
; undefined2       Stack[-0x7e]:2  local_7e
; undefined1       Stack[-0x47]:1  local_47
; undefined2       Stack[-0x46]:2  local_46
; undefined2       Stack[-0x44]:2  local_44
; undefined2       Stack[-0x42]:2  local_42
; undefined2       Stack[-0x40]:2  local_40
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049cfa9
;
; Referenced Globals:
;   TerminatedCString s_wb_0058cfc3
;   TerminatedCString s_engine_pcx_c_0058cfc6
;   TerminatedCString s_Cannot_write_PCX_0058cfd6
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 DAT_005b7624
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_fputc_FUN_00566cc0
;   crt_stdio.c_fwrite_FUN_00563a50
;   engine_pcx.c_saveScreenRaw16_FUN_004f2620
;   engine_pcx.c_saveScreenRaw32_FUN_004f27e0
;   engine_pcx.c_writePCXScanline_FUN_004f2550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2990
        ;   Label: engine_pcx.c_FUN_004f2990
    PUSH EBP                            ; 004f2991
    SUB ESP,0x80                        ; 004f2992
    MOV EBX,dword ptr [ESP + 0x8c]      ; 004f2998
    MOV EDX,dword ptr [0x005b7624]      ; 004f299f | DAT_005b7624
    CMP EDX,0x10                        ; 004f29a5
    JZ 0x004f2b39                       ; 004f29a8
        ;   XREF to: 004f2b39 (CONDITIONAL_JUMP)  ; LAB_004f2b39
    CMP EDX,0x20                        ; 004f29ae
    JZ 0x004f2b44                       ; 004f29b1
        ;   XREF to: 004f2b44 (CONDITIONAL_JUMP)  ; LAB_004f2b44
    PUSH EDI                            ; 004f29b7
    PUSH ESI                            ; 004f29b8
    PUSH 0x80                           ; 004f29b9
    PUSH 0x0                            ; 004f29be
    LEA EAX,[ESP + 0x10]                ; 004f29c0
    PUSH EAX                            ; 004f29c4
    MOV ESI,0x1                         ; 004f29c5
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004f29ca
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV AH,0xa                          ; 004f29cf
    MOV DL,0x5                          ; 004f29d1
    ADD ESP,0xc                         ; 004f29d3
    MOV CL,0x8                          ; 004f29d6
    MOV byte ptr [ESP + 0x8],AH         ; 004f29d8
    MOV byte ptr [ESP + 0x9],DL         ; 004f29dc
    MOV byte ptr [ESP + 0xb],CL         ; 004f29e0
    MOV word ptr [ESP + 0x4c],SI        ; 004f29e4
    MOV DH,0x1                          ; 004f29e9
    MOV CH,0x1                          ; 004f29eb
    MOV AX,[0x005b761c]                 ; 004f29ed | g_WindowWidth
    MOV ESI,dword ptr [0x005b761c]      ; 004f29f3 | g_WindowWidth
    DEC EAX                             ; 004f29f9
    MOV byte ptr [ESP + 0xa],DH         ; 004f29fa
    MOV word ptr [ESP + 0x10],AX        ; 004f29fe
    MOV AX,[0x005b7620]                 ; 004f2a03 | g_WindowHeight
    MOV byte ptr [ESP + 0x49],CH        ; 004f2a09
    DEC EAX                             ; 004f2a0d
    XOR EDX,EDX                         ; 004f2a0e
    MOV word ptr [ESP + 0x12],AX        ; 004f2a10
    MOV AX,[0x005b761c]                 ; 004f2a15 | g_WindowWidth
    MOV word ptr [ESP + 0xc],DX         ; 004f2a1b
    MOV word ptr [ESP + 0x4a],AX        ; 004f2a20
    MOV word ptr [ESP + 0x4e],AX        ; 004f2a25
    MOV AX,[0x005b7620]                 ; 004f2a2a | g_WindowHeight
    MOV word ptr [ESP + 0xe],DX         ; 004f2a30
    MOV word ptr [ESP + 0x50],AX        ; 004f2a35
    CMP ESI,0x280                       ; 004f2a3a
    JNZ 0x004f2a5f                      ; 004f2a40
        ;   XREF to: 004f2a5f (CONDITIONAL_JUMP)  ; LAB_004f2a5f
    CMP dword ptr [0x005b7620],0xf0     ; 004f2a42 | g_WindowHeight
    JNZ 0x004f2a5f                      ; 004f2a4c
        ;   XREF to: 004f2a5f (CONDITIONAL_JUMP)  ; LAB_004f2a5f
    MOV EDI,EAX                         ; 004f2a4e
    ADD EDI,EAX                         ; 004f2a50
    ADD EAX,EAX                         ; 004f2a52
    DEC EAX                             ; 004f2a54
    MOV word ptr [ESP + 0x50],DI        ; 004f2a55
    MOV word ptr [ESP + 0x12],AX        ; 004f2a5a
    PUSH 0x58cfc3                       ; 004f2a5f | = "wb"
        ;   Label: LAB_004f2a5f
    PUSH EBX                            ; 004f2a64
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004f2a65
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004f2a6a
    MOV EBX,EAX                         ; 004f2a6d
    TEST EAX,EAX                        ; 004f2a6f
    JNZ 0x004f2a95                      ; 004f2a71
        ;   XREF to: 004f2a95 (CONDITIONAL_JUMP)  ; LAB_004f2a95
    MOV EBP,0x58cfc6                    ; 004f2a73 | = "..\\engine\\pcx.c"
    MOV EAX,0xee                        ; 004f2a78
    PUSH 0x58cfd6                       ; 004f2a7d | = "Cannot write .PCX"
    MOV dword ptr [0x01cc4800],EBP      ; 004f2a82 | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 004f2a88 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004f2a8d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004f2a92
    PUSH EBX                            ; 004f2a95
        ;   Label: LAB_004f2a95
    PUSH 0x80                           ; 004f2a96
    PUSH 0x1                            ; 004f2a9b
    LEA EAX,[ESP + 0x14]                ; 004f2a9d
    PUSH EAX                            ; 004f2aa1
    XOR ESI,ESI                         ; 004f2aa2
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 004f2aa4
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_00563a50(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    MOV EDX,dword ptr [0x005b7620]      ; 004f2aa9 | g_WindowHeight
    ADD ESP,0x10                        ; 004f2aaf
    TEST EDX,EDX                        ; 004f2ab2
    JLE 0x004f2aed                      ; 004f2ab4
        ;   XREF to: 004f2aed (CONDITIONAL_JUMP)  ; LAB_004f2aed
    PUSH EBX                            ; 004f2ab6
        ;   Label: LAB_004f2ab6
    PUSH ESI                            ; 004f2ab7
    CALL engine_pcx.c_writePCXScanline_FUN_004f2550 ; 004f2ab8
        ;   XREF to: 004f2550 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_writePCXScanline_FUN_004f2550(int row_index, _FILE * pcx_file)
    MOV EAX,[0x005b761c]                ; 004f2abd | g_WindowWidth
    ADD ESP,0x8                         ; 004f2ac2
    CMP EAX,0x280                       ; 004f2ac5
    JNZ 0x004f2ae2                      ; 004f2aca
        ;   XREF to: 004f2ae2 (CONDITIONAL_JUMP)  ; LAB_004f2ae2
    CMP dword ptr [0x005b7620],0xf0     ; 004f2acc | g_WindowHeight
    JNZ 0x004f2ae2                      ; 004f2ad6
        ;   XREF to: 004f2ae2 (CONDITIONAL_JUMP)  ; LAB_004f2ae2
    PUSH EBX                            ; 004f2ad8
    PUSH ESI                            ; 004f2ad9
    CALL engine_pcx.c_writePCXScanline_FUN_004f2550 ; 004f2ada
        ;   XREF to: 004f2550 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_writePCXScanline_FUN_004f2550(int row_index, _FILE * pcx_file)
    ADD ESP,0x8                         ; 004f2adf
    MOV ECX,dword ptr [0x005b7620]      ; 004f2ae2 | g_WindowHeight
        ;   Label: LAB_004f2ae2
    INC ESI                             ; 004f2ae8
    CMP ESI,ECX                         ; 004f2ae9
    JL 0x004f2ab6                       ; 004f2aeb
        ;   XREF to: 004f2ab6 (CONDITIONAL_JUMP)  ; LAB_004f2ab6
    TEST byte ptr [EBX + 0xd],0x4       ; 004f2aed
        ;   Label: LAB_004f2aed
    JZ 0x004f2b4f                       ; 004f2af1
        ;   XREF to: 004f2b4f (CONDITIONAL_JUMP)  ; LAB_004f2b4f
    PUSH EBX                            ; 004f2af3
        ;   Label: LAB_004f2af3
    PUSH 0xc                            ; 004f2af4
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 004f2af6
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_00566cc0(int character, _FILE * file)
        ;   Label: LAB_004f2af6
    ADD ESP,0x8                         ; 004f2afb
    XOR ESI,ESI                         ; 004f2afe
        ;   Label: LAB_004f2afe
    TEST byte ptr [EBX + 0xd],0x4       ; 004f2b00
        ;   Label: LAB_004f2b00
    JZ 0x004f2b8a                       ; 004f2b04
        ;   XREF to: 004f2b8a (CONDITIONAL_JUMP)  ; LAB_004f2b8a
    XOR EAX,EAX                         ; 004f2b0a
        ;   Label: LAB_004f2b0a
    PUSH EBX                            ; 004f2b0c
    MOV AL,byte ptr [ESI + 0x1c00648]   ; 004f2b0d
    PUSH EAX                            ; 004f2b13
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 004f2b14
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_00566cc0(int character, _FILE * file)
        ;   Label: LAB_004f2b14
    ADD ESP,0x8                         ; 004f2b19
    INC ESI                             ; 004f2b1c
        ;   Label: LAB_004f2b1c
    CMP ESI,0x300                       ; 004f2b1d
    JL 0x004f2b00                       ; 004f2b23
        ;   XREF to: 004f2b00 (CONDITIONAL_JUMP)  ; LAB_004f2b00
    PUSH EBX                            ; 004f2b25
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f2b26
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004f2b2b
    POP ESI                             ; 004f2b2e
    POP EDI                             ; 004f2b2f
    ADD ESP,0x80                        ; 004f2b30
        ;   Label: LAB_004f2b30
    POP EBP                             ; 004f2b36
    POP EBX                             ; 004f2b37
    RET                                 ; 004f2b38
    PUSH EBX                            ; 004f2b39
        ;   Label: LAB_004f2b39
    CALL engine_pcx.c_saveScreenRaw16_FUN_004f2620 ; 004f2b3a
        ;   XREF to: 004f2620 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_saveScreenRaw16_FUN_004f2620(char * filename)
    ADD ESP,0x4                         ; 004f2b3f
    JMP 0x004f2b30                      ; 004f2b42
        ;   XREF to: 004f2b30 (UNCONDITIONAL_JUMP)  ; LAB_004f2b30
    PUSH EBX                            ; 004f2b44
        ;   Label: LAB_004f2b44
    CALL engine_pcx.c_saveScreenRaw32_FUN_004f27e0 ; 004f2b45
        ;   XREF to: 004f27e0 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_saveScreenRaw32_FUN_004f27e0(char * filename)
    ADD ESP,0x4                         ; 004f2b4a
    JMP 0x004f2b30                      ; 004f2b4d
        ;   XREF to: 004f2b30 (UNCONDITIONAL_JUMP)  ; LAB_004f2b30
    MOV ESI,dword ptr [EBX + 0x4]       ; 004f2b4f
        ;   Label: LAB_004f2b4f
    MOV EAX,dword ptr [EBX + 0x14]      ; 004f2b52
    SUB EAX,ESI                         ; 004f2b55
    CMP EAX,0x1                         ; 004f2b57
    JBE 0x004f2af3                      ; 004f2b5a
        ;   XREF to: 004f2af3 (CONDITIONAL_JUMP)  ; LAB_004f2af3
    MOV EAX,dword ptr [EBX]             ; 004f2b5c
    MOV byte ptr [EAX],0xc              ; 004f2b5e
    MOV EAX,dword ptr [EBX]             ; 004f2b61
    CMP byte ptr [EAX],0xa              ; 004f2b63
    JZ 0x004f2b82                       ; 004f2b66
        ;   XREF to: 004f2b82 (CONDITIONAL_JUMP)  ; LAB_004f2b82
    MOV EDI,dword ptr [EBX + 0x4]       ; 004f2b68
    MOV EBP,dword ptr [EBX]             ; 004f2b6b
    MOV DH,byte ptr [EBX + 0xd]         ; 004f2b6d
    INC EDI                             ; 004f2b70
    INC EBP                             ; 004f2b71
    MOV dword ptr [EBX + 0x4],EDI       ; 004f2b72
    OR DH,0x10                          ; 004f2b75
    MOV dword ptr [EBX],EBP             ; 004f2b78
    MOV byte ptr [EBX + 0xd],DH         ; 004f2b7a
    JMP 0x004f2afe                      ; 004f2b7d
        ;   XREF to: 004f2afe (UNCONDITIONAL_JUMP)  ; LAB_004f2afe
    PUSH EBX                            ; 004f2b82
        ;   Label: LAB_004f2b82
    PUSH 0xa                            ; 004f2b83
    JMP 0x004f2af6                      ; 004f2b85
        ;   XREF to: 004f2af6 (UNCONDITIONAL_JUMP)  ; LAB_004f2af6
    MOV ECX,dword ptr [EBX + 0x4]       ; 004f2b8a
        ;   Label: LAB_004f2b8a
    MOV EAX,dword ptr [EBX + 0x14]      ; 004f2b8d
    SUB EAX,ECX                         ; 004f2b90
    CMP EAX,0x1                         ; 004f2b92
    JBE 0x004f2b0a                      ; 004f2b95
        ;   XREF to: 004f2b0a (CONDITIONAL_JUMP)  ; LAB_004f2b0a
    MOV EDX,dword ptr [EBX]             ; 004f2b9b
    MOV AL,byte ptr [ESI + 0x1c00648]   ; 004f2b9d
    MOV byte ptr [EDX],AL               ; 004f2ba3
    MOV EAX,dword ptr [EBX]             ; 004f2ba5
    CMP byte ptr [EAX],0xa              ; 004f2ba7
    JZ 0x004f2bc5                       ; 004f2baa
        ;   XREF to: 004f2bc5 (CONDITIONAL_JUMP)  ; LAB_004f2bc5
    MOV EDI,dword ptr [EBX + 0x4]       ; 004f2bac
    MOV EBP,dword ptr [EBX]             ; 004f2baf
    MOV AL,byte ptr [EBX + 0xd]         ; 004f2bb1
    INC EDI                             ; 004f2bb4
    INC EBP                             ; 004f2bb5
    MOV dword ptr [EBX + 0x4],EDI       ; 004f2bb6
    OR AL,0x10                          ; 004f2bb9
    MOV dword ptr [EBX],EBP             ; 004f2bbb
    MOV byte ptr [EBX + 0xd],AL         ; 004f2bbd
    JMP 0x004f2b1c                      ; 004f2bc0
        ;   XREF to: 004f2b1c (UNCONDITIONAL_JUMP)  ; LAB_004f2b1c
    PUSH EBX                            ; 004f2bc5
        ;   Label: LAB_004f2bc5
    PUSH 0xa                            ; 004f2bc6
    JMP 0x004f2b14                      ; 004f2bc8
        ;   XREF to: 004f2b14 (UNCONDITIONAL_JUMP)  ; LAB_004f2b14


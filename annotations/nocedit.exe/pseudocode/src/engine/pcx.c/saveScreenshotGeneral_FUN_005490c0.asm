; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x88]:1  local_88
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
; XREF[4]:
;   core_cloth.cpp_CCloth_boneEditor_FUN_0043c880 at 0043cb3a
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047d57f
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da49b
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00597394
;
; Referenced Globals:
;   TerminatedCString s_engine_pcx_c_0063ec0c
;   TerminatedCString s_wb_0063ec1c
;   TerminatedCString s_engine_pcx_c_0063ec1f
;   TerminatedCString s_Cannot_write_PCX_0063ec2f
;   TerminatedCString s_engine_pcx_c_0063ec41
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   char[768] g_SourcePaletteData
;   undefined4 CHAR_ARRAY_02d01f49
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_fputc_FUN_006007a0
;   crt_stdio.c_fwrite_FUN_005fdc00
;   engine_pcx.c_saveScreenRaw16_FUN_00548d20
;   engine_pcx.c_saveScreenRaw32_FUN_00548f00
;   engine_pcx.c_writePCXScanline_FUN_00548c50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005490c0
        ;   Label: engine_pcx.c_saveScreenshotGeneral_FUN_005490c0
    PUSH EBP                            ; 005490c1
    SUB ESP,0x80                        ; 005490c2
    MOV EBX,dword ptr [ESP + 0x8c]      ; 005490c8
    MOV EDX,dword ptr [0x0067939c]      ; 005490cf | g_BitsPerPixel
    CMP EDX,0x10                        ; 005490d5
    JZ 0x0054927f                       ; 005490d8
        ;   XREF to: 0054927f (CONDITIONAL_JUMP)  ; LAB_0054927f
    CMP EDX,0x20                        ; 005490de
    JZ 0x0054928a                       ; 005490e1
        ;   XREF to: 0054928a (CONDITIONAL_JUMP)  ; LAB_0054928a
    PUSH EDI                            ; 005490e7
    PUSH ESI                            ; 005490e8
    PUSH 0x80                           ; 005490e9
    PUSH 0x0                            ; 005490ee
    LEA EAX,[ESP + 0x10]                ; 005490f0
    PUSH EAX                            ; 005490f4
    MOV ESI,0x1                         ; 005490f5
    CALL crt_memory.c_memset_FUN_005fde40 ; 005490fa
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV AH,0xa                          ; 005490ff
    MOV DL,0x5                          ; 00549101
    ADD ESP,0xc                         ; 00549103
    MOV CL,0x8                          ; 00549106
    MOV byte ptr [ESP + 0x8],AH         ; 00549108
    MOV byte ptr [ESP + 0x9],DL         ; 0054910c
    MOV byte ptr [ESP + 0xb],CL         ; 00549110
    MOV word ptr [ESP + 0x4c],SI        ; 00549114
    MOV DH,0x1                          ; 00549119
    MOV CH,0x1                          ; 0054911b
    MOV AX,[0x00679394]                 ; 0054911d | g_WindowWidth
    MOV ESI,dword ptr [0x00679394]      ; 00549123 | g_WindowWidth
    DEC EAX                             ; 00549129
    MOV byte ptr [ESP + 0xa],DH         ; 0054912a
    MOV word ptr [ESP + 0x10],AX        ; 0054912e
    MOV AX,[0x00679398]                 ; 00549133 | g_WindowHeight
    MOV byte ptr [ESP + 0x49],CH        ; 00549139
    DEC EAX                             ; 0054913d
    XOR EDX,EDX                         ; 0054913e
    MOV word ptr [ESP + 0x12],AX        ; 00549140
    MOV AX,[0x00679394]                 ; 00549145 | g_WindowWidth
    MOV word ptr [ESP + 0xc],DX         ; 0054914b
    MOV word ptr [ESP + 0x4a],AX        ; 00549150
    MOV word ptr [ESP + 0x4e],AX        ; 00549155
    MOV AX,[0x00679398]                 ; 0054915a | g_WindowHeight
    MOV word ptr [ESP + 0xe],DX         ; 00549160
    MOV word ptr [ESP + 0x50],AX        ; 00549165
    CMP ESI,0x280                       ; 0054916a
    JNZ 0x0054918f                      ; 00549170
        ;   XREF to: 0054918f (CONDITIONAL_JUMP)  ; LAB_0054918f
    CMP dword ptr [0x00679398],0xf0     ; 00549172 | g_WindowHeight
    JNZ 0x0054918f                      ; 0054917c
        ;   XREF to: 0054918f (CONDITIONAL_JUMP)  ; LAB_0054918f
    MOV EDI,EAX                         ; 0054917e
    ADD EDI,EAX                         ; 00549180
    ADD EAX,EAX                         ; 00549182
    DEC EAX                             ; 00549184
    MOV word ptr [ESP + 0x50],DI        ; 00549185
    MOV word ptr [ESP + 0x12],AX        ; 0054918a
    PUSH 0xec                           ; 0054918f
        ;   Label: LAB_0054918f
    PUSH 0x63ec0c                       ; 00549194 | = "..\\engine\\pcx.c"
    PUSH 0x63ec1c                       ; 00549199 | = "wb"
    PUSH 0x0                            ; 0054919e
    PUSH EBX                            ; 005491a0
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005491a1
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 005491a6
    MOV EBX,EAX                         ; 005491a9
    TEST EAX,EAX                        ; 005491ab
    JNZ 0x005491d1                      ; 005491ad
        ;   XREF to: 005491d1 (CONDITIONAL_JUMP)  ; LAB_005491d1
    MOV EBP,0x63ec1f                    ; 005491af | = "..\\engine\\pcx.c"
    MOV EAX,0xed                        ; 005491b4
    PUSH 0x63ec2f                       ; 005491b9 | = "Cannot write .PCX"
    MOV dword ptr [0x02f0ca48],EBP      ; 005491be | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005491c4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005491c9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005491ce
    PUSH EBX                            ; 005491d1
        ;   Label: LAB_005491d1
    PUSH 0x80                           ; 005491d2
    PUSH 0x1                            ; 005491d7
    LEA EAX,[ESP + 0x14]                ; 005491d9
    PUSH EAX                            ; 005491dd
    XOR ESI,ESI                         ; 005491de
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 005491e0
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    MOV EDX,dword ptr [0x00679398]      ; 005491e5 | g_WindowHeight
    ADD ESP,0x10                        ; 005491eb
    TEST EDX,EDX                        ; 005491ee
    JLE 0x00549229                      ; 005491f0
        ;   XREF to: 00549229 (CONDITIONAL_JUMP)  ; LAB_00549229
    PUSH EBX                            ; 005491f2
        ;   Label: LAB_005491f2
    PUSH ESI                            ; 005491f3
    CALL engine_pcx.c_writePCXScanline_FUN_00548c50 ; 005491f4
        ;   XREF to: 00548c50 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_writePCXScanline_FUN_00548c50(int row_index, _FILE * pcx_file)
    MOV EAX,[0x00679394]                ; 005491f9 | g_WindowWidth
    ADD ESP,0x8                         ; 005491fe
    CMP EAX,0x280                       ; 00549201
    JNZ 0x0054921e                      ; 00549206
        ;   XREF to: 0054921e (CONDITIONAL_JUMP)  ; LAB_0054921e
    CMP dword ptr [0x00679398],0xf0     ; 00549208 | g_WindowHeight
    JNZ 0x0054921e                      ; 00549212
        ;   XREF to: 0054921e (CONDITIONAL_JUMP)  ; LAB_0054921e
    PUSH EBX                            ; 00549214
    PUSH ESI                            ; 00549215
    CALL engine_pcx.c_writePCXScanline_FUN_00548c50 ; 00549216
        ;   XREF to: 00548c50 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_writePCXScanline_FUN_00548c50(int row_index, _FILE * pcx_file)
    ADD ESP,0x8                         ; 0054921b
    MOV ECX,dword ptr [0x00679398]      ; 0054921e | g_WindowHeight
        ;   Label: LAB_0054921e
    INC ESI                             ; 00549224
    CMP ESI,ECX                         ; 00549225
    JL 0x005491f2                       ; 00549227
        ;   XREF to: 005491f2 (CONDITIONAL_JUMP)  ; LAB_005491f2
    TEST byte ptr [EBX + 0xd],0x4       ; 00549229
        ;   Label: LAB_00549229
    JZ 0x00549295                       ; 0054922d
        ;   XREF to: 00549295 (CONDITIONAL_JUMP)  ; LAB_00549295
    PUSH EBX                            ; 0054922f
        ;   Label: LAB_0054922f
    PUSH 0xc                            ; 00549230
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00549232
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
        ;   Label: LAB_00549232
    ADD ESP,0x8                         ; 00549237
    XOR ESI,ESI                         ; 0054923a
        ;   Label: LAB_0054923a
    TEST byte ptr [EBX + 0xd],0x4       ; 0054923c
        ;   Label: LAB_0054923c
    JZ 0x005492d0                       ; 00549240
        ;   XREF to: 005492d0 (CONDITIONAL_JUMP)  ; LAB_005492d0
    XOR EAX,EAX                         ; 00549246
        ;   Label: LAB_00549246
    PUSH EBX                            ; 00549248
    MOV AL,byte ptr [ESI + 0x2d01f48]   ; 00549249 | g_SourcePaletteData | CHAR_ARRAY_02d01f49
    PUSH EAX                            ; 0054924f
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00549250
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
        ;   Label: LAB_00549250
    ADD ESP,0x8                         ; 00549255
    INC ESI                             ; 00549258
        ;   Label: LAB_00549258
    CMP ESI,0x300                       ; 00549259
    JL 0x0054923c                       ; 0054925f
        ;   XREF to: 0054923c (CONDITIONAL_JUMP)  ; LAB_0054923c
    PUSH 0x104                          ; 00549261
    PUSH 0x63ec41                       ; 00549266 | = "..\\engine\\pcx.c"
    PUSH EBX                            ; 0054926b
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0054926c
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00549271
    POP ESI                             ; 00549274
    POP EDI                             ; 00549275
    ADD ESP,0x80                        ; 00549276
        ;   Label: LAB_00549276
    POP EBP                             ; 0054927c
    POP EBX                             ; 0054927d
    RET                                 ; 0054927e
    PUSH EBX                            ; 0054927f
        ;   Label: LAB_0054927f
    CALL engine_pcx.c_saveScreenRaw16_FUN_00548d20 ; 00549280
        ;   XREF to: 00548d20 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_saveScreenRaw16_FUN_00548d20(char * filename)
    ADD ESP,0x4                         ; 00549285
    JMP 0x00549276                      ; 00549288
        ;   XREF to: 00549276 (UNCONDITIONAL_JUMP)  ; LAB_00549276
    PUSH EBX                            ; 0054928a
        ;   Label: LAB_0054928a
    CALL engine_pcx.c_saveScreenRaw32_FUN_00548f00 ; 0054928b
        ;   XREF to: 00548f00 (UNCONDITIONAL_CALL)  ; void engine_pcx.c_saveScreenRaw32_FUN_00548f00(char * filename)
    ADD ESP,0x4                         ; 00549290
    JMP 0x00549276                      ; 00549293
        ;   XREF to: 00549276 (UNCONDITIONAL_JUMP)  ; LAB_00549276
    MOV ESI,dword ptr [EBX + 0x4]       ; 00549295
        ;   Label: LAB_00549295
    MOV EAX,dword ptr [EBX + 0x14]      ; 00549298
    SUB EAX,ESI                         ; 0054929b
    CMP EAX,0x1                         ; 0054929d
    JBE 0x0054922f                      ; 005492a0
        ;   XREF to: 0054922f (CONDITIONAL_JUMP)  ; LAB_0054922f
    MOV EAX,dword ptr [EBX]             ; 005492a2
    MOV byte ptr [EAX],0xc              ; 005492a4
    MOV EAX,dword ptr [EBX]             ; 005492a7
    CMP byte ptr [EAX],0xa              ; 005492a9
    JZ 0x005492c8                       ; 005492ac
        ;   XREF to: 005492c8 (CONDITIONAL_JUMP)  ; LAB_005492c8
    MOV EDI,dword ptr [EBX + 0x4]       ; 005492ae
    MOV EBP,dword ptr [EBX]             ; 005492b1
    MOV DH,byte ptr [EBX + 0xd]         ; 005492b3
    INC EDI                             ; 005492b6
    INC EBP                             ; 005492b7
    MOV dword ptr [EBX + 0x4],EDI       ; 005492b8
    OR DH,0x10                          ; 005492bb
    MOV dword ptr [EBX],EBP             ; 005492be
    MOV byte ptr [EBX + 0xd],DH         ; 005492c0
    JMP 0x0054923a                      ; 005492c3
        ;   XREF to: 0054923a (UNCONDITIONAL_JUMP)  ; LAB_0054923a
    PUSH EBX                            ; 005492c8
        ;   Label: LAB_005492c8
    PUSH 0xa                            ; 005492c9
    JMP 0x00549232                      ; 005492cb
        ;   XREF to: 00549232 (UNCONDITIONAL_JUMP)  ; LAB_00549232
    MOV ECX,dword ptr [EBX + 0x4]       ; 005492d0
        ;   Label: LAB_005492d0
    MOV EAX,dword ptr [EBX + 0x14]      ; 005492d3
    SUB EAX,ECX                         ; 005492d6
    CMP EAX,0x1                         ; 005492d8
    JBE 0x00549246                      ; 005492db
        ;   XREF to: 00549246 (CONDITIONAL_JUMP)  ; LAB_00549246
    MOV EDX,dword ptr [EBX]             ; 005492e1
    MOV AL,byte ptr [ESI + 0x2d01f48]   ; 005492e3 | g_SourcePaletteData | CHAR_ARRAY_02d01f49
    MOV byte ptr [EDX],AL               ; 005492e9
    MOV EAX,dword ptr [EBX]             ; 005492eb
    CMP byte ptr [EAX],0xa              ; 005492ed
    JZ 0x0054930b                       ; 005492f0
        ;   XREF to: 0054930b (CONDITIONAL_JUMP)  ; LAB_0054930b
    MOV EDI,dword ptr [EBX + 0x4]       ; 005492f2
    MOV EBP,dword ptr [EBX]             ; 005492f5
    MOV AL,byte ptr [EBX + 0xd]         ; 005492f7
    INC EDI                             ; 005492fa
    INC EBP                             ; 005492fb
    MOV dword ptr [EBX + 0x4],EDI       ; 005492fc
    OR AL,0x10                          ; 005492ff
    MOV dword ptr [EBX],EBP             ; 00549301
    MOV byte ptr [EBX + 0xd],AL         ; 00549303
    JMP 0x00549258                      ; 00549306
        ;   XREF to: 00549258 (UNCONDITIONAL_JUMP)  ; LAB_00549258
    PUSH EBX                            ; 0054930b
        ;   Label: LAB_0054930b
    PUSH 0xa                            ; 0054930c
    JMP 0x00549250                      ; 0054930e
        ;   XREF to: 00549250 (UNCONDITIONAL_JUMP)  ; LAB_00549250


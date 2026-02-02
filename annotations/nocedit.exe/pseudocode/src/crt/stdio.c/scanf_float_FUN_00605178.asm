; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_stdio_c_scanf_float_FUN_00605178(scanf_state_t *state,va_list_t *args)
;
; Parameters:
; scanf_state_t *  Stack[0x4]:4   state
; va_list_t *      Stack[0x8]:4   args
; Local Variables:
; undefined1       Stack[-0x80]:1  local_80
; undefined1       Stack[-0x7f]:1  local_7f
; undefined1       Stack[-0x7e]:1  local_7e
; undefined1       Stack[-0x7d]:1  local_7d
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x7b]:1  local_7b
; undefined1       Stack[-0x7a]:1  local_7a
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_stdio.c_doscan_FUN_00604950 at 00604b43
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;   STRTOD_FUNC* PTR_crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30_00685410 = 0060ad30
;
; Called Functions:
;   crt_math.c_doubleToFloat_FUN_0060b26c
;   crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30
;   crt_stdio.c_scanf_getc_with_width_FUN_00605918
;   crt_stdio.c_scanf_getc_wrapper_FUN_00604930
;   crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00605178
        ;   Label: crt_stdio.c_scanf_float_FUN_00605178
    PUSH ESI                            ; 00605179
    PUSH EDI                            ; 0060517a
    PUSH ES                             ; 0060517b
    PUSH EBP                            ; 0060517c
    SUB ESP,0x6c                        ; 0060517d
    MOV EBP,dword ptr [ESP + 0x84]      ; 00605180
    XOR EDI,EDI                         ; 00605187
    MOV ESI,ESP                         ; 00605189
    MOV dword ptr [ESP + 0x5c],EDI      ; 0060518b
    PUSH EBP                            ; 0060518f
        ;   Label: LAB_0060518f
    CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930 ; 00605190
        ;   XREF to: 00604930 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_wrapper_FUN_00604930(scanf_state_t * state)
    ADD ESP,0x4                         ; 00605195
    MOV CL,AL                           ; 00605198
    MOV EBX,EAX                         ; 0060519a
    INC CL                              ; 0060519c
    AND ECX,0xff                        ; 0060519e
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 006051a4 | g_CharacterClassificationTable
    JZ 0x006051b3                       ; 006051ab
        ;   XREF to: 006051b3 (CONDITIONAL_JUMP)  ; LAB_006051b3
    INC dword ptr [ESP + 0x5c]          ; 006051ad
    JMP 0x0060518f                      ; 006051b1
        ;   XREF to: 0060518f (UNCONDITIONAL_JUMP)  ; LAB_0060518f
    TEST byte ptr [EBP + 0x10],0x2      ; 006051b3
        ;   Label: LAB_006051b3
    JNZ 0x006053ad                      ; 006051b7
        ;   XREF to: 006053ad (CONDITIONAL_JUMP)  ; LAB_006053ad
    MOV ECX,dword ptr [EBP + 0xc]       ; 006051bd
    LEA EDX,[ECX + -0x1]                ; 006051c0
    MOV dword ptr [EBP + 0xc],EDX       ; 006051c3
    TEST ECX,ECX                        ; 006051c6
    JZ 0x006053a3                       ; 006051c8
        ;   XREF to: 006053a3 (CONDITIONAL_JUMP)  ; LAB_006053a3
    CMP EAX,0x2b                        ; 006051ce
    JZ 0x006051d8                       ; 006051d1
        ;   XREF to: 006051d8 (CONDITIONAL_JUMP)  ; LAB_006051d8
    CMP EAX,0x2d                        ; 006051d3
    JNZ 0x006051f8                      ; 006051d6
        ;   XREF to: 006051f8 (CONDITIONAL_JUMP)  ; LAB_006051f8
    MOV ECX,dword ptr [ESP + 0x5c]      ; 006051d8
        ;   Label: LAB_006051d8
    PUSH EBP                            ; 006051dc
    MOV byte ptr [ESI],BL               ; 006051dd
    INC ECX                             ; 006051df
    INC ESI                             ; 006051e0
    MOV dword ptr [ESP + 0x60],ECX      ; 006051e1
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 006051e5
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
    ADD ESP,0x4                         ; 006051ea
    MOV EBX,EAX                         ; 006051ed
    CMP EAX,-0x1                        ; 006051ef
    JZ 0x006053ad                       ; 006051f2
        ;   XREF to: 006053ad (CONDITIONAL_JUMP)  ; LAB_006053ad
    MOV AL,BL                           ; 006051f8
        ;   Label: LAB_006051f8
    INC AL                              ; 006051fa
    AND EAX,0xff                        ; 006051fc
    TEST byte ptr [EAX + 0x6849c4],0x20 ; 00605201 | g_CharacterClassificationTable
    JNZ 0x00605213                      ; 00605208
        ;   XREF to: 00605213 (CONDITIONAL_JUMP)  ; LAB_00605213
    CMP EBX,0x2e                        ; 0060520a
    JNZ 0x006053a3                      ; 0060520d
        ;   XREF to: 006053a3 (CONDITIONAL_JUMP)  ; LAB_006053a3
    XOR EAX,EAX                         ; 00605213
        ;   Label: LAB_00605213
    MOV dword ptr [ESP + 0x64],EAX      ; 00605215
    MOV dword ptr [ESP + 0x58],EAX      ; 00605219
    MOV AL,BL                           ; 0060521d
    INC AL                              ; 0060521f
    AND EAX,0xff                        ; 00605221
    TEST byte ptr [EAX + 0x6849c4],0x20 ; 00605226 | g_CharacterClassificationTable
    JZ 0x00605275                       ; 0060522d
        ;   XREF to: 00605275 (CONDITIONAL_JUMP)  ; LAB_00605275
    MOV dword ptr [ESP + 0x58],0x1      ; 0060522f
    MOV byte ptr [ESI],BL               ; 00605237
        ;   Label: LAB_00605237
    MOV AL,byte ptr [EBP + 0x10]        ; 00605239
    INC ESI                             ; 0060523c
    TEST AL,0x10                        ; 0060523d
    JZ 0x00605250                       ; 0060523f
        ;   XREF to: 00605250 (CONDITIONAL_JUMP)  ; LAB_00605250
    IMUL EAX,dword ptr [ESP + 0x66],0xa ; 00605241
    ADD EBX,EAX                         ; 00605246
    SUB EBX,0x30                        ; 00605248
    MOV word ptr [ESP + 0x66],BX        ; 0060524b
    PUSH EBP                            ; 00605250
        ;   Label: LAB_00605250
    INC EDI                             ; 00605251
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 00605252
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
    ADD ESP,0x4                         ; 00605257
    MOV EBX,EAX                         ; 0060525a
    CMP EAX,-0x1                        ; 0060525c
    JZ 0x006053ad                       ; 0060525f
        ;   XREF to: 006053ad (CONDITIONAL_JUMP)  ; LAB_006053ad
    INC AL                              ; 00605265
    AND EAX,0xff                        ; 00605267
    TEST byte ptr [EAX + 0x6849c4],0x20 ; 0060526c | g_CharacterClassificationTable
    JNZ 0x00605237                      ; 00605273
        ;   XREF to: 00605237 (CONDITIONAL_JUMP)  ; LAB_00605237
    CMP EBX,0x2e                        ; 00605275
        ;   Label: LAB_00605275
    JNZ 0x0060531f                      ; 00605278
        ;   XREF to: 0060531f (CONDITIONAL_JUMP)  ; LAB_0060531f
    PUSH EBP                            ; 0060527e
    MOV byte ptr [ESI],BL               ; 0060527f
    INC ESI                             ; 00605281
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 00605282
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
    ADD ESP,0x4                         ; 00605287
    MOV EBX,EAX                         ; 0060528a
    CMP EAX,-0x1                        ; 0060528c
    JZ 0x006053ad                       ; 0060528f
        ;   XREF to: 006053ad (CONDITIONAL_JUMP)  ; LAB_006053ad
    CMP dword ptr [ESP + 0x58],0x0      ; 00605295
    JNZ 0x006052b2                      ; 0060529a
        ;   XREF to: 006052b2 (CONDITIONAL_JUMP)  ; LAB_006052b2
    MOV AL,BL                           ; 0060529c
    INC AL                              ; 0060529e
    AND EAX,0xff                        ; 006052a0
    TEST byte ptr [EAX + 0x6849c4],0x20 ; 006052a5 | g_CharacterClassificationTable
    JZ 0x006053a3                       ; 006052ac
        ;   XREF to: 006053a3 (CONDITIONAL_JUMP)  ; LAB_006053a3
    INC EDI                             ; 006052b2
        ;   Label: LAB_006052b2
    MOV AL,BL                           ; 006052b3
        ;   Label: LAB_006052b3
    INC AL                              ; 006052b5
    AND EAX,0xff                        ; 006052b7
    TEST byte ptr [EAX + 0x6849c4],0x20 ; 006052bc | g_CharacterClassificationTable
    JZ 0x006052d9                       ; 006052c3
        ;   XREF to: 006052d9 (CONDITIONAL_JUMP)  ; LAB_006052d9
    PUSH EBP                            ; 006052c5
    INC EDI                             ; 006052c6
    MOV byte ptr [ESI],BL               ; 006052c7
    INC ESI                             ; 006052c9
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 006052ca
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
    ADD ESP,0x4                         ; 006052cf
    MOV EBX,EAX                         ; 006052d2
    CMP EAX,-0x1                        ; 006052d4
    JNZ 0x006052b3                      ; 006052d7
        ;   XREF to: 006052b3 (CONDITIONAL_JUMP)  ; LAB_006052b3
    TEST byte ptr [EBP + 0x10],0x10     ; 006052d9
        ;   Label: LAB_006052d9
    JZ 0x00605316                       ; 006052dd
        ;   XREF to: 00605316 (CONDITIONAL_JUMP)  ; LAB_00605316
    XOR EDX,EDX                         ; 006052df
    MOV ECX,ESI                         ; 006052e1
    MOV dword ptr [ESP + 0x68],EDX      ; 006052e3
    MOV AL,byte ptr [ECX + -0x1]        ; 006052e7
        ;   Label: LAB_006052e7
    DEC ECX                             ; 006052ea
    CMP AL,0x2e                         ; 006052eb
    JZ 0x0060530d                       ; 006052ed
        ;   XREF to: 0060530d (CONDITIONAL_JUMP)  ; LAB_0060530d
    SUB AL,0x30                         ; 006052ef
    MOV dword ptr [ESP + 0x60],0xa      ; 006052f1
    MOV byte ptr [ESP + 0x6a],AL        ; 006052f9
    XOR EDX,EDX                         ; 006052fd
    MOV EAX,dword ptr [ESP + 0x68]      ; 006052ff
    DIV dword ptr [ESP + 0x60]          ; 00605303
    MOV dword ptr [ESP + 0x68],EAX      ; 00605307
    JMP 0x006052e7                      ; 0060530b
        ;   XREF to: 006052e7 (UNCONDITIONAL_JUMP)  ; LAB_006052e7
    MOV EAX,dword ptr [ESP + 0x68]      ; 0060530d
        ;   Label: LAB_0060530d
    MOV word ptr [ESP + 0x64],AX        ; 00605311
    CMP EBX,-0x1                        ; 00605316
        ;   Label: LAB_00605316
    JZ 0x006053ad                       ; 00605319
        ;   XREF to: 006053ad (CONDITIONAL_JUMP)  ; LAB_006053ad
    TEST byte ptr [EBP + 0x10],0x10     ; 0060531f
        ;   Label: LAB_0060531f
    JNZ 0x006053a3                      ; 00605323
        ;   XREF to: 006053a3 (CONDITIONAL_JUMP)  ; LAB_006053a3
    CMP EBX,0x65                        ; 00605329
    JZ 0x00605337                       ; 0060532c
        ;   XREF to: 00605337 (CONDITIONAL_JUMP)  ; LAB_00605337
    CMP EBX,0x45                        ; 0060532e
    JNZ 0x006053a3                      ; 00605331
        ;   XREF to: 006053a3 (CONDITIONAL_JUMP)  ; LAB_006053a3
    PUSH EBP                            ; 00605337
        ;   Label: LAB_00605337
    INC EDI                             ; 00605338
    MOV byte ptr [ESI],BL               ; 00605339
    INC ESI                             ; 0060533b
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 0060533c
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
    ADD ESP,0x4                         ; 00605341
    MOV EBX,EAX                         ; 00605344
    CMP EAX,-0x1                        ; 00605346
    JZ 0x006053ad                       ; 00605349
        ;   XREF to: 006053ad (CONDITIONAL_JUMP)  ; LAB_006053ad
    CMP EAX,0x2b                        ; 0060534b
    JZ 0x00605355                       ; 0060534e
        ;   XREF to: 00605355 (CONDITIONAL_JUMP)  ; LAB_00605355
    CMP EAX,0x2d                        ; 00605350
    JNZ 0x00605369                      ; 00605353
        ;   XREF to: 00605369 (CONDITIONAL_JUMP)  ; LAB_00605369
    PUSH EBP                            ; 00605355
        ;   Label: LAB_00605355
    INC EDI                             ; 00605356
    MOV byte ptr [ESI],BL               ; 00605357
    INC ESI                             ; 00605359
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 0060535a
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
    ADD ESP,0x4                         ; 0060535f
    MOV EBX,EAX                         ; 00605362
    CMP EAX,-0x1                        ; 00605364
    JZ 0x006053ad                       ; 00605367
        ;   XREF to: 006053ad (CONDITIONAL_JUMP)  ; LAB_006053ad
    MOV AL,BL                           ; 00605369
        ;   Label: LAB_00605369
    INC AL                              ; 0060536b
    AND EAX,0xff                        ; 0060536d
    TEST byte ptr [EAX + 0x6849c4],0x20 ; 00605372 | g_CharacterClassificationTable
    JNZ 0x0060537f                      ; 00605379
        ;   XREF to: 0060537f (CONDITIONAL_JUMP)  ; LAB_0060537f
    XOR EDI,EDI                         ; 0060537b
    JMP 0x006053a3                      ; 0060537d
        ;   XREF to: 006053a3 (UNCONDITIONAL_JUMP)  ; LAB_006053a3
    PUSH EBP                            ; 0060537f
        ;   Label: LAB_0060537f
    INC EDI                             ; 00605380
    MOV byte ptr [ESI],BL               ; 00605381
    INC ESI                             ; 00605383
    CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918 ; 00605384
        ;   XREF to: 00605918 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_with_width_FUN_00605918(scanf_state_t * state)
    ADD ESP,0x4                         ; 00605389
    MOV EBX,EAX                         ; 0060538c
    CMP EAX,-0x1                        ; 0060538e
    JZ 0x006053ad                       ; 00605391
        ;   XREF to: 006053ad (CONDITIONAL_JUMP)  ; LAB_006053ad
    INC AL                              ; 00605393
    AND EAX,0xff                        ; 00605395
    TEST byte ptr [EAX + 0x6849c4],0x20 ; 0060539a | g_CharacterClassificationTable
    JNZ 0x0060537f                      ; 006053a1
        ;   XREF to: 0060537f (CONDITIONAL_JUMP)  ; LAB_0060537f
    PUSH EBP                            ; 006053a3
        ;   Label: LAB_006053a3
    PUSH EBX                            ; 006053a4
    CALL crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c ; 006053a5
        ;   XREF to: 0060493c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c(int character, scanf_state_t * state)
    ADD ESP,0x8                         ; 006053aa
    TEST EDI,EDI                        ; 006053ad
        ;   Label: LAB_006053ad
    JLE 0x00605470                      ; 006053af
        ;   XREF to: 00605470 (CONDITIONAL_JUMP)  ; LAB_00605470
    ADD EDI,dword ptr [ESP + 0x5c]      ; 006053b5
    TEST byte ptr [EBP + 0x10],0x1      ; 006053b9
    JZ 0x00605470                       ; 006053bd
        ;   XREF to: 00605470 (CONDITIONAL_JUMP)  ; LAB_00605470
    MOV byte ptr [ESI],0x0              ; 006053c3
    TEST byte ptr [EBP + 0x10],0x10     ; 006053c6
    JZ 0x006053d8                       ; 006053ca
        ;   XREF to: 006053d8 (CONDITIONAL_JUMP)  ; LAB_006053d8
    CMP byte ptr [ESP],0x2d             ; 006053cc
    JNZ 0x006053eb                      ; 006053d0
        ;   XREF to: 006053eb (CONDITIONAL_JUMP)  ; LAB_006053eb
    NEG dword ptr [ESP + 0x64]          ; 006053d2
    JMP 0x006053eb                      ; 006053d6
        ;   XREF to: 006053eb (UNCONDITIONAL_JUMP)  ; LAB_006053eb
    LEA EAX,[ESP + 0x50]                ; 006053d8
        ;   Label: LAB_006053d8
    PUSH EAX                            ; 006053dc
    LEA EAX,[ESP + 0x4]                 ; 006053dd
    PUSH EAX                            ; 006053e1
    CALL dword ptr [0x00685410]         ; 006053e2 | PTR_crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30_00685410
    ADD ESP,0x8                         ; 006053e8
    MOV CH,byte ptr [EBP + 0x10]        ; 006053eb
        ;   Label: LAB_006053eb
    TEST CH,0x4                         ; 006053ee
    JZ 0x00605406                       ; 006053f1
        ;   XREF to: 00605406 (CONDITIONAL_JUMP)  ; LAB_00605406
    MOV EAX,dword ptr [ESP + 0x88]      ; 006053f3
    MOV EBX,dword ptr [EAX]             ; 006053fa
    ADD EBX,0x8                         ; 006053fc
    MOV dword ptr [EAX],EBX             ; 006053ff
    LES EBX,[EBX + -0x8]                ; 00605401
    JMP 0x00605437                      ; 00605404
        ;   XREF to: 00605437 (UNCONDITIONAL_JUMP)  ; LAB_00605437
    TEST CH,0x8                         ; 00605406
        ;   Label: LAB_00605406
    JZ 0x00605422                       ; 00605409
        ;   XREF to: 00605422 (CONDITIONAL_JUMP)  ; LAB_00605422
    MOV EAX,dword ptr [ESP + 0x88]      ; 0060540b
    MOV EDX,dword ptr [EAX]             ; 00605412
    ADD EDX,0x4                         ; 00605414
    MOV dword ptr [EAX],EDX             ; 00605417
    MOV AX,DS                           ; 00605419
    MOV ES,AX                           ; 0060541b
    MOV EBX,dword ptr [EDX + -0x4]      ; 0060541d
    JMP 0x00605437                      ; 00605420
        ;   XREF to: 00605437 (UNCONDITIONAL_JUMP)  ; LAB_00605437
    MOV EAX,dword ptr [ESP + 0x88]      ; 00605422
        ;   Label: LAB_00605422
    MOV ESI,dword ptr [EAX]             ; 00605429
    ADD ESI,0x4                         ; 0060542b
    MOV dword ptr [EAX],ESI             ; 0060542e
    MOV AX,DS                           ; 00605430
    MOV ES,AX                           ; 00605432
    MOV EBX,dword ptr [ESI + -0x4]      ; 00605434
    MOV AH,byte ptr [EBP + 0x10]        ; 00605437
        ;   Label: LAB_00605437
    TEST AH,0x10                        ; 0060543a
    JZ 0x00605445                       ; 0060543d
        ;   XREF to: 00605445 (CONDITIONAL_JUMP)  ; LAB_00605445
    MOV EAX,dword ptr [ESP + 0x64]      ; 0060543f
    JMP 0x0060546d                      ; 00605443
        ;   XREF to: 0060546d (UNCONDITIONAL_JUMP)  ; LAB_0060546d
    TEST AH,0x20                        ; 00605445
        ;   Label: LAB_00605445
    JNZ 0x0060544f                      ; 00605448
        ;   XREF to: 0060544f (CONDITIONAL_JUMP)  ; LAB_0060544f
    TEST AH,0x40                        ; 0060544a
    JZ 0x00605460                       ; 0060544d
        ;   XREF to: 00605460 (CONDITIONAL_JUMP)  ; LAB_00605460
    MOV EAX,dword ptr [ESP + 0x50]      ; 0060544f
        ;   Label: LAB_0060544f
    MOV dword ptr ES:[EBX],EAX          ; 00605453
    MOV EAX,dword ptr [ESP + 0x54]      ; 00605456
    MOV dword ptr ES:[EBX + 0x4],EAX    ; 0060545a
    JMP 0x00605470                      ; 0060545e
        ;   XREF to: 00605470 (UNCONDITIONAL_JUMP)  ; LAB_00605470
    MOV EAX,dword ptr [ESP + 0x50]      ; 00605460
        ;   Label: LAB_00605460
    MOV EDX,dword ptr [ESP + 0x54]      ; 00605464
    CALL crt_math.c_doubleToFloat_FUN_0060b26c ; 00605468
        ;   XREF to: 0060b26c (UNCONDITIONAL_CALL)  ; float crt_math.c_doubleToFloat_FUN_0060b26c(double val)
    MOV dword ptr ES:[EBX],EAX          ; 0060546d
        ;   Label: LAB_0060546d
    MOV EAX,EDI                         ; 00605470
        ;   Label: LAB_00605470
    ADD ESP,0x6c                        ; 00605472
    POP EBP                             ; 00605475
    POP ES                              ; 00605476
    POP EDI                             ; 00605477
    POP ESI                             ; 00605478
    POP EBX                             ; 00605479
    RET                                 ; 0060547a


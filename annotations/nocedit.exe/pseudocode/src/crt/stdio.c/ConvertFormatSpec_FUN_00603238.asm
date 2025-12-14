; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * crt_stdio.c_ConvertFormatSpec_FUN_00603238(char * output_buffer, va_list_t * args, FormatSpec * spec_info)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
; va_list_t *      Stack[0x8]:4   args
; FormatSpec *     Stack[0xc]:4   spec_info
; Local Variables:
; longlong         Stack[-0x24]:8  value_64bit
; char[2]          Stack[-0x1c]:2  mb_char_buffer
; ushort           Stack[-0x18]:2  segment_storage
;
; XREF[1]:
;   crt_stdio.c_FormatEngine_FUN_00602950 at 00602b8b
;
; Referenced Globals:
;   int g_MultibyteLocaleActive
;   char[256] g_LeadByteTable
;
; Called Functions:
;   crt_stdio.c_CalculateZeroPadding_FUN_0060317c
;   crt_stdio.c_FloatingPointStub_FUN_00603160
;   crt_stdio.c_FormatFixedPoint_FUN_0060305c
;   crt_stdio.c_FormatHexWithPadding_FUN_00602ff8
;   crt_stdio.c_WideCharToSingleByte_FUN_0060acf0
;   crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c
;   crt_stdlib.c_i64toa_FUN_0060ad40
;   crt_stdlib.c_utoa_FUN_0060ae50
;   crt_string.c_strlen_far_FUN_00602f4c
;   crt_string.c_strupr_FUN_0060389c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00603238
        ;   Label: crt_stdio.c_ConvertFormatSpec_FUN_00603238
    PUSH ESI                            ; 00603239
    PUSH EDI                            ; 0060323a
    PUSH ES                             ; 0060323b
    PUSH EBP                            ; 0060323c
    SUB ESP,0x10                        ; 0060323d
    MOV ESI,dword ptr [ESP + 0x28]      ; 00603240
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00603244
    MOV EBX,dword ptr [ESP + 0x30]      ; 00603248
    MOV dword ptr [EBX + 0x20],0x0      ; 0060324c
    MOV dword ptr [EBX + 0x24],0x0      ; 00603253
    MOV dword ptr [EBX + 0x28],0x0      ; 0060325a
    MOV dword ptr [EBX + 0x2c],0x0      ; 00603261
    MOV word ptr [ESP + 0xc],DS         ; 00603268
    MOV dword ptr [EBX + 0x30],0x0      ; 0060326c
    MOV EDI,ESI                         ; 00603273
    MOV AL,byte ptr [EBX + 0x15]        ; 00603275
    MOV dword ptr [EBX + 0x34],0x0      ; 00603278
    CMP AL,0x69                         ; 0060327f
    JC 0x006032a1                       ; 00603281
        ;   XREF to: 006032a1 (CONDITIONAL_JUMP)  ; LAB_006032a1
    JBE 0x0060330e                      ; 00603283
        ;   XREF to: 0060330e (CONDITIONAL_JUMP)  ; LAB_0060330e
    CMP AL,0x75                         ; 00603289
    JC 0x00603298                       ; 0060328b
        ;   XREF to: 00603298 (CONDITIONAL_JUMP)  ; LAB_00603298
    JBE 0x006032b4                      ; 0060328d
        ;   XREF to: 006032b4 (CONDITIONAL_JUMP)  ; LAB_006032b4
    CMP AL,0x78                         ; 0060328f
    JZ 0x006032b4                       ; 00603291
        ;   XREF to: 006032b4 (CONDITIONAL_JUMP)  ; LAB_006032b4
    JMP 0x006033d5                      ; 00603293
        ;   XREF to: 006033d5 (UNCONDITIONAL_JUMP)  ; LAB_006033d5
    CMP AL,0x6f                         ; 00603298
        ;   Label: LAB_00603298
    JZ 0x006032b4                       ; 0060329a
        ;   XREF to: 006032b4 (CONDITIONAL_JUMP)  ; LAB_006032b4
    JMP 0x006033d5                      ; 0060329c
        ;   XREF to: 006033d5 (UNCONDITIONAL_JUMP)  ; LAB_006033d5
    CMP AL,0x58                         ; 006032a1
        ;   Label: LAB_006032a1
    JC 0x006033d5                       ; 006032a3
        ;   XREF to: 006033d5 (CONDITIONAL_JUMP)  ; LAB_006033d5
    JBE 0x006032b4                      ; 006032a9
        ;   XREF to: 006032b4 (CONDITIONAL_JUMP)  ; LAB_006032b4
    CMP AL,0x64                         ; 006032ab
    JZ 0x0060330e                       ; 006032ad
        ;   XREF to: 0060330e (CONDITIONAL_JUMP)  ; LAB_0060330e
    JMP 0x006033d5                      ; 006032af
        ;   XREF to: 006033d5 (UNCONDITIONAL_JUMP)  ; LAB_006033d5
    TEST byte ptr [EBX + 0x1f],0x1      ; 006032b4
        ;   Label: LAB_006032b4
    JZ 0x006032da                       ; 006032b8
        ;   XREF to: 006032da (CONDITIONAL_JUMP)  ; LAB_006032da
    MOV EBP,dword ptr [EDX]             ; 006032ba
    ADD EBP,0x4                         ; 006032bc
    MOV dword ptr [EDX],EBP             ; 006032bf
    MOV EAX,dword ptr [EBP + -0x4]      ; 006032c1
    MOV dword ptr [ESP],EAX             ; 006032c4
    MOV EAX,dword ptr [EDX]             ; 006032c7
    ADD EAX,0x4                         ; 006032c9
    MOV dword ptr [EDX],EAX             ; 006032cc
    MOV EAX,dword ptr [EAX + -0x4]      ; 006032ce
    MOV dword ptr [ESP + 0x4],EAX       ; 006032d1
    JMP 0x006033d5                      ; 006032d5
        ;   XREF to: 006033d5 (UNCONDITIONAL_JUMP)  ; LAB_006033d5
    TEST byte ptr [EBX + 0x1e],0x20     ; 006032da
        ;   Label: LAB_006032da
    JZ 0x006032ef                       ; 006032de
        ;   XREF to: 006032ef (CONDITIONAL_JUMP)  ; LAB_006032ef
    MOV ECX,dword ptr [EDX]             ; 006032e0
    ADD ECX,0x4                         ; 006032e2
    MOV dword ptr [EDX],ECX             ; 006032e5
    MOV ECX,dword ptr [ECX + -0x4]      ; 006032e7
    JMP 0x006033d5                      ; 006032ea
        ;   XREF to: 006033d5 (UNCONDITIONAL_JUMP)  ; LAB_006033d5
    MOV EAX,dword ptr [EDX]             ; 006032ef
        ;   Label: LAB_006032ef
    ADD EAX,0x4                         ; 006032f1
    MOV dword ptr [EDX],EAX             ; 006032f4
    MOV ECX,dword ptr [EAX + -0x4]      ; 006032f6
    TEST byte ptr [EBX + 0x1e],0x10     ; 006032f9
    JZ 0x006033d5                       ; 006032fd
        ;   XREF to: 006033d5 (CONDITIONAL_JUMP)  ; LAB_006033d5
    AND ECX,0xffff                      ; 00603303
    JMP 0x006033d5                      ; 00603309
        ;   XREF to: 006033d5 (UNCONDITIONAL_JUMP)  ; LAB_006033d5
    TEST byte ptr [EBX + 0x1f],0x1      ; 0060330e
        ;   Label: LAB_0060330e
    JZ 0x00603331                       ; 00603312
        ;   XREF to: 00603331 (CONDITIONAL_JUMP)  ; LAB_00603331
    MOV EAX,dword ptr [EDX]             ; 00603314
    ADD EAX,0x4                         ; 00603316
    MOV dword ptr [EDX],EAX             ; 00603319
    MOV EAX,dword ptr [EAX + -0x4]      ; 0060331b
    MOV dword ptr [ESP],EAX             ; 0060331e
    MOV EBP,dword ptr [EDX]             ; 00603321
    ADD EBP,0x4                         ; 00603323
    MOV dword ptr [EDX],EBP             ; 00603326
    MOV EAX,dword ptr [EBP + -0x4]      ; 00603328
    MOV dword ptr [ESP + 0x4],EAX       ; 0060332b
    JMP 0x00603357                      ; 0060332f
        ;   XREF to: 00603357 (UNCONDITIONAL_JUMP)  ; LAB_00603357
    TEST byte ptr [EBX + 0x1e],0x20     ; 00603331
        ;   Label: LAB_00603331
    JZ 0x00603343                       ; 00603335
        ;   XREF to: 00603343 (CONDITIONAL_JUMP)  ; LAB_00603343
    MOV EBP,dword ptr [EDX]             ; 00603337
    ADD EBP,0x4                         ; 00603339
    MOV dword ptr [EDX],EBP             ; 0060333c
    MOV ECX,dword ptr [EBP + -0x4]      ; 0060333e
    JMP 0x00603357                      ; 00603341
        ;   XREF to: 00603357 (UNCONDITIONAL_JUMP)  ; LAB_00603357
    MOV ECX,dword ptr [EDX]             ; 00603343
        ;   Label: LAB_00603343
    ADD ECX,0x4                         ; 00603345
    MOV dword ptr [EDX],ECX             ; 00603348
    MOV AL,byte ptr [EBX + 0x1e]        ; 0060334a
    MOV ECX,dword ptr [ECX + -0x4]      ; 0060334d
    TEST AL,0x10                        ; 00603350
    JZ 0x00603357                       ; 00603352
        ;   XREF to: 00603357 (CONDITIONAL_JUMP)  ; LAB_00603357
    MOVSX ECX,CX                        ; 00603354
    XOR EAX,EAX                         ; 00603357
        ;   Label: LAB_00603357
    TEST byte ptr [EBX + 0x1f],0x1      ; 00603359
    JZ 0x00603368                       ; 0060335d
        ;   XREF to: 00603368 (CONDITIONAL_JUMP)  ; LAB_00603368
    TEST byte ptr [ESP + 0x7],0x80      ; 0060335f
    JZ 0x0060336c                       ; 00603364
        ;   XREF to: 0060336c (CONDITIONAL_JUMP)  ; LAB_0060336c
    JMP 0x00603370                      ; 00603366
        ;   XREF to: 00603370 (UNCONDITIONAL_JUMP)  ; LAB_00603370
    TEST ECX,ECX                        ; 00603368
        ;   Label: LAB_00603368
    JL 0x00603370                       ; 0060336a
        ;   XREF to: 00603370 (CONDITIONAL_JUMP)  ; LAB_00603370
    TEST EAX,EAX                        ; 0060336c
        ;   Label: LAB_0060336c
    JZ 0x006033ac                       ; 0060336e
        ;   XREF to: 006033ac (CONDITIONAL_JUMP)  ; LAB_006033ac
    MOV EAX,dword ptr [EBX + 0x20]      ; 00603370
        ;   Label: LAB_00603370
    LEA EBP,[EAX + 0x1]                 ; 00603373
    MOV dword ptr [EBX + 0x20],EBP      ; 00603376
    MOV byte ptr [ESI + EAX*0x1],0x2d   ; 00603379
    TEST byte ptr [EBX + 0x1f],0x1      ; 0060337d
    JZ 0x006033a8                       ; 00603381
        ;   XREF to: 006033a8 (CONDITIONAL_JUMP)  ; LAB_006033a8
    MOV EAX,dword ptr [ESP]             ; 00603383
    MOV EBP,dword ptr [ESP + 0x4]       ; 00603386
    NOT EAX                             ; 0060338a
    NOT EBP                             ; 0060338c
    MOV dword ptr [ESP],EAX             ; 0060338e
    MOV dword ptr [ESP + 0x4],EBP       ; 00603391
    INC EAX                             ; 00603395
    MOV dword ptr [ESP],EAX             ; 00603396
    JNZ 0x006033a0                      ; 00603399
        ;   XREF to: 006033a0 (CONDITIONAL_JUMP)  ; LAB_006033a0
    LEA EAX,[EBP + 0x1]                 ; 0060339b
    JMP 0x006033a2                      ; 0060339e
        ;   XREF to: 006033a2 (UNCONDITIONAL_JUMP)  ; LAB_006033a2
    MOV EAX,EBP                         ; 006033a0
        ;   Label: LAB_006033a0
    MOV dword ptr [ESP + 0x4],EAX       ; 006033a2
        ;   Label: LAB_006033a2
    JMP 0x006033d5                      ; 006033a6
        ;   XREF to: 006033d5 (UNCONDITIONAL_JUMP)  ; LAB_006033d5
    NEG ECX                             ; 006033a8
        ;   Label: LAB_006033a8
    JMP 0x006033d5                      ; 006033aa
        ;   XREF to: 006033d5 (UNCONDITIONAL_JUMP)  ; LAB_006033d5
    MOV AH,byte ptr [EBX + 0x1e]        ; 006033ac
        ;   Label: LAB_006033ac
    TEST AH,0x4                         ; 006033af
    JZ 0x006033c3                       ; 006033b2
        ;   XREF to: 006033c3 (CONDITIONAL_JUMP)  ; LAB_006033c3
    MOV EAX,dword ptr [EBX + 0x20]      ; 006033b4
    LEA EBP,[EAX + 0x1]                 ; 006033b7
    MOV dword ptr [EBX + 0x20],EBP      ; 006033ba
    MOV byte ptr [ESI + EAX*0x1],0x2b   ; 006033bd
    JMP 0x006033d5                      ; 006033c1
        ;   XREF to: 006033d5 (UNCONDITIONAL_JUMP)  ; LAB_006033d5
    TEST AH,0x2                         ; 006033c3
        ;   Label: LAB_006033c3
    JZ 0x006033d5                       ; 006033c6
        ;   XREF to: 006033d5 (CONDITIONAL_JUMP)  ; LAB_006033d5
    MOV EAX,dword ptr [EBX + 0x20]      ; 006033c8
    LEA EBP,[EAX + 0x1]                 ; 006033cb
    MOV dword ptr [EBX + 0x20],EBP      ; 006033ce
    MOV byte ptr [ESI + EAX*0x1],0x20   ; 006033d1
    MOV AL,byte ptr [EBX + 0x15]        ; 006033d5
        ;   Label: LAB_006033d5
    MOV EBP,0xa                         ; 006033d8
    CMP AL,0x64                         ; 006033dd
    JC 0x00603442                       ; 006033df
        ;   XREF to: 00603442 (CONDITIONAL_JUMP)  ; LAB_00603442
    JBE 0x00603627                      ; 006033e1
        ;   XREF to: 00603627 (CONDITIONAL_JUMP)  ; LAB_00603627
    CMP AL,0x6f                         ; 006033e7
    JC 0x00603423                       ; 006033e9
        ;   XREF to: 00603423 (CONDITIONAL_JUMP)  ; LAB_00603423
    JBE 0x00603607                      ; 006033eb
        ;   XREF to: 00603607 (CONDITIONAL_JUMP)  ; LAB_00603607
    CMP AL,0x73                         ; 006033f1
    JC 0x00603416                       ; 006033f3
        ;   XREF to: 00603416 (CONDITIONAL_JUMP)  ; LAB_00603416
    JBE 0x006034f3                      ; 006033f5
        ;   XREF to: 006034f3 (CONDITIONAL_JUMP)  ; LAB_006034f3
    CMP AL,0x75                         ; 006033fb
    JC 0x0060387a                       ; 006033fd
        ;   XREF to: 0060387a (CONDITIONAL_JUMP)  ; LAB_0060387a
    JBE 0x00603627                      ; 00603403
        ;   XREF to: 00603627 (CONDITIONAL_JUMP)  ; LAB_00603627
    CMP AL,0x78                         ; 00603409
    JZ 0x006035c5                       ; 0060340b
        ;   XREF to: 006035c5 (CONDITIONAL_JUMP)  ; LAB_006035c5
    JMP 0x0060387a                      ; 00603411
        ;   XREF to: 0060387a (UNCONDITIONAL_JUMP)  ; LAB_0060387a
    CMP AL,0x70                         ; 00603416
        ;   Label: LAB_00603416
    JZ 0x00603702                       ; 00603418
        ;   XREF to: 00603702 (CONDITIONAL_JUMP)  ; LAB_00603702
    JMP 0x0060387a                      ; 0060341e
        ;   XREF to: 0060387a (UNCONDITIONAL_JUMP)  ; LAB_0060387a
    CMP AL,0x66                         ; 00603423
        ;   Label: LAB_00603423
    JC 0x006034c9                       ; 00603425
        ;   XREF to: 006034c9 (CONDITIONAL_JUMP)  ; LAB_006034c9
    JBE 0x00603493                      ; 0060342b
        ;   XREF to: 00603493 (CONDITIONAL_JUMP)  ; LAB_00603493
    CMP AL,0x67                         ; 0060342d
    JBE 0x006034c9                      ; 0060342f
        ;   XREF to: 006034c9 (CONDITIONAL_JUMP)  ; LAB_006034c9
    CMP AL,0x69                         ; 00603435
    JZ 0x00603627                       ; 00603437
        ;   XREF to: 00603627 (CONDITIONAL_JUMP)  ; LAB_00603627
    JMP 0x0060387a                      ; 0060343d
        ;   XREF to: 0060387a (UNCONDITIONAL_JUMP)  ; LAB_0060387a
    CMP AL,0x47                         ; 00603442
        ;   Label: LAB_00603442
    JC 0x0060347e                       ; 00603444
        ;   XREF to: 0060347e (CONDITIONAL_JUMP)  ; LAB_0060347e
    JBE 0x006034c9                      ; 00603446
        ;   XREF to: 006034c9 (CONDITIONAL_JUMP)  ; LAB_006034c9
    CMP AL,0x53                         ; 0060344c
    JC 0x00603471                       ; 0060344e
        ;   XREF to: 00603471 (CONDITIONAL_JUMP)  ; LAB_00603471
    JBE 0x006034f3                      ; 00603450
        ;   XREF to: 006034f3 (CONDITIONAL_JUMP)  ; LAB_006034f3
    CMP AL,0x58                         ; 00603456
    JC 0x0060387a                       ; 00603458
        ;   XREF to: 0060387a (CONDITIONAL_JUMP)  ; LAB_0060387a
    JBE 0x006035c5                      ; 0060345e
        ;   XREF to: 006035c5 (CONDITIONAL_JUMP)  ; LAB_006035c5
    CMP AL,0x63                         ; 00603464
    JZ 0x0060379a                       ; 00603466
        ;   XREF to: 0060379a (CONDITIONAL_JUMP)  ; LAB_0060379a
    JMP 0x0060387a                      ; 0060346c
        ;   XREF to: 0060387a (UNCONDITIONAL_JUMP)  ; LAB_0060387a
    CMP AL,0x50                         ; 00603471
        ;   Label: LAB_00603471
    JZ 0x00603702                       ; 00603473
        ;   XREF to: 00603702 (CONDITIONAL_JUMP)  ; LAB_00603702
    JMP 0x0060387a                      ; 00603479
        ;   XREF to: 0060387a (UNCONDITIONAL_JUMP)  ; LAB_0060387a
    CMP AL,0x45                         ; 0060347e
        ;   Label: LAB_0060347e
    JC 0x00603486                       ; 00603480
        ;   XREF to: 00603486 (CONDITIONAL_JUMP)  ; LAB_00603486
    JBE 0x006034c9                      ; 00603482
        ;   XREF to: 006034c9 (CONDITIONAL_JUMP)  ; LAB_006034c9
    JMP 0x00603493                      ; 00603484
        ;   XREF to: 00603493 (UNCONDITIONAL_JUMP)  ; LAB_00603493
    CMP AL,0x43                         ; 00603486
        ;   Label: LAB_00603486
    JZ 0x00603831                       ; 00603488
        ;   XREF to: 00603831 (CONDITIONAL_JUMP)  ; LAB_00603831
    JMP 0x0060387a                      ; 0060348e
        ;   XREF to: 0060387a (UNCONDITIONAL_JUMP)  ; LAB_0060387a
    TEST byte ptr [EBX + 0x1e],0x10     ; 00603493
        ;   Label: LAB_00603493
    JZ 0x006034c9                       ; 00603497
        ;   XREF to: 006034c9 (CONDITIONAL_JUMP)  ; LAB_006034c9
    MOV EBP,dword ptr [EDX]             ; 00603499
    ADD EBP,0x4                         ; 0060349b
    MOV dword ptr [EDX],EBP             ; 0060349e
    PUSH EBX                            ; 006034a0
    MOV ECX,dword ptr [EBP + -0x4]      ; 006034a1
    PUSH ECX                            ; 006034a4
    PUSH ESI                            ; 006034a5
    CALL crt_stdio.c_FormatFixedPoint_FUN_0060305c ; 006034a6
        ;   XREF to: 0060305c (UNCONDITIONAL_CALL)  ; void crt_stdio.c_FormatFixedPoint_FUN_0060305c(char * buffer, int fixed_point_value, FormatSpec * spec_info)
    ADD ESP,0xc                         ; 006034ab
    MOV AX,DS                           ; 006034ae
    PUSH -0x1                           ; 006034b0
    AND EAX,0xffff                      ; 006034b2
    PUSH EAX                            ; 006034b7
    PUSH ESI                            ; 006034b8
    CALL crt_string.c_strlen_far_FUN_00602f4c ; 006034b9
        ;   XREF to: 00602f4c (UNCONDITIONAL_CALL)  ; int crt_string.c_strlen_far_FUN_00602f4c(char * string_offset, ushort segment, int max_length)
    ADD ESP,0xc                         ; 006034be
    MOV dword ptr [EBX + 0x28],EAX      ; 006034c1
    JMP 0x0060388d                      ; 006034c4
        ;   XREF to: 0060388d (UNCONDITIONAL_JUMP)  ; LAB_0060388d
    PUSH EBX                            ; 006034c9
        ;   Label: LAB_006034c9
    PUSH EDX                            ; 006034ca
    PUSH ESI                            ; 006034cb
    CALL crt_stdio.c_FloatingPointStub_FUN_00603160 ; 006034cc
        ;   XREF to: 00603160 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_FloatingPointStub_FUN_00603160(char * buffer, va_list_t * args, FormatSpec * spec_info)
    ADD ESP,0xc                         ; 006034d1
    PUSH EBX                            ; 006034d4
    CALL crt_stdio.c_CalculateZeroPadding_FUN_0060317c ; 006034d5
        ;   XREF to: 0060317c (UNCONDITIONAL_CALL)  ; void crt_stdio.c_CalculateZeroPadding_FUN_0060317c(FormatSpec * spec_info)
    ADD ESP,0x4                         ; 006034da
    LEA EDI,[ESI + 0x1]                 ; 006034dd
    MOV word ptr [ESP + 0xc],DS         ; 006034e0
    MOV EDX,dword ptr [ESP + 0xc]       ; 006034e4
    MOV EAX,EDI                         ; 006034e8
    ADD ESP,0x10                        ; 006034ea
    POP EBP                             ; 006034ed
    POP ES                              ; 006034ee
    POP EDI                             ; 006034ef
    POP ESI                             ; 006034f0
    POP EBX                             ; 006034f1
    RET                                 ; 006034f2
    MOV byte ptr [ESI],0x0              ; 006034f3
        ;   Label: LAB_006034f3
    MOV CH,byte ptr [EBX + 0x1e]        ; 006034f6
    TEST CH,0x80                        ; 006034f9
    JZ 0x0060351d                       ; 006034fc
        ;   XREF to: 0060351d (CONDITIONAL_JUMP)  ; LAB_0060351d
    MOV ESI,dword ptr [EDX]             ; 006034fe
    ADD ESI,0x8                         ; 00603500
    MOV dword ptr [EDX],ESI             ; 00603503
    MOV EDX,dword ptr [ESI + -0x8]      ; 00603505
    MOV AX,word ptr [ESI + -0x4]        ; 00603508
    TEST EDX,EDX                        ; 0060350c
    JNZ 0x00603515                      ; 0060350e
        ;   XREF to: 00603515 (CONDITIONAL_JUMP)  ; LAB_00603515
    TEST AX,AX                          ; 00603510
    JZ 0x00603546                       ; 00603513
        ;   XREF to: 00603546 (CONDITIONAL_JUMP)  ; LAB_00603546
    MOV dword ptr [ESP + 0xc],EAX       ; 00603515
        ;   Label: LAB_00603515
    MOV EDI,EDX                         ; 00603519
    JMP 0x00603546                      ; 0060351b
        ;   XREF to: 00603546 (UNCONDITIONAL_JUMP)  ; LAB_00603546
    TEST CH,0x40                        ; 0060351d
        ;   Label: LAB_0060351d
    JZ 0x00603532                       ; 00603520
        ;   XREF to: 00603532 (CONDITIONAL_JUMP)  ; LAB_00603532
    MOV ECX,dword ptr [EDX]             ; 00603522
    ADD ECX,0x4                         ; 00603524
    MOV dword ptr [EDX],ECX             ; 00603527
    MOV EAX,dword ptr [ECX + -0x4]      ; 00603529
    TEST EAX,EAX                        ; 0060352c
    JZ 0x00603546                       ; 0060352e
        ;   XREF to: 00603546 (CONDITIONAL_JUMP)  ; LAB_00603546
    JMP 0x00603540                      ; 00603530
        ;   XREF to: 00603540 (UNCONDITIONAL_JUMP)  ; LAB_00603540
    MOV EAX,dword ptr [EDX]             ; 00603532
        ;   Label: LAB_00603532
    ADD EAX,0x4                         ; 00603534
    MOV dword ptr [EDX],EAX             ; 00603537
    MOV EAX,dword ptr [EAX + -0x4]      ; 00603539
    TEST EAX,EAX                        ; 0060353c
    JZ 0x00603546                       ; 0060353e
        ;   XREF to: 00603546 (CONDITIONAL_JUMP)  ; LAB_00603546
    MOV word ptr [ESP + 0xc],DS         ; 00603540
        ;   Label: LAB_00603540
    MOV EDI,EAX                         ; 00603544
    CMP byte ptr [EBX + 0x15],0x53      ; 00603546
        ;   Label: LAB_00603546
    JNZ 0x0060356e                      ; 0060354a
        ;   XREF to: 0060356e (CONDITIONAL_JUMP)  ; LAB_0060356e
    TEST byte ptr [EBX + 0x1e],0x10     ; 0060354c
    JZ 0x0060355a                       ; 00603550
        ;   XREF to: 0060355a (CONDITIONAL_JUMP)  ; LAB_0060355a
    MOV ECX,dword ptr [EBX + 0x8]       ; 00603552
    XOR EAX,EAX                         ; 00603555
    PUSH ECX                            ; 00603557
    JMP 0x0060358e                      ; 00603558
        ;   XREF to: 0060358e (UNCONDITIONAL_JUMP)  ; LAB_0060358e
    MOV EDX,dword ptr [EBX + 0x8]       ; 0060355a
        ;   Label: LAB_0060355a
    XOR EAX,EAX                         ; 0060355d
    PUSH EDX                            ; 0060355f
    MOV AX,word ptr [ESP + 0x10]        ; 00603560
    PUSH EAX                            ; 00603565
    PUSH EDI                            ; 00603566
    CALL crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c ; 00603567
        ;   XREF to: 00602f7c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c(wchar_t * wide_string_offset, ushort segment, int max_chars)
    JMP 0x0060359a                      ; 0060356c
        ;   XREF to: 0060359a (UNCONDITIONAL_JUMP)  ; LAB_0060359a
    TEST byte ptr [EBX + 0x1e],0x20     ; 0060356e
        ;   Label: LAB_0060356e
    JZ 0x00603588                       ; 00603572
        ;   XREF to: 00603588 (CONDITIONAL_JUMP)  ; LAB_00603588
    MOV EAX,dword ptr [EBX + 0x8]       ; 00603574
    PUSH EAX                            ; 00603577
    XOR EAX,EAX                         ; 00603578
    MOV AX,word ptr [ESP + 0x10]        ; 0060357a
    PUSH EAX                            ; 0060357f
    PUSH EDI                            ; 00603580
    CALL crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c ; 00603581
        ;   XREF to: 00602f7c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_WideStringToMultiByteLen_FUN_00602f7c(wchar_t * wide_string_offset, ushort segment, int max_chars)
    JMP 0x0060359a                      ; 00603586
        ;   XREF to: 0060359a (UNCONDITIONAL_JUMP)  ; LAB_0060359a
    MOV EBP,dword ptr [EBX + 0x8]       ; 00603588
        ;   Label: LAB_00603588
    XOR EAX,EAX                         ; 0060358b
    PUSH EBP                            ; 0060358d
    MOV AX,word ptr [ESP + 0x10]        ; 0060358e
        ;   Label: LAB_0060358e
    PUSH EAX                            ; 00603593
    PUSH EDI                            ; 00603594
    CALL crt_string.c_strlen_far_FUN_00602f4c ; 00603595
        ;   XREF to: 00602f4c (UNCONDITIONAL_CALL)  ; int crt_string.c_strlen_far_FUN_00602f4c(char * string_offset, ushort segment, int max_length)
    ADD ESP,0xc                         ; 0060359a
        ;   Label: LAB_0060359a
    MOV ESI,dword ptr [EBX + 0x8]       ; 0060359d
    MOV dword ptr [EBX + 0x28],EAX      ; 006035a0
    TEST ESI,ESI                        ; 006035a3
    JL 0x0060388d                       ; 006035a5
        ;   XREF to: 0060388d (CONDITIONAL_JUMP)  ; LAB_0060388d
    CMP EAX,ESI                         ; 006035ab
    JLE 0x0060388d                      ; 006035ad
        ;   XREF to: 0060388d (CONDITIONAL_JUMP)  ; LAB_0060388d
    MOV dword ptr [EBX + 0x28],ESI      ; 006035b3
    MOV EDX,dword ptr [ESP + 0xc]       ; 006035b6
    MOV EAX,EDI                         ; 006035ba
    ADD ESP,0x10                        ; 006035bc
    POP EBP                             ; 006035bf
    POP ES                              ; 006035c0
    POP EDI                             ; 006035c1
    POP ESI                             ; 006035c2
    POP EBX                             ; 006035c3
    RET                                 ; 006035c4
    TEST byte ptr [EBX + 0x1e],0x1      ; 006035c5
        ;   Label: LAB_006035c5
    JZ 0x00603602                       ; 006035c9
        ;   XREF to: 00603602 (CONDITIONAL_JUMP)  ; LAB_00603602
    TEST byte ptr [EBX + 0x1f],0x1      ; 006035cb
    JZ 0x006035e0                       ; 006035cf
        ;   XREF to: 006035e0 (CONDITIONAL_JUMP)  ; LAB_006035e0
    CMP dword ptr [ESP],0x0             ; 006035d1
    JNZ 0x006035e4                      ; 006035d5
        ;   XREF to: 006035e4 (CONDITIONAL_JUMP)  ; LAB_006035e4
    CMP dword ptr [ESP + 0x4],0x0       ; 006035d7
    JZ 0x00603602                       ; 006035dc
        ;   XREF to: 00603602 (CONDITIONAL_JUMP)  ; LAB_00603602
    JMP 0x006035e4                      ; 006035de
        ;   XREF to: 006035e4 (UNCONDITIONAL_JUMP)  ; LAB_006035e4
    TEST ECX,ECX                        ; 006035e0
        ;   Label: LAB_006035e0
    JZ 0x00603602                       ; 006035e2
        ;   XREF to: 00603602 (CONDITIONAL_JUMP)  ; LAB_00603602
    MOV EAX,dword ptr [EBX + 0x20]      ; 006035e4
        ;   Label: LAB_006035e4
    LEA EDX,[EAX + 0x1]                 ; 006035e7
    MOV dword ptr [EBX + 0x20],EDX      ; 006035ea
    MOV byte ptr [ESI + EAX*0x1],0x30   ; 006035ed
    MOV EAX,dword ptr [EBX + 0x20]      ; 006035f1
    LEA EDX,[EAX + 0x1]                 ; 006035f4
    MOV dword ptr [EBX + 0x20],EDX      ; 006035f7
    LEA EDX,[ESI + EAX*0x1]             ; 006035fa
    MOV AL,byte ptr [EBX + 0x15]        ; 006035fd
    MOV byte ptr [EDX],AL               ; 00603600
    MOV EBP,0x10                        ; 00603602
        ;   Label: LAB_00603602
    CMP byte ptr [EBX + 0x15],0x6f      ; 00603607
        ;   Label: LAB_00603607
    JNZ 0x00603627                      ; 0060360b
        ;   XREF to: 00603627 (CONDITIONAL_JUMP)  ; LAB_00603627
    MOV AH,byte ptr [EBX + 0x1e]        ; 0060360d
    MOV EBP,0x8                         ; 00603610
    TEST AH,0x1                         ; 00603615
    JZ 0x00603627                       ; 00603618
        ;   XREF to: 00603627 (CONDITIONAL_JUMP)  ; LAB_00603627
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060361a
    LEA EDX,[EAX + 0x1]                 ; 0060361d
    MOV dword ptr [EBX + 0x20],EDX      ; 00603620
    MOV byte ptr [ESI + EAX*0x1],0x30   ; 00603623
    MOV EAX,dword ptr [EBX + 0x20]      ; 00603627
        ;   Label: LAB_00603627
    MOV word ptr [ESP + 0xc],DS         ; 0060362a
    ADD EAX,ESI                         ; 0060362e
    MOV DL,byte ptr [EBX + 0x1f]        ; 00603630
    MOV EDI,EAX                         ; 00603633
    TEST DL,0x1                         ; 00603635
    JZ 0x00603683                       ; 00603638
        ;   XREF to: 00603683 (CONDITIONAL_JUMP)  ; LAB_00603683
    CMP dword ptr [EBX + 0x8],0x0       ; 0060363a
    JNZ 0x0060365c                      ; 0060363e
        ;   XREF to: 0060365c (CONDITIONAL_JUMP)  ; LAB_0060365c
    CMP dword ptr [ESP],0x0             ; 00603640
    JNZ 0x0060365c                      ; 00603644
        ;   XREF to: 0060365c (CONDITIONAL_JUMP)  ; LAB_0060365c
    CMP dword ptr [ESP + 0x4],0x0       ; 00603646
    JNZ 0x0060365c                      ; 0060364b
        ;   XREF to: 0060365c (CONDITIONAL_JUMP)  ; LAB_0060365c
    MOV ES,word ptr [ESP + 0xc]         ; 0060364d
    MOV byte ptr ES:[EAX],0x0           ; 00603651
    XOR EAX,EAX                         ; 00603655
    JMP 0x006036cd                      ; 00603657
        ;   XREF to: 006036cd (UNCONDITIONAL_JUMP)  ; LAB_006036cd
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060365c
        ;   Label: LAB_0060365c
    PUSH EBP                            ; 0060365f
    ADD EAX,ESI                         ; 00603660
    PUSH EAX                            ; 00603662
    LEA EAX,[ESP + 0x8]                 ; 00603663
    PUSH EAX                            ; 00603667
    CALL crt_stdlib.c_i64toa_FUN_0060ad40 ; 00603668
        ;   XREF to: 0060ad40 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c_i64toa_FUN_0060ad40(longlong * value, char * buffer, int base)
    MOV CL,byte ptr [EBX + 0x15]        ; 0060366d
    ADD ESP,0xc                         ; 00603670
    CMP CL,0x58                         ; 00603673
    JNZ 0x006036ba                      ; 00603676
        ;   XREF to: 006036ba (CONDITIONAL_JUMP)  ; LAB_006036ba
    PUSH ESI                            ; 00603678
    CALL crt_string.c_strupr_FUN_0060389c ; 00603679
        ;   XREF to: 0060389c (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_0060389c(char * string)
    ADD ESP,0x4                         ; 0060367e
    JMP 0x006036ba                      ; 00603681
        ;   XREF to: 006036ba (UNCONDITIONAL_JUMP)  ; LAB_006036ba
    CMP dword ptr [EBX + 0x8],0x0       ; 00603683
        ;   Label: LAB_00603683
    JNZ 0x00603699                      ; 00603687
        ;   XREF to: 00603699 (CONDITIONAL_JUMP)  ; LAB_00603699
    TEST ECX,ECX                        ; 00603689
    JNZ 0x00603699                      ; 0060368b
        ;   XREF to: 00603699 (CONDITIONAL_JUMP)  ; LAB_00603699
    MOV ES,word ptr [ESP + 0xc]         ; 0060368d
    MOV byte ptr ES:[EAX],0x0           ; 00603691
    XOR EAX,EAX                         ; 00603695
    JMP 0x006036cd                      ; 00603697
        ;   XREF to: 006036cd (UNCONDITIONAL_JUMP)  ; LAB_006036cd
    MOV EAX,dword ptr [EBX + 0x20]      ; 00603699
        ;   Label: LAB_00603699
    PUSH EBP                            ; 0060369c
    ADD EAX,ESI                         ; 0060369d
    PUSH EAX                            ; 0060369f
    PUSH ECX                            ; 006036a0
    CALL crt_stdlib.c_utoa_FUN_0060ae50 ; 006036a1
        ;   XREF to: 0060ae50 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c_utoa_FUN_0060ae50(uint value, char * buffer, int base)
    MOV DH,byte ptr [EBX + 0x15]        ; 006036a6
    ADD ESP,0xc                         ; 006036a9
    CMP DH,0x58                         ; 006036ac
    JNZ 0x006036ba                      ; 006036af
        ;   XREF to: 006036ba (CONDITIONAL_JUMP)  ; LAB_006036ba
    PUSH ESI                            ; 006036b1
    CALL crt_string.c_strupr_FUN_0060389c ; 006036b2
        ;   XREF to: 0060389c (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_0060389c(char * string)
    ADD ESP,0x4                         ; 006036b7
    XOR EAX,EAX                         ; 006036ba
        ;   Label: LAB_006036ba
    PUSH -0x1                           ; 006036bc
    MOV AX,word ptr [ESP + 0x10]        ; 006036be
    PUSH EAX                            ; 006036c3
    PUSH EDI                            ; 006036c4
    CALL crt_string.c_strlen_far_FUN_00602f4c ; 006036c5
        ;   XREF to: 00602f4c (UNCONDITIONAL_CALL)  ; int crt_string.c_strlen_far_FUN_00602f4c(char * string_offset, ushort segment, int max_length)
    ADD ESP,0xc                         ; 006036ca
    MOV EDX,EAX                         ; 006036cd
        ;   Label: LAB_006036cd
    MOV ESI,dword ptr [EBX + 0x8]       ; 006036cf
    MOV dword ptr [EBX + 0x28],EAX      ; 006036d2
    CMP EAX,ESI                         ; 006036d5
    JGE 0x006036e0                      ; 006036d7
        ;   XREF to: 006036e0 (CONDITIONAL_JUMP)  ; LAB_006036e0
    MOV EAX,ESI                         ; 006036d9
    SUB EAX,EDX                         ; 006036db
    MOV dword ptr [EBX + 0x24],EAX      ; 006036dd
    CMP dword ptr [EBX + 0x8],-0x1      ; 006036e0
        ;   Label: LAB_006036e0
    JNZ 0x0060388d                      ; 006036e4
        ;   XREF to: 0060388d (CONDITIONAL_JUMP)  ; LAB_0060388d
    PUSH EBX                            ; 006036ea
    CALL crt_stdio.c_CalculateZeroPadding_FUN_0060317c ; 006036eb
        ;   XREF to: 0060317c (UNCONDITIONAL_CALL)  ; void crt_stdio.c_CalculateZeroPadding_FUN_0060317c(FormatSpec * spec_info)
    ADD ESP,0x4                         ; 006036f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 006036f3
    MOV EAX,EDI                         ; 006036f7
    ADD ESP,0x10                        ; 006036f9
    POP EBP                             ; 006036fc
    POP ES                              ; 006036fd
    POP EDI                             ; 006036fe
    POP ESI                             ; 006036ff
    POP EBX                             ; 00603700
    RET                                 ; 00603701
    CMP dword ptr [EBX + 0x4],0x0       ; 00603702
        ;   Label: LAB_00603702
    JNZ 0x0060371e                      ; 00603706
        ;   XREF to: 0060371e (CONDITIONAL_JUMP)  ; LAB_0060371e
    TEST byte ptr [EBX + 0x1e],0x80     ; 00603708
    JZ 0x00603717                       ; 0060370c
        ;   XREF to: 00603717 (CONDITIONAL_JUMP)  ; LAB_00603717
    MOV dword ptr [EBX + 0x4],0xd       ; 0060370e
    JMP 0x0060371e                      ; 00603715
        ;   XREF to: 0060371e (UNCONDITIONAL_JUMP)  ; LAB_0060371e
    MOV dword ptr [EBX + 0x4],0x8       ; 00603717
        ;   Label: LAB_00603717
    AND byte ptr [EBX + 0x1e],0xf9      ; 0060371e
        ;   Label: LAB_0060371e
    MOV ECX,dword ptr [EDX]             ; 00603722
    ADD ECX,0x4                         ; 00603724
    MOV dword ptr [EDX],ECX             ; 00603727
    MOV EAX,ECX                         ; 00603729
    MOV EBP,dword ptr [ECX + -0x4]      ; 0060372b
    TEST byte ptr [EBX + 0x1e],0x80     ; 0060372e
    JZ 0x0060375a                       ; 00603732
        ;   XREF to: 0060375a (CONDITIONAL_JUMP)  ; LAB_0060375a
    ADD EAX,0x4                         ; 00603734
    MOV dword ptr [EDX],EAX             ; 00603737
    PUSH 0x4                            ; 00603739
    MOV EAX,dword ptr [EAX + -0x4]      ; 0060373b
    PUSH ESI                            ; 0060373e
    AND EAX,0xffff                      ; 0060373f
    PUSH EAX                            ; 00603744
    CALL crt_stdio.c_FormatHexWithPadding_FUN_00602ff8 ; 00603745
        ;   XREF to: 00602ff8 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_FormatHexWithPadding_FUN_00602ff8(int value, char * buffer, int width)
    ADD ESP,0xc                         ; 0060374a
    PUSH 0x8                            ; 0060374d
    LEA EAX,[ESI + 0x5]                 ; 0060374f
    PUSH EAX                            ; 00603752
    PUSH EBP                            ; 00603753
    MOV byte ptr [ESI + 0x4],0x3a       ; 00603754
    JMP 0x0060375e                      ; 00603758
        ;   XREF to: 0060375e (UNCONDITIONAL_JUMP)  ; LAB_0060375e
    PUSH 0x8                            ; 0060375a
        ;   Label: LAB_0060375a
    PUSH ESI                            ; 0060375c
    PUSH EBP                            ; 0060375d
    CALL crt_stdio.c_FormatHexWithPadding_FUN_00602ff8 ; 0060375e
        ;   XREF to: 00602ff8 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_FormatHexWithPadding_FUN_00602ff8(int value, char * buffer, int width)
        ;   Label: LAB_0060375e
    ADD ESP,0xc                         ; 00603763
    CMP byte ptr [EBX + 0x15],0x50      ; 00603766
    JNZ 0x00603775                      ; 0060376a
        ;   XREF to: 00603775 (CONDITIONAL_JUMP)  ; LAB_00603775
    PUSH ESI                            ; 0060376c
    CALL crt_string.c_strupr_FUN_0060389c ; 0060376d
        ;   XREF to: 0060389c (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_0060389c(char * string)
    ADD ESP,0x4                         ; 00603772
    XOR EAX,EAX                         ; 00603775
        ;   Label: LAB_00603775
    PUSH -0x1                           ; 00603777
    MOV AX,word ptr [ESP + 0x10]        ; 00603779
    PUSH EAX                            ; 0060377e
    PUSH EDI                            ; 0060377f
    CALL crt_string.c_strlen_far_FUN_00602f4c ; 00603780
        ;   XREF to: 00602f4c (UNCONDITIONAL_CALL)  ; int crt_string.c_strlen_far_FUN_00602f4c(char * string_offset, ushort segment, int max_length)
    ADD ESP,0xc                         ; 00603785
    MOV dword ptr [EBX + 0x20],EAX      ; 00603788
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060378b
    MOV EAX,EDI                         ; 0060378f
    ADD ESP,0x10                        ; 00603791
    POP EBP                             ; 00603794
    POP ES                              ; 00603795
    POP EDI                             ; 00603796
    POP ESI                             ; 00603797
    POP EBX                             ; 00603798
    RET                                 ; 00603799
    MOV AH,byte ptr [EBX + 0x1e]        ; 0060379a
        ;   Label: LAB_0060379a
    MOV dword ptr [EBX + 0x20],0x1      ; 0060379d
    TEST AH,0x20                        ; 006037a4
    JZ 0x00603816                       ; 006037a7
        ;   XREF to: 00603816 (CONDITIONAL_JUMP)  ; LAB_00603816
    MOV ECX,dword ptr [EDX]             ; 006037a9
    ADD ECX,0x4                         ; 006037ab
    MOV dword ptr [EDX],ECX             ; 006037ae
    MOV AX,word ptr [ECX + -0x4]        ; 006037b0
    AND EAX,0xffff                      ; 006037b4
    PUSH EAX                            ; 006037b9
    LEA EAX,[ESP + 0xc]                 ; 006037ba
    PUSH EAX                            ; 006037be
    CALL crt_stdio.c_WideCharToSingleByte_FUN_0060acf0 ; 006037bf
        ;   XREF to: 0060acf0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_WideCharToSingleByte_FUN_0060acf0(wchar_t wide_char, char * output_buffer)
    ADD ESP,0x8                         ; 006037c4
    CMP EAX,-0x1                        ; 006037c7
    JZ 0x0060388d                       ; 006037ca
        ;   XREF to: 0060388d (CONDITIONAL_JUMP)  ; LAB_0060388d
    MOV AL,byte ptr [ESP + 0x8]         ; 006037d0
    MOV EBP,dword ptr [0x03f9c020]      ; 006037d4 | g_MultibyteLocaleActive
    MOV byte ptr [ESI],AL               ; 006037da
    TEST EBP,EBP                        ; 006037dc
    JZ 0x0060388d                       ; 006037de
        ;   XREF to: 0060388d (CONDITIONAL_JUMP)  ; LAB_0060388d
    XOR EAX,EAX                         ; 006037e4
    MOV AL,byte ptr [ESP + 0x8]         ; 006037e6
    MOV AL,byte ptr [EAX + 0x3f9c031]   ; 006037ea | g_LeadByteTable
    AND AL,0x1                          ; 006037f0
    AND EAX,0xff                        ; 006037f2
    JZ 0x0060388d                       ; 006037f7
        ;   XREF to: 0060388d (CONDITIONAL_JUMP)  ; LAB_0060388d
    MOV AL,byte ptr [ESP + 0x9]         ; 006037fd
    MOV byte ptr [ESI + 0x1],AL         ; 00603801
    INC dword ptr [EBX + 0x20]          ; 00603804
    MOV EDX,dword ptr [ESP + 0xc]       ; 00603807
    MOV EAX,EDI                         ; 0060380b
    ADD ESP,0x10                        ; 0060380d
    POP EBP                             ; 00603810
    POP ES                              ; 00603811
    POP EDI                             ; 00603812
    POP ESI                             ; 00603813
    POP EBX                             ; 00603814
    RET                                 ; 00603815
    MOV EBX,dword ptr [EDX]             ; 00603816
        ;   Label: LAB_00603816
    ADD EBX,0x4                         ; 00603818
    MOV dword ptr [EDX],EBX             ; 0060381b
    MOV AL,byte ptr [EBX + -0x4]        ; 0060381d
    MOV byte ptr [ESI],AL               ; 00603820
    MOV EDX,dword ptr [ESP + 0xc]       ; 00603822
    MOV EAX,EDI                         ; 00603826
    ADD ESP,0x10                        ; 00603828
    POP EBP                             ; 0060382b
    POP ES                              ; 0060382c
    POP EDI                             ; 0060382d
    POP ESI                             ; 0060382e
    POP EBX                             ; 0060382f
    RET                                 ; 00603830
    MOV EAX,dword ptr [EDX]             ; 00603831
        ;   Label: LAB_00603831
    ADD EAX,0x4                         ; 00603833
    MOV dword ptr [EDX],EAX             ; 00603836
    MOV AX,word ptr [EAX + -0x4]        ; 00603838
    AND EAX,0xffff                      ; 0060383c
    PUSH EAX                            ; 00603841
    PUSH ESI                            ; 00603842
    CALL crt_stdio.c_WideCharToSingleByte_FUN_0060acf0 ; 00603843
        ;   XREF to: 0060acf0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_WideCharToSingleByte_FUN_0060acf0(wchar_t wide_char, char * output_buffer)
    ADD ESP,0x8                         ; 00603848
    MOV EDX,EAX                         ; 0060384b
    CMP EAX,-0x1                        ; 0060384d
    JZ 0x00603864                       ; 00603850
        ;   XREF to: 00603864 (CONDITIONAL_JUMP)  ; LAB_00603864
    MOV dword ptr [EBX + 0x20],EAX      ; 00603852
    MOV EDX,dword ptr [ESP + 0xc]       ; 00603855
    MOV EAX,EDI                         ; 00603859
    ADD ESP,0x10                        ; 0060385b
    POP EBP                             ; 0060385e
    POP ES                              ; 0060385f
    POP EDI                             ; 00603860
    POP ESI                             ; 00603861
    POP EBX                             ; 00603862
    RET                                 ; 00603863
    MOV dword ptr [EBX + 0x20],0x0      ; 00603864
        ;   Label: LAB_00603864
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060386b
    MOV EAX,EDI                         ; 0060386f
    ADD ESP,0x10                        ; 00603871
    POP EBP                             ; 00603874
    POP ES                              ; 00603875
    POP EDI                             ; 00603876
    POP ESI                             ; 00603877
    POP EBX                             ; 00603878
    RET                                 ; 00603879
    MOV dword ptr [EBX + 0x4],0x0       ; 0060387a
        ;   Label: LAB_0060387a
    MOV AL,byte ptr [EBX + 0x15]        ; 00603881
    MOV byte ptr [ESI],AL               ; 00603884
    MOV dword ptr [EBX + 0x20],0x1      ; 00603886
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060388d
        ;   Label: LAB_0060388d
    MOV EAX,EDI                         ; 00603891
    ADD ESP,0x10                        ; 00603893
    POP EBP                             ; 00603896
    POP ES                              ; 00603897
    POP EDI                             ; 00603898
    POP ESI                             ; 00603899
    POP EBX                             ; 0060389a
    RET                                 ; 0060389b


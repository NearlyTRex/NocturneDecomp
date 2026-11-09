; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_0045210e(int param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01323d00
;   undefined4 DAT_0152bc18
;   undefined4 DAT_0152bc1c
;   undefined4 DAT_0152bc20
;   undefined4 DAT_0152bc24
;   undefined4 DAT_0152bc28
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0045210e
        ;   Label: core_dcamera.cpp_FUN_0045210e
    PUSH EBX                            ; 00452110
    PUSH ESI                            ; 00452111
    PUSH EDI                            ; 00452112
    PUSH EBP                            ; 00452113
    SUB ESP,0x2c                        ; 00452114
    MOV EAX,dword ptr [ESP + 0x40]      ; 00452117
    SHL EAX,0x8                         ; 0045211b
    MOV EDX,EAX                         ; 0045211e
    SHL EAX,0x4                         ; 00452120
    MOV ECX,0x857cd8                    ; 00452123
    SUB EAX,EDX                         ; 00452128
    MOV EDX,dword ptr [ESP + 0x44]      ; 0045212a
    ADD ECX,EAX                         ; 0045212e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00452130
    SUB EAX,EDX                         ; 00452137
    SHL EAX,0x2                         ; 00452139
    MOV EDX,dword ptr [ESP + 0x40]      ; 0045213c
    ADD ECX,EAX                         ; 00452140
    LEA EAX,[EDX*0x4 + 0x0]             ; 00452142
    ADD EAX,EDX                         ; 00452149
    MOV EDX,0x14df1d0                   ; 0045214b
    SHL EAX,0x8                         ; 00452150
    ADD EDX,EAX                         ; 00452153
    MOV EAX,dword ptr [ESP + 0x44]      ; 00452155
    MOV dword ptr [ESP + 0x18],ECX      ; 00452159
    SHL EAX,0x2                         ; 0045215d
    MOV CL,byte ptr [0x01323d00]        ; 00452160 | DAT_01323d00
    ADD EDX,EAX                         ; 00452166
    MOV EAX,dword ptr [ESP + 0x40]      ; 00452168
    MOV dword ptr [ESP + 0x10],EDX      ; 0045216c
    MOV EDX,dword ptr [ESP + 0x44]      ; 00452170
    SHL EAX,CL                          ; 00452174
    SHL EDX,CL                          ; 00452176
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4480c] ; 00452178
    SHL EDX,0x2                         ; 0045217f
    ADD EAX,EDX                         ; 00452182
    MOV EDX,dword ptr [ESP + 0x40]      ; 00452184
    MOV dword ptr [ESP + 0x14],EAX      ; 00452188
    LEA EAX,[EDX*0x4 + 0x0]             ; 0045218c
    ADD EAX,EDX                         ; 00452193
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00452195
    SHL EAX,0x6                         ; 00452199
    ADD EDX,0x784                       ; 0045219c
    ADD EAX,EDX                         ; 004521a2
    MOV EDX,dword ptr [ESP + 0x44]      ; 004521a4
    ADD EDX,EAX                         ; 004521a8
    MOV EAX,dword ptr [ESP + 0x44]      ; 004521aa
    MOV dword ptr [ESP + 0xc],EDX       ; 004521ae
    CMP EAX,dword ptr [ESP + 0x48]      ; 004521b2
    JGE 0x004522e4                      ; 004521b6
        ;   XREF to: 004522e4 (CONDITIONAL_JUMP)  ; LAB_004522e4
    XOR AH,AH                           ; 004521bc
        ;   Label: LAB_004521bc
    MOV EDX,dword ptr [ESP + 0x10]      ; 004521be
    MOV byte ptr [ESP + 0x28],AH        ; 004521c2
    MOV EAX,dword ptr [ESP + 0x14]      ; 004521c6
    MOV ECX,dword ptr [EDX]             ; 004521ca
    CMP ECX,dword ptr [EAX]             ; 004521cc
    JBE 0x0045228e                      ; 004521ce
        ;   XREF to: 0045228e (CONDITIONAL_JUMP)  ; LAB_0045228e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004521d4
    MOV EDX,dword ptr [0x0152bc18]      ; 004521d8 | DAT_0152bc18
    MOV EAX,dword ptr [EAX]             ; 004521de
    SUB EAX,dword ptr [EDX]             ; 004521e0
    CDQ                                 ; 004521e2
    XOR EAX,EDX                         ; 004521e3
    SUB EAX,EDX                         ; 004521e5
    MOV EDX,dword ptr [0x0152bc18]      ; 004521e7 | DAT_0152bc18
    MOV ESI,dword ptr [EDX + 0xc]       ; 004521ed
    MOV ECX,EAX                         ; 004521f0
    CMP EAX,ESI                         ; 004521f2
    JGE 0x0045228e                      ; 004521f4
        ;   XREF to: 0045228e (CONDITIONAL_JUMP)  ; LAB_0045228e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004521fa
    MOV EDI,dword ptr [EDX + 0x4]       ; 004521fe
    MOV EAX,dword ptr [EAX + 0x4]       ; 00452201
    SUB EAX,EDI                         ; 00452204
    CDQ                                 ; 00452206
    XOR EAX,EDX                         ; 00452207
    SUB EAX,EDX                         ; 00452209
    MOV EDX,dword ptr [0x0152bc18]      ; 0045220b | DAT_0152bc18
    MOV EBP,dword ptr [EDX + 0xc]       ; 00452211
    MOV EBX,EAX                         ; 00452214
    CMP EAX,EBP                         ; 00452216
    JGE 0x0045228e                      ; 00452218
        ;   XREF to: 0045228e (CONDITIONAL_JUMP)  ; LAB_0045228e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045221a
    MOV ESI,dword ptr [EDX + 0x8]       ; 0045221e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00452221
    SUB EAX,ESI                         ; 00452224
    CDQ                                 ; 00452226
    XOR EAX,EDX                         ; 00452227
    SUB EAX,EDX                         ; 00452229
    MOV EDX,dword ptr [0x0152bc18]      ; 0045222b | DAT_0152bc18
    CMP EAX,dword ptr [EDX + 0xc]       ; 00452231
    JGE 0x0045228e                      ; 00452234
        ;   XREF to: 0045228e (CONDITIONAL_JUMP)  ; LAB_0045228e
    IMUL EBX,EBX                        ; 00452236
    IMUL ECX,ECX                        ; 00452239
    IMUL EAX,EAX                        ; 0045223c
    ADD ECX,EBX                         ; 0045223f
    ADD ECX,EAX                         ; 00452241
    MOV EBP,dword ptr [EDX + 0x10]      ; 00452243
    MOV dword ptr [ESP + 0x8],ECX       ; 00452246
    CMP ECX,EBP                         ; 0045224a
    JGE 0x0045228e                      ; 0045224c
        ;   XREF to: 0045228e (CONDITIONAL_JUMP)  ; LAB_0045228e
    MOV ESI,dword ptr [ESP + 0x40]      ; 0045224e
    MOV ECX,dword ptr [ESP + 0x14]      ; 00452252
    MOV EBX,dword ptr [ESP + 0x44]      ; 00452256
    MOV EAX,[0x0152bc1c]                ; 0045225a | DAT_0152bc1c
    MOV ECX,dword ptr [ECX]             ; 0045225f
    TEST EAX,EAX                        ; 00452261
    JNZ 0x00452371                      ; 00452263
        ;   XREF to: 00452371 (CONDITIONAL_JUMP)  ; LAB_00452371
    MOV EAX,[0x0152bc18]                ; 00452269 | DAT_0152bc18
        ;   Label: LAB_00452269
    MOV ECX,dword ptr [ESP + 0x8]       ; 0045226e
    MOV EDX,dword ptr [EAX + 0x10]      ; 00452272
    SUB EDX,ECX                         ; 00452275
    SAR EDX,0x10                        ; 00452277
    IMUL EDX,EDX,0x3f                   ; 0045227a
    MOV ECX,dword ptr [EAX + 0x10]      ; 0045227d
    SAR ECX,0x10                        ; 00452280
    MOV EAX,EDX                         ; 00452283
    SAR EDX,0x1f                        ; 00452285
    IDIV ECX                            ; 00452288
    MOV byte ptr [ESP + 0x28],AL        ; 0045228a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045228e
        ;   Label: LAB_0045228e
    MOV EDI,dword ptr [ESP + 0x10]      ; 00452292
    MOV EBP,dword ptr [ESP + 0x18]      ; 00452296
    MOV AL,byte ptr [ESP + 0x28]        ; 0045229a
    MOV ESI,dword ptr [ESP + 0x14]      ; 0045229e
    MOV CL,byte ptr [0x01323d00]        ; 004522a2 | DAT_01323d00
    LEA EBX,[EDX + 0x1]                 ; 004522a8
    ADD EDI,0x4                         ; 004522ab
    ADD EBP,0xc                         ; 004522ae
    MOV byte ptr [EDX],AL               ; 004522b1
    MOV EAX,0x1                         ; 004522b3
    MOV EDX,dword ptr [ESP + 0x48]      ; 004522b8
    SHL EAX,CL                          ; 004522bc
    MOV dword ptr [ESP + 0xc],EBX       ; 004522be
    SHL EAX,0x2                         ; 004522c2
    MOV dword ptr [ESP + 0x10],EDI      ; 004522c5
    ADD ESI,EAX                         ; 004522c9
    MOV EAX,dword ptr [ESP + 0x44]      ; 004522cb
    MOV dword ptr [ESP + 0x18],EBP      ; 004522cf
    INC EAX                             ; 004522d3
    MOV dword ptr [ESP + 0x14],ESI      ; 004522d4
    MOV dword ptr [ESP + 0x44],EAX      ; 004522d8
    CMP EAX,EDX                         ; 004522dc
    JL 0x004521bc                       ; 004522de
        ;   XREF to: 004521bc (CONDITIONAL_JUMP)  ; LAB_004521bc
    MOV EDX,dword ptr [ESP + 0x40]      ; 004522e4
        ;   Label: LAB_004522e4
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004522e8
    SHL EDX,0x2                         ; 004522ec
    MOV EBX,dword ptr [ESP + 0x40]      ; 004522ef
    ADD EDX,ECX                         ; 004522f3
    LEA ECX,[EBX*0x4 + 0x0]             ; 004522f5
    ADD ECX,EBX                         ; 004522fc
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004522fe
    SHL ECX,0x6                         ; 00452302
    ADD EBX,0x784                       ; 00452305
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045230b
    ADD ECX,EBX                         ; 0045230e
    MOV EDX,dword ptr [EDX + 0x3c4]     ; 00452310
    ADD ECX,EAX                         ; 00452316
    CMP EAX,EDX                         ; 00452318
    JGE 0x00452325                      ; 0045231a
        ;   XREF to: 00452325 (CONDITIONAL_JUMP)  ; LAB_00452325
    CMP byte ptr [ECX],0x0              ; 0045231c
        ;   Label: LAB_0045231c
    JZ 0x00452434                       ; 0045231f
        ;   XREF to: 00452434 (CONDITIONAL_JUMP)  ; LAB_00452434
    MOV EBX,dword ptr [ESP + 0x40]      ; 00452325
        ;   Label: LAB_00452325
    LEA ECX,[EBX*0x4 + 0x0]             ; 00452329
    ADD ECX,EBX                         ; 00452330
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00452332
    SHL ECX,0x6                         ; 00452336
    ADD EBX,0x784                       ; 00452339
    ADD ECX,EBX                         ; 0045233f
    ADD ECX,EDX                         ; 00452341
    DEC ECX                             ; 00452343
    CMP EDX,EAX                         ; 00452344
    JLE 0x00452353                      ; 00452346
        ;   XREF to: 00452353 (CONDITIONAL_JUMP)  ; LAB_00452353
    CMP byte ptr [ECX],0x0              ; 00452348
        ;   Label: LAB_00452348
    JNZ 0x00452353                      ; 0045234b
        ;   XREF to: 00452353 (CONDITIONAL_JUMP)  ; LAB_00452353
    DEC EDX                             ; 0045234d
    DEC ECX                             ; 0045234e
    CMP EDX,EAX                         ; 0045234f
    JG 0x00452348                       ; 00452351
        ;   XREF to: 00452348 (CONDITIONAL_JUMP)  ; LAB_00452348
    MOV ECX,dword ptr [ESP + 0x40]      ; 00452353
        ;   Label: LAB_00452353
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00452357
    SHL ECX,0x2                         ; 0045235b
    ADD ECX,EBX                         ; 0045235e
    MOV dword ptr [ECX + 0x4],EAX       ; 00452360
    MOV dword ptr [ECX + 0x3c4],EDX     ; 00452363
    ADD ESP,0x2c                        ; 00452369
    POP EBP                             ; 0045236c
    POP EDI                             ; 0045236d
    POP ESI                             ; 0045236e
    POP EBX                             ; 0045236f
    RET                                 ; 00452370
    MOV EBP,dword ptr [0x0152bc20]      ; 00452371 | DAT_0152bc20
        ;   Label: LAB_00452371
    MOV EAX,[0x0152bc24]                ; 00452377 | DAT_0152bc24
    MOV EDI,dword ptr [0x0152bc28]      ; 0045237c | DAT_0152bc28
    XOR EDX,EDX                         ; 00452382
    MOV dword ptr [ESP],EAX             ; 00452384
    MOV dword ptr [ESP + 0x4],EDX       ; 00452387
    TEST ECX,ECX                        ; 0045238b
    JZ 0x00452401                       ; 0045238d
        ;   XREF to: 00452401 (CONDITIONAL_JUMP)  ; LAB_00452401
    MOV EAX,0x7fffffff                  ; 0045238f
    MOV EDX,EAX                         ; 00452394
    SAR EDX,0x1f                        ; 00452396
    IDIV ECX                            ; 00452399
    MOV ECX,EAX                         ; 0045239b
    MOV EAX,EBP                         ; 0045239d
        ;   Label: LAB_0045239d
    SUB EAX,EBX                         ; 0045239f
    SHL EAX,0x4                         ; 004523a1
    MOV dword ptr [ESP + 0x20],EAX      ; 004523a4
    MOV EAX,dword ptr [ESP]             ; 004523a8
    SUB EAX,ESI                         ; 004523ab
    MOV EDX,EDI                         ; 004523ad
    SHL EAX,0x4                         ; 004523af
    SUB EDX,ECX                         ; 004523b2
    MOV dword ptr [ESP + 0x24],EAX      ; 004523b4
    MOV EAX,EDX                         ; 004523b8
    SAR EDX,0x1f                        ; 004523ba
    SHL EDX,0x4                         ; 004523bd
    SBB EAX,EDX                         ; 004523c0
    SAR EAX,0x4                         ; 004523c2
    SHL EBX,0x8                         ; 004523c5
    MOV dword ptr [ESP + 0x1c],EAX      ; 004523c8
    MOV EDX,ESI                         ; 004523cc
    MOV EAX,0x10                        ; 004523ce
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004523d3
    SHL EDX,0x8                         ; 004523d7
    MOV ESI,EDX                         ; 004523da
        ;   Label: LAB_004523da
    SAR ESI,0x8                         ; 004523dc
    IMUL EDI,ESI,0x500                  ; 004523df
    MOV ESI,EBX                         ; 004523e5
    SAR ESI,0x8                         ; 004523e7
    MOV ESI,dword ptr [EDI + ESI*0x4 + 0xb36198] ; 004523ea
    LEA EDI,[ECX + -0x80]               ; 004523f1
    CMP ESI,EDI                         ; 004523f4
    JGE 0x00452408                      ; 004523f6
        ;   XREF to: 00452408 (CONDITIONAL_JUMP)  ; LAB_00452408
    TEST EAX,EAX                        ; 004523f8
    JNZ 0x00452424                      ; 004523fa
        ;   XREF to: 00452424 (CONDITIONAL_JUMP)  ; LAB_00452424
    JMP 0x00452269                      ; 004523fc
        ;   XREF to: 00452269 (UNCONDITIONAL_JUMP)  ; LAB_00452269
    MOV ECX,0x7fffffff                  ; 00452401
        ;   Label: LAB_00452401
    JMP 0x0045239d                      ; 00452406
        ;   XREF to: 0045239d (UNCONDITIONAL_JUMP)  ; LAB_0045239d
    MOV ESI,dword ptr [ESP + 0x20]      ; 00452408
        ;   Label: LAB_00452408
    MOV EDI,dword ptr [ESP + 0x24]      ; 0045240c
    DEC EAX                             ; 00452410
    ADD ECX,EBP                         ; 00452411
    ADD EBX,ESI                         ; 00452413
    ADD EDX,EDI                         ; 00452415
    TEST EAX,EAX                        ; 00452417
    JG 0x004523da                       ; 00452419
        ;   XREF to: 004523da (CONDITIONAL_JUMP)  ; LAB_004523da
    TEST EAX,EAX                        ; 0045241b
    JNZ 0x00452424                      ; 0045241d
        ;   XREF to: 00452424 (CONDITIONAL_JUMP)  ; LAB_00452424
    JMP 0x00452269                      ; 0045241f
        ;   XREF to: 00452269 (UNCONDITIONAL_JUMP)  ; LAB_00452269
    CMP dword ptr [ESP + 0x4],0x0       ; 00452424
        ;   Label: LAB_00452424
    JNZ 0x00452269                      ; 00452429
        ;   XREF to: 00452269 (CONDITIONAL_JUMP)  ; LAB_00452269
    JMP 0x0045228e                      ; 0045242f
        ;   XREF to: 0045228e (UNCONDITIONAL_JUMP)  ; LAB_0045228e
    INC EAX                             ; 00452434
        ;   Label: LAB_00452434
    INC ECX                             ; 00452435
    CMP EAX,EDX                         ; 00452436
    JL 0x0045231c                       ; 00452438
        ;   XREF to: 0045231c (CONDITIONAL_JUMP)  ; LAB_0045231c
    JMP 0x00452325                      ; 0045243e
        ;   XREF to: 00452325 (UNCONDITIONAL_JUMP)  ; LAB_00452325


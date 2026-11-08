; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004491b0(int param_1)
;
;
; Called Functions:
;   FUN_004088b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004491b0
        ;   Label: FUN_004491b0
    SUB ESP,0x38                        ; 004491b1
    MOV EBX,dword ptr [ESP + 0x40]      ; 004491b4
    CMP dword ptr [EBX + 0x2d4],0x0     ; 004491b8
    JNZ 0x0044935f                      ; 004491bf
        ;   XREF to: 0044935f (CONDITIONAL_JUMP)  ; LAB_0044935f
    LEA EDX,[EBX + 0x20]                ; 004491c5
    LEA EAX,[EBX + 0xe0]                ; 004491c8
    FLD float ptr [EAX]                 ; 004491ce
    FADD float ptr [EDX]                ; 004491d0
    FSTP float ptr [EDX]                ; 004491d2
    FLD float ptr [EAX + 0x4]           ; 004491d4
    FADD float ptr [EDX + 0x4]          ; 004491d7
    FSTP float ptr [EDX + 0x4]          ; 004491da
    FLD float ptr [EAX + 0x8]           ; 004491dd
    FADD float ptr [EDX + 0x8]          ; 004491e0
    FSTP float ptr [EDX + 0x8]          ; 004491e3
    MOV dword ptr [EAX + 0x8],0x0       ; 004491e6
    LEA EDX,[EBX + 0x30]                ; 004491ed
    MOV ECX,dword ptr [EAX + 0x8]       ; 004491f0
    MOV dword ptr [EAX + 0x4],ECX       ; 004491f3
    MOV ECX,dword ptr [EAX + 0x4]       ; 004491f6
    MOV dword ptr [EAX],ECX             ; 004491f9
    LEA EAX,[EBX + 0xec]                ; 004491fb
    FLD float ptr [EAX]                 ; 00449201
    FADD float ptr [EDX]                ; 00449203
    FSTP float ptr [EDX]                ; 00449205
    FLD float ptr [EAX + 0x4]           ; 00449207
    FADD float ptr [EDX + 0x4]          ; 0044920a
    FSTP float ptr [EDX + 0x4]          ; 0044920d
    FLD float ptr [EAX + 0x8]           ; 00449210
    FADD float ptr [EDX + 0x8]          ; 00449213
    FSTP float ptr [EDX + 0x8]          ; 00449216
    MOV dword ptr [EAX + 0x8],0x0       ; 00449219
    MOV EDX,dword ptr [EAX + 0x8]       ; 00449220
    MOV dword ptr [EAX + 0x4],EDX       ; 00449223
    MOV EDX,dword ptr [EAX + 0x4]       ; 00449226
    MOV dword ptr [EAX],EDX             ; 00449229
    FLD float ptr [EBX + 0x2e0]         ; 0044922b
    FCOMP float ptr [EBX + 0x20]        ; 00449231
    FNSTSW AX                           ; 00449234
    SAHF                                ; 00449236
    JNZ 0x0044924b                      ; 00449237
        ;   XREF to: 0044924b (CONDITIONAL_JUMP)  ; LAB_0044924b
    FLD float ptr [EBX + 0x2e4]         ; 00449239
    FCOMP float ptr [EBX + 0x24]        ; 0044923f
    FNSTSW AX                           ; 00449242
    SAHF                                ; 00449244
    JZ 0x0044936e                       ; 00449245
        ;   XREF to: 0044936e (CONDITIONAL_JUMP)  ; LAB_0044936e
    PUSH 0x0                            ; 0044924b
        ;   Label: LAB_0044924b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044924d
    PUSH dword ptr [EBX + 0x2d8]        ; 00449253
    PUSH EBX                            ; 00449259
    CALL dword ptr [EAX + 0x40]         ; 0044925a
    MOV dword ptr [ESP + 0x40],EAX      ; 0044925d
    FLD float ptr [ESP + 0x40]          ; 00449261
    LEA EAX,[EBX + 0x2e0]               ; 00449265
    ADD ESP,0xc                         ; 0044926b
    LEA EDX,[EBX + 0x20]                ; 0044926e
    FSTP float ptr [ESP + 0x30]         ; 00449271
    CMP EAX,EDX                         ; 00449275
    JZ 0x00449289                       ; 00449277
        ;   XREF to: 00449289 (CONDITIONAL_JUMP)  ; LAB_00449289
    MOV ECX,dword ptr [EDX]             ; 00449279
    MOV dword ptr [EAX],ECX             ; 0044927b
    MOV ECX,dword ptr [EDX + 0x4]       ; 0044927d
    MOV dword ptr [EAX + 0x4],ECX       ; 00449280
    MOV ECX,dword ptr [EDX + 0x8]       ; 00449283
    MOV dword ptr [EAX + 0x8],ECX       ; 00449286
    LEA EAX,[EBX + 0x2ec]               ; 00449289
        ;   Label: LAB_00449289
    LEA EDX,[EBX + 0x30]                ; 0044928f
    CMP EAX,EDX                         ; 00449292
    JZ 0x004492a6                       ; 00449294
        ;   XREF to: 004492a6 (CONDITIONAL_JUMP)  ; LAB_004492a6
    MOV ECX,dword ptr [EDX]             ; 00449296
    MOV dword ptr [EAX],ECX             ; 00449298
    MOV ECX,dword ptr [EDX + 0x4]       ; 0044929a
    MOV dword ptr [EAX + 0x4],ECX       ; 0044929d
    MOV ECX,dword ptr [EDX + 0x8]       ; 004492a0
    MOV dword ptr [EAX + 0x8],ECX       ; 004492a3
    MOV EAX,dword ptr [ESP + 0x30]      ; 004492a6
        ;   Label: LAB_004492a6
    MOV dword ptr [EBX + 0x2f8],EAX     ; 004492aa
    PUSH EDI                            ; 004492b0
        ;   Label: LAB_004492b0
    PUSH ESI                            ; 004492b1
    CMP dword ptr [EBX + 0x2dc],0x0     ; 004492b2
    JNZ 0x004492cb                      ; 004492b9
        ;   XREF to: 004492cb (CONDITIONAL_JUMP)  ; LAB_004492cb
    MOV ESI,dword ptr [EBX + 0xdc]      ; 004492bb
    TEST ESI,ESI                        ; 004492c1
    JZ 0x004492cb                       ; 004492c3
        ;   XREF to: 004492cb (CONDITIONAL_JUMP)  ; LAB_004492cb
    MOV dword ptr [EBX + 0x2dc],ESI     ; 004492c5
    MOV EDI,dword ptr [EBX + 0x2dc]     ; 004492cb
        ;   Label: LAB_004492cb
    TEST EDI,EDI                        ; 004492d1
    JZ 0x004493c5                       ; 004492d3
        ;   XREF to: 004493c5 (CONDITIONAL_JUMP)  ; LAB_004493c5
    MOV EAX,EDI                         ; 004492d9
    MOV dword ptr [EBX + 0xdc],EDI      ; 004492db
    LEA EDX,[EBX + 0x20]                ; 004492e1
    MOV ECX,dword ptr [EAX + 0x20]      ; 004492e4
    MOV dword ptr [EDX],ECX             ; 004492e7
    MOV ECX,dword ptr [EAX + 0x24]      ; 004492e9
    MOV dword ptr [EDX + 0x4],ECX       ; 004492ec
    MOV ECX,dword ptr [EAX + 0x28]      ; 004492ef
    MOV dword ptr [EDX + 0x8],ECX       ; 004492f2
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004492f5
    MOV dword ptr [EDX + 0xc],EAX       ; 004492f8
    MOV EDX,dword ptr [EBX + 0xdc]      ; 004492fb
    LEA EAX,[EBX + 0x30]                ; 00449301
    ADD EDX,0x30                        ; 00449304
    CMP EAX,EDX                         ; 00449307
    JZ 0x0044931b                       ; 00449309
        ;   XREF to: 0044931b (CONDITIONAL_JUMP)  ; LAB_0044931b
    MOV ECX,dword ptr [EDX]             ; 0044930b
    MOV dword ptr [EAX],ECX             ; 0044930d
    MOV ECX,dword ptr [EDX + 0x4]       ; 0044930f
    MOV dword ptr [EAX + 0x4],ECX       ; 00449312
    MOV ECX,dword ptr [EDX + 0x8]       ; 00449315
    MOV dword ptr [EAX + 0x8],ECX       ; 00449318
    MOV EAX,dword ptr [EBX + 0xdc]      ; 0044931b
        ;   Label: LAB_0044931b
    PUSH EAX                            ; 00449321
    MOV EDX,dword ptr [EAX + 0x154]     ; 00449322
    LEA ESI,[ESP + 0xc]                 ; 00449328
    LEA EDI,[ESP + 0x24]                ; 0044932c
    CALL dword ptr [EDX + 0x1c]         ; 00449330
    MOV ECX,0x6                         ; 00449333
    LEA ESI,[ESP + 0xc]                 ; 00449338
    ADD ESP,0x4                         ; 0044933c
    MOVSD.REP ES:EDI,ESI                ; 0044933f
    FLD float ptr [ESP + 0x30]          ; 00449341
    FSUB float ptr [ESP + 0x24]         ; 00449345
    FADD float ptr [EBX + 0x24]         ; 00449349
    FSTP float ptr [EBX + 0x24]         ; 0044934c
    PUSH EBX                            ; 0044934f
    CALL FUN_004088b0                   ; 00449350
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088b0()
    ADD ESP,0x4                         ; 00449355
    POP ESI                             ; 00449358
    POP EDI                             ; 00449359
    ADD ESP,0x38                        ; 0044935a
    POP EBX                             ; 0044935d
    RET                                 ; 0044935e
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0044935f
        ;   Label: LAB_0044935f
    ADD ESP,0x38                        ; 00449369
    POP EBX                             ; 0044936c
    RET                                 ; 0044936d
    FLD float ptr [EBX + 0x2e8]         ; 0044936e
        ;   Label: LAB_0044936e
    FCOMP float ptr [EBX + 0x28]        ; 00449374
    FNSTSW AX                           ; 00449377
    SAHF                                ; 00449379
    JNZ 0x0044924b                      ; 0044937a
        ;   XREF to: 0044924b (CONDITIONAL_JUMP)  ; LAB_0044924b
    FLD float ptr [EBX + 0x2ec]         ; 00449380
    FCOMP float ptr [EBX + 0x30]        ; 00449386
    FNSTSW AX                           ; 00449389
    SAHF                                ; 0044938b
    JNZ 0x0044924b                      ; 0044938c
        ;   XREF to: 0044924b (CONDITIONAL_JUMP)  ; LAB_0044924b
    FLD float ptr [EBX + 0x2f0]         ; 00449392
    FCOMP float ptr [EBX + 0x34]        ; 00449398
    FNSTSW AX                           ; 0044939b
    SAHF                                ; 0044939d
    JNZ 0x0044924b                      ; 0044939e
        ;   XREF to: 0044924b (CONDITIONAL_JUMP)  ; LAB_0044924b
    FLD float ptr [EBX + 0x2f4]         ; 004493a4
    FCOMP float ptr [EBX + 0x38]        ; 004493aa
    FNSTSW AX                           ; 004493ad
    SAHF                                ; 004493af
    JNZ 0x0044924b                      ; 004493b0
        ;   XREF to: 0044924b (CONDITIONAL_JUMP)  ; LAB_0044924b
    MOV EAX,dword ptr [EBX + 0x2f8]     ; 004493b6
    MOV dword ptr [ESP + 0x30],EAX      ; 004493bc
    JMP 0x004492b0                      ; 004493c0
        ;   XREF to: 004492b0 (UNCONDITIONAL_JUMP)  ; LAB_004492b0
    MOV EAX,dword ptr [ESP + 0x38]      ; 004493c5
        ;   Label: LAB_004493c5
    MOV dword ptr [EBX + 0x24],EAX      ; 004493c9
    PUSH EBX                            ; 004493cc
    CALL FUN_004088b0                   ; 004493cd
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088b0()
    ADD ESP,0x4                         ; 004493d2
    POP ESI                             ; 004493d5
    POP EDI                             ; 004493d6
    ADD ESP,0x38                        ; 004493d7
    POP EBX                             ; 004493da
    RET                                 ; 004493db


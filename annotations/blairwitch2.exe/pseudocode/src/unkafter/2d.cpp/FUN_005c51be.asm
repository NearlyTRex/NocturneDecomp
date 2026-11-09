; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double unkafter_2d_cpp_FUN_005c51be(void)
;
;
; XREF[1]:
;   unkafter_morph.cpp_FUN_005c3a30 at 005c3a6b
;
; Referenced Globals:
;   undefined4 DAT_0061ee9d
;   undefined4 DAT_0061f458
;
; Called Functions:
;   crt_unknown.c_FUN_005bfa14
;   unkafter_2d.cpp_FUN_005c68d0
;
; *****************************************************************************

section .text

    OR EBX,EBX                          ; 005c51be
        ;   Label: unkafter_2d.cpp_FUN_005c51be
    JNZ 0x005c51cd                      ; 005c51c0
        ;   XREF to: 005c51cd (CONDITIONAL_JUMP)  ; LAB_005c51cd
    ADD ECX,ECX                         ; 005c51c2
    JNZ 0x005c51cb                      ; 005c51c4
        ;   XREF to: 005c51cb (CONDITIONAL_JUMP)  ; LAB_005c51cb
    JMP 0x005c5dbf                      ; 005c51c6
        ;   XREF to: 005c5dbf (UNCONDITIONAL_JUMP)  ; LAB_005c5dbf
    RCR ECX,0x1                         ; 005c51cb
        ;   Label: LAB_005c51cb
    OR EAX,EAX                          ; 005c51cd
        ;   Label: LAB_005c51cd
    JNZ 0x005c51d8                      ; 005c51cf
        ;   XREF to: 005c51d8 (CONDITIONAL_JUMP)  ; LAB_005c51d8
    ADD EDX,EDX                         ; 005c51d1
    JNZ 0x005c51d6                      ; 005c51d3
        ;   XREF to: 005c51d6 (CONDITIONAL_JUMP)  ; LAB_005c51d6
    RET                                 ; 005c51d5
    RCR EDX,0x1                         ; 005c51d6
        ;   Label: LAB_005c51d6
    CMP byte ptr [0x0061ee9d],0x0       ; 005c51d8 | DAT_0061ee9d
        ;   Label: LAB_005c51d8
    JZ 0x005c5211                       ; 005c51df
        ;   XREF to: 005c5211 (CONDITIONAL_JUMP)  ; LAB_005c5211
    PUSH EDX                            ; 005c51e1
    PUSH EAX                            ; 005c51e2
    FLD double ptr [ESP]                ; 005c51e3
    PUSH ECX                            ; 005c51e6
    PUSH EBX                            ; 005c51e7
    TEST byte ptr [0x0061f458],0x1      ; 005c51e8 | DAT_0061f458
    JZ 0x005c51f8                       ; 005c51ef
        ;   XREF to: 005c51f8 (CONDITIONAL_JUMP)  ; LAB_005c51f8
    CALL crt_unknown.c_FUN_005bfa14     ; 005c51f1
        ;   XREF to: 005bfa14 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfa14()
    JMP 0x005c51fe                      ; 005c51f6
        ;   XREF to: 005c51fe (UNCONDITIONAL_JUMP)  ; LAB_005c51fe
    FDIV double ptr [ESP]               ; 005c51f8
        ;   Label: LAB_005c51f8
    ADD ESP,0x8                         ; 005c51fb
    FSTP double ptr [ESP]               ; 005c51fe
        ;   Label: LAB_005c51fe
    WAIT                                ; 005c5201
    POP EAX                             ; 005c5202
    POP EDX                             ; 005c5203
    CMP EDX,0x80000000                  ; 005c5204
    JNZ 0x005c5210                      ; 005c520a
        ;   XREF to: 005c5210 (CONDITIONAL_JUMP)  ; LAB_005c5210
    SUB EDX,EDX                         ; 005c520c
    MOV EAX,EDX                         ; 005c520e
    RET                                 ; 005c5210
        ;   Label: LAB_005c5210
    PUSH EBP                            ; 005c5211
        ;   Label: LAB_005c5211
    MOV EBP,ESP                         ; 005c5212
    PUSH EDI                            ; 005c5214
    PUSH ESI                            ; 005c5215
    MOV EDI,EDX                         ; 005c5216
    MOV ESI,ECX                         ; 005c5218
    SAR EDI,0x14                        ; 005c521a
    SAR ECX,0x14                        ; 005c521d
    AND EDI,0x800007ff                  ; 005c5220
    AND ECX,0x800007ff                  ; 005c5226
    ROL EDI,0x10                        ; 005c522c
    ROL ECX,0x10                        ; 005c522f
    ADD DI,CX                           ; 005c5232
    ROL EDI,0x10                        ; 005c5235
    ROL ECX,0x10                        ; 005c5238
    AND EDX,0xfffff                     ; 005c523b
    AND ESI,0xfffff                     ; 005c5241
    OR DI,DI                            ; 005c5247
    JZ 0x005c5254                       ; 005c524a
        ;   XREF to: 005c5254 (CONDITIONAL_JUMP)  ; LAB_005c5254
    OR EDX,0x100000                     ; 005c524c
    JMP 0x005c5262                      ; 005c5252
        ;   XREF to: 005c5262 (UNCONDITIONAL_JUMP)  ; LAB_005c5262
    ADD EAX,EAX                         ; 005c5254
        ;   Label: LAB_005c5254
    ADC EDX,EDX                         ; 005c5256
    DEC DI                              ; 005c5258
    TEST EDX,0x100000                   ; 005c525a
    JZ 0x005c5254                       ; 005c5260
        ;   XREF to: 005c5254 (CONDITIONAL_JUMP)  ; LAB_005c5254
    OR CX,CX                            ; 005c5262
        ;   Label: LAB_005c5262
    JZ 0x005c526f                       ; 005c5265
        ;   XREF to: 005c526f (CONDITIONAL_JUMP)  ; LAB_005c526f
    OR ESI,0x100000                     ; 005c5267
    JMP 0x005c527d                      ; 005c526d
        ;   XREF to: 005c527d (UNCONDITIONAL_JUMP)  ; LAB_005c527d
    ADD EBX,EBX                         ; 005c526f
        ;   Label: LAB_005c526f
    ADC ESI,ESI                         ; 005c5271
    DEC CX                              ; 005c5273
    TEST ESI,0x100000                   ; 005c5275
    JZ 0x005c526f                       ; 005c527b
        ;   XREF to: 005c526f (CONDITIONAL_JUMP)  ; LAB_005c526f
    SUB DI,CX                           ; 005c527d
        ;   Label: LAB_005c527d
    ADD DI,0x3ff                        ; 005c5280
    JS 0x005c5298                       ; 005c5285
        ;   XREF to: 005c5298 (CONDITIONAL_JUMP)  ; LAB_005c5298
    CMP DI,0x7ff                        ; 005c5287
    JC 0x005c5298                       ; 005c528c
        ;   XREF to: 005c5298 (CONDITIONAL_JUMP)  ; LAB_005c5298
    MOV EAX,ECX                         ; 005c528e
    POP ESI                             ; 005c5290
    POP EDI                             ; 005c5291
    POP EBP                             ; 005c5292
    JMP 0x005c5dcb                      ; 005c5293
        ;   XREF to: 005c5dcb (UNCONDITIONAL_JUMP)  ; LAB_005c5dcb
    CMP DI,-0x34                        ; 005c5298
        ;   Label: LAB_005c5298
    JGE 0x005c52a6                      ; 005c529c
        ;   XREF to: 005c52a6 (CONDITIONAL_JUMP)  ; LAB_005c52a6
    POP ESI                             ; 005c529e
    POP EDI                             ; 005c529f
    POP EBP                             ; 005c52a0
    JMP 0x005c5dae                      ; 005c52a1
        ;   XREF to: 005c5dae (UNCONDITIONAL_JUMP)  ; LAB_005c5dae
    PUSH EDI                            ; 005c52a6
        ;   Label: LAB_005c52a6
    MOV CL,0xb                          ; 005c52a7
    SHLD EDX,EAX,CL                     ; 005c52a9
    SHLD EAX,EBP,CL                     ; 005c52ac
    AND EAX,0xfffff800                  ; 005c52af
    SHLD ESI,EBX,CL                     ; 005c52b4
    SHLD EBX,EBP,CL                     ; 005c52b7
    AND EBX,0xfffff800                  ; 005c52ba
    PUSH ESI                            ; 005c52c0
    PUSH EBX                            ; 005c52c1
    MOV ECX,ESI                         ; 005c52c2
    MOV EDI,EDX                         ; 005c52c4
    MOV ESI,EAX                         ; 005c52c6
    SUB EAX,EAX                         ; 005c52c8
    CMP ECX,EDX                         ; 005c52ca
    JA 0x005c52d1                       ; 005c52cc
        ;   XREF to: 005c52d1 (CONDITIONAL_JUMP)  ; LAB_005c52d1
    SUB EDX,ECX                         ; 005c52ce
    INC EAX                             ; 005c52d0
    PUSH EAX                            ; 005c52d1
        ;   Label: LAB_005c52d1
    MOV EAX,ESI                         ; 005c52d2
    DIV ECX                             ; 005c52d4
    PUSH EAX                            ; 005c52d6
    XCHG EAX,EBX                        ; 005c52d7
    MUL EBX                             ; 005c52d8
    XCHG EAX,ECX                        ; 005c52da
    XCHG EBX,EDX                        ; 005c52db
    MUL EDX                             ; 005c52dd
    ADD EAX,EBX                         ; 005c52df
    ADC EDX,0x0                         ; 005c52e1
    MOV EBX,dword ptr [EBP + -0x14]     ; 005c52e4
    TEST byte ptr [EBP + -0x18],0x1     ; 005c52e7
    JZ 0x005c52f2                       ; 005c52eb
        ;   XREF to: 005c52f2 (CONDITIONAL_JUMP)  ; LAB_005c52f2
    ADD EAX,EBX                         ; 005c52ed
    ADC EDX,dword ptr [EBP + -0x10]     ; 005c52ef
    NEG ECX                             ; 005c52f2
        ;   Label: LAB_005c52f2
    SBB ESI,EAX                         ; 005c52f4
    SBB EDI,EDX                         ; 005c52f6
    JZ 0x005c530c                       ; 005c52f8
        ;   XREF to: 005c530c (CONDITIONAL_JUMP)  ; LAB_005c530c
    SUB dword ptr [EBP + -0x1c],0x1     ; 005c52fa
        ;   Label: LAB_005c52fa
    SBB dword ptr [EBP + -0x18],0x0     ; 005c52fe
    ADD ECX,EBX                         ; 005c5302
    ADC ESI,dword ptr [EBP + -0x10]     ; 005c5304
    ADC EDI,0x0                         ; 005c5307
    JNZ 0x005c52fa                      ; 005c530a
        ;   XREF to: 005c52fa (CONDITIONAL_JUMP)  ; LAB_005c52fa
    MOV EDI,ESI                         ; 005c530c
        ;   Label: LAB_005c530c
    MOV ESI,ECX                         ; 005c530e
    MOV ECX,dword ptr [EBP + -0x10]     ; 005c5310
    CMP ECX,EDI                         ; 005c5313
    JA 0x005c5321                       ; 005c5315
        ;   XREF to: 005c5321 (CONDITIONAL_JUMP)  ; LAB_005c5321
    SUB EDI,ECX                         ; 005c5317
    ADD dword ptr [EBP + -0x1c],0x1     ; 005c5319
    ADC dword ptr [EBP + -0x18],0x0     ; 005c531d
    MOV EDX,EDI                         ; 005c5321
        ;   Label: LAB_005c5321
    MOV EAX,ESI                         ; 005c5323
    DIV ECX                             ; 005c5325
    PUSH EAX                            ; 005c5327
    OR EAX,EAX                          ; 005c5328
    JZ 0x005c5358                       ; 005c532a
        ;   XREF to: 005c5358 (CONDITIONAL_JUMP)  ; LAB_005c5358
    XCHG EAX,EBX                        ; 005c532c
    MUL EBX                             ; 005c532d
    XCHG EAX,ECX                        ; 005c532f
    XCHG EBX,EDX                        ; 005c5330
    MUL EDX                             ; 005c5332
    ADD EAX,EBX                         ; 005c5334
    ADC EDX,0x0                         ; 005c5336
    NEG ECX                             ; 005c5339
    SBB ESI,EAX                         ; 005c533b
    SBB EDI,EDX                         ; 005c533d
    JZ 0x005c5358                       ; 005c533f
        ;   XREF to: 005c5358 (CONDITIONAL_JUMP)  ; LAB_005c5358
    SUB dword ptr [EBP + -0x20],0x1     ; 005c5341
        ;   Label: LAB_005c5341
    SBB dword ptr [EBP + -0x1c],0x0     ; 005c5345
    SBB dword ptr [EBP + -0x18],0x0     ; 005c5349
    ADD ECX,dword ptr [EBP + -0x14]     ; 005c534d
    ADC ESI,dword ptr [EBP + -0x10]     ; 005c5350
    ADC EDI,0x0                         ; 005c5353
    JNZ 0x005c5341                      ; 005c5356
        ;   XREF to: 005c5341 (CONDITIONAL_JUMP)  ; LAB_005c5341
    POP EAX                             ; 005c5358
        ;   Label: LAB_005c5358
    POP EDX                             ; 005c5359
    POP EBX                             ; 005c535a
    ADD ESP,0x8                         ; 005c535b
    POP EDI                             ; 005c535e
    DEC DI                              ; 005c535f
    SHR EBX,0x1                         ; 005c5361
    JNC 0x005c536a                      ; 005c5363
        ;   XREF to: 005c536a (CONDITIONAL_JUMP)  ; LAB_005c536a
    RCR EDX,0x1                         ; 005c5365
    RCR EAX,0x1                         ; 005c5367
    INC EDI                             ; 005c5369
    SUB ESI,ESI                         ; 005c536a
        ;   Label: LAB_005c536a
    MOV CL,0xb                          ; 005c536c
    SHRD EAX,EDX,CL                     ; 005c536e
    RCR ESI,0x1                         ; 005c5371
    SHRD EDX,ESI,CL                     ; 005c5373
    OR EDX,0xfff00000                   ; 005c5376
    ADD ESI,ESI                         ; 005c537c
    ADC EAX,0x0                         ; 005c537e
    ADC EDX,0x0                         ; 005c5381
    ADC EDI,0x0                         ; 005c5384
    OR DI,DI                            ; 005c5387
    JG 0x005c53a9                       ; 005c538a
        ;   XREF to: 005c53a9 (CONDITIONAL_JUMP)  ; LAB_005c53a9
    JNZ 0x005c5392                      ; 005c538c
        ;   XREF to: 005c5392 (CONDITIONAL_JUMP)  ; LAB_005c5392
    MOV CL,0x1                          ; 005c538e
    JMP 0x005c5398                      ; 005c5390
        ;   XREF to: 005c5398 (UNCONDITIONAL_JUMP)  ; LAB_005c5398
    NEG DI                              ; 005c5392
        ;   Label: LAB_005c5392
    MOV CX,DI                           ; 005c5395
    AND EDX,0x1fffff                    ; 005c5398
        ;   Label: LAB_005c5398
    SUB EBX,EBX                         ; 005c539e
    SHRD EAX,EDX,CL                     ; 005c53a0
    SHRD EDX,EBX,CL                     ; 005c53a3
    SUB DI,DI                           ; 005c53a6
    AND EDX,0xfffff                     ; 005c53a9
        ;   Label: LAB_005c53a9
    MOV ESI,EDI                         ; 005c53af
    ROR EDI,0xb                         ; 005c53b1
    ADD ESI,ESI                         ; 005c53b4
    RCR EDI,0x1                         ; 005c53b6
    AND EDI,0xfff00000                  ; 005c53b8
    OR EDX,EDI                          ; 005c53be
    POP ESI                             ; 005c53c0
    POP EDI                             ; 005c53c1
    POP EBP                             ; 005c53c2
    RET                                 ; 005c53c3
    MOV EAX,0x83                        ; 005c5dbf
        ;   Label: LAB_005c5dbf
    CALL unkafter_2d.cpp_FUN_005c68d0   ; 005c5dc4
        ;   XREF to: 005c68d0 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c68d0()
    JMP 0x005c5ddc                      ; 005c5dc9
        ;   XREF to: 005c5ddc (UNCONDITIONAL_JUMP)  ; LAB_005c5ddc


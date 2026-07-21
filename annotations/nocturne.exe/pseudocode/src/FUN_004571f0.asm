; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004571f0(int param_1,undefined4 param_2,float *param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_0057d48e
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_fread_FUN_005636d0
;   crt_string.c__strcmp_FUN_005649c0
;   FUN_00456f60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004571f0
        ;   Label: FUN_004571f0
    PUSH ESI                            ; 004571f1
    PUSH EDI                            ; 004571f2
    PUSH EBP                            ; 004571f3
    SUB ESP,0xc                         ; 004571f4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004571f7
    MOV EBP,dword ptr [ESP + 0x24]      ; 004571fb
    PUSH EBP                            ; 004571ff
    PUSH 0x1                            ; 00457200
    PUSH 0x20                           ; 00457202
    PUSH EBX                            ; 00457204
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00457205
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 0045720a
    PUSH EBP                            ; 0045720d
    PUSH 0x1                            ; 0045720e
    PUSH 0x4                            ; 00457210
    LEA EAX,[EBX + 0x20]                ; 00457212
    PUSH EAX                            ; 00457215
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00457216
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 0045721b
    PUSH EBP                            ; 0045721e
    PUSH 0x1                            ; 0045721f
    PUSH 0x4                            ; 00457221
    LEA EAX,[EBX + 0x24]                ; 00457223
    PUSH EAX                            ; 00457226
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00457227
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 0045722c
    PUSH EBX                            ; 0045722f
    CALL FUN_00456f60                   ; 00457230
        ;   XREF to: 00456f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00456f60()
    ADD ESP,0x4                         ; 00457235
    PUSH EBP                            ; 00457238
    PUSH 0x1                            ; 00457239
    PUSH 0xc                            ; 0045723b
    LEA EAX,[EBX + 0x33c]               ; 0045723d
    PUSH EAX                            ; 00457243
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00457244
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 00457249
    PUSH EBP                            ; 0045724c
    PUSH 0x1                            ; 0045724d
    PUSH 0xc                            ; 0045724f
    LEA EAX,[EBX + 0x348]               ; 00457251
    PUSH EAX                            ; 00457257
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00457258
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 0045725d
    PUSH EBP                            ; 00457260
    PUSH 0x1                            ; 00457261
    PUSH 0xc                            ; 00457263
    LEA EAX,[EBX + 0x354]               ; 00457265
    PUSH EAX                            ; 0045726b
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0045726c
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 00457271
    PUSH EBP                            ; 00457274
    PUSH 0x1                            ; 00457275
    PUSH 0xc                            ; 00457277
    LEA EAX,[EBX + 0x360]               ; 00457279
    PUSH EAX                            ; 0045727f
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00457280
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 00457285
    PUSH EBP                            ; 00457288
    PUSH 0x1                            ; 00457289
    PUSH 0x4                            ; 0045728b
    LEA EAX,[EBX + 0x38]                ; 0045728d
    PUSH EAX                            ; 00457290
    XOR ESI,ESI                         ; 00457291
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00457293
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    MOV EDX,dword ptr [EBX + 0x38]      ; 00457298
    ADD ESP,0x10                        ; 0045729b
    TEST EDX,EDX                        ; 0045729e
    JLE 0x004572c0                      ; 004572a0
        ;   XREF to: 004572c0 (CONDITIONAL_JUMP)  ; LAB_004572c0
    LEA EDI,[EBX + 0x44]                ; 004572a2
    PUSH EBP                            ; 004572a5
        ;   Label: LAB_004572a5
    PUSH 0x1                            ; 004572a6
    PUSH 0x10                           ; 004572a8
    PUSH EDI                            ; 004572aa
    INC ESI                             ; 004572ab
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004572ac
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 004572b1
    MOV ECX,dword ptr [EBX + 0x38]      ; 004572b4
    ADD EDI,0x18                        ; 004572b7
    CMP ESI,ECX                         ; 004572ba
    JL 0x004572a5                       ; 004572bc
        ;   XREF to: 004572a5 (CONDITIONAL_JUMP)  ; LAB_004572a5
    MOV EAX,EAX                         ; 004572be
    PUSH EBP                            ; 004572c0
        ;   Label: LAB_004572c0
    PUSH 0x1                            ; 004572c1
    PUSH 0x4                            ; 004572c3
    LEA EAX,[EBX + 0x28]                ; 004572c5
    PUSH EAX                            ; 004572c8
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004572c9
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 004572ce
    PUSH EBP                            ; 004572d1
    MOV ESI,dword ptr [EBX + 0x20]      ; 004572d2
    PUSH ESI                            ; 004572d5
    PUSH 0xc                            ; 004572d6
    MOV EDI,dword ptr [EBX + 0x2c]      ; 004572d8
    PUSH EDI                            ; 004572db
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004572dc
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 004572e1
    PUSH EBP                            ; 004572e4
    MOV EAX,dword ptr [EBX + 0x20]      ; 004572e5
    PUSH EAX                            ; 004572e8
    PUSH 0xc                            ; 004572e9
    MOV EDX,dword ptr [EBX + 0x30]      ; 004572eb
    PUSH EDX                            ; 004572ee
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004572ef
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 004572f4
    PUSH 0x57d481                       ; 004572f7
    PUSH EBX                            ; 004572fc
    CALL crt_string.c__strcmp_FUN_005649c0 ; 004572fd
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 00457302
    TEST EAX,EAX                        ; 00457305
    JZ 0x004574c3                       ; 00457307
        ;   XREF to: 004574c3 (CONDITIONAL_JUMP)  ; LAB_004574c3
    PUSH EBP                            ; 0045730d
    MOV EDI,dword ptr [EBX + 0x24]      ; 0045730e
    PUSH EDI                            ; 00457311
    PUSH 0x48                           ; 00457312
    PUSH 0x1af4ef0                      ; 00457314
    XOR EDI,EDI                         ; 00457319
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0045731b
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    MOV EBP,dword ptr [EBX + 0x24]      ; 00457320
    ADD ESP,0x10                        ; 00457323
    TEST EBP,EBP                        ; 00457326
    JLE 0x004573ba                      ; 00457328
        ;   XREF to: 004573ba (CONDITIONAL_JUMP)  ; LAB_004573ba
    XOR EDX,EDX                         ; 0045732e
    XOR EAX,EAX                         ; 00457330
    MOV ESI,dword ptr [EBX + 0x34]      ; 00457332
        ;   Label: LAB_00457332
    LEA ECX,[ESI + EAX*0x1]             ; 00457335
    MOV ESI,dword ptr [EDX + 0x1af4ef8] ; 00457338
    MOV dword ptr [ECX],ESI             ; 0045733e
    MOV ESI,dword ptr [EBX + 0x34]      ; 00457340
    LEA ECX,[ESI + EAX*0x1]             ; 00457343
    MOV ESI,dword ptr [EDX + 0x1af4efc] ; 00457346
    MOV dword ptr [ECX + 0x4],ESI       ; 0045734c
    MOV ECX,dword ptr [EBX + 0x34]      ; 0045734f
    MOV ESI,dword ptr [EDX + 0x1af4f00] ; 00457352
    MOV dword ptr [ECX + EAX*0x1 + 0x8],ESI ; 00457358
    MOV ECX,dword ptr [EBX + 0x34]      ; 0045735c
    MOV ESI,dword ptr [EDX + 0x1af4f04] ; 0045735f
    MOV dword ptr [ECX + EAX*0x1 + 0xc],ESI ; 00457365
    MOV ECX,dword ptr [EBX + 0x34]      ; 00457369
    MOV ESI,dword ptr [EDX + 0x1af4f08] ; 0045736c
    MOV dword ptr [ECX + EAX*0x1 + 0x10],ESI ; 00457372
    MOV ECX,dword ptr [EBX + 0x34]      ; 00457376
    MOV ESI,dword ptr [EDX + 0x1af4f14] ; 00457379
    MOV dword ptr [ECX + EAX*0x1 + 0x14],ESI ; 0045737f
    MOV ECX,dword ptr [EBX + 0x34]      ; 00457383
    MOV ESI,dword ptr [EDX + 0x1af4f20] ; 00457386
    MOV dword ptr [ECX + EAX*0x1 + 0x18],ESI ; 0045738c
    CMP dword ptr [EDX + 0x1af4ef4],0x3 ; 00457390
    JNZ 0x004574af                      ; 00457397
        ;   XREF to: 004574af (CONDITIONAL_JUMP)  ; LAB_004574af
    MOV ESI,dword ptr [EBX + 0x34]      ; 0045739d
    MOV dword ptr [ESI + EAX*0x1 + 0x1c],0xffffffff ; 004573a0
    ADD EAX,0x20                        ; 004573a8
        ;   Label: LAB_004573a8
    INC EDI                             ; 004573ab
    MOV ECX,dword ptr [EBX + 0x24]      ; 004573ac
    ADD EDX,0x48                        ; 004573af
    CMP EDI,ECX                         ; 004573b2
    JL 0x00457332                       ; 004573b4
        ;   XREF to: 00457332 (CONDITIONAL_JUMP)  ; LAB_00457332
    MOV EDI,dword ptr [ESP + 0x28]      ; 004573ba
        ;   Label: LAB_004573ba
    TEST EDI,EDI                        ; 004573be
    JZ 0x00457440                       ; 004573c0
        ;   XREF to: 00457440 (CONDITIONAL_JUMP)
    FLD double ptr [0x0057d48e]         ; 004573c6 | DAT_0057d48e
    FLD float ptr [EDI]                 ; 004573cc
    FMUL ST1                            ; 004573ce
    FLD float ptr [EDI + 0x4]           ; 004573d0
    FMUL ST2                            ; 004573d3
    FLD float ptr [EDI + 0x8]           ; 004573d5
    FMULP ST3                           ; 004573d8
    MOV EBP,dword ptr [EBX + 0x20]      ; 004573da
    XOR ESI,ESI                         ; 004573dd
    FXCH                                ; 004573df
    CALL crt_math.c_round_FUN_00563a30  ; 004573e1
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 004573e6
    CALL crt_math.c_round_FUN_00563a30  ; 004573e8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 004573ed
    CALL crt_math.c_round_FUN_00563a30  ; 004573ef
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 004573f4
    FISTP dword ptr [ESP + 0x4]         ; 004573f6
    FXCH                                ; 004573fa
    FISTP dword ptr [ESP + 0x8]         ; 004573fc
    FISTP dword ptr [ESP]               ; 00457400
    TEST EBP,EBP                        ; 00457403
    JLE 0x00457440                      ; 00457405
        ;   XREF to: 00457440 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00457407
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00457409
        ;   Label: LAB_00457409
    MOV EAX,dword ptr [ESP]             ; 0045740c
    SUB dword ptr [EDX + EDI*0x1],EAX   ; 0045740f
    MOV EDI,dword ptr [EBX + 0x2c]      ; 00457412
    MOV EAX,dword ptr [ESP + 0x4]       ; 00457415
    SUB dword ptr [EDX + EDI*0x1 + 0x4],EAX ; 00457419
    MOV EDI,dword ptr [EBX + 0x2c]      ; 0045741d
    MOV EAX,dword ptr [ESP + 0x8]       ; 00457420
    SUB dword ptr [EDX + EDI*0x1 + 0x8],EAX ; 00457424
    INC ESI                             ; 00457428
    MOV EDI,dword ptr [EBX + 0x20]      ; 00457429
    ADD EDX,0xc                         ; 0045742c
    CMP ESI,EDI                         ; 0045742f
    JL 0x00457409                       ; 00457431
        ;   XREF to: 00457409 (CONDITIONAL_JUMP)  ; LAB_00457409
    LEA EAX,[EAX]                       ; 00457433
    LEA EDX,[EDX]                       ; 00457439
    NOP                                 ; 0045743f
    MOV ESI,dword ptr [EBX + 0x34]      ; 004574af
        ;   Label: LAB_004574af
    LEA ECX,[ESI + EAX*0x1]             ; 004574b2
    MOV ESI,dword ptr [EDX + 0x1af4f2c] ; 004574b5
    MOV dword ptr [ECX + 0x1c],ESI      ; 004574bb
    JMP 0x004573a8                      ; 004574be
        ;   XREF to: 004573a8 (UNCONDITIONAL_JUMP)  ; LAB_004573a8
    PUSH EBP                            ; 004574c3
        ;   Label: LAB_004574c3
    MOV ECX,dword ptr [EBX + 0x24]      ; 004574c4
    PUSH ECX                            ; 004574c7
    PUSH 0x20                           ; 004574c8
    MOV ESI,dword ptr [EBX + 0x34]      ; 004574ca
    PUSH ESI                            ; 004574cd
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004574ce
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 004574d3
    JMP 0x004573ba                      ; 004574d6
        ;   XREF to: 004573ba (UNCONDITIONAL_JUMP)  ; LAB_004573ba


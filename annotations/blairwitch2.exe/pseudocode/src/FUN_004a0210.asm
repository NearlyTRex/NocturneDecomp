; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a0210(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d589d
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01cab6bc
;   undefined4 DAT_01e661b8
;   undefined4 DAT_01fb331c
;   undefined4 DAT_01fb3320
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0040c8f0
;   FUN_0041a840
;   FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0210
        ;   Label: FUN_004a0210
    PUSH ESI                            ; 004a0211
    PUSH EDI                            ; 004a0212
    PUSH EBP                            ; 004a0213
    MOV EBP,ESP                         ; 004a0214
    SUB ESP,0x54                        ; 004a0216
    AND ESP,0xfffffff8                  ; 004a0219
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a021c
    MOV EDX,dword ptr [0x0060b280]      ; 004a021f | DAT_0060b280
    MOV dword ptr [EAX + 0x3fc],0x0     ; 004a0225
    PUSH EDX                            ; 004a022f | DAT_01ba5c50
    MOV dword ptr [EAX + 0x3f4],0x0     ; 004a0230
    CALL FUN_0046b960                   ; 004a023a
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 004a023f
    TEST EAX,EAX                        ; 004a0242
    JNZ 0x004a024c                      ; 004a0244
        ;   XREF to: 004a024c (CONDITIONAL_JUMP)  ; LAB_004a024c
    CMP dword ptr [EBP + 0x18],0x0      ; 004a0246
    JNZ 0x004a0253                      ; 004a024a
        ;   XREF to: 004a0253 (CONDITIONAL_JUMP)  ; LAB_004a0253
    MOV ESP,EBP                         ; 004a024c
        ;   Label: LAB_004a024c
    POP EBP                             ; 004a024e
    POP EDI                             ; 004a024f
    POP ESI                             ; 004a0250
    POP EBX                             ; 004a0251
    RET                                 ; 004a0252
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a0253
        ;   Label: LAB_004a0253
    PUSH EBX                            ; 004a0256
    CALL FUN_004089d0                   ; 004a0257
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 004a025c
    PUSH 0x0                            ; 004a025f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004a0261
    PUSH EBX                            ; 004a0267
    LEA ESI,[ESP + 0x20]                ; 004a0268
    LEA EDI,[ESP + 0x8]                 ; 004a026c
    CALL dword ptr [EAX + 0x24]         ; 004a0270
    MOV ECX,0x6                         ; 004a0273
    ADD ESP,0x4                         ; 004a0278
    LEA EAX,[ESP + 0x4]                 ; 004a027b
    LEA ESI,[ESP + 0x1c]                ; 004a027f
    PUSH EAX                            ; 004a0283
    MOVSD.REP ES:EDI,ESI                ; 004a0284
    CALL FUN_0041a840                   ; 004a0286
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 004a028b
    PUSH EBX                            ; 004a028e
    MOV dword ptr [EBX + 0x3ec],EAX     ; 004a028f
    CALL FUN_00408a10                   ; 004a0295
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    MOV EDX,dword ptr [EBX + 0x3ec]     ; 004a029a
    ADD ESP,0x4                         ; 004a02a0
    TEST EDX,EDX                        ; 004a02a3
    JZ 0x004a024c                       ; 004a02a5
        ;   XREF to: 004a024c (CONDITIONAL_JUMP)  ; LAB_004a024c
    FLD float ptr [EBX + 0x2b8]         ; 004a02a7
    FMUL ST0                            ; 004a02ad
    FLD float ptr [EBX + 0x2b4]         ; 004a02af
    FMUL ST0                            ; 004a02b5
    FADDP                               ; 004a02b7
    FLD float ptr [EBX + 0x2bc]         ; 004a02b9
    FMUL ST0                            ; 004a02bf
    FADDP                               ; 004a02c1
    FSQRT                               ; 004a02c3
    FLD1                                ; 004a02c5
    FCOMPP                              ; 004a02c7
    FNSTSW AX                           ; 004a02c9
    SAHF                                ; 004a02cb
    JNC 0x004a024c                      ; 004a02cc
        ;   XREF to: 004a024c (CONDITIONAL_JUMP)  ; LAB_004a024c
    FLD float ptr [EBX + 0x308]         ; 004a02d2
    FLDZ                                ; 004a02d8
    FCOMPP                              ; 004a02da
    FNSTSW AX                           ; 004a02dc
    SAHF                                ; 004a02de
    JNC 0x004a024c                      ; 004a02df
        ;   XREF to: 004a024c (CONDITIONAL_JUMP)  ; LAB_004a024c
    MOV ECX,dword ptr [EBX + 0x304]     ; 004a02e5
    TEST ECX,ECX                        ; 004a02eb
    JNZ 0x004a024c                      ; 004a02ed
        ;   XREF to: 004a024c (CONDITIONAL_JUMP)  ; LAB_004a024c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a02f3
    MOV dword ptr [ESP + 0x48],ECX      ; 004a02f6
    MOV dword ptr [ESP + 0x50],ECX      ; 004a02fa
    ADD EAX,0x20                        ; 004a02fe
    XOR EBX,EBX                         ; 004a0301
    MOV dword ptr [ESP + 0x4c],EAX      ; 004a0303
    MOV EAX,[0x0061b5a8]                ; 004a0307 | DAT_0061b5a8 | DAT_01e661b8
        ;   Label: LAB_004a0307
    MOV EDX,dword ptr [ESP + 0x50]      ; 004a030c
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 004a0310 | DAT_01fb331c
    JL 0x004a0345                       ; 004a0316
        ;   XREF to: 004a0345 (CONDITIONAL_JUMP)  ; LAB_004a0345
    CMP dword ptr [ESP + 0x48],0x0      ; 004a0318
    JNZ 0x004a024c                      ; 004a031d
        ;   XREF to: 004a024c (CONDITIONAL_JUMP)  ; LAB_004a024c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a0323
    MOV dword ptr [EAX + 0x3fc],0x1     ; 004a0326
    MOV ESP,EBP                         ; 004a0330
    POP EBP                             ; 004a0332
    POP EDI                             ; 004a0333
    POP ESI                             ; 004a0334
    POP EBX                             ; 004a0335
    RET                                 ; 004a0336
    MOV EDI,dword ptr [ESP + 0x50]      ; 004a0337
        ;   Label: LAB_004a0337
    INC EDI                             ; 004a033b
    ADD EBX,0x4                         ; 004a033c
    MOV dword ptr [ESP + 0x50],EDI      ; 004a033f
    JMP 0x004a0307                      ; 004a0343
        ;   XREF to: 004a0307 (UNCONDITIONAL_JUMP)  ; LAB_004a0307
    MOV EDX,dword ptr [0x01cab6bc]      ; 004a0345 | DAT_01cab6bc
        ;   Label: LAB_004a0345
    PUSH EDX                            ; 004a034b
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 004a034c | DAT_01fb3320
    PUSH ECX                            ; 004a0353
    CALL FUN_0040c8f0                   ; 004a0354
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    MOV EDX,EAX                         ; 004a0359
    ADD ESP,0x8                         ; 004a035b
    TEST EAX,EAX                        ; 004a035e
    JZ 0x004a0337                       ; 004a0360
        ;   XREF to: 004a0337 (CONDITIONAL_JUMP)  ; LAB_004a0337
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004a0362
    LEA EDI,[ESP + 0x30]                ; 004a0366
    FLD float ptr [ESI + 0x4]           ; 004a036a
    FLD float ptr [ESI + 0x8]           ; 004a036d
    FLD float ptr [ESI]                 ; 004a0370
    LEA ESI,[ESP + 0x3c]                ; 004a0372
    FSUB float ptr [EAX + 0x20]         ; 004a0376
    FXCH ST2                            ; 004a0379
    FSUB float ptr [EAX + 0x24]         ; 004a037b
    FXCH                                ; 004a037e
    FSUB float ptr [EAX + 0x28]         ; 004a0380
    FXCH ST2                            ; 004a0383
    FSTP float ptr [ESP + 0x3c]         ; 004a0385
    FSTP float ptr [ESP + 0x40]         ; 004a0389
    FSTP float ptr [ESP + 0x44]         ; 004a038d
    MOVSD ES:EDI,ESI                    ; 004a0391
    MOVSD ES:EDI,ESI                    ; 004a0392
    MOVSD ES:EDI,ESI                    ; 004a0393
    FLD float ptr [ESP + 0x34]          ; 004a0394
    FMUL ST0                            ; 004a0398
    FLD float ptr [ESP + 0x30]          ; 004a039a
    FMUL ST0                            ; 004a039e
    FADDP                               ; 004a03a0
    FLD float ptr [ESP + 0x38]          ; 004a03a2
    FMUL ST0                            ; 004a03a6
    FADDP                               ; 004a03a8
    ADD EAX,0x20                        ; 004a03aa
    FSQRT                               ; 004a03ad
    FCOMP double ptr [0x005d589d]       ; 004a03af | DAT_005d589d
    FNSTSW AX                           ; 004a03b5
    SAHF                                ; 004a03b7
    JNC 0x004a0337                      ; 004a03b8
        ;   XREF to: 004a0337 (CONDITIONAL_JUMP)  ; LAB_004a0337
    CMP dword ptr [EDX + 0x3fc],0x1     ; 004a03be
    JNZ 0x004a0337                      ; 004a03c5
        ;   XREF to: 004a0337 (CONDITIONAL_JUMP)  ; LAB_004a0337
    MOV ESP,EBP                         ; 004a03cb
    POP EBP                             ; 004a03cd
    POP EDI                             ; 004a03ce
    POP ESI                             ; 004a03cf
    POP EBX                             ; 004a03d0
    RET                                 ; 004a03d1


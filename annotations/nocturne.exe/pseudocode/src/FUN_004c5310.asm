; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c5310(int param_1,int param_2)
;
; Local Variables:
; undefined8       Stack[-0x100]:8  local_100
; undefined8       Stack[-0xf8]:8  local_f8
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined        Stack[-0xe8]:1  local_e8
; undefined        Stack[-0x84]:1  local_84
;
; Referenced Globals:
;   undefined4 DAT_0058785f
;   undefined4 DAT_00587863
;   undefined4 DAT_00587867
;   string s_l%s-die?.wav_0058787c
;   string s_l%s-shot?.wav_00587889
;   undefined4 DAT_0058789c
;   undefined4 DAT_005878a4
;   undefined4 DAT_005b96c4
;
; Called Functions:
;   FUN_0040a240
;   FUN_00479f70
;   FUN_004b0200
;   FUN_004e1660
;   FUN_004e16b0
;   FUN_00526c50
;   FUN_00527230
;   FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5310
        ;   Label: FUN_004c5310
    PUSH ESI                            ; 004c5311
    PUSH EDI                            ; 004c5312
    PUSH EBP                            ; 004c5313
    MOV EBP,ESP                         ; 004c5314
    SUB ESP,0xec                        ; 004c5316
    AND ESP,0xfffffff8                  ; 004c531c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c531f
    MOV EDI,dword ptr [EBP + 0x18]      ; 004c5322
    FLD float ptr [EDI + 0x4]           ; 004c5325
    FSUBR float ptr [EBX + 0x2434]      ; 004c5328
    FST float ptr [EBX + 0x2434]        ; 004c532e
    FLDZ                                ; 004c5334
    FCOMPP                              ; 004c5336
    FNSTSW AX                           ; 004c5338
    SAHF                                ; 004c533a
    JC 0x004c5448                       ; 004c533b
        ;   XREF to: 004c5448 (CONDITIONAL_JUMP)  ; LAB_004c5448
    LEA ESI,[EBX + 0x150]               ; 004c5341
    PUSH ESI                            ; 004c5347
    MOV dword ptr [EBX + 0x2434],0x0    ; 004c5348
    CALL FUN_004e1660                   ; 004c5352
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c5357
    ADD ESP,0x4                         ; 004c535a
    CMP EAX,0x5                         ; 004c535d
    JZ 0x004c5374                       ; 004c5360
        ;   XREF to: 004c5374 (CONDITIONAL_JUMP)  ; LAB_004c5374
    CMP EAX,0x4                         ; 004c5362
    JZ 0x004c5374                       ; 004c5365
        ;   XREF to: 004c5374 (CONDITIONAL_JUMP)  ; LAB_004c5374
    PUSH 0x1                            ; 004c5367
    PUSH 0x4                            ; 004c5369
    PUSH ESI                            ; 004c536b
    CALL FUN_004e16b0                   ; 004c536c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 004c5371
    MOV ESI,dword ptr [EBX + 0xbd28]    ; 004c5374
        ;   Label: LAB_004c5374
    PUSH ESI                            ; 004c537a
    CALL FUN_00527230                   ; 004c537b
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 004c5380
    MOV EAX,dword ptr [EBX + 0xbd2c]    ; 004c5383
    PUSH EAX                            ; 004c5389
    CALL FUN_00527230                   ; 004c538a
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 004c538f
    MOV EAX,dword ptr [EBX + 0x2614]    ; 004c5392
    MOV dword ptr [ESP + 0x14],EAX      ; 004c5398
    FLD float ptr [ESP + 0x14]          ; 004c539c
    FST double ptr [ESP]                ; 004c53a0
    FCOMP double ptr [0x0058789c]       ; 004c53a3 | DAT_0058789c
    FNSTSW AX                           ; 004c53a9
    SAHF                                ; 004c53ab
    JNC 0x004c5426                      ; 004c53ac
        ;   XREF to: 004c5426 (CONDITIONAL_JUMP)  ; LAB_004c5426
    MOV EAX,0x58785f                    ; 004c53ae | DAT_0058785f
    PUSH EAX                            ; 004c53b3 | DAT_0058785f | DAT_00587863 | DAT_00587867
        ;   Label: LAB_004c53b3
    PUSH 0x58787c                       ; 004c53b4 | = "l%s-die?.wav"
    LEA EAX,[ESP + 0x20]                ; 004c53b9
    PUSH EAX                            ; 004c53bd
    CALL FUN_00563c90                   ; 004c53be
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 004c53c3
    LEA ESI,[ESP + 0x18]                ; 004c53c6
    PUSH ESI                            ; 004c53ca
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c53cb
    PUSH EBX                            ; 004c53d1
    CALL dword ptr [EAX + 0x24]         ; 004c53d2
    ADD ESP,0x8                         ; 004c53d5
    MOV dword ptr [EBX + 0xbd28],EAX    ; 004c53d8
    LEA EAX,[EDI + 0x1c]                ; 004c53de
        ;   Label: LAB_004c53de
    PUSH EAX                            ; 004c53e1
    LEA EAX,[ESP + 0xe4]                ; 004c53e2
    PUSH EAX                            ; 004c53e9
    PUSH EBX                            ; 004c53ea
    CALL FUN_0040a240                   ; 004c53eb
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 004c53f0
    MOV EDX,dword ptr [EBX + 0x2608]    ; 004c53f3
    PUSH EDX                            ; 004c53f9
    PUSH 0xa                            ; 004c53fa
    PUSH 0x0                            ; 004c53fc
    LEA EAX,[ESP + 0xec]                ; 004c53fe
    PUSH EAX                            ; 004c5405
    MOV ECX,dword ptr [0x005b96c4]      ; 004c5406 | DAT_005b96c4
    PUSH ECX                            ; 004c540c
    CALL FUN_004b0200                   ; 004c540d
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0200()
    ADD ESP,0x14                        ; 004c5412
    PUSH EDI                            ; 004c5415
    PUSH EBX                            ; 004c5416
    CALL FUN_00479f70                   ; 004c5417
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00479f70()
    ADD ESP,0x8                         ; 004c541c
    MOV ESP,EBP                         ; 004c541f
    POP EBP                             ; 004c5421
    POP EDI                             ; 004c5422
    POP ESI                             ; 004c5423
    POP EBX                             ; 004c5424
    RET                                 ; 004c5425
    FLD double ptr [ESP]                ; 004c5426
        ;   Label: LAB_004c5426
    FCOMP double ptr [0x005878a4]       ; 004c5429 | DAT_005878a4
    FNSTSW AX                           ; 004c542f
    SAHF                                ; 004c5431
    JNC 0x004c543e                      ; 004c5432
        ;   XREF to: 004c543e (CONDITIONAL_JUMP)  ; LAB_004c543e
    MOV EAX,0x587863                    ; 004c5434 | DAT_00587863
    JMP 0x004c53b3                      ; 004c5439
        ;   XREF to: 004c53b3 (UNCONDITIONAL_JUMP)  ; LAB_004c53b3
    MOV EAX,0x587867                    ; 004c543e | DAT_00587867
        ;   Label: LAB_004c543e
    JMP 0x004c53b3                      ; 004c5443
        ;   XREF to: 004c53b3 (UNCONDITIONAL_JUMP)  ; LAB_004c53b3
    MOV EDX,dword ptr [EBX + 0xbd2c]    ; 004c5448
        ;   Label: LAB_004c5448
    PUSH EDX                            ; 004c544e
    CALL FUN_00527230                   ; 004c544f
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 004c5454
    MOV ECX,dword ptr [EBX + 0xbd28]    ; 004c5457
    PUSH ECX                            ; 004c545d
    CALL FUN_00526c50                   ; 004c545e
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00526c50()
    ADD ESP,0x4                         ; 004c5463
    TEST EAX,EAX                        ; 004c5466
    JNZ 0x004c54ba                      ; 004c5468
        ;   XREF to: 004c54ba (CONDITIONAL_JUMP)  ; LAB_004c54ba
    MOV EAX,dword ptr [EBX + 0x2614]    ; 004c546a
    MOV dword ptr [ESP + 0x10],EAX      ; 004c5470
    FLD float ptr [ESP + 0x10]          ; 004c5474
    FST double ptr [ESP + 0x8]          ; 004c5478
    FCOMP double ptr [0x0058789c]       ; 004c547c | DAT_0058789c
    FNSTSW AX                           ; 004c5482
    SAHF                                ; 004c5484
    JNC 0x004c54d2                      ; 004c5485
        ;   XREF to: 004c54d2 (CONDITIONAL_JUMP)  ; LAB_004c54d2
    MOV EAX,0x58785f                    ; 004c5487 | DAT_0058785f
    PUSH EAX                            ; 004c548c | DAT_0058785f | DAT_00587863 | DAT_00587867
        ;   Label: LAB_004c548c
    PUSH 0x587889                       ; 004c548d | = "l%s-shot?.wav"
    LEA EAX,[ESP + 0x84]                ; 004c5492
    PUSH EAX                            ; 004c5499
    CALL FUN_00563c90                   ; 004c549a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 004c549f
    LEA ESI,[ESP + 0x7c]                ; 004c54a2
    PUSH ESI                            ; 004c54a6
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c54a7
    PUSH EBX                            ; 004c54ad
    CALL dword ptr [EAX + 0x24]         ; 004c54ae
    ADD ESP,0x8                         ; 004c54b1
    MOV dword ptr [EBX + 0xbd28],EAX    ; 004c54b4
    PUSH 0x1                            ; 004c54ba
        ;   Label: LAB_004c54ba
    PUSH 0x3                            ; 004c54bc
    LEA EAX,[EBX + 0x150]               ; 004c54be
    PUSH EAX                            ; 004c54c4
    CALL FUN_004e16b0                   ; 004c54c5
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 004c54ca
    JMP 0x004c53de                      ; 004c54cd
        ;   XREF to: 004c53de (UNCONDITIONAL_JUMP)  ; LAB_004c53de
    FLD double ptr [ESP + 0x8]          ; 004c54d2
        ;   Label: LAB_004c54d2
    FCOMP double ptr [0x005878a4]       ; 004c54d6 | DAT_005878a4
    FNSTSW AX                           ; 004c54dc
    SAHF                                ; 004c54de
    JNC 0x004c54e8                      ; 004c54df
        ;   XREF to: 004c54e8 (CONDITIONAL_JUMP)  ; LAB_004c54e8
    MOV EAX,0x587863                    ; 004c54e1 | DAT_00587863
    JMP 0x004c548c                      ; 004c54e6
        ;   XREF to: 004c548c (UNCONDITIONAL_JUMP)  ; LAB_004c548c
    MOV EAX,0x587867                    ; 004c54e8 | DAT_00587867
        ;   Label: LAB_004c54e8
    JMP 0x004c548c                      ; 004c54ed
        ;   XREF to: 004c548c (UNCONDITIONAL_JUMP)  ; LAB_004c548c


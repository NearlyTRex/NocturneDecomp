; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00429220(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x1c0]:1  local_1c0
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   FUN_0042a150 at 0042a184
;   FUN_004980d0 at 004980ec
;   FUN_004da790 at 004da7d9
;
; Called Functions:
;   FUN_0040a000
;   FUN_0055aa00
;   FUN_0055afb0
;   FUN_0055b180
;   FUN_0055bc00
;   FUN_0055bd00
;   FUN_0055cc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429220
        ;   Label: FUN_00429220
    PUSH ESI                            ; 00429221
    PUSH EDI                            ; 00429222
    PUSH EBP                            ; 00429223
    MOV EBP,ESP                         ; 00429224
    SUB ESP,0x26c                       ; 00429226
    AND ESP,0xfffffff8                  ; 0042922c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042922f
    ADD EAX,0x30                        ; 00429232
    MOV dword ptr [ESP + 0x258],EAX     ; 00429235
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042923c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042923f
    ADD EAX,0x20                        ; 00429242
    XOR EDX,EDX                         ; 00429245
    MOV dword ptr [ESP + 0x25c],EAX     ; 00429247
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042924e
    MOV dword ptr [ESP + 0x268],EDX     ; 00429251
    ADD EAX,0xfd0                       ; 00429258
    ADD EBX,0x24a4                      ; 0042925d
    MOV dword ptr [ESP + 0x260],EAX     ; 00429263
    MOV ECX,dword ptr [EBX + 0x8]       ; 0042926a
        ;   Label: LAB_0042926a
    MOV dword ptr [ESP + 0x264],EBX     ; 0042926d
    TEST ECX,ECX                        ; 00429274
    JNZ 0x00429296                      ; 00429276
        ;   XREF to: 00429296 (CONDITIONAL_JUMP)  ; LAB_00429296
    MOV ESI,dword ptr [ESP + 0x268]     ; 00429278
        ;   Label: LAB_00429278
    INC ESI                             ; 0042927f
    ADD EBX,0x44                        ; 00429280
    MOV dword ptr [ESP + 0x268],ESI     ; 00429283
    CMP ESI,0x2                         ; 0042928a
    JL 0x0042926a                       ; 0042928d
        ;   XREF to: 0042926a (CONDITIONAL_JUMP)  ; LAB_0042926a
    MOV ESP,EBP                         ; 0042928f
    POP EBP                             ; 00429291
    POP EDI                             ; 00429292
    POP ESI                             ; 00429293
    POP EBX                             ; 00429294
    RET                                 ; 00429295
    MOV ESI,dword ptr [ESP + 0x268]     ; 00429296
        ;   Label: LAB_00429296
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042929d
    PUSH ESI                            ; 004292a0
    MOV EDI,dword ptr [EBP + 0x14]      ; 004292a1
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004292a4
    PUSH EDI                            ; 004292aa
    LEA ESI,[ESP + 0xc8]                ; 004292ab
    CALL dword ptr [EAX + 0x124]        ; 004292b2
    MOV ECX,0xc                         ; 004292b8
    LEA EDI,[ESP + 0x68]                ; 004292bd
    LEA ESI,[ESP + 0xc8]                ; 004292c1
    ADD ESP,0x8                         ; 004292c8
    MOVSD.REP ES:EDI,ESI                ; 004292cb
    FLD float ptr [EBX + 0x40]          ; 004292cd
    FLD1                                ; 004292d0
    FCOMPP                              ; 004292d2
    FNSTSW AX                           ; 004292d4
    SAHF                                ; 004292d6
    JBE 0x004292f9                      ; 004292d7
        ;   XREF to: 004292f9 (CONDITIONAL_JUMP)  ; LAB_004292f9
    FLD float ptr [EBX + 0x3c]          ; 004292d9
    FMUL float ptr [EBP + 0x18]         ; 004292dc
    FADD float ptr [EBX + 0x40]         ; 004292df
    FST float ptr [EBX + 0x40]          ; 004292e2
    FLD1                                ; 004292e5
    FCOMPP                              ; 004292e7
    FNSTSW AX                           ; 004292e9
    SAHF                                ; 004292eb
    JNC 0x004293c5                      ; 004292ec
        ;   XREF to: 004293c5 (CONDITIONAL_JUMP)  ; LAB_004293c5
    MOV dword ptr [EBX + 0x40],0x3f800000 ; 004292f2
    MOV EAX,dword ptr [ESP + 0x258]     ; 004292f9
        ;   Label: LAB_004292f9
    PUSH EAX                            ; 00429300
    MOV EDX,dword ptr [ESP + 0x260]     ; 00429301
    PUSH EDX                            ; 00429308
    LEA EAX,[ESP + 0x1b8]               ; 00429309
    PUSH EAX                            ; 00429310
    CALL FUN_0055afb0                   ; 00429311
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055afb0()
    ADD ESP,0xc                         ; 00429316
    LEA EAX,[ESP + 0x1b0]               ; 00429319
    PUSH EAX                            ; 00429320
    LEA EAX,[ESP + 0x64]                ; 00429321
    PUSH EAX                            ; 00429325
    LEA ESI,[ESP + 0x188]               ; 00429326
    LEA EDI,[ESP + 0x8]                 ; 0042932d
    CALL FUN_0055aa00                   ; 00429331
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055aa00()
    ADD ESP,0x8                         ; 00429336
    LEA EAX,[ESP + 0x24c]               ; 00429339
    MOV ECX,0xc                         ; 00429340
    PUSH EAX                            ; 00429345
    LEA EAX,[ESP + 0x4]                 ; 00429346
    LEA ESI,[ESP + 0x184]               ; 0042934a
    PUSH EAX                            ; 00429351
    MOVSD.REP ES:EDI,ESI                ; 00429352
    CALL FUN_0055bc00                   ; 00429354
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055bc00()
    ADD ESP,0x8                         ; 00429359
    MOV EDX,dword ptr [ESP + 0x264]     ; 0042935c
    MOV EDX,dword ptr [EDX + 0x8]       ; 00429363
    MOV ECX,dword ptr [EAX]             ; 00429366
    MOV dword ptr [EDX + 0x20],ECX      ; 00429368
    MOV ECX,dword ptr [EAX + 0x4]       ; 0042936b
    MOV dword ptr [EDX + 0x24],ECX      ; 0042936e
    FLD float ptr [EAX + 0x8]           ; 00429371
    LEA EAX,[ESP + 0x240]               ; 00429374
    PUSH EAX                            ; 0042937b
    LEA EAX,[ESP + 0x4]                 ; 0042937c
    PUSH EAX                            ; 00429380
    FSTP float ptr [EDX + 0x28]         ; 00429381
    CALL FUN_0055b180                   ; 00429384
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b180()
    ADD ESP,0x8                         ; 00429389
    MOV EDX,dword ptr [ESP + 0x264]     ; 0042938c
    MOV EDX,dword ptr [EDX + 0x8]       ; 00429393
    ADD EDX,0x30                        ; 00429396
    CMP EDX,EAX                         ; 00429399
    JZ 0x004293ad                       ; 0042939b
        ;   XREF to: 004293ad (CONDITIONAL_JUMP)  ; LAB_004293ad
    MOV ECX,dword ptr [EAX]             ; 0042939d
    MOV dword ptr [EDX],ECX             ; 0042939f
    MOV ECX,dword ptr [EAX + 0x4]       ; 004293a1
    MOV dword ptr [EDX + 0x4],ECX       ; 004293a4
    MOV ECX,dword ptr [EAX + 0x8]       ; 004293a7
    MOV dword ptr [EDX + 0x8],ECX       ; 004293aa
    MOV EAX,dword ptr [ESP + 0x264]     ; 004293ad
        ;   Label: LAB_004293ad
    MOV ECX,dword ptr [EAX + 0x8]       ; 004293b4
    PUSH ECX                            ; 004293b7
    CALL FUN_0040a000                   ; 004293b8
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a000()
    ADD ESP,0x4                         ; 004293bd
    JMP 0x00429278                      ; 004293c0
        ;   XREF to: 00429278 (UNCONDITIONAL_JUMP)  ; LAB_00429278
    IMUL EAX,dword ptr [EBX],0x30       ; 004293c5
        ;   Label: LAB_004293c5
    ADD EAX,dword ptr [ESP + 0x260]     ; 004293c8
    PUSH EAX                            ; 004293cf
    LEA ESI,[ESP + 0x34]                ; 004293d0
    LEA EDI,[ESP + 0x214]               ; 004293d4
    CALL FUN_0055bd00                   ; 004293db
        ;   XREF to: 0055bd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055bd00()
    MOV ECX,0xc                         ; 004293e0
    ADD ESP,0x4                         ; 004293e5
    LEA EAX,[ESP + 0x210]               ; 004293e8
    LEA ESI,[ESP + 0x30]                ; 004293ef
    PUSH EAX                            ; 004293f3
    LEA EAX,[ESP + 0x64]                ; 004293f4
    MOVSD.REP ES:EDI,ESI                ; 004293f8
    PUSH EAX                            ; 004293fa
    LEA ESI,[ESP + 0x98]                ; 004293fb
    LEA EDI,[ESP + 0x1e8]               ; 00429402
    CALL FUN_0055aa00                   ; 00429409
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055aa00()
    MOV ECX,0xc                         ; 0042940e
    LEA ESI,[ESP + 0x98]                ; 00429413
    ADD ESP,0x8                         ; 0042941a
    MOVSD.REP ES:EDI,ESI                ; 0042941d
    LEA EAX,[ESP + 0x1e0]               ; 0042941f
    PUSH dword ptr [EBX + 0x40]         ; 00429426
    PUSH EAX                            ; 00429429
    LEA EAX,[EBX + 0xc]                 ; 0042942a
    PUSH EAX                            ; 0042942d
    LEA ESI,[ESP + 0x12c]               ; 0042942e
    LEA EDI,[ESP + 0xfc]                ; 00429435
    CALL FUN_0055cc30                   ; 0042943c
        ;   XREF to: 0055cc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0055cc30()
    MOV ECX,0xc                         ; 00429441
    LEA ESI,[ESP + 0x12c]               ; 00429446
    ADD ESP,0xc                         ; 0042944d
    MOVSD.REP ES:EDI,ESI                ; 00429450
    IMUL EAX,dword ptr [EBX],0x30       ; 00429452
    ADD EAX,dword ptr [ESP + 0x260]     ; 00429455
    PUSH EAX                            ; 0042945c
    LEA EAX,[ESP + 0xf4]                ; 0042945d
    PUSH EAX                            ; 00429464
    LEA ESI,[ESP + 0x158]               ; 00429465
    LEA EDI,[ESP + 0x68]                ; 0042946c
    CALL FUN_0055aa00                   ; 00429470
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055aa00()
    MOV ECX,0xc                         ; 00429475
    LEA ESI,[ESP + 0x158]               ; 0042947a
    ADD ESP,0x8                         ; 00429481
    MOVSD.REP ES:EDI,ESI                ; 00429484
    JMP 0x004292f9                      ; 00429486
        ;   XREF to: 004292f9 (UNCONDITIONAL_JUMP)  ; LAB_004292f9


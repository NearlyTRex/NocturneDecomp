; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004301e0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   FUN_00415730 at 00415764
;   FUN_0045c020 at 0045c1c9
;   FUN_00472220 at 00472226
;   FUN_004ca090 at 004ca0ac
;   FUN_00531ba0 at 00531bd4
;   FUN_0055fc60 at 0055fdea
;   FUN_0058e8d0 at 0058e8d6
;   FUN_005b11c0 at 005b12e8
;   FUN_005be020 at 005be1c9
;
; Referenced Globals:
;   undefined4 DAT_005d5a33
;   undefined4 DAT_005d5a37
;   undefined4 DAT_00622c18
;   undefined4 DAT_007c6180
;   undefined4 DAT_007c619c
;   undefined4 DAT_007c61a0
;   undefined4 DAT_007c61bc
;   undefined1 DAT_007c61c0
;   undefined4 DAT_007c6340
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004207b0
;   FUN_0042e960
;   FUN_004303c0
;   FUN_0045e970
;   FUN_0045e9c0
;   FUN_00551960
;   FUN_00551990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004301e0
        ;   Label: FUN_004301e0
    PUSH ESI                            ; 004301e1
    PUSH EDI                            ; 004301e2
    PUSH EBP                            ; 004301e3
    SUB ESP,0x64                        ; 004301e4
    MOV EBX,dword ptr [ESP + 0x78]      ; 004301e7
    MOV AH,byte ptr [0x007c61c0]        ; 004301eb | DAT_007c61c0
    TEST AH,0x1                         ; 004301f1
    JZ 0x00430399                       ; 004301f4
        ;   XREF to: 00430399 (CONDITIONAL_JUMP)  ; LAB_00430399
    MOV EDX,dword ptr [EBX + 0x27a8]    ; 004301fa
        ;   Label: LAB_004301fa
    XOR EBP,EBP                         ; 00430200
    TEST EDX,EDX                        ; 00430202
    JZ 0x00430309                       ; 00430204
        ;   XREF to: 00430309 (CONDITIONAL_JUMP)  ; LAB_00430309
    CMP dword ptr [EBX + 0x2e64],0x0    ; 0043020a
    JNZ 0x00430309                      ; 00430211
        ;   XREF to: 00430309 (CONDITIONAL_JUMP)  ; LAB_00430309
    FLD float ptr [0x007c6340]          ; 00430217 | DAT_007c6340
    FADD float ptr [0x005d5a33]         ; 0043021d | DAT_005d5a33
    FST float ptr [0x007c6340]          ; 00430223 | DAT_007c6340
    FLD ST0                             ; 00430229
    FSIN                                ; 0043022b
    FXCH                                ; 0043022d
    FCOS                                ; 0043022f
    MOV ESI,0x40400000                  ; 00430231
    LEA EDI,[ESP + 0x3c]                ; 00430236
    MOV dword ptr [ESP + 0x34],ESI      ; 0043023a
    LEA ESI,[ESP + 0x48]                ; 0043023e
    FXCH                                ; 00430242
    FSTP float ptr [ESP + 0x60]         ; 00430244
    MOV EAX,dword ptr [ESP + 0x60]      ; 00430248
    FSTP float ptr [ESP + 0x5c]         ; 0043024c
    MOV dword ptr [ESP + 0x30],EAX      ; 00430250
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00430254
    FLD float ptr [ESP + 0x30]          ; 00430258
    MOV dword ptr [ESP + 0x38],EAX      ; 0043025c
    LEA EAX,[EBX + 0x20]                ; 00430260
    FLD float ptr [ESP + 0x38]          ; 00430263
    FLD float ptr [EAX + 0x4]           ; 00430267
    FXCH ST2                            ; 0043026a
    FADD float ptr [EAX]                ; 0043026c
    FXCH                                ; 0043026e
    FADD float ptr [EAX + 0x8]          ; 00430270
    FXCH                                ; 00430273
    FSTP float ptr [ESP + 0x48]         ; 00430275
    FXCH                                ; 00430279
    FADD float ptr [0x005d5a37]         ; 0043027b | DAT_005d5a37
    FXCH                                ; 00430281
    FSTP float ptr [ESP + 0x50]         ; 00430283
    FSTP float ptr [ESP + 0x4c]         ; 00430287
    MOVSD ES:EDI,ESI                    ; 0043028b
    MOVSD ES:EDI,ESI                    ; 0043028c
    MOVSD ES:EDI,ESI                    ; 0043028d
    LEA EAX,[ESP + 0x30]                ; 0043028e
    LEA ESI,[ESP + 0x3c]                ; 00430292
    CMP EAX,ESI                         ; 00430296
    JZ 0x004302b2                       ; 00430298
        ;   XREF to: 004302b2 (CONDITIONAL_JUMP)  ; LAB_004302b2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0043029a
    MOV dword ptr [ESP + 0x30],EAX      ; 0043029e
    MOV EAX,dword ptr [ESP + 0x40]      ; 004302a2
    MOV dword ptr [ESP + 0x34],EAX      ; 004302a6
    MOV EAX,dword ptr [ESP + 0x44]      ; 004302aa
    MOV dword ptr [ESP + 0x38],EAX      ; 004302ae
    LEA EAX,[ESP + 0x30]                ; 004302b2
        ;   Label: LAB_004302b2
    PUSH EAX                            ; 004302b6
    PUSH 0x7c6180                       ; 004302b7 | DAT_007c6180
    CALL FUN_0045e970                   ; 004302bc
        ;   XREF to: 0045e970 (UNCONDITIONAL_CALL)  ; undefined FUN_0045e970()
    ADD ESP,0x8                         ; 004302c1
    MOV EDI,0xafc8                      ; 004302c4
    PUSH 0x40400000                     ; 004302c9
    MOV DH,0x2b                         ; 004302ce
    PUSH 0x7c6180                       ; 004302d0 | DAT_007c6180
    MOV dword ptr [0x007c61bc],EDI      ; 004302d5 | DAT_007c61bc
    MOV byte ptr [0x007c619c],DH        ; 004302db | DAT_007c619c
    CALL FUN_0045e9c0                   ; 004302e1
        ;   XREF to: 0045e9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045e9c0()
    ADD ESP,0x8                         ; 004302e6
    PUSH 0x7c6180                       ; 004302e9 | DAT_007c6180
    MOV EAX,[0x00622c18]                ; 004302ee | DAT_00622c18
    XOR EBP,EBP                         ; 004302f3
    PUSH EAX                            ; 004302f5 | DAT_01e82168
    MOV dword ptr [0x007c61a0],EBP      ; 004302f6 | DAT_007c61a0
    MOV EBP,0x1                         ; 004302fc
    CALL FUN_00551960                   ; 00430301
        ;   XREF to: 00551960 (UNCONDITIONAL_CALL)  ; undefined FUN_00551960()
    ADD ESP,0x8                         ; 00430306
    PUSH EBX                            ; 00430309
        ;   Label: LAB_00430309
    CALL FUN_004087b0                   ; 0043030a
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 0043030f
    PUSH 0x0                            ; 00430312
    MOV EAX,dword ptr [EBX + 0x154]     ; 00430314
    PUSH EBX                            ; 0043031a
    LEA ESI,[ESP + 0x8]                 ; 0043031b
    LEA EDI,[ESP + 0x20]                ; 0043031f
    CALL dword ptr [EAX + 0x1c]         ; 00430323
    MOV ECX,0x6                         ; 00430326
    ADD ESP,0x4                         ; 0043032b
    LEA EAX,[ESP + 0x1c]                ; 0043032e
    LEA ESI,[ESP + 0x4]                 ; 00430332
    PUSH EAX                            ; 00430336
    MOVSD.REP ES:EDI,ESI                ; 00430337
    CALL FUN_004207b0                   ; 00430339
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 0043033e
    TEST EAX,EAX                        ; 00430341
    JZ 0x00430358                       ; 00430343
        ;   XREF to: 00430358 (CONDITIONAL_JUMP)  ; LAB_00430358
    PUSH EBX                            ; 00430345
    MOV dword ptr [EBX + 0x27bc],0x1    ; 00430346
    CALL FUN_0042e960                   ; 00430350
        ;   XREF to: 0042e960 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e960()
    ADD ESP,0x4                         ; 00430355
    PUSH EBX                            ; 00430358
        ;   Label: LAB_00430358
    CALL FUN_004087f0                   ; 00430359
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0043035e
    TEST EBP,EBP                        ; 00430361
    JZ 0x00430379                       ; 00430363
        ;   XREF to: 00430379 (CONDITIONAL_JUMP)  ; LAB_00430379
    PUSH 0x7c6180                       ; 00430365 | DAT_007c6180
    MOV EDX,dword ptr [0x00622c18]      ; 0043036a | DAT_00622c18
    PUSH EDX                            ; 00430370 | DAT_01e82168
    CALL FUN_00551990                   ; 00430371
        ;   XREF to: 00551990 (UNCONDITIONAL_CALL)  ; undefined FUN_00551990()
    ADD ESP,0x8                         ; 00430376
    CMP dword ptr [EBX + 0x3120],0x0    ; 00430379
        ;   Label: LAB_00430379
    JLE 0x0043038b                      ; 00430380
        ;   XREF to: 0043038b (CONDITIONAL_JUMP)  ; LAB_0043038b
    CMP dword ptr [EBX + 0x27bc],0x0    ; 00430382
    JNZ 0x004303a9                      ; 00430389
        ;   XREF to: 004303a9 (CONDITIONAL_JUMP)  ; LAB_004303a9
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 0043038b
        ;   Label: LAB_0043038b
    ADD ESP,0x64                        ; 00430391
    POP EBP                             ; 00430394
    POP EDI                             ; 00430395
    POP ESI                             ; 00430396
    POP EBX                             ; 00430397
    RET                                 ; 00430398
    MOV DL,AH                           ; 00430399
        ;   Label: LAB_00430399
    OR DL,0x1                           ; 0043039b
    MOV byte ptr [0x007c61c0],DL        ; 0043039e | DAT_007c61c0
    JMP 0x004301fa                      ; 004303a4
        ;   XREF to: 004301fa (UNCONDITIONAL_JUMP)  ; LAB_004301fa
    PUSH EBX                            ; 004303a9
        ;   Label: LAB_004303a9
    CALL FUN_004303c0                   ; 004303aa
        ;   XREF to: 004303c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004303c0()
    ADD ESP,0x4                         ; 004303af
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 004303b2
    ADD ESP,0x64                        ; 004303b8
    POP EBP                             ; 004303bb
    POP EDI                             ; 004303bc
    POP ESI                             ; 004303bd
    POP EBX                             ; 004303be
    RET                                 ; 004303bf


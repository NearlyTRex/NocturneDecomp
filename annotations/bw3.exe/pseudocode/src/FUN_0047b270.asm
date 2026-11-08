; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047b270(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005bcd19
;   undefined4 DAT_005bcd21
;   undefined4 DAT_005deecc
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_006045f8
;
; Called Functions:
;   FUN_00408b80
;   FUN_0040cf40
;   FUN_004a23c0
;   FUN_00560b00
;   FUN_0057b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b270
        ;   Label: FUN_0047b270
    PUSH ESI                            ; 0047b271
    PUSH EDI                            ; 0047b272
    PUSH EBP                            ; 0047b273
    MOV EBP,ESP                         ; 0047b274
    SUB ESP,0xb0                        ; 0047b276
    AND ESP,0xfffffff8                  ; 0047b27c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047b27f
    PUSH dword ptr [EBP + 0x18]         ; 0047b282
    PUSH EBX                            ; 0047b285
    CALL FUN_0057b160                   ; 0047b286
        ;   XREF to: 0057b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b160()
    FLD float ptr [EBX + 0x594]         ; 0047b28b
    FLDZ                                ; 0047b291
    ADD ESP,0x8                         ; 0047b293
    FCOMPP                              ; 0047b296
    FNSTSW AX                           ; 0047b298
    SAHF                                ; 0047b29a
    JA 0x0047b2df                       ; 0047b29b
        ;   XREF to: 0047b2df (CONDITIONAL_JUMP)  ; LAB_0047b2df
    FLD float ptr [EBX + 0x594]         ; 0047b29d
    FSUB float ptr [EBP + 0x18]         ; 0047b2a3
    FLDZ                                ; 0047b2a6
    FXCH                                ; 0047b2a8
    FST float ptr [EBX + 0x594]         ; 0047b2aa
    FSTP double ptr [ESP]               ; 0047b2b0
    FCOMP double ptr [ESP]              ; 0047b2b3
    FNSTSW AX                           ; 0047b2b6
    SAHF                                ; 0047b2b8
    JA 0x0047b2e6                       ; 0047b2b9
        ;   XREF to: 0047b2e6 (CONDITIONAL_JUMP)  ; LAB_0047b2e6
    FLD float ptr [EBP + 0x18]          ; 0047b2bb
    FMUL double ptr [0x005bcd19]        ; 0047b2be | DAT_005bcd19
    FMUL double ptr [ESP]               ; 0047b2c4
    FDIV float ptr [0x005deecc]         ; 0047b2c7 | DAT_005deecc
    SUB ESP,0x4                         ; 0047b2cd
    FSTP float ptr [ESP]                ; 0047b2d0
    CALL FUN_0040cf40                   ; 0047b2d3
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf40()
    ADD ESP,0x4                         ; 0047b2d8
    TEST EAX,EAX                        ; 0047b2db
    JNZ 0x0047b312                      ; 0047b2dd
        ;   XREF to: 0047b312 (CONDITIONAL_JUMP)  ; LAB_0047b312
    MOV ESP,EBP                         ; 0047b2df
        ;   Label: LAB_0047b2df
    POP EBP                             ; 0047b2e1
    POP EDI                             ; 0047b2e2
    POP ESI                             ; 0047b2e3
    POP EBX                             ; 0047b2e4
    RET                                 ; 0047b2e5
    MOV ECX,dword ptr [EBX + 0x5a4]     ; 0047b2e6
        ;   Label: LAB_0047b2e6
    PUSH ECX                            ; 0047b2ec
    MOV ESI,dword ptr [0x006045f8]      ; 0047b2ed | DAT_006045f8
    PUSH ESI                            ; 0047b2f3
    MOV dword ptr [EBX + 0x594],0x0     ; 0047b2f4
    CALL FUN_00560b00                   ; 0047b2fe
        ;   XREF to: 00560b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00560b00()
    ADD ESP,0x8                         ; 0047b303
    MOV dword ptr [EBX + 0x5a4],0x0     ; 0047b306
    JMP 0x0047b2df                      ; 0047b310
        ;   XREF to: 0047b2df (UNCONDITIONAL_JUMP)  ; LAB_0047b2df
    PUSH EBX                            ; 0047b312
        ;   Label: LAB_0047b312
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047b313
    LEA ESI,[ESP + 0xc]                 ; 0047b319
    LEA EDI,[ESP + 0x54]                ; 0047b31d
    CALL dword ptr [EAX + 0x1c]         ; 0047b321
    MOV ECX,0x6                         ; 0047b324
    LEA ESI,[ESP + 0xc]                 ; 0047b329
    ADD ESP,0x4                         ; 0047b32d
    MOVSD.REP ES:EDI,ESI                ; 0047b330
    LEA EAX,[ESP + 0x50]                ; 0047b332
    FLD float ptr [ESP + 0x50]          ; 0047b336
    FLD float ptr [ESP + 0x54]          ; 0047b33a
    FLD float ptr [ESP + 0x58]          ; 0047b33e
    LEA EDI,[ESP + 0x80]                ; 0047b342
    LEA ESI,[ESP + 0x98]                ; 0047b349
    FXCH ST2                            ; 0047b350
    FADD float ptr [EAX + 0xc]          ; 0047b352
    FXCH                                ; 0047b355
    FADD float ptr [EAX + 0x10]         ; 0047b357
    FXCH ST2                            ; 0047b35a
    FADD float ptr [EAX + 0x14]         ; 0047b35c
    FXCH                                ; 0047b35f
    FSTP float ptr [ESP + 0x98]         ; 0047b361
    FXCH                                ; 0047b368
    FSTP float ptr [ESP + 0x9c]         ; 0047b36a
    FSTP float ptr [ESP + 0xa0]         ; 0047b371
    MOVSD ES:EDI,ESI                    ; 0047b378
    MOVSD ES:EDI,ESI                    ; 0047b379
    MOVSD ES:EDI,ESI                    ; 0047b37a
    FLD float ptr [0x005bcd21]          ; 0047b37b | DAT_005bcd21
    FLD float ptr [ESP + 0x80]          ; 0047b381
    FMUL ST1                            ; 0047b388
    FLD float ptr [ESP + 0x84]          ; 0047b38a
    FMUL ST2                            ; 0047b391
    FLD float ptr [ESP + 0x88]          ; 0047b393
    FMULP ST3                           ; 0047b39a
    LEA EDI,[ESP + 0x74]                ; 0047b39c
    LEA ESI,[ESP + 0x68]                ; 0047b3a0
    FXCH                                ; 0047b3a4
    FSTP float ptr [ESP + 0x68]         ; 0047b3a6
    FSTP float ptr [ESP + 0x6c]         ; 0047b3aa
    FSTP float ptr [ESP + 0x70]         ; 0047b3ae
    MOVSD ES:EDI,ESI                    ; 0047b3b2
    MOVSD ES:EDI,ESI                    ; 0047b3b3
    MOVSD ES:EDI,ESI                    ; 0047b3b4
    PUSH EBX                            ; 0047b3b5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047b3b6
    LEA ESI,[ESP + 0x24]                ; 0047b3bc
    LEA EDI,[ESP + 0x3c]                ; 0047b3c0
    CALL dword ptr [EAX + 0x1c]         ; 0047b3c4
    MOV ECX,0x6                         ; 0047b3c7
    LEA ESI,[ESP + 0x24]                ; 0047b3cc
    ADD ESP,0x4                         ; 0047b3d0
    MOVSD.REP ES:EDI,ESI                ; 0047b3d3
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047b3d5
    MOV dword ptr [ESP + 0x7c],EAX      ; 0047b3d9
    LEA EAX,[ESP + 0x74]                ; 0047b3dd
    PUSH EAX                            ; 0047b3e1
    PUSH EBX                            ; 0047b3e2
    LEA ESI,[ESP + 0xac]                ; 0047b3e3
    LEA EDI,[ESP + 0x94]                ; 0047b3ea
    CALL FUN_00408b80                   ; 0047b3f1
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0xac]                ; 0047b3f6
    LEA EAX,[ESP + 0x94]                ; 0047b3fd
    ADD ESP,0x8                         ; 0047b404
    LEA EBX,[ESP + 0x74]                ; 0047b407
    MOVSD ES:EDI,ESI                    ; 0047b40b
    MOVSD ES:EDI,ESI                    ; 0047b40c
    MOVSD ES:EDI,ESI                    ; 0047b40d
    CMP EBX,EAX                         ; 0047b40e
    JZ 0x0047b433                       ; 0047b410
        ;   XREF to: 0047b433 (CONDITIONAL_JUMP)  ; LAB_0047b433
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0047b412
    MOV dword ptr [ESP + 0x74],EAX      ; 0047b419
    MOV EAX,dword ptr [ESP + 0x90]      ; 0047b41d
    MOV dword ptr [ESP + 0x78],EAX      ; 0047b424
    MOV EAX,dword ptr [ESP + 0x94]      ; 0047b428
    MOV dword ptr [ESP + 0x7c],EAX      ; 0047b42f
    PUSH 0xffff                         ; 0047b433
        ;   Label: LAB_0047b433
    PUSH 0x0                            ; 0047b438
    PUSH 0x10000                        ; 0047b43a
    PUSH 0x4000                         ; 0047b43f
    PUSH 0x0                            ; 0047b444
    LEA EAX,[ESP + 0x88]                ; 0047b446
    PUSH EAX                            ; 0047b44d
    MOV EDX,dword ptr [0x005fc5a0]      ; 0047b44e | DAT_005fc5a0
    PUSH EDX                            ; 0047b454
    CALL FUN_004a23c0                   ; 0047b455
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a23c0()
    ADD ESP,0x1c                        ; 0047b45a
    MOV ESP,EBP                         ; 0047b45d
    POP EBP                             ; 0047b45f
    POP EDI                             ; 0047b460
    POP ESI                             ; 0047b461
    POP EBX                             ; 0047b462
    RET                                 ; 0047b463


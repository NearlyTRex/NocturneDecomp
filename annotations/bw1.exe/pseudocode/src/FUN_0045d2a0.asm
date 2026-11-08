; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045d2a0(int param_1)
;
;
; XREF[1]:
;   FUN_004ab6c0 at 004ab6f3
;
; Referenced Globals:
;   undefined4 DAT_005d8353
;   undefined4 DAT_005d835b
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_00622c18
;
; Called Functions:
;   FUN_0045d550
;   FUN_004a1b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d2a0
        ;   Label: FUN_0045d2a0
    PUSH ESI                            ; 0045d2a1
    PUSH EDI                            ; 0045d2a2
    PUSH EBP                            ; 0045d2a3
    MOV EBP,ESP                         ; 0045d2a4
    SUB ESP,0x44                        ; 0045d2a6
    AND ESP,0xfffffff8                  ; 0045d2a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d2ac
    CMP dword ptr [EAX + 0x1f0],0x0     ; 0045d2af
    JZ 0x0045d377                       ; 0045d2b6
        ;   XREF to: 0045d377 (CONDITIONAL_JUMP)  ; LAB_0045d377
    MOV ECX,dword ptr [EAX + 0x158]     ; 0045d2bc
    TEST ECX,ECX                        ; 0045d2c2
    JNZ 0x0045d377                      ; 0045d2c4
        ;   XREF to: 0045d377 (CONDITIONAL_JUMP)  ; LAB_0045d377
    MOV dword ptr [ESP + 0x40],ECX      ; 0045d2ca
    LEA EBX,[EAX + 0x20]                ; 0045d2ce
    MOV dword ptr [ESP + 0x3c],ECX      ; 0045d2d1
    MOV EAX,[0x00622c18]                ; 0045d2d5 | DAT_00622c18
        ;   Label: LAB_0045d2d5
    MOV EDX,dword ptr [ESP + 0x40]      ; 0045d2da
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 0045d2de
    JGE 0x0045d377                      ; 0045d2e4
        ;   XREF to: 0045d377 (CONDITIONAL_JUMP)  ; LAB_0045d377
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0045d2ea
    FLD float ptr [EBX]                 ; 0045d2ee
    ADD EAX,EDX                         ; 0045d2f0
    FLD float ptr [EBX + 0x4]           ; 0045d2f2
    MOV EDX,dword ptr [EAX + 0x14d168]  ; 0045d2f5
    FLD float ptr [EBX + 0x8]           ; 0045d2fb
    LEA EAX,[EDX + 0x20]                ; 0045d2fe
    LEA EDI,[ESP + 0xc]                 ; 0045d301
    LEA ESI,[ESP + 0x24]                ; 0045d305
    FXCH ST2                            ; 0045d309
    FSUB float ptr [EAX]                ; 0045d30b
    FXCH                                ; 0045d30d
    FSUB float ptr [EAX + 0x4]          ; 0045d30f
    FXCH ST2                            ; 0045d312
    FSUB float ptr [EAX + 0x8]          ; 0045d314
    FXCH                                ; 0045d317
    FSTP float ptr [ESP + 0x24]         ; 0045d319
    FXCH                                ; 0045d31d
    FSTP float ptr [ESP + 0x28]         ; 0045d31f
    FSTP float ptr [ESP + 0x2c]         ; 0045d323
    MOVSD ES:EDI,ESI                    ; 0045d327
    MOVSD ES:EDI,ESI                    ; 0045d328
    MOVSD ES:EDI,ESI                    ; 0045d329
    FLD float ptr [ESP + 0x10]          ; 0045d32a
    FMUL ST0                            ; 0045d32e
    FLD float ptr [ESP + 0xc]           ; 0045d330
    FMUL ST0                            ; 0045d334
    FADDP                               ; 0045d336
    FLD float ptr [ESP + 0x14]          ; 0045d338
    FMUL ST0                            ; 0045d33c
    FADDP                               ; 0045d33e
    FSQRT                               ; 0045d340
    FCOMP double ptr [0x005d835b]       ; 0045d342 | DAT_005d835b
    FNSTSW AX                           ; 0045d348
    SAHF                                ; 0045d34a
    JC 0x0045d366                       ; 0045d34b
        ;   XREF to: 0045d366 (CONDITIONAL_JUMP)  ; LAB_0045d366
    MOV EDI,dword ptr [ESP + 0x40]      ; 0045d34d
        ;   Label: LAB_0045d34d
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0045d351
    INC EDI                             ; 0045d355
    ADD ESI,0x4                         ; 0045d356
    MOV dword ptr [ESP + 0x40],EDI      ; 0045d359
    MOV dword ptr [ESP + 0x3c],ESI      ; 0045d35d
    JMP 0x0045d2d5                      ; 0045d361
        ;   XREF to: 0045d2d5 (UNCONDITIONAL_JUMP)  ; LAB_0045d2d5
    PUSH EDX                            ; 0045d366
        ;   Label: LAB_0045d366
    MOV ECX,dword ptr [EBP + 0x14]      ; 0045d367
    PUSH ECX                            ; 0045d36a
    CALL FUN_0045d550                   ; 0045d36b
        ;   XREF to: 0045d550 (UNCONDITIONAL_CALL)  ; undefined FUN_0045d550()
    ADD ESP,0x8                         ; 0045d370
    TEST EAX,EAX                        ; 0045d373
    JZ 0x0045d34d                       ; 0045d375
        ;   XREF to: 0045d34d (CONDITIONAL_JUMP)  ; LAB_0045d34d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d377
        ;   Label: LAB_0045d377
    MOV EDX,dword ptr [EAX + 0x158]     ; 0045d37a
    TEST EDX,EDX                        ; 0045d380
    JZ 0x0045d44c                       ; 0045d382
        ;   XREF to: 0045d44c (CONDITIONAL_JUMP)  ; LAB_0045d44c
    MOV EAX,EDX                         ; 0045d388
    LEA EDI,[ESP + 0x18]                ; 0045d38a
    LEA ESI,[ESP + 0x30]                ; 0045d38e
    FLD float ptr [EAX + 0x24]          ; 0045d392
    FLD float ptr [EAX + 0x28]          ; 0045d395
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045d398
    FLD float ptr [EAX + 0x20]          ; 0045d39b
    MOV EAX,ESP                         ; 0045d39e
    FSUB float ptr [EDX + 0x20]         ; 0045d3a0
    FXCH ST2                            ; 0045d3a3
    FSUB float ptr [EDX + 0x24]         ; 0045d3a5
    FXCH                                ; 0045d3a8
    FSUB float ptr [EDX + 0x28]         ; 0045d3aa
    FXCH ST2                            ; 0045d3ad
    FSTP float ptr [ESP + 0x30]         ; 0045d3af
    FSTP float ptr [ESP + 0x34]         ; 0045d3b3
    FSTP float ptr [ESP + 0x38]         ; 0045d3b7
    LEA EDX,[ESP + 0x18]                ; 0045d3bb
    MOVSD ES:EDI,ESI                    ; 0045d3bf
    MOVSD ES:EDI,ESI                    ; 0045d3c0
    MOVSD ES:EDI,ESI                    ; 0045d3c1
    CMP EAX,EDX                         ; 0045d3c2
    JNZ 0x0045d460                      ; 0045d3c4
        ;   XREF to: 0045d460 (CONDITIONAL_JUMP)  ; LAB_0045d460
    FLD float ptr [ESP]                 ; 0045d3ca
        ;   Label: LAB_0045d3ca
    FABS                                ; 0045d3cd
    FCOMP double ptr [0x005d8353]       ; 0045d3cf | DAT_005d8353
    FNSTSW AX                           ; 0045d3d5
    SAHF                                ; 0045d3d7
    JNC 0x0045d485                      ; 0045d3d8
        ;   XREF to: 0045d485 (CONDITIONAL_JUMP)  ; LAB_0045d485
    FLD float ptr [ESP + 0x4]           ; 0045d3de
    FABS                                ; 0045d3e2
    FCOMP double ptr [0x005d8353]       ; 0045d3e4 | DAT_005d8353
    FNSTSW AX                           ; 0045d3ea
    SAHF                                ; 0045d3ec
    JNC 0x0045d485                      ; 0045d3ed
        ;   XREF to: 0045d485 (CONDITIONAL_JUMP)  ; LAB_0045d485
    FLD float ptr [ESP + 0x8]           ; 0045d3f3
    FABS                                ; 0045d3f7
    FCOMP double ptr [0x005d8353]       ; 0045d3f9 | DAT_005d8353
    FNSTSW AX                           ; 0045d3ff
    SAHF                                ; 0045d401
    JNC 0x0045d485                      ; 0045d402
        ;   XREF to: 0045d485 (CONDITIONAL_JUMP)  ; LAB_0045d485
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045d408
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d40b
    MOV ECX,dword ptr [EDX + 0x1ec]     ; 0045d40e
    ADD EAX,0x188                       ; 0045d414
    TEST ECX,ECX                        ; 0045d419
    JNZ 0x0045d47c                      ; 0045d41b
        ;   XREF to: 0045d47c (CONDITIONAL_JUMP)  ; LAB_0045d47c
    CMP dword ptr [EDX + 0x184],0x0     ; 0045d41d
    JNZ 0x0045d43f                      ; 0045d424
        ;   XREF to: 0045d43f (CONDITIONAL_JUMP)  ; LAB_0045d43f
    CMP dword ptr [EDX + 0x1f0],0x0     ; 0045d426
    JNZ 0x0045d43f                      ; 0045d42d
        ;   XREF to: 0045d43f (CONDITIONAL_JUMP)  ; LAB_0045d43f
    PUSH EAX                            ; 0045d42f
    MOV EDI,dword ptr [0x0061b4d0]      ; 0045d430 | DAT_0061b4d0
    PUSH EDI                            ; 0045d436
    CALL FUN_004a1b70                   ; 0045d437
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1b70()
        ;   Label: LAB_0045d437
    ADD ESP,0x8                         ; 0045d43c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d43f
        ;   Label: LAB_0045d43f
    MOV dword ptr [EAX + 0x184],0x1     ; 0045d442
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d44c
        ;   Label: LAB_0045d44c
    MOV dword ptr [EAX + 0x1f0],0x0     ; 0045d44f
    MOV ESP,EBP                         ; 0045d459
    POP EBP                             ; 0045d45b
    POP EDI                             ; 0045d45c
    POP ESI                             ; 0045d45d
    POP EBX                             ; 0045d45e
    RET                                 ; 0045d45f
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045d460
        ;   Label: LAB_0045d460
    MOV dword ptr [ESP],EAX             ; 0045d464
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045d467
    MOV dword ptr [ESP + 0x4],EAX       ; 0045d46b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0045d46f
    MOV dword ptr [ESP + 0x8],EAX       ; 0045d473
    JMP 0x0045d3ca                      ; 0045d477
        ;   XREF to: 0045d3ca (UNCONDITIONAL_JUMP)  ; LAB_0045d3ca
    PUSH EAX                            ; 0045d47c
        ;   Label: LAB_0045d47c
    MOV EAX,[0x0061b4d0]                ; 0045d47d | DAT_0061b4d0
    PUSH EAX                            ; 0045d482
    JMP 0x0045d437                      ; 0045d483
        ;   XREF to: 0045d437 (UNCONDITIONAL_JUMP)  ; LAB_0045d437
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d485
        ;   Label: LAB_0045d485
    MOV dword ptr [EAX + 0x184],0x0     ; 0045d488
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d492
    MOV dword ptr [EAX + 0x1f0],0x0     ; 0045d495
    MOV ESP,EBP                         ; 0045d49f
    POP EBP                             ; 0045d4a1
    POP EDI                             ; 0045d4a2
    POP ESI                             ; 0045d4a3
    POP EBX                             ; 0045d4a4
    RET                                 ; 0045d4a5


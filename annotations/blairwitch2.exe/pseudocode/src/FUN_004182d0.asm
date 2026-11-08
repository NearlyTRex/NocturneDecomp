; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004182d0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005cc03a
;   undefined4 DAT_005f3830
;   undefined4 DAT_005f3834
;
; Called Functions:
;   FUN_0040cf60
;   FUN_0040cfc0
;   FUN_00418110
;   FUN_00487db0
;   FUN_005478b0
;   FUN_005b77c0
;   FUN_005b7f5f
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004182d0
        ;   Label: FUN_004182d0
    PUSH ESI                            ; 004182d1
    PUSH EDI                            ; 004182d2
    SUB ESP,0x28                        ; 004182d3
    MOV EBX,dword ptr [ESP + 0x38]      ; 004182d6
    PUSH EBX                            ; 004182da
    CALL FUN_00487db0                   ; 004182db
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487db0()
    ADD ESP,0x4                         ; 004182e0
    PUSH 0x5f39a0                       ; 004182e3
    PUSH 0x14                           ; 004182e8
    ADD EAX,0x10b78                     ; 004182ea
    PUSH EAX                            ; 004182ef
    CALL FUN_005b7f5f                   ; 004182f0
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 004182f5
    LEA EBX,[EAX + 0xfffef488]          ; 004182f8
    PUSH 0x5cc022                       ; 004182fe
    LEA EAX,[EBX + 0x2b4]               ; 00418303
    PUSH EAX                            ; 00418309
    MOV dword ptr [EBX + 0x2b0],0x5f3844 ; 0041830a
    CALL FUN_005478b0                   ; 00418314
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 00418319
    MOV dword ptr [EBX + 0x3434],0x3f666666 ; 00418323
    MOV ESI,0x5cc02e                    ; 0041832d
    MOV dword ptr [EBX + 0xfc],0x1      ; 00418332
    LEA EDI,[EBX + 0x10b0c]             ; 0041833c
    MOV dword ptr [EBX + 0x11118],0x0   ; 00418342
    FLD float ptr [0x005f3830]          ; 0041834c | DAT_005f3830
    MOV dword ptr [EBX + 0x280c],0x2    ; 00418352
    FLD float ptr [0x005f3834]          ; 0041835c | DAT_005f3834
    MOV dword ptr [EBX + 0x10b70],0x41200000 ; 00418362
    ADD ESP,0x8                         ; 0041836c
    FXCH                                ; 0041836f
    FSTP float ptr [EBX + 0x3438]       ; 00418371
    FSTP float ptr [EBX + 0x343c]       ; 00418377
    PUSH EDI                            ; 0041837d
    MOV AL,byte ptr [ESI]               ; 0041837e
        ;   Label: LAB_0041837e
    MOV byte ptr [EDI],AL               ; 00418380
    CMP AL,0x0                          ; 00418382
    JZ 0x00418396                       ; 00418384
        ;   XREF to: 00418396 (CONDITIONAL_JUMP)  ; LAB_00418396
    MOV AL,byte ptr [ESI + 0x1]         ; 00418386
    ADD ESI,0x2                         ; 00418389
    MOV byte ptr [EDI + 0x1],AL         ; 0041838c
    ADD EDI,0x2                         ; 0041838f
    CMP AL,0x0                          ; 00418392
    JNZ 0x0041837e                      ; 00418394
        ;   XREF to: 0041837e (CONDITIONAL_JUMP)  ; LAB_0041837e
    POP EDI                             ; 00418396
        ;   Label: LAB_00418396
    PUSH 0x5a0                          ; 00418397
    PUSH 0x0                            ; 0041839c
    LEA EAX,[EBX + 0x10b78]             ; 0041839e
    PUSH EAX                            ; 004183a4
    MOV dword ptr [EBX + 0x10b74],0x0   ; 004183a5
    CALL FUN_005b77c0                   ; 004183af
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 004183b4
    PUSH 0xff                           ; 004183b7
    PUSH 0x0                            ; 004183bc
    CALL FUN_0040cfc0                   ; 004183be
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    MOV dword ptr [EBX + 0x10afc],0x0   ; 004183c3
    MOV dword ptr [EBX + 0x10b00],0x0   ; 004183cd
    MOV dword ptr [EBX + 0x10b04],0x0   ; 004183d7
    MOV dword ptr [EBX + 0x10aec],0x40c00000 ; 004183e1
    MOV dword ptr [EBX + 0x259c],0x3f490fdb ; 004183eb
    ADD ESP,0x8                         ; 004183f5
    MOV dword ptr [EBX + 0x10af8],EAX   ; 004183f8
    PUSH 0x437f0000                     ; 004183fe
    PUSH 0x0                            ; 00418403
    CALL FUN_0040cf60                   ; 00418405
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041840a
    FLD float ptr [ESP + 0x2c]          ; 0041840e
    ADD ESP,0x8                         ; 00418412
    PUSH 0x42200000                     ; 00418415
    PUSH 0x0                            ; 0041841a
    FSTP float ptr [ESP + 0x14]         ; 0041841c
    CALL FUN_0040cf60                   ; 00418420
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x2c],EAX      ; 00418425
    FLD float ptr [ESP + 0x2c]          ; 00418429
    ADD ESP,0x8                         ; 0041842d
    PUSH 0x43800000                     ; 00418430
    PUSH 0x42d40000                     ; 00418435
    FSTP float ptr [ESP + 0x18]         ; 0041843a
    CALL FUN_0040cf60                   ; 0041843e
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x2c],EAX      ; 00418443
    LEA ESI,[ESP + 0x20]                ; 00418447
    FLD float ptr [ESP + 0x2c]          ; 0041844b
    ADD ESP,0x8                         ; 0041844f
    LEA EAX,[ESP + 0xc]                 ; 00418452
    MOV EDI,ESP                         ; 00418456
    PUSH EAX                            ; 00418458
    FSTP float ptr [ESP + 0x18]         ; 00418459
    CALL FUN_00418110                   ; 0041845d
        ;   XREF to: 00418110 (UNCONDITIONAL_CALL)  ; undefined FUN_00418110()
    LEA ESI,[ESP + 0x1c]                ; 00418462
    ADD ESP,0x4                         ; 00418466
    MOVSD ES:EDI,ESI                    ; 00418469
    MOVSD ES:EDI,ESI                    ; 0041846a
    MOVSD ES:EDI,ESI                    ; 0041846b
    FLD float ptr [0x005cc03a]          ; 0041846c | DAT_005cc03a
    FLD float ptr [ESP]                 ; 00418472
    FMUL ST1                            ; 00418475
    FLD float ptr [ESP + 0x4]           ; 00418477
    FMUL ST2                            ; 0041847b
    FLD float ptr [ESP + 0x8]           ; 0041847d
    FMULP ST3                           ; 00418481
    MOV EAX,EBX                         ; 00418483
    FXCH                                ; 00418485
    CALL FUN_005b7ff0                   ; 00418487
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 0041848c
    CALL FUN_005b7ff0                   ; 0041848e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST2                            ; 00418493
    CALL FUN_005b7ff0                   ; 00418495
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 0041849a
    FISTP dword ptr [EBX + 0x108]       ; 0041849c
    FXCH                                ; 004184a2
    FISTP dword ptr [EBX + 0x10c]       ; 004184a4
    FISTP dword ptr [EBX + 0x110]       ; 004184aa
    ADD ESP,0x28                        ; 004184b0
    POP EDI                             ; 004184b3
    POP ESI                             ; 004184b4
    POP EBX                             ; 004184b5
    RET                                 ; 004184b6


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00449370(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449370
        ;   Label: FUN_00449370
    PUSH ESI                            ; 00449371
    PUSH EBP                            ; 00449372
    MOV EBP,ESP                         ; 00449373
    SUB ESP,0x28                        ; 00449375
    AND ESP,0xfffffff8                  ; 00449378
    MOV EBX,dword ptr [EBP + 0x10]      ; 0044937b
    FLD float ptr [EBX + 0xc]           ; 0044937e
    FMUL float ptr [EBX + 0x20]         ; 00449381
    FLD float ptr [EBX + 0x14]          ; 00449384
    FMUL float ptr [EBX + 0x18]         ; 00449387
    FSUBP                               ; 0044938a
    FMUL float ptr [EBX + 0x4]          ; 0044938c
    FLD float ptr [EBX + 0x10]          ; 0044938f
    FMUL float ptr [EBX + 0x20]         ; 00449392
    FLD float ptr [EBX + 0x14]          ; 00449395
    FMUL float ptr [EBX + 0x1c]         ; 00449398
    FSUBP                               ; 0044939b
    FMUL float ptr [EBX]                ; 0044939d
    FSUBRP                              ; 0044939f
    FLD float ptr [EBX + 0xc]           ; 004493a1
    FMUL float ptr [EBX + 0x1c]         ; 004493a4
    FLD float ptr [EBX + 0x10]          ; 004493a7
    FMUL float ptr [EBX + 0x18]         ; 004493aa
    FSUBP                               ; 004493ad
    FMUL float ptr [EBX + 0x8]          ; 004493af
    FADDP                               ; 004493b2
    FSTP float ptr [ESP]                ; 004493b4
    TEST dword ptr [ESP],0x7fffffff     ; 004493b7
    JZ 0x004494fb                       ; 004493be
        ;   XREF to: 004494fb (CONDITIONAL_JUMP)  ; LAB_004494fb
    FLD float ptr [EBX + 0x10]          ; 004493c4
        ;   Label: LAB_004493c4
    FMUL float ptr [EBX + 0x20]         ; 004493c7
    FLD float ptr [EBX + 0xc]           ; 004493ca
    FMUL float ptr [EBX + 0x20]         ; 004493cd
    FLD float ptr [EBX + 0xc]           ; 004493d0
    FMUL float ptr [EBX + 0x1c]         ; 004493d3
    FLD float ptr [EBX + 0x4]           ; 004493d6
    FMUL float ptr [EBX + 0x20]         ; 004493d9
    FLD float ptr [EBX + 0x8]           ; 004493dc
    FMUL float ptr [EBX + 0x18]         ; 004493df
    FLD float ptr [EBX + 0x14]          ; 004493e2
    FMUL float ptr [EBX + 0x1c]         ; 004493e5
    FLD float ptr [EBX + 0x14]          ; 004493e8
    FXCH                                ; 004493eb
    FSUBP ST6,ST0                       ; 004493ed
    FMUL float ptr [EBX + 0x18]         ; 004493ef
    FXCH ST5                            ; 004493f2
    FSTP float ptr [ESP + 0x10]         ; 004493f4
    FLD float ptr [EBX + 0x10]          ; 004493f8
    FMUL float ptr [EBX + 0x18]         ; 004493fb
    FXCH ST5                            ; 004493fe
    FSUBP ST4,ST0                       ; 00449400
    FLD float ptr [ESP]                 ; 00449402
    FXCH ST4                            ; 00449405
    FCHS                                ; 00449407
    FSTP float ptr [ESP + 0x1c]         ; 00449409
    FLD float ptr [EBX + 0x4]           ; 0044940d
    FLD1                                ; 00449410
    FXCH                                ; 00449412
    FMUL float ptr [EBX + 0x18]         ; 00449414
    FXCH                                ; 00449417
    FDIVRP ST5,ST0                      ; 00449419
    FXCH ST5                            ; 0044941b
    FSUBP ST3,ST0                       ; 0044941d
    FXCH ST2                            ; 0044941f
    FSTP float ptr [ESP + 0xc]          ; 00449421
    FLD float ptr [EBX + 0x8]           ; 00449425
    FMUL float ptr [EBX + 0x1c]         ; 00449428
    FLD float ptr [EBX + 0x4]           ; 0044942b
    FXCH                                ; 0044942e
    FSUBP ST2,ST0                       ; 00449430
    FMUL float ptr [EBX + 0x14]         ; 00449432
    FXCH                                ; 00449435
    FCHS                                ; 00449437
    FSTP float ptr [ESP + 0x18]         ; 00449439
    FLD float ptr [EBX]                 ; 0044943d
    FMUL float ptr [EBX + 0x20]         ; 0044943f
    FLD float ptr [EBX + 0x4]           ; 00449442
    FMUL float ptr [EBX + 0xc]          ; 00449445
    FXCH                                ; 00449448
    FSUBRP ST3,ST0                      ; 0044944a
    FLD float ptr [EBX + 0x8]           ; 0044944c
    FMUL float ptr [EBX + 0x10]         ; 0044944f
    FLD float ptr [EBX]                 ; 00449452
    FMUL float ptr [EBX + 0x1c]         ; 00449454
    FXCH                                ; 00449457
    FSUBP ST3,ST0                       ; 00449459
    FXCH ST2                            ; 0044945b
    FSTP float ptr [ESP + 0x4]          ; 0044945d
    FLD float ptr [EBX]                 ; 00449461
    FMUL float ptr [EBX + 0x10]         ; 00449463
    FLD float ptr [EBX + 0x8]           ; 00449466
    FMUL float ptr [EBX + 0xc]          ; 00449469
    FXCH                                ; 0044946c
    FSUBRP ST2,ST0                      ; 0044946e
    FXCH                                ; 00449470
    FSTP float ptr [ESP + 0x14]         ; 00449472
    FLD float ptr [EBX]                 ; 00449476
    FMUL float ptr [EBX + 0x14]         ; 00449478
    FLD float ptr [ESP + 0x10]          ; 0044947b
    FXCH ST5                            ; 0044947f
    FSTP float ptr [ESP]                ; 00449481
    FXCH ST4                            ; 00449484
    FMUL float ptr [ESP]                ; 00449486
    FXCH ST2                            ; 00449489
    FSUBRP ST5,ST0                      ; 0044948b
    FLD float ptr [ESP + 0x18]          ; 0044948d
    FMUL float ptr [ESP]                ; 00449491
    FXCH ST4                            ; 00449494
    FSUBRP                              ; 00449496
    FXCH ST4                            ; 00449498
    FCHS                                ; 0044949a
    FSTP float ptr [ESP + 0x24]         ; 0044949c
    FLD float ptr [ESP + 0x4]           ; 004494a0
    FMUL float ptr [ESP]                ; 004494a4
    FXCH ST4                            ; 004494a7
    FCHS                                ; 004494a9
    FLD float ptr [ESP + 0x1c]          ; 004494ab
    FMUL float ptr [ESP]                ; 004494af
    FXCH ST3                            ; 004494b2
    FMUL float ptr [ESP]                ; 004494b4
    FXCH                                ; 004494b7
    FMUL float ptr [ESP]                ; 004494b9
    FLD float ptr [ESP + 0xc]           ; 004494bc
    FMUL float ptr [ESP]                ; 004494c0
    FXCH ST3                            ; 004494c3
    FSTP float ptr [EBX]                ; 004494c5
    FLD float ptr [ESP + 0x24]          ; 004494c7
    FMUL float ptr [ESP]                ; 004494cb
    FXCH ST5                            ; 004494ce
    FSTP float ptr [EBX + 0x4]          ; 004494d0
    FLD float ptr [ESP + 0x14]          ; 004494d3
    FMUL float ptr [ESP]                ; 004494d7
    FXCH ST6                            ; 004494da
    FSTP float ptr [EBX + 0x8]          ; 004494dc
    FXCH ST3                            ; 004494df
    FSTP float ptr [EBX + 0xc]          ; 004494e1
    FSTP float ptr [EBX + 0x10]         ; 004494e4
    FXCH                                ; 004494e7
    FSTP float ptr [EBX + 0x14]         ; 004494e9
    FSTP float ptr [EBX + 0x18]         ; 004494ec
    FSTP float ptr [EBX + 0x1c]         ; 004494ef
    FSTP float ptr [EBX + 0x20]         ; 004494f2
    MOV ESP,EBP                         ; 004494f5
    POP EBP                             ; 004494f7
    POP ESI                             ; 004494f8
    POP EBX                             ; 004494f9
    RET                                 ; 004494fa
    MOV ECX,0x5cf12f                    ; 004494fb
        ;   Label: LAB_004494fb
    MOV ESI,0x6c                        ; 00449500
    PUSH 0x5cf142                       ; 00449505
    MOV dword ptr [0x01d046a0],ECX      ; 0044950a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00449510 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00449516
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0044951b
    JMP 0x004493c4                      ; 0044951e
        ;   XREF to: 004493c4 (UNCONDITIONAL_JUMP)  ; LAB_004493c4


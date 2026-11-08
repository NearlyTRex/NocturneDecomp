; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004783e0(float *param_1,float *param_2,float param_3,float *param_4)
;
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
;
; XREF[1]:
;   FUN_00478550 at 004786f3
;
; Referenced Globals:
;   undefined4 DAT_005d1de3
;   undefined4 DAT_005d1deb
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004783e0
        ;   Label: FUN_004783e0
    PUSH ESI                            ; 004783e1
    PUSH EBP                            ; 004783e2
    MOV EBP,ESP                         ; 004783e3
    SUB ESP,0x50                        ; 004783e5
    AND ESP,0xfffffff8                  ; 004783e8
    MOV EDX,dword ptr [EBP + 0x10]      ; 004783eb
    MOV ESI,dword ptr [EBP + 0x14]      ; 004783ee
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004783f1
    FLD float ptr [ESI + 0x8]           ; 004783f4
    FLD float ptr [ESI]                 ; 004783f7
    FSUB float ptr [EDX]                ; 004783f9
    FXCH                                ; 004783fb
    FSUB float ptr [EDX + 0x8]          ; 004783fd
    FXCH                                ; 00478400
    FST double ptr [ESP + 0x30]         ; 00478402
    FMUL double ptr [ESP + 0x30]        ; 00478406
    FXCH                                ; 0047840a
    FST double ptr [ESP + 0x18]         ; 0047840c
    FMUL double ptr [ESP + 0x18]        ; 00478410
    FADDP                               ; 00478414
    FLDZ                                ; 00478416
    FXCH                                ; 00478418
    FSTP double ptr [ESP + 0x40]        ; 0047841a
    FCOMP double ptr [ESP + 0x40]       ; 0047841e
    FNSTSW AX                           ; 00478422
    SAHF                                ; 00478424
    JNC 0x00478545                      ; 00478425
        ;   XREF to: 00478545 (CONDITIONAL_JUMP)  ; LAB_00478545
    FLD float ptr [EDX + 0x8]           ; 0047842b
    FMUL double ptr [ESP + 0x18]        ; 0047842e
    FLD float ptr [EDX + 0x8]           ; 00478432
    FMUL ST0                            ; 00478435
    FLD double ptr [ESP + 0x40]         ; 00478437
    FMUL double ptr [0x005d1deb]        ; 0047843b | DAT_005d1deb
    FLD float ptr [EDX]                 ; 00478441
    FMUL ST0                            ; 00478443
    FLD float ptr [EDX]                 ; 00478445
    FMUL double ptr [ESP + 0x30]        ; 00478447
    FXCH                                ; 0047844b
    FADDP ST3,ST0                       ; 0047844d
    FADDP ST3,ST0                       ; 0047844f
    FLD float ptr [EBP + 0x18]          ; 00478451
    FMUL ST0                            ; 00478454
    FXCH ST3                            ; 00478456
    FMUL double ptr [0x005d1de3]        ; 00478458 | DAT_005d1de3
    FXCH ST3                            ; 0047845e
    FSUBP ST2,ST0                       ; 00478460
    FMULP                               ; 00478462
    FXCH                                ; 00478464
    FST double ptr [ESP + 0x38]         ; 00478466
    FMUL double ptr [ESP + 0x38]        ; 0047846a
    FSUBRP                              ; 0047846e
    FLDZ                                ; 00478470
    FXCH                                ; 00478472
    FSTP double ptr [ESP + 0x8]         ; 00478474
    FCOMP double ptr [ESP + 0x8]        ; 00478478
    FNSTSW AX                           ; 0047847c
    SAHF                                ; 0047847e
    JA 0x00478545                       ; 0047847f
        ;   XREF to: 00478545 (CONDITIONAL_JUMP)  ; LAB_00478545
    FLD double ptr [ESP + 0x38]         ; 00478485
    FCHS                                ; 00478489
    FLD double ptr [ESP + 0x8]          ; 0047848b
    FSQRT                               ; 0047848f
    FSUBP                               ; 00478491
    FLD double ptr [ESP + 0x40]         ; 00478493
    FMUL double ptr [0x005d1de3]        ; 00478497 | DAT_005d1de3
    FDIVP                               ; 0047849d
    FLDZ                                ; 0047849f
    XOR ECX,ECX                         ; 004784a1
    FXCH                                ; 004784a3
    FSTP double ptr [ESP + 0x10]        ; 004784a5
    FCOMP double ptr [ESP + 0x10]       ; 004784a9
    FNSTSW AX                           ; 004784ad
    SAHF                                ; 004784af
    JA 0x004784e6                       ; 004784b0
        ;   XREF to: 004784e6 (CONDITIONAL_JUMP)  ; LAB_004784e6
    FLD1                                ; 004784b2
    FCOMP double ptr [ESP + 0x10]       ; 004784b4
    FNSTSW AX                           ; 004784b8
    SAHF                                ; 004784ba
    JC 0x004784e6                       ; 004784bb
        ;   XREF to: 004784e6 (CONDITIONAL_JUMP)  ; LAB_004784e6
    FLD float ptr [ESI + 0x4]           ; 004784bd
    FSUB float ptr [EDX + 0x4]          ; 004784c0
    FMUL double ptr [ESP + 0x10]        ; 004784c3
    FADD float ptr [EDX + 0x4]          ; 004784c7
    FLD float ptr [EBX]                 ; 004784ca
    FXCH                                ; 004784cc
    FSTP double ptr [ESP + 0x20]        ; 004784ce
    FCOMP double ptr [ESP + 0x20]       ; 004784d2
    FNSTSW AX                           ; 004784d6
    SAHF                                ; 004784d8
    JNC 0x004784e6                      ; 004784d9
        ;   XREF to: 004784e6 (CONDITIONAL_JUMP)  ; LAB_004784e6
    FLD double ptr [ESP + 0x20]         ; 004784db
    MOV ECX,0x1                         ; 004784df
    FSTP float ptr [EBX]                ; 004784e4
    FLD double ptr [ESP + 0x8]          ; 004784e6
        ;   Label: LAB_004784e6
    FSQRT                               ; 004784ea
    FSUB double ptr [ESP + 0x38]        ; 004784ec
    FLD double ptr [ESP + 0x40]         ; 004784f0
    FMUL double ptr [0x005d1de3]        ; 004784f4 | DAT_005d1de3
    FDIVP                               ; 004784fa
    FLDZ                                ; 004784fc
    FXCH                                ; 004784fe
    FSTP double ptr [ESP]               ; 00478500
    FCOMP double ptr [ESP]              ; 00478503
    FNSTSW AX                           ; 00478506
    SAHF                                ; 00478508
    JA 0x0047853d                       ; 00478509
        ;   XREF to: 0047853d (CONDITIONAL_JUMP)  ; LAB_0047853d
    FLD1                                ; 0047850b
    FCOMP double ptr [ESP]              ; 0047850d
    FNSTSW AX                           ; 00478510
    SAHF                                ; 00478512
    JC 0x0047853d                       ; 00478513
        ;   XREF to: 0047853d (CONDITIONAL_JUMP)  ; LAB_0047853d
    FLD float ptr [ESI + 0x4]           ; 00478515
    FSUB float ptr [EDX + 0x4]          ; 00478518
    FMUL double ptr [ESP]               ; 0047851b
    FADD float ptr [EDX + 0x4]          ; 0047851e
    FLD float ptr [EBX]                 ; 00478521
    FXCH                                ; 00478523
    FSTP double ptr [ESP + 0x28]        ; 00478525
    FCOMP double ptr [ESP + 0x28]       ; 00478529
    FNSTSW AX                           ; 0047852d
    SAHF                                ; 0047852f
    JNC 0x0047853d                      ; 00478530
        ;   XREF to: 0047853d (CONDITIONAL_JUMP)  ; LAB_0047853d
    FLD double ptr [ESP + 0x28]         ; 00478532
    MOV ECX,0x1                         ; 00478536
    FSTP float ptr [EBX]                ; 0047853b
    MOV EAX,ECX                         ; 0047853d
        ;   Label: LAB_0047853d
    MOV ESP,EBP                         ; 0047853f
    POP EBP                             ; 00478541
    POP ESI                             ; 00478542
    POP EBX                             ; 00478543
    RET                                 ; 00478544
    XOR EAX,EAX                         ; 00478545
        ;   Label: LAB_00478545
    MOV ESP,EBP                         ; 00478547
    POP EBP                             ; 00478549
    POP ESI                             ; 0047854a
    POP EBX                             ; 0047854b
    RET                                 ; 0047854c


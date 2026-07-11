; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_00418480(float *param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined8       Stack[-0x3c]:8  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_00418464 = 004184e4
;   undefined4 DAT_00579176
;   undefined4 DAT_0057917e
;
; Called Functions:
;   FUN_00563a30
;   FUN_005648c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418480
        ;   Label: FUN_00418480
    PUSH EBP                            ; 00418481
    MOV EBP,ESP                         ; 00418482
    SUB ESP,0x44                        ; 00418484
    AND ESP,0xfffffff8                  ; 00418487
    MOV EBX,dword ptr [EBP + 0xc]       ; 0041848a
    MOV EAX,dword ptr [EBP + 0x10]      ; 0041848d
    MOV EDX,dword ptr [EAX]             ; 00418490
    MOV dword ptr [ESP + 0xc],EDX       ; 00418492
    MOV EDX,dword ptr [EAX + 0x4]       ; 00418496
    FLDZ                                ; 00418499
    MOV dword ptr [ESP + 0x8],EDX       ; 0041849b
    MOV EAX,dword ptr [EAX + 0x8]       ; 0041849f
    FLD float ptr [ESP + 0x8]           ; 004184a2
    MOV dword ptr [ESP + 0x10],EAX      ; 004184a6
    FSTP double ptr [ESP]               ; 004184aa
    FCOMP double ptr [ESP]              ; 004184ad
    FNSTSW AX                           ; 004184b0
    SAHF                                ; 004184b2
    JC 0x0041856e                       ; 004184b3
        ;   XREF to: 0041856e (CONDITIONAL_JUMP)  ; LAB_0041856e
    MOV EAX,dword ptr [ESP + 0x10]      ; 004184b9
    MOV dword ptr [ESP + 0x40],EAX      ; 004184bd
    MOV dword ptr [ESP + 0x38],EAX      ; 004184c1
    MOV dword ptr [ESP + 0x34],EAX      ; 004184c5
        ;   Label: LAB_004184c5
    MOV EAX,dword ptr [ESP + 0x38]      ; 004184c9
        ;   Label: default
    MOV dword ptr [EBX],EAX             ; 004184cd
    MOV EAX,dword ptr [ESP + 0x40]      ; 004184cf
    MOV dword ptr [EBX + 0x4],EAX       ; 004184d3
    MOV EAX,dword ptr [ESP + 0x34]      ; 004184d6
    MOV dword ptr [EBX + 0x8],EAX       ; 004184da
    MOV EAX,EBX                         ; 004184dd
    MOV ESP,EBP                         ; 004184df
    POP EBP                             ; 004184e1
    POP EBX                             ; 004184e2
    RET                                 ; 004184e3
    MOV EAX,dword ptr [ESP + 0x10]      ; 004184e4
        ;   Label: caseD_0
    MOV dword ptr [ESP + 0x38],EAX      ; 004184e8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004184ec
    MOV dword ptr [ESP + 0x40],EAX      ; 004184f0
    MOV EAX,dword ptr [ESP + 0x30]      ; 004184f4
    JMP 0x004184c5                      ; 004184f8
        ;   XREF to: 004184c5 (UNCONDITIONAL_JUMP)  ; LAB_004184c5
    MOV EAX,dword ptr [ESP + 0x28]      ; 004184fa
        ;   Label: caseD_1
    MOV dword ptr [ESP + 0x38],EAX      ; 004184fe
    MOV EAX,dword ptr [ESP + 0x10]      ; 00418502
    MOV dword ptr [ESP + 0x40],EAX      ; 00418506
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041850a
    JMP 0x004184c5                      ; 0041850e
        ;   XREF to: 004184c5 (UNCONDITIONAL_JUMP)  ; LAB_004184c5
    MOV EAX,dword ptr [ESP + 0x30]      ; 00418510
        ;   Label: caseD_2
    MOV dword ptr [ESP + 0x38],EAX      ; 00418514
    MOV EAX,dword ptr [ESP + 0x10]      ; 00418518
    MOV dword ptr [ESP + 0x40],EAX      ; 0041851c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00418520
    JMP 0x004184c5                      ; 00418524
        ;   XREF to: 004184c5 (UNCONDITIONAL_JUMP)  ; LAB_004184c5
    MOV EAX,dword ptr [ESP + 0x30]      ; 00418526
        ;   Label: caseD_3
    MOV dword ptr [ESP + 0x38],EAX      ; 0041852a
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041852e
    MOV dword ptr [ESP + 0x40],EAX      ; 00418532
    MOV EAX,dword ptr [ESP + 0x10]      ; 00418536
    JMP 0x004184c5                      ; 0041853a
        ;   XREF to: 004184c5 (UNCONDITIONAL_JUMP)  ; LAB_004184c5
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041853c
        ;   Label: caseD_4
    MOV dword ptr [ESP + 0x38],EAX      ; 00418540
    MOV EAX,dword ptr [ESP + 0x30]      ; 00418544
    MOV dword ptr [ESP + 0x40],EAX      ; 00418548
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041854c
    JMP 0x004184c5                      ; 00418550
        ;   XREF to: 004184c5 (UNCONDITIONAL_JUMP)  ; LAB_004184c5
    MOV EAX,dword ptr [ESP + 0x10]      ; 00418555
        ;   Label: caseD_5
    MOV dword ptr [ESP + 0x38],EAX      ; 00418559
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041855d
    MOV dword ptr [ESP + 0x40],EAX      ; 00418561
    MOV EAX,dword ptr [ESP + 0x28]      ; 00418565
    JMP 0x004184c5                      ; 00418569
        ;   XREF to: 004184c5 (UNCONDITIONAL_JUMP)  ; LAB_004184c5
    FLD double ptr [ESP]                ; 0041856e
        ;   Label: LAB_0041856e
    FMUL double ptr [0x00579176]        ; 00418571 | DAT_00579176
    FLD float ptr [ESP + 0xc]           ; 00418577
    FLD ST0                             ; 0041857b
    FMUL double ptr [0x0057917e]        ; 0041857d | DAT_0057917e
    FXCH ST2                            ; 00418583
    FSTP float ptr [ESP + 0x20]         ; 00418585
    FXCH                                ; 00418589
    FSTP ST1                            ; 0041858b
    FST float ptr [ESP + 0xc]           ; 0041858d
    SUB ESP,0x8                         ; 00418591
    FSTP double ptr [ESP]               ; 00418594
    CALL FUN_005648c0                   ; 00418597
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005648c0()
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041859c
    MOV dword ptr [ESP + 0x20],EDX      ; 004185a0
    FLD double ptr [ESP + 0x1c]         ; 004185a4
    ADD ESP,0x8                         ; 004185a8
    CALL FUN_00563a30                   ; 004185ab
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x1c]        ; 004185b0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004185b4
    MOV dword ptr [ESP + 0x3c],EAX      ; 004185b8
    LEA EDX,[EAX + 0x258]               ; 004185bc
    MOV ECX,0x6                         ; 004185c2
    MOV EAX,EDX                         ; 004185c7
    SAR EDX,0x1f                        ; 004185c9
    IDIV ECX                            ; 004185cc
    FLD float ptr [ESP + 0x20]          ; 004185ce
    FLD1                                ; 004185d2
    FSUBRP                              ; 004185d4
    FLD float ptr [ESP + 0x10]          ; 004185d6
    FXCH                                ; 004185da
    FMUL ST1                            ; 004185dc
    FLD1                                ; 004185de
    FLD float ptr [ESP + 0x20]          ; 004185e0
    FILD dword ptr [ESP + 0x3c]         ; 004185e4
    FSUBR float ptr [ESP + 0xc]         ; 004185e8
    FXCH ST2                            ; 004185ec
    FSUB ST0,ST2                        ; 004185ee
    FXCH                                ; 004185f0
    FMULP ST2                           ; 004185f2
    FMUL float ptr [ESP + 0x20]         ; 004185f4
    FLD1                                ; 004185f8
    FLD1                                ; 004185fa
    FXCH                                ; 004185fc
    FSUBRP ST3,ST0                      ; 004185fe
    FSUBRP                              ; 00418600
    FXCH                                ; 00418602
    FMUL ST3                            ; 00418604
    FXCH                                ; 00418606
    FMULP ST3                           ; 00418608
    FXCH                                ; 0041860a
    FSTP float ptr [ESP + 0x30]         ; 0041860c
    FSTP float ptr [ESP + 0x28]         ; 00418610
    FSTP float ptr [ESP + 0x2c]         ; 00418614
    CMP EDX,0x5                         ; 00418618
    JA 0x004184c9                       ; 0041861b
        ;   XREF to: 004184c9 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x418464]  ; 00418621 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD


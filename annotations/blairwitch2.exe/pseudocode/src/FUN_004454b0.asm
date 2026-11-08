; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004454b0(float *param_1,float *param_2,float param_3,float *param_4)
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
;   FUN_00445620 at 004457df
;
; Referenced Globals:
;   undefined4 DAT_005ce7e6
;   undefined4 DAT_005ce7ee
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004454b0
        ;   Label: FUN_004454b0
    PUSH ESI                            ; 004454b1
    PUSH EBP                            ; 004454b2
    MOV EBP,ESP                         ; 004454b3
    SUB ESP,0x50                        ; 004454b5
    AND ESP,0xfffffff8                  ; 004454b8
    MOV EDX,dword ptr [EBP + 0x10]      ; 004454bb
    MOV ESI,dword ptr [EBP + 0x14]      ; 004454be
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004454c1
    FLD float ptr [ESI + 0x8]           ; 004454c4
    FLD float ptr [ESI]                 ; 004454c7
    FSUB float ptr [EDX]                ; 004454c9
    FXCH                                ; 004454cb
    FSUB float ptr [EDX + 0x8]          ; 004454cd
    FXCH                                ; 004454d0
    FST double ptr [ESP + 0x30]         ; 004454d2
    FMUL double ptr [ESP + 0x30]        ; 004454d6
    FXCH                                ; 004454da
    FST double ptr [ESP + 0x18]         ; 004454dc
    FMUL double ptr [ESP + 0x18]        ; 004454e0
    FADDP                               ; 004454e4
    FLDZ                                ; 004454e6
    FXCH                                ; 004454e8
    FSTP double ptr [ESP + 0x40]        ; 004454ea
    FCOMP double ptr [ESP + 0x40]       ; 004454ee
    FNSTSW AX                           ; 004454f2
    SAHF                                ; 004454f4
    JNC 0x00445615                      ; 004454f5
        ;   XREF to: 00445615 (CONDITIONAL_JUMP)  ; LAB_00445615
    FLD float ptr [EDX + 0x8]           ; 004454fb
    FMUL double ptr [ESP + 0x18]        ; 004454fe
    FLD float ptr [EDX + 0x8]           ; 00445502
    FMUL ST0                            ; 00445505
    FLD double ptr [ESP + 0x40]         ; 00445507
    FMUL double ptr [0x005ce7ee]        ; 0044550b | DAT_005ce7ee
    FLD float ptr [EDX]                 ; 00445511
    FMUL ST0                            ; 00445513
    FLD float ptr [EDX]                 ; 00445515
    FMUL double ptr [ESP + 0x30]        ; 00445517
    FXCH                                ; 0044551b
    FADDP ST3,ST0                       ; 0044551d
    FADDP ST3,ST0                       ; 0044551f
    FLD float ptr [EBP + 0x18]          ; 00445521
    FMUL ST0                            ; 00445524
    FXCH ST3                            ; 00445526
    FMUL double ptr [0x005ce7e6]        ; 00445528 | DAT_005ce7e6
    FXCH ST3                            ; 0044552e
    FSUBP ST2,ST0                       ; 00445530
    FMULP                               ; 00445532
    FXCH                                ; 00445534
    FST double ptr [ESP + 0x38]         ; 00445536
    FMUL double ptr [ESP + 0x38]        ; 0044553a
    FSUBRP                              ; 0044553e
    FLDZ                                ; 00445540
    FXCH                                ; 00445542
    FSTP double ptr [ESP + 0x8]         ; 00445544
    FCOMP double ptr [ESP + 0x8]        ; 00445548
    FNSTSW AX                           ; 0044554c
    SAHF                                ; 0044554e
    JA 0x00445615                       ; 0044554f
        ;   XREF to: 00445615 (CONDITIONAL_JUMP)  ; LAB_00445615
    FLD double ptr [ESP + 0x38]         ; 00445555
    FCHS                                ; 00445559
    FLD double ptr [ESP + 0x8]          ; 0044555b
    FSQRT                               ; 0044555f
    FSUBP                               ; 00445561
    FLD double ptr [ESP + 0x40]         ; 00445563
    FMUL double ptr [0x005ce7e6]        ; 00445567 | DAT_005ce7e6
    FDIVP                               ; 0044556d
    FLDZ                                ; 0044556f
    XOR ECX,ECX                         ; 00445571
    FXCH                                ; 00445573
    FSTP double ptr [ESP + 0x10]        ; 00445575
    FCOMP double ptr [ESP + 0x10]       ; 00445579
    FNSTSW AX                           ; 0044557d
    SAHF                                ; 0044557f
    JA 0x004455b6                       ; 00445580
        ;   XREF to: 004455b6 (CONDITIONAL_JUMP)  ; LAB_004455b6
    FLD1                                ; 00445582
    FCOMP double ptr [ESP + 0x10]       ; 00445584
    FNSTSW AX                           ; 00445588
    SAHF                                ; 0044558a
    JC 0x004455b6                       ; 0044558b
        ;   XREF to: 004455b6 (CONDITIONAL_JUMP)  ; LAB_004455b6
    FLD float ptr [ESI + 0x4]           ; 0044558d
    FSUB float ptr [EDX + 0x4]          ; 00445590
    FMUL double ptr [ESP + 0x10]        ; 00445593
    FADD float ptr [EDX + 0x4]          ; 00445597
    FLD float ptr [EBX]                 ; 0044559a
    FXCH                                ; 0044559c
    FSTP double ptr [ESP + 0x20]        ; 0044559e
    FCOMP double ptr [ESP + 0x20]       ; 004455a2
    FNSTSW AX                           ; 004455a6
    SAHF                                ; 004455a8
    JNC 0x004455b6                      ; 004455a9
        ;   XREF to: 004455b6 (CONDITIONAL_JUMP)  ; LAB_004455b6
    FLD double ptr [ESP + 0x20]         ; 004455ab
    MOV ECX,0x1                         ; 004455af
    FSTP float ptr [EBX]                ; 004455b4
    FLD double ptr [ESP + 0x8]          ; 004455b6
        ;   Label: LAB_004455b6
    FSQRT                               ; 004455ba
    FSUB double ptr [ESP + 0x38]        ; 004455bc
    FLD double ptr [ESP + 0x40]         ; 004455c0
    FMUL double ptr [0x005ce7e6]        ; 004455c4 | DAT_005ce7e6
    FDIVP                               ; 004455ca
    FLDZ                                ; 004455cc
    FXCH                                ; 004455ce
    FSTP double ptr [ESP]               ; 004455d0
    FCOMP double ptr [ESP]              ; 004455d3
    FNSTSW AX                           ; 004455d6
    SAHF                                ; 004455d8
    JA 0x0044560d                       ; 004455d9
        ;   XREF to: 0044560d (CONDITIONAL_JUMP)  ; LAB_0044560d
    FLD1                                ; 004455db
    FCOMP double ptr [ESP]              ; 004455dd
    FNSTSW AX                           ; 004455e0
    SAHF                                ; 004455e2
    JC 0x0044560d                       ; 004455e3
        ;   XREF to: 0044560d (CONDITIONAL_JUMP)  ; LAB_0044560d
    FLD float ptr [ESI + 0x4]           ; 004455e5
    FSUB float ptr [EDX + 0x4]          ; 004455e8
    FMUL double ptr [ESP]               ; 004455eb
    FADD float ptr [EDX + 0x4]          ; 004455ee
    FLD float ptr [EBX]                 ; 004455f1
    FXCH                                ; 004455f3
    FSTP double ptr [ESP + 0x28]        ; 004455f5
    FCOMP double ptr [ESP + 0x28]       ; 004455f9
    FNSTSW AX                           ; 004455fd
    SAHF                                ; 004455ff
    JNC 0x0044560d                      ; 00445600
        ;   XREF to: 0044560d (CONDITIONAL_JUMP)  ; LAB_0044560d
    FLD double ptr [ESP + 0x28]         ; 00445602
    MOV ECX,0x1                         ; 00445606
    FSTP float ptr [EBX]                ; 0044560b
    MOV EAX,ECX                         ; 0044560d
        ;   Label: LAB_0044560d
    MOV ESP,EBP                         ; 0044560f
    POP EBP                             ; 00445611
    POP ESI                             ; 00445612
    POP EBX                             ; 00445613
    RET                                 ; 00445614
    XOR EAX,EAX                         ; 00445615
        ;   Label: LAB_00445615
    MOV ESP,EBP                         ; 00445617
    POP EBP                             ; 00445619
    POP ESI                             ; 0044561a
    POP EBX                             ; 0044561b
    RET                                 ; 0044561c


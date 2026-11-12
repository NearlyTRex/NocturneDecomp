; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_rayEdgeHeightTest_FUN_00479450(CVector3f *vertex1,CVector3f *vertex2,float ray_radius,float *out_height)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   vertex1
; CVector3f *      Stack[0x8]:4   vertex2
; float            Stack[0xc]:4   ray_radius
; float *          Stack[0x10]:4   out_height
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
;   core_dtri.cpp_FUN_004795c0 at 00479763
;
; Referenced Globals:
;   undefined4 DAT_005bcc99
;   undefined4 DAT_005bcca1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479450
        ;   Label: core_dtri.cpp_rayEdgeHeightTest_FUN_00479450
    PUSH ESI                            ; 00479451
    PUSH EBP                            ; 00479452
    MOV EBP,ESP                         ; 00479453
    SUB ESP,0x50                        ; 00479455
    AND ESP,0xfffffff8                  ; 00479458
    MOV EDX,dword ptr [EBP + 0x10]      ; 0047945b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0047945e
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00479461
    FLD float ptr [ESI + 0x8]           ; 00479464
    FLD float ptr [ESI]                 ; 00479467
    FSUB float ptr [EDX]                ; 00479469
    FXCH                                ; 0047946b
    FSUB float ptr [EDX + 0x8]          ; 0047946d
    FXCH                                ; 00479470
    FST double ptr [ESP + 0x30]         ; 00479472
    FMUL double ptr [ESP + 0x30]        ; 00479476
    FXCH                                ; 0047947a
    FST double ptr [ESP + 0x18]         ; 0047947c
    FMUL double ptr [ESP + 0x18]        ; 00479480
    FADDP                               ; 00479484
    FLDZ                                ; 00479486
    FXCH                                ; 00479488
    FSTP double ptr [ESP + 0x40]        ; 0047948a
    FCOMP double ptr [ESP + 0x40]       ; 0047948e
    FNSTSW AX                           ; 00479492
    SAHF                                ; 00479494
    JNC 0x004795b5                      ; 00479495
        ;   XREF to: 004795b5 (CONDITIONAL_JUMP)  ; LAB_004795b5
    FLD float ptr [EDX + 0x8]           ; 0047949b
    FMUL double ptr [ESP + 0x18]        ; 0047949e
    FLD float ptr [EDX + 0x8]           ; 004794a2
    FMUL ST0                            ; 004794a5
    FLD double ptr [ESP + 0x40]         ; 004794a7
    FMUL double ptr [0x005bcca1]        ; 004794ab | DAT_005bcca1
    FLD float ptr [EDX]                 ; 004794b1
    FMUL ST0                            ; 004794b3
    FLD float ptr [EDX]                 ; 004794b5
    FMUL double ptr [ESP + 0x30]        ; 004794b7
    FXCH                                ; 004794bb
    FADDP ST3,ST0                       ; 004794bd
    FADDP ST3,ST0                       ; 004794bf
    FLD float ptr [EBP + 0x18]          ; 004794c1
    FMUL ST0                            ; 004794c4
    FXCH ST3                            ; 004794c6
    FMUL double ptr [0x005bcc99]        ; 004794c8 | DAT_005bcc99
    FXCH ST3                            ; 004794ce
    FSUBP ST2,ST0                       ; 004794d0
    FMULP                               ; 004794d2
    FXCH                                ; 004794d4
    FST double ptr [ESP + 0x38]         ; 004794d6
    FMUL double ptr [ESP + 0x38]        ; 004794da
    FSUBRP                              ; 004794de
    FLDZ                                ; 004794e0
    FXCH                                ; 004794e2
    FSTP double ptr [ESP + 0x8]         ; 004794e4
    FCOMP double ptr [ESP + 0x8]        ; 004794e8
    FNSTSW AX                           ; 004794ec
    SAHF                                ; 004794ee
    JA 0x004795b5                       ; 004794ef
        ;   XREF to: 004795b5 (CONDITIONAL_JUMP)  ; LAB_004795b5
    FLD double ptr [ESP + 0x38]         ; 004794f5
    FCHS                                ; 004794f9
    FLD double ptr [ESP + 0x8]          ; 004794fb
    FSQRT                               ; 004794ff
    FSUBP                               ; 00479501
    FLD double ptr [ESP + 0x40]         ; 00479503
    FMUL double ptr [0x005bcc99]        ; 00479507 | DAT_005bcc99
    FDIVP                               ; 0047950d
    FLDZ                                ; 0047950f
    XOR ECX,ECX                         ; 00479511
    FXCH                                ; 00479513
    FSTP double ptr [ESP + 0x10]        ; 00479515
    FCOMP double ptr [ESP + 0x10]       ; 00479519
    FNSTSW AX                           ; 0047951d
    SAHF                                ; 0047951f
    JA 0x00479556                       ; 00479520
        ;   XREF to: 00479556 (CONDITIONAL_JUMP)  ; LAB_00479556
    FLD1                                ; 00479522
    FCOMP double ptr [ESP + 0x10]       ; 00479524
    FNSTSW AX                           ; 00479528
    SAHF                                ; 0047952a
    JC 0x00479556                       ; 0047952b
        ;   XREF to: 00479556 (CONDITIONAL_JUMP)  ; LAB_00479556
    FLD float ptr [ESI + 0x4]           ; 0047952d
    FSUB float ptr [EDX + 0x4]          ; 00479530
    FMUL double ptr [ESP + 0x10]        ; 00479533
    FADD float ptr [EDX + 0x4]          ; 00479537
    FLD float ptr [EBX]                 ; 0047953a
    FXCH                                ; 0047953c
    FSTP double ptr [ESP + 0x20]        ; 0047953e
    FCOMP double ptr [ESP + 0x20]       ; 00479542
    FNSTSW AX                           ; 00479546
    SAHF                                ; 00479548
    JNC 0x00479556                      ; 00479549
        ;   XREF to: 00479556 (CONDITIONAL_JUMP)  ; LAB_00479556
    FLD double ptr [ESP + 0x20]         ; 0047954b
    MOV ECX,0x1                         ; 0047954f
    FSTP float ptr [EBX]                ; 00479554
    FLD double ptr [ESP + 0x8]          ; 00479556
        ;   Label: LAB_00479556
    FSQRT                               ; 0047955a
    FSUB double ptr [ESP + 0x38]        ; 0047955c
    FLD double ptr [ESP + 0x40]         ; 00479560
    FMUL double ptr [0x005bcc99]        ; 00479564 | DAT_005bcc99
    FDIVP                               ; 0047956a
    FLDZ                                ; 0047956c
    FXCH                                ; 0047956e
    FSTP double ptr [ESP]               ; 00479570
    FCOMP double ptr [ESP]              ; 00479573
    FNSTSW AX                           ; 00479576
    SAHF                                ; 00479578
    JA 0x004795ad                       ; 00479579
        ;   XREF to: 004795ad (CONDITIONAL_JUMP)  ; LAB_004795ad
    FLD1                                ; 0047957b
    FCOMP double ptr [ESP]              ; 0047957d
    FNSTSW AX                           ; 00479580
    SAHF                                ; 00479582
    JC 0x004795ad                       ; 00479583
        ;   XREF to: 004795ad (CONDITIONAL_JUMP)  ; LAB_004795ad
    FLD float ptr [ESI + 0x4]           ; 00479585
    FSUB float ptr [EDX + 0x4]          ; 00479588
    FMUL double ptr [ESP]               ; 0047958b
    FADD float ptr [EDX + 0x4]          ; 0047958e
    FLD float ptr [EBX]                 ; 00479591
    FXCH                                ; 00479593
    FSTP double ptr [ESP + 0x28]        ; 00479595
    FCOMP double ptr [ESP + 0x28]       ; 00479599
    FNSTSW AX                           ; 0047959d
    SAHF                                ; 0047959f
    JNC 0x004795ad                      ; 004795a0
        ;   XREF to: 004795ad (CONDITIONAL_JUMP)  ; LAB_004795ad
    FLD double ptr [ESP + 0x28]         ; 004795a2
    MOV ECX,0x1                         ; 004795a6
    FSTP float ptr [EBX]                ; 004795ab
    MOV EAX,ECX                         ; 004795ad
        ;   Label: LAB_004795ad
    MOV ESP,EBP                         ; 004795af
    POP EBP                             ; 004795b1
    POP ESI                             ; 004795b2
    POP EBX                             ; 004795b3
    RET                                 ; 004795b4
    XOR EAX,EAX                         ; 004795b5
        ;   Label: LAB_004795b5
    MOV ESP,EBP                         ; 004795b7
    POP EBP                             ; 004795b9
    POP ESI                             ; 004795ba
    POP EBX                             ; 004795bb
    RET                                 ; 004795bc


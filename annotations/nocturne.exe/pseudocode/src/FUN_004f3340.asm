; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004f3340(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0058d020
;   undefined4 DAT_0058d028
;   undefined4 DAT_0058d030
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x4]           ; 004f3340
        ;   Label: FUN_004f3340
    FADD double ptr [0x0058d020]        ; 004f3344 | DAT_0058d020
    FLD float ptr [ESP + 0x8]           ; 004f334a
    FCOMPP                              ; 004f334e
    FNSTSW AX                           ; 004f3350
    SAHF                                ; 004f3352
    JC 0x004f3411                       ; 004f3353
        ;   XREF to: 004f3411 (CONDITIONAL_JUMP)  ; LAB_004f3411
    FLD float ptr [ESP + 0x4]           ; 004f3359
        ;   Label: LAB_004f3359
    FADD double ptr [0x0058d028]        ; 004f335d | DAT_0058d028
    FLD float ptr [ESP + 0x8]           ; 004f3363
    FCOMPP                              ; 004f3367
    FNSTSW AX                           ; 004f3369
    SAHF                                ; 004f336b
    JBE 0x004f337c                      ; 004f336c
        ;   XREF to: 004f337c (CONDITIONAL_JUMP)  ; LAB_004f337c
    FLD float ptr [ESP + 0x8]           ; 004f336e
    FADD float ptr [0x0058d030]         ; 004f3372 | DAT_0058d030
    FSTP float ptr [ESP + 0x8]          ; 004f3378
    FLD float ptr [ESP + 0x8]           ; 004f337c
        ;   Label: LAB_004f337c
    FCOMP float ptr [ESP + 0x4]         ; 004f3380
    FNSTSW AX                           ; 004f3384
    SAHF                                ; 004f3386
    JA 0x004f3420                       ; 004f3387
        ;   XREF to: 004f3420 (CONDITIONAL_JUMP)  ; LAB_004f3420
    FLD float ptr [ESP + 0xc]           ; 004f338d
    FCOMP float ptr [ESP + 0x8]         ; 004f3391
    FNSTSW AX                           ; 004f3395
    SAHF                                ; 004f3397
    JNC 0x004f33a4                      ; 004f3398
        ;   XREF to: 004f33a4 (CONDITIONAL_JUMP)  ; LAB_004f33a4
    FLD1                                ; 004f339a
    FADD float ptr [ESP + 0xc]          ; 004f339c
    FSTP float ptr [ESP + 0xc]          ; 004f33a0
    FLD float ptr [ESP + 0xc]           ; 004f33a4
        ;   Label: LAB_004f33a4
    FCOMP float ptr [ESP + 0x8]         ; 004f33a8
    FNSTSW AX                           ; 004f33ac
    SAHF                                ; 004f33ae
    JNC 0x004f33bb                      ; 004f33af
        ;   XREF to: 004f33bb (CONDITIONAL_JUMP)  ; LAB_004f33bb
    FLD1                                ; 004f33b1
    FADD float ptr [ESP + 0xc]          ; 004f33b3
    FSTP float ptr [ESP + 0xc]          ; 004f33b7
    FLD float ptr [ESP + 0x8]           ; 004f33bb
        ;   Label: LAB_004f33bb
    FLD1                                ; 004f33bf
    FADDP                               ; 004f33c1
    FLD float ptr [ESP + 0xc]           ; 004f33c3
    FCOMPP                              ; 004f33c7
    FNSTSW AX                           ; 004f33c9
    SAHF                                ; 004f33cb
    JBE 0x004f33dc                      ; 004f33cc
        ;   XREF to: 004f33dc (CONDITIONAL_JUMP)  ; LAB_004f33dc
    FLD float ptr [ESP + 0xc]           ; 004f33ce
    FADD float ptr [0x0058d030]         ; 004f33d2 | DAT_0058d030
    FSTP float ptr [ESP + 0xc]          ; 004f33d8
    FLD float ptr [ESP + 0x8]           ; 004f33dc
        ;   Label: LAB_004f33dc
    FLD1                                ; 004f33e0
    FADDP                               ; 004f33e2
    FLD float ptr [ESP + 0xc]           ; 004f33e4
    FCOMPP                              ; 004f33e8
    FNSTSW AX                           ; 004f33ea
    SAHF                                ; 004f33ec
    JBE 0x004f33fd                      ; 004f33ed
        ;   XREF to: 004f33fd (CONDITIONAL_JUMP)  ; LAB_004f33fd
    FLD float ptr [ESP + 0xc]           ; 004f33ef
    FADD float ptr [0x0058d030]         ; 004f33f3 | DAT_0058d030
    FSTP float ptr [ESP + 0xc]          ; 004f33f9
    FLD float ptr [ESP + 0xc]           ; 004f33fd
        ;   Label: LAB_004f33fd
    FCOMP float ptr [ESP + 0x4]         ; 004f3401
    FNSTSW AX                           ; 004f3405
    SAHF                                ; 004f3407
    SETA AL                             ; 004f3408
    AND EAX,0xff                        ; 004f340b
    RET                                 ; 004f3410
    FLD1                                ; 004f3411
        ;   Label: LAB_004f3411
    FADD float ptr [ESP + 0x8]          ; 004f3413
    FSTP float ptr [ESP + 0x8]          ; 004f3417
    JMP 0x004f3359                      ; 004f341b
        ;   XREF to: 004f3359 (UNCONDITIONAL_JUMP)  ; LAB_004f3359
    XOR EAX,EAX                         ; 004f3420
        ;   Label: LAB_004f3420
    RET                                 ; 004f3422


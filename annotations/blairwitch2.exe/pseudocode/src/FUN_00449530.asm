; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00449530(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[53]:
;   FUN_00408cf0 at 00408d0a
;   FUN_00408d70 at 00408d8c
;   FUN_00420000 at 004201e3
;   FUN_004203a0 at 00420765
;   FUN_00427360 at 00427614
;   FUN_0042abe0 at 0042aebd
;   FUN_0044b960 at 0044bc43
;   FUN_0044c830 at 0044c942
;   FUN_0044f020 at 0044f53f
;   FUN_0044f840 at 0044f9b4
;   ... and 43 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00449530
        ;   Label: FUN_00449530
    SUB ESP,0xc                         ; 00449531
    MOV EDX,dword ptr [ESP + 0x14]      ; 00449534
    MOV EAX,dword ptr [ESP + 0x18]      ; 00449538
    MOV ECX,ESI                         ; 0044953c
    FLD float ptr [EAX + 0x4]           ; 0044953e
    FMUL float ptr [EDX + 0x4]          ; 00449541
    FLD float ptr [EAX + 0x4]           ; 00449544
    FMUL float ptr [EDX + 0x10]         ; 00449547
    FLD float ptr [EAX + 0x4]           ; 0044954a
    FMUL float ptr [EDX + 0x1c]         ; 0044954d
    FLD float ptr [EAX]                 ; 00449550
    FMUL float ptr [EDX]                ; 00449552
    FLD float ptr [EAX]                 ; 00449554
    FMUL float ptr [EDX + 0xc]          ; 00449556
    FLD float ptr [EAX]                 ; 00449559
    FXCH ST2                            ; 0044955b
    FADDP ST5,ST0                       ; 0044955d
    FXCH                                ; 0044955f
    FMUL float ptr [EDX + 0x18]         ; 00449561
    FLD float ptr [EAX + 0x8]           ; 00449564
    FMUL float ptr [EDX + 0x8]          ; 00449567
    FXCH ST2                            ; 0044956a
    FADDP ST4,ST0                       ; 0044956c
    FADDP ST2,ST0                       ; 0044956e
    FLD float ptr [EAX + 0x8]           ; 00449570
    FMUL float ptr [EDX + 0x14]         ; 00449573
    FLD float ptr [EAX + 0x8]           ; 00449576
    FMUL float ptr [EDX + 0x20]         ; 00449579
    MOV EDI,ESI                         ; 0044957c
    MOV ESI,ESP                         ; 0044957e
    FXCH ST2                            ; 00449580
    FADDP ST5,ST0                       ; 00449582
    FADDP ST3,ST0                       ; 00449584
    FADDP                               ; 00449586
    FXCH                                ; 00449588
    FSTP float ptr [ESP + 0x4]          ; 0044958a
    FSTP float ptr [ESP + 0x8]          ; 0044958e
    FSTP float ptr [ESP]                ; 00449592
    MOVSD ES:EDI,ESI                    ; 00449595
    MOVSD ES:EDI,ESI                    ; 00449596
    MOVSD ES:EDI,ESI                    ; 00449597
    MOV EAX,ECX                         ; 00449598
    ADD ESP,0xc                         ; 0044959a
    POP EDI                             ; 0044959d
    RET                                 ; 0044959e


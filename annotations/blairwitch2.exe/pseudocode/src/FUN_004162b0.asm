; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004162b0(int param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_disableBodyPartDamage_005cbf18
;   undefined4 DAT_005cbf32
;   undefined4 DAT_006141f0
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01e661b8
;   undefined4 DAT_0265370c
;   undefined4 DAT_02653710
;   undefined4 DAT_02653714
;
; Called Functions:
;   FUN_00408ae0
;   FUN_0040cf60
;   FUN_00415890
;   FUN_004164b0
;   FUN_00417a70
;   FUN_004222d0
;   FUN_0048e340
;   FUN_00537f30
;   FUN_005b2290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004162b0
        ;   Label: FUN_004162b0
    PUSH ESI                            ; 004162b1
    PUSH EDI                            ; 004162b2
    PUSH EBP                            ; 004162b3
    MOV EBP,ESP                         ; 004162b4
    SUB ESP,0x4c                        ; 004162b6
    AND ESP,0xfffffff8                  ; 004162b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004162bc
    CMP dword ptr [EBX + 0x2d0],0x3     ; 004162bf
    JL 0x00416342                       ; 004162c6
        ;   XREF to: 00416342 (CONDITIONAL_JUMP)  ; LAB_00416342
    CMP dword ptr [EBX + 0x2dc],0x1     ; 004162cc
    JL 0x00416342                       ; 004162d3
        ;   XREF to: 00416342 (CONDITIONAL_JUMP)  ; LAB_00416342
    CMP dword ptr [EBX + 0x2b4],0x0     ; 004162d5
    JZ 0x004162e7                       ; 004162dc
        ;   XREF to: 004162e7 (CONDITIONAL_JUMP)  ; LAB_004162e7
    CMP dword ptr [EBX + 0x1334],0x0    ; 004162de
    JZ 0x0041632f                       ; 004162e5
        ;   XREF to: 0041632f (CONDITIONAL_JUMP)  ; LAB_0041632f
    CMP dword ptr [EBX + 0x133c],0x0    ; 004162e7
        ;   Label: LAB_004162e7
    JZ 0x004163a0                       ; 004162ee
        ;   XREF to: 004163a0 (CONDITIONAL_JUMP)  ; LAB_004163a0
    PUSH EBX                            ; 004162f4
        ;   Label: LAB_004162f4
    CALL FUN_00417a70                   ; 004162f5
        ;   XREF to: 00417a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00417a70()
    ADD ESP,0x4                         ; 004162fa
    MOV ECX,dword ptr [EBX + 0x133c]    ; 004162fd
        ;   Label: LAB_004162fd
    TEST ECX,ECX                        ; 00416303
    JNZ 0x0041632f                      ; 00416305
        ;   XREF to: 0041632f (CONDITIONAL_JUMP)  ; LAB_0041632f
    FLD float ptr [EBX + 0x10d0]        ; 00416307
    FSUB float ptr [EBP + 0x18]         ; 0041630d
    FST float ptr [EBX + 0x10d0]        ; 00416310
    FLDZ                                ; 00416316
    FCOMPP                              ; 00416318
    FNSTSW AX                           ; 0041631a
    SAHF                                ; 0041631c
    JBE 0x004163b2                      ; 0041631d
        ;   XREF to: 004163b2 (CONDITIONAL_JUMP)  ; LAB_004163b2
    MOV dword ptr [EBX + 0x1334],ECX    ; 00416323
    MOV dword ptr [EBX + 0x10d0],ECX    ; 00416329
    PUSH dword ptr [EBP + 0x18]         ; 0041632f
        ;   Label: LAB_0041632f
    PUSH EBX                            ; 00416332
    CALL FUN_004164b0                   ; 00416333
        ;   XREF to: 004164b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004164b0()
    ADD ESP,0x8                         ; 00416338
    MOV ESP,EBP                         ; 0041633b
        ;   Label: LAB_0041633b
    POP EBP                             ; 0041633d
    POP EDI                             ; 0041633e
    POP ESI                             ; 0041633f
    POP EBX                             ; 00416340
    RET                                 ; 00416341
    PUSH 0x0                            ; 00416342
        ;   Label: LAB_00416342
    PUSH 0x0                            ; 00416344
    PUSH EBX                            ; 00416346
    MOV dword ptr [EBX + 0x70],0x2      ; 00416347
    CALL FUN_00415890                   ; 0041634e
        ;   XREF to: 00415890 (UNCONDITIONAL_CALL)  ; undefined FUN_00415890()
    LEA EAX,[EBX + 0x2c4]               ; 00416353
    ADD ESP,0xc                         ; 00416359
    MOV ESI,EAX                         ; 0041635c
    CMP EAX,0x265370c                   ; 0041635e
    JZ 0x0041637f                       ; 00416363
        ;   XREF to: 0041637f (CONDITIONAL_JUMP)  ; LAB_0041637f
    MOV EDX,dword ptr [0x0265370c]      ; 00416365 | DAT_0265370c
    MOV dword ptr [EAX],EDX             ; 0041636b
    MOV EDX,dword ptr [0x02653710]      ; 0041636d | DAT_02653710
    MOV dword ptr [EAX + 0x4],EDX       ; 00416373
    MOV EDX,dword ptr [0x02653714]      ; 00416376 | DAT_02653714
    MOV dword ptr [EAX + 0x8],EDX       ; 0041637c
    ADD EBX,0x2b8                       ; 0041637f
        ;   Label: LAB_0041637f
    CMP EBX,ESI                         ; 00416385
    JZ 0x0041633b                       ; 00416387
        ;   XREF to: 0041633b (CONDITIONAL_JUMP)  ; LAB_0041633b
    MOV EAX,dword ptr [ESI]             ; 00416389
    MOV dword ptr [EBX],EAX             ; 0041638b
    MOV EAX,dword ptr [ESI + 0x4]       ; 0041638d
    MOV dword ptr [EBX + 0x4],EAX       ; 00416390
    MOV EAX,dword ptr [ESI + 0x8]       ; 00416393
    MOV dword ptr [EBX + 0x8],EAX       ; 00416396
    MOV ESP,EBP                         ; 00416399
    POP EBP                             ; 0041639b
    POP EDI                             ; 0041639c
    POP ESI                             ; 0041639d
    POP EBX                             ; 0041639e
    RET                                 ; 0041639f
    CMP dword ptr [EBX + 0x1334],0x0    ; 004163a0
        ;   Label: LAB_004163a0
    JNZ 0x004162f4                      ; 004163a7
        ;   XREF to: 004162f4 (CONDITIONAL_JUMP)  ; LAB_004162f4
    JMP 0x004162fd                      ; 004163ad
        ;   XREF to: 004162fd (UNCONDITIONAL_JUMP)  ; LAB_004162fd
    LEA EDI,[ESP + 0x3c]                ; 004163b2
        ;   Label: LAB_004163b2
    LEA ESI,[EBX + 0x20]                ; 004163b6
    MOVSD ES:EDI,ESI                    ; 004163b9
    MOVSD ES:EDI,ESI                    ; 004163ba
    MOVSD ES:EDI,ESI                    ; 004163bb
    LEA ESI,[EBX + 0x10e0]              ; 004163bc
    PUSH dword ptr [EBP + 0x18]         ; 004163c2
    PUSH ESI                            ; 004163c5
    CALL FUN_005b2290                   ; 004163c6
        ;   XREF to: 005b2290 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2290()
    LEA EAX,[EBX + 0x20]                ; 004163cb
    MOV EDX,dword ptr [ESI]             ; 004163ce
    MOV dword ptr [EAX],EDX             ; 004163d0
    MOV EDX,dword ptr [ESI + 0x4]       ; 004163d2
    MOV dword ptr [EAX + 0x4],EDX       ; 004163d5
    FLD float ptr [ESI + 0x8]           ; 004163d8
    LEA ESI,[EBX + 0x30]                ; 004163db
    FSTP float ptr [EAX + 0x8]          ; 004163de
    LEA EAX,[EBX + 0x10ec]              ; 004163e1
    ADD ESP,0x8                         ; 004163e7
    CMP ESI,EAX                         ; 004163ea
    JZ 0x004163fe                       ; 004163ec
        ;   XREF to: 004163fe (CONDITIONAL_JUMP)  ; LAB_004163fe
    MOV EDX,dword ptr [EAX]             ; 004163ee
    MOV dword ptr [ESI],EDX             ; 004163f0
    MOV EDX,dword ptr [EAX + 0x4]       ; 004163f2
    MOV dword ptr [ESI + 0x4],EDX       ; 004163f5
    MOV EDX,dword ptr [EAX + 0x8]       ; 004163f8
    MOV dword ptr [ESI + 0x8],EDX       ; 004163fb
    PUSH EBX                            ; 004163fe
        ;   Label: LAB_004163fe
    CALL FUN_00408ae0                   ; 004163ff
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ae0()
    LEA EAX,[EBX + 0x1120]              ; 00416404
    FLD float ptr [EAX + 0x4]           ; 0041640a
    FMUL ST0                            ; 0041640d
    FLD float ptr [EAX]                 ; 0041640f
    FMUL ST0                            ; 00416411
    FADDP                               ; 00416413
    FLD float ptr [EAX + 0x8]           ; 00416415
    FMUL ST0                            ; 00416418
    FADDP                               ; 0041641a
    ADD ESP,0x4                         ; 0041641c
    FSQRT                               ; 0041641f
    FCOMP double ptr [0x005cbf32]       ; 00416421 | DAT_005cbf32
    FNSTSW AX                           ; 00416427
    SAHF                                ; 00416429
    JBE 0x0041632f                      ; 0041642a
        ;   XREF to: 0041632f (CONDITIONAL_JUMP)  ; LAB_0041632f
    PUSH 0x5cbf18                       ; 00416430 | = "disableBodyPartDamage"
    MOV ESI,dword ptr [0x006141f0]      ; 00416435 | DAT_006141f0
    PUSH ESI                            ; 0041643b
    CALL FUN_0048e340                   ; 0041643c
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 00416441
    TEST EAX,EAX                        ; 00416444
    JNZ 0x0041632f                      ; 00416446
        ;   XREF to: 0041632f (CONDITIONAL_JUMP)  ; LAB_0041632f
    MOV EAX,ESP                         ; 0041644c
    PUSH EAX                            ; 0041644e
    CALL FUN_004222d0                   ; 0041644f
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 00416454
    PUSH 0x41700000                     ; 00416457
    PUSH 0x41200000                     ; 0041645c
    CALL FUN_0040cf60                   ; 00416461
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x50],EAX      ; 00416466
    FLD float ptr [ESP + 0x50]          ; 0041646a
    ADD ESP,0x8                         ; 0041646e
    MOV EAX,ESP                         ; 00416471
    MOV dword ptr [ESP + 0x34],EBX      ; 00416473
    PUSH EAX                            ; 00416477
    MOV dword ptr [ESP + 0x3c],EBX      ; 00416478
    LEA EAX,[EBX + 0x20]                ; 0041647c
    PUSH EAX                            ; 0041647f
    LEA EAX,[ESP + 0x44]                ; 00416480
    PUSH EAX                            ; 00416484
    MOV EDI,dword ptr [0x0061b5a8]      ; 00416485 | DAT_0061b5a8
    PUSH EDI                            ; 0041648b | DAT_01e661b8
    FSTP float ptr [ESP + 0x14]         ; 0041648c
    CALL FUN_00537f30                   ; 00416490
        ;   XREF to: 00537f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00537f30()
    ADD ESP,0x10                        ; 00416495
    PUSH dword ptr [EBP + 0x18]         ; 00416498
    PUSH EBX                            ; 0041649b
    CALL FUN_004164b0                   ; 0041649c
        ;   XREF to: 004164b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004164b0()
    ADD ESP,0x8                         ; 004164a1
    MOV ESP,EBP                         ; 004164a4
    POP EBP                             ; 004164a6
    POP EDI                             ; 004164a7
    POP ESI                             ; 004164a8
    POP EBX                             ; 004164a9
    RET                                 ; 004164aa


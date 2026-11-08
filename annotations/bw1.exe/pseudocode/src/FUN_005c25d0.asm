; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c25d0(undefined4 *param_1,undefined4 *param_2,uint param_3)
;
;
; XREF[39]:
;   FUN_00492f70 at 00492fb6
;   FUN_00493000 at 00493036
;   FUN_00499510 at 0049957f
;   FUN_00499730 at 004997cb
;   FUN_00499c80 at 00499e38
;   FUN_00499ed0 at 00499f90
;   FUN_0049a0d0 at 0049a190
;   FUN_004a1630 at 004a171d
;   FUN_004a1a40 at 004a1afe
;   FUN_004a1d00 at 004a2027
;   ... and 29 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005c25d0
        ;   Label: FUN_005c25d0
    PUSH EDI                            ; 005c25d1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c25d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c25d6
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c25da
    CMP ESI,EAX                         ; 005c25de
    JZ 0x005c261f                       ; 005c25e0
        ;   XREF to: 005c261f (CONDITIONAL_JUMP)  ; LAB_005c261f
    JNC 0x005c260b                      ; 005c25e2
        ;   XREF to: 005c260b (CONDITIONAL_JUMP)  ; LAB_005c260b
    LEA EDX,[ESI + ECX*0x1]             ; 005c25e4
    CMP EDX,EAX                         ; 005c25e7
    JBE 0x005c260b                      ; 005c25e9
        ;   XREF to: 005c260b (CONDITIONAL_JUMP)  ; LAB_005c260b
    LEA EDI,[EAX + ECX*0x1]             ; 005c25eb
    LEA ESI,[EDX + -0x1]                ; 005c25ee
    DEC EDI                             ; 005c25f1
    MOV DX,DS                           ; 005c25f2
    PUSH ES                             ; 005c25f4
    MOV ES,DX                           ; 005c25f5
    STD                                 ; 005c25f7
    DEC ESI                             ; 005c25f8
    DEC EDI                             ; 005c25f9
    SHR ECX,0x1                         ; 005c25fa
    MOVSW.REP ES:EDI,ESI                ; 005c25fc
    ADC ECX,ECX                         ; 005c25ff
    INC ESI                             ; 005c2601
    INC EDI                             ; 005c2602
    MOVSB.REP ES:EDI,ESI                ; 005c2603
    POP ES                              ; 005c2606
    CLD                                 ; 005c2607
    POP EDI                             ; 005c2608
    POP ESI                             ; 005c2609
    RET                                 ; 005c260a
    MOV DX,DS                           ; 005c260b
        ;   Label: LAB_005c260b
    MOV EDI,EAX                         ; 005c260d
    PUSH ES                             ; 005c260f
    MOV ES,DX                           ; 005c2610
    PUSH ECX                            ; 005c2612
    SHR ECX,0x2                         ; 005c2613
    MOVSD.REP ES:EDI,ESI                ; 005c2616
    POP ECX                             ; 005c2618
    AND ECX,0x3                         ; 005c2619
    MOVSB.REP ES:EDI,ESI                ; 005c261c
    POP ES                              ; 005c261e
    POP EDI                             ; 005c261f
        ;   Label: LAB_005c261f
    POP ESI                             ; 005c2620
    RET                                 ; 005c2621


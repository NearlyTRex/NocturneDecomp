; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a54c0(undefined4 *param_1,undefined4 *param_2,uint param_3)
;
;
; XREF[39]:
;   FUN_0047bb10 at 0047bb56
;   FUN_0047bba0 at 0047bbd6
;   FUN_004820b0 at 0048211f
;   FUN_004822d0 at 0048236b
;   FUN_00482820 at 004829d8
;   FUN_00482a70 at 00482b30
;   FUN_00482c70 at 00482d30
;   FUN_0048bc10 at 0048bcfd
;   FUN_0048c020 at 0048c0de
;   FUN_0048c2e0 at 0048c607
;   ... and 29 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005a54c0
        ;   Label: FUN_005a54c0
    PUSH EDI                            ; 005a54c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a54c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a54c6
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a54ca
    CMP ESI,EAX                         ; 005a54ce
    JZ 0x005a550f                       ; 005a54d0
        ;   XREF to: 005a550f (CONDITIONAL_JUMP)  ; LAB_005a550f
    JNC 0x005a54fb                      ; 005a54d2
        ;   XREF to: 005a54fb (CONDITIONAL_JUMP)  ; LAB_005a54fb
    LEA EDX,[ESI + ECX*0x1]             ; 005a54d4
    CMP EDX,EAX                         ; 005a54d7
    JBE 0x005a54fb                      ; 005a54d9
        ;   XREF to: 005a54fb (CONDITIONAL_JUMP)  ; LAB_005a54fb
    LEA EDI,[EAX + ECX*0x1]             ; 005a54db
    LEA ESI,[EDX + -0x1]                ; 005a54de
    DEC EDI                             ; 005a54e1
    MOV DX,DS                           ; 005a54e2
    PUSH ES                             ; 005a54e4
    MOV ES,DX                           ; 005a54e5
    STD                                 ; 005a54e7
    DEC ESI                             ; 005a54e8
    DEC EDI                             ; 005a54e9
    SHR ECX,0x1                         ; 005a54ea
    MOVSW.REP ES:EDI,ESI                ; 005a54ec
    ADC ECX,ECX                         ; 005a54ef
    INC ESI                             ; 005a54f1
    INC EDI                             ; 005a54f2
    MOVSB.REP ES:EDI,ESI                ; 005a54f3
    POP ES                              ; 005a54f6
    CLD                                 ; 005a54f7
    POP EDI                             ; 005a54f8
    POP ESI                             ; 005a54f9
    RET                                 ; 005a54fa
    MOV DX,DS                           ; 005a54fb
        ;   Label: LAB_005a54fb
    MOV EDI,EAX                         ; 005a54fd
    PUSH ES                             ; 005a54ff
    MOV ES,DX                           ; 005a5500
    PUSH ECX                            ; 005a5502
    SHR ECX,0x2                         ; 005a5503
    MOVSD.REP ES:EDI,ESI                ; 005a5506
    POP ECX                             ; 005a5508
    AND ECX,0x3                         ; 005a5509
    MOVSB.REP ES:EDI,ESI                ; 005a550c
    POP ES                              ; 005a550e
    POP EDI                             ; 005a550f
        ;   Label: LAB_005a550f
    POP ESI                             ; 005a5510
    RET                                 ; 005a5511


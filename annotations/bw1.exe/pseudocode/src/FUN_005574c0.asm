; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005574c0(int param_1)
;
;
; Called Functions:
;   FUN_005578b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005574c0
        ;   Label: FUN_005574c0
    PUSH EBP                            ; 005574c1
    SUB ESP,0x50                        ; 005574c2
    MOV EBX,dword ptr [ESP + 0x5c]      ; 005574c5
    FLD float ptr [EBX + 0x15f6dc]      ; 005574c9
    FCOMP float ptr [EBX + 0x15f6e0]    ; 005574cf
    FNSTSW AX                           ; 005574d5
    SAHF                                ; 005574d7
    JNC 0x0055761b                      ; 005574d8
        ;   XREF to: 0055761b (CONDITIONAL_JUMP)  ; LAB_0055761b
    LEA EAX,[EBX + 0x14d128]            ; 005574de
    LEA EBP,[EBX + 0x15f6e4]            ; 005574e4
    CMP EAX,EBP                         ; 005574ea
    JZ 0x005574ff                       ; 005574ec
        ;   XREF to: 005574ff (CONDITIONAL_JUMP)  ; LAB_005574ff
    MOV EDX,dword ptr [EBP]             ; 005574ee
    MOV dword ptr [EAX],EDX             ; 005574f1
    MOV EDX,dword ptr [EBP + 0x4]       ; 005574f3
    MOV dword ptr [EAX + 0x4],EDX       ; 005574f6
    MOV EDX,dword ptr [EBP + 0x8]       ; 005574f9
    MOV dword ptr [EAX + 0x8],EDX       ; 005574fc
    PUSH EDI                            ; 005574ff
        ;   Label: LAB_005574ff
    PUSH ESI                            ; 00557500
    LEA ESI,[EBX + 0x14d11c]            ; 00557501
    PUSH dword ptr [EBX + 0x15f6e0]     ; 00557507
    PUSH ESI                            ; 0055750d
    LEA EBP,[EBX + 0x14d110]            ; 0055750e
    PUSH EBP                            ; 00557514
    PUSH dword ptr [EBX + 0x15f6dc]     ; 00557515
    MOV EAX,dword ptr [EBX + 0x15f6f0]  ; 0055751b
    PUSH EBX                            ; 00557521
    MOV dword ptr [EBX + 0x14d134],EAX  ; 00557522
    CALL FUN_005578b0                   ; 00557528
        ;   XREF to: 005578b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005578b0()
    MOV dword ptr [ESP + 0x68],EAX      ; 0055752d
    MOV EAX,dword ptr [ESP + 0x68]      ; 00557531
    MOV dword ptr [EBX + 0x15f6dc],EAX  ; 00557535
    ADD ESP,0x14                        ; 0055753b
    FLD float ptr [EBX + 0x15f6dc]      ; 0055753e
    FLD1                                ; 00557544
    FCOMPP                              ; 00557546
    FNSTSW AX                           ; 00557548
    SAHF                                ; 0055754a
    JC 0x00557605                       ; 0055754b
        ;   XREF to: 00557605 (CONDITIONAL_JUMP)  ; LAB_00557605
    FLD float ptr [ESI + 0x4]           ; 00557551
    FLD float ptr [ESI + 0x8]           ; 00557554
    FLD float ptr [ESI]                 ; 00557557
    LEA EDI,[ESP + 0x44]                ; 00557559
    LEA ESI,[ESP + 0x20]                ; 0055755d
    FSUB float ptr [EBP]                ; 00557561
    FXCH ST2                            ; 00557564
    FSUB float ptr [EBP + 0x4]          ; 00557566
    FXCH                                ; 00557569
    FSUB float ptr [EBP + 0x8]          ; 0055756b
    FXCH ST2                            ; 0055756e
    FSTP float ptr [ESP + 0x20]         ; 00557570
    FSTP float ptr [ESP + 0x24]         ; 00557574
    FSTP float ptr [ESP + 0x28]         ; 00557578
    MOVSD ES:EDI,ESI                    ; 0055757c
    MOVSD ES:EDI,ESI                    ; 0055757d
    MOVSD ES:EDI,ESI                    ; 0055757e
    LEA EAX,[EBX + 0x15f6dc]            ; 0055757f
    FLD float ptr [ESP + 0x44]          ; 00557585
    FMUL float ptr [EAX]                ; 00557589
    FLD float ptr [ESP + 0x48]          ; 0055758b
    FMUL float ptr [EAX]                ; 0055758f
    FLD float ptr [ESP + 0x4c]          ; 00557591
    FMUL float ptr [EAX]                ; 00557595
    LEA EDI,[ESP + 0x2c]                ; 00557597
    LEA ESI,[ESP + 0x38]                ; 0055759b
    FXCH ST2                            ; 0055759f
    FSTP float ptr [ESP + 0x38]         ; 005575a1
    FSTP float ptr [ESP + 0x3c]         ; 005575a5
    FSTP float ptr [ESP + 0x40]         ; 005575a9
    MOVSD ES:EDI,ESI                    ; 005575ad
    MOVSD ES:EDI,ESI                    ; 005575ae
    MOVSD ES:EDI,ESI                    ; 005575af
    LEA EAX,[ESP + 0x14]                ; 005575b0
    FLD float ptr [EBP + 0x4]           ; 005575b4
    FLD float ptr [EBP + 0x8]           ; 005575b7
    FLD float ptr [EBP]                 ; 005575ba
    LEA EDI,[ESP + 0x14]                ; 005575bd
    LEA ESI,[ESP + 0x8]                 ; 005575c1
    LEA EBP,[EBX + 0x14d138]            ; 005575c5
    FADD float ptr [ESP + 0x2c]         ; 005575cb
    FXCH ST2                            ; 005575cf
    FADD float ptr [ESP + 0x30]         ; 005575d1
    FXCH                                ; 005575d5
    FADD float ptr [ESP + 0x34]         ; 005575d7
    FXCH ST2                            ; 005575db
    FSTP float ptr [ESP + 0x8]          ; 005575dd
    FSTP float ptr [ESP + 0xc]          ; 005575e1
    FSTP float ptr [ESP + 0x10]         ; 005575e5
    MOVSD ES:EDI,ESI                    ; 005575e9
    MOVSD ES:EDI,ESI                    ; 005575ea
    MOVSD ES:EDI,ESI                    ; 005575eb
    CMP EBP,EAX                         ; 005575ec
    JZ 0x00557605                       ; 005575ee
        ;   XREF to: 00557605 (CONDITIONAL_JUMP)  ; LAB_00557605
    MOV EAX,dword ptr [ESP + 0x14]      ; 005575f0
    MOV dword ptr [EBP],EAX             ; 005575f4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005575f7
    MOV dword ptr [EBP + 0x4],EAX       ; 005575fb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005575fe
    MOV dword ptr [EBP + 0x8],EAX       ; 00557602
    MOV EAX,dword ptr [EBX + 0x15f6dc]  ; 00557605
        ;   Label: LAB_00557605
    MOV dword ptr [ESP + 0x50],EAX      ; 0055760b
    POP ESI                             ; 0055760f
    POP EDI                             ; 00557610
    MOV EAX,dword ptr [ESP + 0x48]      ; 00557611
    ADD ESP,0x50                        ; 00557615
    POP EBP                             ; 00557618
    POP EBX                             ; 00557619
    RET                                 ; 0055761a
    MOV dword ptr [ESP + 0x48],0x40000000 ; 0055761b
        ;   Label: LAB_0055761b
    MOV EAX,dword ptr [ESP + 0x48]      ; 00557623
    ADD ESP,0x50                        ; 00557627
    POP EBP                             ; 0055762a
    POP EBX                             ; 0055762b
    RET                                 ; 0055762c


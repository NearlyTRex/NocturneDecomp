; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b33d0(int param_1,byte *param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004b0a20 at 004b0a87
;
; Referenced Globals:
;   undefined4 DAT_005c2100
;   undefined4 DAT_005c2104
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01c6af9a
;   undefined4 DAT_01d1ad68
;   undefined4 DAT_01d1ad6c
;   undefined4 DAT_01d1ad70
;   undefined4 DAT_01d76c40
;
; Called Functions:
;   FUN_004b13a0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b33d0
        ;   Label: FUN_004b33d0
    PUSH ESI                            ; 004b33d1
    PUSH EDI                            ; 004b33d2
    PUSH EBP                            ; 004b33d3
    SUB ESP,0x20                        ; 004b33d4
    MOV EBX,dword ptr [ESP + 0x34]      ; 004b33d7
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004b33db
    MOV EDX,dword ptr [ESP + 0x44]      ; 004b33df
    CMP EDX,-0x2                        ; 004b33e3
    JNZ 0x004b343f                      ; 004b33e6
        ;   XREF to: 004b343f (CONDITIONAL_JUMP)  ; LAB_004b343f
    MOV EAX,[0x01d1ad6c]                ; 004b33e8 | DAT_01d1ad6c
    MOV EDX,dword ptr [0x01d1ad70]      ; 004b33ed | DAT_01d1ad70
    MOV EBP,dword ptr [0x01d1ad68]      ; 004b33f3 | DAT_01d1ad68
    SHL EAX,0x8                         ; 004b33f9
    SHL EBP,0x10                        ; 004b33fc
    OR EAX,EDX                          ; 004b33ff
    OR EBP,EAX                          ; 004b3401
    FLD float ptr [0x01d76c40]          ; 004b3403 | DAT_01d76c40
        ;   Label: LAB_004b3403
    FMUL float ptr [0x005c2100]         ; 004b3409 | DAT_005c2100
    CALL FUN_005a3120                   ; 004b340f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0xc]         ; 004b3414
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b3418
    SHL EAX,0x18                        ; 004b341c
    MOV dword ptr [ESP + 0x10],EDI      ; 004b341f
    OR EBP,EAX                          ; 004b3423
    MOV ESI,dword ptr [ESP + 0x38]      ; 004b3425
        ;   Label: LAB_004b3425
    MOVZX ESI,byte ptr [ESI]            ; 004b3429
    TEST ESI,ESI                        ; 004b342c
    JZ 0x004b3701                       ; 004b342e
        ;   XREF to: 004b3701 (CONDITIONAL_JUMP)  ; LAB_004b3701
    CMP ESI,0xd                         ; 004b3434
    JNZ 0x004b3475                      ; 004b3437
        ;   XREF to: 004b3475 (CONDITIONAL_JUMP)  ; LAB_004b3475
    INC dword ptr [ESP + 0x38]          ; 004b3439
    JMP 0x004b3425                      ; 004b343d
        ;   XREF to: 004b3425 (UNCONDITIONAL_JUMP)  ; LAB_004b3425
    TEST EDX,EDX                        ; 004b343f
        ;   Label: LAB_004b343f
    JL 0x004b346e                       ; 004b3441
        ;   XREF to: 004b346e (CONDITIONAL_JUMP)  ; LAB_004b346e
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b3443
    SUB EAX,EDX                         ; 004b344a
    XOR EDX,EDX                         ; 004b344c
    MOVZX ESI,byte ptr [EAX + 0x1c6af98] ; 004b344e | DAT_01c6af98
    MOV DL,byte ptr [EAX + 0x1c6af99]   ; 004b3455 | DAT_01c6af99
    SHL ESI,0x10                        ; 004b345b
    SHL EDX,0x8                         ; 004b345e
    MOVZX EBP,byte ptr [EAX + 0x1c6af9a] ; 004b3461 | DAT_01c6af9a
    OR EDX,ESI                          ; 004b3468
    OR EBP,EDX                          ; 004b346a
    JMP 0x004b3403                      ; 004b346c
        ;   XREF to: 004b3403 (UNCONDITIONAL_JUMP)  ; LAB_004b3403
    MOV EBP,0xffffff                    ; 004b346e
        ;   Label: LAB_004b346e
    JMP 0x004b3403                      ; 004b3473
        ;   XREF to: 004b3403 (UNCONDITIONAL_JUMP)  ; LAB_004b3403
    CMP ESI,0xa                         ; 004b3475
        ;   Label: LAB_004b3475
    JNZ 0x004b349c                      ; 004b3478
        ;   XREF to: 004b349c (CONDITIONAL_JUMP)  ; LAB_004b349c
    MOV EAX,dword ptr [EBX + 0x41f0]    ; 004b347a
    MOV ESI,dword ptr [EBX + 0x41f8]    ; 004b3480
    MOV EDX,dword ptr [ESP + 0x40]      ; 004b3486
    ADD EAX,ESI                         ; 004b348a
    ADD EDX,EAX                         ; 004b348c
    MOV EDI,dword ptr [ESP + 0x10]      ; 004b348e
    MOV dword ptr [ESP + 0x40],EDX      ; 004b3492
    INC dword ptr [ESP + 0x38]          ; 004b3496
    JMP 0x004b3425                      ; 004b349a
        ;   XREF to: 004b3425 (UNCONDITIONAL_JUMP)  ; LAB_004b3425
    CMP ESI,0x20                        ; 004b349c
        ;   Label: LAB_004b349c
    JNZ 0x004b34c0                      ; 004b349f
        ;   XREF to: 004b34c0 (CONDITIONAL_JUMP)  ; LAB_004b34c0
    SHL ESI,0x2                         ; 004b34a1
    LEA EAX,[EBX + ESI*0x1]             ; 004b34a4
    MOV ECX,dword ptr [EBX + 0x41f4]    ; 004b34a7
    MOV EAX,dword ptr [EAX + 0x35e8]    ; 004b34ad
    ADD EAX,ECX                         ; 004b34b3
    ADD EDI,EAX                         ; 004b34b5
    INC dword ptr [ESP + 0x38]          ; 004b34b7
    JMP 0x004b3425                      ; 004b34bb
        ;   XREF to: 004b3425 (UNCONDITIONAL_JUMP)  ; LAB_004b3425
    MOV EAX,dword ptr [EBX + 0x1dd8]    ; 004b34c0
        ;   Label: LAB_004b34c0
    ADD EAX,0x4                         ; 004b34c6
    CMP EAX,0x3e8                       ; 004b34c9
    JL 0x004b36e8                       ; 004b34ce
        ;   XREF to: 004b36e8 (CONDITIONAL_JUMP)  ; LAB_004b36e8
    PUSH EBX                            ; 004b34d4
        ;   Label: LAB_004b34d4
    CALL FUN_004b13a0                   ; 004b34d5
        ;   XREF to: 004b13a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b13a0()
    ADD ESP,0x4                         ; 004b34da
    MOV dword ptr [ESP + 0x1c],EDI      ; 004b34dd
        ;   Label: LAB_004b34dd
    MOV EAX,dword ptr [EBX + 0x1dd8]    ; 004b34e1
    MOV EDX,dword ptr [EBX + 0x1dd0]    ; 004b34e7
    SHL EAX,0x5                         ; 004b34ed
    FILD dword ptr [ESP + 0x1c]         ; 004b34f0
    ADD EAX,EDX                         ; 004b34f4
    LEA EDX,[ESI*0x4 + 0x0]             ; 004b34f6
    FLD float ptr [0x005c2104]          ; 004b34fd | DAT_005c2104
    FXCH                                ; 004b3503
    FADD ST0,ST1                        ; 004b3505
    LEA ECX,[EBX + EDX*0x1]             ; 004b3507
    FSTP float ptr [ESP + 0x18]         ; 004b350a
    ADD EAX,0x20                        ; 004b350e
    FILD dword ptr [ECX + 0x3de8]       ; 004b3511
    MOV dword ptr [ESP + 0x8],ECX       ; 004b3517
    MOV ECX,dword ptr [ESP + 0x40]      ; 004b351b
    SHL ESI,0x4                         ; 004b351f
    MOV dword ptr [ESP + 0x1c],ECX      ; 004b3522
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b3526
    FILD dword ptr [ESP + 0x1c]         ; 004b352a
    FILD dword ptr [ECX + 0x35e8]       ; 004b352e
    FILD dword ptr [ECX + 0x39e8]       ; 004b3534
    FXCH ST2                            ; 004b353a
    FADDP ST4,ST0                       ; 004b353c
    FADD float ptr [ESP + 0x18]         ; 004b353e
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b3542
    FLD1                                ; 004b3546
    FXCH ST4                            ; 004b3548
    FADDP ST3,ST0                       ; 004b354a
    MOV dword ptr [EAX + -0x20],ECX     ; 004b354c
    FXCH ST2                            ; 004b354f
    FSTP float ptr [ESP]                ; 004b3551
    MOV ECX,dword ptr [ESP]             ; 004b3554
    FXCH ST2                            ; 004b3557
    FADDP                               ; 004b3559
    MOV dword ptr [EAX + -0x1c],ECX     ; 004b355b
    FSTP float ptr [ESP + 0x4]          ; 004b355e
    MOV ECX,dword ptr [EBX + 0x4218]    ; 004b3562
    MOV dword ptr [EAX + -0x18],ECX     ; 004b3568
    FLD float ptr [EBX + 0x421c]        ; 004b356b
    MOV dword ptr [EAX + -0xc],0x0      ; 004b3571
    FXCH                                ; 004b3578
    FADD float ptr [ESP]                ; 004b357a
    MOV dword ptr [EAX + -0x10],EBP     ; 004b357d
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b3580
    FXCH                                ; 004b3584
    FSTP float ptr [EAX + -0x14]        ; 004b3586
    FLD float ptr [ESI + EBX*0x1 + 0x25e8] ; 004b3589
    FSTP float ptr [EAX + -0x8]         ; 004b3590
    FLD float ptr [ESI + EBX*0x1 + 0x25ec] ; 004b3593
    FSTP float ptr [EAX + -0x4]         ; 004b359a
    MOV dword ptr [EAX],ECX             ; 004b359d
    MOV ECX,dword ptr [ESP]             ; 004b359f
    FLD1                                ; 004b35a2
    MOV dword ptr [EAX + 0x4],ECX       ; 004b35a4
    FADDP                               ; 004b35a7
    MOV ECX,dword ptr [EBX + 0x4218]    ; 004b35a9
    MOV dword ptr [EAX + 0x8],ECX       ; 004b35af
    FLD float ptr [EBX + 0x421c]        ; 004b35b2
    MOV dword ptr [EAX + 0x14],0x0      ; 004b35b8
    FXCH                                ; 004b35bf
    FSTP float ptr [ESP + 0x14]         ; 004b35c1
    MOV dword ptr [EAX + 0x10],EBP      ; 004b35c5
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b35c8
    FSTP float ptr [EAX + 0xc]          ; 004b35cc
    FLD float ptr [ESI + EBX*0x1 + 0x25f0] ; 004b35cf
    FSTP float ptr [EAX + 0x18]         ; 004b35d6
    FLD float ptr [ESI + EBX*0x1 + 0x25ec] ; 004b35d9
    FSTP float ptr [EAX + 0x1c]         ; 004b35e0
    MOV dword ptr [EAX + 0x20],ECX      ; 004b35e3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004b35e6
    MOV dword ptr [EAX + 0x24],ECX      ; 004b35ea
    ADD EAX,0x20                        ; 004b35ed
    MOV ECX,dword ptr [EBX + 0x4218]    ; 004b35f0
    MOV dword ptr [EAX + 0x8],ECX       ; 004b35f6
    MOV ECX,dword ptr [EBX + 0x421c]    ; 004b35f9
    MOV dword ptr [EAX + 0xc],ECX       ; 004b35ff
    MOV dword ptr [EAX + 0x10],EBP      ; 004b3602
    MOV dword ptr [EAX + 0x14],0x0      ; 004b3605
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b360c
    MOV ESI,dword ptr [EBX + EDX*0x4 + 0x25f0] ; 004b3610
    MOV dword ptr [EAX + 0x18],ESI      ; 004b3617
    FLD float ptr [EBX + EDX*0x4 + 0x25f4] ; 004b361a
    MOV dword ptr [EAX + 0x20],ECX      ; 004b3621
    MOV ECX,dword ptr [ESP + 0x14]      ; 004b3624
    MOV dword ptr [EAX + 0x24],ECX      ; 004b3628
    FSTP float ptr [EAX + 0x1c]         ; 004b362b
    MOV ECX,dword ptr [EBX + 0x4218]    ; 004b362e
    MOV dword ptr [EAX + 0x28],ECX      ; 004b3634
    FLD float ptr [EBX + 0x421c]        ; 004b3637
    MOV dword ptr [EAX + 0x34],0x0      ; 004b363d
    MOV dword ptr [EAX + 0x30],EBP      ; 004b3644
    FSTP float ptr [EAX + 0x2c]         ; 004b3647
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x25e8] ; 004b364a
    MOV dword ptr [EAX + 0x38],ECX      ; 004b3651
    MOV ECX,dword ptr [EBX + EDX*0x4 + 0x25f4] ; 004b3654
    MOV dword ptr [EAX + 0x3c],ECX      ; 004b365b
    MOV EAX,dword ptr [EBX + 0x1ddc]    ; 004b365e
    MOV ESI,dword ptr [EBX + 0x1dd4]    ; 004b3664
    ADD EAX,EAX                         ; 004b366a
    ADD EAX,ESI                         ; 004b366c
    MOV SI,word ptr [EBX + 0x1dd8]      ; 004b366e
    MOV word ptr [EAX],SI               ; 004b3675
    INC ESI                             ; 004b3678
    MOV word ptr [EAX + 0x2],SI         ; 004b3679
    MOV SI,word ptr [EBX + 0x1dd8]      ; 004b367d
    ADD ESI,0x2                         ; 004b3684
    MOV word ptr [EAX + 0x4],SI         ; 004b3687
    MOV SI,word ptr [EBX + 0x1dd8]      ; 004b368b
    MOV word ptr [EAX + 0x6],SI         ; 004b3692
    ADD ESI,0x2                         ; 004b3696
    MOV word ptr [EAX + 0x8],SI         ; 004b3699
    MOV SI,word ptr [EBX + 0x1dd8]      ; 004b369d
    ADD ESI,0x3                         ; 004b36a4
    MOV word ptr [EAX + 0xa],SI         ; 004b36a7
    MOV ECX,dword ptr [EBX + 0x1dd8]    ; 004b36ab
    MOV ESI,dword ptr [EBX + 0x1ddc]    ; 004b36b1
    ADD ECX,0x4                         ; 004b36b7
    ADD ESI,0x6                         ; 004b36ba
    MOV dword ptr [EBX + 0x1dd8],ECX    ; 004b36bd
    MOV EAX,EDX                         ; 004b36c3
    MOV dword ptr [EBX + 0x1ddc],ESI    ; 004b36c5
    SAR EAX,0x2                         ; 004b36cb
    MOV EDX,dword ptr [EBX + 0x41f4]    ; 004b36ce
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x35e8] ; 004b36d4
    ADD EAX,EDX                         ; 004b36db
    ADD EDI,EAX                         ; 004b36dd
    INC dword ptr [ESP + 0x38]          ; 004b36df
    JMP 0x004b3425                      ; 004b36e3
        ;   XREF to: 004b3425 (UNCONDITIONAL_JUMP)  ; LAB_004b3425
    MOV EAX,dword ptr [EBX + 0x1ddc]    ; 004b36e8
        ;   Label: LAB_004b36e8
    ADD EAX,0x6                         ; 004b36ee
    CMP EAX,0x3e8                       ; 004b36f1
    JGE 0x004b34d4                      ; 004b36f6
        ;   XREF to: 004b34d4 (CONDITIONAL_JUMP)  ; LAB_004b34d4
    JMP 0x004b34dd                      ; 004b36fc
        ;   XREF to: 004b34dd (UNCONDITIONAL_JUMP)  ; LAB_004b34dd
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b3701
        ;   Label: LAB_004b3701
    MOV EAX,EDI                         ; 004b3705
    SUB EAX,EBX                         ; 004b3707
    ADD ESP,0x20                        ; 004b3709
    POP EBP                             ; 004b370c
    POP EDI                             ; 004b370d
    POP ESI                             ; 004b370e
    POP EBX                             ; 004b370f
    RET                                 ; 004b3710


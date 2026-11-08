; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ae580(int param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   FUN_004a1d00 at 004a47c0
;   FUN_00500d20 at 00500e70
;   FUN_00502480 at 005025d0
;   FUN_005ae190 at 005ae46d
;
; Referenced Globals:
;   undefined4 s_BnoLightningFlash_005f996d+1
;   TerminatedCString s_light_wav_0_6_005f997f
;   undefined4 DAT_005f9992
;   undefined4 DAT_005f999a
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061c010
;   undefined4 DAT_006236b8
;   undefined4 DAT_01fe5c1c
;
; Called Functions:
;   FUN_0040cc00
;   FUN_00453540
;   FUN_0045f3e0
;   FUN_0045f690
;   FUN_0048f210
;   FUN_0048f230
;   FUN_004a6c30
;   FUN_004b6fe0
;   FUN_0057d8a0
;   FUN_005ae560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae580
        ;   Label: FUN_005ae580
    PUSH ESI                            ; 005ae581
    PUSH EDI                            ; 005ae582
    PUSH EBP                            ; 005ae583
    MOV EBP,ESP                         ; 005ae584
    SUB ESP,0xac                        ; 005ae586
    AND ESP,0xfffffff8                  ; 005ae58c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ae58f
    PUSH 0x41a00000                     ; 005ae592
    PUSH 0x41200000                     ; 005ae597
    CALL FUN_0040cc00                   ; 005ae59c
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xb0],EAX      ; 005ae5a1
    FLD float ptr [ESP + 0xb0]          ; 005ae5a8
    ADD ESP,0x8                         ; 005ae5af
    PUSH dword ptr [EBX + 0x34]         ; 005ae5b2
    PUSH 0x40000000                     ; 005ae5b5
    FSTP float ptr [EBX + 0x20]         ; 005ae5ba
    CALL FUN_0040cc00                   ; 005ae5bd
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xb0],EAX      ; 005ae5c2
    LEA ESI,[ESP + 0x7c]                ; 005ae5c9
    FLD float ptr [ESP + 0xb0]          ; 005ae5cd
    ADD ESP,0x8                         ; 005ae5d4
    MOV dword ptr [EBX + 0x24],0x1      ; 005ae5d7
    MOV EAX,dword ptr [EBP + 0x18]      ; 005ae5de
    LEA EDI,[ESP + 0x44]                ; 005ae5e1
    MOV dword ptr [EBX + 0x28],EAX      ; 005ae5e5
    PUSH 0x1fe5c1c                      ; 005ae5e8 | DAT_01fe5c1c
    FSTP float ptr [EBX + 0x2c]         ; 005ae5ed
    CALL FUN_0048f210                   ; 005ae5f0
        ;   XREF to: 0048f210 (UNCONDITIONAL_CALL)  ; undefined FUN_0048f210()
    LEA ESI,[ESP + 0x78]                ; 005ae5f5
    ADD ESP,0x4                         ; 005ae5f9
    MOVSD ES:EDI,ESI                    ; 005ae5fc
    MOVSD ES:EDI,ESI                    ; 005ae5fd
    MOVSD ES:EDI,ESI                    ; 005ae5fe
    PUSH 0x1fe5c1c                      ; 005ae5ff | DAT_01fe5c1c
    LEA ESI,[ESP + 0x54]                ; 005ae604
    LEA EDI,[ESP + 0x3c]                ; 005ae608
    CALL FUN_0048f230                   ; 005ae60c
        ;   XREF to: 0048f230 (UNCONDITIONAL_CALL)  ; undefined FUN_0048f230()
    LEA ESI,[ESP + 0x54]                ; 005ae611
    ADD ESP,0x4                         ; 005ae615
    MOVSD ES:EDI,ESI                    ; 005ae618
    MOVSD ES:EDI,ESI                    ; 005ae619
    MOVSD ES:EDI,ESI                    ; 005ae61a
    FLD float ptr [ESP + 0x38]          ; 005ae61b
    FSUB float ptr [ESP + 0x44]         ; 005ae61f
    FMUL double ptr [0x005f9992]        ; 005ae623 | DAT_005f9992
    XOR EDX,EDX                         ; 005ae629
    FLDZ                                ; 005ae62b
    MOV dword ptr [ESP + 0xa4],EDX      ; 005ae62d
    FXCH                                ; 005ae634
    FSTP float ptr [ESP + 0x9c]         ; 005ae636
    FCOMP float ptr [ESP + 0x9c]        ; 005ae63d
    FNSTSW AX                           ; 005ae644
    SAHF                                ; 005ae646
    JC 0x005ae7c6                       ; 005ae647
        ;   XREF to: 005ae7c6 (CONDITIONAL_JUMP)  ; LAB_005ae7c6
    FLD float ptr [ESP + 0x3c]          ; 005ae64d
        ;   Label: LAB_005ae64d
    FSUB float ptr [ESP + 0x48]         ; 005ae651
    FST float ptr [ESP + 0x98]          ; 005ae655
    FCOMP float ptr [ESP + 0xa4]        ; 005ae65c
    FNSTSW AX                           ; 005ae663
    SAHF                                ; 005ae665
    JBE 0x005ae676                      ; 005ae666
        ;   XREF to: 005ae676 (CONDITIONAL_JUMP)  ; LAB_005ae676
    MOV EAX,dword ptr [ESP + 0x98]      ; 005ae668
    MOV dword ptr [ESP + 0xa4],EAX      ; 005ae66f
    FLD float ptr [ESP + 0x40]          ; 005ae676
        ;   Label: LAB_005ae676
    FSUB float ptr [ESP + 0x4c]         ; 005ae67a
    FMUL double ptr [0x005f9992]        ; 005ae67e | DAT_005f9992
    FST float ptr [ESP + 0xa0]          ; 005ae684
    FCOMP float ptr [ESP + 0xa4]        ; 005ae68b
    FNSTSW AX                           ; 005ae692
    SAHF                                ; 005ae694
    JBE 0x005ae6a5                      ; 005ae695
        ;   XREF to: 005ae6a5 (CONDITIONAL_JUMP)  ; LAB_005ae6a5
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005ae697
    MOV dword ptr [ESP + 0xa4],EAX      ; 005ae69e
    LEA EAX,[EBX + 0x14]                ; 005ae6a5
        ;   Label: LAB_005ae6a5
    PUSH EAX                            ; 005ae6a8
    LEA EAX,[ESP + 0x8]                 ; 005ae6a9
    PUSH EAX                            ; 005ae6ad
    CALL FUN_0045f3e0                   ; 005ae6ae
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 005ae6b3
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005ae6b6
    LEA ESI,[ESP + 0x68]                ; 005ae6bd
    MOV dword ptr [ESP + 0x64],EAX      ; 005ae6c1
    LEA EAX,[ESP + 0x5c]                ; 005ae6c5
    LEA EDI,[ESP + 0x8c]                ; 005ae6c9
    PUSH EAX                            ; 005ae6d0
    LEA EAX,[ESP + 0x8]                 ; 005ae6d1
    XOR ECX,ECX                         ; 005ae6d5
    PUSH EAX                            ; 005ae6d7
    MOV dword ptr [ESP + 0x64],ECX      ; 005ae6d8
    MOV dword ptr [ESP + 0x68],ECX      ; 005ae6dc
    CALL FUN_0045f690                   ; 005ae6e0
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f690()
    LEA ESI,[ESP + 0x70]                ; 005ae6e5
    ADD ESP,0x8                         ; 005ae6e9
    MOVSD ES:EDI,ESI                    ; 005ae6ec
    MOVSD ES:EDI,ESI                    ; 005ae6ed
    MOVSD ES:EDI,ESI                    ; 005ae6ee
    LEA EAX,[EBX + 0x8]                 ; 005ae6ef
    FLD float ptr [ESP + 0x8c]          ; 005ae6f2
    FLD float ptr [ESP + 0x90]          ; 005ae6f9
    FLD float ptr [ESP + 0x94]          ; 005ae700
    LEA EDI,[ESP + 0x2c]                ; 005ae707
    LEA ESI,[ESP + 0x80]                ; 005ae70b
    FXCH ST2                            ; 005ae712
    FADD float ptr [EAX]                ; 005ae714
    FXCH                                ; 005ae716
    FADD float ptr [EAX + 0x4]          ; 005ae718
    FXCH ST2                            ; 005ae71b
    FADD float ptr [EAX + 0x8]          ; 005ae71d
    FXCH                                ; 005ae720
    FSTP float ptr [ESP + 0x80]         ; 005ae722
    FXCH                                ; 005ae729
    FSTP float ptr [ESP + 0x84]         ; 005ae72b
    FSTP float ptr [ESP + 0x88]         ; 005ae732
    MOVSD ES:EDI,ESI                    ; 005ae739
    MOVSD ES:EDI,ESI                    ; 005ae73a
    MOVSD ES:EDI,ESI                    ; 005ae73b
    LEA EAX,[ESP + 0x2c]                ; 005ae73c
    LEA ESI,[ESP + 0x5c]                ; 005ae740
    CMP ESI,EAX                         ; 005ae744
    JZ 0x005ae760                       ; 005ae746
        ;   XREF to: 005ae760 (CONDITIONAL_JUMP)  ; LAB_005ae760
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005ae748
    MOV dword ptr [ESP + 0x5c],EAX      ; 005ae74c
    MOV EAX,dword ptr [ESP + 0x30]      ; 005ae750
    MOV dword ptr [ESP + 0x60],EAX      ; 005ae754
    MOV EAX,dword ptr [ESP + 0x34]      ; 005ae758
    MOV dword ptr [ESP + 0x64],EAX      ; 005ae75c
    CMP dword ptr [EBP + 0x1c],0x0      ; 005ae760
        ;   Label: LAB_005ae760
    JZ 0x005ae784                       ; 005ae764
        ;   XREF to: 005ae784 (CONDITIONAL_JUMP)  ; LAB_005ae784
    PUSH 0x0                            ; 005ae766
    PUSH 0x0                            ; 005ae768
    LEA EAX,[ESP + 0x64]                ; 005ae76a
    PUSH dword ptr [ESP + 0xac]         ; 005ae76e
    PUSH EAX                            ; 005ae775
    MOV EAX,[0x0061c010]                ; 005ae776 | DAT_0061c010
    PUSH EAX                            ; 005ae77b
    CALL FUN_004b6fe0                   ; 005ae77c
        ;   XREF to: 004b6fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b6fe0()
    ADD ESP,0x14                        ; 005ae781
    CALL FUN_005ae560                   ; 005ae784
        ;   XREF to: 005ae560 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae560()
        ;   Label: LAB_005ae784
    PUSH 0x5f996e                       ; 005ae789 | s_BnoLightningFlash_005f996d+1
    MOV dword ptr [ESP + 0xac],EAX      ; 005ae78e
    MOV EDX,dword ptr [0x0061b4d0]      ; 005ae795 | DAT_0061b4d0
    MOV EAX,dword ptr [ESP + 0xac]      ; 005ae79b
    MOV dword ptr [EBX + 0x30],EAX      ; 005ae7a2
    MOV EAX,dword ptr [EBX + 0x30]      ; 005ae7a5
    PUSH EDX                            ; 005ae7a8
    MOV dword ptr [ESP + 0x8],EAX       ; 005ae7a9
    CALL FUN_004a6c30                   ; 005ae7ad
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 005ae7b2
    TEST EAX,EAX                        ; 005ae7b5
    JZ 0x005ae7d9                       ; 005ae7b7
        ;   XREF to: 005ae7d9 (CONDITIONAL_JUMP)  ; LAB_005ae7d9
    CMP dword ptr [EBP + 0x1c],0x0      ; 005ae7b9
    JNZ 0x005ae812                      ; 005ae7bd
        ;   XREF to: 005ae812 (CONDITIONAL_JUMP)  ; LAB_005ae812
    MOV ESP,EBP                         ; 005ae7bf
    POP EBP                             ; 005ae7c1
    POP EDI                             ; 005ae7c2
    POP ESI                             ; 005ae7c3
    POP EBX                             ; 005ae7c4
    RET                                 ; 005ae7c5
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005ae7c6
        ;   Label: LAB_005ae7c6
    MOV dword ptr [ESP + 0xa4],EAX      ; 005ae7cd
    JMP 0x005ae64d                      ; 005ae7d4
        ;   XREF to: 005ae64d (UNCONDITIONAL_JUMP)  ; LAB_005ae64d
    FLD float ptr [ESP]                 ; 005ae7d9
        ;   Label: LAB_005ae7d9
    FADD float ptr [0x005f999a]         ; 005ae7dc | DAT_005f999a
    FST float ptr [ESP]                 ; 005ae7e2
    FLD1                                ; 005ae7e5
    FCOMPP                              ; 005ae7e7
    FNSTSW AX                           ; 005ae7e9
    SAHF                                ; 005ae7eb
    JNC 0x005ae7f5                      ; 005ae7ec
        ;   XREF to: 005ae7f5 (CONDITIONAL_JUMP)  ; LAB_005ae7f5
    MOV dword ptr [ESP],0x3f800000      ; 005ae7ee
    PUSH dword ptr [ESP]                ; 005ae7f5
        ;   Label: LAB_005ae7f5
    PUSH 0x1fe37ec                      ; 005ae7f8
    CALL FUN_00453540                   ; 005ae7fd
        ;   XREF to: 00453540 (UNCONDITIONAL_CALL)  ; undefined FUN_00453540()
    ADD ESP,0x8                         ; 005ae802
    CMP dword ptr [EBP + 0x1c],0x0      ; 005ae805
    JNZ 0x005ae812                      ; 005ae809
        ;   XREF to: 005ae812 (CONDITIONAL_JUMP)  ; LAB_005ae812
    MOV ESP,EBP                         ; 005ae80b
    POP EBP                             ; 005ae80d
    POP EDI                             ; 005ae80e
    POP ESI                             ; 005ae80f
    POP EBX                             ; 005ae810
    RET                                 ; 005ae811
    LEA EAX,[ESP + 0x5c]                ; 005ae812
        ;   Label: LAB_005ae812
    PUSH EAX                            ; 005ae816
    PUSH 0x5f997f                       ; 005ae817 | = "light?.wav @ 0.6"
    PUSH EBX                            ; 005ae81c
    MOV EDI,dword ptr [0x006236b8]      ; 005ae81d | DAT_006236b8
    PUSH EDI                            ; 005ae823
    CALL FUN_0057d8a0                   ; 005ae824
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d8a0()
    ADD ESP,0x10                        ; 005ae829
    MOV ESP,EBP                         ; 005ae82c
    POP EBP                             ; 005ae82e
    POP EDI                             ; 005ae82f
    POP ESI                             ; 005ae830
    POP EBX                             ; 005ae831
    RET                                 ; 005ae832


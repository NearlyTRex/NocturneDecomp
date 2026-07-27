; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a500(int param_1,float *param_2,int param_3)
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
; XREF[2]:
;   core_scat.cpp_FUN_004fcd90 at 004fce41
;   core_stranger.cpp_FUN_0053f310 at 0053f434
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_0057a386
;   TerminatedCString s_CCharacter_advanceLayerA_0057a39b
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a500
        ;   Label: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a500
    PUSH ESI                            ; 0042a501
    PUSH EDI                            ; 0042a502
    PUSH EBP                            ; 0042a503
    SUB ESP,0x20                        ; 0042a504
    MOV EBX,dword ptr [ESP + 0x34]      ; 0042a507
    MOV ESI,dword ptr [ESP + 0x38]      ; 0042a50b
    MOV EDX,dword ptr [EBX + 0x2a84]    ; 0042a50f
    TEST EDX,EDX                        ; 0042a515
    JL 0x0042a521                       ; 0042a517
        ;   XREF to: 0042a521 (CONDITIONAL_JUMP)  ; LAB_0042a521
    CMP EDX,dword ptr [EBX + 0x2620]    ; 0042a519
    JL 0x0042a544                       ; 0042a51f
        ;   XREF to: 0042a544 (CONDITIONAL_JUMP)  ; LAB_0042a544
    MOV EDI,0x57a386                    ; 0042a521 | = "..\\core\\charactr.cpp"
        ;   Label: LAB_0042a521
    MOV EBP,0xf00                       ; 0042a526
    PUSH 0x57a39b                       ; 0042a52b | = "CCharacter::advanceLayerAction - inva..."
    MOV dword ptr [0x01cc4800],EDI      ; 0042a530 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0042a536 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0042a53c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0042a541
    MOV EAX,dword ptr [EBX + 0x2a84]    ; 0042a544
        ;   Label: LAB_0042a544
    SHL EAX,0x3                         ; 0042a54a
    FLD float ptr [EBX + 0x2a88]        ; 0042a54d
    MOV EDX,EAX                         ; 0042a553
    SHL EAX,0x3                         ; 0042a555
    LEA ECX,[EBX + 0x2624]              ; 0042a558
    SUB EAX,EDX                         ; 0042a55e
    FLDZ                                ; 0042a560
    ADD ECX,EAX                         ; 0042a562
    FCOMPP                              ; 0042a564
    FNSTSW AX                           ; 0042a566
    SAHF                                ; 0042a568
    JBE 0x0042a575                      ; 0042a569
        ;   XREF to: 0042a575 (CONDITIONAL_JUMP)  ; LAB_0042a575
    MOV dword ptr [EBX + 0x2a88],0x0    ; 0042a56b
    FLD float ptr [EBX + 0x2a88]        ; 0042a575
        ;   Label: LAB_0042a575
    FLD1                                ; 0042a57b
    FCOMPP                              ; 0042a57d
    FNSTSW AX                           ; 0042a57f
    SAHF                                ; 0042a581
    JNC 0x0042a58e                      ; 0042a582
        ;   XREF to: 0042a58e (CONDITIONAL_JUMP)  ; LAB_0042a58e
    MOV dword ptr [EBX + 0x2a88],0x3f800000 ; 0042a584
    FLD float ptr [EBX + 0x2a88]        ; 0042a58e
        ;   Label: LAB_0042a58e
    FLD ST0                             ; 0042a594
    FLD1                                ; 0042a596
    FSUBRP ST2,ST0                      ; 0042a598
    FMUL float ptr [ECX + 0x34]         ; 0042a59a
    FLD float ptr [ECX + 0x34]          ; 0042a59d
    FMULP ST2                           ; 0042a5a0
    MOV EDX,dword ptr [ECX + 0x28]      ; 0042a5a2
    FSTP float ptr [ESP + 0x14]         ; 0042a5a5
    FSTP float ptr [ESP + 0xc]          ; 0042a5a9
    TEST EDX,EDX                        ; 0042a5ad
    JNZ 0x0042a616                      ; 0042a5af
        ;   XREF to: 0042a616 (CONDITIONAL_JUMP)  ; LAB_0042a616
    MOV EDX,dword ptr [ECX + 0x4]       ; 0042a5b1
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042a5b4
    ADD EAX,EDX                         ; 0042a5bb
    SHL EAX,0x4                         ; 0042a5bd
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0042a5c0
    ADD EAX,EBX                         ; 0042a5c4
    MOV EAX,dword ptr [EAX + EDI*0x4 + 0xb64c] ; 0042a5c6
    MOV EDX,dword ptr [ECX]             ; 0042a5cd
    MOV dword ptr [ESP + 0x4],EAX       ; 0042a5cf
    LEA EAX,[EDX*0x4 + 0x0]             ; 0042a5d3
    ADD EAX,EDX                         ; 0042a5da
    SHL EAX,0x4                         ; 0042a5dc
    ADD EAX,EBX                         ; 0042a5df
    MOV EAX,dword ptr [EAX + EDI*0x4 + 0xb64c] ; 0042a5e1
    FLD float ptr [ESP + 0x4]           ; 0042a5e8
    MOV dword ptr [ESP + 0x8],EAX       ; 0042a5ec
    FADD float ptr [ESP + 0xc]          ; 0042a5f0
    FLD float ptr [ESP + 0x8]           ; 0042a5f4
    FADD float ptr [ESP + 0x14]         ; 0042a5f8
    FXCH                                ; 0042a5fc
    FSTP float ptr [ESP]                ; 0042a5fe
    FST float ptr [ESP + 0x10]          ; 0042a601
    FCOMP float ptr [ESP]               ; 0042a605
    FNSTSW AX                           ; 0042a608
    SAHF                                ; 0042a60a
    JNC 0x0042a68d                      ; 0042a60b
        ;   XREF to: 0042a68d (CONDITIONAL_JUMP)  ; LAB_0042a68d
    MOV EDX,0xffffffff                  ; 0042a611
        ;   Label: LAB_0042a611
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042a616
        ;   Label: LAB_0042a616
    MOV dword ptr [ESP + 0x18],EAX      ; 0042a61a
    TEST EDX,EDX                        ; 0042a61e
    JL 0x0042a6be                       ; 0042a620
        ;   XREF to: 0042a6be (CONDITIONAL_JUMP)  ; LAB_0042a6be
    FLD float ptr [ESI]                 ; 0042a626
        ;   Label: LAB_0042a626
    FCOMP float ptr [ESP + 0x18]        ; 0042a628
    FNSTSW AX                           ; 0042a62c
    SAHF                                ; 0042a62e
    JNC 0x0042a6cb                      ; 0042a62f
        ;   XREF to: 0042a6cb (CONDITIONAL_JUMP)  ; LAB_0042a6cb
    MOV dword ptr [ESP + 0x1c],EDX      ; 0042a635
    FILD dword ptr [ESP + 0x1c]         ; 0042a639
    FMUL float ptr [ESI]                ; 0042a63d
    FDIV float ptr [ECX + 0x34]         ; 0042a63f
    FADD float ptr [EBX + 0x2a88]       ; 0042a642
    FST float ptr [EBX + 0x2a88]        ; 0042a648
    FLDZ                                ; 0042a64e
    FCOMPP                              ; 0042a650
    FNSTSW AX                           ; 0042a652
    SAHF                                ; 0042a654
    JBE 0x0042a661                      ; 0042a655
        ;   XREF to: 0042a661 (CONDITIONAL_JUMP)  ; LAB_0042a661
    MOV dword ptr [EBX + 0x2a88],0x0    ; 0042a657
    FLD float ptr [EBX + 0x2a88]        ; 0042a661
        ;   Label: LAB_0042a661
    FLD1                                ; 0042a667
    FCOMPP                              ; 0042a669
    FNSTSW AX                           ; 0042a66b
    SAHF                                ; 0042a66d
    JNC 0x0042a67a                      ; 0042a66e
        ;   XREF to: 0042a67a (CONDITIONAL_JUMP)  ; LAB_0042a67a
    MOV dword ptr [EBX + 0x2a88],0x3f800000 ; 0042a670
    MOV EAX,0xffffffff                  ; 0042a67a
        ;   Label: LAB_0042a67a
    MOV dword ptr [ESI],0x0             ; 0042a67f
    ADD ESP,0x20                        ; 0042a685
    POP EBP                             ; 0042a688
    POP EDI                             ; 0042a689
    POP ESI                             ; 0042a68a
    POP EBX                             ; 0042a68b
    RET                                 ; 0042a68c
    FLD float ptr [ESP]                 ; 0042a68d
        ;   Label: LAB_0042a68d
    FCOMP float ptr [ESP + 0x10]        ; 0042a690
    FNSTSW AX                           ; 0042a694
    SAHF                                ; 0042a696
    JNC 0x0042a6a3                      ; 0042a697
        ;   XREF to: 0042a6a3 (CONDITIONAL_JUMP)  ; LAB_0042a6a3
    MOV EDX,0x1                         ; 0042a699
    JMP 0x0042a616                      ; 0042a69e
        ;   XREF to: 0042a616 (UNCONDITIONAL_JUMP)  ; LAB_0042a616
    FLD float ptr [ESP + 0x8]           ; 0042a6a3
        ;   Label: LAB_0042a6a3
    FCOMP float ptr [ESP + 0x4]         ; 0042a6a7
    FNSTSW AX                           ; 0042a6ab
    SAHF                                ; 0042a6ad
    JC 0x0042a611                       ; 0042a6ae
        ;   XREF to: 0042a611 (CONDITIONAL_JUMP)  ; LAB_0042a611
    MOV EDX,0x1                         ; 0042a6b4
    JMP 0x0042a616                      ; 0042a6b9
        ;   XREF to: 0042a616 (UNCONDITIONAL_JUMP)  ; LAB_0042a616
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042a6be
        ;   Label: LAB_0042a6be
    MOV dword ptr [ESP + 0x18],EAX      ; 0042a6c2
    JMP 0x0042a626                      ; 0042a6c6
        ;   XREF to: 0042a626 (UNCONDITIONAL_JUMP)  ; LAB_0042a626
    FLD float ptr [ESI]                 ; 0042a6cb
        ;   Label: LAB_0042a6cb
    FSUB float ptr [ESP + 0x18]         ; 0042a6cd
    FSTP float ptr [ESI]                ; 0042a6d1
    TEST EDX,EDX                        ; 0042a6d3
    JL 0x0042a6ec                       ; 0042a6d5
        ;   XREF to: 0042a6ec (CONDITIONAL_JUMP)  ; LAB_0042a6ec
    MOV EAX,dword ptr [ECX + 0x4]       ; 0042a6d7
    MOV dword ptr [EBX + 0x2a88],0x3f800000 ; 0042a6da
    ADD ESP,0x20                        ; 0042a6e4
    POP EBP                             ; 0042a6e7
    POP EDI                             ; 0042a6e8
    POP ESI                             ; 0042a6e9
    POP EBX                             ; 0042a6ea
    RET                                 ; 0042a6eb
    MOV EAX,dword ptr [ECX]             ; 0042a6ec
        ;   Label: LAB_0042a6ec
    MOV dword ptr [EBX + 0x2a88],0x0    ; 0042a6ee
    ADD ESP,0x20                        ; 0042a6f8
    POP EBP                             ; 0042a6fb
    POP EDI                             ; 0042a6fc
    POP ESI                             ; 0042a6fd
    POP EBX                             ; 0042a6fe
    RET                                 ; 0042a6ff


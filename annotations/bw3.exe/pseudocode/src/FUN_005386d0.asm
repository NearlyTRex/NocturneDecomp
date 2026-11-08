; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005386d0(undefined4 param_1,float *param_2,float *param_3,int param_4)
;
;
; XREF[1]:
;   FUN_005787f0 at 00578951
;
; Referenced Globals:
;   undefined4 DAT_005d06af
;   undefined4 DAT_01d1a0a4
;   undefined4 DAT_0203b3e8
;
; Called Functions:
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005386d0
        ;   Label: FUN_005386d0
    PUSH ESI                            ; 005386d1
    PUSH EDI                            ; 005386d2
    PUSH EBP                            ; 005386d3
    MOV EBP,ESP                         ; 005386d4
    SUB ESP,0x4c                        ; 005386d6
    AND ESP,0xfffffff8                  ; 005386d9
    MOV EDX,dword ptr [EBP + 0x18]      ; 005386dc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005386df
    FLD float ptr [EDX]                 ; 005386e2
    FLD float ptr [EDX + 0x4]           ; 005386e4
    FLD float ptr [EDX + 0x8]           ; 005386e7
    LEA EDI,[ESP + 0x18]                ; 005386ea
    XOR ECX,ECX                         ; 005386ee
    LEA ESI,[ESP + 0x24]                ; 005386f0
    MOV dword ptr [ESP],ECX             ; 005386f4
    FXCH ST2                            ; 005386f7
    FADD float ptr [EAX]                ; 005386f9
    FXCH                                ; 005386fb
    FADD float ptr [EAX + 0x4]          ; 005386fd
    FXCH ST2                            ; 00538700
    FADD float ptr [EAX + 0x8]          ; 00538702
    FXCH                                ; 00538705
    FSTP float ptr [ESP + 0x24]         ; 00538707
    FXCH                                ; 0053870b
    FSTP float ptr [ESP + 0x28]         ; 0053870d
    FSTP float ptr [ESP + 0x2c]         ; 00538711
    MOVSD ES:EDI,ESI                    ; 00538715
    MOVSD ES:EDI,ESI                    ; 00538716
    MOVSD ES:EDI,ESI                    ; 00538717
    MOV dword ptr [ESP + 0x8],ECX       ; 00538718
    MOV EDI,dword ptr [0x0203b3e8]      ; 0053871c | DAT_0203b3e8
    MOV dword ptr [ESP + 0x4],ECX       ; 00538722
    TEST EDI,EDI                        ; 00538726
    JLE 0x0053874e                      ; 00538728
        ;   XREF to: 0053874e (CONDITIONAL_JUMP)  ; LAB_0053874e
    LEA EBX,[EDI*0x4 + 0x0]             ; 0053872a
    MOV EDX,dword ptr [ECX + 0x203b3ec] ; 00538731
        ;   Label: LAB_00538731
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 00538737
    JNZ 0x00538809                      ; 00538741
        ;   XREF to: 00538809 (CONDITIONAL_JUMP)  ; LAB_00538809
    ADD ECX,0x4                         ; 00538747
        ;   Label: LAB_00538747
    CMP ECX,EBX                         ; 0053874a
    JL 0x00538731                       ; 0053874c
        ;   XREF to: 00538731 (CONDITIONAL_JUMP)  ; LAB_00538731
    CMP dword ptr [0x0203b3e8],0x0      ; 0053874e | DAT_0203b3e8
        ;   Label: LAB_0053874e
    JNZ 0x00538767                      ; 00538755
        ;   XREF to: 00538767 (CONDITIONAL_JUMP)  ; LAB_00538767
    MOV EDX,0x43000000                  ; 00538757
    MOV dword ptr [ESP],EDX             ; 0053875c
    MOV dword ptr [ESP + 0x8],EDX       ; 0053875f
    MOV dword ptr [ESP + 0x4],EDX       ; 00538763
    MOV EDX,dword ptr [EBP + 0x20]      ; 00538767
        ;   Label: LAB_00538767
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053876a
    SUB EAX,EDX                         ; 00538771
    MOV EBX,0x60b014                    ; 00538773
    SHL EAX,0x4                         ; 00538778
    FLD float ptr [ESP + 0x4]           ; 0053877b
    ADD EBX,EAX                         ; 0053877f
    FCOMP double ptr [0x005d06af]       ; 00538781 | DAT_005d06af
    FNSTSW AX                           ; 00538787
    SAHF                                ; 00538789
    JBE 0x00538794                      ; 0053878a
        ;   XREF to: 00538794 (CONDITIONAL_JUMP)  ; LAB_00538794
    MOV dword ptr [ESP + 0x4],0x437f0000 ; 0053878c
    FLD float ptr [ESP]                 ; 00538794
        ;   Label: LAB_00538794
    FCOMP double ptr [0x005d06af]       ; 00538797 | DAT_005d06af
    FNSTSW AX                           ; 0053879d
    SAHF                                ; 0053879f
    JBE 0x005387a9                      ; 005387a0
        ;   XREF to: 005387a9 (CONDITIONAL_JUMP)  ; LAB_005387a9
    MOV dword ptr [ESP],0x437f0000      ; 005387a2
    FLD float ptr [ESP + 0x8]           ; 005387a9
        ;   Label: LAB_005387a9
    FCOMP double ptr [0x005d06af]       ; 005387ad | DAT_005d06af
    FNSTSW AX                           ; 005387b3
    SAHF                                ; 005387b5
    JA 0x005388ce                       ; 005387b6
        ;   XREF to: 005388ce (CONDITIONAL_JUMP)  ; LAB_005388ce
    FLD float ptr [ESP + 0x4]           ; 005387bc
        ;   Label: LAB_005387bc
    FLD float ptr [ESP]                 ; 005387c0
    FLD float ptr [ESP + 0x8]           ; 005387c3
    FXCH ST2                            ; 005387c7
    CALL FUN_005a3120                   ; 005387c9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x40]        ; 005387ce
    MOV EAX,dword ptr [ESP + 0x40]      ; 005387d2
    CALL FUN_005a3120                   ; 005387d6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    SHL EAX,0x8                         ; 005387db
    FISTP dword ptr [ESP + 0x40]        ; 005387de
    MOV dword ptr [EBX + 0x20],EAX      ; 005387e2
    MOV EAX,dword ptr [ESP + 0x40]      ; 005387e5
    CALL FUN_005a3120                   ; 005387e9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    SHL EAX,0x8                         ; 005387ee
    FISTP dword ptr [ESP + 0x40]        ; 005387f1
    MOV dword ptr [EBX + 0x24],EAX      ; 005387f5
    MOV EAX,dword ptr [ESP + 0x40]      ; 005387f8
    SHL EAX,0x8                         ; 005387fc
    MOV dword ptr [EBX + 0x28],EAX      ; 005387ff
    MOV ESP,EBP                         ; 00538802
    POP EBP                             ; 00538804
    POP EDI                             ; 00538805
    POP ESI                             ; 00538806
    POP EBX                             ; 00538807
    RET                                 ; 00538808
    LEA EAX,[EDX + 0x104]               ; 00538809
        ;   Label: LAB_00538809
    LEA EDI,[ESP + 0xc]                 ; 0053880f
    LEA ESI,[ESP + 0x30]                ; 00538813
    FLD float ptr [EAX]                 ; 00538817
    FLD float ptr [EAX + 0x4]           ; 00538819
    FLD float ptr [EAX + 0x8]           ; 0053881c
    FXCH ST2                            ; 0053881f
    FSUB float ptr [ESP + 0x18]         ; 00538821
    FXCH                                ; 00538825
    FSUB float ptr [ESP + 0x1c]         ; 00538827
    FXCH ST2                            ; 0053882b
    FSUB float ptr [ESP + 0x20]         ; 0053882d
    FXCH                                ; 00538831
    FSTP float ptr [ESP + 0x30]         ; 00538833
    FXCH                                ; 00538837
    FSTP float ptr [ESP + 0x34]         ; 00538839
    FSTP float ptr [ESP + 0x38]         ; 0053883d
    MOVSD ES:EDI,ESI                    ; 00538841
    MOVSD ES:EDI,ESI                    ; 00538842
    MOVSD ES:EDI,ESI                    ; 00538843
    FLD float ptr [ESP + 0x10]          ; 00538844
    FMUL ST0                            ; 00538848
    FLD float ptr [ESP + 0xc]           ; 0053884a
    FMUL ST0                            ; 0053884e
    FADDP                               ; 00538850
    FLD float ptr [ESP + 0x14]          ; 00538852
    FMUL ST0                            ; 00538856
    FADDP                               ; 00538858
    FSTP float ptr [ESP + 0x48]         ; 0053885a
    MOV EAX,dword ptr [ESP + 0x48]      ; 0053885e
    MOV EDI,dword ptr [0x01d1a0a4]      ; 00538862 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00538868
    ADD EAX,EDI                         ; 0053886a
    MOV dword ptr [ESP + 0x44],EAX      ; 0053886c
    FLD float ptr [ESP + 0x44]          ; 00538870
    FCOMP float ptr [EDX + 0x11d4]      ; 00538874
    FNSTSW AX                           ; 0053887a
    SAHF                                ; 0053887c
    JA 0x00538747                       ; 0053887d
        ;   XREF to: 00538747 (CONDITIONAL_JUMP)  ; LAB_00538747
    FLD float ptr [ESP + 0x44]          ; 00538883
    FDIV float ptr [EDX + 0x11d4]       ; 00538887
    FLD float ptr [EDX + 0x11c4]        ; 0053888d
    FLD1                                ; 00538893
    FSUBRP ST2,ST0                      ; 00538895
    FMUL ST1                            ; 00538897
    FLD float ptr [EDX + 0x11c8]        ; 00538899
    FMUL ST2                            ; 0053889f
    FLD float ptr [EDX + 0x11cc]        ; 005388a1
    FMULP ST3                           ; 005388a7
    FXCH                                ; 005388a9
    FADD float ptr [ESP + 0x4]          ; 005388ab
    FXCH                                ; 005388af
    FADD float ptr [ESP]                ; 005388b1
    FXCH ST2                            ; 005388b4
    FADD float ptr [ESP + 0x8]          ; 005388b6
    FXCH                                ; 005388ba
    FSTP float ptr [ESP + 0x4]          ; 005388bc
    FXCH                                ; 005388c0
    FSTP float ptr [ESP]                ; 005388c2
    FSTP float ptr [ESP + 0x8]          ; 005388c5
    JMP 0x00538747                      ; 005388c9
        ;   XREF to: 00538747 (UNCONDITIONAL_JUMP)  ; LAB_00538747
    MOV dword ptr [ESP + 0x8],0x437f0000 ; 005388ce
        ;   Label: LAB_005388ce
    JMP 0x005387bc                      ; 005388d6
        ;   XREF to: 005387bc (UNCONDITIONAL_JUMP)  ; LAB_005387bc


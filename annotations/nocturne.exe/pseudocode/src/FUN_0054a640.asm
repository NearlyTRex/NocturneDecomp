; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0054a640(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_0054a110 at 0054a5dd
;   FUN_0054a920 at 0054a984
;
; Referenced Globals:
;   undefined4 DAT_00596ea5
;   undefined4 DAT_00596ead
;   undefined4 DAT_005a379c
;   undefined4 DAT_005a37a0
;
; Called Functions:
;   FUN_0040a000
;   FUN_0040df00
;   FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a640
        ;   Label: FUN_0054a640
    PUSH EBP                            ; 0054a641
    MOV EBP,ESP                         ; 0054a642
    SUB ESP,0x30                        ; 0054a644
    AND ESP,0xfffffff8                  ; 0054a647
    MOV EBX,dword ptr [EBP + 0xc]       ; 0054a64a
    MOV EDX,dword ptr [EBP + 0x10]      ; 0054a64d
    LEA EAX,[EBX + 0x20]                ; 0054a650
    FLD float ptr [EDX]                 ; 0054a653
    FSUB float ptr [EAX]                ; 0054a655
    FSTP float ptr [ESP + 0x14]         ; 0054a657
    FLD float ptr [EDX + 0x4]           ; 0054a65b
    FSUB float ptr [EAX + 0x4]          ; 0054a65e
    FSTP float ptr [ESP + 0x18]         ; 0054a661
    FLD float ptr [EDX + 0x8]           ; 0054a665
    FSUB float ptr [EAX + 0x8]          ; 0054a668
    LEA EAX,[ESP + 0x14]                ; 0054a66b
    PUSH EAX                            ; 0054a66f
    LEA EAX,[ESP + 0xc]                 ; 0054a670
    PUSH EAX                            ; 0054a674
    FSTP float ptr [ESP + 0x24]         ; 0054a675
    CALL FUN_0054e4a0                   ; 0054a679
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e4a0()
    ADD ESP,0x8                         ; 0054a67e
    FLD float ptr [ESP + 0x8]           ; 0054a681
    FCOMP float ptr [0x005a379c]        ; 0054a685 | DAT_005a379c
    FNSTSW AX                           ; 0054a68b
    SAHF                                ; 0054a68d
    JC 0x0054a7e2                       ; 0054a68e
        ;   XREF to: 0054a7e2 (CONDITIONAL_JUMP)  ; LAB_0054a7e2
    FLD float ptr [ESP + 0x8]           ; 0054a694
        ;   Label: LAB_0054a694
    FCOMP float ptr [0x005a37a0]        ; 0054a698 | DAT_005a37a0
    FNSTSW AX                           ; 0054a69e
    SAHF                                ; 0054a6a0
    JBE 0x0054a6ac                      ; 0054a6a1
        ;   XREF to: 0054a6ac (CONDITIONAL_JUMP)  ; LAB_0054a6ac
    MOV EAX,[0x005a37a0]                ; 0054a6a3 | DAT_005a37a0
    MOV dword ptr [ESP + 0x8],EAX       ; 0054a6a8
    FLD float ptr [ESP + 0xc]           ; 0054a6ac
        ;   Label: LAB_0054a6ac
    FSUB float ptr [EBX + 0x34]         ; 0054a6b0
    SUB ESP,0x4                         ; 0054a6b3
    FSTP float ptr [ESP]                ; 0054a6b6
    CALL FUN_0040df00                   ; 0054a6b9
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040df00()
    MOV dword ptr [ESP + 0x30],EAX      ; 0054a6be
    FLD float ptr [ESP + 0x30]          ; 0054a6c2
    ADD ESP,0x4                         ; 0054a6c6
    FLD float ptr [ESP + 0x8]           ; 0054a6c9
    FXCH                                ; 0054a6cd
    FSTP float ptr [ESP + 0x4]          ; 0054a6cf
    FSUB float ptr [EBX + 0x30]         ; 0054a6d3
    SUB ESP,0x4                         ; 0054a6d6
    FSTP float ptr [ESP]                ; 0054a6d9
    CALL FUN_0040df00                   ; 0054a6dc
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040df00()
    FLD float ptr [EBX + 0x770]         ; 0054a6e1
    MOV dword ptr [ESP + 0x30],EAX      ; 0054a6e7
    FMUL double ptr [0x00596ea5]        ; 0054a6eb | DAT_00596ea5
    FLD float ptr [ESP + 0x30]          ; 0054a6f1
    ADD ESP,0x4                         ; 0054a6f5
    FLD float ptr [EBP + 0x14]          ; 0054a6f8
    FMULP ST2                           ; 0054a6fb
    FLD float ptr [ESP + 0x4]           ; 0054a6fd
    FXCH                                ; 0054a701
    FSTP float ptr [ESP]                ; 0054a703
    FXCH                                ; 0054a706
    FST float ptr [ESP + 0x28]          ; 0054a708
    FCHS                                ; 0054a70c
    FSTP float ptr [ESP + 0x20]         ; 0054a70e
    FCOMP float ptr [ESP + 0x20]        ; 0054a712
    FNSTSW AX                           ; 0054a716
    SAHF                                ; 0054a718
    JNC 0x0054a723                      ; 0054a719
        ;   XREF to: 0054a723 (CONDITIONAL_JUMP)  ; LAB_0054a723
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054a71b
    MOV dword ptr [ESP + 0x4],EAX       ; 0054a71f
    FLD float ptr [ESP + 0x4]           ; 0054a723
        ;   Label: LAB_0054a723
    FCOMP float ptr [ESP + 0x28]        ; 0054a727
    FNSTSW AX                           ; 0054a72b
    SAHF                                ; 0054a72d
    JBE 0x0054a738                      ; 0054a72e
        ;   XREF to: 0054a738 (CONDITIONAL_JUMP)  ; LAB_0054a738
    MOV EAX,dword ptr [ESP + 0x28]      ; 0054a730
    MOV dword ptr [ESP + 0x4],EAX       ; 0054a734
    FLD float ptr [ESP]                 ; 0054a738
        ;   Label: LAB_0054a738
    FLD float ptr [ESP + 0x28]          ; 0054a73b
    FCHS                                ; 0054a73f
    FSTP float ptr [ESP + 0x24]         ; 0054a741
    FCOMP float ptr [ESP + 0x24]        ; 0054a745
    FNSTSW AX                           ; 0054a749
    SAHF                                ; 0054a74b
    JNC 0x0054a755                      ; 0054a74c
        ;   XREF to: 0054a755 (CONDITIONAL_JUMP)  ; LAB_0054a755
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054a74e
    MOV dword ptr [ESP],EAX             ; 0054a752
    FLD float ptr [ESP]                 ; 0054a755
        ;   Label: LAB_0054a755
    FCOMP float ptr [ESP + 0x28]        ; 0054a758
    FNSTSW AX                           ; 0054a75c
    SAHF                                ; 0054a75e
    JBE 0x0054a768                      ; 0054a75f
        ;   XREF to: 0054a768 (CONDITIONAL_JUMP)  ; LAB_0054a768
    MOV EAX,dword ptr [ESP + 0x28]      ; 0054a761
    MOV dword ptr [ESP],EAX             ; 0054a765
    FLD float ptr [EBX + 0x34]          ; 0054a768
        ;   Label: LAB_0054a768
    FLD float ptr [EBX + 0x30]          ; 0054a76b
    PUSH EBX                            ; 0054a76e
    FXCH                                ; 0054a76f
    FADD float ptr [ESP + 0x8]          ; 0054a771
    FXCH                                ; 0054a775
    FADD float ptr [ESP + 0x4]          ; 0054a777
    FXCH                                ; 0054a77b
    FSTP float ptr [EBX + 0x34]         ; 0054a77d
    FSTP float ptr [EBX + 0x30]         ; 0054a780
    CALL FUN_0040a000                   ; 0054a783
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a000()
    ADD ESP,0x4                         ; 0054a788
    FLD float ptr [ESP + 0x4]           ; 0054a78b
    FCOMP double ptr [0x00596ead]       ; 0054a78f | DAT_00596ead
    FNSTSW AX                           ; 0054a795
    SAHF                                ; 0054a797
    JNC 0x0054a7f0                      ; 0054a798
        ;   XREF to: 0054a7f0 (CONDITIONAL_JUMP)  ; LAB_0054a7f0
    MOV EAX,0x1                         ; 0054a79a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0054a79f
        ;   Label: LAB_0054a79f
    FILD dword ptr [ESP + 0x2c]         ; 0054a7a3
    FABS                                ; 0054a7a7
    FLDZ                                ; 0054a7a9
    FCOMPP                              ; 0054a7ab
    FNSTSW AX                           ; 0054a7ad
    SAHF                                ; 0054a7af
    JZ 0x0054a7f8                       ; 0054a7b0
        ;   XREF to: 0054a7f8 (CONDITIONAL_JUMP)  ; LAB_0054a7f8
    FLD float ptr [ESP]                 ; 0054a7b2
    FCOMP double ptr [0x00596ead]       ; 0054a7b5 | DAT_00596ead
    FNSTSW AX                           ; 0054a7bb
    SAHF                                ; 0054a7bd
    JNC 0x0054a7f4                      ; 0054a7be
        ;   XREF to: 0054a7f4 (CONDITIONAL_JUMP)  ; LAB_0054a7f4
    MOV EAX,0x1                         ; 0054a7c0
    MOV dword ptr [ESP + 0x2c],EAX      ; 0054a7c5
        ;   Label: LAB_0054a7c5
    FILD dword ptr [ESP + 0x2c]         ; 0054a7c9
    FABS                                ; 0054a7cd
    FLDZ                                ; 0054a7cf
    FCOMPP                              ; 0054a7d1
    FNSTSW AX                           ; 0054a7d3
    SAHF                                ; 0054a7d5
    JZ 0x0054a7f8                       ; 0054a7d6
        ;   XREF to: 0054a7f8 (CONDITIONAL_JUMP)  ; LAB_0054a7f8
    MOV EAX,0x1                         ; 0054a7d8
    MOV ESP,EBP                         ; 0054a7dd
    POP EBP                             ; 0054a7df
    POP EBX                             ; 0054a7e0
    RET                                 ; 0054a7e1
    MOV EAX,[0x005a379c]                ; 0054a7e2 | DAT_005a379c
        ;   Label: LAB_0054a7e2
    MOV dword ptr [ESP + 0x8],EAX       ; 0054a7e7
    JMP 0x0054a694                      ; 0054a7eb
        ;   XREF to: 0054a694 (UNCONDITIONAL_JUMP)  ; LAB_0054a694
    XOR EAX,EAX                         ; 0054a7f0
        ;   Label: LAB_0054a7f0
    JMP 0x0054a79f                      ; 0054a7f2
        ;   XREF to: 0054a79f (UNCONDITIONAL_JUMP)  ; LAB_0054a79f
    XOR EAX,EAX                         ; 0054a7f4
        ;   Label: LAB_0054a7f4
    JMP 0x0054a7c5                      ; 0054a7f6
        ;   XREF to: 0054a7c5 (UNCONDITIONAL_JUMP)  ; LAB_0054a7c5
    XOR EAX,EAX                         ; 0054a7f8
        ;   Label: LAB_0054a7f8
    MOV ESP,EBP                         ; 0054a7fa
    POP EBP                             ; 0054a7fc
    POP EBX                             ; 0054a7fd
    RET                                 ; 0054a7fe


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004549e0(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   FUN_00457740 at 00457ee0
;
; Referenced Globals:
;   undefined4 DAT_005ba3a2
;   undefined4 DAT_005ba3aa
;   undefined4 DAT_005ba3b2
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004549e0
        ;   Label: FUN_004549e0
    MOV EBP,ESP                         ; 004549e1
    SUB ESP,0x28                        ; 004549e3
    AND ESP,0xfffffff8                  ; 004549e6
    MOV EDX,dword ptr [EBP + 0x8]       ; 004549e9
    FLD float ptr [EDX]                 ; 004549ec
    FST double ptr [ESP + 0x8]          ; 004549ee
    FCOMP double ptr [0x005ba3a2]       ; 004549f2 | DAT_005ba3a2
    FNSTSW AX                           ; 004549f8
    SAHF                                ; 004549fa
    JC 0x00454ab8                       ; 004549fb
        ;   XREF to: 00454ab8 (CONDITIONAL_JUMP)  ; LAB_00454ab8
    FLD float ptr [EDX]                 ; 00454a01
        ;   Label: LAB_00454a01
    FLD1                                ; 00454a03
    FCOMPP                              ; 00454a05
    FNSTSW AX                           ; 00454a07
    SAHF                                ; 00454a09
    JBE 0x00454a52                      ; 00454a0a
        ;   XREF to: 00454a52 (CONDITIONAL_JUMP)  ; LAB_00454a52
    FLD float ptr [EDX + 0x4]           ; 00454a0c
    FLD1                                ; 00454a0f
    FCOMPP                              ; 00454a11
    FNSTSW AX                           ; 00454a13
    SAHF                                ; 00454a15
    JBE 0x00454a52                      ; 00454a16
        ;   XREF to: 00454a52 (CONDITIONAL_JUMP)  ; LAB_00454a52
    FLD float ptr [EDX + 0x8]           ; 00454a18
    FST double ptr [ESP + 0x20]         ; 00454a1b
    FCOMP double ptr [0x005ba3a2]       ; 00454a1f | DAT_005ba3a2
    FNSTSW AX                           ; 00454a25
    SAHF                                ; 00454a27
    JBE 0x00454a52                      ; 00454a28
        ;   XREF to: 00454a52 (CONDITIONAL_JUMP)  ; LAB_00454a52
    FLD double ptr [ESP + 0x20]         ; 00454a2a
    FCOMP double ptr [0x005ba3b2]       ; 00454a2e | DAT_005ba3b2
    FNSTSW AX                           ; 00454a34
    SAHF                                ; 00454a36
    JNC 0x00454a52                      ; 00454a37
        ;   XREF to: 00454a52 (CONDITIONAL_JUMP)  ; LAB_00454a52
    FLD float ptr [EDX + 0x8]           ; 00454a39
    FCOMP float ptr [EDX]               ; 00454a3c
    FNSTSW AX                           ; 00454a3e
    SAHF                                ; 00454a40
    JBE 0x00454a52                      ; 00454a41
        ;   XREF to: 00454a52 (CONDITIONAL_JUMP)  ; LAB_00454a52
    FLD float ptr [EDX + 0x8]           ; 00454a43
    FCOMP float ptr [EDX + 0x4]         ; 00454a46
    FNSTSW AX                           ; 00454a49
    SAHF                                ; 00454a4b
    JA 0x00454b21                       ; 00454a4c
        ;   XREF to: 00454b21 (CONDITIONAL_JUMP)  ; LAB_00454b21
    FLD float ptr [EDX]                 ; 00454a52
        ;   Label: LAB_00454a52
    FLD1                                ; 00454a54
    FCOMPP                              ; 00454a56
    FNSTSW AX                           ; 00454a58
    SAHF                                ; 00454a5a
    JBE 0x00454b1b                      ; 00454a5b
        ;   XREF to: 00454b1b (CONDITIONAL_JUMP)  ; LAB_00454b1b
    FLD float ptr [EDX + 0x4]           ; 00454a61
    FLD1                                ; 00454a64
    FCOMPP                              ; 00454a66
    FNSTSW AX                           ; 00454a68
    SAHF                                ; 00454a6a
    JBE 0x00454b1b                      ; 00454a6b
        ;   XREF to: 00454b1b (CONDITIONAL_JUMP)  ; LAB_00454b1b
    FLD1                                ; 00454a71
    FLD float ptr [EDX + 0x8]           ; 00454a73
    FSTP double ptr [ESP + 0x10]        ; 00454a76
    FCOMP double ptr [ESP + 0x10]       ; 00454a7a
    FNSTSW AX                           ; 00454a7e
    SAHF                                ; 00454a80
    JNC 0x00454b1b                      ; 00454a81
        ;   XREF to: 00454b1b (CONDITIONAL_JUMP)  ; LAB_00454b1b
    FLD double ptr [ESP + 0x10]         ; 00454a87
    FCOMP double ptr [0x005ba3a2]       ; 00454a8b | DAT_005ba3a2
    FNSTSW AX                           ; 00454a91
    SAHF                                ; 00454a93
    JNC 0x00454b1b                      ; 00454a94
        ;   XREF to: 00454b1b (CONDITIONAL_JUMP)  ; LAB_00454b1b
    FLD float ptr [EDX + 0x8]           ; 00454a9a
    FCOMP float ptr [EDX]               ; 00454a9d
    FNSTSW AX                           ; 00454a9f
    SAHF                                ; 00454aa1
    JBE 0x00454b1b                      ; 00454aa2
        ;   XREF to: 00454b1b (CONDITIONAL_JUMP)  ; LAB_00454b1b
    FLD float ptr [EDX + 0x8]           ; 00454aa4
    FCOMP float ptr [EDX + 0x4]         ; 00454aa7
    FNSTSW AX                           ; 00454aaa
    SAHF                                ; 00454aac
    JBE 0x00454b1b                      ; 00454aad
        ;   XREF to: 00454b1b (CONDITIONAL_JUMP)  ; LAB_00454b1b
    MOV EAX,0x3                         ; 00454aaf
    MOV ESP,EBP                         ; 00454ab4
    POP EBP                             ; 00454ab6
    RET                                 ; 00454ab7
    FLD float ptr [EDX + 0x4]           ; 00454ab8
        ;   Label: LAB_00454ab8
    FST double ptr [ESP + 0x18]         ; 00454abb
    FCOMP double ptr [0x005ba3a2]       ; 00454abf | DAT_005ba3a2
    FNSTSW AX                           ; 00454ac5
    SAHF                                ; 00454ac7
    JNC 0x00454a01                      ; 00454ac8
        ;   XREF to: 00454a01 (CONDITIONAL_JUMP)  ; LAB_00454a01
    FLD float ptr [EDX + 0x8]           ; 00454ace
    FST double ptr [ESP]                ; 00454ad1
    FCOMP double ptr [0x005ba3a2]       ; 00454ad4 | DAT_005ba3a2
    FNSTSW AX                           ; 00454ada
    SAHF                                ; 00454adc
    JNC 0x00454a01                      ; 00454add
        ;   XREF to: 00454a01 (CONDITIONAL_JUMP)  ; LAB_00454a01
    FLD double ptr [ESP + 0x8]          ; 00454ae3
    FCOMP double ptr [0x005ba3aa]       ; 00454ae7 | DAT_005ba3aa
    FNSTSW AX                           ; 00454aed
    SAHF                                ; 00454aef
    JBE 0x00454a01                      ; 00454af0
        ;   XREF to: 00454a01 (CONDITIONAL_JUMP)  ; LAB_00454a01
    FLD double ptr [ESP + 0x18]         ; 00454af6
    FCOMP double ptr [0x005ba3aa]       ; 00454afa | DAT_005ba3aa
    FNSTSW AX                           ; 00454b00
    SAHF                                ; 00454b02
    JBE 0x00454a01                      ; 00454b03
        ;   XREF to: 00454a01 (CONDITIONAL_JUMP)  ; LAB_00454a01
    FLD double ptr [ESP]                ; 00454b09
    FCOMP double ptr [0x005ba3aa]       ; 00454b0c | DAT_005ba3aa
    FNSTSW AX                           ; 00454b12
    SAHF                                ; 00454b14
    JBE 0x00454a01                      ; 00454b15
        ;   XREF to: 00454a01 (CONDITIONAL_JUMP)  ; LAB_00454a01
    XOR EAX,EAX                         ; 00454b1b
        ;   Label: LAB_00454b1b
    MOV ESP,EBP                         ; 00454b1d
    POP EBP                             ; 00454b1f
    RET                                 ; 00454b20
    MOV EAX,0x1                         ; 00454b21
        ;   Label: LAB_00454b21
    MOV ESP,EBP                         ; 00454b26
    POP EBP                             ; 00454b28
    RET                                 ; 00454b29


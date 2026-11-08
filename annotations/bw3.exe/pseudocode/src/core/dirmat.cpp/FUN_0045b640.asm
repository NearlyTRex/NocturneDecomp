; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045b640(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b640
        ;   Label: FUN_0045b640
    PUSH ESI                            ; 0045b641
    PUSH EBP                            ; 0045b642
    MOV EBP,ESP                         ; 0045b643
    SUB ESP,0x28                        ; 0045b645
    AND ESP,0xfffffff8                  ; 0045b648
    MOV EBX,dword ptr [EBP + 0x10]      ; 0045b64b
    FLD float ptr [EBX + 0xc]           ; 0045b64e
    FMUL float ptr [EBX + 0x20]         ; 0045b651
    FLD float ptr [EBX + 0x14]          ; 0045b654
    FMUL float ptr [EBX + 0x18]         ; 0045b657
    FSUBP                               ; 0045b65a
    FMUL float ptr [EBX + 0x4]          ; 0045b65c
    FLD float ptr [EBX + 0x10]          ; 0045b65f
    FMUL float ptr [EBX + 0x20]         ; 0045b662
    FLD float ptr [EBX + 0x14]          ; 0045b665
    FMUL float ptr [EBX + 0x1c]         ; 0045b668
    FSUBP                               ; 0045b66b
    FMUL float ptr [EBX]                ; 0045b66d
    FSUBRP                              ; 0045b66f
    FLD float ptr [EBX + 0xc]           ; 0045b671
    FMUL float ptr [EBX + 0x1c]         ; 0045b674
    FLD float ptr [EBX + 0x10]          ; 0045b677
    FMUL float ptr [EBX + 0x18]         ; 0045b67a
    FSUBP                               ; 0045b67d
    FMUL float ptr [EBX + 0x8]          ; 0045b67f
    FADDP                               ; 0045b682
    FSTP float ptr [ESP]                ; 0045b684
    TEST dword ptr [ESP],0x7fffffff     ; 0045b687
    JZ 0x0045b7cb                       ; 0045b68e
        ;   XREF to: 0045b7cb (CONDITIONAL_JUMP)  ; LAB_0045b7cb
    FLD float ptr [EBX + 0x10]          ; 0045b694
        ;   Label: LAB_0045b694
    FMUL float ptr [EBX + 0x20]         ; 0045b697
    FLD float ptr [EBX + 0xc]           ; 0045b69a
    FMUL float ptr [EBX + 0x20]         ; 0045b69d
    FLD float ptr [EBX + 0xc]           ; 0045b6a0
    FMUL float ptr [EBX + 0x1c]         ; 0045b6a3
    FLD float ptr [EBX + 0x4]           ; 0045b6a6
    FMUL float ptr [EBX + 0x20]         ; 0045b6a9
    FLD float ptr [EBX + 0x8]           ; 0045b6ac
    FMUL float ptr [EBX + 0x18]         ; 0045b6af
    FLD float ptr [EBX + 0x14]          ; 0045b6b2
    FMUL float ptr [EBX + 0x1c]         ; 0045b6b5
    FLD float ptr [EBX + 0x14]          ; 0045b6b8
    FXCH                                ; 0045b6bb
    FSUBP ST6,ST0                       ; 0045b6bd
    FMUL float ptr [EBX + 0x18]         ; 0045b6bf
    FXCH ST5                            ; 0045b6c2
    FSTP float ptr [ESP + 0x10]         ; 0045b6c4
    FLD float ptr [EBX + 0x10]          ; 0045b6c8
    FMUL float ptr [EBX + 0x18]         ; 0045b6cb
    FXCH ST5                            ; 0045b6ce
    FSUBP ST4,ST0                       ; 0045b6d0
    FLD float ptr [ESP]                 ; 0045b6d2
    FXCH ST4                            ; 0045b6d5
    FCHS                                ; 0045b6d7
    FSTP float ptr [ESP + 0x1c]         ; 0045b6d9
    FLD float ptr [EBX + 0x4]           ; 0045b6dd
    FLD1                                ; 0045b6e0
    FXCH                                ; 0045b6e2
    FMUL float ptr [EBX + 0x18]         ; 0045b6e4
    FXCH                                ; 0045b6e7
    FDIVRP ST5,ST0                      ; 0045b6e9
    FXCH ST5                            ; 0045b6eb
    FSUBP ST3,ST0                       ; 0045b6ed
    FXCH ST2                            ; 0045b6ef
    FSTP float ptr [ESP + 0xc]          ; 0045b6f1
    FLD float ptr [EBX + 0x8]           ; 0045b6f5
    FMUL float ptr [EBX + 0x1c]         ; 0045b6f8
    FLD float ptr [EBX + 0x4]           ; 0045b6fb
    FXCH                                ; 0045b6fe
    FSUBP ST2,ST0                       ; 0045b700
    FMUL float ptr [EBX + 0x14]         ; 0045b702
    FXCH                                ; 0045b705
    FCHS                                ; 0045b707
    FSTP float ptr [ESP + 0x18]         ; 0045b709
    FLD float ptr [EBX]                 ; 0045b70d
    FMUL float ptr [EBX + 0x20]         ; 0045b70f
    FLD float ptr [EBX + 0x4]           ; 0045b712
    FMUL float ptr [EBX + 0xc]          ; 0045b715
    FXCH                                ; 0045b718
    FSUBRP ST3,ST0                      ; 0045b71a
    FLD float ptr [EBX + 0x8]           ; 0045b71c
    FMUL float ptr [EBX + 0x10]         ; 0045b71f
    FLD float ptr [EBX]                 ; 0045b722
    FMUL float ptr [EBX + 0x1c]         ; 0045b724
    FXCH                                ; 0045b727
    FSUBP ST3,ST0                       ; 0045b729
    FXCH ST2                            ; 0045b72b
    FSTP float ptr [ESP + 0x4]          ; 0045b72d
    FLD float ptr [EBX]                 ; 0045b731
    FMUL float ptr [EBX + 0x10]         ; 0045b733
    FLD float ptr [EBX + 0x8]           ; 0045b736
    FMUL float ptr [EBX + 0xc]          ; 0045b739
    FXCH                                ; 0045b73c
    FSUBRP ST2,ST0                      ; 0045b73e
    FXCH                                ; 0045b740
    FSTP float ptr [ESP + 0x14]         ; 0045b742
    FLD float ptr [EBX]                 ; 0045b746
    FMUL float ptr [EBX + 0x14]         ; 0045b748
    FLD float ptr [ESP + 0x10]          ; 0045b74b
    FXCH ST5                            ; 0045b74f
    FSTP float ptr [ESP]                ; 0045b751
    FXCH ST4                            ; 0045b754
    FMUL float ptr [ESP]                ; 0045b756
    FXCH ST2                            ; 0045b759
    FSUBRP ST5,ST0                      ; 0045b75b
    FLD float ptr [ESP + 0x18]          ; 0045b75d
    FMUL float ptr [ESP]                ; 0045b761
    FXCH ST4                            ; 0045b764
    FSUBRP                              ; 0045b766
    FXCH ST4                            ; 0045b768
    FCHS                                ; 0045b76a
    FSTP float ptr [ESP + 0x24]         ; 0045b76c
    FLD float ptr [ESP + 0x4]           ; 0045b770
    FMUL float ptr [ESP]                ; 0045b774
    FXCH ST4                            ; 0045b777
    FCHS                                ; 0045b779
    FLD float ptr [ESP + 0x1c]          ; 0045b77b
    FMUL float ptr [ESP]                ; 0045b77f
    FXCH ST3                            ; 0045b782
    FMUL float ptr [ESP]                ; 0045b784
    FXCH                                ; 0045b787
    FMUL float ptr [ESP]                ; 0045b789
    FLD float ptr [ESP + 0xc]           ; 0045b78c
    FMUL float ptr [ESP]                ; 0045b790
    FXCH ST3                            ; 0045b793
    FSTP float ptr [EBX]                ; 0045b795
    FLD float ptr [ESP + 0x24]          ; 0045b797
    FMUL float ptr [ESP]                ; 0045b79b
    FXCH ST5                            ; 0045b79e
    FSTP float ptr [EBX + 0x4]          ; 0045b7a0
    FLD float ptr [ESP + 0x14]          ; 0045b7a3
    FMUL float ptr [ESP]                ; 0045b7a7
    FXCH ST6                            ; 0045b7aa
    FSTP float ptr [EBX + 0x8]          ; 0045b7ac
    FXCH ST3                            ; 0045b7af
    FSTP float ptr [EBX + 0xc]          ; 0045b7b1
    FSTP float ptr [EBX + 0x10]         ; 0045b7b4
    FXCH                                ; 0045b7b7
    FSTP float ptr [EBX + 0x14]         ; 0045b7b9
    FSTP float ptr [EBX + 0x18]         ; 0045b7bc
    FSTP float ptr [EBX + 0x1c]         ; 0045b7bf
    FSTP float ptr [EBX + 0x20]         ; 0045b7c2
    MOV ESP,EBP                         ; 0045b7c5
    POP EBP                             ; 0045b7c7
    POP ESI                             ; 0045b7c8
    POP EBX                             ; 0045b7c9
    RET                                 ; 0045b7ca
    MOV ECX,0x5bb106                    ; 0045b7cb
        ;   Label: LAB_0045b7cb
    MOV ESI,0x6c                        ; 0045b7d0
    PUSH 0x5bb119                       ; 0045b7d5
    MOV dword ptr [0x01d71de0],ECX      ; 0045b7da | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0045b7e0 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0045b7e6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0045b7eb
    JMP 0x0045b694                      ; 0045b7ee
        ;   XREF to: 0045b694 (UNCONDITIONAL_JUMP)  ; LAB_0045b694


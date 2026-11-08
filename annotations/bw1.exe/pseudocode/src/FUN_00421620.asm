; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00421620(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_00559f80 at 0055a28d
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00421620
        ;   Label: FUN_00421620
    MOV EDX,dword ptr [ESP + 0x8]       ; 00421623
    FLD float ptr [EDX + 0xc]           ; 00421627
    FCOMP float ptr [EDX + 0x10]        ; 0042162a
    FNSTSW AX                           ; 0042162d
    SAHF                                ; 0042162f
    JBE 0x0042163d                      ; 00421630
        ;   XREF to: 0042163d (CONDITIONAL_JUMP)  ; LAB_0042163d
    FLD float ptr [EDX + 0xc]           ; 00421632
    FCOMP float ptr [EDX + 0x14]        ; 00421635
    FNSTSW AX                           ; 00421638
    SAHF                                ; 0042163a
    JA 0x00421655                       ; 0042163b
        ;   XREF to: 00421655 (CONDITIONAL_JUMP)  ; LAB_00421655
    FLD float ptr [EDX + 0x10]          ; 0042163d
        ;   Label: LAB_0042163d
    FCOMP float ptr [EDX + 0x14]        ; 00421640
    FNSTSW AX                           ; 00421643
    SAHF                                ; 00421645
    JBE 0x0042165a                      ; 00421646
        ;   XREF to: 0042165a (CONDITIONAL_JUMP)  ; LAB_0042165a
    MOV EDX,dword ptr [EDX + 0x10]      ; 00421648
    MOV dword ptr [ESP],EDX             ; 0042164b
        ;   Label: LAB_0042164b
    MOV EAX,dword ptr [ESP]             ; 0042164e
    ADD ESP,0x4                         ; 00421651
    RET                                 ; 00421654
    MOV EDX,dword ptr [EDX + 0xc]       ; 00421655
        ;   Label: LAB_00421655
    JMP 0x0042164b                      ; 00421658
        ;   XREF to: 0042164b (UNCONDITIONAL_JUMP)  ; LAB_0042164b
    MOV EDX,dword ptr [EDX + 0x14]      ; 0042165a
        ;   Label: LAB_0042165a
    MOV dword ptr [ESP],EDX             ; 0042165d
    MOV EAX,dword ptr [ESP]             ; 00421660
    ADD ESP,0x4                         ; 00421663
    RET                                 ; 00421666


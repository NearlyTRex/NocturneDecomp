; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_charactr_cpp_clampFloat_FUN_00424730(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00424730
        ;   Label: core_charactr.cpp_clampFloat_FUN_00424730
    FLD float ptr [ESP + 0xc]           ; 00424733
    FLD float ptr [ESP + 0x10]          ; 00424737
    FCHS                                ; 0042473b
    FSTP float ptr [ESP]                ; 0042473d
    FCOMP float ptr [ESP]               ; 00424740
    FNSTSW AX                           ; 00424743
    SAHF                                ; 00424745
    JC 0x00424765                       ; 00424746
        ;   XREF to: 00424765 (CONDITIONAL_JUMP)  ; LAB_00424765
    FLD float ptr [ESP + 0xc]           ; 00424748
    FCOMP float ptr [ESP + 0x10]        ; 0042474c
    FNSTSW AX                           ; 00424750
    SAHF                                ; 00424752
    JBE 0x0042476a                      ; 00424753
        ;   XREF to: 0042476a (CONDITIONAL_JUMP)  ; LAB_0042476a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00424755
    MOV dword ptr [ESP + 0x4],EAX       ; 00424759
        ;   Label: LAB_00424759
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042475d
    ADD ESP,0x8                         ; 00424761
    RET                                 ; 00424764
    MOV EAX,dword ptr [ESP]             ; 00424765
        ;   Label: LAB_00424765
    JMP 0x00424759                      ; 00424768
        ;   XREF to: 00424759 (UNCONDITIONAL_JUMP)  ; LAB_00424759
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042476a
        ;   Label: LAB_0042476a
    MOV dword ptr [ESP + 0x4],EAX       ; 0042476e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00424772
    ADD ESP,0x8                         ; 00424776
    RET                                 ; 00424779


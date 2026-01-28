; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown float core_charactr_cpp_FUN_00428620(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00428620
        ;   Label: core_charactr.cpp_FUN_00428620
    FLD float ptr [ESP + 0xc]           ; 00428623
    FLD float ptr [ESP + 0x10]          ; 00428627
    FCHS                                ; 0042862b
    FSTP float ptr [ESP]                ; 0042862d
    FCOMP float ptr [ESP]               ; 00428630
    FNSTSW AX                           ; 00428633
    SAHF                                ; 00428635
    JC 0x00428655                       ; 00428636
        ;   XREF to: 00428655 (CONDITIONAL_JUMP)  ; LAB_00428655
    FLD float ptr [ESP + 0xc]           ; 00428638
    FCOMP float ptr [ESP + 0x10]        ; 0042863c
    FNSTSW AX                           ; 00428640
    SAHF                                ; 00428642
    JBE 0x0042865a                      ; 00428643
        ;   XREF to: 0042865a (CONDITIONAL_JUMP)  ; LAB_0042865a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00428645
    MOV dword ptr [ESP + 0x4],EAX       ; 00428649
        ;   Label: LAB_00428649
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042864d
    ADD ESP,0x8                         ; 00428651
    RET                                 ; 00428654
    MOV EAX,dword ptr [ESP]             ; 00428655
        ;   Label: LAB_00428655
    JMP 0x00428649                      ; 00428658
        ;   XREF to: 00428649 (UNCONDITIONAL_JUMP)  ; LAB_00428649
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042865a
        ;   Label: LAB_0042865a
    MOV dword ptr [ESP + 0x4],EAX       ; 0042865e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00428662
    ADD ESP,0x8                         ; 00428666
    RET                                 ; 00428669


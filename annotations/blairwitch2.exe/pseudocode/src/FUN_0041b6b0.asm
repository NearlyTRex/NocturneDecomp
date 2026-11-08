; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0041b6b0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_00538d10 at 00538ff3
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0041b6b0
        ;   Label: FUN_0041b6b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0041b6b3
    FLD float ptr [EDX + 0xc]           ; 0041b6b7
    FCOMP float ptr [EDX + 0x10]        ; 0041b6ba
    FNSTSW AX                           ; 0041b6bd
    SAHF                                ; 0041b6bf
    JBE 0x0041b6cd                      ; 0041b6c0
        ;   XREF to: 0041b6cd (CONDITIONAL_JUMP)  ; LAB_0041b6cd
    FLD float ptr [EDX + 0xc]           ; 0041b6c2
    FCOMP float ptr [EDX + 0x14]        ; 0041b6c5
    FNSTSW AX                           ; 0041b6c8
    SAHF                                ; 0041b6ca
    JA 0x0041b6e5                       ; 0041b6cb
        ;   XREF to: 0041b6e5 (CONDITIONAL_JUMP)  ; LAB_0041b6e5
    FLD float ptr [EDX + 0x10]          ; 0041b6cd
        ;   Label: LAB_0041b6cd
    FCOMP float ptr [EDX + 0x14]        ; 0041b6d0
    FNSTSW AX                           ; 0041b6d3
    SAHF                                ; 0041b6d5
    JBE 0x0041b6ea                      ; 0041b6d6
        ;   XREF to: 0041b6ea (CONDITIONAL_JUMP)  ; LAB_0041b6ea
    MOV EDX,dword ptr [EDX + 0x10]      ; 0041b6d8
    MOV dword ptr [ESP],EDX             ; 0041b6db
        ;   Label: LAB_0041b6db
    MOV EAX,dword ptr [ESP]             ; 0041b6de
    ADD ESP,0x4                         ; 0041b6e1
    RET                                 ; 0041b6e4
    MOV EDX,dword ptr [EDX + 0xc]       ; 0041b6e5
        ;   Label: LAB_0041b6e5
    JMP 0x0041b6db                      ; 0041b6e8
        ;   XREF to: 0041b6db (UNCONDITIONAL_JUMP)  ; LAB_0041b6db
    MOV EDX,dword ptr [EDX + 0x14]      ; 0041b6ea
        ;   Label: LAB_0041b6ea
    MOV dword ptr [ESP],EDX             ; 0041b6ed
    MOV EAX,dword ptr [ESP]             ; 0041b6f0
    ADD ESP,0x4                         ; 0041b6f3
    RET                                 ; 0041b6f6


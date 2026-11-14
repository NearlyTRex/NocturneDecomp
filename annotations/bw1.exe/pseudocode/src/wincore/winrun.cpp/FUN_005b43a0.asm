; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float wincore_winrun_cpp_FUN_005b43a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c9c7e0
;   undefined4 DAT_02c9c7e4
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005b43a0
        ;   Label: wincore_winrun.cpp_FUN_005b43a0
    MOV EAX,[0x02c9c7e0]                ; 005b43a3 | DAT_02c9c7e0
    MOV dword ptr [ESP],EAX             ; 005b43a8
    FLD float ptr [0x02c9c7e4]          ; 005b43ab | DAT_02c9c7e4
    FCOMP float ptr [ESP]               ; 005b43b1
    FNSTSW AX                           ; 005b43b4
    SAHF                                ; 005b43b6
    JC 0x005b43da                       ; 005b43b7
        ;   XREF to: 005b43da (CONDITIONAL_JUMP)  ; LAB_005b43da
    MOV EDX,0x2c9cf14                   ; 005b43b9
        ;   Label: LAB_005b43b9
    LEA ECX,[EDX + 0x2b0]               ; 005b43be
    CMP dword ptr [EDX],0x0             ; 005b43c4
        ;   Label: LAB_005b43c4
    JNZ 0x005b43e4                      ; 005b43c7
        ;   XREF to: 005b43e4 (CONDITIONAL_JUMP)  ; LAB_005b43e4
    ADD EDX,0xac                        ; 005b43c9
        ;   Label: LAB_005b43c9
    CMP EDX,ECX                         ; 005b43cf
    JNZ 0x005b43c4                      ; 005b43d1
        ;   XREF to: 005b43c4 (CONDITIONAL_JUMP)  ; LAB_005b43c4
    MOV EAX,dword ptr [ESP]             ; 005b43d3
    ADD ESP,0x4                         ; 005b43d6
    RET                                 ; 005b43d9
    MOV EAX,[0x02c9c7e4]                ; 005b43da | DAT_02c9c7e4
        ;   Label: LAB_005b43da
    MOV dword ptr [ESP],EAX             ; 005b43df
    JMP 0x005b43b9                      ; 005b43e2
        ;   XREF to: 005b43b9 (UNCONDITIONAL_JUMP)  ; LAB_005b43b9
    FLD float ptr [EDX + 0xa8]          ; 005b43e4
        ;   Label: LAB_005b43e4
    FCOMP float ptr [ESP]               ; 005b43ea
    FNSTSW AX                           ; 005b43ed
    SAHF                                ; 005b43ef
    JNC 0x005b43c9                      ; 005b43f0
        ;   XREF to: 005b43c9 (CONDITIONAL_JUMP)  ; LAB_005b43c9
    MOV EAX,dword ptr [EDX + 0xa8]      ; 005b43f2
    MOV dword ptr [ESP],EAX             ; 005b43f8
    JMP 0x005b43c9                      ; 005b43fb
        ;   XREF to: 005b43c9 (UNCONDITIONAL_JUMP)  ; LAB_005b43c9


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float wincore_winrun_cpp_FUN_0059085c(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02664fa0
;   undefined4 DAT_02664fa4
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0059085c
        ;   Label: wincore_winrun.cpp_FUN_0059085c
    SUB ESP,0x4                         ; 00590860
    MOV EAX,[0x02664fa0]                ; 00590863 | DAT_02664fa0
    MOV dword ptr [ESP],EAX             ; 00590868
    FLD float ptr [0x02664fa4]          ; 0059086b | DAT_02664fa4
    FCOMP float ptr [ESP]               ; 00590871
    FNSTSW AX                           ; 00590874
    SAHF                                ; 00590876
    JC 0x0059089a                       ; 00590877
        ;   XREF to: 0059089a (CONDITIONAL_JUMP)  ; LAB_0059089a
    MOV EDX,0x26656c4                   ; 00590879
        ;   Label: LAB_00590879
    LEA ECX,[EDX + 0x2b0]               ; 0059087e
    CMP dword ptr [EDX],0x0             ; 00590884
        ;   Label: LAB_00590884
    JNZ 0x005908a4                      ; 00590887
        ;   XREF to: 005908a4 (CONDITIONAL_JUMP)  ; LAB_005908a4
    ADD EDX,0xac                        ; 00590889
        ;   Label: LAB_00590889
    CMP EDX,ECX                         ; 0059088f
    JNZ 0x00590884                      ; 00590891
        ;   XREF to: 00590884 (CONDITIONAL_JUMP)  ; LAB_00590884
    MOV EAX,dword ptr [ESP]             ; 00590893
    ADD ESP,0x4                         ; 00590896
    RET                                 ; 00590899
    MOV EAX,[0x02664fa4]                ; 0059089a | DAT_02664fa4
        ;   Label: LAB_0059089a
    MOV dword ptr [ESP],EAX             ; 0059089f
    JMP 0x00590879                      ; 005908a2
        ;   XREF to: 00590879 (UNCONDITIONAL_JUMP)  ; LAB_00590879
    FLD float ptr [EDX + 0xa8]          ; 005908a4
        ;   Label: LAB_005908a4
    FCOMP float ptr [ESP]               ; 005908aa
    FNSTSW AX                           ; 005908ad
    SAHF                                ; 005908af
    JNC 0x00590889                      ; 005908b0
        ;   XREF to: 00590889 (CONDITIONAL_JUMP)  ; LAB_00590889
    MOV EAX,dword ptr [EDX + 0xa8]      ; 005908b2
    MOV dword ptr [ESP],EAX             ; 005908b8
    JMP 0x00590889                      ; 005908bb
        ;   XREF to: 00590889 (UNCONDITIONAL_JUMP)  ; LAB_00590889


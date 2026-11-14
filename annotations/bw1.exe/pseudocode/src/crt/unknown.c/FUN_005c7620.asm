; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c7620(void)
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   crt_math.c_pow_FUN_005c18f4 at 005c1a12
;
; Referenced Globals:
;   undefined4 DAT_006267bc
;   undefined4 DAT_006267c4
;
; Called Functions:
;   crt_unknown.c_FUN_005cbedb
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c7620
        ;   Label: crt_unknown.c_FUN_005c7620
    MOV EBP,ESP                         ; 005c7621
    SUB ESP,0x10                        ; 005c7623
    FCOM double ptr [0x006267bc]        ; 005c7626 | DAT_006267bc
    FSTSW word ptr [EBP + -0x10]        ; 005c762c
    WAIT                                ; 005c7630
    MOV AH,byte ptr [EBP + -0xf]        ; 005c7631
    SAHF                                ; 005c7634
    JBE 0x005c7658                      ; 005c7635
        ;   XREF to: 005c7658 (CONDITIONAL_JUMP)  ; LAB_005c7658
    CMP AL,0x7                          ; 005c7637
    JZ 0x005c7652                       ; 005c7639
        ;   XREF to: 005c7652 (CONDITIONAL_JUMP)  ; LAB_005c7652
    FSTP double ptr [EBP + -0x10]       ; 005c763b
    MOV dword ptr [EBP + -0x8],EAX      ; 005c763e
    MOV dword ptr [EBP + -0x4],EDX      ; 005c7641
    CALL crt_unknown.c_FUN_005cbedb     ; 005c7644
        ;   XREF to: 005cbedb (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cbedb()
    PUSH EDX                            ; 005c7649
    PUSH EAX                            ; 005c764a
    FLD double ptr [ESP]                ; 005c764b
    MOV EDX,dword ptr [EBP + -0x4]      ; 005c764e
    WAIT                                ; 005c7651
    MOV AL,0x1                          ; 005c7652
        ;   Label: LAB_005c7652
    MOV ESP,EBP                         ; 005c7654
    POP EBP                             ; 005c7656
    RET                                 ; 005c7657
    FCOM double ptr [0x006267c4]        ; 005c7658 | DAT_006267c4
        ;   Label: LAB_005c7658
    FSTSW word ptr [EBP + -0x10]        ; 005c765e
    WAIT                                ; 005c7662
    MOV AH,byte ptr [EBP + -0xf]        ; 005c7663
    SAHF                                ; 005c7666
    JA 0x005c766d                       ; 005c7667
        ;   XREF to: 005c766d (CONDITIONAL_JUMP)  ; LAB_005c766d
    FLDZ                                ; 005c7669
    JMP 0x005c7681                      ; 005c766b
        ;   XREF to: 005c7681 (UNCONDITIONAL_JUMP)  ; LAB_005c7681
    FLDL2E                              ; 005c766d
        ;   Label: LAB_005c766d
    FMULP                               ; 005c766f
    FLD ST0                             ; 005c7671
    FRNDINT                             ; 005c7673
    FXCH                                ; 005c7675
    FSUB ST0,ST1                        ; 005c7677
    F2XM1                               ; 005c7679
    FLD1                                ; 005c767b
    FADDP                               ; 005c767d
    FSCALE                              ; 005c767f
    FSTP ST1                            ; 005c7681
        ;   Label: LAB_005c7681
    MOV AL,0x0                          ; 005c7683
    MOV ESP,EBP                         ; 005c7685
    POP EBP                             ; 005c7687
    RET                                 ; 005c7688


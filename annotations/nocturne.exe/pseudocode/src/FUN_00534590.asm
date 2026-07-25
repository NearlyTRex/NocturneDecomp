; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534590(int param_1)
;
;
; XREF[1]:
;   FUN_005342b0 at 00534542
;
; Referenced Globals:
;   undefined4 DAT_00595132
;   undefined4 DAT_0059513a
;   undefined4 DAT_0059513e
;   undefined4 DAT_00595142
;   undefined4 DAT_0059514a
;   undefined4 DAT_00595152
;   undefined4 DAT_0059515a
;   undefined4 DAT_00595162
;   undefined4 DAT_0059516a
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00534590
        ;   Label: FUN_00534590
    FLD float ptr [EDX + 0x28]          ; 00534594
    FCOMP double ptr [0x00595132]       ; 00534597 | DAT_00595132
    FNSTSW AX                           ; 0053459d
    SAHF                                ; 0053459f
    JC 0x00534638                       ; 005345a0
        ;   XREF to: 00534638 (CONDITIONAL_JUMP)  ; LAB_00534638
    FLD float ptr [EDX + 0x28]          ; 005345a6
        ;   Label: LAB_005345a6
    FCOMP double ptr [0x00595132]       ; 005345a9 | DAT_00595132
    FNSTSW AX                           ; 005345af
    SAHF                                ; 005345b1
    JBE 0x005345c0                      ; 005345b2
        ;   XREF to: 005345c0 (CONDITIONAL_JUMP)  ; LAB_005345c0
    FLD float ptr [EDX + 0x28]          ; 005345b4
    FADD float ptr [0x0059513e]         ; 005345b7 | DAT_0059513e
    FSTP float ptr [EDX + 0x28]         ; 005345bd
    FLD float ptr [EDX + 0x24]          ; 005345c0
        ;   Label: LAB_005345c0
    FCOMP double ptr [0x00595142]       ; 005345c3 | DAT_00595142
    FNSTSW AX                           ; 005345c9
    SAHF                                ; 005345cb
    JNC 0x005345d5                      ; 005345cc
        ;   XREF to: 005345d5 (CONDITIONAL_JUMP)  ; LAB_005345d5
    MOV dword ptr [EDX + 0x24],0xbfc90fdb ; 005345ce
    FLD float ptr [EDX + 0x24]          ; 005345d5
        ;   Label: LAB_005345d5
    FCOMP double ptr [0x0059514a]       ; 005345d8 | DAT_0059514a
    FNSTSW AX                           ; 005345de
    SAHF                                ; 005345e0
    JBE 0x005345ea                      ; 005345e1
        ;   XREF to: 005345ea (CONDITIONAL_JUMP)  ; LAB_005345ea
    MOV dword ptr [EDX + 0x24],0x3fc90fdb ; 005345e3
    FLD float ptr [EDX + 0x2c]          ; 005345ea
        ;   Label: LAB_005345ea
    FCOMP double ptr [0x00595152]       ; 005345ed | DAT_00595152
    FNSTSW AX                           ; 005345f3
    SAHF                                ; 005345f5
    JNC 0x005345ff                      ; 005345f6
        ;   XREF to: 005345ff (CONDITIONAL_JUMP)  ; LAB_005345ff
    MOV dword ptr [EDX + 0x2c],0x3dcccccd ; 005345f8
    FLD float ptr [EDX + 0x2c]          ; 005345ff
        ;   Label: LAB_005345ff
    FCOMP double ptr [0x0059515a]       ; 00534602 | DAT_0059515a
    FNSTSW AX                           ; 00534608
    SAHF                                ; 0053460a
    JBE 0x00534614                      ; 0053460b
        ;   XREF to: 00534614 (CONDITIONAL_JUMP)  ; LAB_00534614
    MOV dword ptr [EDX + 0x2c],0x461c4000 ; 0053460d
    FLD float ptr [EDX + 0x38]          ; 00534614
        ;   Label: LAB_00534614
    FCOMP double ptr [0x00595162]       ; 00534617 | DAT_00595162
    FNSTSW AX                           ; 0053461d
    SAHF                                ; 0053461f
    JNC 0x00534629                      ; 00534620
        ;   XREF to: 00534629 (CONDITIONAL_JUMP)  ; LAB_00534629
    MOV dword ptr [EDX + 0x38],0x3c23d70a ; 00534622
    FLD float ptr [EDX + 0x38]          ; 00534629
        ;   Label: LAB_00534629
    FCOMP double ptr [0x0059516a]       ; 0053462c | DAT_0059516a
    FNSTSW AX                           ; 00534632
    SAHF                                ; 00534634
    JA 0x00534649                       ; 00534635
        ;   XREF to: 00534649 (CONDITIONAL_JUMP)  ; LAB_00534649
    RET                                 ; 00534637
    FLD float ptr [EDX + 0x28]          ; 00534638
        ;   Label: LAB_00534638
    FADD float ptr [0x0059513a]         ; 0053463b | DAT_0059513a
    FSTP float ptr [EDX + 0x28]         ; 00534641
    JMP 0x005345a6                      ; 00534644
        ;   XREF to: 005345a6 (UNCONDITIONAL_JUMP)  ; LAB_005345a6
    MOV dword ptr [EDX + 0x38],0x42c80000 ; 00534649
        ;   Label: LAB_00534649
    RET                                 ; 00534650


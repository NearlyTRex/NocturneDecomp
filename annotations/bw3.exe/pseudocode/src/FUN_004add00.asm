; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004add00(int param_1,int param_2,uint param_3)
;
;
; XREF[1]:
;   FUN_004addd0 at 004ae1f1
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_01d1a11c
;   undefined4 DAT_01d1a120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004add00
        ;   Label: FUN_004add00
    PUSH ESI                            ; 004add01
    PUSH EDI                            ; 004add02
    PUSH EBP                            ; 004add03
    MOV EBP,ESP                         ; 004add04
    SUB ESP,0x4                         ; 004add06
    MOV EAX,dword ptr [EBP + 0x18]      ; 004add09
    SHL EAX,0x2                         ; 004add0c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004add0f
    MOV ECX,dword ptr [EAX + 0x1c60dac] ; 004add12
    SHL EDX,0x2                         ; 004add18
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004add1b
    CMP EBX,dword ptr [ECX + EDX*0x1]   ; 004add1e
    JBE 0x004add2c                      ; 004add21
        ;   XREF to: 004add2c (CONDITIONAL_JUMP)  ; LAB_004add2c
    CMP dword ptr [0x005fba20],0x20     ; 004add23 | DAT_005fba20
    JZ 0x004add33                       ; 004add2a
        ;   XREF to: 004add33 (CONDITIONAL_JUMP)  ; LAB_004add33
    MOV ESP,EBP                         ; 004add2c
        ;   Label: LAB_004add2c
    POP EBP                             ; 004add2e
    POP EDI                             ; 004add2f
    POP ESI                             ; 004add30
    POP EBX                             ; 004add31
    RET                                 ; 004add32
    MOV EAX,dword ptr [EAX + 0x1c5faec] ; 004add33
        ;   Label: LAB_004add33
    ADD EAX,EDX                         ; 004add39
    MOV dword ptr [EBP + -0x4],EAX      ; 004add3b
    MOV EDI,dword ptr [EBP + 0xfffffffc] ; 004add3e
    MOVD MM0,dword ptr [0x01c6b5c0]     ; 004add44 | DAT_01c6b5c0
    PXOR MM7,MM7                        ; 004add4b
    MOVD MM1,dword ptr [EDI]            ; 004add4e
    MOVD MM2,dword ptr [0x01d1a11c]     ; 004add51 | DAT_01d1a11c
    MOVD MM3,dword ptr [0x01d1a120]     ; 004add58 | DAT_01d1a120
    PUNPCKLBW MM0,MM7                   ; 004add5f
    PUNPCKLBW MM1,MM7                   ; 004add62
    PUNPCKLBW MM2,MM7                   ; 004add65
    PUNPCKLBW MM3,MM7                   ; 004add68
    PMULLW MM0,MM3                      ; 004add6b
    PMULLW MM1,MM2                      ; 004add6e
    PADDW MM0,MM1                       ; 004add71
    PSRLW MM0,0x8                       ; 004add74
    PACKUSWB MM0,MM7                    ; 004add78
    MOVD dword ptr [EDI],MM0            ; 004add7b
    EMMS                                ; 004add7e
    MOV ESP,EBP                         ; 004add80
    POP EBP                             ; 004add82
    POP EDI                             ; 004add83
    POP ESI                             ; 004add84
    POP EBX                             ; 004add85
    RET                                 ; 004add86


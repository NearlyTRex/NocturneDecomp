; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a0570(float *param_1)
;
;
; XREF[1]:
;   FUN_004a1760 at 004a1aa1
;
; Referenced Globals:
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_006071f0
;   undefined4 DAT_01d21620
;   undefined4 DAT_02d0c1a0
;
; Called Functions:
;   FUN_00556be0
;   FUN_0057d050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0570
        ;   Label: FUN_004a0570
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a0571
    FLD float ptr [EBX]                 ; 004a0575
    FLDZ                                ; 004a0577
    FCOMPP                              ; 004a0579
    FNSTSW AX                           ; 004a057b
    SAHF                                ; 004a057d
    JNC 0x004a05cd                      ; 004a057e
        ;   XREF to: 004a05cd (CONDITIONAL_JUMP)  ; LAB_004a05cd
    MOV EAX,[0x005fe9dc]                ; 004a0580 | DAT_005fe9dc
    FLD float ptr [EAX + 0x314]         ; 004a0585 | DAT_01d21620
    FSUBR float ptr [EBX]               ; 004a058b
    FST float ptr [EBX]                 ; 004a058d
    FLDZ                                ; 004a058f
    FCOMPP                              ; 004a0591
    FNSTSW AX                           ; 004a0593
    SAHF                                ; 004a0595
    JBE 0x004a05cd                      ; 004a0596
        ;   XREF to: 004a05cd (CONDITIONAL_JUMP)  ; LAB_004a05cd
    PUSH EDI                            ; 004a0598
    MOV EDX,dword ptr [EBX + 0x4]       ; 004a0599
    MOV dword ptr [EBX],0x0             ; 004a059c
    CMP EDX,0x5                         ; 004a05a2
    JZ 0x004a05b9                       ; 004a05a5
        ;   XREF to: 004a05b9 (CONDITIONAL_JUMP)  ; LAB_004a05b9
    PUSH ESI                            ; 004a05a7
    PUSH EDX                            ; 004a05a8
    MOV ESI,dword ptr [0x006071f0]      ; 004a05a9 | DAT_006071f0
    PUSH ESI                            ; 004a05af | DAT_02d0c1a0
    CALL FUN_0057d050                   ; 004a05b0
        ;   XREF to: 0057d050 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d050()
    ADD ESP,0x8                         ; 004a05b5
    POP ESI                             ; 004a05b8
    MOV EDI,dword ptr [EBX + 0x8]       ; 004a05b9
        ;   Label: LAB_004a05b9
    PUSH EDI                            ; 004a05bc
    CALL FUN_00556be0                   ; 004a05bd
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    ADD ESP,0x4                         ; 004a05c2
    MOV dword ptr [EBX + 0x8],0x0       ; 004a05c5
    POP EDI                             ; 004a05cc
    POP EBX                             ; 004a05cd
        ;   Label: LAB_004a05cd
    RET                                 ; 004a05ce


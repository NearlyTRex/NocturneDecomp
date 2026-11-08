; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b3530(int param_1)
;
;
; XREF[1]:
;   FUN_004b4dd0 at 004b5053
;
; Referenced Globals:
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf624
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b3530
        ;   Label: FUN_004b3530
    FLD float ptr [EDX + 0x14]          ; 004b3534
    FLDZ                                ; 004b3537
    FCOMPP                              ; 004b3539
    FNSTSW AX                           ; 004b353b
    SAHF                                ; 004b353d
    JNC 0x004b355f                      ; 004b353e
        ;   XREF to: 004b355f (CONDITIONAL_JUMP)  ; LAB_004b355f
    MOV ECX,dword ptr [0x0061d95c]      ; 004b3540 | DAT_0061d95c
    LEA EAX,[EDX + 0x14]                ; 004b3546
    FLD float ptr [ECX + 0x294]         ; 004b3549 | DAT_01ccf624
    FSUBR float ptr [EAX]               ; 004b354f
    FSTP float ptr [EAX]                ; 004b3551
    FLD float ptr [EDX + 0x14]          ; 004b3553
    FLDZ                                ; 004b3556
    FCOMPP                              ; 004b3558
    FNSTSW AX                           ; 004b355a
    SAHF                                ; 004b355c
    JA 0x004b3560                       ; 004b355d
        ;   XREF to: 004b3560 (CONDITIONAL_JUMP)  ; LAB_004b3560
    RET                                 ; 004b355f
        ;   Label: LAB_004b355f
    MOV dword ptr [EDX + 0x14],0x0      ; 004b3560
        ;   Label: LAB_004b3560
    RET                                 ; 004b3567


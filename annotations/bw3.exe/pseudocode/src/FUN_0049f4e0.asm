; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049f4e0(int param_1)
;
;
; XREF[1]:
;   FUN_004a1760 at 004a19e4
;
; Referenced Globals:
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d21620
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049f4e0
        ;   Label: FUN_0049f4e0
    FLD float ptr [EDX + 0x14]          ; 0049f4e4
    FLDZ                                ; 0049f4e7
    FCOMPP                              ; 0049f4e9
    FNSTSW AX                           ; 0049f4eb
    SAHF                                ; 0049f4ed
    JNC 0x0049f50f                      ; 0049f4ee
        ;   XREF to: 0049f50f (CONDITIONAL_JUMP)  ; LAB_0049f50f
    MOV ECX,dword ptr [0x005fe9dc]      ; 0049f4f0 | DAT_005fe9dc
    LEA EAX,[EDX + 0x14]                ; 0049f4f6
    FLD float ptr [ECX + 0x314]         ; 0049f4f9 | DAT_01d21620
    FSUBR float ptr [EAX]               ; 0049f4ff
    FSTP float ptr [EAX]                ; 0049f501
    FLD float ptr [EDX + 0x14]          ; 0049f503
    FLDZ                                ; 0049f506
    FCOMPP                              ; 0049f508
    FNSTSW AX                           ; 0049f50a
    SAHF                                ; 0049f50c
    JA 0x0049f510                       ; 0049f50d
        ;   XREF to: 0049f510 (CONDITIONAL_JUMP)  ; LAB_0049f510
    RET                                 ; 0049f50f
        ;   Label: LAB_0049f50f
    MOV dword ptr [EDX + 0x14],0x0      ; 0049f510
        ;   Label: LAB_0049f510
    RET                                 ; 0049f517


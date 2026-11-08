; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ab90(int param_1)
;
;
; XREF[1]:
;   FUN_0049c430 at 0049c6d3
;
; Referenced Globals:
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6b84
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ab90
        ;   Label: FUN_0049ab90
    FLD float ptr [EDX + 0x14]          ; 0049ab94
    FLDZ                                ; 0049ab97
    FCOMPP                              ; 0049ab99
    FNSTSW AX                           ; 0049ab9b
    SAHF                                ; 0049ab9d
    JNC 0x0049abbf                      ; 0049ab9e
        ;   XREF to: 0049abbf (CONDITIONAL_JUMP)  ; LAB_0049abbf
    MOV ECX,dword ptr [0x00616494]      ; 0049aba0 | DAT_00616494
    LEA EAX,[EDX + 0x14]                ; 0049aba6
    FLD float ptr [ECX + 0x284]         ; 0049aba9 | DAT_01cb6b84
    FSUBR float ptr [EAX]               ; 0049abaf
    FSTP float ptr [EAX]                ; 0049abb1
    FLD float ptr [EDX + 0x14]          ; 0049abb3
    FLDZ                                ; 0049abb6
    FCOMPP                              ; 0049abb8
    FNSTSW AX                           ; 0049abba
    SAHF                                ; 0049abbc
    JA 0x0049abc0                       ; 0049abbd
        ;   XREF to: 0049abc0 (CONDITIONAL_JUMP)  ; LAB_0049abc0
    RET                                 ; 0049abbf
        ;   Label: LAB_0049abbf
    MOV dword ptr [EDX + 0x14],0x0      ; 0049abc0
        ;   Label: LAB_0049abc0
    RET                                 ; 0049abc7


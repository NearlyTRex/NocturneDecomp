; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004af700(int param_1)
;
;
; XREF[1]:
;   FUN_004b0030 at 004b00af
;
; Referenced Globals:
;   undefined4 DAT_00585130
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77850
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004af700
        ;   Label: FUN_004af700
    MOV EDX,dword ptr [0x005b9354]      ; 004af704 | DAT_005b9354
    LEA EAX,[ECX + 0x18]                ; 004af70a
    FLD float ptr [EDX + 0x264]         ; 004af70d | DAT_01c77850
    FADD float ptr [EAX]                ; 004af713
    FSTP float ptr [EAX]                ; 004af715
    FLD float ptr [ECX + 0x18]          ; 004af717
    FCOMP double ptr [0x00585130]       ; 004af71a | DAT_00585130
    FNSTSW AX                           ; 004af720
    SAHF                                ; 004af722
    JA 0x004af726                       ; 004af723
        ;   XREF to: 004af726 (CONDITIONAL_JUMP)  ; LAB_004af726
    RET                                 ; 004af725
    MOV dword ptr [ECX + 0x18],0x40680000 ; 004af726
        ;   Label: LAB_004af726
    RET                                 ; 004af72d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042d700(int param_1,float param_2)
;
;
; XREF[38]:
;   FUN_0040f4d0 at 0040f662
;   FUN_004115b0 at 0041171a
;   FUN_00412ba0 at 00412d13
;   FUN_00414b30 at 00414c3a
;   FUN_00415340 at 004154c7
;   FUN_0041bb40 at 0041c054
;   FUN_00423b70 at 0042468a
;   FUN_00428ae0 at 00429765
;   FUN_00445cb0 at 0044662d
;   FUN_00448570 at 004486d9
;   ... and 28 more
;
; Referenced Globals:
;   undefined4 DAT_005d5907
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042d700
        ;   Label: FUN_0042d700
    CMP dword ptr [EAX + 0x27a8],0x0    ; 0042d704
    JZ 0x0042d730                       ; 0042d70b
        ;   XREF to: 0042d730 (CONDITIONAL_JUMP)  ; LAB_0042d730
    MOV dword ptr [EAX + 0x2520],0x0    ; 0042d70d
    MOV EDX,dword ptr [EAX + 0x2520]    ; 0042d717
    MOV dword ptr [EAX + 0x251c],EDX    ; 0042d71d
    MOV EDX,dword ptr [EAX + 0x251c]    ; 0042d723
    MOV dword ptr [EAX + 0x2518],EDX    ; 0042d729
    RET                                 ; 0042d72f
    FLD float ptr [ESP + 0x8]           ; 0042d730
        ;   Label: LAB_0042d730
    FMUL float ptr [0x005d5907]         ; 0042d734 | DAT_005d5907
    FADD float ptr [EAX + 0x251c]       ; 0042d73a
    FSTP float ptr [EAX + 0x251c]       ; 0042d740
    RET                                 ; 0042d746


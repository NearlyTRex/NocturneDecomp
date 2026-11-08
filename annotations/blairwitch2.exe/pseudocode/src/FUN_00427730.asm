; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00427730(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ccdce
;
; Called Functions:
;   FUN_00409830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427730
        ;   Label: FUN_00427730
    MOV EBX,dword ptr [ESP + 0xc]       ; 00427731
    PUSH EBX                            ; 00427735
    MOV EDX,dword ptr [ESP + 0xc]       ; 00427736
    PUSH EDX                            ; 0042773a
    CALL FUN_00409830                   ; 0042773b
        ;   XREF to: 00409830 (UNCONDITIONAL_CALL)  ; undefined FUN_00409830()
    ADD ESP,0x8                         ; 00427740
    MOV EAX,dword ptr [ESP + 0x8]       ; 00427743
    CMP dword ptr [EAX + 0x2814],0x0    ; 00427747
    JNZ 0x00427752                      ; 0042774e
        ;   XREF to: 00427752 (CONDITIONAL_JUMP)  ; LAB_00427752
    POP EBX                             ; 00427750
    RET                                 ; 00427751
    FLD float ptr [EBX + 0x44]          ; 00427752
        ;   Label: LAB_00427752
    MOV dword ptr [EBX + 0x50],0x0      ; 00427755
    FMUL double ptr [0x005ccdce]        ; 0042775c | DAT_005ccdce
    MOV dword ptr [EBX + 0x48],0x3f666666 ; 00427762
    FSTP float ptr [EBX + 0x4c]         ; 00427769
    POP EBX                             ; 0042776c
    RET                                 ; 0042776d


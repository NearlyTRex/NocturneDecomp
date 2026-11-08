; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042c1e0(int param_1,float param_2)
;
;
; XREF[34]:
;   FUN_0040fb40 at 0040fcc7
;   FUN_004179b0 at 00417f34
;   FUN_00419b40 at 0041a08c
;   FUN_00425da0 at 00426a2b
;   FUN_00442a20 at 0044349d
;   FUN_00445130 at 004452a0
;   FUN_00455080 at 00456ff9
;   FUN_004628b0 at 00462a77
;   FUN_004c5350 at 004c54cd
;   FUN_004c6eb0 at 004c708e
;   ... and 24 more
;
; Referenced Globals:
;   undefined4 DAT_005b8226
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042c1e0
        ;   Label: FUN_0042c1e0
    CMP dword ptr [EAX + 0x27a8],0x0    ; 0042c1e4
    JZ 0x0042c210                       ; 0042c1eb
        ;   XREF to: 0042c210 (CONDITIONAL_JUMP)  ; LAB_0042c210
    MOV dword ptr [EAX + 0x2520],0x0    ; 0042c1ed
    MOV EDX,dword ptr [EAX + 0x2520]    ; 0042c1f7
    MOV dword ptr [EAX + 0x251c],EDX    ; 0042c1fd
    MOV EDX,dword ptr [EAX + 0x251c]    ; 0042c203
    MOV dword ptr [EAX + 0x2518],EDX    ; 0042c209
    RET                                 ; 0042c20f
    FLD float ptr [ESP + 0x8]           ; 0042c210
        ;   Label: LAB_0042c210
    FMUL float ptr [0x005b8226]         ; 0042c214 | DAT_005b8226
    FADD float ptr [EAX + 0x251c]       ; 0042c21a
    FSTP float ptr [EAX + 0x251c]       ; 0042c220
    RET                                 ; 0042c226


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00524710(int param_1)
;
;
; XREF[2]:
;   FUN_00524270 at 00524538
;   FUN_005247c0 at 00524832
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524710
        ;   Label: FUN_00524710
    PUSH ESI                            ; 00524711
    MOV EAX,dword ptr [ESP + 0xc]       ; 00524712
    LEA EDX,[EAX + 0x4]                 ; 00524716
    LEA ECX,[EAX + 0x18]                ; 00524719
    MOV dword ptr [EAX + 0x20],0x1      ; 0052471c
    MOV ESI,dword ptr [ECX]             ; 00524723
    MOV EBX,dword ptr [EDX]             ; 00524725
    MOV dword ptr [EDX],ESI             ; 00524727
    MOV dword ptr [ECX],EBX             ; 00524729
    LEA ECX,[EAX + 0x8]                 ; 0052472b
    LEA EDX,[EAX + 0x1c]                ; 0052472e
    MOV EBX,dword ptr [ECX]             ; 00524731
    MOV ESI,dword ptr [EDX]             ; 00524733
    MOV dword ptr [ECX],ESI             ; 00524735
    MOV dword ptr [EDX],EBX             ; 00524737
    MOV EDX,dword ptr [EAX + 0xc]       ; 00524739
    CMP EDX,0x5                         ; 0052473c
    JZ 0x00524753                       ; 0052473f
        ;   XREF to: 00524753 (CONDITIONAL_JUMP)  ; LAB_00524753
    CMP EDX,0x4                         ; 00524741
    JZ 0x0052475c                       ; 00524744
        ;   XREF to: 0052475c (CONDITIONAL_JUMP)  ; LAB_0052475c
    FLD float ptr [EAX + 0x14]          ; 00524746
        ;   Label: LAB_00524746
    FLD1                                ; 00524749
    FSUBRP                              ; 0052474b
    FSTP float ptr [EAX + 0x14]         ; 0052474d
    POP ESI                             ; 00524750
    POP EBX                             ; 00524751
    RET                                 ; 00524752
    MOV dword ptr [EAX + 0xc],0x4       ; 00524753
        ;   Label: LAB_00524753
    JMP 0x00524746                      ; 0052475a
        ;   XREF to: 00524746 (UNCONDITIONAL_JUMP)  ; LAB_00524746
    MOV dword ptr [EAX + 0xc],0x5       ; 0052475c
        ;   Label: LAB_0052475c
    FLD float ptr [EAX + 0x14]          ; 00524763
    FLD1                                ; 00524766
    FSUBRP                              ; 00524768
    FSTP float ptr [EAX + 0x14]         ; 0052476a
    POP ESI                             ; 0052476d
    POP EBX                             ; 0052476e
    RET                                 ; 0052476f


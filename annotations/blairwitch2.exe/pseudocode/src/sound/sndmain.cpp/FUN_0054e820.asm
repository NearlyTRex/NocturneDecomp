; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054e820(int param_1)
;
;
; XREF[1]:
;   FUN_0054e8c0 at 0054ebec
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e85a6
;   TerminatedCString s_SfxSlot_autoCalcDelayRem_005e85bb
;   undefined4 DAT_005fbc18
;   undefined4 DAT_0061bcb4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02648428
;   undefined4 DAT_02648438
;   undefined4 DAT_02648448
;   undefined4 DAT_026484b8
;   undefined4 DAT_0264901c
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e820
        ;   Label: FUN_0054e820
    SUB ESP,0x18                        ; 0054e821
    MOV EBX,dword ptr [ESP + 0x20]      ; 0054e824
    CMP dword ptr [0x0264901c],0x0      ; 0054e828 | DAT_0264901c
    JLE 0x0054e843                      ; 0054e82f
        ;   XREF to: 0054e843 (CONDITIONAL_JUMP)  ; LAB_0054e843
    TEST byte ptr [EBX + 0x4c],0x1      ; 0054e831
        ;   Label: LAB_0054e831
    JZ 0x0054e86a                       ; 0054e835
        ;   XREF to: 0054e86a (CONDITIONAL_JUMP)  ; LAB_0054e86a
    MOV dword ptr [EBX + 0x40],0x0      ; 0054e837
    ADD ESP,0x18                        ; 0054e83e
    POP EBX                             ; 0054e841
    RET                                 ; 0054e842
    PUSH ESI                            ; 0054e843
        ;   Label: LAB_0054e843
    MOV ECX,0x5e85a6                    ; 0054e844 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xab6                       ; 0054e849
    PUSH 0x5e85bb                       ; 0054e84e | = "SfxSlot::autoCalcDelayRemaining - mus..."
    MOV dword ptr [0x01d046a0],ECX      ; 0054e853 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0054e859 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0054e85f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0054e864
    POP ESI                             ; 0054e867
    JMP 0x0054e831                      ; 0054e868
        ;   XREF to: 0054e831 (UNCONDITIONAL_JUMP)  ; LAB_0054e831
    MOV EAX,[0x026484b8]                ; 0054e86a | DAT_026484b8
        ;   Label: LAB_0054e86a
    FLD double ptr [EBX + 0x4]          ; 0054e86f
    FSUB double ptr [EAX*0x8 + 0x2648428] ; 0054e872 | DAT_02648428
    FMUL ST0                            ; 0054e879
    FLD double ptr [EBX + 0xc]          ; 0054e87b
    FSUB double ptr [EAX*0x8 + 0x2648438] ; 0054e87e | DAT_02648438
    FMUL ST0                            ; 0054e885
    FLD double ptr [EBX + 0x14]         ; 0054e887
    FXCH                                ; 0054e88a
    FADDP ST2,ST0                       ; 0054e88c
    FSUB double ptr [EAX*0x8 + 0x2648448] ; 0054e88e | DAT_02648448
    FMUL ST0                            ; 0054e895
    FADDP                               ; 0054e897
    FSQRT                               ; 0054e899
    FMUL float ptr [0x0061bcb4]         ; 0054e89b | DAT_0061bcb4
    FLD1                                ; 0054e8a1
    FDIV float ptr [0x005fbc18]         ; 0054e8a3 | DAT_005fbc18
    FMULP                               ; 0054e8a9
    FSTP float ptr [EBX + 0x40]         ; 0054e8ab
    ADD ESP,0x18                        ; 0054e8ae
    POP EBX                             ; 0054e8b1
    RET                                 ; 0054e8b2


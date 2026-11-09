; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_0054e560(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0 at 0054ea42
;
; Referenced Globals:
;   undefined4 DAT_0061bc9c
;   undefined4 DAT_02648f40
;   undefined4 DAT_02648f48
;   undefined4 DAT_02648f80
;   undefined4 DAT_02648f88
;   undefined4 DAT_02648fc0
;   undefined4 DAT_02648fc8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e560
        ;   Label: sound_sndmain.cpp_FUN_0054e560
    PUSH ESI                            ; 0054e561
    PUSH EDI                            ; 0054e562
    SUB ESP,0x18                        ; 0054e563
    MOV EDI,dword ptr [0x0061bc9c]      ; 0054e566 | DAT_0061bc9c
    MOV ESI,dword ptr [ESP + 0x28]      ; 0054e56c
    XOR EBX,EBX                         ; 0054e570
    TEST EDI,EDI                        ; 0054e572
    JLE 0x0054e5c0                      ; 0054e574
        ;   XREF to: 0054e5c0 (CONDITIONAL_JUMP)  ; LAB_0054e5c0
    MOV ECX,ESI                         ; 0054e576
    XOR EDX,EDX                         ; 0054e578
    FLD double ptr [ESI + 0x4]          ; 0054e57a
        ;   Label: LAB_0054e57a
    FSUB double ptr [EDX + 0x2648f40]   ; 0054e57d | DAT_02648f40 | DAT_02648f48
    FMUL ST0                            ; 0054e583
    FLD double ptr [ESI + 0xc]          ; 0054e585
    FSUB double ptr [EDX + 0x2648f80]   ; 0054e588 | DAT_02648f80 | DAT_02648f88
    FMUL ST0                            ; 0054e58e
    FLD double ptr [ESI + 0x14]         ; 0054e590
    FXCH                                ; 0054e593
    FADDP ST2,ST0                       ; 0054e595
    FSUB double ptr [EDX + 0x2648fc0]   ; 0054e597 | DAT_02648fc0 | DAT_02648fc8
    FMUL ST0                            ; 0054e59d
    FADDP                               ; 0054e59f
    FSQRT                               ; 0054e5a1
    ADD ECX,0x4                         ; 0054e5a3
    ADD EDX,0x8                         ; 0054e5a6
    INC EBX                             ; 0054e5a9
    FSTP float ptr [ECX + 0x6c]         ; 0054e5aa
    CMP EBX,EDI                         ; 0054e5ad
    JL 0x0054e57a                       ; 0054e5af
        ;   XREF to: 0054e57a (CONDITIONAL_JUMP)  ; LAB_0054e57a
    LEA EAX,[EAX]                       ; 0054e5b1
    LEA EDX,[EDX]                       ; 0054e5b7
    LEA EAX,[EAX]                       ; 0054e5bd
    MOV dword ptr [0x0061bc9c],EDI      ; 0054e5c0 | DAT_0061bc9c
        ;   Label: LAB_0054e5c0
    ADD ESP,0x18                        ; 0054e5c6
    POP EDI                             ; 0054e5c9
    POP ESI                             ; 0054e5ca
    POP EBX                             ; 0054e5cb
    RET                                 ; 0054e5cc


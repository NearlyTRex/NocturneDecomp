; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005244b0(int param_1)
;
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 at 00524989
;
; Referenced Globals:
;   undefined4 DAT_005bea68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005244b0
        ;   Label: sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005244b0
    PUSH ESI                            ; 005244b1
    PUSH EDI                            ; 005244b2
    SUB ESP,0x18                        ; 005244b3
    MOV EDI,dword ptr [0x005bea68]      ; 005244b6 | DAT_005bea68
    MOV ESI,dword ptr [ESP + 0x28]      ; 005244bc
    XOR EBX,EBX                         ; 005244c0
    TEST EDI,EDI                        ; 005244c2
    JLE 0x00524510                      ; 005244c4
        ;   XREF to: 00524510 (CONDITIONAL_JUMP)  ; LAB_00524510
    MOV ECX,ESI                         ; 005244c6
    XOR EDX,EDX                         ; 005244c8
    FLD double ptr [ESI + 0x4]          ; 005244ca
        ;   Label: LAB_005244ca
    FSUB double ptr [EDX + 0x2dc83d8]   ; 005244cd
    FMUL ST0                            ; 005244d3
    FLD double ptr [ESI + 0xc]          ; 005244d5
    FSUB double ptr [EDX + 0x2dc8418]   ; 005244d8
    FMUL ST0                            ; 005244de
    FLD double ptr [ESI + 0x14]         ; 005244e0
    FXCH                                ; 005244e3
    FADDP ST2,ST0                       ; 005244e5
    FSUB double ptr [EDX + 0x2dc8458]   ; 005244e7
    FMUL ST0                            ; 005244ed
    FADDP                               ; 005244ef
    FSQRT                               ; 005244f1
    ADD ECX,0x4                         ; 005244f3
    ADD EDX,0x8                         ; 005244f6
    INC EBX                             ; 005244f9
    FSTP float ptr [ECX + 0x78]         ; 005244fa
    CMP EBX,EDI                         ; 005244fd
    JL 0x005244ca                       ; 005244ff
        ;   XREF to: 005244ca (CONDITIONAL_JUMP)  ; LAB_005244ca
    LEA EAX,[EAX]                       ; 00524501
    LEA EDX,[EDX]                       ; 00524507
    LEA EAX,[EAX]                       ; 0052450d
    MOV dword ptr [0x005bea68],EDI      ; 00524510 | DAT_005bea68
        ;   Label: LAB_00524510
    ADD ESP,0x18                        ; 00524516
    POP EDI                             ; 00524519
    POP ESI                             ; 0052451a
    POP EBX                             ; 0052451b
    RET                                 ; 0052451c


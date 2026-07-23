; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0(int param_1)
;
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 at 00524b4d
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00592dc6
;   string s_SfxSlot::autoCalcDelayRemaining_-_00592ddb
;   undefined4 DAT_005a2150
;   undefined4 DAT_005bea80
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc78e0
;   undefined4 DAT_02dc78e8
;   undefined4 DAT_02dc78f0
;   undefined4 DAT_02dc84bc
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005247a0
        ;   Label: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_005247a0
    SUB ESP,0x18                        ; 005247a1
    MOV EBX,dword ptr [ESP + 0x20]      ; 005247a4
    CMP dword ptr [0x02dc84bc],0x0      ; 005247a8 | DAT_02dc84bc
    JLE 0x005247ca                      ; 005247af
        ;   XREF to: 005247ca (CONDITIONAL_JUMP)  ; LAB_005247ca
    TEST byte ptr [EBX + 0x5c],0x1      ; 005247b1
        ;   Label: LAB_005247b1
    JZ 0x005247f1                       ; 005247b5
        ;   XREF to: 005247f1 (CONDITIONAL_JUMP)  ; LAB_005247f1
    MOV dword ptr [EBX + 0x4c],0x0      ; 005247b7
    MOV dword ptr [EBX + 0x50],0x0      ; 005247be
    ADD ESP,0x18                        ; 005247c5
    POP EBX                             ; 005247c8
    RET                                 ; 005247c9
    PUSH ESI                            ; 005247ca
        ;   Label: LAB_005247ca
    MOV ECX,0x592dc6                    ; 005247cb | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x935                       ; 005247d0
    PUSH 0x592ddb                       ; 005247d5 | = "SfxSlot::autoCalcDelayRemaining - mus..."
    MOV dword ptr [0x01cc4800],ECX      ; 005247da | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 005247e0 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005247e6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005247eb
    POP ESI                             ; 005247ee
    JMP 0x005247b1                      ; 005247ef
        ;   XREF to: 005247b1 (UNCONDITIONAL_JUMP)  ; LAB_005247b1
    FLD double ptr [EBX + 0x4]          ; 005247f1
        ;   Label: LAB_005247f1
    FSUB double ptr [0x02dc78e0]        ; 005247f4 | DAT_02dc78e0
    FMUL ST0                            ; 005247fa
    FLD double ptr [EBX + 0xc]          ; 005247fc
    FSUB double ptr [0x02dc78e8]        ; 005247ff | DAT_02dc78e8
    FMUL ST0                            ; 00524805
    FLD double ptr [EBX + 0x14]         ; 00524807
    FXCH                                ; 0052480a
    FADDP ST2,ST0                       ; 0052480c
    FSUB double ptr [0x02dc78f0]        ; 0052480e | DAT_02dc78f0
    FMUL ST0                            ; 00524814
    FADDP                               ; 00524816
    FSQRT                               ; 00524818
    FMUL double ptr [0x005bea80]        ; 0052481a | DAT_005bea80
    FDIV double ptr [0x005a2150]        ; 00524820 | DAT_005a2150
    FSTP double ptr [EBX + 0x4c]        ; 00524826
    ADD ESP,0x18                        ; 00524829
    POP EBX                             ; 0052482c
    RET                                 ; 0052482d


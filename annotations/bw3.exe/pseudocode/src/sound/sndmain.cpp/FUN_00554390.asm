; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00554390(int param_1)
;
;
; XREF[1]:
;   FUN_00554430 at 0055475c
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d308a
;   TerminatedCString s_SfxSlot_autoCalcDelayRem_005d309f
;   undefined4 DAT_005e4844
;   undefined4 DAT_00604240
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf2828
;   undefined4 DAT_02cf2838
;   undefined4 DAT_02cf2848
;   undefined4 DAT_02cf28b8
;   undefined4 DAT_02cf341c
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554390
        ;   Label: FUN_00554390
    SUB ESP,0x18                        ; 00554391
    MOV EBX,dword ptr [ESP + 0x20]      ; 00554394
    CMP dword ptr [0x02cf341c],0x0      ; 00554398 | DAT_02cf341c
    JLE 0x005543b3                      ; 0055439f
        ;   XREF to: 005543b3 (CONDITIONAL_JUMP)  ; LAB_005543b3
    TEST byte ptr [EBX + 0x4c],0x1      ; 005543a1
        ;   Label: LAB_005543a1
    JZ 0x005543da                       ; 005543a5
        ;   XREF to: 005543da (CONDITIONAL_JUMP)  ; LAB_005543da
    MOV dword ptr [EBX + 0x40],0x0      ; 005543a7
    ADD ESP,0x18                        ; 005543ae
    POP EBX                             ; 005543b1
    RET                                 ; 005543b2
    PUSH ESI                            ; 005543b3
        ;   Label: LAB_005543b3
    MOV ECX,0x5d308a                    ; 005543b4 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xab8                       ; 005543b9
    PUSH 0x5d309f                       ; 005543be | = "SfxSlot::autoCalcDelayRemaining - mus..."
    MOV dword ptr [0x01d71de0],ECX      ; 005543c3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 005543c9 | DAT_01d71de4
    CALL FUN_004e4330                   ; 005543cf
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 005543d4
    POP ESI                             ; 005543d7
    JMP 0x005543a1                      ; 005543d8
        ;   XREF to: 005543a1 (UNCONDITIONAL_JUMP)  ; LAB_005543a1
    MOV EAX,[0x02cf28b8]                ; 005543da | DAT_02cf28b8
        ;   Label: LAB_005543da
    FLD double ptr [EBX + 0x4]          ; 005543df
    FSUB double ptr [EAX*0x8 + 0x2cf2828] ; 005543e2 | DAT_02cf2828
    FMUL ST0                            ; 005543e9
    FLD double ptr [EBX + 0xc]          ; 005543eb
    FSUB double ptr [EAX*0x8 + 0x2cf2838] ; 005543ee | DAT_02cf2838
    FMUL ST0                            ; 005543f5
    FLD double ptr [EBX + 0x14]         ; 005543f7
    FXCH                                ; 005543fa
    FADDP ST2,ST0                       ; 005543fc
    FSUB double ptr [EAX*0x8 + 0x2cf2848] ; 005543fe | DAT_02cf2848
    FMUL ST0                            ; 00554405
    FADDP                               ; 00554407
    FSQRT                               ; 00554409
    FMUL float ptr [0x00604240]         ; 0055440b | DAT_00604240
    FLD1                                ; 00554411
    FDIV float ptr [0x005e4844]         ; 00554413 | DAT_005e4844
    FMULP                               ; 00554419
    FSTP float ptr [EBX + 0x40]         ; 0055441b
    ADD ESP,0x18                        ; 0055441e
    POP EBX                             ; 00554421
    RET                                 ; 00554422


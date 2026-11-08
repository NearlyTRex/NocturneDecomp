; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00572340(int param_1)
;
;
; XREF[5]:
;   FUN_004aa400 at 004aa4d0
;   FUN_004ce580 at 004cee44
;   FUN_0056fe10 at 0056fe15
;   FUN_0057d9e0 at 0057d9f1
;   FUN_00598d50 at 00598eb4
;
; Referenced Globals:
;   undefined4 DAT_00605b08
;   undefined4 DAT_00605b0c
;   undefined4 DAT_00623308
;   undefined4 DAT_02c745e0
;
; Called Functions:
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572340
        ;   Label: FUN_00572340
    MOV EBX,dword ptr [ESP + 0x8]       ; 00572341
    PUSH 0x150                          ; 00572345
    PUSH 0x0                            ; 0057234a
    PUSH EBX                            ; 0057234c
    CALL FUN_005bfb70                   ; 0057234d
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    FLD float ptr [0x00623308]          ; 00572352 | DAT_00623308
    FLD float ptr [0x00605b08]          ; 00572358 | DAT_00605b08
    FMUL ST1                            ; 0057235e
    FLD float ptr [0x02c745e0]          ; 00572360 | DAT_02c745e0
    FMUL ST2                            ; 00572366
    FLD float ptr [0x00605b0c]          ; 00572368 | DAT_00605b0c
    FMULP ST3                           ; 0057236e
    ADD ESP,0xc                         ; 00572370
    MOV EAX,EBX                         ; 00572373
    FXCH                                ; 00572375
    FSTP float ptr [EBX + 0x114]        ; 00572377
    FSTP float ptr [EBX + 0x118]        ; 0057237d
    FSTP float ptr [EBX + 0x11c]        ; 00572383
    POP EBX                             ; 00572389
    RET                                 ; 0057238a


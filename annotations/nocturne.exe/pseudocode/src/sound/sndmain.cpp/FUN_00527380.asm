; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00527380(int param_1)
;
;
; XREF[7]:
;   FUN_004d12e0 at 004d1420
;   FUN_00524630 at 00524672
;   FUN_005289f0 at 00528c12
;   FUN_00528c80 at 00528e0b
;   FUN_0052ddf0 at 0052de9f
;   FUN_0052dff0 at 0052e25b
;   FUN_0052e850 at 0052e855
;
; Referenced Globals:
;   string s_..\\sound\\sndmain.cpp_00593611
;   string s_getSfxChannelVol_-_invalid_chann_00593626
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527380
        ;   Label: FUN_00527380
    MOV EBX,dword ptr [ESP + 0x8]       ; 00527381
    TEST EBX,EBX                        ; 00527385
    JL 0x00527399                       ; 00527387
        ;   XREF to: 00527399 (CONDITIONAL_JUMP)  ; LAB_00527399
    CMP EBX,0x20                        ; 00527389
    JGE 0x00527399                      ; 0052738c
        ;   XREF to: 00527399 (CONDITIONAL_JUMP)  ; LAB_00527399
    MOV EBX,dword ptr [EBX*0x4 + 0x2dc7958] ; 0052738e
    MOV EAX,EBX                         ; 00527395
    POP EBX                             ; 00527397
    RET                                 ; 00527398
    PUSH EBX                            ; 00527399
        ;   Label: LAB_00527399
    MOV EDX,0x593611                    ; 0052739a | = "..\\sound\\sndmain.cpp"
    MOV ECX,0xf47                       ; 0052739f
    PUSH 0x593626                       ; 005273a4 | = "getSfxChannelVol - invalid channel in..."
    MOV dword ptr [0x01cc4800],EDX      ; 005273a9 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005273af | DAT_01cc4804
    CALL FUN_004c8440                   ; 005273b5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 005273ba
    MOV EBX,dword ptr [EBX*0x4 + 0x2dc7958] ; 005273bd
    MOV EAX,EBX                         ; 005273c4
    POP EBX                             ; 005273c6
    RET                                 ; 005273c7

